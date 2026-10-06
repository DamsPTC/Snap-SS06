/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b87460c; end: 10b87462b; -[SIGTabBarView _minimumSpacingBetweenTabs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b87460c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4030000000000000;
  if (*(long *)(param_1 + _DAT_1127952dc) != 0) {
    uVar1 = 0x4024000000000000;
  }
  return uVar1;
}



/* Entry: 10b87462c; end: 10b87464f; -[SIGTabBarView _roomySpacingBetweenTabs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b87462c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4040000000000000;
  if (*(long *)(param_1 + _DAT_1127952dc) != 0) {
    uVar1 = 0x4034000000000000;
  }
  return uVar1;
}



/* Entry: 10b874650; end: 10b87465f; -[SIGTabBarView theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b874650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127952e0);
}



/* Entry: 10b874660; end: 10b87466f; -[SIGTabBarView spacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b874660(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127952dc);
}



/* Entry: 10b874670; end: 10b87467f; -[SIGTabBarView scrollSpanTabAndCentered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b874670(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127952e8);
}



/* Entry: 10b874680; end: 10b87468f; -[SIGTabBarView selectionViewHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b874680(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127952ec);
}



/* Entry: 10b874690; end: 10b8747fb; +[SIGTabBarAnimator animatorForTransitionToItem:fromItem:] */

void FUN_10b874690(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = param_4;
    func_0x00010c159240();
    if ((uVar2 & 1) == 0) {
      func_0x00010c1fade0(param_4,param_2,1,0);
    }
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b8747fc;
    puStack_60 = &UNK_110842e18;
    _objc_retain(param_3);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10b87480c;
    puStack_90 = &UNK_1108529c0;
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_3);
    lStack_80 = param_3;
    func_0x00010c142dc0(0x3fd3333333333333,0,puVar3,param_2,0x20004,&puStack_78,&puStack_a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5bc0();
    _objc_alloc(param_1);
    func_0x00010bff3060();
    _objc_release(puVar3);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_58);
    uVar4 = param_1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b8747fc; end: 10b874837;  */

void FUN_10b8747fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSelected_animated__11265c5a0,1,1);
  return;
}



/* Entry: 10b874838; end: 10b8748ab; -[SIGTabBarAnimator initWithAnimator:] */

undefined1 * FUN_10b874838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b708;
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



/* Entry: 10b8748ac; end: 10b8748ef; -[SIGTabBarAnimator dealloc] */

void FUN_10b8748ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0();
  puStack_28 = PTR_PTR_11270b708;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b8748f0; end: 10b8748f7; -[SIGTabBarAnimator updateAnimationFractionComplete:] */

void FUN_10b8748f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19efb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFractionComplete__112645608);
  return;
}



/* Entry: 10b8748f8; end: 10b874933; -[SIGTabBarAnimator cancel] */

void FUN_10b8748f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2559c0(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010bfaf6c0(*(undefined8 *)(param_1 + 8),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b874934; end: 10b87496b; -[SIGTabBarAnimator complete:] */

void FUN_10b874934(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  func_0x00010c1ede40(*(undefined8 *)(param_1 + 8),param_2,param_3 ^ 1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b87496c; end: 10b874977; -[SIGTabBarAnimator .cxx_destruct] */

void FUN_10b87496c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b874978; end: 10b8749cf; +[SIGTabBarViewItem tabBarViewItemWithText:] */

void FUN_10b874978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b09e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c051220();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8749d0; end: 10b874a43; +[SIGTabBarViewItem tabBarViewItemWithText:accessibilityIdentifier:] */

void FUN_10b8749d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b09e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c051220();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b874a44; end: 10b874abb; +[SIGTabBarViewItem tabBarViewItemWithText:target:selector:] */

void FUN_10b874a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b09e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c051220();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b874abc; end: 10b874b4f; +[SIGTabBarViewItem tabBarViewItemWithText:accessibilityIdentifier:target:selector:] */

void FUN_10b874abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b09e0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c051220();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b874b50; end: 10b874c2b; -[SIGTabBarViewItem initWithText:accessibilityIdentifier:target:selector:] */

undefined1 *
FUN_10b874b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270b710;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b874c2c; end: 10b874c53; -[SIGTabBarViewItem setSelected:animated:] */

void FUN_10b874c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 10) = param_4;
  func_0x00010c1fadc0();
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 10b874c54; end: 10b874c5b; -[SIGTabBarViewItem badged] */

undefined1 FUN_10b874c54(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b874c5c; end: 10b874c63; -[SIGTabBarViewItem setBadged:] */

void FUN_10b874c5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b874c64; end: 10b874c6b; -[SIGTabBarViewItem selected] */

undefined1 FUN_10b874c64(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b874c6c; end: 10b874c73; -[SIGTabBarViewItem setSelected:] */

void FUN_10b874c6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b874c74; end: 10b874c7b; -[SIGTabBarViewItem text] */

undefined8 FUN_10b874c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b874c7c; end: 10b874c93; -[SIGTabBarViewItem target] */

void FUN_10b874c7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b874c94; end: 10b874c9b; -[SIGTabBarViewItem selector] */

undefined8 FUN_10b874c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b874c9c; end: 10b874ca3; -[SIGTabBarViewItem wantsAnimation] */

undefined1 FUN_10b874c9c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b874ca4; end: 10b874cab; -[SIGTabBarViewItem accessibilityIdentifier] */

undefined8 FUN_10b874ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b874cac; end: 10b874ce3; -[SIGTabBarViewItem .cxx_destruct] */

void FUN_10b874cac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b874ce4; end: 10b8753af; -[SIGTabBarViewItemView initWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b874ce4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_c8 = PTR_PTR_11270b718;
  dVar32 = *(double *)PTR__CGRectZero_110347608;
  dVar33 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar34 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar35 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  puVar2 = &uStack_d0;
  dVar28 = dVar32;
  dVar29 = dVar33;
  dVar30 = dVar34;
  dVar31 = dVar35;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar27 = (long)_DAT_112795314;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar27);
    *(undefined8 **)((long)puVar2 + lVar27) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(dVar32,dVar33,dVar34,dVar35);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112795318);
    *(undefined **)((long)puVar2 + (long)_DAT_112795318) = puVar4;
    _objc_release(uVar3);
    _objc_retain(puVar4);
    func_0x00010c219b60(puVar4);
    func_0x00010c21ad00(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4);
    _objc_release(puVar5);
    puVar6 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar4);
    _objc_release(puVar6);
    func_0x00010c213040(puVar4);
    puVar7 = PTR_PTR_1126c51b8;
    _objc_alloc();
    func_0x00010c04eae0();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11279531c);
    *(undefined **)((long)puVar2 + (long)_DAT_11279531c) = puVar7;
    _objc_release(uVar3);
    _objc_retain(puVar7);
    func_0x00010c219b60(puVar7);
    puVar8 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(dVar32);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112795320);
    *(undefined **)((long)puVar2 + (long)_DAT_112795320) = puVar8;
    _objc_release(uVar3);
    _objc_retain(puVar8);
    func_0x00010c219b60(puVar8);
    func_0x00010c21ad00(puVar8);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar8);
    _objc_release(puVar5);
    puVar6 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar8);
    _objc_release(puVar6);
    func_0x00010c213040(puVar8);
    func_0x00010c1677c0(0,puVar8);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    puStack_c0 = puVar10;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar7;
    puStack_b8 = puVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    dVar28 = 4.0;
    puVar16 = puVar14;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar7;
    puStack_b0 = puVar16;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar8;
    puStack_a8 = puVar19;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar2;
    func_0x00010bf34860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar8;
    puStack_a0 = puVar22;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar2;
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar9);
    func_0x00010befbd60(puVar2);
    func_0x00010befbd60(puVar2);
    func_0x00010befbd60(puVar2);
    func_0x00010befbd60(puVar2);
    puVar6 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined8 *)0x0) {
      puVar12 = param_3;
      func_0x00010c15ac20();
      _objc_release(puVar6);
      if (puVar12 != (undefined8 *)0x0) {
        puVar5 = PTR_PTR_1126e1650;
        _objc_alloc_init();
        lVar27 = (long)_DAT_112795324;
        uVar3 = *(undefined8 *)((long)puVar2 + lVar27);
        *(undefined **)((long)puVar2 + lVar27) = puVar5;
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)((long)puVar2 + lVar27);
        puVar6 = param_3;
        func_0x00010c269d40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15ac20(param_3);
        func_0x00010befbd40(uVar3);
        _objc_release(puVar6);
      }
    }
    func_0x00010befa220(param_3);
    func_0x00010befa220(param_3);
    func_0x00010c159240(param_3);
    func_0x00010c1fadc0(puVar2);
    func_0x00010bf15640(param_3);
    func_0x00010c16ee20(puVar2);
    func_0x00010bead480(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    dVar29 = dVar33;
    dVar30 = dVar34;
    dVar31 = dVar35;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
  puVar2 = param_3;
  func_0x00010c0699c0(param_3);
  bVar1 = false;
  if ((dVar30 == dVar28) && (bVar1 = false, !NAN(dVar31) && !NAN(dVar29))) {
    bVar1 = dVar31 == dVar29;
  }
  if (!bVar1) {
    lVar27 = (long)param_3 + (long)_DAT_112795328;
    _objc_loadWeakRetained(lVar27);
    func_0x00010bdc28a0();
    _objc_release(lVar27);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    return param_3;
  }
  return puVar2;
}



