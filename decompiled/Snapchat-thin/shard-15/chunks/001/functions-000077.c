/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b810de8; end: 10b81195b; -[SIGProfileCard initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b810de8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_11270b270;
  uVar25 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_128;
  uStack_128 = param_1;
  _objc_msgSendSuper2(uVar25,uVar26,uVar27,uVar28,puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e23d70a);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c21e900(puVar1);
    func_0x00010bef9040(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar22 = (long)_DAT_1127941c8;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar3;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar24 = (long)_DAT_1127941cc;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar3;
    _objc_release(uVar19);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    lVar23 = (long)_DAT_1127941d0;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar3;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar23));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar23));
    _objc_release(puVar3);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    lVar21 = (long)_DAT_1127941d4;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar3;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar21));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar3);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar21));
    puVar4 = puVar1;
    func_0x00010befbb60();
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf33880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar20 = (long)_DAT_1127941d8;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar3;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar20));
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010befbb60(puVar1);
    uVar28 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar28;
    func_0x00010bf493c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar25;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar19;
    func_0x00010bf493c0(0xc02c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar26;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar6;
    func_0x00010bf493c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar27;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar26);
    _objc_release(puVar17);
    _objc_release(uVar19);
    _objc_release(uVar25);
    _objc_release(puVar4);
    _objc_release(uVar28);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar19;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar25;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar6;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar26;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar7;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar27;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar28;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar28);
    _objc_release(puVar17);
    _objc_release(uVar9);
    _objc_release(uVar27);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar26);
    _objc_release(uVar6);
    _objc_release(uVar25);
    _objc_release(uVar19);
    uVar28 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar27;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar6;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar26;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar25);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar26);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar27);
    _objc_release(uVar19);
    _objc_release(uVar28);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar19;
    func_0x00010bf493c0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar26;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar27;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar28;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2793a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar14;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar25);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar28);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar27);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar26);
    _objc_release(uVar6);
    _objc_release(uVar19);
    uVar28 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar26;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar19;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar25;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)((long)puVar1 + lVar20));
    uVar27 = uVar6;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 3;
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar27;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    _objc_release(uVar6);
    _objc_release(uVar25);
    _objc_release(puVar17);
    _objc_release(uVar19);
    _objc_release(uVar26);
    _objc_release(puVar4);
    _objc_release(uVar28);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    param_3 = puVar18;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010bed5ba0(puVar1);
    _objc_release(puVar18);
    _objc_release(puVar16);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c212f20(*(undefined8 *)((long)puVar2 + (long)_DAT_1127941d0));
    func_0x00010c212f20(*(undefined8 *)((long)puVar2 + (long)_DAT_1127941d4));
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar2 + (long)_DAT_1127941cc));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b81195c; end: 10b811a1f; -[SIGProfileCard initWithImage:title:subtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b81195c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (param_1 != 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127941d0),param_2,param_4);
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127941d4),param_2,param_5);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127941cc),param_2,param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b811a20; end: 10b811c03; -[SIGProfileCard setBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b811a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lStack_e0;
  undefined *puStack_d8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar11 = (long)_DAT_1127941dc;
  uVar1 = *(ulong *)(param_5 + lVar11);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_5 + lVar11));
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_5 + lVar11);
    *(long *)(param_5 + lVar11) = param_7;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar11));
    if (param_7 != 0) {
      func_0x00010befbb60(param_5);
      puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_5 + _DAT_1127941d8);
      func_0x00010c08de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0xbff0000000000000;
      uVar7 = uVar5;
      func_0x00010bf493c0(0xbff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(lVar4);
      _objc_release(uVar3);
    }
    func_0x00010bed5ba0(param_5);
    func_0x00010c1cbe20(param_5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puStack_d8 = PTR_PTR_11270b270;
  lStack_e0 = param_7;
  _objc_msgSendSuper2(&lStack_e0,PTR_s_layoutSubviews_112600e60);
  puVar9 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_7);
  lVar10 = param_7;
  uVar2 = param_1;
  func_0x00010c08c0e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,uVar2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_retainAutorelease(puVar9);
  func_0x00010bdc1040();
  func_0x00010c08c0e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(param_7);
  _objc_release(puVar9);
  return;
}



