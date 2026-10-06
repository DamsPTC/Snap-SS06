/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10057d388; end: 10057da6b; -[SIGHeader associateBackgroundView:] */

/* WARNING: Possible PIC construction at 0x00010057daf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057daf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057d388(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar25 = (long)_DAT_1127949a8;
  uVar2 = *(ulong *)(param_1 + lVar25);
  uVar4 = param_3;
  func_0x000107c49cec();
  if ((uVar2 & 1) == 0) {
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar25);
    *(ulong *)(param_1 + lVar25) = param_3;
    func_0x000107c61170(uVar3);
    uVar4 = param_3;
    func_0x000107c5c42c();
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c49cec();
    func_0x000107c61170(uVar4);
    if ((uVar2 & 1) == 0) {
      lVar25 = (long)_DAT_1127949bc;
      if (*(long *)(param_1 + lVar25) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f4();
        func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar3 = *(undefined8 *)(param_1 + lVar25);
        *(undefined **)(param_1 + lVar25) = puVar5;
        func_0x000107c61170(uVar3);
        func_0x000107c61174(puVar5);
        func_0x000107c5a050(puVar5);
        func_0x000107c3d89c(param_1);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar6 = puVar5;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        lVar26 = param_1;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar8 = puVar5;
        func_0x000107c4ace0();
        func_0x000107c61180();
        lVar9 = param_1;
        func_0x000107c4ace0();
        func_0x000107c61180();
        puVar10 = puVar8;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar11 = puVar5;
        func_0x000107c50890();
        func_0x000107c61180();
        lVar12 = param_1;
        func_0x000107c50890(param_1);
        func_0x000107c61180();
        puVar13 = puVar11;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar14 = puVar5;
        func_0x000107c44d9c();
        func_0x000107c61180();
        lVar15 = param_1;
        func_0x000107c44d9c(param_1);
        func_0x000107c61180();
        puVar16 = puVar14;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
        func_0x000107c3d048(puVar1);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(lVar15);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(lVar26);
        func_0x000107c61170(puVar6);
      }
      lVar26 = (long)_DAT_1127949a4;
      if (*(long *)(param_1 + lVar26) == 0) {
        puVar5 = PTR_PTR_1126e1768;
        func_0x000107c610f4();
        func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar3 = *(undefined8 *)(param_1 + lVar26);
        *(undefined **)(param_1 + lVar26) = puVar5;
        func_0x000107c61170(uVar3);
        func_0x000107c61174(puVar5);
        func_0x000107c5a050(puVar5);
        func_0x000107c3d89c(param_1);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar6 = puVar5;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        uVar3 = *(undefined8 *)(param_1 + lVar25);
        func_0x000107c3ec1c();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar8 = puVar5;
        func_0x000107c4ace0();
        func_0x000107c61180();
        lVar25 = param_1;
        func_0x000107c4ace0();
        func_0x000107c61180();
        puVar10 = puVar8;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar11 = puVar5;
        func_0x000107c50890();
        func_0x000107c61180();
        lVar26 = param_1;
        func_0x000107c50890(param_1);
        func_0x000107c61180();
        puVar13 = puVar11;
        func_0x000107c40280();
        func_0x000107c61180();
        puVar14 = puVar5;
        func_0x000107c44d9c();
        func_0x000107c61180();
        puVar16 = puVar14;
        func_0x000107c40290(0x4024000000000000);
        func_0x000107c61180();
        puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
        func_0x000107c3d048(puVar1);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(lVar26);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar25);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(puVar6);
      }
    }
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = param_3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar25 = param_1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar18 = param_3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar26 = param_1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar19 = uVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar20 = param_3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar9 = param_1;
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    uVar21 = uVar20;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar22 = param_3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar12 = param_1;
    func_0x000107c3ec1c(param_1);
    func_0x000107c61180();
    uVar23 = uVar22;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(lVar26);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(uVar4);
    param_1 = param_1 + _DAT_1127949c8;
    func_0x000107c61148();
    uVar4 = param_3;
    func_0x000107c44c74();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c58cf0(*(undefined8 *)(param_3 + (long)_DAT_1127949b4));
  uVar2 = param_3;
  func_0x000107c40f48();
  func_0x000107c61180();
  uVar18 = uVar2;
  func_0x000107c42d50();
  dVar27 = 1.0;
  if (((int)uVar18 != 0) &&
     (dVar27 = (double)NEON_fminnm((double)(long)uVar4 / 45.0,0x3ff0000000000000), dVar27 <= 0.0)) {
    dVar27 = 0.0;
  }
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar27,*(undefined8 *)(param_3 + (long)_DAT_1127949a4),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10057da6c; end: 10057db27; -[SIGHeader setScrollViewVerticalOffset:] */

/* WARNING: Possible PIC construction at 0x00010057daf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057daf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057da6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  func_0x000107c58cf0(*(undefined8 *)(param_1 + _DAT_1127949b4));
  lVar1 = param_1;
  func_0x000107c40f48();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c42d50();
  dVar3 = 1.0;
  if (((int)lVar2 != 0) &&
     (dVar3 = (double)NEON_fminnm((double)param_3 / 45.0,0x3ff0000000000000), dVar3 <= 0.0)) {
    dVar3 = 0.0;
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,*(undefined8 *)(param_1 + _DAT_1127949a4),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10057db28; end: 10057db83; -[SIGHeader currentHeaderItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057db28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127949b4;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af080;
    func_0x000107c610fc(PTR_PTR_1126af080);
    func_0x000107c53c7c(param_1);
    func_0x000107c61170(puVar2);
    lVar1 = *(long *)(param_1 + lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf5eef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_currentHeaderItem_1125b5560);
  return;
}



/* Entry: 10057db84; end: 10057dc07; -[SIGHeaderItem init] */

undefined1 * FUN_10057db84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b550;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x70) = 1;
    *(undefined8 *)((long)puVar1 + 0xa0) = 4;
    puVar2 = PTR_PTR_1126e17b0;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined **)((long)puVar1 + 0xc0) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x10) = 1;
    *(undefined8 *)((long)puVar1 + 0x28) = 0x3ff0000000000000;
    *(undefined2 *)((long)puVar1 + 0x12) = 1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10057dc08; end: 10057dc87; -[SIGHeader setCurrentHeaderItem:] */

/* WARNING: Possible PIC construction at 0x00010057dc54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057dc58) */
/* WARNING: Removing unreachable block (ram,0x00010057dc5c) */
/* WARNING: Removing unreachable block (ram,0x00010057dc74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057dc08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127949b4);
  func_0x000107c40f48(uVar1);
  func_0x000107c61180();
  func_0x000107c49cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10057dc88; end: 10057dd53; -[SIGHeader animateInHeaderItem:withStyle:] */

void FUN_10057dc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR_PTR_1126df778;
  func_0x000107c610f4(PTR_PTR_1126df778);
  func_0x000107c4611c();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10057ddf4;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  uStack_48 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e5fc(puVar1,param_2,&puStack_70);
  func_0x000107c4e544(param_1,param_2,param_4);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10057dd54; end: 10057ddf3; -[SIGAnimationContext initWithContext:cancellingOnDeallocation:] */

undefined1 *
FUN_10057dd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270b5d0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10057ddf4; end: 10057ddff;  */

void FUN_10057ddf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setUpAnimatedTransitionToHeaderI_112664a88,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10057de00; end: 10057e17f; -[SIGHeader setUpAnimatedTransitionToHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10057de00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 **ppuVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c5dc6c();
  func_0x000107c61180();
  lVar16 = (long)_DAT_1127949c4;
  lVar4 = *(long *)(param_1 + lVar16);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170();
  puStack_98 = puVar3;
  puStack_90 = param_3;
  if (lVar4 == 0) {
    puVar5 = PTR_PTR_1126e1770;
    func_0x000107c610f4();
    func_0x000107c3ec60(param_1);
    func_0x000107c469a4();
    func_0x000107c53c7c();
    func_0x000107c5a050(puVar5);
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c56bd8(*(undefined8 *)(param_1 + lVar16));
    }
  }
  else {
    puVar5 = *(undefined **)(param_1 + lVar16);
    func_0x000107c4d9e8();
    func_0x000107c61180();
  }
  lVar4 = param_1 + _DAT_1127949b8;
  func_0x000107c61148(lVar4);
  func_0x000107c59ebc(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c56bfc(puVar5);
  func_0x000107c3d89c(param_1);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar5;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = param_1;
  puStack_a0 = puVar3;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lStack_a8 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar6 = puVar5;
  puStack_b0 = puVar3;
  puStack_88 = puVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar4 = param_1;
  puStack_b8 = puVar6;
  func_0x000107c50890();
  func_0x000107c61180();
  lStack_c0 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar3 = puVar5;
  puStack_80 = puVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  puVar7 = puVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar8 = puVar5;
  puStack_78 = puVar7;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar16 = param_1;
  func_0x000107c3ec1c(param_1);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puStack_c8);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61170(lStack_a8);
  func_0x000107c61170(puStack_a0);
  func_0x000107c526c0(0,puVar5);
  func_0x000107c56a14(puVar5);
  lVar4 = (long)_DAT_1127949b4;
  uVar15 = *(undefined8 *)(param_1 + lVar4);
  lVar16 = (long)_DAT_1127949cc;
  func_0x000107c61174(uVar15);
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  *(undefined8 *)(param_1 + lVar16) = uVar15;
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar5;
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puStack_98);
  puVar12 = puStack_90;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar12;
  }
  func_0x000107c60e78();
  ppuVar13 = &puStack_110;
  pcStack_d8 = FUN_10057e180;
  puStack_108 = PTR_PTR_11270b560;
  puStack_110 = puVar12;
  puStack_100 = puVar5;
  lStack_f8 = lVar4;
  lStack_f0 = param_1;
  uStack_e8 = uVar15;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&puStack_110,PTR_s_initWithFrame__1125e2948);
  if (ppuVar13 != (undefined1 **)0x0) {
    puVar1 = (undefined8 *)((long)ppuVar13 + (long)_DAT_112794c94);
    puVar1[1] = 0x4020000000000000;
    *puVar1 = 0x4018000000000000;
    puVar1[3] = 0x4020000000000000;
    puVar1[2] = 0;
    puVar12 = (undefined1 *)ppuVar13;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar14 = puVar12;
    func_0x000107c40290(0x4043000000000000);
    func_0x000107c61180();
    lVar4 = (long)_DAT_112794c98;
    uVar11 = *(undefined8 *)((long)ppuVar13 + lVar4);
    *(undefined1 **)((long)ppuVar13 + lVar4) = puVar14;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar12);
    func_0x000107c5784c(0x4479c000,*(undefined8 *)((long)ppuVar13 + lVar4));
    func_0x000107c520f4(ppuVar13);
    func_0x000107c3d634(ppuVar13);
    iVar2 = 2;
    FUN_100029b9c(2,0x1a,0,0);
    if (iVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIViewLayoutRegion_1126e17b8;
      func_0x000107c515b0(PTR__OBJC_CLASS___UIViewLayoutRegion_1126e17b8);
      func_0x000107c61180();
      puVar12 = (undefined1 *)ppuVar13;
      func_0x000107c4abf0();
      func_0x000107c61180();
      uVar11 = *(undefined8 *)((long)ppuVar13 + (long)_DAT_112794c9c);
      *(undefined1 **)((long)ppuVar13 + (long)_DAT_112794c9c) = puVar12;
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar3);
    }
    puVar3 = PTR_PTR_1126e17c0;
    func_0x000107c610f4();
    func_0x000107c48bec();
    lVar4 = (long)_DAT_112794ca0;
    uVar11 = *(undefined8 *)((long)ppuVar13 + lVar4);
    *(undefined **)((long)ppuVar13 + lVar4) = puVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c550d8(*(undefined8 *)((long)ppuVar13 + lVar4));
    func_0x000107c3d89c(ppuVar13);
  }
  return (undefined1 *)ppuVar13;
}



/* Entry: 10057e180; end: 10057e313; -[SIGHeaderItemView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10057e180(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270b560;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112794c94);
    puVar1[1] = 0x4020000000000000;
    *puVar1 = 0x4018000000000000;
    puVar1[3] = 0x4020000000000000;
    puVar1[2] = 0;
    puVar4 = (undefined1 *)puVar3;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c40290(0x4043000000000000);
    func_0x000107c61180();
    lVar8 = (long)_DAT_112794c98;
    uVar7 = *(undefined8 *)((long)puVar3 + lVar8);
    *(undefined1 **)((long)puVar3 + lVar8) = puVar5;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c5784c(0x4479c000,*(undefined8 *)((long)puVar3 + lVar8));
    func_0x000107c520f4(puVar3);
    func_0x000107c3d634(puVar3);
    iVar2 = 2;
    FUN_100029b9c(2,0x1a,0,0);
    if (iVar2 != 0) {
      puVar6 = PTR__OBJC_CLASS___UIViewLayoutRegion_1126e17b8;
      func_0x000107c515b0(PTR__OBJC_CLASS___UIViewLayoutRegion_1126e17b8);
      func_0x000107c61180();
      puVar4 = (undefined1 *)puVar3;
      func_0x000107c4abf0();
      func_0x000107c61180();
      uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794c9c);
      *(undefined1 **)((long)puVar3 + (long)_DAT_112794c9c) = puVar4;
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
    }
    puVar6 = PTR_PTR_1126e17c0;
    func_0x000107c610f4();
    func_0x000107c48bec();
    lVar8 = (long)_DAT_112794ca0;
    uVar7 = *(undefined8 *)((long)puVar3 + lVar8);
    *(undefined **)((long)puVar3 + lVar8) = puVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c550d8(*(undefined8 *)((long)puVar3 + lVar8));
    func_0x000107c3d89c(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10057e314; end: 10057e77f; -[SCBlizzardEventLogger _saveFrameEventsAndDrain] */