/* Entry: 10b8753b0; end: 10b87542b; -[SIGTabBarViewItemView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8753b0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  
  func_0x00010bf20c00();
  func_0x00010c0699c0(param_5);
  bVar1 = false;
  if ((param_3 == param_1) && (bVar1 = false, !NAN(param_4) && !NAN(param_2))) {
    bVar1 = param_4 == param_2;
  }
  if (!bVar1) {
    lVar2 = param_5 + _DAT_112795328;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bdc28a0();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    return;
  }
  return;
}



/* Entry: 10b87542c; end: 10b87549b; -[SIGTabBarViewItemView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87542c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_112795314;
  func_0x00010c12d580(*(undefined8 *)(param_1 + lVar1),param_2,param_1,
                      &PTR____CFConstantStringClassReference_110ed3f18);
  func_0x00010c12d580(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_11270b718;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b87549c; end: 10b875557; -[SIGTabBarViewItemView setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87549c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  *(long *)(param_1 + _DAT_11279532c) = param_3;
  if (param_3 == 1) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112795320));
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1db930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPillStyle_112654870);
    return;
  }
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112795320));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b875558; end: 10b875823; -[SIGTabBarViewItemView setPillStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875558(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112795320;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar11));
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112795318;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  uStack_90 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar1;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_a0 = uVar3;
  uStack_88 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_a8 = uVar4;
  func_0x00010c2793a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010beef8c0(puStack_b0);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(lVar10);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  lVar10 = param_1;
  func_0x00010c069fa0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b875824;
  lVar8 = lVar10;
  uStack_e0 = uVar3;
  lStack_d8 = lVar11;
  uStack_d0 = uVar7;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010c07d660();
  if ((int)puVar9 != (int)lVar8) {
    puStack_e8 = PTR_PTR_11270b718;
    lStack_f0 = lVar10;
    _objc_msgSendSuper2(&lStack_f0,PTR_s_setSelected__11265c598,puVar9);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010c1677c0(0,*(undefined8 *)(lVar10 + _DAT_112795320));
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar10 + _DAT_112795318));
    }
    else {
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar10 + _DAT_112795320));
      func_0x00010c1677c0(0,*(undefined8 *)(lVar10 + _DAT_112795318));
      lVar11 = lVar10 + _DAT_112795328;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c2a19a0(*(undefined8 *)(lVar10 + _DAT_112795314));
      func_0x00010bdc2880(lVar11);
      _objc_release(lVar11);
    }
  }
  return;
}



/* Entry: 10b875824; end: 10b875903; -[SIGTabBarViewItemView setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875824(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c07d660();
  if ((int)param_3 != (int)lVar1) {
    puStack_38 = PTR_PTR_11270b718;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_setSelected__11265c598,param_3);
    if ((param_3 & 1) == 0) {
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_112795320));
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112795318));
    }
    else {
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112795320));
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_112795318));
      lVar1 = param_1 + _DAT_112795328;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c2a19a0(*(undefined8 *)(param_1 + _DAT_112795314));
      func_0x00010bdc2880(lVar1);
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 10b875904; end: 10b875917; -[SIGTabBarViewItemView setBadged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875904(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279531c),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 10b875918; end: 10b87597f; -[SIGTabBarViewItemView setTabBarItemViewText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795318);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112795320));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b875980; end: 10b875a7f; -[SIGTabBarViewItemView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b875980(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112795318));
  lVar1 = param_2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar2 == 0) {
    uVar5 = 0x4043000000000000;
  }
  else {
    lVar3 = *(long *)PTR__UIContentSizeCategoryExtraExtraExtraLarge_110345b40;
    _UIContentSizeCategoryCompareToCategory(lVar3,lVar2);
    if (lVar3 == -1) {
      uVar5 = 0x4049000000000000;
    }
    else {
      lVar3 = *(long *)PTR__UIContentSizeCategoryExtraLarge_110345b50;
      _UIContentSizeCategoryCompareToCategory(lVar3,lVar2);
      uVar5 = 0x4046000000000000;
      if (lVar3 != -1) {
        uVar5 = 0x4043000000000000;
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = 0x4040000000000000;
  if (*(long *)(param_2 + _DAT_11279532c) != 1) {
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10b875a80; end: 10b875be3; -[SIGTabBarViewItemView observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = (long)_DAT_112795314;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    puStack_58 = PTR_PTR_11270b718;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,param_4,
                        param_5,param_6);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    if ((int)uVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      if ((int)uVar3 != 0) {
        func_0x00010bf15640(*(undefined8 *)(param_1 + lVar4));
        func_0x00010c16ee20(param_1);
      }
    }
    else {
      func_0x00010c159240(*(undefined8 *)(param_1 + lVar4));
      func_0x00010c1fadc0(param_1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b875be4; end: 10b875c3b; -[SIGTabBarViewItemView _touchUpInside] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875be4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112795314;
  func_0x00010c1fade0(*(undefined8 *)(param_1 + lVar1),param_2,1,1);
  func_0x00010c16ee20(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c15b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795324),PTR_s_sendActionsWithSender__112634758,
             *(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10b875c3c; end: 10b875ceb; -[SIGTabBarViewItemView _touchDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875c3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112795314);
  func_0x00010c159240();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112795318);
    _objc_retain(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b875cec;
    puStack_30 = &UNK_110842e18;
    uStack_28 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf03400(0x3fb999999999999a,puVar1,param_2,&puStack_48);
    _objc_release(uStack_28);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10b875cec; end: 10b875cf7;  */