/* Entry: 10b811c04; end: 10b811cff; -[SIGProfileCard layoutSubviews] */

void FUN_10b811c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b270;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  uVar1 = param_5;
  uVar3 = param_1;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(param_5);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b811d00; end: 10b811d7f; -[SIGProfileCard intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b811d00(long param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = 0.0;
  func_0x00010c23d5a0(0x4066a00000000000,0,*(undefined8 *)(param_1 + _DAT_1127941d0));
  dVar2 = 0.0;
  func_0x00010c23d5a0(0x4066a00000000000,0,*(undefined8 *)(param_1 + _DAT_1127941d4));
  auVar3._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar3._8_8_ = dVar1 + dVar2 + 1.0 + 28.0;
  return auVar3;
}



/* Entry: 10b811d80; end: 10b811ec3; -[SIGProfileCard setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b811d80(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127941e0;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126e15f8;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    func_0x00010bfe6ac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127941cc));
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127941d0));
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c260dc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127941d4));
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b811ec4; end: 10b811fe7; -[SIGProfileCard _tapCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b811ec4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126e15f8;
  uVar4 = *(ulong *)(param_1 + _DAT_1127941e0);
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
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar3 = uVar1;
    func_0x00010c12a9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) goto LAB_10b811fd0;
  }
  else {
    _objc_release();
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127941e4);
  uVar3 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar4 = uVar1;
    func_0x00010c12a9a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010bfd0140(uVar5);
  }
  _objc_release(uVar3);
LAB_10b811fd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b811fe8; end: 10b81210b; -[SIGProfileCard _tapRemove] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b811fe8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126e15f8;
  uVar4 = *(ulong *)(param_1 + _DAT_1127941e0);
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
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar3 = uVar1;
    func_0x00010c12a9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) goto LAB_10b8120f4;
  }
  else {
    _objc_release();
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127941e4);
  uVar3 = uVar1;
  func_0x00010c12a9a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar4 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010bfd0140(uVar5);
  }
  _objc_release(uVar3);
LAB_10b8120f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b81210c; end: 10b8121eb; -[SIGProfileCard _updateConstraintsForBadge] */

/* WARNING: Possible PIC construction at 0x00010b812138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b81213c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81210c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127941e8;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 == 0) {
    plVar5 = (long *)(param_1 + _DAT_1127941dc);
    lVar1 = *plVar5;
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127941c8);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      plVar5 = (long *)(param_1 + _DAT_1127941d8);
    }
    lVar1 = *plVar5;
    func_0x00010c08de00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf493c0(0xbff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar2;
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar6);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setActive__112636340,uVar3);
  return;
}



/* Entry: 10b8121ec; end: 10b8121fb; -[SIGProfileCard viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8121ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127941e0);
}



/* Entry: 10b8121fc; end: 10b81220b; -[SIGProfileCard actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8121fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127941e4);
}



/* Entry: 10b81220c; end: 10b81224b; -[SIGProfileCard setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81220c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127941e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b81224c; end: 10b81225b; -[SIGProfileCard badgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b81224c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127941dc);
}



/* Entry: 10b81225c; end: 10b81230b; -[SIGProfileCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b81225c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127941e4,0);
  _objc_storeStrong(param_1 + _DAT_1127941e0,0);
  _objc_storeStrong(param_1 + _DAT_1127941e8,0);
  _objc_storeStrong(param_1 + _DAT_1127941c8,0);
  _objc_storeStrong(param_1 + _DAT_1127941dc,0);
  _objc_storeStrong(param_1 + _DAT_1127941d8,0);
  _objc_storeStrong(param_1 + _DAT_1127941cc,0);
  _objc_storeStrong(param_1 + _DAT_1127941d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127941d0,0);
  return;
}



/* Entry: 10b81230c; end: 10b812377; +[SIGViewOrViewController viewControllerWithViewController:] */

void FUN_10b81230c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1550;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b812378; end: 10b8123db; +[SIGViewOrViewController viewWithView:] */

void FUN_10b812378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1550;
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



/* Entry: 10b8123dc; end: 10b8123ff; -[SIGViewOrViewController copyWithZone:] */

undefined8 FUN_10b8123dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b812400; end: 10b812477; -[SIGViewOrViewController hash] */

void FUN_10b812400(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_11270b278;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b812478; end: 10b8124bb; -[SIGViewOrViewController internalInit] */

void FUN_10b812478(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8124bc; end: 10b812573; -[SIGViewOrViewController isEqual:] */

long FUN_10b8124bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b81254c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b812558;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b812558;
        }
        goto LAB_10b81254c;
      }
    }
    lVar3 = 0;
  }
