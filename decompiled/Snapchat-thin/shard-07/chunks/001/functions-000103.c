/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105200814; end: 105200867;  */

void FUN_105200814(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 105200868; end: 1052008e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105200868(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (lVar1 != 0)) &&
     (*(long *)(lVar1 + _DAT_11271f708) == *(long *)(param_1 + 0x20))) {
    lVar2 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2699c0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052008e8; end: 10520092b; -[SCContextTappableElementsView dismissTooltipsIfNeccessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052008e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271f708;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010c08d180(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 10520092c; end: 105200aff; -[SCContextTappableElementsView layoutTooltipToView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520092c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_7;
  _objc_retain(param_7);
  lVar20 = (long)_DAT_11271f70c;
  lVar1 = *(long *)(param_5 + lVar20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = (long)_DAT_11271f708;
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,
                        *(undefined8 *)(param_5 + lVar20));
    lVar1 = (long)_DAT_11271f708;
    lVar18 = *(long *)(param_5 + lVar20);
    func_0x00010c12b8e0(*(undefined8 *)(param_5 + lVar1),param_6,lVar18);
    uVar2 = *(undefined8 *)(param_5 + lVar20);
    *(undefined8 *)(param_5 + lVar20) = 0;
    _objc_release(uVar2);
  }
  if ((param_7 != 0) && (lVar3 = *(long *)(param_5 + lVar1), lVar3 != 0)) {
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf493a0(lVar3,param_6,lVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + lVar1);
    lStack_78 = lVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0xc014000000000000;
    uVar2 = uVar5;
    func_0x00010bf493c0(0xc014000000000000,uVar5,param_6,lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_8 = 2;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_78);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_5 + lVar20);
    *(undefined **)(param_5 + lVar20) = puVar6;
    _objc_release(uVar19);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar18);
    _objc_release(lVar3);
    lVar18 = *(long *)(param_5 + lVar20);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,lVar18);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126b62a8;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_8);
    _objc_retain(lVar18);
    _objc_alloc();
    func_0x00010bfb68e0(param_8);
    lVar1 = lVar18;
    func_0x00010bf1d3e0(lVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    func_0x00010c013f40(param_1,param_2,param_3,param_4,puVar7,param_6,lVar1);
    _objc_release(lVar1);
    func_0x00010befbb60(param_8,param_6,puVar7);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_8;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0(puVar8,param_6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    puStack_128 = puVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_8;
    func_0x00010c1408a0(param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf493a0(puVar10,param_6,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    puStack_120 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_8;
    func_0x00010c274200(param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf493a0(puVar12,param_6,uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar7;
    puStack_118 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_8;
    func_0x00010bf1ff80(param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    puVar16 = puVar14;
    func_0x00010bf493a0(puVar14,param_6,uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_128,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6,param_6,puVar17);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar19);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar7 + _DAT_11271f710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 105200b00; end: 105200dd7; -[SCContextTappableElementsView _addBlackoutForElement:toTappableButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105200b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  puVar2 = PTR_PTR_1126b62a8;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc();
  func_0x00010bfb68e0(param_8);
  uVar3 = param_7;
  func_0x00010bf1d3e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c013f40(param_1,param_2,param_3,param_4,puVar2,param_6,uVar3);
  _objc_release(uVar3);
  func_0x00010befbb60(param_8,param_6,puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_6,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_a8 = puVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_8;
  func_0x00010c1408a0(param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  puStack_a0 = puVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_8;
  func_0x00010c274200(param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_6,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  puStack_98 = puVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_8;
  func_0x00010bf1ff80(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  puVar14 = puVar12;
  func_0x00010bf493a0(puVar12,param_6,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar2 + _DAT_11271f710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105200dd8; end: 105200df7; -[SCContextTappableElementsView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105200dd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105200df8; end: 105200e0b; -[SCContextTappableElementsView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105200df8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f710,param_3);
  return;
}



/* Entry: 105200e0c; end: 105200e67; -[SCContextTappableElementsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105200e0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f710);
  _objc_storeStrong(param_1 + _DAT_11271f708,0);
  _objc_storeStrong(param_1 + _DAT_11271f70c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f704,0);
  return;
}



/* Entry: 105200e68; end: 105200f13; -[SCContextBlockedTappableElement initWithTappableElement:blockMessage:] */

undefined1 *
FUN_105200e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6e80;
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



/* Entry: 105200f14; end: 105200f37; -[SCContextBlockedTappableElement copyWithZone:] */

undefined8 FUN_105200f14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105200f38; end: 105200fab; -[SCContextBlockedTappableElement hash] */

undefined8 * FUN_105200f38(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10520102c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105201038;
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
          goto LAB_105201038;
        }
        goto LAB_10520102c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105201038:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105200fac; end: 105201053; -[SCContextBlockedTappableElement isEqual:] */

long FUN_105200fac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10520102c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105201038;
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
          goto LAB_105201038;
        }
        goto LAB_10520102c;
      }
    }
    lVar3 = 0;
  }
LAB_105201038:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105201054; end: 10520105b; -[SCContextBlockedTappableElement tappableElement] */

undefined8 FUN_105201054(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10520105c; end: 105201063; -[SCContextBlockedTappableElement blockMessage] */

undefined8 FUN_10520105c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105201064; end: 105201093; -[SCContextBlockedTappableElement .cxx_destruct] */

void FUN_105201064(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105201094; end: 10520115f; -[SCAIRemixCaptureStatusNotifier initWithReplyParameters:conversationIdResolver:statusSender:] */

undefined1 *
FUN_105201094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6e88;
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



/* Entry: 105201160; end: 105201393; -[SCAIRemixCaptureStatusNotifier sendRemixCaptureStatusIfNeeded] */

void FUN_105201160(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined **unaff_x22;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (lVar5 = 0, *(long *)(param_1 + 8) != 0)) {
    puStack_c0 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105201394;
    uStack_70 = 0x1052013a4;
    lStack_68 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1052013ac;
    puStack_a0 = &UNK_110842b58;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105201414;
    puStack_c8 = &UNK_110842b88;
    puStack_98 = puStack_c0;
    puStack_88 = puStack_c0;
    func_0x00010c0be1c0(*(long *)(param_1 + 8),param_2,&puStack_b8,&puStack_e0,0);
    unaff_x22 = (undefined **)puVar1;
    if (puStack_88[5] != 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      _objc_initWeak(auStack_e8,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_60 = puStack_88[5];
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = puVar1;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_10520147c;
      puStack_f8 = &UNK_110842c58;
      _objc_copyWeak(auStack_f0,auStack_e8);
      func_0x00010bf504e0(uVar2);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_e8);
      unaff_x22 = &puStack_110;
    }
    __Block_object_dispose(&uStack_90,8);
    lVar5 = lStack_68;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)unaff_x22 + 0x20));
  _objc_destroyWeak(auStack_e8);
  lVar6 = 8;
  __Block_object_dispose(&uStack_90);
  __Unwind_Resume();
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 105201394; end: 1052013ab;  */

void FUN_105201394(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1052013ac; end: 10520147b;  */

void FUN_1052013ac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10520147c; end: 105201517;  */

void FUN_10520147c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c680(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105201518; end: 105201553; -[SCAIRemixCaptureStatusNotifier .cxx_destruct] */

void FUN_105201518(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105201554; end: 1052015af; -[SCAIRemixEntryPoint begin] */

void FUN_105201554(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1052015b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48040(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052015b0; end: 1052015d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052015b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f730);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052015d4; end: 105201c37; -[SCAIRemixEntryPoint _launchPreviewWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052015d4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afee0;
  _objc_alloc();
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_3 + _DAT_11271f738;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010bf398e0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180();
  _objc_release(lVar2);
  _objc_release(lVar9);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c23d0a0(param_5);
    dVar15 = param_1;
    func_0x00010c14e120(param_5);
    param_1 = param_1 * dVar15;
    func_0x00010c23d0a0(param_5);
    func_0x00010c14e120(param_5);
    param_2 = param_2 * dVar15;
    func_0x00010c1c5440(puVar1);
    func_0x00010c1c4ca0(puVar1);
    func_0x00010c1c5240(param_1,param_2,puVar1);
    param_1 = param_1 / param_2;
    if (param_2 <= 0.0) {
      param_1 = 1.0;
    }
    func_0x00010c1c40c0(param_1,puVar1);
    func_0x00010c1a1640(puVar1);
    func_0x00010c2056c0(puVar1);
    func_0x00010c1e0c00(puVar1);
    puVar3 = puVar1;
    func_0x00010c1e6b40(puVar1);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcbe0(puVar1);
    _objc_release(puVar3);
    if (param_3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_3 + _DAT_11271f744;
      _objc_loadWeakRetained(lVar9);
    }
    lVar2 = lVar9;
    func_0x00010befed00(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010befece0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010befee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166780(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar2);
    _objc_release(lVar9);
    puVar3 = PTR_PTR_1126b62b0;
    _objc_alloc();
    if (param_3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_3 + _DAT_11271f734;
      _objc_loadWeakRetained();
    }
    lVar2 = lVar9;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = param_3 + _DAT_11271f740;
      _objc_loadWeakRetained();
    }
    lVar4 = lVar11;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = param_3 + _DAT_11271f748;
      _objc_loadWeakRetained();
    }
    lVar5 = lVar14;
    func_0x00010c27e600();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_3;
    FUN_105201c38(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar12;
    func_0x00010c292d20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    FUN_105201c38();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = param_3 + _DAT_11271f74c;
      _objc_loadWeakRetained();
    }
    func_0x00010c048840(puVar3);
    func_0x00010c19bee0(puVar1);
    _objc_release(puVar3);
    _objc_release(lVar13);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar12);
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar2);
    _objc_release(lVar9);
    lVar9 = param_3;
    FUN_1052015b0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar2;
    func_0x00010c08bda0(lVar2);
    lVar11 = lVar2;
    func_0x00010c0d6ca0(lVar2);
    lVar4 = lVar2;
    func_0x00010c1298a0(lVar2);
    lVar14 = lVar2;
    func_0x00010c247b80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c247de0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010bf4f080(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c131e40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901979c(lVar9,lVar11,lVar4,lVar14,lVar5,lVar12,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb140(puVar1);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar12);
    _objc_release(lVar5);
    _objc_release(lVar14);
    puVar3 = PTR_PTR_1126b62b8;
    _objc_alloc();
    lVar9 = lVar2;
    func_0x00010c131e40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = param_3 + _DAT_11271f754;
      _objc_loadWeakRetained(lVar11);
    }
    lVar4 = lVar11;
    func_0x00010bf50420(lVar11);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = param_3 + _DAT_11271f758;
      _objc_loadWeakRetained(lVar14);
    }
    lVar5 = lVar14;
    func_0x00010c253440(lVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e600();
    lVar12 = (long)_DAT_11271f72c;
    uVar10 = *(undefined8 *)(param_3 + lVar12);
    *(undefined **)(param_3 + lVar12) = puVar3;
    _objc_release(uVar10);
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar9);
    func_0x00010c15c660(*(undefined8 *)(param_3 + lVar12));
    func_0x00010bf42760(puVar1);
    lVar9 = param_3 + _DAT_11271f73c;
    _objc_loadWeakRetained(lVar9);
    lVar11 = param_3;
    FUN_1052015b0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010bf22c20(lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar9);
    func_0x00010bf9d620(*(undefined8 *)(param_3 + _DAT_11271f760));
    _objc_release(lVar14);
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105201c38; end: 105201c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105201c38(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f750);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105201c5c; end: 105201d27; -[SCAIRemixEntryPoint _showSentConfirmationToast] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105201c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11271f75c;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c0dc640(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126afde0;
  func_0x000109022a24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110dcb798);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105201d28; end: 105201e57; -[SCAIRemixEntryPoint _dismissPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105201d28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11271f760);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11271f760);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    FUN_1052015b0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf6f440(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105201e58; end: 105201ebb;  */

void FUN_105201e58(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1052015b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befeea0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105201ebc; end: 105201ebf; -[SCAIRemixEntryPoint didCancelFromPreview:] */

void FUN_105201ebc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 105201ec0; end: 105201ee3; -[SCAIRemixEntryPoint didSendSnapsAndPostToStory:storyTypes:] */

void FUN_105201ec0(undefined8 param_1)

{
  func_0x00010bebad00();
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 105201ee4; end: 105201ee7; -[SCAIRemixEntryPoint didPostStoryWithStoryTypes:] */

void FUN_105201ee4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 105201ee8; end: 105201eeb; -[SCAIRemixEntryPoint didPostStoryWithStoryTypes:clientIds:spotlightTileBytes:isCrossPostingSpotlightToStories:] */

void FUN_105201ee8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 105201eec; end: 105201eef; -[SCAIRemixEntryPoint didPostStoryWithConfig:] */

void FUN_105201eec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 105201ef0; end: 105201f13; -[SCAIRemixEntryPoint didSendChatMessage] */

void FUN_105201ef0(undefined8 param_1)

{
  func_0x00010bebad00();
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 105201f14; end: 105201fe3; -[SCAIRemixEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105201f14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f760,0);
  _objc_destroyWeak(param_1 + _DAT_11271f75c);
  _objc_destroyWeak(param_1 + _DAT_11271f758);
  _objc_destroyWeak(param_1 + _DAT_11271f754);
  _objc_destroyWeak(param_1 + _DAT_11271f750);
  _objc_destroyWeak(param_1 + _DAT_11271f74c);
  _objc_destroyWeak(param_1 + _DAT_11271f748);
  _objc_destroyWeak(param_1 + _DAT_11271f744);
  _objc_destroyWeak(param_1 + _DAT_11271f740);
  _objc_destroyWeak(param_1 + _DAT_11271f73c);
  _objc_destroyWeak(param_1 + _DAT_11271f738);
  _objc_destroyWeak(param_1 + _DAT_11271f734);
  _objc_destroyWeak(param_1 + _DAT_11271f730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f72c,0);
  return;
}



/* Entry: 105201fe4; end: 10520240b; -[SCRemixEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105201fe4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar10 = (long)_DAT_11271f764;
  lVar8 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar1 = lVar8;
  func_0x00010c1298a0();
  _objc_release(lVar8);
  if (lVar1 != 0) {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_10520240c;
    uStack_88 = 0x10520241c;
    uStack_80 = 0;
    if (param_1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar8);
    }
    lVar1 = lVar8;
    func_0x00010bf9e320(lVar8);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105202424;
    puStack_b8 = &UNK_110870148;
    puStack_d8 = &uStack_a8;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x10520246c;
    puStack_e0 = &UNK_110870178;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = puStack_d8;
    func_0x00010c0be4e0();
    _objc_release(lVar1);
    _objc_release(lVar8);
    lVar8 = param_1;
    FUN_1052024b8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010bf9e3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46ec0();
    _objc_release(lVar9);
    _objc_release(lVar1);
    _objc_release(lVar8);
    lVar8 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar8);
    lVar1 = lVar8;
    FUN_1052024dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    if (param_1 == 0) {
      lVar8 = 0;
      lVar9 = 0;
    }
    else {
      lVar8 = param_1 + _DAT_11271f778;
      _objc_loadWeakRetained(lVar8);
      lVar9 = param_1 + _DAT_11271f774;
      _objc_loadWeakRetained(lVar9);
    }
    lVar2 = lVar9;
    func_0x00010c11a2a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c271be0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar4 = lVar10;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010bf23740(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar9);
    _objc_release(lVar8);
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271f768);
    *(undefined **)(param_1 + _DAT_11271f768) = puVar6;
    _objc_release(uVar7);
    _objc_initWeak(auStack_100,param_1);
    lVar8 = param_1 + _DAT_11271f78c;
    _objc_loadWeakRetained(lVar8);
    lVar10 = lVar8;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_108,auStack_100);
    lVar9 = lVar10;
    func_0x00010c25ff60(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(lVar8);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271f76c));
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_100);
    _objc_release(lVar5);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    return;
  }
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129900();
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520240c; end: 105202423;  */

void FUN_10520240c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105202424; end: 1052024b7;  */

void FUN_105202424(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b62c0;
  func_0x00010bfe94a0(PTR_PTR_1126b62c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052024b8; end: 1052024db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052024b8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f798);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052024dc; end: 1052025df;  */

void FUN_1052024dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08bda0(param_1);
  uVar2 = param_1;
  func_0x00010c0d6ca0(param_1);
  uVar3 = param_1;
  func_0x00010c1298a0(param_1);
  uVar4 = param_1;
  func_0x00010c247b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c247de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf4f080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c131e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010901979c(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052025e0; end: 105202627;  */

void FUN_1052025e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105202628; end: 1052026c3; -[SCRemixEntryPoint end] */

void FUN_105202628(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_1052024b8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9e3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139000();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e6e90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052026c4; end: 1052026eb; -[SCRemixEntryPoint didDismissCaptureFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052026c4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11271f76c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1052026ec; end: 10520278b; -[SCRemixEntryPoint captureWorkflowWillSetCameraViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052026ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11271f764;
    _objc_retain(param_3);
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    FUN_1052024dc();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c271be0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1,8,0);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10520278c; end: 1052027d7; -[SCRemixEntryPoint captureWorkflowDidDismissWithDidSendSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520278c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271f764;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129900();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052027d8; end: 10520284f; -[SCRemixEntryPoint _handleCameraViewControllerLifecycleEvent:] */

void FUN_1052027d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x105202854;
  puStack_20 = &UNK_110841f20;
  uStack_18 = param_1;
  func_0x00010c0c15c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108701a8,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_1108701c8,&PTR___NSConcreteGlobalBlock_1108701e8,
                      &PTR___NSConcreteGlobalBlock_110870208);
  return;
}



/* Entry: 105202850; end: 105202867;  */

void FUN_105202850(void)

{
  return;
}



/* Entry: 105202868; end: 105202953; -[SCRemixEntryPoint _configureRemixCameraMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105202868(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + _DAT_11271f770) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11271f770) = 1;
  lVar1 = param_1 + _DAT_11271f774;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1295e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf117a0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271f774;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde53c0(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105202954; end: 105202aab; -[SCRemixEntryPoint _configureMusicTrackWithCameraFeatureCatalog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105202954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11271f764;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c247d00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c277e80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = param_3;
    func_0x00010c0d2940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c247d00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277e80();
    param_1 = param_1 + lVar7;
    _objc_loadWeakRetained(param_1);
    lVar7 = param_1;
    func_0x00010c247d00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c24fb80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47ca0(uVar5,param_2,lVar3,4,lVar6,0,0,0);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105202aac; end: 105202b8b; -[SCRemixEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105202aac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f7a0,0);
  _objc_storeStrong(param_1 + _DAT_11271f76c,0);
  _objc_destroyWeak(param_1 + _DAT_11271f79c);
  _objc_destroyWeak(param_1 + _DAT_11271f798);
  _objc_destroyWeak(param_1 + _DAT_11271f794);
  _objc_destroyWeak(param_1 + _DAT_11271f790);
  _objc_destroyWeak(param_1 + _DAT_11271f78c);
  _objc_destroyWeak(param_1 + _DAT_11271f788);
  _objc_destroyWeak(param_1 + _DAT_11271f784);
  _objc_destroyWeak(param_1 + _DAT_11271f780);
  _objc_destroyWeak(param_1 + _DAT_11271f77c);
  _objc_destroyWeak(param_1 + _DAT_11271f778);
  _objc_destroyWeak(param_1 + _DAT_11271f764);
  _objc_destroyWeak(param_1 + _DAT_11271f774);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f768,0);
  return;
}



/* Entry: 105202b8c; end: 105202c27; +[SCRemixLensDataProvider remixLensDataProvider:bundledLensProvider:legacyLensDataFetcher:lensDataConfig:] */

void FUN_105202b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  FUN_105202c28(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b62c8;
  _objc_alloc(PTR_PTR_1126b62c8);
  func_0x00010c022760();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105202c28; end: 10520322b;  */

undefined * FUN_105202c28(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf24d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b62d0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c13b280(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c13b280(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c2a0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar1);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126af7d0;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar3);
  _objc_release(puVar2);
  uVar5 = param_1;
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b62d0;
  _objc_alloc();
  uVar6 = uVar5;
  func_0x00010c296d80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360();
  _objc_retain(0);
  _objc_release(uVar6);
  puVar2 = param_2;
  if (puVar4 == (undefined *)0x0) {
    _objc_retain(param_2);
  }
  else {
    puVar7 = PTR_PTR_1126b62d8;
    _objc_opt_new();
    puVar8 = puVar4;
    func_0x00010bf38a80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c2aa6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bdc2b80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c2bbd60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2bbd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar12;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar9 = PTR_PTR_1126b62e0;
    _objc_alloc();
    func_0x00010c03faa0();
    puVar10 = PTR_PTR_1126b0820;
    _objc_opt_new();
    puVar11 = param_2;
    func_0x00010bf3ec40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010c2aa840();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010c2b2880();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c2b72e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c2bbd20();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010c2ad7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010c2a8660();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar21;
    func_0x00010c2aa3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar7);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar7 = puVar23;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c13b280();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar10);
    if (puVar11 != (undefined *)0x0) {
      puVar2 = puVar7;
    }
    _objc_retain(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar23);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar12);
  }
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    if (puRam00000001136b94f8 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126ae978;
      func_0x00010bf00dc0();
      func_0x00010c2289e0();
      puRam00000001136b94f8 = puVar2;
    }
    return puRam00000001136b94f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10520322c; end: 1052032a7; +[SCRMXRemixLensConfig descriptor] */

undefined * FUN_10520322c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b94f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a22280,
                        &PTR____CFConstantStringClassReference_110dcb818,
                        &PTR_s_snapchat_remix_1130c7ea0,&PTR_s_URL_1130c7eb8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136b94f8 = puVar1;
  }
  return puRam00000001136b94f8;
}



/* Entry: 1052032a8; end: 105203473; -[SCLegacyDeepLinkAuthProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052032a8(long param_1,undefined8 param_2)

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
  undefined *puVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126b62e8;
  _objc_alloc(PTR_PTR_1126b62e8);
  lVar2 = param_1 + _DAT_11271f7a4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271f7a8;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271f7ac;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271f7b0;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf817a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271f7b4;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e900(puVar1,param_2,lVar4,1,lVar6,lVar8,lVar10,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar14 = *(undefined8 *)(param_1 + _DAT_11271f7b8);
  puVar13 = PTR_PTR_1126b62f0;
  _objc_alloc(PTR_PTR_1126b62f0);
  func_0x00010c022260();
  func_0x00010bf9d660(uVar14,param_2,puVar13);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105203474; end: 1052034eb; -[SCLegacyDeepLinkAuthProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105203474(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f7b8,0);
  _objc_destroyWeak(param_1 + _DAT_11271f7b4);
  _objc_destroyWeak(param_1 + _DAT_11271f7b0);
  _objc_destroyWeak(param_1 + _DAT_11271f7ac);
  _objc_destroyWeak(param_1 + _DAT_11271f7a8);
  _objc_destroyWeak(param_1 + _DAT_11271f7a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f7bc);
  return;
}



/* Entry: 1052034ec; end: 10520360f; -[SCLegacyDeepLinkProcessor initWithNavigationDelegate:userLoggedIn:circumstanceEngine:pageLauncher:discoverFeedBaseDeepLinkProcessor:storiesConfigProvider:] */

undefined1 *
FUN_1052034ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e6e98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105203610; end: 105203d83; -[SCLegacyDeepLinkProcessor isValidDeepLinkURL:] */

undefined8 FUN_105203610(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1068;
  _objc_opt_class(PTR_PTR_1126b1068);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c073580();
  if ((int)uVar3 == 0) {
    param_1 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if (((((((((uVar4 & 1) == 0) && (uVar4 = uVar3, func_0x00010bfdcf80(), (uVar4 & 1) == 0)) &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
           ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
          (((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
              ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
               (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
             (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
            (((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
              (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
             (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
           ((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
              (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
             ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
              ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
               (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))) &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))) &&
         (((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
             (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
           ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
          (((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
            ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
             (uVar4 = uVar1, func_0x00010c082c60(), (uVar4 & 1) == 0)))) &&
           ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
            (((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
                (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
               (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
              ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
               (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
             (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))))))) &&
        ((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
           (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
          ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
           (((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
             (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))) &&
         (((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
           (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
          (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))) &&
       ((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
          (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
         ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
          (((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
           (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))) &&
        ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
         (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))) {
      puVar2 = PTR_PTR_1126b62f8;
      func_0x00010bfe4420(PTR_PTR_1126b62f8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if (((((uVar4 & 1) == 0) &&
           ((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
              (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
             ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
              ((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
                 (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
                (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
               ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
                (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))))) &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
          ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
           (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
         ((((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
            (((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
              (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
             (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
           (((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
             (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
            (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))) &&
          ((uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0 &&
           (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)))))) {
        func_0x00010c06bf60(param_1);
      }
      else {
        param_1 = 1;
      }
      _objc_release(puVar2);
    }
    else {
      param_1 = 1;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105203d84; end: 105203e47; -[SCLegacyDeepLinkProcessor isAllowlistedFeature:] */

undefined * FUN_105203d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c25d780(uVar4,param_2,&PTR____CFConstantStringClassReference_110dcb878,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = uVar4;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010bf4b900(puVar2,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar4);
  return puVar3;
}



/* Entry: 105203e48; end: 105204743; -[SCLegacyDeepLinkProcessor deepLinkFeatureFromFeatureString:] */

undefined8 FUN_105203e48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e09c38);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3b58);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecc3d8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f14978);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f14938);
          if (((((uVar1 & 1) == 0) &&
               (uVar1 = param_3,
               func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ddea98)
               , (uVar1 & 1) == 0)) &&
              (uVar1 = param_3,
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f836b8),
              (uVar1 & 1) == 0)) &&
             (uVar1 = param_3,
             func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e50718),
             (uVar1 & 1) == 0)) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e04f78);
            if (((uVar1 & 1) == 0) &&
               (uVar1 = param_3,
               func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f836d8)
               , (uVar1 & 1) == 0)) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e635b8);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc7978
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f83778);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110dbb9d8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110e2c118);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110f83898);
                        if ((((uVar1 & 1) == 0) &&
                            (uVar1 = param_3,
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110f838b8),
                            (uVar1 & 1) == 0)) &&
                           (uVar1 = param_3,
                           func_0x00010c0720c0(param_3,param_2,
                                               &PTR____CFConstantStringClassReference_110f838d8),
                           (uVar1 & 1) == 0)) {
                          uVar1 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110db9078);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_3;
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110dfe2d8);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_3;
                              func_0x00010c0720c0(param_3,param_2,
                                                  &PTR____CFConstantStringClassReference_110f83a18);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_3;
                                func_0x00010c0720c0(param_3,param_2,
                                                    &PTR____CFConstantStringClassReference_110f83bd8
                                                   );
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_3;
                                  func_0x00010c0720c0(param_3,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110de3df8);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = param_3;
                                    func_0x00010c0720c0(param_3,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110dad4b8);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_3;
                                      func_0x00010c0720c0(param_3,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110f83a38);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_3;
                                        func_0x00010c0720c0(param_3,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110f83a58);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_3;
                                          func_0x00010c0720c0(param_3,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110eb2a18);
                                          if (((uVar1 & 1) == 0) &&
                                             (uVar1 = param_3,
                                             func_0x00010c0720c0(param_3,param_2,
                                                                 &
                                                  PTR____CFConstantStringClassReference_110e85278),
                                             (uVar1 & 1) == 0)) {
                                            uVar1 = param_3;
                                            func_0x00010c0720c0(param_3,param_2,
                                                                &
                                                  PTR____CFConstantStringClassReference_110db7358);
                                            if ((uVar1 & 1) == 0) {
                                              uVar1 = param_3;
                                              func_0x00010c0720c0(param_3,param_2,
                                                                  &
                                                  PTR____CFConstantStringClassReference_110f83bf8);
                                              if ((uVar1 & 1) == 0) {
                                                uVar1 = param_3;
                                                func_0x00010c0720c0(param_3,param_2,
                                                                    &
                                                  PTR____CFConstantStringClassReference_110e38fb8);
                                                if ((uVar1 & 1) == 0) {
                                                  uVar1 = param_3;
                                                  func_0x00010c0720c0(param_3,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110f83af8);
                                                  if ((uVar1 & 1) != 0) {
                                                    uVar3 = 0x1a;
                                                    goto LAB_105203f48;
                                                  }
                                                  uVar1 = param_3;
                                                  func_0x00010c0720c0(param_3,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110f83b18);
                                                  if ((uVar1 & 1) != 0) {
                                                    uVar3 = 0x1e;
                                                    goto LAB_105203f48;
                                                  }
                                                  uVar1 = param_3;
                                                  func_0x00010c0720c0(param_3,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110f03e58);
                                                  if ((uVar1 & 1) != 0) {
                                                    uVar3 = 0x1b;
                                                    goto LAB_105203f48;
                                                  }
                                                  uVar1 = param_3;
                                                  func_0x00010c0720c0(param_3,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110f03e78);
                                                  if ((uVar1 & 1) != 0) {
                                                    uVar3 = 0x1c;
                                                    goto LAB_105203f48;
                                                  }
                                                  uVar1 = param_3;
                                                  func_0x00010c0720c0(param_3,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110f83b38);
                                                  if (((uVar1 & 1) == 0) &&
                                                     (uVar1 = param_3,
                                                     func_0x00010c0720c0(param_3,param_2,
                                                                         &
                                                  PTR____CFConstantStringClassReference_110f83b58),
                                                  (uVar1 & 1) == 0)) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83b78);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dba938);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e192d8);
                                                  if (((uVar1 & 1) == 0) &&
                                                     (uVar1 = param_3,
                                                     func_0x00010c0720c0(param_3,param_2,
                                                                         &
                                                  PTR____CFConstantStringClassReference_110dbddd8),
                                                  (uVar1 & 1) == 0)) {
                                                    puVar2 = PTR_PTR_1126b62f8;
                                                    func_0x00010bfe4420(PTR_PTR_1126b62f8);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,puVar2);
                                                    _objc_release(puVar2);
                                                    if ((uVar1 & 1) == 0) {
                                                      uVar1 = param_3;
                                                      func_0x00010c0720c0(param_3,param_2,
                                                                          &
                                                  PTR____CFConstantStringClassReference_110e5e018);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83cd8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83cf8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83d18);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83d38);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e63b58);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83a78);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110eb19b8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83d58);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83bb8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83db8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e6acd8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83eb8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83ed8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e21338);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e50738);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e99a78);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83f78);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83f98);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e63678);
                                                  if (((uVar1 & 1) == 0) &&
                                                     (uVar1 = param_3,
                                                     func_0x00010c0720c0(param_3,param_2,
                                                                         &
                                                  PTR____CFConstantStringClassReference_110daafd8),
                                                  (uVar1 & 1) == 0)) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110db6318);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dd44b8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f84098);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f840b8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83fd8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e437f8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110f83ff8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e1abf8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_3;
                                                    func_0x00010c0720c0(param_3,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110e451f8);
                                                  uVar3 = 0x3f;
                                                  if ((int)uVar1 == 0) {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x3e;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x36;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x3a;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x39;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x3d;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x3c;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x3b;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x38;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x35;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x34;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x33;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x32;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 6;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x31;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x30;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x2f;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x2d;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x2c;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x2b;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x2a;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x29;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x24;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x28;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x27;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x26;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x25;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x23;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 7;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x22;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x21;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x20;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0x1d;
                                                  }
                                                  goto LAB_105203f48;
                                                  }
                                                }
                                                uVar3 = 0x19;
                                              }
                                              else {
                                                uVar3 = 0x18;
                                              }
                                            }
                                            else {
                                              uVar3 = 0x16;
                                            }
                                          }
                                          else {
                                            uVar3 = 0x12;
                                          }
                                        }
                                        else {
                                          uVar3 = 0xc;
                                        }
                                      }
                                      else {
                                        uVar3 = 0xb;
                                      }
                                    }
                                    else {
                                      uVar3 = 8;
                                    }
                                  }
                                  else {
                                    uVar3 = 9;
                                  }
                                }
                                else {
                                  uVar3 = 0x17;
                                }
                              }
                              else {
                                uVar3 = 0xd;
                              }
                            }
                            else {
                              uVar3 = 10;
                            }
                          }
                          else {
                            uVar3 = 0x11;
                          }
                        }
                        else {
                          uVar3 = 0x10;
                        }
                      }
                      else {
                        uVar3 = 0xf;
                      }
                    }
                    else {
                      uVar3 = 5;
                    }
                  }
                  else {
                    uVar3 = 4;
                  }
                }
                else {
                  uVar3 = 3;
                }
              }
              else {
                uVar3 = 0xe;
              }
            }
            else {
              uVar3 = 2;
            }
          }
          else {
            uVar3 = 0x14;
          }
        }
        else {
          uVar3 = 0x13;
        }
      }
      else {
        uVar3 = 0x15;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0x37;
  }
LAB_105203f48:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105204744; end: 105204c5f; -[SCLegacyDeepLinkProcessor handleOpenURL:deepLinkable:sourceApplication:additionalInfo:source:fromExternal:handlingResolution:handlerError:] */

void FUN_105204744(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined4 uStack_b4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b1068;
  _objc_opt_class(PTR_PTR_1126b1068);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be4a240();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    *param_9 = 1;
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_10 = puVar2;
  }
  uVar5 = param_1;
  func_0x00010be82b20();
  if ((int)uVar5 == 0) {
    *param_9 = 4;
  }
  else {
    func_0x00010be4a280();
    if ((param_1 & 1) != 0) {
      puVar6 = PTR_PTR_1126b6300;
      func_0x00010bfd31e0(PTR_PTR_1126b6300);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105204b10;
    }
  }
  puVar2 = PTR_PTR_1126b1068;
  _objc_alloc();
  func_0x00010c057c40();
  puVar6 = puVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0720c0();
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0720c0();
    if (((ulong)puVar8 & 1) != 0) {
LAB_105204ad0:
      _objc_release(puVar7);
      goto LAB_105204ad8;
    }
    puVar8 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0720c0();
    if (((ulong)puVar9 & 1) != 0) {
LAB_105204ac8:
      _objc_release(puVar8);
      goto LAB_105204ad0;
    }
    puVar9 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0720c0();
    if (((ulong)puVar10 & 1) != 0) {
LAB_105204ac0:
      _objc_release(puVar9);
      goto LAB_105204ac8;
    }
    puVar10 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0720c0();
    if (((ulong)puVar11 & 1) != 0) {
LAB_105204ab4:
      _objc_release(puVar10);
      goto LAB_105204ac0;
    }
    puVar11 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0720c0();
    if (((ulong)puVar12 & 1) != 0) {
LAB_105204aa8:
      _objc_release(puVar11);
      goto LAB_105204ab4;
    }
    puVar12 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c0720c0();
    if (((ulong)puVar13 & 1) != 0) {
LAB_105204a9c:
      _objc_release(puVar12);
      goto LAB_105204aa8;
    }
    puVar13 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c0720c0();
    if (((ulong)puVar14 & 1) != 0) {
LAB_105204a90:
      _objc_release(puVar13);
      goto LAB_105204a9c;
    }
    puVar14 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c0720c0();
    if (((ulong)puVar15 & 1) != 0) {
LAB_105204a84:
      _objc_release(puVar14);
      goto LAB_105204a90;
    }
    puVar15 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c0720c0();
    if (((ulong)puVar16 & 1) != 0) {
      _objc_release(puVar15);
      goto LAB_105204a84;
    }
    puVar16 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c0720c0();
    if (((ulong)puVar17 & 1) == 0) {
      puVar17 = puVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010c0720c0();
      uStack_b4 = (uint)puVar18;
      _objc_release(puVar17);
    }
    else {
      uStack_b4 = 1;
    }
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    if ((uStack_b4 & 1) != 0) goto LAB_105204ae0;
    *param_9 = 4;
    puVar6 = PTR_PTR_1126b6300;
    func_0x00010bf9ff00(PTR_PTR_1126b6300);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105204ad8:
    _objc_release(puVar6);
LAB_105204ae0:
    *param_9 = 4;
    puVar6 = PTR_PTR_1126b6300;
    func_0x00010bf0abe0(PTR_PTR_1126b6300);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
LAB_105204b10:
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105204c60; end: 105204f27; -[SCLegacyDeepLinkProcessor _legacy_processor_handleDeepLinkURL:sourceApplication:additionalInfo:fromExternal:source:legacyProcessor:error:] */

undefined1
FUN_105204c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  uVar2 = 0;
  puStack_80 = &uStack_88;
  _dispatch_semaphore_create();
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_105204f28;
  uStack_98 = 0x105204f38;
  uStack_90 = 0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105204f40;
  puStack_100 = &UNK_110870228;
  puStack_b0 = &uStack_b8;
  _objc_retain(param_8);
  uStack_f8 = param_8;
  puStack_d0 = &uStack_88;
  _objc_retain(param_3);
  uStack_f0 = param_3;
  _objc_retain(param_4);
  uStack_e8 = param_4;
  _objc_retain(param_5);
  uStack_e0 = param_5;
  puStack_c8 = &uStack_b8;
  uStack_c0 = param_7;
  _objc_retain(uVar2);
  ppuVar3 = &puStack_118;
  uStack_d8 = uVar2;
  _objc_retainBlock();
  uVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  _objc_opt_respondsToSelector();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10a140();
    _objc_release(param_1);
  }
  uVar6 = 0;
  _dispatch_time(0,1000000000);
  _dispatch_semaphore_wait(uVar2,uVar6);
  if (((*(byte *)(puStack_80 + 3) & 1) == 0) && (puStack_b0[5] == 0)) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_b0[5];
    puStack_b0[5] = puVar7;
    _objc_release(uVar6);
  }
  uVar6 = puStack_b0[5];
  _objc_retainAutorelease();
  *param_9 = uVar6;
  uVar1 = *(undefined1 *)(puStack_80 + 3);
  _objc_release(ppuVar3);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105204f28; end: 105204f3f;  */

void FUN_105204f28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105204f40; end: 1052050a3;  */

void FUN_105204f40(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar2,PTR_s_handleOpenURL_sourceApplication__1125d20e8);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00010bfd1c20();
  }
  else {
    func_0x00010bfd1d00();
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar1;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1052050a4; end: 10520516b; -[SCLegacyDeepLinkProcessor _canPerformNavigationWithError:] */

ulong FUN_1052050a4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010bf2d020();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar2 = 0;
      *param_3 = puVar3;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf2d040();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 10520516c; end: 1052053c3; -[SCLegacyDeepLinkProcessor _processorCanHandleURL:deepLinkURL:processor:sourceApplication:additionalInfo:fromExternal:source:handlerError:] */

undefined8
FUN_10520516c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *in_stack_00000008;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((*(char *)(param_1 + 0x10) == '\x01') &&
     (uVar1 = param_1, func_0x00010bdd9d00(), (uVar1 & 1) == 0)) {
    lVar2 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    if ((int)lVar3 == 0) {
      uVar1 = param_5;
      _objc_opt_respondsToSelector(param_5,PTR_s_needsNavigationDelegate_112613710);
      if ((uVar1 & 1) == 0) {
        _objc_release(lVar2);
      }
      else {
        uVar1 = param_5;
        func_0x00010c0d73e0();
        _objc_release(lVar2);
        if ((uVar1 & 1) == 0) goto LAB_105205218;
      }
      uVar6 = 0;
      goto LAB_10520537c;
    }
    _objc_release(lVar2);
  }
LAB_105205218:
  uVar1 = param_5;
  _objc_opt_respondsToSelector(param_5,PTR_s_shouldIgnoreDeeplink__112669de8);
  if ((((uVar1 & 1) == 0) || (uVar1 = param_5, func_0x00010c230f00(), (int)uVar1 == 0)) &&
     ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    lVar2 = param_7;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_7;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1f3c0();
      if (((int)lVar4 == 0) ||
         (uVar1 = param_5,
         _objc_opt_respondsToSelector(param_5,PTR_s_canProcessForNewlyRegisteredUser_1125a8e28),
         (uVar1 & 1) == 0)) {
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      else {
        uVar1 = param_5;
        func_0x00010bf2d200();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((uVar1 & 1) == 0) goto LAB_10520530c;
      }
    }
    uVar6 = 1;
  }
  else {
LAB_10520530c:
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uVar6 = 0;
    *in_stack_00000008 = puVar5;
  }
LAB_10520537c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1052053c4; end: 1052056db; -[SCLegacyDeepLinkProcessor _legacy_deepLinkProcessorForFeature:] */

void FUN_1052053c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b62f8;
  func_0x00010bfe4420(PTR_PTR_1126b62f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar4);
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b62f8;
    func_0x00010c07a720();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b62f8;
    if ((int)puVar2 == 0) goto LAB_105205458;
    goto LAB_10520542c;
  }
  _objc_release(puVar4);
LAB_105205458:
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3b58);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecc3d8);
    puVar4 = PTR_PTR_1126b6310;
    if ((((int)uVar1 == 0) &&
        (uVar1 = param_3,
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e07338),
        puVar4 = PTR_PTR_1126b6318, (int)uVar1 == 0)) &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f14978),
       puVar4 = PTR_PTR_1126b6320, (int)uVar1 == 0)) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc7978);
      puVar4 = PTR_PTR_1126b6328;
      if (((int)uVar1 == 0) &&
         (uVar1 = param_3,
         func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83778),
         puVar4 = PTR_PTR_1126b6330, (int)uVar1 == 0)) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e5e018);
        if ((int)uVar1 != 0) {
          puVar4 = PTR_PTR_1126b6338;
          _objc_alloc(PTR_PTR_1126b6338);
          lVar3 = param_1 + 0x20;
          _objc_loadWeakRetained(lVar3);
          func_0x00010c032fa0(puVar4,param_2,lVar3);
          goto LAB_10520552c;
        }
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2c118);
        puVar4 = PTR_PTR_1126b6340;
        if (((int)uVar1 == 0) &&
           (((uVar1 = param_3,
             func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f83858),
             (uVar1 & 1) != 0 ||
             (uVar1 = param_3,
             func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f04d98),
             (uVar1 & 1) != 0)) ||
            (((uVar1 = param_3,
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e38fb8),
              puVar4 = PTR_PTR_1126b6348, (int)uVar1 == 0 &&
              ((uVar1 = param_3,
               func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83898)
               , puVar4 = PTR_PTR_1126b6350, (uVar1 & 1) == 0 &&
               (uVar1 = param_3,
               func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f838b8)
               , puVar4 = PTR_PTR_1126b6350, (int)uVar1 == 0)))) &&
             ((uVar1 = param_3,
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f83838),
              (uVar1 & 1) != 0 ||
              (uVar1 = param_3,
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba938),
              puVar4 = PTR_PTR_1126b6358, (int)uVar1 == 0)))))))) {
          puVar4 = (undefined *)0x0;
          goto LAB_105205538;
        }
      }