void FUN_10b875cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHighlighted__112647c38,1);
  return;
}



/* Entry: 10b875cf8; end: 10b875da7; -[SIGTabBarViewItemView _touchUpOutside] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875cf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112795314);
  func_0x00010c159240();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112795318);
    _objc_retain(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b875da8;
    puStack_30 = &UNK_110842e18;
    uStack_28 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf03400(0x3fb999999999999a,puVar1,param_2,&puStack_48);
    _objc_release(uStack_28);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10b875da8; end: 10b875db3;  */

void FUN_10b875da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHighlighted__112647c38,0);
  return;
}



/* Entry: 10b875db4; end: 10b875e1f; -[SIGTabBarViewItemView _setupKarma] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875db4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c160fc0(*(undefined8 *)(param_1 + _DAT_112795318),param_2,
                      &PTR____CFConstantStringClassReference_110f8abf8);
  ppuVar2 = *(undefined ***)(param_1 + _DAT_112795314);
  func_0x00010beecec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f8ac18;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  func_0x00010c160fc0(param_1,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10b875e20; end: 10b875e3f; -[SIGTabBarViewItemView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875e20(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112795328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b875e40; end: 10b875e53; -[SIGTabBarViewItemView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875e40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112795328,param_3);
  return;
}



/* Entry: 10b875e54; end: 10b875e63; -[SIGTabBarViewItemView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b875e54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795314);
}



/* Entry: 10b875e64; end: 10b875e73; -[SIGTabBarViewItemView theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b875e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279532c);
}



/* Entry: 10b875e74; end: 10b875eef; -[SIGTabBarViewItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b875e74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795314,0);
  _objc_destroyWeak(param_1 + _DAT_112795328);
  _objc_storeStrong(param_1 + _DAT_112795324,0);
  _objc_storeStrong(param_1 + _DAT_112795320,0);
  _objc_storeStrong(param_1 + _DAT_11279531c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795318,0);
  return;
}



/* Entry: 10b875ef0; end: 10b875f37; -[SIGThumbnail initWithMediaType:] */

long FUN_10b875ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (param_1 != 0) {
    func_0x00010c1c5440(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10b875f38; end: 10b87628b; -[SIGThumbnail initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b875f38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  puStack_88 = PTR_PTR_11270b720;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112795330) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112795334) = 0;
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112795338);
    *(undefined **)((long)puVar1 + (long)_DAT_112795338) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11279533c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a4b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_112795340;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_112795344;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_112795348;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11279534c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1bff00(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126e18b8;
    _objc_alloc();
    func_0x00010c04c1a0();
    lVar6 = (long)_DAT_112795350;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010beaab80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b87628c; end: 10b8762d7; -[SIGThumbnail setMediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87628c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112795354) = param_3;
  func_0x00010beb40c0();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112795340));
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795344),PTR_s_setText__1126625f0,0);
  return;
}



/* Entry: 10b8762d8; end: 10b8762e7; -[SIGThumbnail setBackupStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8762d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795350),PTR_s_setBackupStatus__1126394b0);
  return;
}



/* Entry: 10b8762e8; end: 10b87636f; -[SIGThumbnail setMediaDuration:] */

/* WARNING: Possible PIC construction at 0x00010b876338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b87633c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8762e8(double param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  func_0x00010be45700();
  if ((param_1 <= 0.0) || ((uVar2 & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_2 + (long)_DAT_112795344);
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010be18a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + (long)_DAT_112795344);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setText__1126625f0,uVar2);
  return;
}



/* Entry: 10b876370; end: 10b87647b; -[SIGThumbnail setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b876370(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(char *)(param_1 + _DAT_112795330) = (char)param_3;
  lVar3 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar2 = lVar3;
    func_0x00010bf338e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112795348));
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = (long)_DAT_11279533c;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11279534c));
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  lVar2 = lVar3;
  func_0x00010bf338a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112795348));
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c12c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279534c),PTR_s_removeFromSuperlayer_112628c70);
  return;
}



/* Entry: 10b87647c; end: 10b876507; -[SIGThumbnail setSelectEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87647c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112795334) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112795334) = (char)param_3;
  if (param_3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112795348),param_2,1);
    func_0x00010c12c9c0(param_1);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112795348),param_2,0);
    func_0x00010bef9040(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelected__11265c598,0);
  return;
}



/* Entry: 10b876508; end: 10b876517; -[SIGThumbnail setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b876508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279533c),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 10b876518; end: 10b87658f; -[SIGThumbnail resetState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b876518(long param_1,undefined8 param_2)

{
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11279533c),param_2,0);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112795344));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112795348));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112795340));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112795350));
                    /* WARNING: Could not recover jumptable at 0x00010c1fac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectEnabled__11265c538,0);
  return;
}



/* Entry: 10b876590; end: 10b8765cb; -[SIGThumbnail _setupAutolayoutConstraints] */

void FUN_10b876590(undefined8 param_1)

{
  func_0x00010bed5d60();
  func_0x00010bed5c20(param_1);
  func_0x00010bed5d40(param_1);
  func_0x00010bed5d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed5b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraintsForBackupIndic_112593088);
  return;
}