LAB_10b812558:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b812574; end: 10b8125f7; -[SIGViewOrViewController matchView:viewController:] */

void FUN_10b812574(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b8125dc;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b8125dc;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b8125dc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8125f8; end: 10b812627; -[SIGViewOrViewController .cxx_destruct] */

void FUN_10b8125f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b812628; end: 10b81275f; -[SIGProfileCardViewModel initWithImage:title:subtitle:tapActionModel:removeActionModel:] */

undefined1 *
FUN_10b812628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270b280;
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



/* Entry: 10b812760; end: 10b812783; -[SIGProfileCardViewModel copyWithZone:] */

undefined8 FUN_10b812760(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b812784; end: 10b81281b; -[SIGProfileCardViewModel hash] */

undefined8 * FUN_10b812784(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b8128e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b8128f0;
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
                goto LAB_10b8128f0;
              }
              goto LAB_10b8128e4;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b8128f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b81281c; end: 10b81290b; -[SIGProfileCardViewModel isEqual:] */

long FUN_10b81281c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8128e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8128f0;
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
                goto LAB_10b8128f0;
              }
              goto LAB_10b8128e4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8128f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b81290c; end: 10b812913; -[SIGProfileCardViewModel image] */

undefined8 FUN_10b81290c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b812914; end: 10b81291b; -[SIGProfileCardViewModel title] */

undefined8 FUN_10b812914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b81291c; end: 10b812923; -[SIGProfileCardViewModel subtitle] */

undefined8 FUN_10b81291c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b812924; end: 10b81292b; -[SIGProfileCardViewModel tapActionModel] */

undefined8 FUN_10b812924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b81292c; end: 10b812933; -[SIGProfileCardViewModel removeActionModel] */

undefined8 FUN_10b81292c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b812934; end: 10b812987; -[SIGProfileCardViewModel .cxx_destruct] */

void FUN_10b812934(long param_1)

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



/* Entry: 10b812988; end: 10b812a83; -[SIGRingViewModel initWithBorderWidth:borderInnerPadding:borderColor:iconImage:iconColor:roundedIcon:] */

undefined1 *
FUN_10b812988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_11270b288;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
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
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b812a84; end: 10b812aa7; -[SIGRingViewModel copyWithZone:] */

undefined8 FUN_10b812a84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b812aa8; end: 10b812b6f; -[SIGRingViewModel hash] */

ulong * FUN_10b812aa8(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  double dVar9;
  double dVar10;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar4;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar5 = &uStack_58;
  uStack_38 = uVar3;
  func_0x000107c3191c(puVar5,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10b812c80:
    puVar8 = (ulong *)0x1;
  }
  else {
    puVar8 = (ulong *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b812c8c;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar6 & 1) != 0) && ((char)puVar5[1] == (char)param_3[1])) {
      dVar10 = ABS((double)puVar5[2] - (double)param_3[2]);
      dVar9 = ABS((double)puVar5[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar2 = dVar10 < dVar9;
      }
      if (bVar2) {
        dVar10 = ABS((double)puVar5[3] - (double)param_3[3]);
        dVar9 = ABS((double)puVar5[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar2 = dVar10 < dVar9;
        }
        if (((bVar2) &&
            ((uVar7 = puVar5[4], uVar7 == param_3[4] || (func_0x00010c071c60(), (int)uVar7 != 0))))
           && ((uVar7 = puVar5[5], uVar7 == param_3[5] || (func_0x00010c071ae0(), (int)uVar7 != 0)))
           ) {
          puVar8 = (ulong *)puVar5[6];
          if (puVar8 != (ulong *)param_3[6]) {
            func_0x00010c071c60();
            goto LAB_10b812c8c;
          }
          goto LAB_10b812c80;
        }
      }
    }
    puVar8 = (ulong *)0x0;
  }
LAB_10b812c8c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b812b70; end: 10b812ca7; -[SIGRingViewModel isEqual:] */

long FUN_10b812b70(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b812c80:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b812c8c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x30);
          if (lVar4 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071c60();
            goto LAB_10b812c8c;
          }
          goto LAB_10b812c80;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b812c8c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b812ca8; end: 10b812caf; -[SIGRingViewModel borderWidth] */

undefined8 FUN_10b812ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b812cb0; end: 10b812cb7; -[SIGRingViewModel borderInnerPadding] */

undefined8 FUN_10b812cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b812cb8; end: 10b812cbf; -[SIGRingViewModel borderColor] */

undefined8 FUN_10b812cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b812cc0; end: 10b812cc7; -[SIGRingViewModel iconImage] */

undefined8 FUN_10b812cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b812cc8; end: 10b812ccf; -[SIGRingViewModel iconColor] */

undefined8 FUN_10b812cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b812cd0; end: 10b812cd7; -[SIGRingViewModel roundedIcon] */

undefined1 FUN_10b812cd0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b812cd8; end: 10b812d13; -[SIGRingViewModel .cxx_destruct] */

void FUN_10b812cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b812d14; end: 10b812dbf; -[SCActionModel initWithIdentifier:actionDataModel:] */

undefined1 *
FUN_10b812d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b290;
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



/* Entry: 10b812dc0; end: 10b812de3; -[SCActionModel copyWithZone:] */

undefined8 FUN_10b812dc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b812de4; end: 10b812e57; -[SCActionModel hash] */

undefined8 * FUN_10b812de4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b812ed8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b812ee4;
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
          goto LAB_10b812ee4;
        }
        goto LAB_10b812ed8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b812ee4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b812e58; end: 10b812eff; -[SCActionModel isEqual:] */

long FUN_10b812e58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b812ed8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b812ee4;
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
          goto LAB_10b812ee4;
        }
        goto LAB_10b812ed8;
      }
    }
    lVar3 = 0;
  }
