/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100584e70; end: 100584e77; -[SIGHeaderItem dismissalAction] */

undefined8 FUN_100584e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100584e78; end: 1005850cb; -[SIGHeaderTitleRowAccessoryViewContainer setAccessoryView:withStyle:] */

void FUN_100584e78(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  FUN_10010fab4(param_3,PTR_DAT_1126a5cc0);
  lVar7 = param_3;
  if ((int)lVar2 == 0) {
    lVar7 = 0;
  }
  func_0x000107c61174(lVar7);
  lVar2 = param_1 + 0x60;
  func_0x000107c61148(lVar2);
  func_0x000107c59ebc(lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar2);
  puVar1 = PTR_DAT_1126a5cd0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  FUN_10010fab4(param_3,puVar1);
  lVar7 = param_3;
  if ((int)lVar2 == 0) {
    lVar7 = 0;
  }
  func_0x000107c61174(lVar7);
  func_0x000107c61170(param_3);
  func_0x000107c5524c(lVar7);
  func_0x000107c61170(lVar7);
  puVar3 = PTR_PTR_1126df778;
  func_0x000107c610f4(PTR_PTR_1126df778);
  func_0x000107c4611c();
  *(undefined8 *)(param_1 + 0x48) = param_4;
  func_0x000107c611a0(param_1 + 0x40,puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  func_0x000107c61170(uVar4);
  puVar1 = PTR_DAT_1126a5cc8;
  lVar7 = *(long *)(param_1 + 0x50);
  if (lVar7 != 0) {
    func_0x000107c61174(lVar7);
    lVar5 = lVar7;
    FUN_10010fab4(lVar7,puVar1);
    lVar2 = lVar7;
    if ((int)lVar5 == 0) {
      lVar2 = 0;
    }
    func_0x000107c61174(lVar2);
    func_0x000107c61170(lVar7);
    lVar7 = lVar2;
    func_0x000107c44d60();
    if ((int)lVar7 != 0) {
      lVar7 = param_1 + 0x40;
      func_0x000107c61148(lVar7);
      lVar5 = lVar2;
      func_0x000107c5ba64(lVar2);
      func_0x000107c61180();
      func_0x000107c3f778(lVar7);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar7);
      param_1 = param_1 + 0x40;
      func_0x000107c61148(param_1);
      goto LAB_10058509c;
    }
    func_0x000107c61170(lVar2);
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61174(param_3);
  func_0x000107c4e5fc(puVar1);
  param_1 = param_1 + 0x40;
  func_0x000107c61148(param_1);
  lVar2 = param_3;
LAB_10058509c:
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005850cc; end: 1005850d7;  */

void FUN_1005850cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setUntransitionableView__112587cf0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1005850d8; end: 10058543f; -[SIGHeaderTitleRowAccessoryViewContainer _setUntransitionableView:] */

void FUN_1005850d8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  func_0x000107c521e8(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c4ff34(*(undefined8 *)(param_1 + 0x50));
  puVar9 = PTR_PTR_1126b6550;
  if (param_3 == (undefined *)0x0) {
    func_0x000107c5378c(0,*(undefined8 *)(param_1 + 0x18));
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar9);
    puVar1 = param_3;
    func_0x000107c6115c(param_3,puVar9);
    puStack_88 = param_3;
    if (((ulong)puVar1 & 1) == 0) {
      puStack_88 = (undefined *)0x0;
    }
    func_0x000107c61174();
    func_0x000107c61170(param_3);
    puVar9 = param_3;
    if (((ulong)puVar1 & 1) != 0) {
      puVar9 = PTR_PTR_1126b6550;
      func_0x000107c610f4();
      puVar1 = param_3;
      func_0x000107c3ee7c(param_3);
      func_0x000107c61180();
      func_0x000107c45ad0();
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar1);
      puVar1 = PTR_PTR_1126b6550;
      func_0x000107c61174(puVar9);
      func_0x000107c61158(puVar1);
      puVar2 = puVar9;
      func_0x000107c6115c(puVar9,puVar1);
      puVar1 = puVar9;
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      func_0x000107c61174(puVar1);
      func_0x000107c61170(puVar9);
      func_0x000107c5a020(puVar1);
      func_0x000107c61170(puVar1);
    }
    func_0x000107c4ff34(puVar9);
    func_0x000107c5a050(puVar9);
    lVar3 = param_1 + 8;
    func_0x000107c61148(lVar3);
    func_0x000107c3d89c();
    func_0x000107c61170(lVar3);
    puVar1 = puVar9;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c498ec(puVar9);
    puVar2 = puVar1;
    func_0x000107c40290();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar1);
    func_0x000107c498ec(puVar9);
    func_0x000107c5378c(*(undefined8 *)(param_1 + 0x18));
    puStack_90 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = puVar9;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c4acb0(uVar8);
      func_0x000107c61180();
    }
    else {
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c5ce8c(uVar8);
      func_0x000107c61180();
    }
    puVar2 = puVar1;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar4 = puVar9;
    puStack_78 = puVar2;
    func_0x000107c3f764();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c3f764(uVar5);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puStack_90);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puStack_88);
  }
  func_0x000107c521e8(*(undefined8 *)(param_1 + 0x18));
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar9;
  func_0x000107c61170(uVar8);
  puVar9 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  pcStack_98 = FUN_100585440;
  lStack_b0 = param_1;
  puStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c3fee4();
  puStack_b8 = PTR_PTR_11270b5d0;
  puStack_c0 = puVar9;
  func_0x000107c61154(&puStack_c0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100585440; end: 10058548f; -[SIGAnimationContext dealloc] */

void FUN_100585440(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c3fee4(param_1,param_2,(*(byte *)(param_1 + 8) ^ 0xff) & 1);
  puStack_28 = PTR_PTR_11270b5d0;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100585490; end: 1005855a7; -[SIGAnimationContext completeAnimation:] */

void FUN_100585490(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar4 = &puStack_80;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61184();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107c61170(uVar2);
  lVar3 = param_1 + 0x10;
  func_0x000107c61148();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100585638;
  puStack_68 = &UNK_110864938;
  uStack_60 = uVar2;
  lStack_58 = lVar3;
  uStack_50 = uVar1;
  uStack_48 = param_3;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61184(&puStack_80);
  FUN_1000d76cc("APPSTORE",ppuVar4);
  func_0x000107c611a0(param_1 + 0x10,0);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(lStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1005855a8; end: 10058562b;  */

void FUN_1005855a8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10058562c;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_2;
  func_0x000107c61174(param_2);
  ppuVar1 = &puStack_48;
  func_0x000107c61184(ppuVar1);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10058562c; end: 100585637;  */

void FUN_10058562c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100585634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100585638; end: 100585757;  */

void FUN_100585638(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar8);
  lVar3 = lVar8;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar8);
      }
      func_0x000107c3fee4(*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar8;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar8);
  uVar6 = (ulong)*(byte *)(param_1 + 0x38);
  func_0x000107c3fee4(*(undefined8 *)(param_1 + 0x28));
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,*(undefined1 *)(param_1 + 0x38));
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c4fe7c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
  puVar2 = PTR_DAT_1126a5cc8;
  if (((uVar6 & 1) == 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    uVar9 = *(ulong *)(lVar3 + 0x30);
    func_0x000107c61174(uVar9);
    uVar4 = uVar9;
    FUN_10010fab4(uVar9,puVar2);
    uVar6 = uVar9;
    if ((int)uVar4 == 0) {
      uVar6 = 0;
    }
    func_0x000107c61174(uVar6);
    func_0x000107c61170(uVar9);
    uVar4 = uVar6;
    func_0x000107c44d60();
    if ((uVar4 & 1) == 0) {
      func_0x000107c3c5c8(lVar3);
    }
    func_0x000107c61170(uVar6);
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  func_0x000107c61170(uVar5);
  func_0x000107c498ec(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c5378c(*(undefined8 *)(lVar3 + 0x18));
  func_0x000107c498ec(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c5378c(*(undefined8 *)(lVar3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(lVar3 + 0x40,0);
  return;
}



/* Entry: 100585758; end: 100585817; -[SIGHeaderTitleRowAccessoryViewContainer completeAnimation:] */

void FUN_100585758(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_1126a5cc8;
  if (((param_3 & 1) == 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    func_0x000107c61174(uVar5);
    uVar3 = uVar5;
    FUN_10010fab4(uVar5,puVar2);
    uVar1 = uVar5;
    if ((int)uVar3 == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(uVar5);
    uVar3 = uVar1;
    func_0x000107c44d60();
    if ((uVar3 & 1) == 0) {
      func_0x000107c3c5c8(param_1);
    }
    func_0x000107c61170(uVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x000107c61170(uVar4);
  func_0x000107c498ec(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c5378c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c498ec(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c5378c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,0);
  return;
}



/* Entry: 100585818; end: 10058584f; -[SIGAnimationContext .cxx_destruct] */

void FUN_100585818(long param_1)

{
  func_0x000107c6119c(param_1 + 0x20,0);
  func_0x000107c6119c(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 100585850; end: 1005858ef; -[SIGHeaderTitleRow headerItem:didChangeCustomLeadingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100585850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c410bc(param_3);
  func_0x000107c550d8(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c3cc1c(param_1);
  func_0x000107c611b0();
  func_0x000107c3c148(param_1);
  if (*(char *)(param_1 + _DAT_112794dbc) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateConstraints_1126509f8);
    return;
  }
  return;
}



/* Entry: 1005858f0; end: 1005858f7; -[SIGHeaderItem customLeadingAccessoryViewHidden] */

undefined1 FUN_1005858f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 1005858f8; end: 10058596b; -[SIGHeaderTitleRow _postAnimationUpdatesForAccessoryContainer:] */

/* WARNING: Possible PIC construction at 0x000100585954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100585958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005858f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_112794da8);
  func_0x000107c61174(param_3);
  func_0x000107c5524c(param_3,param_2,uVar1);
  param_1 = param_1 + _DAT_112794de0;
  func_0x000107c61148(param_1);
  func_0x000107c59ebc(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10058596c; end: 100585a4f; -[SIGHeaderTitleRowAccessoryViewContainer setIgnoresRTL:] */

/* WARNING: Possible PIC construction at 0x0001005859e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100585a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005859e4) */
/* WARNING: Removing unreachable block (ram,0x000100585a1c) */
/* WARNING: Removing unreachable block (ram,0x000100585a30) */

void FUN_10058596c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((uint)*(byte *)(param_1 + 0x11) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + 0x11) = (char)param_3;
  func_0x000107c521e8(*(undefined8 *)(param_1 + 0x38),param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = param_1 + 8;
  func_0x000107c61148(lVar1);
  lVar2 = param_1;
  func_0x000107c3c140(param_1,param_2,uVar3,lVar1,*(undefined1 *)(param_1 + 0x10),param_3);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100585a50; end: 100585adb; -[SIGHeaderTitleRowAccessoryViewContainer setTooltipPresenter:] */

/* WARNING: Possible PIC construction at 0x000100585aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100585ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100585aa8) */
/* WARNING: Removing unreachable block (ram,0x000100585ac8) */

void FUN_100585a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c611a0(param_1 + 0x60,param_3);
  puVar2 = PTR_DAT_1126a5cc0;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174(uVar4);
  uVar3 = uVar4;
  FUN_10010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100585adc; end: 100585b1f; -[SIGHeaderTitleRow headerItem:didChangeCustomLeadingAccessoryViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100585adc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794dac);
  func_0x000107c3cf20(uVar1);
  func_0x000107c61180();
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100585b20; end: 100585b27; -[SIGHeaderTitleRowAccessoryViewContainer accessoryView] */

undefined8 FUN_100585b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100585b28; end: 100585bc7; -[SIGHeaderTitleRow headerItem:didChangeTrailingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100585b28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c5ce88(param_3);
  func_0x000107c550d8(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c3cd0c(param_1);
  func_0x000107c611b0();
  func_0x000107c3c148(param_1);
  if (*(char *)(param_1 + _DAT_112794dbc) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateConstraints_1126509f8);
    return;
  }
  return;
}



/* Entry: 100585bc8; end: 100585bcf; -[SIGHeaderItem trailingAccessoryViewHidden] */

undefined1 FUN_100585bc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 100585bd0; end: 100585c87; -[SIGHeaderTitleRow _updateTrailingAccessoryViewWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100585bd0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112794db4);
  func_0x000107c5ce84();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b6550;
  func_0x000107c61158(PTR_PTR_1126b6550);
  uVar4 = uVar2;
  func_0x000107c6115c(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c5a020(uVar1);
  func_0x000107c61170(uVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112794db0);
  func_0x000107c52128(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 100585c88; end: 100585c8f; -[SIGHeaderItem trailingAccessoryView] */

undefined8 FUN_100585c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100585c90; end: 100585cd3; -[SIGHeaderTitleRow headerItem:didChangeTrailingAccessoryViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100585c90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794db0);
  func_0x000107c3cf20(uVar1);
  func_0x000107c61180();
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100585cd4; end: 100585d53; -[SIGHeaderTitleRow headerItem:didChangeAllowsFullWidthForTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100585cd4(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  *(byte *)(param_1 + _DAT_112794dbc) = param_4;
  if ((param_4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + _DAT_112794db4);
    func_0x000107c4eb70(lVar2);
    bVar1 = lVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  func_0x000107c521e8(*(undefined8 *)(param_1 + _DAT_112794dd0),param_2,bVar1);
  func_0x000107c3ccf0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100585d54; end: 100585fdf; -[SIGHeaderTitleRow _updateTitleWidthAnchorConstraint] */

/* WARNING: Possible PIC construction at 0x000100585e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100585ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100585fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100585ef8) */
/* WARNING: Removing unreachable block (ram,0x000100585f30) */
/* WARNING: Removing unreachable block (ram,0x000100585f88) */
/* WARNING: Removing unreachable block (ram,0x000100585f8c) */
/* WARNING: Removing unreachable block (ram,0x000100585f90) */
/* WARNING: Removing unreachable block (ram,0x000100585fa4) */
/* WARNING: Removing unreachable block (ram,0x000100585fa8) */
/* WARNING: Removing unreachable block (ram,0x000100585fac) */
/* WARNING: Removing unreachable block (ram,0x000100585f04) */
/* WARNING: Removing unreachable block (ram,0x000100585e3c) */
/* WARNING: Removing unreachable block (ram,0x000100585e8c) */
/* WARNING: Removing unreachable block (ram,0x000100585e90) */
/* WARNING: Removing unreachable block (ram,0x000100585e94) */
/* WARNING: Removing unreachable block (ram,0x000100585eb4) */
/* WARNING: Removing unreachable block (ram,0x000100585eb8) */
/* WARNING: Removing unreachable block (ram,0x000100585f18) */
/* WARNING: Removing unreachable block (ram,0x000107c3accc) */
/* WARNING: Removing unreachable block (ram,0x00010bdc63c0) */
/* WARNING: Removing unreachable block (ram,0x000100585ebc) */
/* WARNING: Removing unreachable block (ram,0x000107c3acf0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc6f60) */
/* WARNING: Removing unreachable block (ram,0x000100585fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100585d54(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794db4;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x000107c4eb70();
  iVar1 = _DAT_112794dc4;
  lVar3 = param_1;
  if (lVar2 == 1) {
    func_0x000107c4fec0(param_1);
    func_0x000107c3b99c();
    func_0x000107c61180();
  }
  else {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x000107c4eb70();
    iVar1 = _DAT_112794dc8;
    if (lVar2 != 2) {
      if (*(char *)(param_1 + _DAT_112794dbc) == '\x01') {
        uVar4 = *(undefined8 *)(param_1 + _DAT_112794dcc);
      }
      else {
        func_0x000107c3b420(param_1);
        uVar4 = *(undefined8 *)(param_1 + _DAT_112794ddc);
      }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setActive__112636340,0);
      return;
    }
    func_0x000107c4fec0(param_1);
    func_0x000107c3b998();
    func_0x000107c61180();
  }
  lVar2 = (long)iVar1;
  uVar4 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = lVar3;
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 100585fe0; end: 100586057; -[SIGHeaderTitleRow _deactivateConstraintsIfNecessary:] */

/* WARNING: Possible PIC construction at 0x00010058602c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100586030) */
/* WARNING: Removing unreachable block (ram,0x000100586034) */

void FUN_100585fe0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 != 0) {
    func_0x000107c4d9a4(param_3,param_2,0);
    func_0x000107c61180();
    func_0x000107c499a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100586058; end: 1005860bf; -[SIGHeaderTitleRow headerItem:didChangeIgnoreRTL:] */

/* WARNING: Possible PIC construction at 0x0001005860a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005860a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((uint)*(byte *)(param_1 + _DAT_112794da8) == (uint)param_4) {
    return;
  }
  *(char *)(param_1 + _DAT_112794da8) = (char)param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1a9e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794dac),PTR_s_setIgnoresRTL__1126481a8,param_4);
  return;
}



/* Entry: 1005860c0; end: 1005861d7; -[SIGHeaderTitleRow setTooltipPresenter:] */

/* WARNING: Possible PIC construction at 0x000100586108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058615c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005861a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005861bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100586174) */
/* WARNING: Removing unreachable block (ram,0x000100586198) */
/* WARNING: Removing unreachable block (ram,0x000100586160) */
/* WARNING: Removing unreachable block (ram,0x00010058610c) */
/* WARNING: Removing unreachable block (ram,0x0001005861c0) */
/* WARNING: Removing unreachable block (ram,0x000100586110) */
/* WARNING: Removing unreachable block (ram,0x00010058614c) */
/* WARNING: Removing unreachable block (ram,0x0001005861ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005860c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  param_1 = param_1 + _DAT_112794de0;
  func_0x000107c61148(param_1);
  func_0x000107c49cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1005861d8; end: 100586223; -[SIGHeaderItemView headerItem:didChangeAlpha:] */

void FUN_1005861d8(double param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x000107c3dc40();
  if (param_1 != dVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 100586224; end: 10058626b; -[SIGHeaderItemView headerItem:didChangeHidden:] */

void FUN_100586224(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c49eac();
  if (param_4 != (int)uVar1) {
    func_0x000107c550d8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    return;
  }
  return;
}



/* Entry: 10058626c; end: 1005862a3; -[SIGHeaderItemView headerItem:didChangeHeaderTitleRowYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058626c(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c436dc(param_5);
  *(double *)(param_2 + _DAT_112794cd4) = (double)param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 1005862a4; end: 100586323; -[SIGHeaderItemView invalidateIntrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005862a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c3cca8();
  puStack_28 = PTR_PTR_11270b560;
  lStack_30 = param_3;
  func_0x000107c61154(&lStack_30,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  func_0x000107c56a14(param_3);
  lVar1 = param_3 + _DAT_112794cd8;
  func_0x000107c61148(lVar1);
  func_0x000107c498ec(param_3);
  func_0x000107c44d5c(param_2,lVar1);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100586324; end: 1005863bf; -[SIGHeaderItemView _updateScrollBasedValues] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586324(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + _DAT_112794cb0) == '\x01') &&
     (*(char *)(param_1 + _DAT_112794cb8) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794ca8);
    func_0x000107c3ca78(param_1);
    func_0x000107c59e3c(uVar1);
  }
  lVar2 = *(long *)(param_1 + _DAT_112794cc0);
  if ((lVar2 != 0) && (*(char *)(param_1 + _DAT_112794cc4) == '\x01')) {
    func_0x000107c3af30(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setOpacity__112652d18);
    return;
  }
  return;
}



/* Entry: 1005863c0; end: 100586443; -[SIGHeaderItemView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1005863c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_3 + (long)_DAT_112794cd0) != 0) {
    uVar1 = param_3;
    func_0x000107c49eac();
    if ((int)uVar1 != 0) {
      uVar1 = param_3;
      func_0x000107c40f48();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c3d9bc();
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_100586414;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be3d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__intrinsicTotalSize_11256cf28);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
LAB_100586414:
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 100586444; end: 10058647b; -[SIGHeaderItemView _intrinsicTotalSize] */

void FUN_100586444(undefined8 param_1)

{
  func_0x000107c3c3b4();
  func_0x000107c3ba6c(param_1);
  return;
}



/* Entry: 10058647c; end: 10058674f; -[SIGHeaderItemView _resolvedSafeAreaInsets] */

double FUN_10058647c(double param_1,double param_2,double param_3,undefined8 param_4,ulong param_5,
                    undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x000107c515a0();
  if (0.0 < param_1) {
    return param_1;
  }
  uVar1 = param_5;
  dVar5 = param_1;
  func_0x000107c5e3f8(param_5);
  func_0x000107c61180();
  func_0x000107c515a0();
  dVar6 = dVar5;
  func_0x000107c61170(uVar1);
  dVar7 = dVar6;
  dVar8 = param_1;
  if (0.0 < dVar5) {
    uVar1 = param_5;
    func_0x000107c5e3f8(param_5);
    func_0x000107c61180();
    func_0x000107c515a0();
    dVar7 = dVar6;
    func_0x000107c61170(uVar1);
    uVar1 = param_5;
    func_0x000107c3ec60();
    func_0x000107c609e0();
    if ((uVar1 & 1) != 0) {
      return param_1;
    }
    func_0x000107c3ec60(param_5);
    uVar1 = param_5;
    func_0x000107c5e3f8(param_5);
    func_0x000107c61180();
    func_0x000107c40740(dVar7,param_2,param_3,param_4,param_5,param_6,uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c609c8(dVar7,param_2,param_3,param_4);
    param_2 = dVar6 * 0.5;
    param_3 = dVar6;
    dVar8 = dVar6;
    if (param_2 <= dVar7) {
      return param_1;
    }
  }
  dVar5 = dVar8;
  if ((dVar8 <= 0.0) &&
     (func_0x000107c51768(PTR__OBJC_CLASS___UIScreen_1126aea10), dVar5 = dVar7, dVar7 <= 0.0)) {
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (param_5 != 0) {
      uVar1 = param_5;
      func_0x000107c5e400();
      func_0x000107c61180();
      if (uVar1 == 0) {
        func_0x000107c61170(param_5);
      }
      else {
        uVar2 = uVar1;
        func_0x000107c5bd08();
        func_0x000107c61180();
        dVar5 = 0.0;
        if ((uVar2 != 0) && (uVar3 = uVar2, func_0x000107c4a508(), (uVar3 & 1) == 0)) {
          func_0x000107c5bd04(uVar2);
          dVar5 = dVar7;
          func_0x000107c609cc();
          func_0x000107c609b0(dVar7,param_2,param_3,param_4);
          if (dVar7 <= dVar5) {
            dVar5 = dVar7;
          }
        }
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(param_5);
        if (0.0 < dVar5) {
          return dVar5;
        }
      }
    }
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c61180();
    func_0x000107c5bd04();
    func_0x000107c61170(puVar4);
    dVar5 = dVar7;
    func_0x000107c609cc(dVar7,param_2,param_3,param_4);
    func_0x000107c609b0(dVar7,param_2,param_3,param_4);
    if (dVar7 <= dVar5) {
      dVar5 = dVar7;
    }
    if (dVar5 <= 0.0) {
      dVar5 = dVar8;
    }
  }
  return dVar5;
}



/* Entry: 100586750; end: 10058675b;  */

void FUN_100586750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdfe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e18f0,PTR_s_headerSafeInsets_1125d5948);
  return;
}



/* Entry: 10058675c; end: 100586767; +[SCSafeAreaInsetsRouter headerSafeInsets] */

void FUN_10058675c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdfe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e1880,PTR_s_headerSafeInsets_1125d5948);
  return;
}



/* Entry: 100586768; end: 100586787; +[SCSafeAreaInsetsModern headerSafeInsets] */

void FUN_100586768(void)

{
  func_0x000107c515a0();
  return;
}



/* Entry: 100586788; end: 1005867fb; -[SIGHeaderItemView _intrinsicContentSize] */

undefined1  [16]
FUN_100586788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x000107c3b774();
  uVar1 = param_1;
  func_0x000107c3b770(param_4);
  uVar2 = uVar1;
  func_0x000107c3b76c(param_4);
  uVar2 = NEON_fminnm(uVar1,uVar2);
  uVar1 = param_4;
  func_0x000107c3bb94(param_4);
  func_0x000107c44da0(param_1,uVar2,param_4,param_5,uVar1);
  func_0x000107c3ec60(param_4);
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = param_3;
  return auVar3;
}



/* Entry: 1005867fc; end: 10058686f; -[SIGHeaderItemView _fractionalSearchShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1005867fc(long param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((((*(char *)(param_1 + _DAT_112794cb0) == '\x01') &&
       ((*(byte *)(param_1 + _DAT_112794cb4) & 1) == 0)) &&
      (dVar1 = 1.0, *(char *)(param_1 + _DAT_112794cb8) == '\x01')) &&
     (dVar1 = (double)NEON_fminnm((double)*(long *)(param_1 + _DAT_112794cbc) / -45.0 + 1.0,
                                  0x3ff0000000000000), dVar1 <= 0.0)) {
    dVar1 = 0.0;
  }
  return dVar1;
}



/* Entry: 100586870; end: 1005868e3; -[SIGHeaderItemView _fractionalBottomAccessoryViewShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100586870(long param_1)

{
  double dVar1;
  
  if (*(long *)(param_1 + _DAT_112794cc0) != 0) {
    dVar1 = 1.0;
    if (((*(char *)(param_1 + _DAT_112794cc4) == '\x01') &&
        ((*(byte *)(param_1 + _DAT_112794cc8) & 1) == 0)) &&
       (dVar1 = (double)NEON_fminnm((double)*(long *)(param_1 + _DAT_112794cbc) / -48.0 + 1.0,
                                    0x3ff0000000000000), dVar1 <= 0.0)) {
      dVar1 = 0.0;
    }
    return dVar1;
  }
  return 0.0;
}



/* Entry: 1005868e4; end: 100586957; -[SIGHeaderItemView _fractionalBottomAccessoryViewHeightShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1005868e4(long param_1)

{
  double dVar1;
  
  if (*(long *)(param_1 + _DAT_112794cc0) != 0) {
    dVar1 = 1.0;
    if (((*(char *)(param_1 + _DAT_112794ccc) == '\x01') &&
        ((*(byte *)(param_1 + _DAT_112794cc8) & 1) == 0)) &&
       (dVar1 = (double)NEON_fminnm((double)*(long *)(param_1 + _DAT_112794cbc) / -48.0 + 1.0,
                                    0x3ff0000000000000), dVar1 <= 0.0)) {
      dVar1 = 0.0;
    }
    return dVar1;
  }
  return 0.0;
}



/* Entry: 100586958; end: 100586967; -[SIGHeaderItemView _isShowingSubheaderRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100586958(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794c8c);
}



/* Entry: 100586968; end: 100586a23; -[SIGHeaderItemView heightAtFractionalSearchShown:fractionalBottomAccessoryViewShown:showingSubheader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100586968(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = 52.0;
  dVar4 = 52.0;
  if (*(char *)(param_3 + _DAT_112794cb4) == '\0') {
    dVar4 = param_1 * 45.0 + 52.0;
  }
  lVar2 = (long)_DAT_112794ca0;
  uVar1 = *(ulong *)(param_3 + lVar2);
  func_0x000107c49eac();
  if ((uVar1 & 1) == 0) {
    func_0x000107c498ec(*(undefined8 *)(param_3 + lVar2));
    dVar4 = dVar4 + dVar3;
  }
  lVar2 = (long)_DAT_112794cc0;
  uVar1 = *(ulong *)(param_3 + lVar2);
  func_0x000107c49eac();
  if ((uVar1 & 1) == 0) {
    func_0x000107c498ec(*(undefined8 *)(param_3 + lVar2));
    dVar4 = dVar4 + (dVar3 + 7.0) * param_2;
  }
  return dVar4 + *(double *)(param_3 + _DAT_112794cd4) +
         *(double *)(param_3 + _DAT_112794c94 + 0x10);
}



/* Entry: 100586a24; end: 100586a6b; -[SIGHeaderItemView headerItem:didChangeTitleCollapsesWhenScrolled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586a24(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112794cb8) == param_4) {
    return;
  }
  *(char *)(param_1 + _DAT_112794cb8) = (char)param_4;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794ca8);
  func_0x000107c3ca78();
                    /* WARNING: Could not recover jumptable at 0x00010c216450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setTitleOpacity__112663338);
  return;
}



/* Entry: 100586a6c; end: 100586ab3; -[SIGHeaderItemView headerItem:didChangeTitleAlwaysCollapsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586a6c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112794cb4) == param_4) {
    return;
  }
  *(char *)(param_1 + _DAT_112794cb4) = (char)param_4;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794ca8);
  func_0x000107c3ca78();
                    /* WARNING: Could not recover jumptable at 0x00010c216450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setTitleOpacity__112663338);
  return;
}



/* Entry: 100586ab4; end: 100586acf; -[SIGHeaderItemView headerItem:didChangeBottomAccessoryViewFadesWhenScrolled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586ab4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (*(byte *)(param_1 + _DAT_112794cc4) != param_4) {
    *(char *)(param_1 + _DAT_112794cc4) = (char)param_4;
  }
  return;
}



/* Entry: 100586ad0; end: 100586aeb; -[SIGHeaderItemView headerItem:didChangeBottomAccessoryViewCollapsesWhenScrolled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586ad0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (*(byte *)(param_1 + _DAT_112794ccc) != param_4) {
    *(char *)(param_1 + _DAT_112794ccc) = (char)param_4;
  }
  return;
}



/* Entry: 100586aec; end: 100586b07; -[SIGHeaderItemView headerItem:didChangeScrollViewScrollingToTopOnTappingStatusBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586aec(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (*(byte *)(param_1 + _DAT_112794cc8) != param_4) {
    *(char *)(param_1 + _DAT_112794cc8) = (char)param_4;
  }
  return;
}



/* Entry: 100586b08; end: 100586c23; -[SIGHeaderItemView headerItem:didChangeSearchFieldVisible:] */

/* WARNING: Possible PIC construction at 0x000100586b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100586bbc) */
/* WARNING: Removing unreachable block (ram,0x000100586b84) */
/* WARNING: Removing unreachable block (ram,0x000100586b90) */
/* WARNING: Removing unreachable block (ram,0x000100586b98) */
/* WARNING: Removing unreachable block (ram,0x000100586be4) */
/* WARNING: Removing unreachable block (ram,0x000100586bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586b08(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794cac);
  func_0x000107c550d8(uVar1,param_2,param_4 ^ 1);
  if (*(byte *)(param_1 + _DAT_112794cb0) != param_4) {
    *(char *)(param_1 + _DAT_112794cb0) = (char)param_4;
    func_0x000107c30a7c();
    func_0x000107c61180();
    func_0x000107c51acc();
    func_0x000107c61180();
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100586c24; end: 100586c93; -[SIGHeaderItemView headerItem:didChangeTabBarItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586c24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794ca0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x000107c61174(param_4);
  func_0x000107c59b84(uVar1);
  func_0x000107c40808(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 100586c94; end: 100586c9b; -[SCCarrierNetworkInfoProviderImpl _activeDataServiceIdentifier] */

void FUN_100586c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dataServiceIdentifier_1125b6a88);
  return;
}



/* Entry: 100586c9c; end: 100586cab; -[SIGHeaderItemView headerItem:didChangeShowsSectionTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + _DAT_112794c8c) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 100586cac; end: 100586db7; -[SIGHeaderItemView headerItem:didChangeBottomAccessoryView:] */

/* WARNING: Possible PIC construction at 0x000100586d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100586d28) */
/* WARNING: Removing unreachable block (ram,0x000100586d34) */
/* WARNING: Removing unreachable block (ram,0x000100586d10) */
/* WARNING: Removing unreachable block (ram,0x000100586d8c) */
/* WARNING: Removing unreachable block (ram,0x000100586d14) */
/* WARNING: Removing unreachable block (ram,0x000100586d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794cc0);
  func_0x000107c3cf20(uVar1);
  func_0x000107c61180();
  func_0x000107c49cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100586db8; end: 100586e17; -[SIGHeaderItemView headerItem:didChangeTitleAffordance:] */

/* WARNING: Possible PIC construction at 0x000100586dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100586df0) */
/* WARNING: Removing unreachable block (ram,0x000100586df8) */
/* WARNING: Removing unreachable block (ram,0x000100586e04) */

void FUN_100586db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c5cab4(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100586e18; end: 100586e27; -[SIGHeaderItemView titleAffordance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100586e18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794ce8);
}



/* Entry: 100586e28; end: 100586e2f; -[SIGHeaderItem tabBarItems] */

undefined8 FUN_100586e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 100586e30; end: 100586ec7; -[SIGHeaderTabBarRow setHeaderItem:] */

/* WARNING: Possible PIC construction at 0x000100586e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100586eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100586e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  lVar4 = (long)_DAT_112794cfc;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x000107c49cec(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_3;
    func_0x000107c61174(uVar2);
    param_3 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100586ec8; end: 100586ef7; -[SIGHeaderTabBarRow headerItem:didChangeTabBarScrollSpanTabAndCentered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586ec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((uint)*(byte *)(param_1 + _DAT_112794cf8) == (uint)param_4) {
    return;
  }
  *(char *)(param_1 + _DAT_112794cf8) = (char)param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1f7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794cf0),PTR_s_setScrollSpanTabAndCentered__11265b940,
             param_4);
  return;
}



/* Entry: 100586ef8; end: 100586f53; -[SIGHeaderItemView setTooltipPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794ca4;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  func_0x000107c59ebc(*(undefined8 *)(param_1 + _DAT_112794ca8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100586f54; end: 100586f67; -[SIGHeaderItemView setObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586f54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794cd8,param_3);
  return;
}



/* Entry: 100586f68; end: 100586f6f; -[SCSqliteSchema getCppObject] */

undefined8 FUN_100586f68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100586f70; end: 100587037; -[SIGHeader performAnimationsWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586f70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_1127949b4;
  func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_3 + lVar2));
  lVar3 = (long)_DAT_1127949cc;
  func_0x000107c526c0(0,*(undefined8 *)(param_3 + lVar3));
  func_0x000107c3c90c(param_3);
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x000107c40f48(uVar1);
  func_0x000107c61180();
  func_0x000107c3c8c8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c498ec(*(undefined8 *)(param_3 + lVar2));
  func_0x000107c44d5c(param_2,param_3);
  func_0x000107c4e538(*(undefined8 *)(param_3 + lVar3));
  func_0x000107c4e538(*(undefined8 *)(param_3 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 100587038; end: 100587093; -[SIGHeader _stopObservingHeaderItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100587038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127949b0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x000107c4ffa0(*(long *)(param_1 + lVar2),param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f7d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127949a0),PTR_s_setScrollView__11265b968,0);
    return;
  }
  return;
}



/* Entry: 100587094; end: 1005870c3; -[SIGHeaderItemView currentHeaderItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100587094(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794cd0);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005870c4; end: 10058715b; -[SIGHeader _startObservingHeaderItem:] */

/* WARNING: Possible PIC construction at 0x000100587108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100587134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058710c) */
/* WARNING: Removing unreachable block (ram,0x000100587138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005870c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127949b0);
  *(undefined8 *)(param_1 + _DAT_1127949b0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10058715c; end: 100587173; -[SIGHeaderItem scrollView] */

void FUN_10058715c(long param_1)

{
  func_0x000107c61148(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100587174; end: 100587253; -[SIGScrollViewKeyValueObserver setScrollView:] */

/* WARNING: Possible PIC construction at 0x0001005871e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005871f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100587238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005871fc) */
/* WARNING: Removing unreachable block (ram,0x000100587200) */

void FUN_100587174(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x000107c49cec(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      func_0x000107c61174(param_3);
      puVar2 = *(undefined **)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = param_3;
      param_3 = puVar2;
    }
    else {
      param_3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"contentOffset");
      func_0x000107c61180();
      func_0x000107c4ffa4(lVar3,param_2,param_1,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100587254; end: 10058725b; -[SIGHeader headerItem:didChangeStyle:] */

void FUN_100587254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize__11258f068,param_4);
  return;
}



/* Entry: 10058725c; end: 10058733f; -[SIGHeader _stylize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058725c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 - 2U < 2) {
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
LAB_1005872e0:
    uVar1 = 1;
  }
  else {
    if (param_3 == 1) {
      uVar1 = 0x29;
    }
    else {
      if (param_3 != 0) {
        puVar2 = (undefined *)0x0;
        goto LAB_1005872e0;
      }
      uVar1 = 0x28;
    }
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
    func_0x000107c61180();
    uVar1 = 0;
  }
  lVar3 = (long)_DAT_1127949bc;
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar3),param_2,uVar1);
  func_0x000107c550d8(*(undefined8 *)(param_1 + _DAT_1127949a4),param_2,uVar1);
  func_0x000107c52b50(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
  func_0x000107c52b50(*(undefined8 *)(param_1 + _DAT_1127949a8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100587340; end: 10058734f; -[SIGHeaderBackgroundView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100587340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949dc),PTR_s_setBackgroundColor__112639330);
  return;
}



/* Entry: 100587350; end: 100587357; -[SIGHeader headerItem:didChangePassThroughTouchEvents:] */

void FUN_100587350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__passThroughTouchEventsChanged__112579bc0,param_4);
  return;
}



/* Entry: 100587358; end: 1005873a3; -[SIGHeader _passThroughTouchEventsChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100587358(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5a378(*(undefined8 *)(param_1 + _DAT_1127949a4),param_2,(uint)param_3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d94b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949a8),PTR_s_setPassThroughTouchEvents__112653f50,
             param_3);
  return;
}



/* Entry: 1005873a4; end: 1005873b3; -[SIGHeaderBackgroundView setPassThroughTouchEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005873a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127949d8) = param_3;
  return;
}



/* Entry: 1005873b4; end: 1005873bb; -[SIGHeader headerItem:didChangeShowsSectionTitle:] */

void FUN_1005873b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebbe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showsSectionTitleChanged__11258c940,param_4)
  ;
  return;
}



/* Entry: 1005873bc; end: 1005873d7; -[SIGHeader _showsSectionTitleChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005873bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127949ac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c202670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949a8),PTR_s_setShowsSectionTitle__11265e3c0);
  return;
}



/* Entry: 1005873d8; end: 10058741f; -[SIGHeaderBackgroundView setShowsSectionTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005873d8(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_1127949e4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127949e4) = (char)param_3;
  func_0x000107c3b3dc();
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949e0),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 100587420; end: 1005874ff; +[SCStoriesLastResponseMetaInfo immutableObjectParse:bufferSize:] */

void FUN_100587420(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined *puVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar2 = PTR_PTR_1126d67e0;
  func_0x000107c610f4(PTR_PTR_1126d67e0);
  puVar3 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar3 < 5) {
    uVar4 = 0;
  }
  else {
    if ((ulong)puVar3[2] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)piVar1 + (ulong)puVar3[2]);
    }
    if ((6 < *puVar3) && (puVar3[3] != 0)) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45ae4();
      goto LAB_1005874bc;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1005874bc:
  func_0x000107c468cc(puVar2,param_2,uVar4,puVar5);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100587500; end: 100587597; -[SCStoriesLastResponseMetaInfo initWithFeedType:streamToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100587500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112706a78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc7c) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc80);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc80) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100587598; end: 1005875af; -[SCSqliteSchema .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001005875d8: Changing call to branch */

void FUN_100587598(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_10054d2a0(lVar1 + 0x20,*(undefined8 *)(lVar1 + 0x28));
  if (*(char *)(lVar1 + 0x1f) < '\0') {
    lVar1 = *(long *)(lVar1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1005875b0; end: 1005875eb;  */

/* WARNING: Possible PIC construction at 0x0001005875d8: Changing call to branch */

void FUN_1005875b0(long param_1)

{
  FUN_10054d2a0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x1f) < '\0') {
    param_1 = *(long *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005875ec; end: 1005875f3; -[SCSqliteConnection getCppObject] */

undefined8 FUN_1005875ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1005875f4; end: 10058760f; -[SQLFideliusEncryptedUserInfoDB .cxx_construct] */

void FUN_1005875f4(long param_1)

{
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 100587610; end: 100587697; -[SQLFideliusEncryptedUserInfoDB initWithSqliteConnection:] */

undefined1 * FUN_100587610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eb048;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100587698; end: 1005876ff; -[SIGHeader headerItemView:heightDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100587698(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + _DAT_1127949c0;
  func_0x000107c61148(lVar1);
  func_0x000107c44c6c(param_1);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + _DAT_112794998),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 100587700; end: 1005879a3; -[SIGHeaderItemView performAnimatedTransition:style:] */

/* WARNING: Possible PIC construction at 0x000100587788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005877d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100587814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005878ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100587818) */
/* WARNING: Removing unreachable block (ram,0x00010058781c) */
/* WARNING: Removing unreachable block (ram,0x000100587820) */
/* WARNING: Removing unreachable block (ram,0x00010058789c) */
/* WARNING: Removing unreachable block (ram,0x000100587838) */
/* WARNING: Removing unreachable block (ram,0x0001005878a8) */
/* WARNING: Removing unreachable block (ram,0x0001005877d4) */
/* WARNING: Removing unreachable block (ram,0x0001005877e0) */
/* WARNING: Removing unreachable block (ram,0x0001005877e4) */
/* WARNING: Removing unreachable block (ram,0x0001005877e8) */
/* WARNING: Removing unreachable block (ram,0x0001005877ec) */
/* WARNING: Removing unreachable block (ram,0x0001005877f0) */
/* WARNING: Removing unreachable block (ram,0x00010058778c) */
/* WARNING: Removing unreachable block (ram,0x0001005878f0) */
/* WARNING: Removing unreachable block (ram,0x0001005878f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100587700(double param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  if (param_5 == 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112794ca8);
    func_0x000107c5cad4(uVar1);
    func_0x000107c61180();
    func_0x000107c526c0((double)param_4);
  }
  else {
    lVar2 = (long)_DAT_112794ca8;
    func_0x000107c3f74c(*(undefined8 *)(param_2 + lVar2));
    uVar1 = *(undefined8 *)(param_2 + lVar2);
    dVar3 = param_1;
    func_0x000107c5cad4(uVar1);
    func_0x000107c61180();
    func_0x000107c498ec();
    func_0x000107c3ec60(param_1 + dVar3 * 0.5,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005879a4; end: 100587a03; -[SIGHeaderTitleRow titleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005879a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794db8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100587a04; end: 100587a13; -[SCStoriesLastResponseMetaInfo feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100587a04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fc7c);
}



/* Entry: 100587a14; end: 100587a3b;  */

void FUN_100587a14(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100587a3c; end: 100587a3f; -[SIGHeader completeAnimation:] */

void FUN_100587a3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfafdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finishTransitionCompleted__1125c9910);
  return;
}



/* Entry: 100587a40; end: 100587b47; -[SIGHeader finishTransitionCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100587a40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11279499c;
  if (*(char *)(param_3 + lVar4) == '\x01') {
    lVar5 = (long)_DAT_1127949cc;
  }
  else if (param_5 == 0) {
    lVar3 = (long)_DAT_1127949b4;
    func_0x000107c4ff34(*(undefined8 *)(param_3 + lVar3));
    lVar5 = (long)_DAT_1127949cc;
    uVar1 = *(undefined8 *)(param_3 + lVar5);
    func_0x000107c61174(uVar1);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    *(undefined8 *)(param_3 + lVar3) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c498ec(*(undefined8 *)(param_3 + lVar3));
    func_0x000107c5378c(param_2,*(undefined8 *)(param_3 + _DAT_112794998));
  }
  else {
    lVar5 = (long)_DAT_1127949cc;
    func_0x000107c4ff34(*(undefined8 *)(param_3 + lVar5));
    lVar3 = (long)_DAT_1127949b4;
    func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_3 + lVar3));
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    func_0x000107c40f48();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5af2c();
    lVar3 = (long)_DAT_1127949ac;
    *(char *)(param_3 + lVar3) = (char)uVar2;
    func_0x000107c61170(uVar1);
    func_0x000107c59288(*(undefined8 *)(param_3 + _DAT_1127949a8),param_4,
                        *(undefined1 *)(param_3 + lVar3));
  }
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  *(undefined8 *)(param_3 + lVar5) = 0;
  func_0x000107c61170(uVar2);
  *(undefined1 *)(param_3 + lVar4) = 0;
  return;
}



/* Entry: 100587b48; end: 100587b4f; -[SIGHeaderItem showsSectionTitle] */

undefined1 FUN_100587b48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 100587b50; end: 100587b57; -[SIGHeaderItem fadeScrollEnabled] */

undefined1 FUN_100587b50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 100587b58; end: 100587d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100587b58(undefined *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined *puStack_68;
  
  puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar4 = *puVar6;
  if ((uVar4 & 3) != 0) {
    uVar4 = (uVar4 & 0xfffffffffffffffc) + 4;
    *puVar6 = uVar4;
  }
  uVar5 = uVar4 + 4;
  puVar2 = param_1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar5) {
    puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar4 = *puVar6;
    uVar5 = uVar4 + 4;
  }
  iVar10 = *(int *)(*(long *)(param_1 + _DAT_112796258) + uVar4);
  *puVar6 = uVar5;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (iVar10 != 0) {
    func_0x000107c60744();
    func_0x000107c60738();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    }
    lVar9 = 0;
    do {
      puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar5 = *puVar6;
      uVar4 = uVar5 + 1;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar4) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        puVar6 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar5 = *puVar6;
        uVar4 = uVar5 + 1;
      }
      bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar5);
      *puVar6 = uVar4;
      if ((bVar1 < 0x35) &&
         (pcVar7 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
         pcVar7 != (code *)0x0)) {
        puVar3 = param_1;
        (*pcVar7)();
        if (puVar3 != (undefined *)0x0) {
          *(undefined **)(puVar2 + lVar9 * 8) = puVar3;
          lVar9 = lVar9 + 1;
        }
      }
      else {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (lVar9 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c();
    }
    func_0x000107c60744();
    func_0x000107c60740();
  }
  uVar8 = *(undefined8 *)(param_1 + _DAT_112796264);
  puStack_68 = puVar3;
  func_0x000107c60780(uVar8);
  func_0x000107c60768(uVar8,&puStack_68,8);
  return puVar3;
}



/* Entry: 100587d9c; end: 100587e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100587d9c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar3 = *puVar4;
  uVar1 = uVar3 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar1) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar4 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar3 = *puVar4;
    uVar1 = uVar3 + 1;
  }
  uVar5 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar3);
  *puVar4 = uVar1;
  uVar3 = *(ulong *)(param_1 + _DAT_112796264);
  uVar1 = uVar3;
  func_0x000107c60780();
  if (uVar5 < uVar1 >> 3) {
    func_0x000107c60778();
    return *(undefined **)(uVar3 + uVar5 * 8);
  }
  func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return puVar2;
}



/* Entry: 100587e98; end: 100587f17; -[SIGTouchSwallowingGestureRecognizer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100587e98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b6b8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112795238);
    *(undefined **)((long)puVar1 + (long)_DAT_112795238) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fcc(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100587f18; end: 10058802b; -[SCLocationSharingPreferences initWithCoder:] */

undefined1 * FUN_100587f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ffe78;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c41470();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x000107c41454();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41454();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10058802c; end: 10058810f; -[SCStreamingLocationSharingPreferencesCachedObject initWithCoder:] */

undefined1 * FUN_10058802c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126edfb8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3ebcc();
    *(char *)((long)puVar1 + 8) = (char)uVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100588110; end: 10058811f; -[SIGTouchSwallowingGestureRecognizer addViewToAllowlist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100588110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795238),PTR_s_addPointer__11259c450);
  return;
}