/* Entry: 10b8765cc; end: 10b8767f7; -[SIGThumbnail _updateConstraintsForThumbnailImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8765cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined *puStack_348;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined *puStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined8 **ppuStack_2a0;
  code *pcStack_298;
  undefined *puStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_11279533c;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_90 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  lStack_a0 = lVar1;
  lStack_88 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lStack_a0);
  _objc_release(lStack_98);
  lVar12 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b8767f8;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_148 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = (long)_DAT_112795344;
  lVar10 = *(long *)(lVar12 + lVar13);
  lStack_110 = lVar1;
  lStack_108 = param_1;
  uStack_100 = uVar5;
  uStack_f8 = uVar4;
  uStack_f0 = uVar6;
  lStack_e8 = lVar2;
  uStack_e0 = uVar3;
  puStack_d8 = puVar9;
  uStack_d0 = uVar8;
  uStack_c8 = uVar7;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  lStack_140 = lVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar12 + lVar13);
  lStack_138 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar12 + lVar13);
  uStack_130 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar12 + lVar13);
  uStack_128 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_148);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar10);
  _objc_release(lVar2);
  lVar12 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_10b8769ec;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795340;
  lVar13 = *(long *)(lVar12 + lVar14);
  uStack_1b0 = uVar6;
  uStack_1a8 = uVar5;
  uStack_1a0 = uVar7;
  uStack_198 = uVar4;
  lStack_190 = lVar1;
  uStack_188 = uVar8;
  uStack_180 = uVar3;
  lStack_178 = lVar10;
  lStack_170 = lVar2;
  puStack_168 = puVar9;
  ppuStack_160 = &puStack_c0;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  lStack_1e0 = lVar13;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar12 + lVar14);
  lStack_1d8 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar12 + lVar14);
  uStack_1d0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar12 + lVar14);
  uStack_1c8 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1c0 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1e8);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  lVar12 = lStack_1e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10b876be0;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_288 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795348;
  lVar10 = *(long *)(lVar12 + lVar14);
  uStack_250 = uVar6;
  uStack_248 = uVar5;
  uStack_240 = uVar7;
  uStack_238 = uVar4;
  lStack_230 = lVar1;
  uStack_228 = uVar8;
  uStack_220 = uVar3;
  lStack_218 = lVar13;
  lStack_210 = lVar2;
  puStack_208 = puVar9;
  ppuStack_200 = &ppuStack_160;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  lStack_280 = lVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar12 + lVar14);
  lStack_278 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar12 + lVar14);
  uStack_270 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar12 + lVar14);
  uStack_268 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_260 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_288);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar10);
  _objc_release(lVar2);
  lVar12 = lStack_280;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_10b876dd4;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_328 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795350;
  lVar13 = *(long *)(lVar12 + lVar14);
  uStack_2f0 = uVar6;
  uStack_2e8 = uVar5;
  uStack_2e0 = uVar7;
  uStack_2d8 = uVar4;
  lStack_2d0 = lVar1;
  uStack_2c8 = uVar8;
  uStack_2c0 = uVar3;
  lStack_2b8 = lVar10;
  lStack_2b0 = lVar2;
  puStack_2a8 = puVar9;
  ppuStack_2a0 = &ppuStack_200;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  lStack_320 = lVar13;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar12 + lVar14);
  lStack_318 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c274200(lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar12 + lVar14);
  uStack_310 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar12 + lVar14);
  uStack_308 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_300 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_328);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  lVar1 = lStack_320;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_10b876fc8;
  puStack_368 = PTR_PTR_11270b720;
  lStack_370 = lVar1;
  uStack_360 = uVar3;
  lStack_358 = lVar13;
  lStack_350 = lVar2;
  puStack_348 = puVar9;
  ppuStack_340 = &ppuStack_2a0;
  _objc_msgSendSuper2(&lStack_370,PTR_s_traitCollectionDidChange__11267bf88);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(lVar1 + _DAT_11279534c));
  _objc_release(puVar11);
  _objc_release(puVar9);
  return;
}



/* Entry: 10b8767f8; end: 10b8769eb; -[SIGThumbnail _updateConstraintsForDurationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8767f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = (long)_DAT_112795344;
  lVar1 = *(long *)(param_1 + lVar13);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_90 = lVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  lStack_88 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar13 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b8769ec;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795340;
  lVar11 = *(long *)(lVar13 + lVar14);
  uStack_100 = uVar7;
  uStack_f8 = uVar6;
  uStack_f0 = uVar8;
  uStack_e8 = uVar5;
  lStack_e0 = lVar4;
  uStack_d8 = uVar9;
  uStack_d0 = uVar3;
  lStack_c8 = lVar1;
  lStack_c0 = lVar2;
  puStack_b8 = puVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  lStack_130 = lVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + lVar14);
  lStack_128 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar13 + lVar14);
  uStack_120 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar13 + lVar14);
  uStack_118 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_138);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar13 = lStack_130;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b876be0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795348;
  lVar1 = *(long *)(lVar13 + lVar14);
  uStack_1a0 = uVar7;
  uStack_198 = uVar6;
  uStack_190 = uVar8;
  uStack_188 = uVar5;
  lStack_180 = lVar4;
  uStack_178 = uVar9;
  uStack_170 = uVar3;
  lStack_168 = lVar11;
  lStack_160 = lVar2;
  puStack_158 = puVar10;
  ppuStack_150 = &puStack_b0;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  lStack_1d0 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + lVar14);
  lStack_1c8 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar13 + lVar14);
  uStack_1c0 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar13 + lVar14);
  uStack_1b8 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b0 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d8);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar13 = lStack_1d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_10b876dd4;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_278 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795350;
  lVar11 = *(long *)(lVar13 + lVar14);
  uStack_240 = uVar7;
  uStack_238 = uVar6;
  uStack_230 = uVar8;
  uStack_228 = uVar5;
  lStack_220 = lVar4;
  uStack_218 = uVar9;
  uStack_210 = uVar3;
  lStack_208 = lVar1;
  lStack_200 = lVar2;
  puStack_1f8 = puVar10;
  ppuStack_1f0 = &ppuStack_150;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  lStack_270 = lVar11;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + lVar14);
  lStack_268 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c274200(lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar13 + lVar14);
  uStack_260 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar13 + lVar14);
  uStack_258 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_250 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_278);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar4 = lStack_270;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_10b876fc8;
  puStack_2b8 = PTR_PTR_11270b720;
  lStack_2c0 = lVar4;
  uStack_2b0 = uVar3;
  lStack_2a8 = lVar11;
  lStack_2a0 = lVar2;
  puStack_298 = puVar10;
  ppuStack_290 = &ppuStack_1f0;
  _objc_msgSendSuper2(&lStack_2c0,PTR_s_traitCollectionDidChange__11267bf88);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + _DAT_11279534c));
  _objc_release(puVar12);
  _objc_release(puVar10);
  return;
}



/* Entry: 10b8769ec; end: 10b876bdf; -[SIGThumbnail _updateConstraintsForSpectaclesIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8769ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = (long)_DAT_112795340;
  lVar1 = *(long *)(param_1 + lVar13);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_90 = lVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  lStack_88 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar13 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b876be0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795348;
  lVar11 = *(long *)(lVar13 + lVar14);
  uStack_100 = uVar7;
  uStack_f8 = uVar6;
  uStack_f0 = uVar8;
  uStack_e8 = uVar5;
  lStack_e0 = lVar4;
  uStack_d8 = uVar9;
  uStack_d0 = uVar3;
  lStack_c8 = lVar1;
  lStack_c0 = lVar2;
  puStack_b8 = puVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  lStack_130 = lVar11;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + lVar14);
  lStack_128 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar13 + lVar14);
  uStack_120 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar13 + lVar14);
  uStack_118 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_138);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar13 = lStack_130;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b876dd4;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795350;
  lVar1 = *(long *)(lVar13 + lVar14);
  uStack_1a0 = uVar7;
  uStack_198 = uVar6;
  uStack_190 = uVar8;
  uStack_188 = uVar5;
  lStack_180 = lVar4;
  uStack_178 = uVar9;
  uStack_170 = uVar3;
  lStack_168 = lVar11;
  lStack_160 = lVar2;
  puStack_158 = puVar10;
  ppuStack_150 = &puStack_b0;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  lStack_1d0 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + lVar14);
  lStack_1c8 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c274200(lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar13 + lVar14);
  uStack_1c0 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar13 + lVar14);
  uStack_1b8 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b0 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d8);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar4 = lStack_1d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_10b876fc8;
  puStack_218 = PTR_PTR_11270b720;
  lStack_220 = lVar4;
  uStack_210 = uVar3;
  lStack_208 = lVar1;
  lStack_200 = lVar2;
  puStack_1f8 = puVar10;
  ppuStack_1f0 = &ppuStack_150;
  _objc_msgSendSuper2(&lStack_220,PTR_s_traitCollectionDidChange__11267bf88);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + _DAT_11279534c));
  _objc_release(puVar12);
  _objc_release(puVar10);
  return;
}



/* Entry: 10b876be0; end: 10b876dd3; -[SIGThumbnail _updateConstraintsForSelectIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b876be0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = (long)_DAT_112795348;
  lVar1 = *(long *)(param_1 + lVar13);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_90 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  lStack_88 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar13 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b876dd4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = (long)_DAT_112795350;
  lVar11 = *(long *)(lVar13 + lVar14);
  uStack_100 = uVar7;
  uStack_f8 = uVar6;
  uStack_f0 = uVar8;
  uStack_e8 = uVar5;
  lStack_e0 = lVar4;
  uStack_d8 = uVar9;
  uStack_d0 = uVar3;
  lStack_c8 = lVar1;
  lStack_c0 = lVar2;
  puStack_b8 = puVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  lStack_130 = lVar11;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + lVar14);
  lStack_128 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c274200(lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar13 + lVar14);
  uStack_120 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar13 + lVar14);
  uStack_118 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_138);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar4 = lStack_130;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b876fc8;
  puStack_178 = PTR_PTR_11270b720;
  lStack_180 = lVar4;
  uStack_170 = uVar3;
  lStack_168 = lVar11;
  lStack_160 = lVar2;
  puStack_158 = puVar10;
  ppuStack_150 = &puStack_b0;
  _objc_msgSendSuper2(&lStack_180,PTR_s_traitCollectionDidChange__11267bf88);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + _DAT_11279534c));
  _objc_release(puVar12);
  _objc_release(puVar10);
  return;
}



/* Entry: 10b876dd4; end: 10b876fc7; -[SIGThumbnail _updateConstraintsForBackupIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b876dd4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_112795350;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_90 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  lStack_88 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar4 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b876fc8;
  puStack_d8 = PTR_PTR_11270b720;
  lStack_e0 = lVar4;
  uStack_d0 = uVar3;
  lStack_c8 = lVar1;
  lStack_c0 = lVar2;
  puStack_b8 = puVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_e0,PTR_s_traitCollectionDidChange__11267bf88);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + _DAT_11279534c));
  _objc_release(puVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 10b876fc8; end: 10b87706b; -[SIGThumbnail traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b876fc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b720;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11279534c));
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b87706c; end: 10b8770d7; -[SIGThumbnail _formatDurationLabelString:] */