void FUN_10057e314(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000107c438dc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c40808();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d0430;
    func_0x000107c61160();
    lVar1 = param_1;
    func_0x000107c438dc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3eab0();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c5cf2c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c597b4(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar1 = param_1;
    func_0x000107c438dc();
    func_0x000107c61180();
    lVar7 = lVar1;
    func_0x000107c3db30();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar7;
    func_0x000107c4080c();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          func_0x000107c61128(lVar7);
        }
        uVar12 = *(undefined8 *)(lVar14 * 8);
        uVar11 = uVar12;
        func_0x000107c438d8(uVar12);
        func_0x000107c61180();
        func_0x000107c3d798(puVar5);
        func_0x000107c61170(uVar11);
        func_0x000107c4d3e4(uVar12);
        func_0x000107c61180();
        func_0x000107c3d798(puVar6);
        func_0x000107c61170(uVar12);
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar7;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar7);
    func_0x000107c54708(puVar3);
    func_0x000107c40808(puVar5);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_1;
    func_0x000107c438dc(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3db30();
    func_0x000107c61180();
    lVar7 = lVar2;
    func_0x000107c40808();
    FUN_10057ef24(uVar11,lVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    puVar8 = puVar3;
    func_0x000107c41214(puVar3);
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c49c98();
    if ((int)lVar1 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c423cc(param_1);
      func_0x000107c61180();
      func_0x000107c44180();
      func_0x000107c61170(lVar1);
      lVar1 = param_1;
      func_0x000107c423c4(param_1);
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c438dc(param_1);
      func_0x000107c61180();
      func_0x000107c44e6c();
      func_0x000107c4fb9c(param_1);
      func_0x000107c5d728(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
    }
    lVar1 = param_1;
    func_0x000107c4344c(param_1);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c438dc(param_1);
    func_0x000107c61180();
    func_0x000107c44e6c();
    func_0x000107c4fb9c(param_1);
    func_0x000107c3df14(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c4adac(puVar8);
    func_0x000107c3b5a8(param_1);
    lVar1 = param_1;
    func_0x000107c438dc(param_1);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c438dc(param_1);
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c4ff00(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    func_0x000107c52d74(param_1);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  func_0x000107c60e78();
  if (puRam00000001136c4d88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc();
    puRam00000001136c4d88 = puVar3;
  }
  return;
}



/* Entry: 10057e780; end: 10057e7e7; +[SCAPbDataLoggedEvent descriptor] */

void FUN_10057e780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12eb0,
                        &PTR____CFConstantStringClassReference_110e6f2b8,
                        &PTR_s_snapchat_data_11316f8d8,&PTR_DAT_11316f990,3,0x20,0x1c);
    puRam00000001136c4d88 = puVar1;
  }
  return;
}



/* Entry: 10057e7e8; end: 10057eb0f; -[SCBlizzardFrameStart transformToProtoFrameStart] */

void FUN_10057e7e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d03a0;
  func_0x000107c61160(PTR_PTR_1126d03a0);
  lVar2 = param_1;
  func_0x000107c3dd80(param_1);
  func_0x000107c61180();
  func_0x000107c52758(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3dd84(param_1);
  func_0x000107c52764(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x000107c3de64(param_1);
  func_0x000107c61180();
  func_0x000107c527bc(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3dec4(param_1);
  func_0x000107c61180();
  func_0x000107c52800(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3fb8c(param_1);
  func_0x000107c61180();
  func_0x000107c5345c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3fbb8(param_1);
  func_0x000107c53488(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x000107c41924(param_1);
  func_0x000107c61180();
  func_0x000107c5409c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c4b840(param_1);
  func_0x000107c61180();
  func_0x000107c56024(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c4be04(param_1);
  func_0x000107c61180();
  func_0x000107c560b4(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c570e0(puVar1,param_2,1);
  lVar2 = param_1;
  func_0x000107c4e0d0(param_1);
  func_0x000107c61180();
  func_0x000107c570e8(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c4e0c8(param_1);
  func_0x000107c61180();
  func_0x000107c570dc(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c51f34(param_1);
  func_0x000107c58f68(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x000107c52060(param_1);
  func_0x000107c61180();
  func_0x000107c58fc0(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c5d970(param_1);
  func_0x000107c61180();
  func_0x000107c5a32c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3ead4(param_1);
  func_0x000107c61180();
  func_0x000107c52d7c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c3debc(param_1);
  func_0x000107c527f4(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x000107c3deb8(param_1);
  func_0x000107c527f0(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x000107c509c4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4adac();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x000107c509c4(param_1);
    func_0x000107c61180();
    func_0x000107c57f74(puVar1,param_2,lVar2);
    func_0x000107c61170(lVar2);
  }
  lVar2 = param_1;
  func_0x000107c4d020();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4adac();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c4d020(param_1);
    func_0x000107c61180();
    func_0x000107c56750(puVar1,param_2,param_1);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10057eb10; end: 10057eeef; +[SCAPbDataFrameStart descriptor] */

void FUN_10057eb10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12f00,
                        &PTR____CFConstantStringClassReference_110e6f2d8,
                        &PTR_s_snapchat_data_11316f8d8,&PTR_s_sessionId_11316fbd0,0x2a,0x108,0x1c);
    puRam00000001136c4d90 = puVar1;
  }
  return;
}



/* Entry: 10057eef0; end: 10057eefb;  */

bool FUN_10057eef0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10057eefc; end: 10057ef1b; -[SCBlizzardFrameStart sequenceIdStart] */

undefined8 FUN_10057eefc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10057ef1c; end: 10057ef23; -[SCBlizzardEvent frameEvent] */

undefined8 FUN_10057ef1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10057ef24; end: 10057efbf;  */

void FUN_10057ef24(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095b660);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_11095b660,&uStack_40,param_2 * 10);
      puStack_28 = (undefined1 *)&uStack_40;
      FUN_10007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 10057efc0; end: 10057f04f;  */

undefined8 FUN_10057efc0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0x80) {
    return 1;
  }
  if (param_1 < 0x4000) {
    return 2;
  }
  if (param_1 < 0x200000) {
    return 3;
  }
  if (param_1 >> 0x1c == 0) {
    return 4;
  }
  if (param_1 >> 0x23 == 0) {
    return 5;
  }
  if (param_1 >> 0x2a == 0) {
    return 6;
  }
  if (param_1 >> 0x31 == 0) {
    return 7;
  }
  uVar1 = 9;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = 10;
  }
  uVar2 = 8;
  if (param_1 >> 0x38 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10057f050; end: 10057f08f; -[GPBCodedOutputStream writeDouble:value:] */

void FUN_10057f050(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  
  func_0x000100298744(param_2 + 8,param_4 << 3 | 1);
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x20);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x28);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x30);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x38);
  return;
}



/* Entry: 10057f090; end: 10057f20b;  */

void FUN_10057f090(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)param_2;
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 8);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x10);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x18);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x20);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x28);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x30);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x38);
  return;
}



/* Entry: 10057f20c; end: 10057f213; -[SCBlizzardEventLogger isEagerUploadingEnabledForQueue] */

undefined1 FUN_10057f20c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10057f214; end: 10057f21b; -[SCBlizzardEventLogger filePersistenceSink] */

undefined8 FUN_10057f214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10057f21c; end: 10057f3bb; -[SCBlizzardEventList highestPriority] */

/* WARNING: Possible PIC construction at 0x00010057f318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057f61c) */
/* WARNING: Removing unreachable block (ram,0x00010057f5e0) */
/* WARNING: Removing unreachable block (ram,0x00010057f53c) */
/* WARNING: Removing unreachable block (ram,0x00010057f56c) */
/* WARNING: Removing unreachable block (ram,0x00010057f554) */
/* WARNING: Removing unreachable block (ram,0x00010057f52c) */
/* WARNING: Removing unreachable block (ram,0x00010057f51c) */
/* WARNING: Removing unreachable block (ram,0x00010057f50c) */
/* WARNING: Removing unreachable block (ram,0x00010057f364) */
/* WARNING: Removing unreachable block (ram,0x00010057f3b8) */
/* WARNING: Removing unreachable block (ram,0x00010057f37c) */
/* WARNING: Removing unreachable block (ram,0x00010057f31c) */
/* WARNING: Removing unreachable block (ram,0x00010057f328) */
/* WARNING: Removing unreachable block (ram,0x00010057f338) */
/* WARNING: Removing unreachable block (ram,0x00010057f354) */
/* WARNING: Removing unreachable block (ram,0x00010057f62c) */
/* WARNING: Removing unreachable block (ram,0x00010057f2c0) */

void FUN_10057f21c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if (lRam00000001136c4af8 != -1) {
    FUN_10002a2fc(0x1136c4af8,&PTR___NSConcreteGlobalBlock_11095f110);
  }
  func_0x000107c4d2d8();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c4080c();
  lVar3 = lRam00000001136c4af0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 != 0) {
    func_0x000107c42ae0(uRam0000000000000000);
    func_0x000107c4d960(puVar1);
    func_0x000107c61180();
    func_0x000107c4d9e8(lVar3);
    func_0x000107c61180();
    func_0x000107c5d388();
    param_1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10057f3bc; end: 10057f56f;  */

/* WARNING: Possible PIC construction at 0x00010057f508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057f61c) */
/* WARNING: Removing unreachable block (ram,0x00010057f5e0) */
/* WARNING: Removing unreachable block (ram,0x00010057f53c) */
/* WARNING: Removing unreachable block (ram,0x00010057f56c) */
/* WARNING: Removing unreachable block (ram,0x00010057f554) */
/* WARNING: Removing unreachable block (ram,0x00010057f52c) */
/* WARNING: Removing unreachable block (ram,0x00010057f51c) */
/* WARNING: Removing unreachable block (ram,0x00010057f50c) */
/* WARNING: Removing unreachable block (ram,0x00010057f62c) */

void FUN_10057f3bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8248;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  func_0x000107c61180();
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8260;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar2;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  func_0x000107c61180();
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8278;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar3;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  func_0x000107c61180();
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8290;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar2;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,2);
  func_0x000107c61180();
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c82a8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar3;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,2);
  func_0x000107c61180();
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c82c0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar2;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,2);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_a8,6);
  func_0x000107c61180();
  uVar1 = puRam00000001136c4af0;
  puRam00000001136c4af0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10057f570; end: 10057f64b; -[SCBlizzardFilePersistenceSink appendProtoBytes:eventCount:highestPriority:region:eventNames:eagerUploadId:] */

/* WARNING: Possible PIC construction at 0x00010057f5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010057f628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010057f61c) */
/* WARNING: Removing unreachable block (ram,0x00010057f5e0) */
/* WARNING: Removing unreachable block (ram,0x00010057f62c) */

void FUN_10057f570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  func_0x000107c61174(in_x7);
  func_0x000107c61174(in_x6);
  func_0x000107c61174(param_3);
  func_0x000107c3dbb4(param_1);
  func_0x000107c61180();
  func_0x000107c4fad0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10057f64c; end: 10057f653; -[SCBlizzardFilePersistenceSink allTiersFileQueue] */

undefined8 FUN_10057f64c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10057f654; end: 10057f6bf; -[SCBlizzardAllTiersFileQueue recoverFilesFromPreviousLifecycles] */

void FUN_10057f654(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10057f6c0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4ab8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4ab8,&puStack_38);
  }
  return;
}



/* Entry: 10057f6c0; end: 10057fabf;  */