LAB_10b812ee4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b812f00; end: 10b812f07; -[SCActionModel identifier] */

undefined8 FUN_10b812f00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b812f08; end: 10b812f0f; -[SCActionModel actionDataModel] */

undefined8 FUN_10b812f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b812f10; end: 10b812f3f; -[SCActionModel .cxx_destruct] */

void FUN_10b812f10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b812f40; end: 10b813027; -[SCSectionKitSeeMoreViewModel initWithTitleText:backgroundColor:backgroundHighlightedColor:isFullWidth:] */

undefined1 *
FUN_10b812f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

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
  puStack_48 = PTR_PTR_11270b298;
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b813028; end: 10b81304b; -[SCSectionKitSeeMoreViewModel copyWithZone:] */

undefined8 FUN_10b813028(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b81304c; end: 10b8130cf; -[SCSectionKitSeeMoreViewModel hash] */

undefined8 * FUN_10b81304c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b813178:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b813184;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071c60();
            goto LAB_10b813184;
          }
          goto LAB_10b813178;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b813184:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b8130d0; end: 10b81319f; -[SCSectionKitSeeMoreViewModel isEqual:] */

long FUN_10b8130d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b813178:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b813184;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071c60();
            goto LAB_10b813184;
          }
          goto LAB_10b813178;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b813184:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8131a0; end: 10b8131a7; -[SCSectionKitSeeMoreViewModel titleText] */