void FUN_10b87706c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298);
  func_0x00010c167440();
  func_0x00010c2279a0(puVar1,param_3,0x10000);
  puVar2 = puVar1;
  func_0x00010c25d5a0(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8770d8; end: 10b8770f3; -[SIGThumbnail _shouldHideIconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b8770d8(long param_1)

{
  return (*(long *)(param_1 + _DAT_112795354) - 1U & 0xfffffffffffffffd) != 0;
}



/* Entry: 10b8770f4; end: 10b87710b; -[SIGThumbnail _isVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b8770f4(long param_1)

{
  return 1 < *(ulong *)(param_1 + _DAT_112795354);
}



/* Entry: 10b87710c; end: 10b87713b; -[SIGThumbnail _handleSingleTapToSelect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87710c(long param_1)

{
  if (*(char *)(param_1 + _DAT_112795334) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setSelected__11265c598,(*(byte *)(param_1 + _DAT_112795330) ^ 0xff) & 1
              );
    return;
  }
  return;
}



/* Entry: 10b87713c; end: 10b87714b; -[SIGThumbnail isSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b87713c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795330);
}



/* Entry: 10b87714c; end: 10b87715b; -[SIGThumbnail isSelectEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b87714c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795334);
}



/* Entry: 10b87715c; end: 10b8771eb; -[SIGThumbnail .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87715c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795350,0);
  _objc_storeStrong(param_1 + _DAT_11279534c,0);
  _objc_storeStrong(param_1 + _DAT_112795338,0);
  _objc_storeStrong(param_1 + _DAT_112795348,0);
  _objc_storeStrong(param_1 + _DAT_112795344,0);
  _objc_storeStrong(param_1 + _DAT_112795340,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279533c,0);
  return;
}



/* Entry: 10b8771ec; end: 10b8774d7; -[SIGThumbnailBackupIndicator initWithStatus:] */

/* WARNING: Possible PIC construction at 0x00010b877494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b877540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8777c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b877794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8777c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8777e8) */
/* WARNING: Removing unreachable block (ram,0x00010b877544) */
/* WARNING: Removing unreachable block (ram,0x00010b877564) */
/* WARNING: Removing unreachable block (ram,0x00010b8777ec) */
/* WARNING: Removing unreachable block (ram,0x00010b877798) */
/* WARNING: Removing unreachable block (ram,0x00010b8777a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b8771ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_11270b728;
  puVar15 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar15,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar15 != (undefined8 *)0x0) {
    puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar14 = puVar7;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar14;
    func_0x00010bf14aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar17 = (long)_DAT_112795358;
    uVar16 = *(undefined8 *)((long)puVar15 + lVar17);
    *(undefined **)((long)puVar15 + lVar17) = puVar7;
    _objc_release(uVar16);
    _objc_release(puVar1);
    _objc_release(puVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar15 + lVar17));
    func_0x00010befbb60(puVar15);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar15 + lVar17);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar15;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar16;
    uVar3 = *(undefined8 *)((long)puVar15 + lVar17);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar15;
    func_0x00010c1408a0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar9;
    uVar4 = *(undefined8 *)((long)puVar15 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar15;
    func_0x00010c274200(puVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar11;
    uVar5 = *(undefined8 *)((long)puVar15 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar15;
    func_0x00010bf1ff80(puVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar7);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar5);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(puVar6);
    _objc_release(uVar2);
code_r0x00010c16ea40:
                    /* WARNING: Could not recover jumptable at 0x00010c16ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined8 *)0x0;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)((long)puVar15 + (long)_DAT_11279535c) = param_3;
  if (param_3 - 2U < 2) {
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar15 + (long)_DAT_112795358));
    lVar17 = (long)_DAT_112795360;
    puVar6 = *(undefined8 **)((long)puVar15 + lVar17);
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfee420();
      uVar16 = *(undefined8 *)((long)puVar15 + lVar17);
      *(undefined **)((long)puVar15 + lVar17) = puVar7;
      _objc_release(uVar16);
      func_0x00010c1a8560(*(undefined8 *)((long)puVar15 + lVar17));
      func_0x00010c219b60(*(undefined8 *)((long)puVar15 + lVar17));
      func_0x00010befbb60(puVar15);
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar2 = *(undefined8 *)((long)puVar15 + lVar17);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar15;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar15 + lVar17);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar15;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar15 + lVar17);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar15;
      func_0x00010c274200(puVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar15 + lVar17);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar15;
      func_0x00010bf1ff80(puVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(puVar12);
      _objc_release(uVar5);
      _objc_release(uVar11);
      _objc_release(puVar10);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(puVar8);
      _objc_release(uVar3);
      _objc_release(uVar16);
      _objc_release(puVar6);
      _objc_release(uVar2);
      puVar6 = *(undefined8 **)((long)puVar15 + lVar17);
    }
  }
  else if (param_3 == 0) {
    puVar6 = *(undefined8 **)((long)puVar15 + (long)_DAT_112795358);
  }
  else {
    if (param_3 != 1) {
      puVar15 = *(undefined8 **)((long)puVar15 + (long)_DAT_112795360);
      func_0x00010c2558c0(puVar15);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        return puVar15;
      }
      ___stack_chk_fail();
      goto code_r0x00010c16ea40;
    }
    puVar6 = *(undefined8 **)((long)puVar15 + (long)_DAT_112795360);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_setHidden__1126479f8);
  return puVar6;
}



/* Entry: 10b8774d8; end: 10b877857; -[SIGThumbnailBackupIndicator setBackupStatus:] */

/* WARNING: Possible PIC construction at 0x00010b877540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8777c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b877794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8777c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8777e8) */
/* WARNING: Removing unreachable block (ram,0x00010b877544) */
/* WARNING: Removing unreachable block (ram,0x00010b877564) */
/* WARNING: Removing unreachable block (ram,0x00010b8777ec) */
/* WARNING: Removing unreachable block (ram,0x00010b877798) */
/* WARNING: Removing unreachable block (ram,0x00010b8777a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8774d8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(long *)(param_1 + _DAT_11279535c) = param_3;
  if (param_3 - 2U < 2) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112795358),param_2,1);
    lVar15 = (long)_DAT_112795360;
    lVar14 = *(long *)(param_1 + lVar15);
    if (lVar14 == 0) {
      puVar1 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfee420();
      uVar13 = *(undefined8 *)(param_1 + lVar15);
      *(undefined **)(param_1 + lVar15) = puVar1;
      _objc_release(uVar13);
      func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar15));
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
      func_0x00010befbb60(param_1);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar2 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(lVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(lVar14);
      _objc_release(uVar2);
      lVar14 = *(long *)(param_1 + lVar15);
    }
    uVar13 = 0;
  }
  else if (param_3 == 0) {
    lVar14 = *(long *)(param_1 + _DAT_112795358);
    uVar13 = 1;
  }
  else {
    if (param_3 != 1) {
      func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112795360));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c16ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar14 = *(long *)(param_1 + _DAT_112795360);
    uVar13 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar14,PTR_s_setHidden__1126479f8,uVar13);
  return;
}



/* Entry: 10b877858; end: 10b87785f; -[SIGThumbnailBackupIndicator reset] */

void FUN_10b877858(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBackupStatus__1126394b0,0);
  return;
}



/* Entry: 10b877860; end: 10b87786f; -[SIGThumbnailBackupIndicator backupStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b877860(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279535c);
}



/* Entry: 10b877870; end: 10b8778af; -[SIGThumbnailBackupIndicator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b877870(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795358,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795360,0);
  return;
}



/* Entry: 10b8778b0; end: 10b877c07; -[SIGThumbnailCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b8778b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 **ppuStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  long lStack_100;
  undefined8 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_11270b730;
  puVar9 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar9,PTR_s_initWithFrame__1125e2948);
  lVar3 = 0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126e18c0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar11 = (long)_DAT_112795364;
    uVar10 = *(undefined8 *)((long)puVar9 + lVar11);
    *(undefined **)((long)puVar9 + lVar11) = puVar1;
    _objc_release(uVar10);
    func_0x00010c219b60(*(undefined8 *)((long)puVar9 + lVar11));
    puVar1 = PTR_s_contentView_1125b10e0;
    puStack_a8 = PTR_PTR_11270b730;
    ppuVar2 = &puStack_b0;
    puStack_b0 = puVar9;
    _objc_msgSendSuper2(ppuVar2,PTR_s_contentView_1125b10e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar2);
    puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = *(long *)((long)puVar9 + lVar11);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR_PTR_11270b730;
    ppuVar2 = &puStack_c0;
    lStack_100 = lVar3;
    puStack_c0 = puVar9;
    _objc_msgSendSuper2(ppuVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = ppuVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = ppuVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_90 = lVar3;
    uVar10 = *(undefined8 *)((long)puVar9 + lVar11);
    lStack_110 = lVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR_PTR_11270b730;
    ppuVar2 = &puStack_d0;
    uStack_128 = uVar10;
    puStack_d0 = puVar9;
    _objc_msgSendSuper2(ppuVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = ppuVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_130 = ppuVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar10;
    unaff_x20 = *(undefined8 *)((long)puVar9 + lVar11);
    uStack_138 = uVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR_PTR_11270b730;
    ppuVar2 = &puStack_e0;
    puStack_e0 = puVar9;
    _objc_msgSendSuper2(ppuVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar10;
    uVar5 = *(undefined8 *)((long)puVar9 + lVar11);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR_PTR_11270b730;
    ppuVar6 = &puStack_f0;
    puStack_f0 = puVar9;
    _objc_msgSendSuper2(ppuVar6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_120);
    _objc_release(puVar1);
    _objc_release(uVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    _objc_release(unaff_x20);
    _objc_release(uStack_138);
    _objc_release(ppuStack_130);
    _objc_release(ppuStack_118);
    _objc_release(uStack_128);
    _objc_release(lStack_110);
    _objc_release(ppuStack_108);
    _objc_release(ppuStack_f8);
    lVar3 = lStack_100;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b877c08;
  puStack_168 = PTR_PTR_11270b730;
  lStack_170 = lVar3;
  uStack_160 = unaff_x20;
  puStack_158 = puVar9;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_170,PTR_s_prepareForReuse_112620008);
  puVar9 = *(undefined8 **)(lVar3 + _DAT_112795364);
  func_0x00010c139720(puVar9);
  return puVar9;
}



/* Entry: 10b877c08; end: 10b877c57; -[SIGThumbnailCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b877c08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b730;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c139720(*(undefined8 *)(param_1 + _DAT_112795364));
  return;
}



/* Entry: 10b877c58; end: 10b877ceb; +[SIGThumbnailCell cellSize] */

undefined1  [16]
FUN_10b877c58(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  auVar2._0_8_ = (double)(float)(int)((param_1 + -9.0) * 0.25);
  auVar2._8_8_ = 0x4064400000000000;
  return auVar2;
}



/* Entry: 10b877cec; end: 10b877cfb; -[SIGThumbnailCell thumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b877cec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795364);
}



/* Entry: 10b877cfc; end: 10b877d0f; -[SIGThumbnailCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b877cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795364,0);
  return;
}



/* Entry: 10b877d10; end: 10b8783bf; -[SIGThumbnailReorderCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b877d10(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 unaff_x20;
  long lVar14;
  long lVar15;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 **ppuStack_168;
  undefined8 uStack_160;
  undefined8 **ppuStack_158;
  undefined *puStack_150;
  undefined8 **ppuStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_11270b738;
  puVar12 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(puVar12,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar12);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126e18c0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar14 = (long)_DAT_112795368;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar14);
    *(undefined **)((long)puVar12 + lVar14) = puVar1;
    _objc_release(uVar13);
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar14));
    puVar1 = PTR_s_contentView_1125b10e0;
    puStack_c8 = PTR_PTR_11270b738;
    ppuVar2 = &puStack_d0;
    puStack_d0 = puVar12;
    _objc_msgSendSuper2(ppuVar2,PTR_s_contentView_1125b10e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar2);
    puStack_170 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR_PTR_11270b738;
    ppuVar2 = &puStack_e0;
    puStack_150 = (undefined *)uVar13;
    puStack_e0 = puVar12;
    _objc_msgSendSuper2(ppuVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_148 = ppuVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_158 = ppuVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar13;
    uVar3 = *(undefined8 *)((long)puVar12 + lVar14);
    uStack_160 = uVar13;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR_PTR_11270b738;
    ppuVar2 = &puStack_f0;
    uStack_178 = uVar3;
    puStack_f0 = puVar12;
    _objc_msgSendSuper2(ppuVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_168 = ppuVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_180 = ppuVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar3;
    uVar4 = *(undefined8 *)((long)puVar12 + lVar14);
    uStack_188 = uVar3;
    lStack_138 = lVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR_PTR_11270b738;
    ppuVar2 = &puStack_100;
    puStack_140 = puVar1;
    puStack_100 = puVar12;
    _objc_msgSendSuper2(ppuVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR_PTR_11270b738;
    ppuVar7 = &puStack_110;
    puStack_110 = puVar12;
    _objc_msgSendSuper2(ppuVar7,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_170);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(ppuVar5);
    _objc_release(ppuVar2);
    _objc_release(uVar4);
    _objc_release(uStack_188);
    _objc_release(ppuStack_180);
    _objc_release(ppuStack_168);
    _objc_release(uStack_178);
    _objc_release(uStack_160);
    _objc_release(ppuStack_158);
    _objc_release(ppuStack_148);
    _objc_release(puStack_150);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11279536c;
    uVar3 = *(undefined8 *)((long)puVar12 + lVar15);
    *(undefined **)((long)puVar12 + lVar15) = puVar1;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c26e6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar3);
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar13);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar12 + lVar15));
    _objc_release(puVar1);
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08c0e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08c0e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(uVar13);
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar15));
    puVar1 = puStack_140;
    puStack_118 = PTR_PTR_11270b738;
    ppuVar2 = &puStack_120;
    puStack_120 = puVar12;
    _objc_msgSendSuper2(ppuVar2,puStack_140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar2);
    puStack_128 = PTR_PTR_11270b738;
    ppuVar2 = &puStack_130;
    puStack_130 = puVar12;
    _objc_msgSendSuper2(ppuVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300();
    _objc_release(ppuVar2);
    puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar9 = *(long *)((long)puVar12 + lVar15);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lStack_138;
    uVar13 = *(undefined8 *)((long)puVar12 + lStack_138);
    puStack_140 = (undefined *)lVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_148 = (undefined8 **)uVar13;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_b0 = lVar9;
    uVar4 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar3;
    uVar10 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar11 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = uVar11;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_150);
    _objc_release(puVar1);
    _objc_release(unaff_x20);
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(lVar9);
    _objc_release(ppuStack_148);
    puVar1 = puStack_140;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10b8783c0;
  puStack_1b8 = PTR_PTR_11270b738;
  lStack_1c0 = (long)puVar1;
  uStack_1b0 = unaff_x20;
  puStack_1a8 = puVar12;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_1c0,PTR_s_prepareForReuse_112620008);
  puVar12 = *(undefined8 **)((long)puVar1 + (long)_DAT_112795368);
  func_0x00010c139720(puVar12);
  return puVar12;
}



/* Entry: 10b8783c0; end: 10b87840f; -[SIGThumbnailReorderCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8783c0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b738;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c139720(*(undefined8 *)(param_1 + _DAT_112795368));
  return;
}



/* Entry: 10b878410; end: 10b87841f; -[SIGThumbnailReorderCell thumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b878410(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795368);
}



/* Entry: 10b878420; end: 10b87842f; -[SIGThumbnailReorderCell reorderXButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b878420(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279536c);
}



/* Entry: 10b878430; end: 10b87846f; -[SIGThumbnailReorderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878430(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279536c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795368,0);
  return;
}



/* Entry: 10b878470; end: 10b8785df; -[SIGThumbnailReorderCollectionView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b878470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR_PTR_1126e18c8;
  _objc_alloc_init(PTR_PTR_1126e18c8);
  puStack_58 = PTR_PTR_11270b740;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112795370;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined1 **)((long)puVar2 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c1f7ac0(*(undefined8 *)((long)puVar2 + lVar5));
    func_0x00010c1c82c0(0x4008000000000000,*(undefined8 *)((long)puVar2 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112795374);
    *(undefined **)((long)puVar2 + (long)_DAT_112795374) = puVar1;
    _objc_release(uVar4);
    func_0x00010bef9040(puVar2);
    func_0x00010c167740(puVar2);
    func_0x00010c17d4c0(puVar2);
    func_0x00010c18b5e0(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10b8785e0; end: 10b87862b; -[SIGThumbnailReorderCollectionView setReorderDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8785e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c189840(param_1);
  _objc_storeWeak(param_1 + _DAT_112795378,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b87862c; end: 10b878653; -[SIGThumbnailReorderCollectionView collectionView:targetIndexPathForMoveFromItemAtIndexPath:toProposedIndexPath:] */

void FUN_10b87862c(void)

{
  undefined8 in_x3;
  
  _objc_retain(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x3);
  return;
}



/* Entry: 10b878654; end: 10b8786f3; -[SIGThumbnailReorderCollectionView dragAction:] */

void FUN_10b878654(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 < 3) {
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        func_0x00010be28c80(param_1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        func_0x00010be28cc0(param_1,param_2,param_3);
      }
      goto LAB_10b8786e4;
    }
  }
  else if (1 < lVar1 - 4U) {
    if (lVar1 == 3) {
      func_0x00010be28ce0(param_1,param_2,param_3);
    }
    goto LAB_10b8786e4;
  }
  func_0x00010be28ca0(param_1,param_2,param_3);