undefined1 * FUN_10057f6c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c4bfe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar7 = &uStack_1b0;
  lStack_220 = lVar4;
  func_0x000107c4080c();
  if (lVar4 != 0) {
    lVar9 = *plStack_1a0;
    lStack_238 = lVar9;
    lStack_230 = param_1;
    do {
      lVar10 = 0;
      lStack_228 = lVar4;
      do {
        if (*plStack_1a0 != lVar9) {
          func_0x000107c61128(lStack_220);
        }
        uVar11 = *(undefined8 *)(lStack_1a8 + lVar10 * 8);
        lVar1 = *(long *)(param_1 + 0x20);
        func_0x000107c43450();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c4e37c();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if ((lVar2 != 0) && (lVar8 = lVar2, func_0x000107c40808(), lVar8 != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          uStack_218 = uVar11;
          lStack_210 = lVar10;
          func_0x000107c4f244(uVar3);
          func_0x000107c61180();
          func_0x000107c3d930();
          func_0x000107c61170(uVar3);
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          func_0x000107c61174(lVar2);
          lVar4 = lVar2;
          func_0x000107c4080c();
          if (lVar4 == 0) {
            lStack_208 = 0;
            lStack_200 = 0;
            lStack_1f8 = 0;
          }
          else {
            lStack_208 = 0;
            lStack_200 = 0;
            lStack_1f8 = 0;
            lVar1 = *plStack_1e0;
            do {
              lVar9 = 0;
              do {
                if (*plStack_1e0 != lVar1) {
                  func_0x000107c61128(lVar2);
                }
                lVar8 = *(long *)(lStack_1e8 + lVar9 * 8);
                func_0x000107c42aa4(lVar8);
                func_0x000107c43400(lVar8);
                lVar10 = lVar8;
                func_0x000107c49ddc();
                if ((int)lVar10 != 0) {
                  lVar10 = lVar8;
                  func_0x000107c42aa4();
                  lStack_200 = lVar10 + lStack_200;
                  func_0x000107c43400();
                  lStack_1f8 = lVar8 + lStack_1f8;
                }
                lVar9 = lVar9 + 1;
              } while (lVar4 != lVar9);
              lStack_208 = lVar4 + lStack_208;
              lVar4 = lVar2;
              func_0x000107c4080c();
            } while (lVar4 != 0);
          }
          func_0x000107c61170(lVar2);
          param_1 = lStack_230;
          uVar11 = *(undefined8 *)(lStack_230 + 0x20);
          func_0x000107c44490(uVar11);
          func_0x000107c61180();
          FUN_10033bc04();
          func_0x000107c61170(uVar11);
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c44490(uVar11);
          func_0x000107c61180();
          FUN_10033be34();
          func_0x000107c61170(uVar11);
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c44490(uVar11);
          func_0x000107c61180();
          FUN_10033c084();
          func_0x000107c61170(uVar11);
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c44490(uVar11);
          func_0x000107c61180();
          FUN_1005aaa4c();
          func_0x000107c61170(uVar11);
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c44490(uVar11);
          func_0x000107c61180();
          FUN_1005aac7c();
          func_0x000107c61170(uVar11);
          lVar1 = *(long *)(param_1 + 0x20);
          func_0x000107c44490();
          func_0x000107c61180();
          FUN_1005aaeac();
          func_0x000107c61170(lVar1);
          lVar9 = lStack_238;
          lVar4 = lStack_228;
          lVar10 = lStack_210;
        }
        func_0x000107c61170(lVar2);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar4);
      puVar7 = &uStack_1b0;
      lVar4 = lStack_220;
      func_0x000107c4080c();
    } while (lVar4 != 0);
  }
  func_0x000107c61170(lStack_220);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x000107c5ccec();
  puVar5 = (undefined1 *)0x0;
  if (lVar4 != 0) {
    puVar5 = *(undefined1 **)(param_1 + 0x20);
    puVar7 = (undefined8 *)0x0;
    func_0x000107c3b5e4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    ppuVar6 = &puStack_270;
    pcStack_248 = FUN_10057fac0;
    lStack_260 = param_1;
    lStack_258 = lVar1;
    puStack_250 = &stack0xfffffffffffffff0;
    func_0x000107c61174(puVar7);
    puStack_268 = PTR_PTR_11270b568;
    puStack_270 = puVar5;
    func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&puStack_270,
                        PTR_s_initWithFrame__1125e2948);
    if (ppuVar6 != (undefined1 **)0x0) {
      func_0x000107c59b84(ppuVar6);
    }
    func_0x000107c61170(puVar7);
    return (undefined1 *)ppuVar6;
  }
  return puVar5;
}



/* Entry: 10057fac0; end: 10057fb3b; -[SIGHeaderTabBarRow initWithTabBarItems:] */

undefined1 * FUN_10057fac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270b568;
  uStack_30 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c59b84(puVar1);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10057fb3c; end: 10057fe1b; -[SIGHeaderTabBarRow setTabBarItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_10057fb3c(long param_1,undefined8 param_2,undefined8 ***param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 ***pppuVar13;
  undefined8 uVar14;
  undefined8 ***pppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 ***pppuVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 ***pppuVar23;
  undefined8 ***pppuVar24;
  long lVar25;
  long lVar26;
  undefined8 ***pppuVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 **ppuStack_2a8;
  undefined8 **ppuStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [128];
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar26 = (long)_DAT_112794cf4;
  uVar1 = *(ulong *)(param_1 + lVar26);
  pppuVar23 = param_3;
  func_0x000107c49cec();
  if ((uVar1 & 1) == 0) {
    lVar25 = (long)_DAT_112794cf0;
    func_0x000107c4ff34(*(undefined8 *)(param_1 + lVar25));
    puVar2 = PTR_PTR_1126c3ac8;
    func_0x000107c610f4();
    func_0x000107c4700c();
    uVar3 = *(undefined8 *)(param_1 + lVar25);
    *(undefined **)(param_1 + lVar25) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar25);
    func_0x000107c61174(puVar2);
    func_0x000107c58ce8(uVar3);
    func_0x000107c5a050(puVar2);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar26);
    *(undefined8 ****)(param_1 + lVar26) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(param_1);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar26 = param_1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar25 = param_1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar9 = param_1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar10 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar11 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    param_4 = (undefined1 *)0x4;
    pppuVar13 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    pppuVar23 = pppuVar13;
    func_0x000107c3d048(puVar17);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(pppuVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar26);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return param_3;
  }
  func_0x000107c60e78();
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar20 = pppuVar23;
  func_0x000107c61174(pppuVar23);
  puStack_240 = PTR_PTR_11270b700;
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  pppuVar13 = &ppuStack_248;
  ppuStack_248 = param_3;
  func_0x000107c61154(uVar3,uVar28,uVar29,uVar30,pppuVar13,PTR_s_initWithFrame__1125e2948);
  if (pppuVar13 != (undefined8 ***)0x0) {
    uVar22 = *(undefined8 *)PTR__UIContentSizeCategoryUnspecified_110345b80;
    lVar21 = (long)_DAT_1127952c4;
    func_0x000107c61174(uVar22);
    uVar14 = *(undefined8 *)((long)pppuVar13 + lVar21);
    *(undefined8 *)((long)pppuVar13 + lVar21) = uVar22;
    func_0x000107c61170(uVar14);
    func_0x000107c56384(pppuVar13);
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar3,uVar28,uVar29,uVar30);
    uVar14 = *(undefined8 *)((long)pppuVar13 + (long)_DAT_1127952c8);
    *(undefined **)((long)pppuVar13 + (long)_DAT_1127952c8) = puVar2;
    func_0x000107c61170(uVar14);
    func_0x000107c61174(puVar2);
    func_0x000107c5a050(puVar2);
    func_0x000107c5928c(puVar2);
    func_0x000107c59284(puVar2);
    func_0x000107c3d89c(pppuVar13);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar20 = pppuVar13;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = puVar2;
    puStack_170 = puVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    pppuVar27 = pppuVar13;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar2;
    puStack_168 = puVar7;
    func_0x000107c50890();
    func_0x000107c61180();
    pppuVar15 = pppuVar13;
    func_0x000107c50890(pppuVar13);
    func_0x000107c61180();
    puVar10 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar11 = puVar2;
    puStack_160 = puVar10;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar24 = pppuVar13;
    func_0x000107c3ec1c(pppuVar13);
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_158 = puVar12;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(pppuVar24);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(pppuVar15);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(pppuVar27);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(pppuVar20);
    func_0x000107c61170(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar3,uVar28,uVar29,uVar30);
    func_0x000107c5a050();
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(puVar4);
    func_0x000107c61170(puVar17);
    func_0x000107c3d89c(puVar2);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppuVar20 = pppuVar13;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar7 = puVar4;
    puStack_190 = puVar6;
    func_0x000107c5e308();
    func_0x000107c61180();
    pppuVar27 = pppuVar13;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar10 = puVar4;
    puStack_188 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar15 = pppuVar13;
    func_0x000107c3ec1c(pppuVar13);
    func_0x000107c61180();
    puVar11 = puVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar12 = puVar4;
    puStack_180 = puVar11;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar16 = puVar12;
    func_0x000107c40290(0x3ff0000000000000);
    func_0x000107c61180();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_178 = puVar16;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar17);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(pppuVar15);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(pppuVar27);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(pppuVar20);
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126e18a8;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)pppuVar13 + (long)_DAT_1127952cc);
    *(undefined **)((long)pppuVar13 + (long)_DAT_1127952cc) = puVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar5);
    func_0x000107c3d89c(puVar2);
    puVar6 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)pppuVar13 + (long)_DAT_1127952d0);
    *(undefined **)((long)pppuVar13 + (long)_DAT_1127952d0) = puVar6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar6);
    func_0x000107c3d72c(pppuVar13);
    puVar17 = puVar6;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar10 = puVar17;
    func_0x000107c40290(0);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)pppuVar13 + (long)_DAT_1127952d4);
    *(undefined **)((long)pppuVar13 + (long)_DAT_1127952d4) = puVar10;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar10);
    func_0x000107c61170(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar11 = puVar6;
    puStack_1b0 = puVar10;
    func_0x000107c3f75c();
    func_0x000107c61180();
    pppuVar27 = pppuVar13;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar16 = puVar6;
    puStack_1a8 = puVar12;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    pppuVar15 = pppuVar13;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar19 = puVar6;
    puStack_1a0 = puVar18;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    pppuVar20 = pppuVar13;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar8 = puVar19;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_198 = puVar8;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c3d048(puVar17);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(pppuVar20);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(pppuVar15);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(pppuVar27);
    func_0x000107c61170(puVar11);
    puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c40808(pppuVar23);
    func_0x000107c3e170();
    func_0x000107c61180();
    func_0x000107c61174(pppuVar23);
    param_4 = auStack_230;
    pppuVar20 = pppuVar23;
    func_0x000107c4080c();
    lVar21 = lRam0000000000000000;
    if (pppuVar20 == (undefined8 ***)0x0) {
      func_0x000107c61170(pppuVar23);
LAB_100580728:
      ppuStack_2a8 = pppuVar23;
      func_0x000107c43638();
      func_0x000107c61180();
    }
    else {
      ppuStack_2a8 = (undefined8 ***)0x0;
      do {
        pppuVar27 = (undefined8 ***)0x0;
        do {
          if (lRam0000000000000000 != lVar21) {
            func_0x000107c61128(pppuVar23);
          }
          pppuVar24 = *(undefined8 ****)((long)pppuVar27 * 8);
          pppuVar15 = pppuVar24;
          func_0x000107c51c54();
          if ((int)pppuVar15 != 0) {
            if ((undefined8 ***)ppuStack_2a8 == (undefined8 ***)0x0) {
              func_0x000107c61174(pppuVar24);
              ppuStack_2a8 = pppuVar24;
            }
            else {
              func_0x000107c58dd8(pppuVar24);
            }
          }
          puVar8 = PTR_PTR_1126e18b0;
          func_0x000107c610f4();
          func_0x000107c46fb8();
          func_0x000107c5a050();
          func_0x000107c3d89c(puVar2);
          func_0x000107c3d798(puVar17);
          puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar11 = puVar8;
          func_0x000107c3f764();
          func_0x000107c61180();
          puVar12 = puVar2;
          func_0x000107c3f764();
          func_0x000107c61180();
          puVar16 = puVar11;
          func_0x000107c40280();
          func_0x000107c61180();
          puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_238 = puVar16;
          func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c61180();
          func_0x000107c3d048(puVar7);
          func_0x000107c61170(puVar18);
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar12);
          func_0x000107c61170(puVar11);
          func_0x000107c53fcc(puVar8);
          func_0x000107c61170(puVar8);
          pppuVar27 = (undefined8 ***)((long)pppuVar27 + 1);
        } while (pppuVar20 != pppuVar27);
        param_4 = auStack_230;
        pppuVar20 = pppuVar23;
        func_0x000107c4080c();
      } while (pppuVar20 != (undefined8 ***)0x0);
      func_0x000107c61170(pppuVar23);
      if ((undefined8 ***)ppuStack_2a8 == (undefined8 ***)0x0) goto LAB_100580728;
    }
    uVar3 = *(undefined8 *)((long)pppuVar13 + (long)_DAT_1127952d8);
    *(undefined **)((long)pppuVar13 + (long)_DAT_1127952d8) = puVar17;
    func_0x000107c61174(puVar17);
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)pppuVar13 + (long)_DAT_1127952dc) = 0;
    func_0x000107c58dd8(ppuStack_2a8);
    pppuVar20 = (undefined8 ***)0x1;
    func_0x000107c58dd8(ppuStack_2a8);
    func_0x000107c61170(ppuStack_2a8);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return pppuVar13;
  }
  func_0x000107c60e78();
  func_0x000107c61174(pppuVar20);
  func_0x000107c61174(param_4);
  func_0x000107c44b6c();
  pppuVar13 = pppuVar23;
  func_0x000107c3b94c();
  pppuVar27 = pppuVar23;
  func_0x000107c3b95c();
  pppuVar15 = pppuVar23;
  func_0x000107c3b950();
  if ((((uint)pppuVar15 | (uint)pppuVar13 | (uint)pppuVar27) & 1) == 0) {
    func_0x000106ac6918(pppuVar23[4],&PTR____CFConstantStringClassReference_110e6daf8,1);
    pppuVar23 = (undefined8 ***)0x0;
    goto LAB_100580a90;
  }
  pppuVar13 = pppuVar20;
  func_0x000107c3ff54();
  func_0x000107c61180();
  pppuVar27 = pppuVar23;
  func_0x000107c3b7e4(pppuVar23);
  func_0x000107c61180();
  func_0x000107c3b840();
  pppuVar15 = pppuVar13;
  func_0x000107c40808();
  if (pppuVar15 < (undefined8 ***)0x3) {
    func_0x000106ac6918(pppuVar23[4],&PTR____CFConstantStringClassReference_110e6db18,1);
    func_0x000107c3b608();
    func_0x000107c3b844();
    func_0x000107c4008c();
    func_0x000107c61180();
    func_0x000107c4f254();
LAB_100580a2c:
    func_0x000107c61170(pppuVar23);
  }
  else {
    pppuVar15 = pppuVar13;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c61170(pppuVar15);
    pppuVar15 = pppuVar13;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c4c0a8();
    func_0x000107c61170(pppuVar15);
    pppuVar15 = pppuVar13;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c61170(pppuVar15);
    pppuVar15 = pppuVar13;
    func_0x000107c40808();
    if ((undefined8 ***)0x3 < pppuVar15) {
      pppuVar23 = pppuVar13;
      func_0x000107c4d9a0();
      func_0x000107c61180();
      func_0x000107c49820();
      goto LAB_100580a2c;
    }
    func_0x000106ac8be4(pppuVar23[4],1);
  }
  func_0x000107c61170(pppuVar27);
  func_0x000107c61170(pppuVar13);
  pppuVar23 = (undefined8 ***)PTR_PTR_1126d0390;
  func_0x000107c610f4(PTR_PTR_1126d0390);
  func_0x000107c467cc();