undefined8 FUN_10b8131a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b8131a8; end: 10b8131af; -[SCSectionKitSeeMoreViewModel backgroundColor] */

undefined8 FUN_10b8131a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b8131b0; end: 10b8131b7; -[SCSectionKitSeeMoreViewModel backgroundHighlightedColor] */

undefined8 FUN_10b8131b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b8131b8; end: 10b8131bf; -[SCSectionKitSeeMoreViewModel isFullWidth] */

undefined1 FUN_10b8131b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b8131c0; end: 10b8131fb; -[SCSectionKitSeeMoreViewModel .cxx_destruct] */

void FUN_10b8131c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8131fc; end: 10b813283; -[SCSectionKitHeaderModel initWithDisplayStrategy:sectionTitle:] */

undefined1 *
FUN_10b8131fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b2a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b813284; end: 10b8132a7; -[SCSectionKitHeaderModel copyWithZone:] */

undefined8 FUN_10b813284(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8132a8; end: 10b81330f; -[SCSectionKitHeaderModel hash] */

long * FUN_10b8132a8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b813394;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b813394;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b813394;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b813394:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b813310; end: 10b8133af; -[SCSectionKitHeaderModel isEqual:] */

long FUN_10b813310(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b813394;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b813394;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b813394;
    }
  }
  lVar3 = 1;
LAB_10b813394:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8133b0; end: 10b8133b7; -[SCSectionKitHeaderModel displayStrategy] */

undefined8 FUN_10b8133b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b8133b8; end: 10b8133bf; -[SCSectionKitHeaderModel sectionTitle] */

undefined8 FUN_10b8133b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b8133c0; end: 10b8133cb; -[SCSectionKitHeaderModel .cxx_destruct] */

void FUN_10b8133c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8133cc; end: 10b813493; +[SCCollectionViewSectionUpdateModel cellUpdatesWithInsertIndexSet:deleteIndexSet:reloadIndexSet:] */

void FUN_10b8133cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b48b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b813494; end: 10b8134db; +[SCCollectionViewSectionUpdateModel reloadSection] */