LAB_10b8786e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8786f4; end: 10b87889f; -[SIGThumbnailReorderCollectionView _handleEditingMoveWhenGestureBegan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8786f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c09ef00(*(undefined8 *)(param_5 + _DAT_112795374),param_6,param_5);
  lVar2 = param_5;
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + _DAT_11279537c);
  *(long *)(param_5 + _DAT_11279537c) = lVar2;
  _objc_retain();
  _objc_release(uVar5);
  lVar3 = param_5;
  func_0x00010bf33b60(param_5,param_6,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5 + _DAT_112795380;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c24ea80();
  _objc_release(lVar6);
  puVar1 = (undefined8 *)(param_5 + _DAT_112795384);
  func_0x00010bfb68e0(lVar3);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bfb68e0(lVar3);
  func_0x00010c013de0();
  lVar6 = (long)_DAT_112795388;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar4;
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x84);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar6),param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010c066fa0(param_5,param_6,*(undefined8 *)(param_5 + lVar6),0);
  lVar6 = lVar3;
  func_0x00010c130b00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar6);
  _CGAffineTransformMakeScale(&uStack_70,0x3fe999999999999a,0x3fe999999999999a);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(lVar3,param_6,&uStack_a0);
  func_0x00010bf182e0(param_5,param_6,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 10b8788a0; end: 10b8788eb; -[SIGThumbnailReorderCollectionView _handleEditingMoveWhenGestureChanged:] */

void FUN_10b8788a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c09ef00(param_5,param_4,param_3);
  func_0x00010c2869e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bebad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s__showSeparatorIfNeeded__11258c500);
  return;
}