LAB_100580a90:
  func_0x000107c61170(param_4);
  func_0x000107c61170(pppuVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar23);
  return pppuVar23;
}



/* Entry: 10057fe1c; end: 10058080b; -[SIGTabBarView initWithItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10057fe1c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong uStack_1e8;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [128];
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = param_3;
  func_0x000107c61174(param_3);
  puStack_180 = PTR_PTR_11270b700;
  uVar26 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar23 = &uStack_188;
  uStack_188 = param_1;
  func_0x000107c61154(uVar26,uVar27,uVar28,uVar29,puVar23,PTR_s_initWithFrame__1125e2948);
  if (puVar23 != (undefined8 *)0x0) {
    uVar22 = *(undefined8 *)PTR__UIContentSizeCategoryUnspecified_110345b80;
    lVar21 = (long)_DAT_1127952c4;
    func_0x000107c61174(uVar22);
    uVar1 = *(undefined8 *)((long)puVar23 + lVar21);
    *(undefined8 *)((long)puVar23 + lVar21) = uVar22;
    func_0x000107c61170(uVar1);
    func_0x000107c56384(puVar23);
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar26,uVar27,uVar28,uVar29);
    uVar1 = *(undefined8 *)((long)puVar23 + (long)_DAT_1127952c8);
    *(undefined **)((long)puVar23 + (long)_DAT_1127952c8) = puVar2;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(puVar2);
    func_0x000107c5a050(puVar2);
    func_0x000107c5928c(puVar2);
    func_0x000107c59284(puVar2);
    func_0x000107c3d89c(puVar23);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar4 = puVar23;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = puVar2;
    puStack_b0 = puVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar7 = puVar23;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = puVar2;
    puStack_a8 = puVar8;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar10 = puVar23;
    func_0x000107c50890(puVar23);
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar12 = puVar2;
    puStack_a0 = puVar11;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar13 = puVar23;
    func_0x000107c3ec1c(puVar23);
    func_0x000107c61180();
    puVar14 = puVar12;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar14;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar26,uVar27,uVar28,uVar29);
    func_0x000107c5a050();
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(puVar3);
    func_0x000107c61170(puVar16);
    func_0x000107c3d89c(puVar2);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar4 = puVar23;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar3;
    puStack_d0 = puVar6;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar7 = puVar23;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar11 = puVar3;
    puStack_c8 = puVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar10 = puVar23;
    func_0x000107c3ec1c(puVar23);
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar14 = puVar3;
    puStack_c0 = puVar12;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar15 = puVar14;
    func_0x000107c40290(0x3ff0000000000000);
    func_0x000107c61180();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar15;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar16);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126e18a8;
    func_0x000107c610fc();
    uVar26 = *(undefined8 *)((long)puVar23 + (long)_DAT_1127952cc);
    *(undefined **)((long)puVar23 + (long)_DAT_1127952cc) = puVar5;
    func_0x000107c61170(uVar26);
    func_0x000107c61174(puVar5);
    func_0x000107c3d89c(puVar2);
    puVar6 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    func_0x000107c610fc();
    uVar26 = *(undefined8 *)((long)puVar23 + (long)_DAT_1127952d0);
    *(undefined **)((long)puVar23 + (long)_DAT_1127952d0) = puVar6;
    func_0x000107c61170(uVar26);
    func_0x000107c61174(puVar6);
    func_0x000107c3d72c(puVar23);
    puVar16 = puVar6;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar12 = puVar16;
    func_0x000107c40290(0);
    func_0x000107c61180();
    uVar26 = *(undefined8 *)((long)puVar23 + (long)_DAT_1127952d4);
    *(undefined **)((long)puVar23 + (long)_DAT_1127952d4) = puVar12;
    func_0x000107c61170(uVar26);
    func_0x000107c61174(puVar12);
    func_0x000107c61170(puVar16);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar14 = puVar6;
    puStack_f0 = puVar12;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar10 = puVar23;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar8 = puVar14;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar18 = puVar6;
    puStack_e8 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar7 = puVar23;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar17 = puVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar15 = puVar6;
    puStack_e0 = puVar17;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar4 = puVar23;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar11 = puVar15;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d8 = puVar11;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c3d048(puVar16);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar14);
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c40808(param_3);
    func_0x000107c3e170();
    func_0x000107c61180();
    func_0x000107c61174(param_3);
    param_4 = auStack_170;
    uVar20 = param_3;
    func_0x000107c4080c();
    lVar21 = lRam0000000000000000;
    if (uVar20 == 0) {
      func_0x000107c61170(param_3);
LAB_100580728:
      uStack_1e8 = param_3;
      func_0x000107c43638();
      func_0x000107c61180();
    }
    else {
      uStack_1e8 = 0;
      do {
        uVar25 = 0;
        do {
          if (lRam0000000000000000 != lVar21) {
            func_0x000107c61128(param_3);
          }
          uVar24 = *(ulong *)(uVar25 * 8);
          uVar19 = uVar24;
          func_0x000107c51c54();
          if ((int)uVar19 != 0) {
            if (uStack_1e8 == 0) {
              func_0x000107c61174(uVar24);
              uStack_1e8 = uVar24;
            }
            else {
              func_0x000107c58dd8(uVar24);
            }
          }
          puVar9 = PTR_PTR_1126e18b0;
          func_0x000107c610f4();
          func_0x000107c46fb8();
          func_0x000107c5a050();
          func_0x000107c3d89c(puVar2);
          func_0x000107c3d798(puVar16);
          puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar11 = puVar9;
          func_0x000107c3f764();
          func_0x000107c61180();
          puVar14 = puVar2;
          func_0x000107c3f764();
          func_0x000107c61180();
          puVar15 = puVar11;
          func_0x000107c40280();
          func_0x000107c61180();
          puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_178 = puVar15;
          func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x000107c61180();
          func_0x000107c3d048(puVar8);
          func_0x000107c61170(puVar17);
          func_0x000107c61170(puVar15);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puVar11);
          func_0x000107c53fcc(puVar9);
          func_0x000107c61170(puVar9);
          uVar25 = uVar25 + 1;
        } while (uVar20 != uVar25);
        param_4 = auStack_170;
        uVar20 = param_3;
        func_0x000107c4080c();
      } while (uVar20 != 0);
      func_0x000107c61170(param_3);
      if (uStack_1e8 == 0) goto LAB_100580728;
    }
    uVar26 = *(undefined8 *)((long)puVar23 + (long)_DAT_1127952d8);
    *(undefined **)((long)puVar23 + (long)_DAT_1127952d8) = puVar16;
    func_0x000107c61174(puVar16);
    func_0x000107c61170(uVar26);
    *(undefined8 *)((long)puVar23 + (long)_DAT_1127952dc) = 0;
    func_0x000107c58dd8(uStack_1e8);
    uVar20 = 1;
    func_0x000107c58dd8(uStack_1e8);
    func_0x000107c61170(uStack_1e8);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar23;
  }
  func_0x000107c60e78();
  func_0x000107c61174(uVar20);
  func_0x000107c61174(param_4);
  func_0x000107c44b6c();
  uVar25 = param_3;
  func_0x000107c3b94c();
  uVar19 = param_3;
  func_0x000107c3b95c();
  uVar24 = param_3;
  func_0x000107c3b950();
  if ((((uint)uVar24 | (uint)uVar25 | (uint)uVar19) & 1) == 0) {
    func_0x000106ac6918(*(undefined8 *)(param_3 + 0x20),
                        &PTR____CFConstantStringClassReference_110e6daf8,1);
    puVar23 = (undefined8 *)0x0;
    goto LAB_100580a90;
  }
  uVar25 = uVar20;
  func_0x000107c3ff54();
  func_0x000107c61180();
  uVar19 = param_3;
  func_0x000107c3b7e4(param_3);
  func_0x000107c61180();
  func_0x000107c3b840();
  uVar24 = uVar25;
  func_0x000107c40808();
  if (uVar24 < 3) {
    func_0x000106ac6918(*(undefined8 *)(param_3 + 0x20),
                        &PTR____CFConstantStringClassReference_110e6db18,1);
    func_0x000107c3b608();
    func_0x000107c3b844();
    func_0x000107c4008c();
    func_0x000107c61180();
    func_0x000107c4f254();
LAB_100580a2c:
    func_0x000107c61170(param_3);
  }
  else {
    uVar24 = uVar25;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c61170(uVar24);
    uVar24 = uVar25;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c4c0a8();
    func_0x000107c61170(uVar24);
    uVar24 = uVar25;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c61170(uVar24);
    uVar24 = uVar25;
    func_0x000107c40808();
    if (3 < uVar24) {
      param_3 = uVar25;
      func_0x000107c4d9a0();
      func_0x000107c61180();
      func_0x000107c49820();
      goto LAB_100580a2c;
    }
    func_0x000106ac8be4(*(undefined8 *)(param_3 + 0x20),1);
  }
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar25);
  puVar23 = (undefined8 *)PTR_PTR_1126d0390;
  func_0x000107c610f4(PTR_PTR_1126d0390);
  func_0x000107c467cc();
LAB_100580a90:
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return puVar23;
}



/* Entry: 10058080c; end: 100580ae3; -[SCBlizzardFileRepository _parseFileName:forQueueWithName:region:] */

void FUN_10058080c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c44b6c();
  uVar1 = param_1;
  func_0x000107c3b94c();
  uVar2 = param_1;
  func_0x000107c3b95c();
  uVar3 = param_1;
  func_0x000107c3b950();
  if ((((uint)uVar3 | (uint)uVar1 | (uint)uVar2) & 1) == 0) {
    func_0x000106ac6918(*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110e6daf8,1);
    puVar4 = (undefined *)0x0;
    goto LAB_100580a90;
  }
  uVar1 = param_3;
  func_0x000107c3ff54();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c3b7e4(param_1);
  func_0x000107c61180();
  func_0x000107c3b840();
  uVar3 = uVar1;
  func_0x000107c40808();
  if (uVar3 < 3) {
    func_0x000106ac6918(*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110e6db18,1);
    func_0x000107c3b608();
    func_0x000107c3b844();
    func_0x000107c4008c();
    func_0x000107c61180();
    func_0x000107c4f254();
LAB_100580a2c:
    func_0x000107c61170(param_1);
  }
  else {
    uVar3 = uVar1;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c61170(uVar3);
    uVar3 = uVar1;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c4c0a8();
    func_0x000107c61170(uVar3);
    uVar3 = uVar1;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c61170(uVar3);
    uVar3 = uVar1;
    func_0x000107c40808();
    if (3 < uVar3) {
      param_1 = uVar1;
      func_0x000107c4d9a0();
      func_0x000107c61180();
      func_0x000107c49820();
      goto LAB_100580a2c;
    }
    func_0x000106ac8be4(*(undefined8 *)(param_1 + 0x20),1);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  puVar4 = PTR_PTR_1126d0390;
  func_0x000107c610f4(PTR_PTR_1126d0390);
  func_0x000107c467cc();
LAB_100580a90:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100580ae4; end: 100580b03; -[SCBlizzardFileRepository _hasFrameSuffix:isCompressed:] */

void FUN_100580ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6da38;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e6d9d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfdcf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_hasSuffix__1125d4da0,ppuVar1);
  return;
}



/* Entry: 100580b04; end: 100580b23; -[SCBlizzardFileRepository _hasSpectrumSuffix:isCompressed:] */

void FUN_100580b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6da78;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e6da18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfdcf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_hasSuffix__1125d4da0,ppuVar1);
  return;
}



/* Entry: 100580b24; end: 100580b43; -[SCBlizzardFileRepository _hasJsonSuffix:isCompressed:] */

void FUN_100580b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6da58;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e6d9f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfdcf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_hasSuffix__1125d4da0,ppuVar1);
  return;
}



/* Entry: 100580b44; end: 100580bcf; -[SCBlizzardFileRepository _getAbsoluteFilePath:fromQueueName:region:] */

void FUN_100580b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c3c4d0(param_1,param_2,param_4,param_5);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c164();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100580bd0; end: 100580c4f; -[SCBlizzardFileRepository _getFileBytesFrom:] */