void FUN_10b813494(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b48b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8134dc; end: 10b8134ff; -[SCCollectionViewSectionUpdateModel copyWithZone:] */

undefined8 FUN_10b8134dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b813500; end: 10b813583; -[SCCollectionViewSectionUpdateModel hash] */

void FUN_10b813500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270b2a8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b813584; end: 10b8135c7; -[SCCollectionViewSectionUpdateModel internalInit] */

void FUN_10b813584(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b2a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8135c8; end: 10b813697; -[SCCollectionViewSectionUpdateModel isEqual:] */

long FUN_10b8135c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b813670:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b81367c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b81367c;
          }
          goto LAB_10b813670;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b81367c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b813698; end: 10b81371f; -[SCCollectionViewSectionUpdateModel matchReloadSection:cellUpdates:] */

void FUN_10b813698(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b813720; end: 10b81375b; -[SCCollectionViewSectionUpdateModel .cxx_destruct] */

void FUN_10b813720(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b81375c; end: 10b8137af; +[SCCollectionViewSectionIndexMatch itemIndexWithItemIndex:] */

void FUN_10b81375c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1600;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8137b0; end: 10b8137fb; +[SCCollectionViewSectionIndexMatch noItem] */

void FUN_10b8137b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1600;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8137fc; end: 10b813847; +[SCCollectionViewSectionIndexMatch notFound] */

void FUN_10b8137fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1600;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b813848; end: 10b81386b; -[SCCollectionViewSectionIndexMatch copyWithZone:] */

undefined8 FUN_10b813848(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b81386c; end: 10b8138cb; -[SCCollectionViewSectionIndexMatch hash] */

void FUN_10b81386c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270b2b0;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8138cc; end: 10b81390f; -[SCCollectionViewSectionIndexMatch internalInit] */

void FUN_10b8138cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b2b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b813910; end: 10b8139a7; -[SCCollectionViewSectionIndexMatch isEqual:] */

bool FUN_10b813910(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b8139a8; end: 10b813a53; -[SCCollectionViewSectionIndexMatch matchItemIndex:noItem:notFound:] */

void FUN_10b8139a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10b813a30;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 != 1) {
      if ((lVar1 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_10b813a30;
    }
    if (param_4 == 0) goto LAB_10b813a30;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  (*pcVar2)(lVar1);
LAB_10b813a30:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b813a54; end: 10b813aff; -[SCContainerCellViewModel initWithCellReuseIdentifier:contentViewModel:] */

undefined1 *
FUN_10b813a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b2b8;
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



/* Entry: 10b813b00; end: 10b813b23; -[SCContainerCellViewModel copyWithZone:] */

undefined8 FUN_10b813b00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b813b24; end: 10b813b97; -[SCContainerCellViewModel hash] */

undefined8 * FUN_10b813b24(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b813c18:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b813c24;
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
          goto LAB_10b813c24;
        }
        goto LAB_10b813c18;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b813c24:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b813b98; end: 10b813c3f; -[SCContainerCellViewModel isEqual:] */

long FUN_10b813b98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b813c18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b813c24;
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
          goto LAB_10b813c24;
        }
        goto LAB_10b813c18;
      }
    }
    lVar3 = 0;
  }
LAB_10b813c24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b813c40; end: 10b813c47; -[SCContainerCellViewModel cellReuseIdentifier] */

undefined8 FUN_10b813c40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b813c48; end: 10b813c4f; -[SCContainerCellViewModel contentViewModel] */

undefined8 FUN_10b813c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b813c50; end: 10b813c7f; -[SCContainerCellViewModel .cxx_destruct] */

void FUN_10b813c50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b813c80; end: 10b8142ff;  */

undefined * FUN_10b813c80(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010b814154();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010b814154();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar17 = param_1;
  func_0x00010bf529e0();
  if (uVar17 == 0) {
    uVar17 = 0;
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    do {
      uVar7 = param_2;
      func_0x00010bf529e0();
      if (uVar7 <= uVar17) break;
      uVar7 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((int)uVar9 == 0) {
        uVar7 = param_1;
        func_0x00010c0dfd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar7);
        if (uVar8 != 0) {
LAB_10b813e6c:
          func_0x00010bef92c0(puVar3);
          uVar7 = param_2;
          func_0x00010c0dfd40(param_2);
          _objc_retainAutoreleasedReturnValue();
          FUN_10b814300(uVar2,uVar7);
          _objc_release(uVar7);
          goto LAB_10b813ea4;
        }
        uVar7 = param_2;
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          if (param_3 != 0) {
            uVar7 = param_1;
            func_0x00010c0dfd40(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = param_2;
            func_0x00010c0dfd40(param_2);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = param_3;
            (**(code **)(param_3 + 0x10))(param_3,uVar7,uVar8);
            _objc_release(uVar8);
            _objc_release(uVar7);
            if ((int)lVar10 != 0) {
              puVar11 = PTR_PTR_1126e1608;
              _objc_alloc(PTR_PTR_1126e1608);
              func_0x00010c031080();
              puVar12 = puVar5;
              goto LAB_10b813dbc;
            }
          }
          func_0x00010bef92c0(puVar4);
          uVar7 = param_1;
          func_0x00010c0dfd40(param_1);
          _objc_retainAutoreleasedReturnValue();
          FUN_10b814300(uVar1,uVar7);
          _objc_release(uVar7);
          uVar16 = uVar16 + 1;
          goto LAB_10b813e6c;
        }
        func_0x00010bef92c0(puVar4);
        uVar7 = param_1;
        func_0x00010c0dfd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        FUN_10b814300(uVar1,uVar7);
        _objc_release(uVar7);
        uVar16 = uVar16 + 1;
      }
      else {
        puVar11 = PTR_PTR_1126e1608;
        _objc_alloc(PTR_PTR_1126e1608);
        func_0x00010c031080();
        puVar12 = puVar6;
LAB_10b813dbc:
        func_0x00010befa120(puVar12);
        _objc_release(puVar11);
        uVar7 = param_2;
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        FUN_10b814300(uVar2,uVar7);
        _objc_release(uVar7);
        uVar7 = param_1;
        func_0x00010c0dfd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        FUN_10b814300(uVar1,uVar7);
        _objc_release(uVar7);
        uVar16 = uVar16 + 1;
LAB_10b813ea4:
        uVar17 = uVar17 + 1;
      }
      uVar7 = param_1;
      func_0x00010bf529e0();
    } while (uVar16 < uVar7);
  }
  uVar7 = param_1;
  func_0x00010bf529e0();
  uVar8 = param_1;
  puVar11 = puVar4;
  if ((uVar16 < uVar7) ||
     (uVar16 = param_2, func_0x00010bf529e0(), uVar8 = param_2, puVar11 = puVar3, uVar17 < uVar16))
  {
    func_0x00010bf529e0(uVar8);
    func_0x00010bef9300(puVar11);
  }
  puVar11 = PTR_PTR_1126e1610;
  _objc_alloc(PTR_PTR_1126e1610);
  puVar12 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar13 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar14 = puVar5;
  func_0x00010bf51e00(puVar5);
  puVar15 = puVar6;
  func_0x00010bf51e00(puVar6);
  func_0x00010c01e280(puVar11);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar11;
}



/* Entry: 10b814300; end: 10b8143ab;  */

void FUN_10b814300(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2827c0();
  if (lVar2 == 1) {
    func_0x00010c12d3e0(param_1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(param_1);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b8143ac; end: 10b81462f;  */

undefined8 FUN_10b8143ac(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010bf529e0();
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (uVar5 == uVar1) {
    uVar5 = param_1;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        if (param_3 != 0) {
          uVar1 = param_1;
          func_0x00010c0dfd40(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_2;
          func_0x00010c0dfd40(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          (**(code **)(param_3 + 0x10))(param_3,uVar1,uVar2);
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((int)lVar3 == 0) goto LAB_10b8144e0;
        }
        uVar1 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_2;
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c071ae0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar4 & 1) == 0) goto LAB_10b8144e0;
        uVar5 = uVar5 + 1;
        uVar1 = param_1;
        func_0x00010bf529e0();
      } while (uVar5 < uVar1);
    }
    uVar6 = 1;
  }
  else {
LAB_10b8144e0:
    uVar6 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 10b814630; end: 10b814637;  */

undefined8 FUN_10b814630(void)

{
  return 1;
}



/* Entry: 10b814638; end: 10b814683; -[SCListIndexUpdate initWithOldIndex:newIndex:] */

void FUN_10b814638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b2c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b814684; end: 10b8146a7; -[SCListIndexUpdate copyWithZone:] */

undefined8 FUN_10b814684(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8146a8; end: 10b8146ff; -[SCListIndexUpdate hash] */

undefined8 * FUN_10b8146a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10b814700; end: 10b814797; -[SCListIndexUpdate isEqual:] */

bool FUN_10b814700(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b814798; end: 10b81479f; -[SCListIndexUpdate oldIndex] */

undefined8 FUN_10b814798(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b8147a0; end: 10b8147a7; -[SCListIndexUpdate newIndex] */

undefined8 FUN_10b8147a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b8147a8; end: 10b8148b3; -[SCListUpdateModel initWithInsertIndexSet:deleteIndexSet:updateIndices:unchangedIndices:] */

undefined1 *
FUN_10b8147a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270b2c8;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