/* Entry: 10b8788ec; end: 10b878a4f; -[SIGThumbnailReorderCollectionView _handleEditingMoveWhenGestureEnded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8788ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112795388));
  func_0x00010bf94b20(param_1);
  lVar3 = (long)_DAT_11279537c;
  lVar1 = param_1;
  func_0x00010bf33b60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c130b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112795380;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf947c0();
  _objc_release(lVar2);
  func_0x00010c239d40(*(undefined8 *)(param_1 + _DAT_112795370),param_2,0);
  if (*(long *)(param_1 + _DAT_11279538c) != *(long *)(param_1 + lVar3)) {
    lVar2 = param_1 + _DAT_112795378;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf404c0();
    _objc_release(lVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b878a50;
    puStack_50 = &UNK_110842e18;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10b878a70;
    puStack_78 = &UNK_110841f20;
    lStack_70 = param_1;
    lStack_48 = param_1;
    func_0x00010c0f8420(param_1,param_2,&puStack_68,&puStack_90);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b878a50; end: 10b878a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878a50(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c0d1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s_moveItemAtIndexPath_toIndexPath__112611f68,
             *(undefined8 *)(lVar1 + _DAT_11279537c),*(undefined8 *)(lVar1 + _DAT_11279538c));
  return;
}



/* Entry: 10b878a88; end: 10b878b4f; -[SIGThumbnailReorderCollectionView _handleEditingMoveWhenGestureCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878a88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112795388));
  func_0x00010c239d40(*(undefined8 *)(param_1 + _DAT_112795370),param_2,0);
  func_0x00010bf2e580(param_1);
  lVar4 = (long)_DAT_11279537c;
  lVar1 = param_1;
  func_0x00010bf33b60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c130b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_112795380;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf947c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b878b50; end: 10b878dab; -[SIGThumbnailReorderCollectionView _showSeparatorIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878b50(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  
  lVar12 = (long)_DAT_112795370;
  dVar13 = param_1;
  func_0x00010c084a80(*(undefined8 *)(param_4 + lVar12));
  uVar3 = param_4;
  func_0x00010bfed040(param_1 - dVar13 * 0.25,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bfed040(param_1 + dVar13 * 0.25,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11279537c;
  if ((uVar3 == *(ulong *)(param_4 + lVar11) || uVar4 == *(ulong *)(param_4 + lVar11)) ||
      uVar3 == uVar4) {
    func_0x00010c239d40(*(undefined8 *)(param_4 + lVar12),param_5,0);
    puVar1 = (undefined8 *)(param_4 + (long)_DAT_112795384);
    func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],
                        *(undefined8 *)(param_4 + (long)_DAT_112795388));
    uVar10 = *(undefined8 *)(param_4 + lVar11);
    lVar11 = (long)_DAT_11279538c;
    _objc_retain(uVar10);
    uVar5 = *(undefined8 *)(param_4 + lVar11);
    *(undefined8 *)(param_4 + lVar11) = uVar10;
  }
  else {
    if (uVar4 != 0 && uVar3 != 0) {
      uVar7 = uVar4;
      func_0x00010c142240();
      lVar6 = *(long *)(param_4 + lVar11);
      func_0x00010c142240();
      uVar9 = uVar3;
      if ((long)uVar7 <= lVar6) {
        uVar9 = uVar4;
      }
      lVar6 = (long)_DAT_11279538c;
      _objc_retain(uVar9);
      uVar5 = *(undefined8 *)(param_4 + lVar6);
      *(ulong *)(param_4 + lVar6) = uVar9;
      _objc_release(uVar5);
      func_0x00010c239d40(*(undefined8 *)(param_4 + lVar12),param_5,uVar4);
      lVar6 = *(long *)(param_4 + lVar11);
      func_0x00010c142240();
      lVar12 = lVar6 + 3;
      if (-1 < lVar6) {
        lVar12 = lVar6;
      }
      uVar7 = uVar4;
      func_0x00010c142240();
      uVar9 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar9 = uVar7;
      }
      if (lVar12 >> 2 == (long)uVar9 >> 2) {
        uVar7 = *(ulong *)(param_4 + lVar11);
        func_0x00010c142240();
        uVar9 = uVar7 & 3;
        if (-1 < (long)-uVar7) {
          uVar9 = -(-uVar7 & 3);
        }
        uVar8 = uVar4;
        func_0x00010c142240();
        uVar7 = uVar8 & 3;
        if (-1 < (long)-uVar8) {
          uVar7 = -(-uVar8 & 3);
        }
        pdVar2 = (double *)(param_4 + (long)_DAT_112795384);
        if ((long)uVar9 < (long)uVar7) {
          dVar13 = -5.0;
        }
        else {
          dVar13 = 5.0;
        }
        func_0x00010c19f0e0(*pdVar2 + dVar13,pdVar2[1],pdVar2[2],pdVar2[3],
                            *(undefined8 *)(param_4 + (long)_DAT_112795388));
      }
      goto LAB_10b878c34;
    }
    func_0x00010bf20c00(param_4);
    if (param_1 + dVar13 * 0.5 <= param_3) {
      if (dVar13 * 0.5 <= param_1) goto LAB_10b878c34;
      lVar11 = (long)_DAT_11279538c;
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_4 + lVar11);
      *(ulong *)(param_4 + lVar11) = uVar4;
    }
    else {
      lVar11 = (long)_DAT_11279538c;
      _objc_retain(uVar3);
      uVar5 = *(undefined8 *)(param_4 + lVar11);
      *(ulong *)(param_4 + lVar11) = uVar3;
    }
  }
  _objc_release(uVar5);
LAB_10b878c34:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b878dac; end: 10b878dcb; -[SIGThumbnailReorderCollectionView dragActionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878dac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112795380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