undefined8 FUN_100580bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c43458(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c433f8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar2 = uVar1;
  func_0x000107c43454(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100580c50; end: 100580cbf; -[SCBlizzardFileSystem fileAttributesAtPath:] */

void FUN_100580c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c43434(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3e388();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100580cc0; end: 100581273;  */

void FUN_100580cc0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = param_2;
  func_0x000107c61174();
  FUN_100581274();
  if (((int)uVar4 == 0) || (2 < lRam00000001138466f0)) {
LAB_100580d58:
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x000107c50618(puVar5);
    func_0x000107c61180();
    goto LAB_100581254;
  }
  if (param_2 == 0) {
    func_0x000107c60b8c();
    if ((uVar4 & 1) == 0) goto LAB_100580d58;
  }
  else {
    uVar4 = param_2;
    func_0x000107c3cef4();
    if (uVar4 != 1) goto LAB_100580d58;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x000107c61174(param_2);
  if (lVar2 == 1) {
LAB_100580d7c:
    bVar3 = false;
  }
  else if ((lVar2 == 2) || (lRam00000001138466f0 == 2)) {
    bVar3 = true;
  }
  else {
    if (lRam00000001138466f0 != 0) goto LAB_100580d7c;
    uVar4 = param_2;
    func_0x000107c5d9c8();
    bVar3 = uVar4 == 2;
  }
  func_0x000107c61170(param_2);
  if (lVar1 < 0x65) {
    if (lVar1 < 0x47) {
      if (lVar1 < 0xb) {
        if (lVar1 == 3) {
          if (bVar3) {
LAB_100581194:
            uVar7 = 0x3fe8585858585858;
          }
          else {
            uVar7 = 0x3fd3535353535353;
          }
        }
        else {
          if (lVar1 != 4) {
            if (lVar1 == 8) {
              uVar10 = 0x3feccccccccccccd;
              goto LAB_100581160;
            }
            goto LAB_100581230;
          }
LAB_100581004:
          if (bVar3) goto LAB_10058117c;
          uVar7 = 0x3fdd5d5d5d5d5d5d;
        }
      }
      else if (lVar1 < 0x26) {
        if (lVar1 == 0xb) {
          uVar7 = 0x3ff0000000000000;
          uVar8 = 0x3ff0000000000000;
          uVar9 = 0x3ff0000000000000;
          uVar10 = 0x3fe0000000000000;
          goto LAB_10058120c;
        }
        if (lVar1 != 0x12) goto LAB_100581230;
        if (!bVar3) {
          uVar7 = 0x3fe8f8f8f8f8f8f9;
          uVar9 = 0x3fe9595959595959;
          goto LAB_1005810c8;
        }
LAB_100580ea0:
        uVar7 = 0x3fd6969696969697;
      }
      else {
        if (lVar1 == 0x26) {
          if (bVar3) {
            uVar7 = 0x3fda9a9a9a9a9a9b;
            uVar8 = 0x3fdadadadadadadb;
            uVar9 = 0x3fdb5b5b5b5b5b5b;
          }
          else {
LAB_100581134:
            uVar7 = 0x3fe5353535353535;
            uVar8 = 0x3fe5757575757575;
            uVar9 = 0x3fe6161616161616;
          }
          goto LAB_1005811f0;
        }
        if ((lVar1 != 0x44) || (!bVar3)) goto LAB_100581230;
        uVar7 = 0x3fe4d4d4d4d4d4d5;
      }
LAB_100581200:
      uVar10 = 0x3ff0000000000000;
      uVar8 = uVar7;
      uVar9 = uVar7;
    }
    else {
      if (lVar1 < 0x56) {
        if (lVar1 - 0x4aU < 2) {
          if (bVar3) {
            uVar7 = 0x3fe2727272727272;
            uVar8 = 0x3fe2929292929293;
LAB_1005810a0:
            uVar9 = 0x3fe3333333333333;
          }
          else {
LAB_1005810d4:
            uVar7 = 0x3fdadadadadadadb;
            uVar8 = 0x3fdb1b1b1b1b1b1b;
            uVar9 = 0x3fdc1c1c1c1c1c1c;
          }
        }
        else {
          if (lVar1 == 0x47) goto LAB_100581004;
          if (lVar1 != 0x49) goto LAB_100581230;
          if (bVar3) goto LAB_1005810b8;
          uVar7 = 0x3fd2929292929293;
          uVar8 = 0x3fd2d2d2d2d2d2d3;
          uVar9 = 0x3fd3535353535353;
        }
        goto LAB_1005811f0;
      }
      if (lVar1 == 0x56) {
LAB_100580f58:
        uVar10 = 0x3feb333333333333;
      }
      else {
        if (lVar1 != 0x59) {
          if (lVar1 != 0x5a) goto LAB_100581230;
          goto LAB_100580f58;
        }
        uVar10 = 0x3fed70a3d70a3d71;
      }
LAB_100581160:
      uVar7 = 0x3ff0000000000000;
      uVar8 = 0x3ff0000000000000;
      uVar9 = 0x3ff0000000000000;
    }
LAB_10058120c:
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fde8(uVar7,uVar8,uVar9,uVar10);
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) goto LAB_100581230;
    func_0x000107c61174(puVar5);
    puVar6 = puVar5;
  }
  else {
    if (lVar1 < 0xc0) {
      if (lVar1 < 0xb0) {
        if (lVar1 == 0x65) {
          if (bVar3) {
            uVar7 = 0x3fd7979797979798;
            uVar8 = 0x3fd7d7d7d7d7d7d8;
            uVar9 = 0x3fd8585858585858;
          }
          else {
            uVar7 = 0x3fe0101010101010;
            uVar8 = 0x3fe0303030303030;
            uVar9 = 0x3fe0707070707070;
          }
          goto LAB_1005811f0;
        }
        if (lVar1 == 0xad) goto LAB_100580f6c;
        if (lVar1 == 0xae) {
          if (bVar3) goto LAB_100580ea0;
          goto LAB_100581090;
        }
      }
      else {
        if (lVar1 == 0xb0) {
LAB_100580f6c:
          if (!bVar3) {
            uVar7 = 0x3fe5f5f5f5f5f5f6;
            uVar9 = 0x3fe6565656565656;
            goto LAB_1005810c8;
          }
          uVar7 = 0x3ff0000000000000;
          uVar8 = 0x3ff0000000000000;
          uVar9 = 0x3ff0000000000000;
          uVar10 = 0x3fd0000000000000;
          goto LAB_10058120c;
        }
        if (lVar1 == 0xbe) {
          if (bVar3) {
            uVar10 = 0x3fe199999999999a;
            goto LAB_100581160;
          }
        }
        else if (lVar1 == 0xbf) {
          if (bVar3) goto LAB_100581194;
          uVar7 = 0x3fd2525252525252;
          uVar8 = 0x3fd4141414141414;
          uVar9 = 0x3fd5d5d5d5d5d5d6;
          goto LAB_1005811f0;
        }
      }
    }
    else {
      if (0xcd < lVar1) {
        if (lVar1 < 0xe3) {
          if (lVar1 != 0xce) {
            if (lVar1 == 0xe2) {
              if (!bVar3) goto LAB_100581134;
              uVar7 = 0x3fe2121212121212;
              uVar8 = 0x3fe2323232323232;
              uVar9 = 0x3fe2d2d2d2d2d2d3;
              goto LAB_1005811f0;
            }
            goto LAB_100581230;
          }
          if (!bVar3) {
LAB_100581090:
            uVar7 = 0x3fe1515151515151;
            uVar8 = 0x3fe2121212121212;
            goto LAB_1005810a0;
          }
          uVar7 = 0x3fde9e9e9e9e9e9f;
          uVar9 = 0x3fe0101010101010;
        }
        else if (lVar1 == 0xe3) {
          if (!bVar3) goto LAB_1005810d4;
LAB_1005810b8:
          uVar7 = 0x3fea3a3a3a3a3a3a;
          uVar9 = 0x3fea9a9a9a9a9a9b;
        }
        else {
          if (lVar1 != 0xe4) goto LAB_100581230;
          if (!bVar3) {
            uVar7 = 0x3fe8585858585858;
            uVar8 = 0x3fe8989898989899;
            uVar9 = 0x3fe8f8f8f8f8f8f9;
            goto LAB_1005811f0;
          }
          uVar7 = 0x3fd2929292929293;
          uVar9 = 0x3fd3131313131313;
        }
LAB_1005810c8:
        uVar10 = 0x3ff0000000000000;
        uVar8 = uVar7;
        goto LAB_10058120c;
      }
      if (lVar1 == 0xc0) {
        if (bVar3) {
LAB_10058117c:
          uVar7 = 0x3fe1f1f1f1f1f1f2;
          goto LAB_100581200;
        }
        uVar7 = 0x3fdb1b1b1b1b1b1b;
        uVar8 = 0x3fdc1c1c1c1c1c1c;
        uVar9 = 0x3fddddddddddddde;
LAB_1005811f0:
        uVar10 = 0x3ff0000000000000;
        goto LAB_10058120c;
      }
      if (lVar1 == 200) goto LAB_100580f6c;
      if ((lVar1 == 0xcd) && (bVar3)) goto LAB_100581194;
    }
LAB_100581230:
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x000107c50618(puVar5);
    func_0x000107c61180();
    puVar6 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar6);
LAB_100581254:
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100581274; end: 1005812db;  */

undefined1 FUN_100581274(void)

{
  if (lRam00000001137fc130 != -1) {
    FUN_10002a2fc(0x1137fc130,&PTR___NSConcreteGlobalBlock_110d66638);
  }
  return uRam00000001137fc011;
}



/* Entry: 1005812dc; end: 100581393; -[SIGTabBarSelectionView init] */

undefined1 * FUN_1005812dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b6f8;
  uStack_30 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c539d4(0x3ff0000000000000);
    func_0x000107c61170(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c534b0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100581394; end: 1005813c3; -[SIGTabBarView setScrollSpanTabAndCentered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100581394(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_1127952e8) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127952e8) = (char)param_3;
  *(undefined8 *)(param_1 + _DAT_1127952e4) = 0xbff0000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1005813c4; end: 10058152f; -[SIGHeaderItemView setCurrentHeaderItem:] */

/* WARNING: Possible PIC construction at 0x000100581434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100581460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005814a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005814ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058150c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005814f0) */
/* WARNING: Removing unreachable block (ram,0x0001005814a8) */
/* WARNING: Removing unreachable block (ram,0x000100581464) */
/* WARNING: Removing unreachable block (ram,0x000100581480) */
/* WARNING: Removing unreachable block (ram,0x000100581478) */
/* WARNING: Removing unreachable block (ram,0x000100581484) */
/* WARNING: Removing unreachable block (ram,0x000100581438) */
/* WARNING: Removing unreachable block (ram,0x000100581510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005813c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_112794cd0);
  func_0x000107c49cec(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_112794ca8;
    if (*(long *)(param_1 + lVar3) != 0) {
      func_0x000107c4ff34();
    }
    puVar2 = PTR_PTR_1126e17d0;
    func_0x000107c610f4();
    func_0x000107c46ca8();
    param_3 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100581530; end: 100581713; -[SIGHeaderTitleRow initWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100581530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  
  puVar2 = &uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_6);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  puStack_68 = PTR_PTR_11270b580;
  uVar13 = 0x4043000000000000;
  uVar9 = 0;
  uVar10 = 0;
  uStack_70 = param_4;
  func_0x000107c61154(0,0,&uStack_70,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = param_6;
    func_0x000107c45020();
    *(char *)((long)puVar2 + (long)_DAT_112794da8) = (char)puVar3;
    puVar1 = PTR_PTR_1126e17f0;
    func_0x000107c610f4();
    func_0x000107c46cf4();
    uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794dac);
    *(undefined **)((long)puVar2 + (long)_DAT_112794dac) = puVar1;
    func_0x000107c61170(uVar9);
    puVar1 = PTR_PTR_1126e17f0;
    func_0x000107c610f4();
    func_0x000107c46cf4();
    uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794db0);
    *(undefined **)((long)puVar2 + (long)_DAT_112794db0) = puVar1;
    func_0x000107c61170(uVar9);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = (undefined1 *)puVar2;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar9 = 0x4043000000000000;
    puVar4 = puVar3;
    func_0x000107c40290(0x4043000000000000);
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    lVar8 = (long)_DAT_112794db4;
    func_0x000107c61174(param_6);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined1 **)((long)puVar2 + lVar8) = param_6;
    func_0x000107c61170(uVar6);
    func_0x000107c5508c(puVar2);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar2;
  }
  func_0x000107c60e78();
  puVar3 = param_6;
  uVar6 = uVar9;
  uVar11 = uVar10;
  uVar12 = param_3;
  uVar14 = uVar13;
  func_0x000107c438d4();
  func_0x000107c609ac(uVar9,uVar10,param_3,uVar13,uVar6,uVar11,uVar12,uVar14);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000107c609ac(uVar9,uVar10,param_3,uVar13,*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    if (((ulong)puVar3 & 1) == 0) {
      if (param_6[_DAT_112794dbc] == '\x01') {
        func_0x000107c56a24(param_6);
      }
      puStack_d8 = PTR_PTR_11270b580;
      puStack_e0 = param_6;
      func_0x000107c61154(uVar9,uVar10,param_3,uVar13,&puStack_e0,PTR_s_setFrame__112645658);
      puVar1 = PTR_DAT_1126a5cc0;
      uVar13 = *(undefined8 *)(param_6 + _DAT_112794db0);
      func_0x000107c61174(uVar13);
      uVar10 = uVar13;
      FUN_10010fab4(uVar13,puVar1);
      uVar9 = uVar13;
      if ((int)uVar10 == 0) {
        uVar9 = 0;
      }
      func_0x000107c61174(uVar9);
      func_0x000107c61170(uVar13);
      func_0x000107c4effc(uVar9);
      func_0x000107c61170(uVar9);
      puVar1 = PTR_DAT_1126a5cc0;
      puVar7 = *(undefined1 **)(param_6 + _DAT_112794dac);
      func_0x000107c61174(puVar7);
      puVar4 = puVar7;
      FUN_10010fab4(puVar7,puVar1);
      puVar3 = puVar7;
      if ((int)puVar4 == 0) {
        puVar3 = (undefined1 *)0x0;
      }
      func_0x000107c61174(puVar3);
      func_0x000107c61170(puVar7);
      func_0x000107c4effc(puVar3);
      func_0x000107c61170(puVar3);
    }
  }
  return puVar3;
}



/* Entry: 100581714; end: 10058189f; -[SIGHeaderTitleRow setFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100581714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uStack_70;
  undefined *puStack_68;
  
  uVar2 = param_5;
  uVar5 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar6 = param_4;
  func_0x000107c438d4();
  func_0x000107c609ac(param_1,param_2,param_3,param_4,uVar5,uVar3,uVar4,uVar6);
  if ((uVar2 & 1) == 0) {
    func_0x000107c609ac(param_1,param_2,param_3,param_4,*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_5 + (long)_DAT_112794dbc) == '\x01') {
        func_0x000107c56a24(param_5);
      }
      puStack_68 = PTR_PTR_11270b580;
      uStack_70 = param_5;
      func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_setFrame__112645658);
      puVar1 = PTR_DAT_1126a5cc0;
      uVar4 = *(undefined8 *)(param_5 + (long)_DAT_112794db0);
      func_0x000107c61174(uVar4);
      uVar3 = uVar4;
      FUN_10010fab4(uVar4,puVar1);
      uVar5 = uVar4;
      if ((int)uVar3 == 0) {
        uVar5 = 0;
      }
      func_0x000107c61174(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c4effc(uVar5);
      func_0x000107c61170(uVar5);
      puVar1 = PTR_DAT_1126a5cc0;
      uVar4 = *(undefined8 *)(param_5 + (long)_DAT_112794dac);
      func_0x000107c61174(uVar4);
      uVar3 = uVar4;
      FUN_10010fab4(uVar4,puVar1);
      uVar5 = uVar4;
      if ((int)uVar3 == 0) {
        uVar5 = 0;
      }
      func_0x000107c61174(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c4effc(uVar5);
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 1005818a0; end: 1005818a7; -[SIGHeaderItem ignoreRTL] */

undefined1 FUN_1005818a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 1005818a8; end: 100581b33; -[SIGHeaderTitleRowAccessoryViewContainer initWithHostView:leading:] */

undefined8 *
FUN_1005818a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             int param_5,ulong param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  uVar4 = param_4;
  func_0x000107c61174(param_3);
  puStack_90 = PTR_PTR_11270b578;
  puVar2 = &uStack_98;
  uStack_98 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(char *)(puVar2 + 2) = (char)param_4;
    func_0x000107c611a0(puVar2 + 1,param_3);
    *(undefined1 *)((long)puVar2 + 0x11) = 0;
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    func_0x000107c610fc();
    uVar4 = puVar2[0xb];
    puVar2[0xb] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar3);
    puVar5 = puVar2 + 1;
    func_0x000107c61148(puVar5);
    func_0x000107c3d72c();
    func_0x000107c61170(puVar5);
    uVar6 = puVar2[0xb];
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar4 = uVar6;
    func_0x000107c40290(0);
    func_0x000107c61180();
    uVar14 = puVar2[3];
    puVar2[3] = uVar4;
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar6);
    func_0x000107c5784c(0x447a0000,puVar2[3]);
    param_6 = (ulong)*(byte *)((long)puVar2 + 0x11);
    puVar5 = puVar2;
    func_0x000107c3c140();
    param_5 = (int)param_4;
    func_0x000107c61180();
    uVar4 = puVar2[7];
    puVar2[7] = puVar5;
    func_0x000107c61170(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = puVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar8 = param_3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar9 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar10 = puVar3;
    puStack_88 = puVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar11 = param_3;
    func_0x000107c3ec1c(param_3);
    func_0x000107c61180();
    puVar12 = puVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_78 = puVar2[7];
    uStack_70 = puVar2[3];
    uVar4 = 4;
    puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar12;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    puVar5 = puVar13;
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar5);
  func_0x000107c61174(uVar4);
  puVar2 = puVar5;
  uVar6 = uVar4;
  if (param_5 == 0) {
    if ((param_6 & 1) == 0) {
      func_0x000107c5ce8c(puVar5);
      func_0x000107c61180();
      func_0x000107c5ce8c(uVar4);
      func_0x000107c61180();
    }
    else {
      func_0x000107c50890();
      func_0x000107c61180();
      func_0x000107c50890(uVar4);
      func_0x000107c61180();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c4acb0(uVar4);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c4ace0(uVar4);
    func_0x000107c61180();
  }
  puVar8 = puVar2;
  func_0x000107c40280(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 100581b34; end: 100581c57; -[SIGHeaderTitleRowAccessoryViewContainer _positionLayoutConstraintFromGuide:hostView:leading:ignoresRTL:] */

void FUN_100581b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  uVar2 = param_4;
  if (param_5 == 0) {
    if ((param_6 & 1) == 0) {
      func_0x000107c5ce8c(param_3);
      func_0x000107c61180();
      func_0x000107c5ce8c(param_4);
      func_0x000107c61180();
    }
    else {
      func_0x000107c50890();
      func_0x000107c61180();
      func_0x000107c50890(param_4);
      func_0x000107c61180();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c4acb0(param_4);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c4ace0(param_4);
    func_0x000107c61180();
  }
  uVar3 = uVar1;
  func_0x000107c40280(uVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100581c58; end: 10058208f; -[SIGHeaderTitleRow setHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100581c58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar11 = (long)_DAT_112794db8;
  if (*(long *)(param_1 + lVar11) != 0) {
    func_0x000107c4ff34();
    uVar1 = *(undefined8 *)(param_1 + lVar11);
    *(undefined8 *)(param_1 + lVar11) = 0;
    func_0x000107c61170(uVar1);
  }
  lVar12 = param_3;
  func_0x000107c5c224();
  *(long *)(param_1 + _DAT_112794dc0) = lVar12;
  lVar10 = (long)_DAT_112794db4;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = param_3;
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126e17e8;
  func_0x000107c610f4();
  func_0x000107c46ca8();
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar3;
  func_0x000107c61170(uVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c5a050(puVar3,param_2,0);
  func_0x000107c3d89c(param_1,param_2,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  puVar5 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar11 = param_1;
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40280(puVar5,param_2,lVar11);
  func_0x000107c61180();
  puVar7 = puVar3;
  puStack_78 = puVar6;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar12 = param_1;
  func_0x000107c3ec1c(param_1);
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c40280(puVar7,param_2,lVar12);
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar4,param_2,puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar5);
  lVar11 = *(long *)(param_1 + lVar10);
  func_0x000107c4eb70();
  if (lVar11 == 1) {
    lVar11 = param_1;
    func_0x000107c3b99c();
    func_0x000107c61180();
    lVar12 = (long)_DAT_112794dc4;
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    *(long *)(param_1 + lVar12) = lVar11;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar12);
  }
  else {
    lVar11 = *(long *)(param_1 + lVar10);
    func_0x000107c4eb70();
    if (lVar11 != 2) {
      if ((*(byte *)(param_1 + _DAT_112794dbc) & 1) == 0) {
        puVar5 = puVar3;
        func_0x000107c5e308();
        func_0x000107c61180();
        lVar11 = param_1;
        func_0x000107c5e308(param_1);
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c40280(puVar5,param_2,lVar11);
        func_0x000107c61180();
        lVar13 = (long)_DAT_112794dcc;
        uVar2 = *(undefined8 *)(param_1 + lVar13);
        *(undefined **)(param_1 + lVar13) = puVar6;
        func_0x000107c61170(uVar2);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar5);
        puVar5 = puVar3;
        func_0x000107c3f75c();
        func_0x000107c61180();
        lVar11 = param_1;
        func_0x000107c3f75c(param_1);
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c40280(puVar5,param_2,lVar11);
        func_0x000107c61180();
        lVar12 = (long)_DAT_112794dd0;
        uVar2 = *(undefined8 *)(param_1 + lVar12);
        *(undefined **)(param_1 + lVar12) = puVar6;
        func_0x000107c61170(uVar2);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar5);
        uStack_88 = *(undefined8 *)(param_1 + lVar12);
        uStack_80 = *(undefined8 *)(param_1 + lVar13);
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,2);
        func_0x000107c61180();
        func_0x000107c3d7a0(puVar4,param_2,puVar5);
        func_0x000107c61170(puVar5);
      }
      goto LAB_100581ed4;
    }
    lVar11 = param_1;
    func_0x000107c3b998();
    func_0x000107c61180();
    lVar12 = (long)_DAT_112794dc8;
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    *(long *)(param_1 + lVar12) = lVar11;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar12);
  }
  func_0x000107c3d7a0(puVar4,param_2,uVar2);
LAB_100581ed4:
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar4);
  func_0x000107c56a24(param_1);
  func_0x000107c53fcc(puVar3,param_2,param_1);
  func_0x000107c4ffa0(uVar1,param_2,param_1);
  func_0x000107c3d7b4(*(undefined8 *)(param_1 + lVar10),param_2,param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  func_0x000107c60e78();
  return *(long *)(param_3 + 0x30);
}



/* Entry: 100582090; end: 100582097; -[SIGHeaderItem style] */

undefined8 FUN_100582090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100582098; end: 1005823f3; -[SIGHeaderTitle initWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100582098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = &uStack_80;
  func_0x000107c61174(param_6);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c3ec60();
  puStack_78 = PTR_PTR_11270b570;
  dVar11 = 0.0;
  uStack_80 = param_4;
  func_0x000107c61154(0,0,param_3,0x4038000000000000,&uStack_80,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_6;
    func_0x000107c4eb70();
    *(long *)((long)puVar2 + (long)_DAT_112794d10) = lVar3;
    lVar3 = param_6;
    func_0x000107c5cab0();
    func_0x000107c61180();
    lVar4 = param_6;
    func_0x000107c5cad0(param_6);
    lVar5 = lVar3;
    FUN_10058240c(lVar3,lVar4);
    func_0x000107c61180();
    lVar9 = (long)_DAT_112794d14;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    *(long *)((long)puVar2 + lVar9) = lVar5;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(lVar5);
    func_0x000107c61170(lVar3);
    lVar3 = param_6;
    func_0x000107c5c38c();
    func_0x000107c61180();
    lVar4 = lVar3;
    FUN_100582b80();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794d18);
    *(long *)((long)puVar2 + (long)_DAT_112794d18) = lVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(lVar4);
    func_0x000107c61170(lVar3);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f4();
    func_0x000107c48c2c();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794d1c);
    *(undefined **)((long)puVar2 + (long)_DAT_112794d1c) = puVar1;
    func_0x000107c61170(uVar6);
    func_0x000107c3d6fc(*(undefined8 *)((long)puVar2 + lVar9));
    func_0x000107c5a378(*(undefined8 *)((long)puVar2 + lVar9));
    lVar7 = param_6;
    func_0x000107c5cab4();
    func_0x000107c61180();
    func_0x000107c61170();
    lVar3 = 0;
    if (lVar7 != 0) {
      lVar7 = param_6;
      func_0x000107c5cab4();
      func_0x000107c61180();
      lVar3 = lVar7;
      func_0x000107c30a58();
      func_0x000107c61180();
      lVar10 = (long)_DAT_112794d20;
      uVar6 = *(undefined8 *)((long)puVar2 + lVar10);
      *(long *)((long)puVar2 + lVar10) = lVar3;
      func_0x000107c61170(uVar6);
      func_0x000107c61174(lVar3);
      func_0x000107c61170(lVar7);
      puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      func_0x000107c610f4();
      func_0x000107c48c2c();
      uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794d24);
      *(undefined **)((long)puVar2 + (long)_DAT_112794d24) = puVar1;
      func_0x000107c61170(uVar6);
      func_0x000107c3d6fc(*(undefined8 *)((long)puVar2 + lVar10));
      func_0x000107c5a378(*(undefined8 *)((long)puVar2 + lVar10));
      func_0x000107c55528(*(undefined8 *)((long)puVar2 + lVar10));
      func_0x000107c52100(*(undefined8 *)((long)puVar2 + lVar10));
      uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
      func_0x000107c3cf10(uVar6);
      func_0x000107c52100(uVar6);
    }
    func_0x000107c498ec(lVar5);
    dVar12 = dVar11;
    func_0x000107c498ec(lVar3);
    func_0x000107c569c0(dVar11 + dVar12,puVar2);
    func_0x000107c3d89c(puVar2);
    func_0x000107c3d89c(puVar2);
    func_0x000107c3d89c(puVar2);
    lVar7 = param_6;
    func_0x000107c5c224();
    *(long *)((long)puVar2 + (long)_DAT_112794d28) = lVar7;
    puVar8 = (undefined1 *)puVar2;
    func_0x000107c40278();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794d2c);
    *(undefined1 **)((long)puVar2 + (long)_DAT_112794d2c) = puVar8;
    func_0x000107c61170(uVar6);
    func_0x000107c3adc4(puVar2);
    func_0x000107c5508c(puVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar2;
}