LAB_10520542c:
      _objc_alloc(puVar4);
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c02e580(puVar4,param_2,lVar3);
    }
    else {
      _objc_alloc(puVar4);
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c02e6a0(puVar4,param_2,lVar3,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else {
    puVar4 = PTR_PTR_1126b6308;
    _objc_alloc(PTR_PTR_1126b6308);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c02e6c0(puVar4,param_2,lVar3,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
  }
LAB_10520552c:
  _objc_release(lVar3);
LAB_105205538:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1052056dc; end: 105205727; -[SCLegacyDeepLinkProcessor .cxx_destruct] */

void FUN_1052056dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105205728; end: 1052057f7; -[SCLegacyDeepLinkUnauthProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105205728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b62e8;
  _objc_alloc(PTR_PTR_1126b62e8);
  lVar2 = param_1 + _DAT_11271f7d8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e900(puVar1,param_2,0,0,lVar3,0,0,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271f7dc);
  puVar4 = PTR_PTR_1126b62f0;
  _objc_alloc(PTR_PTR_1126b62f0);
  func_0x00010c022260();
  func_0x00010bf9d660(uVar5,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052057f8; end: 10520583f; -[SCLegacyDeepLinkUnauthProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052057f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f7dc,0);
  _objc_destroyWeak(param_1 + _DAT_11271f7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f7e0);
  return;
}



/* Entry: 105205840; end: 1052058ab; -[SCBitmojiDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_105205840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6ea0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052058ac; end: 105205a27; -[SCBitmojiDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_1052058ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_5;
  _objc_retain(param_5);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6360;
  _objc_opt_class(PTR_PTR_1126b6360);
  uVar2 = uVar5;
  func_0x00010beecc40(uVar5,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110870278);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bde75e0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar2;
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1b2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar3 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd1c20(uVar4,param_2,uVar3,param_4,param_5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105205a28; end: 105205a2f;  */

void FUN_105205a28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_bitmojiDeepLinkFactory_1125a4640);
  return;
}



/* Entry: 105205a30; end: 105205a37; -[SCBitmojiDeepLinkProcessor needsNavigationDelegate] */

undefined8 FUN_105205a30(void)

{
  return 0;
}



/* Entry: 105205a38; end: 105205baf; -[SCBitmojiDeepLinkProcessor _containerForModalPresentation:] */

void FUN_105205a38(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  puVar6 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  if ((uVar2 & 1) == 0) {
    puVar5 = puVar6;
    _objc_opt_respondsToSelector(puVar6,PTR_s_modalContainer__112611880);
    _objc_release(puVar6);
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_105205b98;
    }
    puVar5 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar6;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    while (puVar6 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c06d1a0();
      _objc_release(puVar3);
      _objc_release(puVar6);
      if (((ulong)puVar4 & 1) != 0) break;
      puVar3 = puVar5;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar6 = puVar3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
    }
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
  }
  _objc_release(puVar5);
LAB_105205b98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105205bb0; end: 105205c53; -[SCBitmojiDeepLinkProcessor bitmojiDeepLinkProcessorHandler:presentMiddleVCAnimated:deepLinkURL:sourceApplication:] */

void FUN_105205bb0(long param_1)

{
  undefined *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  
  puVar1 = PTR_PTR_1126b1068;
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_alloc(puVar1);
  func_0x00010c057c40();
  _objc_release(in_x5);
  _objc_release(in_x4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d100();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105205c54; end: 105205c8b; -[SCBitmojiDeepLinkProcessor bitmojiDeepLinkProcessorHandlerCanPerformNavigation:] */

long FUN_105205c54(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2d020();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105205c8c; end: 105205c93; -[SCBitmojiDeepLinkProcessor bitmojiDeepLinkProcessorHandlerIsAtFarLeft:] */

undefined8 FUN_105205c8c(void)

{
  return 0;
}



/* Entry: 105205c94; end: 105205c9b; -[SCBitmojiDeepLinkProcessor .cxx_destruct] */

void FUN_105205c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105205c9c; end: 105205d0f; -[SCFeedDeepLinkProcessor initWithPageLauncher:] */

undefined1 * FUN_105205c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6ea8;
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



/* Entry: 105205d10; end: 105205d17; -[SCFeedDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

void FUN_105205d10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleOpenURL_sourceApplication__1125d20e8);
  return;
}



/* Entry: 105205d18; end: 105205f77; -[SCFeedDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:source:] */

undefined8 FUN_105205d18(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong in_x4;
  long in_x5;
  
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126b0ea8;
  _objc_alloc_init(PTR_PTR_1126b0ea8);
  puVar3 = PTR_PTR_1126b6368;
  _objc_alloc_init(PTR_PTR_1126b6368);
  func_0x00010c1a0800(puVar2);
  _objc_release(puVar3);
  if (in_x5 == 7) {
    puVar3 = PTR_PTR_1126b6370;
    _objc_alloc_init(PTR_PTR_1126b6370);
    uVar4 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c08fa60();
    if (uVar4 != 0) {
      func_0x00010c1ce180(puVar3);
    }
    uVar6 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar4 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      func_0x00010c1e6040(puVar3);
    }
    uVar7 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar5);
    uVar6 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    if (uVar6 != 0) {
      func_0x00010bf1f3c0(uVar7);
      func_0x00010c1b1c20(puVar3);
    }
    func_0x00010c1cdde0(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  else {
    puVar3 = PTR_PTR_1126b6378;
    _objc_alloc_init(PTR_PTR_1126b6378);
    func_0x00010c206c40();
    func_0x00010c18a720(puVar2);
  }
  _objc_release(puVar3);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020();
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(in_x4);
  return 1;
}



/* Entry: 105205f78; end: 105205f83; -[SCFeedDeepLinkProcessor .cxx_destruct] */

void FUN_105205f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105205f84; end: 105205fef; -[SCImpalaPublicProfileDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_105205f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6eb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105205ff0; end: 1052060af; -[SCImpalaPublicProfileDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_105205ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f83ab8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  if ((int)uVar2 == 0) {
    func_0x00010c10c9e0();
  }
  else {
    func_0x00010c10d420();
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1052060b0; end: 1052060b7; -[SCImpalaPublicProfileDeepLinkProcessor .cxx_destruct] */

void FUN_1052060b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052060b8; end: 10520618f; -[SCDeepLinkHandlingProcedureAuthenticatedEntryPoint begin] */

void FUN_1052060b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010bdf8ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010be89fe0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105206190; end: 1052061fb;  */

void FUN_105206190(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27f80();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052061fc; end: 1052064b7; -[SCDeepLinkHandlingProcedureAuthenticatedEntryPoint _handleDeepLinkRequestWithProcessorPlugins:transformerPlugins:metricsEmitter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052061fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined *puVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126b6380;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271f7f0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271f7f4;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c22d300();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271f7f8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271f7fc;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c08ee80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271f800;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271f804;
  _objc_loadWeakRetained();
  puVar14 = PTR_PTR_1126b6388;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e7c0(puVar1,param_2,lVar4,param_3,param_4,1,lVar6,lVar8,lVar10,param_5,lVar12,
                      lVar13,puVar14);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar15 = *(undefined8 *)(param_1 + _DAT_11271f808);
  *(undefined **)(param_1 + _DAT_11271f808) = puVar1;
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271f80c;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c13e0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052064b8; end: 10520650f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052064b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c082da0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f808),param_2,
                      param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7eaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105206510; end: 105206537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105206510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f808),
             PTR_s_handleOpenURL_sourceApplication__1125d20c0,param_2,param_3,param_4,param_5,
             param_6);
  return;
}



/* Entry: 105206538; end: 1052065a7; -[SCDeepLinkHandlingProcedureAuthenticatedEntryPoint endDeepLinkHandlingScopeWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105206538(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271f80c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf772c0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052065a8; end: 10520662f; -[SCDeepLinkHandlingProcedureAuthenticatedEntryPoint didReachDeepLinkDestinationWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052065a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_11271f80c;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didReachDeepLinkDestinationWithE_1125bbd20);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf78de0(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105206630; end: 10520688b; -[SCDeepLinkHandlingProcedureAuthenticatedEntryPoint _deepLinkMetricsEmitter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105206630(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar1 = param_1 + _DAT_11271f80c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c13e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b6390;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271f7fc;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c08ee80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271f7f8;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf67ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271f800;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271f810;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c266da0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c680(puVar3);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_80,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10520688c; end: 1052068ab;  */

void FUN_10520688c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1052068ac; end: 105206bbf; -[SCDeepLinkHandlingProcedureAuthenticatedEntryPoint _registeredPluginsWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052068ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_98,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271f814);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105206c0c;
  puStack_b0 = &UNK_110842998;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(puVar1);
  puStack_a8 = puVar1;
  func_0x00010bf9d5c0(uVar9);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271f818);
  puVar8 = auStack_98;
  _objc_copyWeak(auStack_d0,puVar8);
  _objc_retain(puVar2);
  func_0x00010bf9d5c0(uVar9);
  puVar6 = PTR_PTR_1126ae558;
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_90 = puVar3;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_retain(param_3);
  param_1 = param_1 + _DAT_11271f80c;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(puVar6);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_release(puStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(param_3);
  puVar6 = PTR_PTR_1126b6398;
  _objc_retain(puVar8);
  _objc_alloc(puVar6);
  func_0x00010c037380();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105206bc0; end: 105206c0b;  */

void FUN_105206bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6398;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105206c0c; end: 105206cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105206c0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + _DAT_11271f81c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar4;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105206cd8; end: 105206d23;  */

void FUN_105206cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b63a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105206d24; end: 105206def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105206d24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + _DAT_11271f820;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar4;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105206df0; end: 105206e6f;  */

void FUN_105206df0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c089820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