/* Entry: 1005823f4; end: 1005823fb; -[SIGHeaderItem position] */

undefined8 FUN_1005823f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1005823fc; end: 100582403; -[SIGHeaderItem title] */

undefined8 FUN_1005823fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100582404; end: 10058240b; -[SIGHeaderItem titleTypeStyle] */

undefined8 FUN_100582404(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10058240c; end: 10058250b;  */

void FUN_10058240c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c520f4(puVar1);
  func_0x000107c52518(puVar1);
  func_0x000107c5251c(puVar1);
  func_0x000107c5670c(0x3fe8f5c28f5c28f6,puVar1);
  func_0x000107c5638c(0x403a000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10058250c; end: 10058258b; -[SIGLabel initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10058250c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b668;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c52518(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127951b4) = 4;
    puStack_38 = PTR_PTR_11270b668;
    puStack_40 = puVar1;
    func_0x000107c61154(&puStack_40,PTR_s_setLineBreakStrategy__11264d0f0,0);
  }
  return puVar1;
}



/* Entry: 10058258c; end: 1005825fb; -[SIGLabel setAdjustsFontForContentSizeCategory:] */

void FUN_10058258c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b668;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_setAdjustsFontForContentSizeCate_1126371a0);
  uVar1 = param_1;
  func_0x000107c3e374(param_1);
  func_0x000107c61180();
  func_0x000107c529c4(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c56a14(param_1);
  return;
}



/* Entry: 1005825fc; end: 100582767; -[SIGLabel setAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005825fc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNull_1126aef28);
  puVar2 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c61160(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c61170(param_3);
  }
  func_0x000107c5c834(param_1);
  func_0x000107c4b634(param_1);
  func_0x000107c3d9c0(param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127951bc);
  lVar3 = param_1;
  func_0x000107c51608(param_1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5af84(uVar5,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c4b638(param_1);
  puVar4 = puVar2;
  func_0x000107c5af7c(puVar2);
  func_0x000107c61180();
  puStack_68 = PTR_PTR_11270b668;
  lStack_70 = param_1;
  func_0x000107c61154(&lStack_70,PTR_s_setAttributedText__1126387e8,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100582768; end: 10058287f; -[SIGLabel sanitizedTraitCollection] */

/* WARNING: Possible PIC construction at 0x00010058281c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058282c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100582820) */
/* WARNING: Removing unreachable block (ram,0x000100582830) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582768(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[_DAT_1127951b0] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    func_0x000107c5cea4(PTR__OBJC_CLASS___UITraitCollection_1126b6d80,param_2,0);
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    func_0x000107c5ce94();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = param_1;
    puStack_50 = puVar2;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
    func_0x000107c61180();
    func_0x000107c5ceb0(puVar1,param_2,puVar3);
    func_0x000107c61180();
  }
  else {
    func_0x000107c5ce94();
    func_0x000107c61180();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return;
    }
    func_0x000107c60e78();
    if (*(long *)(param_1 + _DAT_1127951b4) == param_3) {
      return;
    }
    *(long *)(param_1 + _DAT_1127951b4) = param_3;
    puVar3 = param_1;
    func_0x000107c5c82c();
    func_0x000107c61180();
    func_0x000107c3c5ac(param_1,param_2,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 100582880; end: 1005828d7; -[SIGLabel setTypeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582880(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_1127951b4) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_1127951b4) = param_3;
  lVar1 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  func_0x000107c3c5ac(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1005828d8; end: 10058296f; -[SIGLabel setTextAlignment:] */

void FUN_1005828d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b668;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_textAlignment_112678810);
  if (puVar1 != param_3) {
    puStack_48 = PTR_PTR_11270b668;
    uStack_50 = param_1;
    func_0x000107c61154(&uStack_50,PTR_s_setTextAlignment__112662638,param_3);
    uVar2 = param_1;
    func_0x000107c5c82c(param_1);
    func_0x000107c61180();
    func_0x000107c3c5ac(param_1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100582970; end: 100582aa3; -[SIGLabel _setTextUnchecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c5c834(param_1);
  func_0x000107c4b634(param_1);
  func_0x000107c3d9c0(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127951bc);
  lVar1 = param_1;
  func_0x000107c51608(param_1);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5af84(uVar3,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c4b638(param_1);
  uVar3 = uVar2;
  func_0x000107c5af7c(uVar2);
  func_0x000107c61180();
  puStack_68 = PTR_PTR_11270b668;
  lStack_70 = param_1;
  func_0x000107c61154(&lStack_70,PTR_s_setAttributedText__1126387e8,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100582aa4; end: 100582b2f; -[SIGLabel setText:] */

void FUN_100582aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270b668;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_text_1126787e8);
  func_0x000107c61180();
  puVar2 = (undefined1 *)puVar1;
  func_0x000107c49cec();
  func_0x000107c61170(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c3c5ac(param_1);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100582b30; end: 100582b77; -[SIGLabel setMaximumFontSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582b30(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + _DAT_1127951bc) = param_1;
  lVar1 = param_2;
  func_0x000107c5c82c();
  func_0x000107c61180();
  func_0x000107c3c5ac(param_2,param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100582b78; end: 100582b7f; -[SIGHeaderItem subtitle] */

undefined8 FUN_100582b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100582b80; end: 100582c4f;  */

void FUN_100582b80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1,param_2,0x18);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c59c6c(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c5638c(0x4032000000000000,puVar1);
  func_0x000107c52518(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100582c50; end: 100582c57; -[SIGHeaderItem titleAffordance] */

undefined8 FUN_100582c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 100582c58; end: 100582c9b; -[SIGHeaderTitle setNaturalTitleWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582c58(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112794d0c) = param_1;
  func_0x000107c4168c();
  func_0x000107c61180();
  func_0x000107c44d78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100582c9c; end: 100582cbb; -[SIGHeaderTitle delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582c9c(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112794d70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100582cbc; end: 100582d23; -[SIGLabel didMoveToSuperview] */

void FUN_100582cbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b668;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_didMoveToSuperview_1125bb968);
  uVar1 = param_1;
  func_0x000107c5ce94(param_1);
  func_0x000107c61180();
  func_0x000107c5ce9c(param_1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100582d24; end: 100582d8f; -[SIGLabel traitCollectionDidChange:] */

void FUN_100582d24(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b668;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  lVar1 = param_1;
  func_0x000107c42450();
  if ((lVar1 == 1) && (lVar1 = param_1, func_0x000107c5c834(), lVar1 == 4)) {
    func_0x000107c59c74(param_1);
  }
  return;
}



/* Entry: 100582d90; end: 100583617; -[SIGHeaderTitle constrainTitleLabel:subtitleLabel:affordance:] */

/* WARNING: Possible PIC construction at 0x000100582e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100582fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005831a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005831b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005831c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005834a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005834b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005834d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005834e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005835bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005835cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005832d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005832e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005832f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005832ec) */
/* WARNING: Removing unreachable block (ram,0x0001005832d8) */
/* WARNING: Removing unreachable block (ram,0x000100583698) */
/* WARNING: Removing unreachable block (ram,0x0001005835d0) */
/* WARNING: Removing unreachable block (ram,0x000100583614) */
/* WARNING: Removing unreachable block (ram,0x00010058366c) */
/* WARNING: Removing unreachable block (ram,0x000100583644) */
/* WARNING: Removing unreachable block (ram,0x000100583670) */
/* WARNING: Removing unreachable block (ram,0x0001005835f0) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x0001005835c0) */
/* WARNING: Removing unreachable block (ram,0x000100583554) */
/* WARNING: Removing unreachable block (ram,0x00010058357c) */
/* WARNING: Removing unreachable block (ram,0x00010058356c) */
/* WARNING: Removing unreachable block (ram,0x00010058358c) */
/* WARNING: Removing unreachable block (ram,0x000100583598) */
/* WARNING: Removing unreachable block (ram,0x000100583544) */
/* WARNING: Removing unreachable block (ram,0x0001005834e4) */
/* WARNING: Removing unreachable block (ram,0x0001005834d4) */
/* WARNING: Removing unreachable block (ram,0x0001005834bc) */
/* WARNING: Removing unreachable block (ram,0x0001005834a8) */
/* WARNING: Removing unreachable block (ram,0x000100583498) */
/* WARNING: Removing unreachable block (ram,0x000100583338) */
/* WARNING: Removing unreachable block (ram,0x0001005834f0) */
/* WARNING: Removing unreachable block (ram,0x00010058353c) */
/* WARNING: Removing unreachable block (ram,0x000100583344) */
/* WARNING: Removing unreachable block (ram,0x0001005831cc) */
/* WARNING: Removing unreachable block (ram,0x000100583300) */
/* WARNING: Removing unreachable block (ram,0x0001005831e0) */
/* WARNING: Removing unreachable block (ram,0x0001005831f8) */
/* WARNING: Removing unreachable block (ram,0x000100583200) */
/* WARNING: Removing unreachable block (ram,0x00010058321c) */
/* WARNING: Removing unreachable block (ram,0x000100583314) */
/* WARNING: Removing unreachable block (ram,0x0001005831bc) */
/* WARNING: Removing unreachable block (ram,0x0001005831ac) */
/* WARNING: Removing unreachable block (ram,0x00010058319c) */
/* WARNING: Removing unreachable block (ram,0x00010058318c) */
/* WARNING: Removing unreachable block (ram,0x00010058317c) */
/* WARNING: Removing unreachable block (ram,0x000100583054) */
/* WARNING: Removing unreachable block (ram,0x000100583004) */
/* WARNING: Removing unreachable block (ram,0x000100582fbc) */
/* WARNING: Removing unreachable block (ram,0x000100582fac) */
/* WARNING: Removing unreachable block (ram,0x000100582f54) */
/* WARNING: Removing unreachable block (ram,0x000100582f44) */
/* WARNING: Removing unreachable block (ram,0x000100582ed8) */
/* WARNING: Removing unreachable block (ram,0x000100583224) */
/* WARNING: Removing unreachable block (ram,0x000100582ee4) */
/* WARNING: Removing unreachable block (ram,0x000100582ec0) */
/* WARNING: Removing unreachable block (ram,0x000100582eb0) */
/* WARNING: Removing unreachable block (ram,0x000100582e58) */
/* WARNING: Removing unreachable block (ram,0x000100582e48) */
/* WARNING: Removing unreachable block (ram,0x0001005832fc) */
/* WARNING: Removing unreachable block (ram,0x000100583330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582d90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c3f75c(param_1);
  func_0x000107c61180();
  func_0x000107c40280(param_3,param_2,lVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794d30);
  *(undefined8 *)(param_1 + _DAT_112794d30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100583618; end: 1005836ab; -[SIGHeaderTitle _applyStyle:toLabel:] */

/* WARNING: Possible PIC construction at 0x000100583694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100583698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100583618(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_4);
  if (param_3 < 4) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10e5f3350 + param_3 * 8));
    func_0x000107c61180();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c59c78(param_4,param_2,puVar1);
  func_0x000107c59c78(*(undefined8 *)(param_1 + _DAT_112794d44),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1005836ac; end: 100583743; -[SIGHeaderTitle setHeaderItem:] */

/* WARNING: Possible PIC construction at 0x000100583708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058370c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005836ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  lVar4 = (long)_DAT_112794d40;
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



/* Entry: 100583744; end: 100583ee3; -[SIGHeaderItem addObserver:] */

/* WARNING: Possible PIC construction at 0x00010058378c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100583e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100583790) */

void FUN_100583744(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    param_3 = *(ulong *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
  }
  else {
    func_0x000107c3d7f8();
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_headerItem_didChangeAlpha__1125d5750);
    if ((uVar2 & 1) != 0) {
      func_0x000107c44ca8(*(undefined8 *)(param_1 + 0x28),param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_headerItem_didChangeHidden__1125d57b0);
    if ((uVar2 & 1) != 0) {
      func_0x000107c44cd8(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_headerItem_didChangeStyle__1125d5840);
    if ((uVar2 & 1) != 0) {
      func_0x000107c44d20(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_headerItem_didChangeHeaderTitleR_1125d57a8);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeDismissalAct_1125d5790);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44cc8(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangePassThroughT_1125d57d0);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44ce8(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeCustomLeadin_1125d5780);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44cc0(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeCustomLeadin_1125d5788);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44cc4(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTrailingAcce_1125d58a8);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d54(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTrailingAcce_1125d58b0);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d58(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitle__1125d5868);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d34(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitleEditabl_1125d5888);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d44(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeEditableTitl_1125d5798);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44ccc(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitleTextAli_1125d5890);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d48(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitleTypeSty_1125d5898);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d4c(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeAllowsFullWi_1125d5748);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44ca4(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitleCollaps_1125d5880);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d40(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitleAlwaysC_1125d5878);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d3c(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeBottomAccess_1125d5778);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44cbc(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeBottomAccess_1125d5770);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44cb8(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeScrollViewSc_1125d57e8);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44cf4(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSubtitle__1125d5848);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d24(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitleView__1125d58a0);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d50(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSearchFieldV_1125d5808);
      if ((uVar2 & 1) != 0) {
        func_0x000107c44d04(param_3);
      }
      uVar2 = param_3;
      func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSearchFieldD_1125d57f0);
      if ((uVar2 & 1) == 0) {
        uVar2 = param_3;
        func_0x000107c61164(param_3,PTR_s_headerItem_didChangePillsDelegat_1125d57d8);
        if ((uVar2 & 1) == 0) {
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSearchFieldL_1125d57f8);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44cfc(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSearchFieldT_1125d5800);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44d00(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTabBarItems__1125d5850);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44d28(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTabBarScroll_1125d5858);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44d2c(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeShowsSection_1125d5818);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44d0c(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeBottomAccess_1125d5768);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44cb4(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeIgnoreRTL__1125d57b8);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44cdc(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTitleAfforda_1125d5870);
          if ((uVar2 & 1) != 0) {
            func_0x000107c44d38(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeAutocapitali_1125d5758);
          if ((uVar2 & 1) != 0) {
            func_0x000107c3e4e8(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44cac(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeAutocorrecti_1125d5760);
          if ((uVar2 & 1) != 0) {
            func_0x000107c3e4f0(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44cb0(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSpellCheckin_1125d5838);
          if ((uVar2 & 1) != 0) {
            func_0x000107c5b798(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44d1c(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeKeyboardType_1125d57c8);
          if ((uVar2 & 1) != 0) {
            func_0x000107c4a904(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44ce4(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeKeyboardAppe_1125d57c0);
          if ((uVar2 & 1) != 0) {
            func_0x000107c4a900(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44ce0(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeReturnKeyTyp_1125d57e0);
          if ((uVar2 & 1) != 0) {
            func_0x000107c50844(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44cf0(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeEnablesRetur_1125d57a0);
          if ((uVar2 & 1) != 0) {
            func_0x000107c42710(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44cd0(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSecureTextEn_1125d5810);
          if ((uVar2 & 1) != 0) {
            func_0x000107c4a3b0(*(undefined8 *)(param_1 + 0xc0));
            func_0x000107c44d08(param_3);
          }
          uVar2 = param_3;
          func_0x000107c61164(param_3,PTR_s_headerItem_didChangeTextContentT_1125d5860);
          if ((uVar2 & 1) == 0) {
            uVar2 = param_3;
            func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSmartQuotesT_1125d5830);
            if ((uVar2 & 1) != 0) {
              func_0x000107c5b124(*(undefined8 *)(param_1 + 0xc0));
              func_0x000107c44d18(param_3);
            }
            uVar2 = param_3;
            func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSmartDashesT_1125d5820);
            if ((uVar2 & 1) != 0) {
              func_0x000107c5b11c(*(undefined8 *)(param_1 + 0xc0));
              func_0x000107c44d10(param_3);
            }
            uVar2 = param_3;
            func_0x000107c61164(param_3,PTR_s_headerItem_didChangeSmartInsertD_1125d5828);
            if ((uVar2 & 1) != 0) {
              func_0x000107c5b120(*(undefined8 *)(param_1 + 0xc0));
              func_0x000107c44d14(param_3);
            }
          }
          else {
            uVar2 = *(ulong *)(param_1 + 0xc0);
            func_0x000107c5c844(uVar2);
            func_0x000107c61180();
            func_0x000107c44d30(param_3);
            param_3 = uVar2;
          }
        }
        else {
          uVar2 = param_1 + 200;
          func_0x000107c61148(uVar2);
          func_0x000107c44cec(param_3);
          param_3 = uVar2;
        }
      }
      else {
        uVar2 = param_1 + 0xb8;
        func_0x000107c61148(uVar2);
        func_0x000107c44cf8(param_3);
        param_3 = uVar2;
      }
    }
    else {
      uVar2 = param_1 + 0x40;
      func_0x000107c61148(uVar2);
      func_0x000107c44cd4(param_3);
      param_3 = uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100583ee4; end: 100583eef; -[SIGHeaderItemTextInputTraits setHeaderItem:] */

void FUN_100583ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 100583ef0; end: 100583f23; -[SIGHeaderTitle headerItem:didChangeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100583ef0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_1 + _DAT_112794d28) == param_4) {
    return;
  }
  *(long *)(param_1 + _DAT_112794d28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdcec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__applyStyle_toLabel__1125514a0,param_4,
             *(undefined8 *)(param_1 + _DAT_112794d14));
  return;
}



/* Entry: 100583f24; end: 100583fdb; -[SIGHeaderTitle headerItem:didChangeTitle:] */

/* WARNING: Possible PIC construction at 0x000100583f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100583f80) */
/* WARNING: Removing unreachable block (ram,0x000100583f84) */
/* WARNING: Removing unreachable block (ram,0x000100583fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100583f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794d14);
  func_0x000107c5c82c(uVar1);
  func_0x000107c61180();
  func_0x000107c49d0c(param_4,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100583fdc; end: 100584083; -[SIGHeaderTitle _toggleTitleVisibility] */

/* WARNING: Possible PIC construction at 0x000100584018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058406c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058401c) */
/* WARNING: Removing unreachable block (ram,0x000100584040) */
/* WARNING: Removing unreachable block (ram,0x000100584070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100583fdc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794d40;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x000107c4a5e4();
  if ((uVar1 & 1) == 0) {
    func_0x000107c5cad4(*(undefined8 *)(param_1 + lVar2));
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794d14),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 100584084; end: 10058408b; -[SIGHeaderItem isTitleEditable] */

undefined1 FUN_100584084(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 10058408c; end: 100584093; -[SIGHeaderItem titleView] */

undefined8 FUN_10058408c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 100584094; end: 100584443; -[SIGHeaderTitle headerItem:didChangeTitleEditable:] */

/* WARNING: Possible PIC construction at 0x0001005841f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005841fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584094(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c3c2c4(param_1);
  if (param_4 == 0) {
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
      return;
    }
    func_0x000107c60e78();
    lVar2 = (long)_DAT_112794d44;
    func_0x000107c4ff3c(*(undefined8 *)(param_3 + lVar2));
    func_0x000107c4ff34(*(undefined8 *)(param_3 + lVar2));
  }
  else {
    puVar1 = PTR_PTR_1126e17e0;
    func_0x000107c610f4();
    dVar5 = *(double *)PTR__CGRectZero_110347608;
    func_0x000107c469a4(dVar5,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar2 = (long)_DAT_112794d44;
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined **)(param_1 + lVar2) = puVar1;
    func_0x000107c61170(uVar3);
    func_0x000107c5a050(*(undefined8 *)(param_1 + lVar2));
    func_0x000107c5d840(param_3);
    func_0x000107c53fa0(*(undefined8 *)(param_1 + lVar2));
    func_0x000107c3d8b8(*(undefined8 *)(param_1 + lVar2));
    func_0x000107c54410(*(undefined8 *)(param_1 + lVar2));
    lVar4 = (long)_DAT_112794d14;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c5c82c(uVar3);
    func_0x000107c61180();
    func_0x000107c59c6c(*(undefined8 *)(param_1 + lVar2));
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c5c838(uVar3);
    func_0x000107c61180();
    func_0x000107c59c78(*(undefined8 *)(param_1 + lVar2));
    func_0x000107c61170(uVar3);
    func_0x000107c520f4(*(undefined8 *)(param_1 + lVar2));
    func_0x000107c498ec(*(undefined8 *)(param_1 + lVar4));
    dVar6 = dVar5;
    func_0x000107c498ec(*(undefined8 *)(param_1 + _DAT_112794d20));
    func_0x000107c569c0(dVar5 + dVar6,param_1);
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beccf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__toggleTitleVisibility_112590d78);
  return;
}



/* Entry: 100584444; end: 100584483; -[SIGHeaderTitle _removeEditableTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584444(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794d44;
  func_0x000107c4ff3c(*(undefined8 *)(param_1 + lVar1),param_2,
                      *(undefined8 *)(param_1 + _DAT_112794d48));
  func_0x000107c4ff34(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010beccf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleTitleVisibility_112590d78);
  return;
}



/* Entry: 100584484; end: 1005844ff; -[SIGHeaderTitle headerItem:didChangeEditableTitlePlaceholderText:] */

/* WARNING: Possible PIC construction at 0x0001005844d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005844d8) */
/* WARNING: Removing unreachable block (ram,0x0001005844dc) */
/* WARNING: Removing unreachable block (ram,0x0001005844e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794d44);
  func_0x000107c4e80c(uVar1);
  func_0x000107c61180();
  func_0x000107c49cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100584500; end: 100584557; -[SIGHeaderTitle headerItem:didChangeTitleTextAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584500(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794d14;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x000107c5c834();
  if (lVar1 == param_4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setTextAlignment__112662638,param_4);
  return;
}



/* Entry: 100584558; end: 1005845e3; -[SIGHeaderTitle headerItem:didChangeTitleTypeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584558(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_112794d14;
  lVar1 = *(long *)(param_2 + lVar2);
  func_0x000107c5d100();
  if (lVar1 == param_5) {
    return;
  }
  func_0x000107c5a100(*(undefined8 *)(param_2 + lVar2));
  func_0x000107c498ec(*(undefined8 *)(param_2 + lVar2));
  dVar3 = param_1;
  func_0x000107c498ec(*(undefined8 *)(param_2 + _DAT_112794d20));
                    /* WARNING: Could not recover jumptable at 0x00010c1cb630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + dVar3,param_2,PTR_s_setNaturalTitleWidth__1126507b0);
  return;
}



/* Entry: 1005845e4; end: 1005845f3; -[SIGLabel typeStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005845e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951b4);
}



/* Entry: 1005845f4; end: 10058467b; -[SIGHeaderTitle headerItem:didChangeSubtitle:] */

/* WARNING: Possible PIC construction at 0x000100584648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058464c) */
/* WARNING: Removing unreachable block (ram,0x000100584650) */
/* WARNING: Removing unreachable block (ram,0x000100584664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005845f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794d18);
  func_0x000107c5c82c(uVar1);
  func_0x000107c61180();
  func_0x000107c49d0c(param_4,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10058467c; end: 10058470b; -[SIGHeaderTitle _toggleSubtitleVisibility] */

/* WARNING: Possible PIC construction at 0x0001005846b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005846f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005846b4) */
/* WARNING: Removing unreachable block (ram,0x0001005846d4) */
/* WARNING: Removing unreachable block (ram,0x0001005846c0) */
/* WARNING: Removing unreachable block (ram,0x000107c550d8) */
/* WARNING: Removing unreachable block (ram,0x00010c1a7f60) */
/* WARNING: Removing unreachable block (ram,0x0001005846f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058467c(long param_1)

{
  func_0x000107c5cad4(*(undefined8 *)(param_1 + _DAT_112794d40));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10058470c; end: 100584ac7; -[SIGHeaderTitle headerItem:didChangeTitleView:] */

/* WARNING: Possible PIC construction at 0x000100584780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100584914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058492c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100584a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100584a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100584a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100584a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100584a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100584b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100584a58) */
/* WARNING: Removing unreachable block (ram,0x000100584a48) */
/* WARNING: Removing unreachable block (ram,0x000100584a38) */
/* WARNING: Removing unreachable block (ram,0x000100584a28) */
/* WARNING: Removing unreachable block (ram,0x000100584930) */
/* WARNING: Removing unreachable block (ram,0x000100584918) */
/* WARNING: Removing unreachable block (ram,0x000100584784) */
/* WARNING: Removing unreachable block (ram,0x000100584a84) */
/* WARNING: Removing unreachable block (ram,0x000100584ac4) */
/* WARNING: Removing unreachable block (ram,0x000100584aa4) */
/* WARNING: Removing unreachable block (ram,0x00010058479c) */
/* WARNING: Removing unreachable block (ram,0x000100584934) */
/* WARNING: Removing unreachable block (ram,0x000100584a18) */
/* WARNING: Removing unreachable block (ram,0x0001005847d8) */
/* WARNING: Removing unreachable block (ram,0x000100584b20) */
/* WARNING: Removing unreachable block (ram,0x000100584b24) */
/* WARNING: Removing unreachable block (ram,0x000100584b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058470c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_4);
  lVar2 = (long)_DAT_112794d4c;
  func_0x000107c4ff3c(*(undefined8 *)(param_1 + lVar2),param_2,
                      *(undefined8 *)(param_1 + _DAT_112794d1c));
  func_0x000107c4ff34(*(undefined8 *)(param_1 + lVar2));
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100584ac8; end: 100584b7b; -[SIGHeaderTitle headerItem:didChangeTitleAffordance:] */

/* WARNING: Possible PIC construction at 0x000100584b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100584b20) */
/* WARNING: Removing unreachable block (ram,0x000100584b24) */
/* WARNING: Removing unreachable block (ram,0x000100584b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794d20);
  func_0x000107c45034(uVar1);
  func_0x000107c61180();
  func_0x000107c49cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100584b7c; end: 100584be7; -[SIGHeaderTitle _toggleAffordanceVisibility] */

/* WARNING: Possible PIC construction at 0x000100584bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100584bc0) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584b7c(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794d20;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    bVar1 = true;
    uVar3 = 0;
  }
  else {
    func_0x000107c45034();
    func_0x000107c61180();
    bVar1 = lVar2 == 0;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setHidden__1126479f8,bVar1);
  return;
}



/* Entry: 100584be8; end: 100584bfb; -[SIGHeaderTitle setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584be8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794d70,param_3);
  return;
}



/* Entry: 100584bfc; end: 100584c7b; -[SIGHeaderItem removeObserver:] */

void FUN_100584bfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x000107c40808(), lVar1 != 0)) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 8);
      func_0x000107c4eaf0(lVar1,param_2,uVar3);
      if (lVar1 == param_3) {
        func_0x000107c4ffc4(*(undefined8 *)(param_1 + 8),param_2,uVar3);
        break;
      }
      uVar3 = uVar3 + 1;
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x000107c40808();
    } while (uVar3 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100584c7c; end: 100584cd3; -[SIGHeaderTitleRow headerItem:didChangeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584c7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_1 + _DAT_112794dc0) != param_4) {
    *(long *)(param_1 + _DAT_112794dc0) = param_4;
    func_0x000107c3cc1c(param_1,param_2,0);
    func_0x000107c611b0();
    func_0x000107c3cd0c(param_1,param_2,0);
    func_0x000107c611b0();
  }
  return;
}



/* Entry: 100584cd4; end: 100584cf3; -[SIGHeaderTitleRow headerItem:didChangeDismissalAction:] */

void FUN_100584cd4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c3cc1c(param_1,param_2,0);
  func_0x000107c611b0();
  return;
}



/* Entry: 100584cf4; end: 100584dab; -[SIGHeaderTitleRow _updateLeadingAccessoryViewWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584cf4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1;
  func_0x000107c3bc24(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_112794db4));
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
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112794dac);
  func_0x000107c52128(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 100584dac; end: 100584e67; -[SIGHeaderTitleRow _leadingAccessoryViewFromHeaderItem:] */

void FUN_100584dac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c410b8(param_3);
  func_0x000107c61180();
  func_0x000107c61170();
  lVar1 = param_3;
  func_0x000107c420c8();
  if (lVar1 == 0) {
    param_1 = param_3;
    func_0x000107c410b8(param_3);
    func_0x000107c61180();
  }
  else if (lVar1 == 2) {
    func_0x000107c3ae60(param_1);
    func_0x000107c61180();
  }
  else if (lVar1 == 1) {
    func_0x000107c3b52c(param_1);
    func_0x000107c61180();
  }
  else {
    param_1 = 0;
  }
  lVar1 = param_3;
  func_0x000107c420c8();
  if (lVar1 != 0) {
    func_0x000107c4ff34(param_1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100584e68; end: 100584e6f; -[SIGHeaderItem customLeadingAccessoryView] */

undefined8 FUN_100584e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


