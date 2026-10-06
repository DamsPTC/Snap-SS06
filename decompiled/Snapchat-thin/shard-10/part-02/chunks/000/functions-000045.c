/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a7ad9c; end: 107a7ae53; -[SCTopicViewerView _buttonWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7ad9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3298;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c219b60();
  func_0x00010c1a8c20(0xc030000000000000,0xc030000000000000,0xc030000000000000,0xc030000000000000,
                      puVar1);
  if (*(char *)(param_1 + _DAT_11276906c) == '\x01') {
    func_0x00010c1a9fc0();
  }
  else {
    func_0x00010c16e720(puVar1,param_2,param_3,0);
  }
  _objc_release(param_3);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__buttonTapped__112553698,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a7ae54; end: 107a7b5ab; -[SCTopicViewerView _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7ae54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [128];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar16 = (long)_DAT_112769088;
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar14 = (long)_DAT_11276908c;
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar12 = (long)_DAT_112769090;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010c207380(0x4018000000000000,*(undefined8 *)(param_1 + lVar12));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar12),param_2,3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar14),param_2,*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar15 = (long)_DAT_112769094;
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar10);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15),param_2,
                      &PTR____CFConstantStringClassReference_110eaaf18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar15),param_2,1);
  uVar11 = *(long *)(param_1 + _DAT_112769064) - 2;
  if ((uVar11 < 7) && ((0x4fU >> (ulong)((uint)uVar11 & 0x1f) & 1) != 0)) {
    lVar2 = *(long *)(param_1 + _DAT_112769080);
    func_0x00010bfc6480(lVar2,param_2,(&PTR_PTR_1109f82b8)[uVar11]);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar13 = (long)_DAT_112769098;
      uVar10 = *(undefined8 *)(param_1 + lVar13);
      *(undefined **)(param_1 + lVar13) = puVar1;
      _objc_release(uVar10);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
      func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar12),param_2,
                          *(undefined8 *)(param_1 + lVar13));
    }
    _objc_release(lVar2);
  }
  func_0x00010bee2380(param_1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar12),param_2,*(undefined8 *)(param_1 + lVar15));
  lVar12 = (long)_DAT_11276906c;
  if ((*(byte *)(param_1 + lVar12) & 1) == 0) {
    puVar4 = *(undefined **)(param_1 + _DAT_112769080);
    func_0x00010bfc6480(puVar4,param_2,&PTR____CFConstantStringClassReference_110eaaf98);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c14d100(puVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  else {
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x84,0xcc);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar15 = param_1;
  func_0x00010bdd74e0(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11276909c;
  uVar10 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = lVar15;
  _objc_release(uVar10);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar2),param_2,
                      &PTR____CFConstantStringClassReference_110eaafb8);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar14),param_2,*(undefined8 *)(param_1 + lVar2));
  puStack_b0 = puVar3;
  if ((*(byte *)(param_1 + lVar12) & 1) == 0) {
    puVar4 = *(undefined **)(param_1 + _DAT_112769080);
    func_0x00010bfc6480(puVar4,param_2,&PTR____CFConstantStringClassReference_110eaafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c14d100(puVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  else {
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x2c0,0xcc);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = param_1;
  func_0x00010bdd74e0(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127690a0;
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  *(long *)(param_1 + lVar15) = lVar12;
  _objc_release(uVar10);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar14),param_2,*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar15),param_2,
                      *(long *)(param_1 + _DAT_112769078) == 0);
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new();
  func_0x00010c1f7ac0();
  uVar10 = 0x3ff0000000000000;
  if (*(char *)(param_1 + _DAT_112769070) == '\0') {
    uVar10 = 0x4010000000000000;
  }
  func_0x00010c1c82c0(uVar10,puVar1);
  func_0x00010c1c8300(uVar10,puVar1);
  func_0x00010c1f9320(puVar1,param_2,1);
  puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(uVar17,uVar18,uVar19,uVar20);
  lVar12 = (long)_DAT_1127690a4;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar4;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010c181f80(0,0,0x404a000000000000,0,*(undefined8 *)(param_1 + lVar12));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12),param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar12));
  puVar4 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar12 = (long)_DAT_1127690a8;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar4;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfcd9c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfcd9c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar10);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar12),param_2,0);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a8 = puVar6;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar12),param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar12));
  func_0x00010beab320(param_1);
  func_0x00010beabfc0(param_1);
  func_0x00010beab3c0(param_1);
  func_0x00010bdc4ae0(param_1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar8 = puStack_b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_107a7b5ac;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(puVar8 + _DAT_112769084);
  uStack_120 = uVar18;
  uStack_118 = uVar17;
  lStack_110 = lVar16;
  puStack_108 = puVar9;
  puStack_100 = puVar6;
  puStack_f8 = puVar7;
  puStack_f0 = puVar5;
  puStack_e8 = puVar4;
  puStack_e0 = puVar1;
  puStack_d8 = puVar3;
  lStack_d0 = lVar12;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (lVar14 != 0) {
    func_0x00010befcf00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar14;
    func_0x00010bf529e0();
    if (lVar12 != 0) {
      uVar10 = 0x4018000000000000;
      if (puVar8[_DAT_112769068] == '\0') {
        uVar10 = 0x4020000000000000;
      }
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      _objc_retain(lVar14);
      lVar12 = lVar14;
      func_0x00010bf52a60(lVar14,param_2,&uStack_1f0,auStack_1a8,0x10);
      if (lVar12 != 0) {
        lVar15 = *plStack_1e0;
        do {
          lVar16 = 0;
          do {
            if (*plStack_1e0 != lVar15) {
              _objc_enumerationMutation(lVar14);
            }
            puVar1 = PTR_PTR_1126d6218;
            _objc_alloc();
            func_0x00010c00b3c0(uVar10);
            func_0x00010c219b60();
            func_0x00010c21e900(puVar1,param_2,1);
            func_0x00010bef6d60(*(undefined8 *)(puVar8 + _DAT_1127690ac),param_2,puVar1);
            _objc_release(puVar1);
            lVar16 = lVar16 + 1;
          } while (lVar12 != lVar16);
          lVar12 = lVar14;
          func_0x00010bf52a60(lVar14,param_2,&uStack_1f0,auStack_1a8,0x10);
        } while (lVar12 != 0);
      }
      _objc_release(lVar14);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d60a0;
  _objc_alloc(PTR_PTR_1126d60a0);
  lVar12 = (long)_DAT_112769064;
  uVar10 = *(undefined8 *)(lVar14 + lVar12);
  FUN_107a6ecf0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar14 + lVar12);
  FUN_107a6ed80(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar14 + lVar12);
  FUN_107a6eeb8(uVar18);
  _objc_retainAutoreleasedReturnValue();
  if (*(ulong *)(lVar14 + lVar12) < 9 && (1L << (*(ulong *)(lVar14 + lVar12) & 0x3f) & 0x118U) != 0)
  {
    uVar19 = 0;
    if (lRam00000001138466f0 < 3) {
      uVar19 = 2;
    }
  }
  else {
    uVar19 = 5;
  }
  uVar20 = *(undefined8 *)(lVar14 + _DAT_11276907c);
  lVar12 = lVar14;
  func_0x00010beee460(lVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0530e0(puVar1,param_2,uVar10,uVar17,uVar18,uVar19,uVar20,lVar12);
  _objc_release(lVar12);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar10);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x4018000000000000;
  if (*(char *)(lVar14 + _DAT_112769068) == '\0') {
    uVar10 = 0x4020000000000000;
  }
  puVar4 = PTR_PTR_1126d6218;
  _objc_alloc(PTR_PTR_1126d6218);
  func_0x00010c00b3c0(uVar10);
  func_0x00010c219b60();
  func_0x00010c21e900(puVar4,param_2,1);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a7b5ac; end: 107a7b74b; -[SCTopicViewerView _setupCTAButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7b5ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112769084);
  if (lVar1 != 0) {
    func_0x00010befcf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf529e0();
    if (lVar8 != 0) {
      uVar12 = 0x4018000000000000;
      if (*(char *)(param_1 + _DAT_112769068) == '\0') {
        uVar12 = 0x4020000000000000;
      }
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      _objc_retain(lVar1);
      lVar8 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_f8,0x10);
      if (lVar8 != 0) {
        lVar7 = *plStack_130;
        do {
          lVar11 = 0;
          do {
            if (*plStack_130 != lVar7) {
              _objc_enumerationMutation(lVar1);
            }
            puVar2 = PTR_PTR_1126d6218;
            _objc_alloc();
            func_0x00010c00b3c0(uVar12);
            func_0x00010c219b60();
            func_0x00010c21e900(puVar2,param_2,1);
            func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_1127690ac),param_2,puVar2);
            _objc_release(puVar2);
            lVar11 = lVar11 + 1;
          } while (lVar8 != lVar11);
          lVar8 = lVar1;
          func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_f8,0x10);
        } while (lVar8 != 0);
      }
      _objc_release(lVar1);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d60a0;
  _objc_alloc(PTR_PTR_1126d60a0);
  lVar8 = (long)_DAT_112769064;
  uVar12 = *(undefined8 *)(lVar1 + lVar8);
  FUN_107a6ecf0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + lVar8);
  FUN_107a6ed80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar1 + lVar8);
  FUN_107a6eeb8(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(ulong *)(lVar1 + lVar8) < 9 && (1L << (*(ulong *)(lVar1 + lVar8) & 0x3f) & 0x118U) != 0) {
    uVar9 = 0;
    if (lRam00000001138466f0 < 3) {
      uVar9 = 2;
    }
  }
  else {
    uVar9 = 5;
  }
  uVar10 = *(undefined8 *)(lVar1 + _DAT_11276907c);
  lVar8 = lVar1;
  func_0x00010beee460(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0530e0(puVar2,param_2,uVar12,uVar3,uVar4,uVar9,uVar10,lVar8);
  _objc_release(lVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0x4018000000000000;
  if (*(char *)(lVar1 + _DAT_112769068) == '\0') {
    uVar12 = 0x4020000000000000;
  }
  puVar6 = PTR_PTR_1126d6218;
  _objc_alloc(PTR_PTR_1126d6218);
  func_0x00010c00b3c0(uVar12);
  func_0x00010c219b60();
  func_0x00010c21e900(puVar6,param_2,1);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a7b74c; end: 107a7b903; -[SCTopicViewerView _buildDefaultCTAButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7b74c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d60a0;
  _objc_alloc(PTR_PTR_1126d60a0);
  lVar7 = (long)_DAT_112769064;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  FUN_107a6ecf0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  FUN_107a6ed80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  FUN_107a6eeb8(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(ulong *)(param_1 + lVar7) < 9 && (1L << (*(ulong *)(param_1 + lVar7) & 0x3f) & 0x118U) != 0)
  {
    uVar8 = 0;
    if (lRam00000001138466f0 < 3) {
      uVar8 = 2;
    }
  }
  else {
    uVar8 = 5;
  }
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276907c);
  lVar7 = param_1;
  func_0x00010beee460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0530e0(puVar1,param_2,uVar2,uVar3,uVar4,uVar8,uVar9,lVar7);
  _objc_release(lVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x4018000000000000;
  if (*(char *)(param_1 + _DAT_112769068) == '\0') {
    uVar2 = 0x4020000000000000;
  }
  puVar6 = PTR_PTR_1126d6218;
  _objc_alloc(PTR_PTR_1126d6218);
  func_0x00010c00b3c0(uVar2);
  func_0x00010c219b60();
  func_0x00010c21e900(puVar6,param_2,1);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a7b904; end: 107a7b987; -[SCTopicViewerView _setupDefaultCTAButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7b904(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_11276907c) != 0) {
    lVar3 = (long)_DAT_1127690ac;
    if (*(long *)(param_1 + lVar3) != 0) {
      lVar1 = param_1;
      func_0x00010bdd6000();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_1127690b0;
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar1;
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar3),PTR_s_addArrangedSubview__11259b500,
                 *(undefined8 *)(param_1 + lVar4));
      return;
    }
  }
  return;
}



/* Entry: 107a7b988; end: 107a7b9ef; -[SCTopicViewerView setupAdditionalButtonWithProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7b988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112769084;
  if (*(long *)(param_1 + lVar2) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010beab3c0(param_1);
    func_0x00010bdc4b00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a7b9f0; end: 107a7be03; -[SCTopicViewerView setHeaderAccessoryButtonConfig:onTap:] */

/* WARNING: Possible PIC construction at 0x000107a7bc1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a7bc20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7b9f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112769090));
  lVar10 = (long)_DAT_1127690b4;
  lVar9 = *(long *)(param_1 + lVar10);
  if (param_3 == 0) {
    if (lVar9 != 0) {
      func_0x00010c12c960(lVar9);
      uVar8 = *(undefined8 *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = 0;
      _objc_release(uVar8);
    }
    lVar9 = (long)_DAT_1127690b8;
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar9));
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127690bc);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127690a0);
    func_0x00010c08de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = uVar8;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar9));
  }
  else {
    if (lVar9 == 0) {
      puVar5 = PTR_PTR_1126d6220;
      _objc_alloc(PTR_PTR_1126d6220);
      lVar6 = param_3;
      func_0x00010bfe5400(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01aec0(puVar5);
      _objc_release(lVar9);
      _objc_release(lVar6);
      func_0x00010beecec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(puVar5);
      _objc_release(param_3);
      uVar8 = *(undefined8 *)(param_1 + _DAT_11276908c);
      goto code_r0x00010befbb60;
    }
    lVar1 = param_3;
    func_0x00010bfe5400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c800(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar9 = param_3;
    func_0x00010beecec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
    _objc_release(lVar9);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar6 = (long)_DAT_1127690ac;
  uVar8 = *(undefined8 *)(param_3 + lVar6);
  *(undefined **)(param_3 + lVar6) = puVar5;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_3 + lVar6));
  func_0x00010c16e060(*(undefined8 *)(param_3 + lVar6));
  func_0x00010c207380(0x4028000000000000,*(undefined8 *)(param_3 + lVar6));
  func_0x00010c166c00(*(undefined8 *)(param_3 + lVar6));
  func_0x00010c190b80(*(undefined8 *)(param_3 + lVar6));
  uVar8 = *(undefined8 *)(param_3 + _DAT_112769088);
  puVar5 = *(undefined **)(param_3 + lVar6);
code_r0x00010befbb60:
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_addSubview__11259c880,puVar5);
  return;
}



/* Entry: 107a7be04; end: 107a7be97; -[SCTopicViewerView _setupButtonStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7be04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar3 = (long)_DAT_1127690ac;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c207380(0x4028000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112769088),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107a7be98; end: 107a7c2e3; -[SCTopicViewerView _updateTitleLabelWithDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7be98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_e0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112769060;
  lVar1 = *(long *)(param_1 + lVar11);
  func_0x00010c11f420(lVar1,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  if (lVar1 == 0x7fffffffffffffff) {
    lVar1 = (long)_DAT_112769094;
    puVar2 = *(undefined **)(param_1 + lVar1);
    func_0x00010c1cfce0();
    uVar10 = *(undefined8 *)(param_1 + lVar1);
    if (*(char *)(param_1 + _DAT_11276906c) == '\x01') {
      func_0x00010052bbec();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfb3e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(uVar10);
      _objc_release(puVar3);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(uVar10);
    }
    _objc_release(puVar2);
    uVar10 = *(undefined8 *)(param_1 + lVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar10);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar1,PTR_s_setText__1126625f0,*(undefined8 *)(param_1 + lVar11));
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + lVar11);
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    puVar3 = puVar2;
    func_0x00010c166c00();
    if (*(char *)(param_1 + _DAT_11276906c) == '\x01') {
      func_0x00010052bbec();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb3e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x00010052bbec();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar3;
      func_0x00010bfb3e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x4032000000000000);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c127e40(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    ppuVar7 = &PTR____CFConstantStringClassReference_110db2db8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db2db8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar5);
    func_0x00010bf069e0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(ppuVar7);
    lVar11 = (long)_DAT_112769094;
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar11));
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar11));
    _objc_release(puVar3);
    _objc_release(puStack_e0);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_1127690c0;
  if (*(long *)(lVar1 + lVar9) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  if (*(long *)(lVar1 + _DAT_1127690ac) != 0) {
    lVar11 = (long)_DAT_1127690a4;
    func_0x00010bf4c7c0(*(undefined8 *)(lVar1 + lVar11));
    func_0x00010c181f80(*(undefined8 *)(lVar1 + lVar11));
    lVar11 = lVar1;
    func_0x00010bde6700();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + lVar9);
    *(long *)(lVar1 + lVar9) = lVar11;
    _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(lVar1 + lVar9));
    return;
  }
  return;
}



/* Entry: 107a7c2e4; end: 107a7c393; -[SCTopicViewerView _activateConstraintsForButtonsIfPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7c2e4(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar2 = (long)_DAT_1127690c0;
  if (*(long *)(param_4 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  if (*(long *)(param_4 + _DAT_1127690ac) != 0) {
    lVar3 = (long)_DAT_1127690a4;
    func_0x00010bf4c7c0(*(undefined8 *)(param_4 + lVar3));
    dVar4 = 92.0;
    if (92.0 <= param_3) {
      dVar4 = param_3;
    }
    func_0x00010c181f80(param_1,param_2,dVar4,*(undefined8 *)(param_4 + lVar3));
    lVar3 = param_4;
    func_0x00010bde6700();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_4 + lVar2);
    *(long *)(param_4 + lVar2) = lVar3;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_4 + lVar2));
    return;
  }
  return;
}



/* Entry: 107a7c394; end: 107a7c64f; -[SCTopicViewerView _constraintsForButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7c394(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puStack_540;
  undefined8 uStack_538;
  code *pcStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined1 auStack_518 [8];
  undefined1 uStack_510;
  undefined1 auStack_508 [8];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined1 **ppuStack_4e0;
  code *pcStack_4d8;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_1127690ac;
  lVar1 = *(long *)(param_1 + lVar21);
  puVar5 = (undefined *)0x0;
  if (lVar1 != 0) {
    puStack_90 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112769088;
    uVar2 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf34860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar21);
    lStack_78 = lVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar3;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_90;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar6;
    _objc_release(puVar5);
    _objc_release(uVar17);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar19);
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar7 = *(ulong *)(param_1 + lVar21);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf529e0();
    _objc_release(uVar7);
    puVar5 = puStack_90;
    if (1 < uVar8) {
      uVar3 = *(undefined8 *)(param_1 + lVar21);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar3;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar21);
      uStack_88 = uVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = uVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puStack_90;
      func_0x00010befa160(puStack_90);
      _objc_release(puVar6);
      _objc_release(uVar2);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar17);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_98 = FUN_107a7c650;
    lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    func_0x00010c1a99e0();
    lVar21 = (long)_DAT_11276908c;
    func_0x00010bef9680(*(undefined8 *)(puVar5 + lVar21));
    uVar17 = *(undefined8 *)(puVar5 + _DAT_1127690bc);
    *(undefined **)(puVar5 + _DAT_1127690bc) = puVar6;
    _objc_retain(puVar6);
    _objc_release(uVar17);
    puVar9 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_1127690a0;
    uVar17 = *(undefined8 *)(puVar5 + lVar19);
    func_0x00010c08de00(uVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_1127690b8;
    uVar2 = *(undefined8 *)(puVar5 + lVar16);
    *(undefined **)(puVar5 + lVar16) = puVar10;
    _objc_release(uVar2);
    _objc_release(uVar17);
    _objc_release(puVar9);
    puStack_340 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar1 = (long)_DAT_112769088;
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    uStack_230 = uVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_238 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar1);
    uStack_240 = uVar17;
    uStack_228 = uVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    uStack_248 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_250 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    uStack_258 = uVar2;
    uStack_220 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    uStack_260 = uVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar1);
    uStack_270 = uVar17;
    uStack_218 = uVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    uStack_278 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_280 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar5 + lVar21);
    uStack_288 = uVar2;
    uStack_210 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    uStack_290 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = uVar17;
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar21);
    uStack_2a0 = uVar3;
    uStack_208 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    uStack_2a8 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_2b0 = uVar17;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar5 + lVar21);
    uStack_2b8 = uVar2;
    uStack_200 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    uStack_2c0 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2c8 = uVar17;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    uStack_2d0 = uVar3;
    uStack_1f8 = uVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x4046000000000000;
    if (puVar5[_DAT_11276906c] == '\0') {
      uVar2 = 0x4049000000000000;
    }
    uStack_2d8 = uVar17;
    func_0x00010bf49420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11276909c;
    uVar2 = *(undefined8 *)(puVar5 + lVar18);
    uStack_2e0 = uVar17;
    uStack_1f0 = uVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    uStack_2e8 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_2f0 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar5 + lVar18);
    uStack_2f8 = uVar2;
    uStack_1e8 = uVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    uStack_300 = uVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_308 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar18);
    uStack_310 = uVar3;
    uStack_1e0 = uVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_318 = uVar17;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar18);
    uStack_320 = uVar17;
    uStack_1d8 = uVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_330 = uVar2;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_112769090;
    uVar17 = *(undefined8 *)(puVar5 + lVar20);
    uStack_338 = uVar2;
    uStack_1d0 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    uStack_348 = uVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_350 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar20);
    uStack_358 = uVar17;
    uStack_1c8 = uVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    uStack_360 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_368 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar20);
    uStack_370 = uVar2;
    uStack_1c0 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    uStack_378 = uVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_380 = puVar9;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar20);
    uStack_388 = uVar17;
    uStack_1b8 = uVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    uStack_390 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_398 = puVar9;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar20);
    uStack_3a0 = uVar2;
    uStack_1b0 = uVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    uStack_3a8 = uVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_3b0 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    uStack_3b8 = uVar17;
    uStack_1a8 = uVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    puStack_3c0 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_3c8 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    puStack_3d0 = puVar9;
    puStack_328 = puVar6;
    puStack_1a0 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    puStack_3d8 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_3e0 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_3e8 = puVar10;
    puStack_198 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar18);
    puStack_3f0 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_3f8 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = *(undefined8 *)(puVar5 + lVar16);
    uVar2 = *(undefined8 *)(puVar5 + lVar19);
    puStack_400 = puVar6;
    puStack_190 = puVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    uStack_408 = uVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_410 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar19);
    uStack_418 = uVar2;
    uStack_180 = uVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_420 = uVar17;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar19);
    uStack_428 = uVar17;
    uStack_178 = uVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_430 = uVar2;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar5 + lVar19);
    uStack_438 = uVar2;
    uStack_170 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    uStack_440 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_448 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_1127690a4;
    uVar2 = *(undefined8 *)(puVar5 + lVar19);
    uStack_450 = uVar3;
    uStack_168 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    uStack_458 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_460 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar5 + lVar19);
    uStack_468 = uVar2;
    uStack_160 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    uStack_470 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_112769070;
    uVar2 = 0;
    if (puVar5[lVar21] == '\0') {
      uVar2 = 0x4020000000000000;
    }
    uStack_478 = uVar17;
    func_0x00010bf493c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar5 + lVar19);
    uStack_480 = uVar3;
    uStack_158 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    uStack_488 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    if (puVar5[lVar21] == '\0') {
      uVar3 = 0xc020000000000000;
    }
    uStack_490 = uVar17;
    func_0x00010bf493c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar5 + lVar19);
    uStack_498 = uVar2;
    uStack_150 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar5 + lVar1);
    uStack_4a0 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_4a8 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_1127690a8;
    uVar17 = *(undefined8 *)(puVar5 + lVar21);
    uStack_4b0 = uVar3;
    uStack_148 = uVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_4b8 = uVar17;
    func_0x00010bf49420(0x405b800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar5 + lVar21);
    uStack_4c0 = uVar17;
    uStack_140 = uVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar5 + lVar1);
    uStack_4c8 = uVar4;
    func_0x00010c08de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar5 + lVar21);
    uStack_138 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar5 + lVar1);
    func_0x00010c2793a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar5 + lVar21);
    uStack_130 = uVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar5 + lVar1);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x21;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_340;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_340 = puVar9;
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar17);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_4c8);
    _objc_release(uStack_4c0);
    _objc_release(uStack_4b8);
    _objc_release(uStack_4b0);
    _objc_release(uStack_4a8);
    _objc_release(uStack_4a0);
    _objc_release(uStack_498);
    _objc_release(uStack_490);
    _objc_release(uStack_488);
    _objc_release(uStack_480);
    _objc_release(uStack_478);
    _objc_release(uStack_470);
    _objc_release(uStack_468);
    _objc_release(uStack_460);
    _objc_release(uStack_458);
    _objc_release(uStack_450);
    _objc_release(uStack_448);
    _objc_release(uStack_440);
    _objc_release(uStack_438);
    _objc_release(uStack_430);
    _objc_release(uStack_428);
    _objc_release(uStack_420);
    _objc_release(uStack_418);
    _objc_release(uStack_410);
    _objc_release(uStack_408);
    _objc_release(puStack_400);
    _objc_release(uStack_3f8);
    _objc_release(puStack_3f0);
    _objc_release(puStack_3e8);
    _objc_release(uStack_3e0);
    _objc_release(puStack_3d8);
    _objc_release(puStack_3d0);
    _objc_release(uStack_3c8);
    _objc_release(puStack_3c0);
    _objc_release(uStack_3b8);
    _objc_release(puStack_3b0);
    _objc_release(uStack_3a8);
    _objc_release(uStack_3a0);
    _objc_release(puStack_398);
    _objc_release(uStack_390);
    _objc_release(uStack_388);
    _objc_release(puStack_380);
    _objc_release(uStack_378);
    _objc_release(uStack_370);
    _objc_release(puStack_368);
    _objc_release(uStack_360);
    _objc_release(uStack_358);
    _objc_release(puStack_350);
    _objc_release(uStack_348);
    _objc_release(uStack_338);
    _objc_release(uStack_330);
    _objc_release(uStack_320);
    _objc_release(uStack_318);
    _objc_release(uStack_310);
    _objc_release(uStack_308);
    _objc_release(uStack_300);
    _objc_release(uStack_2f8);
    _objc_release(uStack_2f0);
    _objc_release(uStack_2e8);
    _objc_release(uStack_2e0);
    _objc_release(uStack_2d8);
    _objc_release(uStack_2d0);
    _objc_release(uStack_2c8);
    _objc_release(uStack_2c0);
    _objc_release(uStack_2b8);
    _objc_release(uStack_2b0);
    _objc_release(uStack_2a8);
    _objc_release(uStack_2a0);
    _objc_release(uStack_298);
    _objc_release(uStack_290);
    _objc_release(uStack_288);
    _objc_release(puStack_280);
    _objc_release(uStack_278);
    _objc_release(uStack_270);
    _objc_release(puStack_268);
    _objc_release(uStack_260);
    _objc_release(uStack_258);
    _objc_release(puStack_250);
    _objc_release(uStack_248);
    _objc_release(uStack_240);
    _objc_release(puStack_238);
    _objc_release(uStack_230);
    puVar6 = puStack_340;
    puVar10 = puStack_340;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(puStack_328);
    func_0x00010bdc4b00(puVar5);
    puVar9 = puVar6;
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_120) {
      ___stack_chk_fail();
      puStack_4f0 = puVar6;
      pcStack_4d8 = FUN_107a7d3a8;
      uStack_500 = uVar2;
      uStack_4f8 = uVar14;
      puStack_4e8 = puVar5;
      ppuStack_4e0 = &puStack_a0;
      _objc_retain(puVar10);
      _objc_initWeak(auStack_508,puVar9);
      puStack_540 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_538 = 0xc2000000;
      pcStack_530 = FUN_107a7d46c;
      puStack_528 = &UNK_1108488f8;
      _objc_copyWeak(auStack_518,auStack_508);
      puStack_520 = puVar10;
      uStack_510 = uVar15;
      _objc_retain(puVar10);
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_540);
      _objc_release(puStack_520);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_518);
      _objc_destroyWeak(auStack_508);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a7c650; end: 107a7d3a7; -[SCTopicViewerView _activateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7c650(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  code *pcStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined1 auStack_488 [8];
  undefined1 uStack_480;
  undefined1 auStack_478 [8];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined1 *puStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
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
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  func_0x00010c1a99e0();
  lVar15 = (long)_DAT_11276908c;
  func_0x00010bef9680(*(undefined8 *)(param_1 + lVar15));
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127690bc);
  *(undefined **)(param_1 + _DAT_1127690bc) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar12);
  puVar2 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127690a0;
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127690b8;
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar3;
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(puVar2);
  puStack_2b0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar14 = (long)_DAT_112769088;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_1a0 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_1b0 = uVar12;
  uStack_198 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_1b8 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c0 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_1c8 = uVar11;
  uStack_190 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_1d0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d8 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_1e0 = uVar12;
  uStack_188 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_1e8 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_1f8 = uVar11;
  uStack_180 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_200 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = uVar12;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  uStack_210 = uVar4;
  uStack_178 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_218 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_220 = uVar12;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_228 = uVar11;
  uStack_170 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_230 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_238 = uVar12;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_240 = uVar4;
  uStack_168 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0x4046000000000000;
  if (*(char *)(param_1 + _DAT_11276906c) == '\0') {
    uVar11 = 0x4049000000000000;
  }
  uStack_248 = uVar12;
  func_0x00010bf49420(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11276909c;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_250 = uVar12;
  uStack_160 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_258 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_260 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_268 = uVar11;
  uStack_158 = uVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_270 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_278 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  uStack_280 = uVar4;
  uStack_150 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_288 = uVar12;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_290 = uVar12;
  uStack_148 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a0 = uVar11;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112769090;
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  uStack_2a8 = uVar11;
  uStack_140 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  uStack_2b8 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_2c0 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  uStack_2c8 = uVar12;
  uStack_138 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  uStack_2d0 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_2d8 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  uStack_2e0 = uVar11;
  uStack_130 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  uStack_2e8 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2f0 = puVar2;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  uStack_2f8 = uVar12;
  uStack_128 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  uStack_300 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_308 = puVar2;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  uStack_310 = uVar11;
  uStack_120 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  uStack_318 = uVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puStack_320 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  uStack_328 = uVar12;
  uStack_118 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  puStack_330 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_338 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_340 = puVar2;
  puStack_298 = puVar1;
  puStack_110 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  puStack_348 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_350 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_358 = puVar3;
  puStack_108 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  puStack_360 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_368 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = *(undefined8 *)(param_1 + lVar17);
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  puStack_370 = puVar1;
  puStack_100 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_378 = uVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_380 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  uStack_388 = uVar11;
  uStack_f0 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_390 = uVar12;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  uStack_398 = uVar12;
  uStack_e8 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_3a0 = uVar11;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_3a8 = uVar11;
  uStack_e0 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_3b0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_3b8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127690a4;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_3c0 = uVar4;
  uStack_d8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  uStack_3c8 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_3d0 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_3d8 = uVar11;
  uStack_d0 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_3e0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112769070;
  uVar11 = 0;
  if (*(char *)(param_1 + lVar15) == '\0') {
    uVar11 = 0x4020000000000000;
  }
  uStack_3e8 = uVar12;
  func_0x00010bf493c0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_3f0 = uVar4;
  uStack_c8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_3f8 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if (*(char *)(param_1 + lVar15) == '\0') {
    uVar4 = 0xc020000000000000;
  }
  uStack_400 = uVar12;
  func_0x00010bf493c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_408 = uVar11;
  uStack_c0 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  uStack_410 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_418 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127690a8;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  uStack_420 = uVar4;
  uStack_b8 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_428 = uVar12;
  func_0x00010bf49420(0x405b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_430 = uVar12;
  uStack_b0 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_438 = uVar5;
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_a8 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_a0 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x21;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_2b0;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b0 = puVar2;
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_438);
  _objc_release(uStack_430);
  _objc_release(uStack_428);
  _objc_release(uStack_420);
  _objc_release(uStack_418);
  _objc_release(uStack_410);
  _objc_release(uStack_408);
  _objc_release(uStack_400);
  _objc_release(uStack_3f8);
  _objc_release(uStack_3f0);
  _objc_release(uStack_3e8);
  _objc_release(uStack_3e0);
  _objc_release(uStack_3d8);
  _objc_release(uStack_3d0);
  _objc_release(uStack_3c8);
  _objc_release(uStack_3c0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_3b0);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3a0);
  _objc_release(uStack_398);
  _objc_release(uStack_390);
  _objc_release(uStack_388);
  _objc_release(uStack_380);
  _objc_release(uStack_378);
  _objc_release(puStack_370);
  _objc_release(uStack_368);
  _objc_release(puStack_360);
  _objc_release(puStack_358);
  _objc_release(uStack_350);
  _objc_release(puStack_348);
  _objc_release(puStack_340);
  _objc_release(uStack_338);
  _objc_release(puStack_330);
  _objc_release(uStack_328);
  _objc_release(puStack_320);
  _objc_release(uStack_318);
  _objc_release(uStack_310);
  _objc_release(puStack_308);
  _objc_release(uStack_300);
  _objc_release(uStack_2f8);
  _objc_release(puStack_2f0);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2c8);
  _objc_release(puStack_2c0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(lStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(lStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(lStack_1a8);
  _objc_release(uStack_1a0);
  puVar1 = puStack_2b0;
  puVar3 = puStack_2b0;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puStack_298);
  func_0x00010bdc4b00(param_1);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puStack_460 = puVar1;
  pcStack_448 = FUN_107a7d3a8;
  uStack_470 = uVar11;
  uStack_468 = uVar9;
  lStack_458 = param_1;
  puStack_450 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_initWeak(auStack_478,puVar2);
  puStack_4b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_4a8 = 0xc2000000;
  pcStack_4a0 = FUN_107a7d46c;
  puStack_498 = &UNK_1108488f8;
  _objc_copyWeak(auStack_488,auStack_478);
  puStack_490 = puVar3;
  uStack_480 = uVar10;
  _objc_retain(puVar3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_4b0);
  _objc_release(puStack_490);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_488);
  _objc_destroyWeak(auStack_478);
  return;
}



/* Entry: 107a7d3a8; end: 107a7d46b; -[SCTopicViewerView updateWithDisplayName:animated:] */

void FUN_107a7d3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a7d46c;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_50 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a7d46c; end: 107a7d4a3;  */

void FUN_107a7d46c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed70c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a7d4a4; end: 107a7d5f7; -[SCTopicViewerView _updateDisplayNameOnMainThread:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7d4a4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112769060;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if ((param_4 & 1) == 0) {
    func_0x00010bee2380(param_1);
    func_0x00010c1cbe20(param_1);
  }
  else {
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x107a7d610;
      puStack_68 = &UNK_110842e18;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107a7d628;
      puStack_90 = &UNK_110841f20;
      lStack_88 = param_1;
      lStack_60 = param_1;
      func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_80,
                          &puStack_a8);
    }
    else {
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_112769094));
      func_0x00010bee2380(param_1);
      func_0x00010c1cbe20(param_1);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_107a7d5f8;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58)
      ;
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a7d5f8; end: 107a7d627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7d5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769094),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107a7d628; end: 107a7d66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7d628(long param_1,int param_2)

{
  if (param_2 != 0) {
    func_0x00010bee2380(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1677c0(0x3ff0000000000000,
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769094));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 107a7d670; end: 107a7d703; -[SCTopicViewerView _buttonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7d670(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + _DAT_11276909c)) {
    if (param_3 != *(long *)(param_1 + _DAT_1127690a0)) goto LAB_107a7d6f0;
  }
  func_0x00010beee460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140();
  _objc_release(param_1);
LAB_107a7d6f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a7d704; end: 107a7d7bb; -[SCTopicViewerView didPressCTAButton:withViewModel:] */

void FUN_107a7d704(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  if (lVar1 != 0) {
    lVar2 = param_4;
  }
  func_0x00010beee460(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010beeecc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfd0140(lVar2,param_2,param_1,lVar1,param_3);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a7d7bc; end: 107a7d7cb; -[SCTopicViewerView snapsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7d7bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127690a4);
}



/* Entry: 107a7d7cc; end: 107a7d80b; -[SCTopicViewerView setSnapsCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7d7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127690a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a7d80c; end: 107a7d81b; -[SCTopicViewerView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7d80c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127690c4);
}



/* Entry: 107a7d81c; end: 107a7d85b; -[SCTopicViewerView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7d81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127690c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a7d85c; end: 107a7d9eb; -[SCTopicViewerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7d85c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127690c4,0);
  _objc_storeStrong(param_1 + _DAT_1127690a4,0);
  _objc_storeStrong(param_1 + _DAT_112769080,0);
  _objc_storeStrong(param_1 + _DAT_1127690c0,0);
  _objc_storeStrong(param_1 + _DAT_112769084,0);
  _objc_storeStrong(param_1 + _DAT_11276907c,0);
  _objc_storeStrong(param_1 + _DAT_112769078,0);
  _objc_storeStrong(param_1 + _DAT_112769074,0);
  _objc_storeStrong(param_1 + _DAT_112769060,0);
  _objc_storeStrong(param_1 + _DAT_1127690b4,0);
  _objc_storeStrong(param_1 + _DAT_1127690b8,0);
  _objc_storeStrong(param_1 + _DAT_1127690bc,0);
  _objc_storeStrong(param_1 + _DAT_1127690a8,0);
  _objc_storeStrong(param_1 + _DAT_11276908c,0);
  _objc_storeStrong(param_1 + _DAT_112769088,0);
  _objc_storeStrong(param_1 + _DAT_112769090,0);
  _objc_storeStrong(param_1 + _DAT_112769098,0);
  _objc_storeStrong(param_1 + _DAT_112769094,0);
  _objc_storeStrong(param_1 + _DAT_1127690ac,0);
  _objc_storeStrong(param_1 + _DAT_1127690c8,0);
  _objc_storeStrong(param_1 + _DAT_1127690b0,0);
  _objc_storeStrong(param_1 + _DAT_1127690a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276909c,0);
  return;
}



/* Entry: 107a7d9ec; end: 107a7da5f;  */

void FUN_107a7d9ec(double param_1)

{
  undefined *puVar1;
  
  if (param_1 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 107a7da60; end: 107a7e193; -[SCTopicViewerViewSnapCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107a7da60(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *unaff_x20;
  long lVar12;
  undefined8 unaff_x21;
  long lVar13;
  undefined8 unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  double dVar16;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  double dStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
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
  puStack_f8 = PTR_PTR_1126f98f8;
  puVar10 = &uStack_100;
  dVar16 = param_4;
  uStack_100 = param_5;
  _objc_msgSendSuper2(puVar10,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126d6228;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010c1ec560(0x3fd999999999999a,puVar1);
    puStack_108 = puVar1;
    func_0x00010c178280(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    dVar16 = param_4;
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar13 = (long)_DAT_1127690d0;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    *(undefined **)((long)puVar10 + lVar13) = puVar1;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    func_0x00010c08c0e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar11);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar10 + lVar13));
    func_0x00010c219b60(*(undefined8 *)((long)puVar10 + lVar13));
    func_0x00010bef9040(*(undefined8 *)((long)puVar10 + lVar13));
    puVar2 = puVar10;
    func_0x00010bf4dce0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar14 = (long)_DAT_1127690d4;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar14);
    *(undefined **)((long)puVar10 + lVar14) = puVar1;
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)((long)puVar10 + lVar14));
    func_0x00010c182220(*(undefined8 *)((long)puVar10 + lVar14));
    func_0x00010befbb60(*(undefined8 *)((long)puVar10 + lVar13));
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar12 = (long)_DAT_1127690d8;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar12);
    *(undefined **)((long)puVar10 + lVar12) = puVar1;
    _objc_release(uVar11);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar10 + lVar12));
    func_0x00010c219b60(*(undefined8 *)((long)puVar10 + lVar12));
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar10 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)puVar10 + lVar13));
    func_0x00010c160fc0(puVar10);
    puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    uStack_118 = uVar11;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar11;
    uVar3 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_128 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    uStack_138 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar3;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_148 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    uStack_158 = uVar11;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar11;
    uVar3 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_168 = uVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    uStack_178 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar3;
    uVar4 = *(undefined8 *)((long)puVar10 + lVar14);
    uStack_188 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_198 = uVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar4;
    uVar3 = *(undefined8 *)((long)puVar10 + lVar14);
    uStack_1a8 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_1b0 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar3;
    uVar4 = *(undefined8 *)((long)puVar10 + lVar14);
    uStack_1c0 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_1c8 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar4;
    uVar3 = *(undefined8 *)((long)puVar10 + lVar14);
    uStack_1d8 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_1e0 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e8 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar3;
    unaff_x25 = *(undefined8 *)((long)puVar10 + lVar12);
    uStack_1f0 = uVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    uStack_1f8 = unaff_x25;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_200 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = unaff_x25;
    unaff_x26 = *(undefined8 *)((long)puVar10 + lVar12);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = *(undefined8 *)((long)puVar10 + lVar13);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = unaff_x28;
    unaff_x21 = *(undefined8 *)((long)puVar10 + lVar12);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = unaff_x22;
    unaff_x23 = *(undefined8 *)((long)puVar10 + lVar12);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = unaff_x24;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_190);
    _objc_release(unaff_x20);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(uStack_200);
    _objc_release(uStack_1f8);
    _objc_release(uStack_1f0);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
    _objc_release(uStack_198);
    _objc_release(uStack_188);
    _objc_release(puStack_180);
    _objc_release(puStack_170);
    _objc_release(uStack_178);
    _objc_release(uStack_168);
    _objc_release(puStack_160);
    _objc_release(puStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_148);
    _objc_release(puStack_140);
    _objc_release(puStack_130);
    _objc_release(uStack_138);
    _objc_release(uStack_128);
    _objc_release(puStack_120);
    _objc_release(puStack_110);
    _objc_release(uStack_118);
    func_0x00010c1cbf40(puVar10);
    puVar1 = puStack_108;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_107a7e194;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_1127690dc;
  uStack_260 = unaff_x28;
  uStack_258 = unaff_x27;
  uStack_250 = unaff_x26;
  uStack_248 = unaff_x25;
  uStack_240 = unaff_x24;
  uStack_238 = unaff_x23;
  uStack_230 = unaff_x22;
  uStack_228 = unaff_x21;
  puStack_220 = unaff_x20;
  puStack_218 = puVar10;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar13 = (long)_DAT_1127690e0;
  lVar12 = *(long *)(puVar1 + lVar13);
  if (lVar12 != 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_1127690d0;
    uVar11 = *(undefined8 *)(puVar1 + lVar15);
    lStack_2a0 = lVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a8 = uVar11;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + lVar13);
    lStack_2b0 = lVar12;
    lStack_288 = lVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar1 + lVar15);
    uStack_2b8 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_2c0 = uVar11;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + lVar13);
    uStack_2c8 = uVar3;
    uStack_280 = uVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar1 + lVar15);
    func_0x00010c2a5060(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010bf49520(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar1 + lVar13);
    uStack_278 = uVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar1 + lVar15);
    func_0x00010bfe0660(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf49520(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_270 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar10);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uStack_2c8);
    _objc_release(uStack_2c0);
    _objc_release(uStack_2b8);
    _objc_release(lStack_2b0);
    _objc_release(uStack_2a8);
    _objc_release(lStack_2a0);
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar2 = puVar10;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(puVar1 + lVar14);
  *(undefined8 **)(puVar1 + lVar14) = puVar2;
  _objc_release(uVar11);
  puStack_290 = PTR_PTR_1126f98f8;
  puStack_298 = puVar1;
  _objc_msgSendSuper2(&puStack_298,PTR_s_updateConstraints_11267ec30);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_2d8 = FUN_107a7e448;
  puStack_308 = PTR_PTR_1126f98f8;
  puStack_310 = puVar2;
  uStack_300 = param_3;
  dStack_2f8 = param_4;
  puStack_2f0 = puVar10;
  puStack_2e8 = puVar1;
  ppuStack_2e0 = &puStack_210;
  _objc_msgSendSuper2(&puStack_310,PTR_s_layoutSubviews_112600e60);
  lVar12 = (long)_DAT_1127690e0;
  uVar9 = *(ulong *)((long)puVar2 + lVar12);
  if ((uVar9 != 0) && (func_0x00010c074c20(), (uVar9 & 1) == 0)) {
    func_0x00010c08cdc0(*(undefined8 *)((long)puVar2 + lVar12));
    func_0x00010bf20c00(*(undefined8 *)((long)puVar2 + lVar12));
    uVar11 = *(undefined8 *)((long)puVar2 + lVar12);
    func_0x00010c08c0e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar16 * 0.5);
    _objc_release(uVar11);
  }
  lVar12 = (long)_DAT_1127690e4;
  puVar10 = *(undefined8 **)((long)puVar2 + lVar12);
  if ((puVar10 != (undefined8 *)0x0) && (func_0x00010c074c20(), ((ulong)puVar10 & 1) == 0)) {
    func_0x00010bf20c00(*(undefined8 *)((long)puVar2 + (long)_DAT_1127690d0));
    puVar10 = *(undefined8 **)((long)puVar2 + lVar12);
    func_0x00010c19f0e0(puVar10);
  }
  return puVar10;
}



/* Entry: 107a7e194; end: 107a7e447; -[SCTopicViewerViewSnapCollectionViewCell updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7e194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double in_d3;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_1127690dc;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar16 = (long)_DAT_1127690e0;
  lVar2 = *(long *)(param_1 + lVar16);
  if (lVar2 != 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_1127690d0;
    uVar3 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar16);
    lStack_88 = lVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar16);
    uStack_80 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c2a5060(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf49520(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    uStack_78 = uVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010bfe0660(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf49520(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar13 = puVar1;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar13;
  _objc_release(uVar15);
  puStack_90 = PTR_PTR_1126f98f8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_updateConstraints_11267ec30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_108 = PTR_PTR_1126f98f8;
  puStack_110 = puVar1;
  _objc_msgSendSuper2(&puStack_110,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_1127690e0;
  uVar14 = *(ulong *)(puVar1 + lVar2);
  if ((uVar14 != 0) && (func_0x00010c074c20(), (uVar14 & 1) == 0)) {
    func_0x00010c08cdc0(*(undefined8 *)(puVar1 + lVar2));
    func_0x00010bf20c00(*(undefined8 *)(puVar1 + lVar2));
    uVar15 = *(undefined8 *)(puVar1 + lVar2);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(in_d3 * 0.5);
    _objc_release(uVar15);
  }
  lVar2 = (long)_DAT_1127690e4;
  uVar14 = *(ulong *)(puVar1 + lVar2);
  if ((uVar14 != 0) && (func_0x00010c074c20(), (uVar14 & 1) == 0)) {
    func_0x00010bf20c00(*(undefined8 *)(puVar1 + _DAT_1127690d0));
    func_0x00010c19f0e0(*(undefined8 *)(puVar1 + lVar2));
  }
  return;
}



/* Entry: 107a7e448; end: 107a7e513; -[SCTopicViewerViewSnapCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7e448(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double in_d3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f98f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_1127690e0;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(in_d3 * 0.5);
    _objc_release(uVar2);
  }
  lVar3 = (long)_DAT_1127690e4;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_1127690d0));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  }
  return;
}



/* Entry: 107a7e514; end: 107a7e527; -[SCTopicViewerViewSnapCollectionViewCell setThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7e514(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127690e8,param_3);
  return;
}



/* Entry: 107a7e528; end: 107a7ee73; -[SCTopicViewerViewSnapCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7e528(long param_1,undefined *param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **unaff_x22;
  long lVar9;
  undefined **unaff_x24;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_1127690ec;
  ppuVar7 = *(undefined ***)(param_1 + lVar9);
  _objc_retain(ppuVar7);
  _objc_retain(param_3);
  if (ppuVar7 == param_3) {
    _objc_release(param_3);
    _objc_release(ppuVar7);
  }
  else {
    if (param_3 == (undefined **)0x0) {
      _objc_release(ppuVar7);
    }
    else {
      unaff_x22 = ppuVar7;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(ppuVar7);
      if (((ulong)unaff_x22 & 1) != 0) goto LAB_107a7edfc;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(undefined ***)(param_1 + lVar9) = param_3;
    _objc_release(uVar1);
    param_2 = PTR_PTR_1126d60d0;
    unaff_x22 = *(undefined ***)(param_1 + lVar9);
    _objc_retain(unaff_x22);
    _objc_opt_class(param_2);
    ppuVar7 = unaff_x22;
    _objc_opt_isKindOfClass(unaff_x22,param_2);
    ppuStack_118 = unaff_x22;
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuStack_118 = (undefined **)0x0;
    }
    _objc_retain(ppuStack_118);
    _objc_release(unaff_x22);
    ppuVar7 = (undefined **)0x0;
    if (ppuStack_118 != (undefined **)0x0) {
      ppuVar7 = unaff_x22;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127690f0);
      *(undefined ***)(param_1 + _DAT_1127690f0) = ppuVar7;
      _objc_release(uVar1);
      ppuVar7 = unaff_x22;
      func_0x00010c0b4d20();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127690f4);
      *(undefined ***)(param_1 + _DAT_1127690f4) = ppuVar7;
      _objc_release(uVar1);
      ppuVar7 = unaff_x22;
      func_0x00010c275440();
      uVar1 = 0;
      if ((int)ppuVar7 == 0) {
        uVar1 = 0x4014000000000000;
      }
      lStack_120 = (long)_DAT_1127690d0;
      uVar2 = *(undefined8 *)(param_1 + lStack_120);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(uVar1);
      _objc_release(uVar2);
      ppuVar7 = unaff_x22;
      func_0x00010c2435e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar7;
      func_0x00010c08fa60();
      _objc_release(ppuVar7);
      lVar9 = (long)_DAT_1127690e0;
      if (ppuVar3 == (undefined **)0x0) {
        func_0x00010c1a7f60();
        unaff_x24 = (undefined **)0x0;
      }
      else {
        if (*(long *)(param_1 + lVar9) == 0) {
          puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
          _objc_alloc();
          uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
          uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
          uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
          uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
          func_0x00010c013de0(uVar2,uVar11,uVar12,uVar13);
          uVar1 = *(undefined8 *)(param_1 + lVar9);
          *(undefined **)(param_1 + lVar9) = puVar4;
          _objc_release(uVar1);
          func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar9));
          puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
          _objc_release(puVar4);
          func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
          func_0x00010befbb60(*(undefined8 *)(param_1 + lStack_120));
          puVar4 = PTR_PTR_1126aea58;
          _objc_alloc();
          func_0x00010c013de0(uVar2,uVar11,uVar12,uVar13);
          lVar10 = (long)_DAT_1127690f8;
          uVar1 = *(undefined8 *)(param_1 + lVar10);
          *(undefined **)(param_1 + lVar10) = puVar4;
          _objc_release(uVar1);
          func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
          puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(*(undefined8 *)(param_1 + lVar10));
          _objc_release(puVar4);
          func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar10));
          func_0x00010c213040(*(undefined8 *)(param_1 + lVar10));
          func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
          func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
          uVar2 = *(undefined8 *)(param_1 + lVar10);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          uStack_158 = uVar2;
          uStack_150 = uVar1;
          func_0x00010bf493c0(0x4014000000000000);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + lVar10);
          uStack_148 = uVar2;
          uStack_b0 = uVar2;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = *(undefined **)(param_1 + lVar9);
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          uStack_140 = uVar1;
          puStack_138 = puVar4;
          func_0x00010bf493c0(0xc014000000000000);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + lVar10);
          uStack_130 = uVar1;
          uStack_a8 = uVar1;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c274200(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar11;
          func_0x00010bf493c0(0x4000000000000000);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + lVar10);
          uStack_a0 = uVar1;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010bf1ff80(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar13;
          func_0x00010bf493c0(0xc000000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_98 = uVar2;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puStack_128 = puVar4;
          _objc_release(uVar2);
          _objc_release(uVar5);
          _objc_release(uVar13);
          _objc_release(uVar1);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uStack_130);
          _objc_release(puStack_138);
          _objc_release(uStack_140);
          _objc_release(uStack_148);
          _objc_release(uStack_150);
          _objc_release(uStack_158);
          func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          _objc_release(puStack_128);
        }
        ppuVar7 = unaff_x22;
        func_0x00010c2435e0(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = (undefined **)(long)_DAT_1127690f8;
        func_0x00010c212f20(*(undefined8 *)(param_1 + (long)unaff_x24));
        _objc_release(ppuVar7);
        func_0x00010c275440();
        func_0x00010c21ad00(*(undefined8 *)(param_1 + (long)unaff_x24));
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9));
      }
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127690d4));
      ppuVar3 = unaff_x22;
      func_0x00010c275440();
      ppuVar7 = (undefined **)(long)_DAT_1127690fc;
      lVar9 = *(long *)(param_1 + (long)ppuVar7);
      if ((int)ppuVar3 == 0) {
        func_0x00010c1a7f60();
        func_0x00010c256a60(*(undefined8 *)(param_1 + (long)ppuVar7));
        func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_1127690d8));
      }
      else {
        if (lVar9 == 0) {
          puVar4 = PTR_PTR_1126d6230;
          _objc_alloc_init();
          uVar1 = *(undefined8 *)(param_1 + (long)ppuVar7);
          *(undefined **)(param_1 + (long)ppuVar7) = puVar4;
          _objc_release(uVar1);
          func_0x00010c219b60(*(undefined8 *)(param_1 + (long)ppuVar7));
          func_0x00010c066fe0(*(undefined8 *)(param_1 + lStack_120));
          puStack_160 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar4 = *(undefined **)(param_1 + (long)ppuVar7);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + lStack_120);
          puStack_128 = puVar4;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puStack_128;
          uStack_130 = uVar1;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + (long)ppuVar7);
          puStack_138 = puVar4;
          puStack_d0 = puVar4;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_1 + lStack_120);
          uStack_140 = uVar1;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uStack_140;
          uStack_148 = uVar2;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_1 + (long)ppuVar7);
          uStack_150 = uVar1;
          uStack_c8 = uVar1;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = *(undefined ***)(param_1 + lStack_120);
          uStack_158 = uVar2;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uStack_158;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + (long)ppuVar7);
          uStack_c0 = uVar1;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + lStack_120);
          func_0x00010bf1ff80(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar11;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_b8 = uVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puStack_160);
          _objc_release(puVar4);
          _objc_release(uVar2);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar1);
          _objc_release(unaff_x24);
          _objc_release(uStack_158);
          _objc_release(uStack_150);
          _objc_release(uStack_148);
          _objc_release(uStack_140);
          _objc_release(puStack_138);
          _objc_release(uStack_130);
          _objc_release(puStack_128);
          lVar9 = *(long *)(param_1 + (long)ppuVar7);
        }
        func_0x00010c1a7f60(lVar9);
        func_0x00010c250a20(*(undefined8 *)(param_1 + (long)ppuVar7));
        func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_1127690d8));
      }
      ppuVar3 = unaff_x22;
      func_0x00010c26df40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar9 = 0;
      if (ppuVar3 != (undefined **)0x0) {
        _objc_initWeak(auStack_d8,param_1);
        lVar9 = param_1 + _DAT_1127690e8;
        _objc_loadWeakRetained();
        unaff_x24 = unaff_x22;
        func_0x00010c26df40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0xc2000000;
        pcStack_100 = FUN_107a7ee74;
        puStack_f8 = &UNK_11092ece8;
        lStack_f0 = param_1;
        _objc_retain(param_3);
        ppuVar7 = &puStack_110;
        param_2 = auStack_d8;
        ppuStack_e8 = param_3;
        _objc_copyWeak(auStack_e0,param_2);
        func_0x00010c11da60(lVar9);
        _objc_release(uVar1);
        _objc_release(unaff_x24);
        _objc_release(lVar9);
        _objc_destroyWeak(auStack_e0);
        _objc_release(ppuStack_e8);
        _objc_destroyWeak(auStack_d8);
      }
      func_0x00010bdc8fa0(param_1);
      func_0x00010c1cbf40(param_1);
      func_0x00010c1cbe20(param_1);
    }
    _objc_release(ppuStack_118);
  }
LAB_107a7edfc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar7 + 6);
  _objc_destroyWeak(auStack_d8);
  ppuVar3 = param_3;
  __Unwind_Resume();
  pcStack_168 = FUN_107a7ee74;
  ppuStack_1a0 = unaff_x24;
  lStack_198 = lVar9;
  ppuStack_190 = unaff_x22;
  ppuStack_188 = ppuVar7;
  lStack_180 = param_1;
  ppuStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puVar4 = ppuVar3[5];
  puVar8 = *(undefined **)(ppuVar3[4] + _DAT_1127690ec);
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  if (puVar8 == puVar4) {
    _objc_release(puVar4);
    _objc_release(puVar8);
LAB_107a7ef00:
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c8 = 0xc2000000;
      pcStack_1c0 = FUN_107a7efb0;
      puStack_1b8 = &UNK_110841fb0;
      _objc_copyWeak(auStack_1a8,ppuVar3 + 6);
      _objc_retain(puVar8);
      puStack_1b0 = puVar8;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_1d0);
      _objc_release(puStack_1b0);
      _objc_destroyWeak(auStack_1a8);
    }
  }
  else if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar8;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    _objc_release(puVar8);
    if ((int)puVar6 == 0) goto LAB_107a7ef90;
    goto LAB_107a7ef00;
  }
  _objc_release(puVar8);
LAB_107a7ef90:
  _objc_release(param_2);
  return;
}



/* Entry: 107a7ee74; end: 107a7efaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7ee74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x28);
  puVar3 = *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_1127690ec);
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  if (puVar3 == puVar1) {
    _objc_release(puVar1);
    _objc_release(puVar3);
LAB_107a7ef00:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107a7efb0;
      puStack_58 = &UNK_110841fb0;
      _objc_copyWeak(auStack_48,param_1 + 0x30);
      _objc_retain(puVar3);
      puStack_50 = puVar3;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
      _objc_release(puStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  else if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar1);
    _objc_release(puVar3);
    if ((int)puVar2 == 0) goto LAB_107a7ef90;
    goto LAB_107a7ef00;
  }
  _objc_release(puVar3);
LAB_107a7ef90:
  _objc_release(param_2);
  return;
}



/* Entry: 107a7efb0; end: 107a7efe3;  */

void FUN_107a7efb0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea47a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a7efe4; end: 107a7f687; -[SCTopicViewerViewSnapCollectionViewCell _addViewCountsIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7efe4(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined8 uVar20;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar16 = param_3;
    func_0x00010c29c5c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar16 != 0) {
      uVar2 = param_1;
      func_0x00010bf92460();
      _objc_release(lVar16);
      if ((uVar2 & 1) != 0) {
        lVar16 = param_3;
        func_0x00010c275440();
        lVar18 = (long)_DAT_112769100;
        if (*(long *)(param_1 + lVar18) == 0) {
          bVar1 = (int)lVar16 == 0;
          dVar19 = 5.0;
          if (bVar1) {
            dVar19 = 8.0;
          }
          uVar20 = 0x4028000000000000;
          if (bVar1) {
            uVar20 = 0x4024000000000000;
          }
          puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
          _objc_alloc();
          func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                              *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                              *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                              *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
          uVar15 = *(undefined8 *)(param_1 + lVar18);
          *(undefined **)(param_1 + lVar18) = puVar3;
          _objc_release(uVar15);
          func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
          func_0x00010c16e060(*(undefined8 *)(param_1 + lVar18));
          func_0x00010c166c00(*(undefined8 *)(param_1 + lVar18));
          func_0x00010c190b80(*(undefined8 *)(param_1 + lVar18));
          func_0x00010c207380(0x4010000000000000,*(undefined8 *)(param_1 + lVar18));
          lVar16 = (long)_DAT_1127690d0;
          func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16));
          puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc_init();
          func_0x00010c275440();
          func_0x00010c219b60(puVar4);
          func_0x00010c182220(puVar4);
          puVar3 = PTR_PTR_1126b0c40;
          puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe7aa0(uVar20,uVar20,puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9f00(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar5);
          puVar3 = puVar4;
          func_0x00010c2a5060(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf49420(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c162480();
          _objc_release(puVar5);
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010bfe0660(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf49420(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c162480();
          _objc_release(puVar5);
          _objc_release(puVar3);
          func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar18));
          puVar3 = PTR_PTR_1126aea58;
          _objc_alloc_init();
          lVar17 = (long)_DAT_112769104;
          uVar20 = *(undefined8 *)(param_1 + lVar17);
          *(undefined **)(param_1 + lVar17) = puVar3;
          _objc_release(uVar20);
          func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
          func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17));
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(*(undefined8 *)(param_1 + lVar17));
          _objc_release(puVar3);
          func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar18));
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          uVar6 = *(undefined8 *)(param_1 + lVar18);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_1 + lVar16);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar6;
          func_0x00010bf493c0(dVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + lVar18);
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + lVar16);
          func_0x00010c2793a0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar8;
          func_0x00010bf49520(-dVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_1 + lVar18);
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + lVar16);
          func_0x00010bf1ff80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar10;
          func_0x00010bf493c0(-dVar19);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar3);
          _objc_release(puVar5);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar15);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar20);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(puVar4);
        }
        lVar16 = (long)_DAT_1127690e4;
        if (*(long *)(param_1 + lVar16) == 0) {
          puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
          func_0x00010c08c0e0();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = *(undefined8 *)(param_1 + lVar16);
          *(undefined **)(param_1 + lVar16) = puVar3;
          _objc_release(uVar20);
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bdc0fe0();
          puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf414e0(0x3fe6666666666666);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bdc0fe0();
          puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar16));
          _objc_release(puVar13);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          func_0x00010c1bff00(*(undefined8 *)(param_1 + lVar16));
          func_0x00010c209760(0,0,*(undefined8 *)(param_1 + lVar16));
          func_0x00010c196020(0,0x3ff0000000000000,*(undefined8 *)(param_1 + lVar16));
          uVar20 = *(undefined8 *)(param_1 + (long)_DAT_1127690d0);
          func_0x00010c08c0e0(uVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = *(undefined8 *)(param_1 + (long)_DAT_1127690d4);
          func_0x00010c08c0e0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066f20(uVar20);
          _objc_release(uVar15);
          _objc_release(uVar20);
        }
        puVar3 = PTR_PTR_1126b10c8;
        lVar17 = param_3;
        func_0x00010c29c5c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c22d8c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar17);
        func_0x00010c212f20(*(undefined8 *)(param_1 + (long)_DAT_112769104));
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar18));
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar16));
        func_0x00010bf20c00(*(undefined8 *)(param_1 + (long)_DAT_1127690d0));
        func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar16));
        _objc_release(puVar3);
        goto LAB_107a7f640;
      }
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_112769100));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_1127690e4));
  }
LAB_107a7f640:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_1127690d4));
  func_0x00010c2558c0(*(undefined8 *)(param_3 + _DAT_1127690d8));
  lVar14 = (long)_DAT_1127690fc;
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar14));
                    /* WARNING: Could not recover jumptable at 0x00010c256a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + lVar14),PTR_s_stopShimmer_1126734c0);
  return;
}



/* Entry: 107a7f688; end: 107a7f6d7; -[SCTopicViewerViewSnapCollectionViewCell _setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7f688(long param_1)

{
  long lVar1;
  
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127690d4));
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_1127690d8));
  lVar1 = (long)_DAT_1127690fc;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c256a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_stopShimmer_1126734c0);
  return;
}



/* Entry: 107a7f6d8; end: 107a7f747; -[SCTopicViewerViewSnapCollectionViewCell _handleLongPress:] */

void FUN_107a7f6d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010c077040();
    if ((int)lVar1 == 0) {
      func_0x00010be31a20(param_1);
    }
    else {
      func_0x00010be2bc60(param_1);
    }
  }
  else if (lVar1 == 1) {
    func_0x00010bec18c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a7f748; end: 107a7f7d3; -[SCTopicViewerViewSnapCollectionViewCell _startShrinkAnimation] */

void FUN_107a7f748(undefined8 param_1,undefined8 param_2)

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
  pcStack_28 = FUN_107a7f7d4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107a7f934;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf02ee0(0x3fd999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_38,
                      &puStack_60);
  return;
}



/* Entry: 107a7f7d4; end: 107a7f88b;  */

void FUN_107a7f7d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a7f88c;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107a7f8ec;
  puStack_78 = &UNK_110842e18;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0x3fc999999999999a,0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_90);
  return;
}



/* Entry: 107a7f88c; end: 107a7f8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7f88c(long param_1,undefined8 param_2)

{
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
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,0x3fee666666666666,0x3fee666666666666);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127690d0),param_2,
                      &uStack_80);
  return;
}



/* Entry: 107a7f8ec; end: 107a7f97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7f8ec(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127690d0),param_2,
                      &uStack_40);
  return;
}



/* Entry: 107a7f97c; end: 107a7fa63; +[SCTopicViewerViewSnapCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107a7f97c(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126d60d0;
  _objc_opt_class(PTR_PTR_1126d60d0);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c275440();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar2);
    param_1 = (param_3 + -16.0 + -8.0) / 3.0;
    param_2 = param_1 * 1.6666666666666667;
  }
  else {
    FUN_107a7d9ec(param_1);
  }
  _objc_release(param_6);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107a7fa64; end: 107a7faab; -[SCTopicViewerViewSnapCollectionViewCell _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7fa64(undefined8 param_1)

{
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a7faac; end: 107a7fb0f; -[SCTopicViewerViewSnapCollectionViewCell _handleLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7faac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112769108);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127690f4);
  lVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a7fb10; end: 107a7fb17; -[SCTopicViewerViewSnapCollectionViewCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107a7fb10(void)

{
  return 1;
}



/* Entry: 107a7fb18; end: 107a7fb27; -[SCTopicViewerViewSnapCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7fb18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127690ec);
}



/* Entry: 107a7fb28; end: 107a7fb37; -[SCTopicViewerViewSnapCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a7fb28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112769108);
}



/* Entry: 107a7fb38; end: 107a7fb77; -[SCTopicViewerViewSnapCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7fb38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112769108;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a7fb78; end: 107a7fb97; -[SCTopicViewerViewSnapCollectionViewCell thumbnailCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7fb78(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127690e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a7fb98; end: 107a7fba7; -[SCTopicViewerViewSnapCollectionViewCell enableViewCountOnAllTopics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a7fb98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127690cc);
}



/* Entry: 107a7fba8; end: 107a7fbb7; -[SCTopicViewerViewSnapCollectionViewCell setEnableViewCountOnAllTopics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7fba8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127690cc) = param_3;
  return;
}



/* Entry: 107a7fbb8; end: 107a7fcc3; -[SCTopicViewerViewSnapCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7fbb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769108,0);
  _objc_storeStrong(param_1 + _DAT_1127690ec,0);
  _objc_storeStrong(param_1 + _DAT_112769104,0);
  _objc_storeStrong(param_1 + _DAT_112769100,0);
  _objc_storeStrong(param_1 + _DAT_1127690e4,0);
  _objc_storeStrong(param_1 + _DAT_1127690dc,0);
  _objc_storeStrong(param_1 + _DAT_1127690f4,0);
  _objc_storeStrong(param_1 + _DAT_1127690f0,0);
  _objc_storeStrong(param_1 + _DAT_1127690d0,0);
  _objc_storeStrong(param_1 + _DAT_1127690d8,0);
  _objc_destroyWeak(param_1 + _DAT_1127690e8);
  _objc_storeStrong(param_1 + _DAT_1127690f8,0);
  _objc_storeStrong(param_1 + _DAT_1127690e0,0);
  _objc_storeStrong(param_1 + _DAT_1127690fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127690d4,0);
  return;
}



/* Entry: 107a7fcc4; end: 107a7ffe7; -[SCTopicViewerViewSnapShimmerCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107a7fcc4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  long lVar9;
  long lStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f9900;
  puVar7 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_initWithFrame__1125e2948);
  lVar9 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar7);
    func_0x00010c160f00(puVar7);
    puVar1 = PTR_PTR_1126d6230;
    _objc_alloc_init();
    lVar9 = (long)_DAT_11276910c;
    uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
    *(undefined **)((long)puVar7 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)puVar7 + lVar9));
    puVar2 = puVar7;
    func_0x00010bf4dce0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    uStack_a8 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar8;
    uVar3 = *(undefined8 *)((long)puVar7 + lVar9);
    uStack_b8 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    uStack_c8 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar3;
    uVar4 = *(undefined8 *)((long)puVar7 + lVar9);
    uStack_e0 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar7;
    uStack_e8 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar4;
    uVar3 = *(undefined8 *)((long)puVar7 + lVar9);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf4dce0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d8);
    _objc_release(puVar1);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(unaff_x20);
    _objc_release(uStack_e8);
    _objc_release(uStack_e0);
    _objc_release(puStack_d0);
    _objc_release(puStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_b8);
    _objc_release(puStack_b0);
    _objc_release(puStack_a0);
    _objc_release(uStack_a8);
    lVar9 = *(long *)((long)puVar7 + lVar9);
    func_0x00010c250a20();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_107a7ffe8;
  puStack_118 = PTR_PTR_1126f9900;
  lStack_120 = lVar9;
  puStack_110 = unaff_x20;
  puStack_108 = puVar7;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_120,PTR_s_prepareForReuse_112620008);
  puVar7 = *(undefined8 **)(lVar9 + _DAT_11276910c);
  func_0x00010c256a60(puVar7);
  return puVar7;
}



/* Entry: 107a7ffe8; end: 107a80037; -[SCTopicViewerViewSnapShimmerCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7ffe8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9900;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c256a60(*(undefined8 *)(param_1 + _DAT_11276910c));
  return;
}



/* Entry: 107a80038; end: 107a8009b; -[SCTopicViewerViewSnapShimmerCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a80038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112769110);
  *(undefined8 *)(param_1 + _DAT_112769110) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c250a20(*(undefined8 *)(param_1 + _DAT_11276910c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a8009c; end: 107a8009f; +[SCTopicViewerViewSnapShimmerCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_107a8009c(double param_1)

{
  undefined *puVar1;
  
  if (param_1 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 107a800a0; end: 107a800af; -[SCTopicViewerViewSnapShimmerCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a800a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112769110);
}



/* Entry: 107a800b0; end: 107a800ef; -[SCTopicViewerViewSnapShimmerCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a800b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769110,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276910c,0);
  return;
}



/* Entry: 107a800f0; end: 107a802cf;  */

void FUN_107a800f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eab058;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eab058,
                      &PTR____CFConstantStringClassReference_110eab078,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107a802d0; end: 107a80357; -[SCTopicViewerViewEmptyStateCellViewModel initWithMessage:showLoadingIndicator:] */

undefined1 *
FUN_107a802d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9908;
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



/* Entry: 107a80358; end: 107a8037b; -[SCTopicViewerViewEmptyStateCellViewModel copyWithZone:] */

undefined8 FUN_107a80358(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a8037c; end: 107a803e7; -[SCTopicViewerViewEmptyStateCellViewModel hash] */

undefined8 * FUN_107a8037c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107a8046c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107a8046c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107a8046c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107a8046c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107a803e8; end: 107a80487; -[SCTopicViewerViewEmptyStateCellViewModel isEqual:] */

long FUN_107a803e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a8046c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107a8046c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107a8046c;
    }
  }
  lVar3 = 1;
LAB_107a8046c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a80488; end: 107a8048f; -[SCTopicViewerViewEmptyStateCellViewModel message] */

undefined8 FUN_107a80488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a80490; end: 107a80497; -[SCTopicViewerViewEmptyStateCellViewModel showLoadingIndicator] */

undefined1 FUN_107a80490(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a80498; end: 107a804a3; -[SCTopicViewerViewEmptyStateCellViewModel .cxx_destruct] */

void FUN_107a80498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a804a4; end: 107a805eb; -[SCTopicViewerViewSnapCellViewModel initWithThumbnailInfo:tapActionModel:longPressActionModel:snapTagTitle:viewCount:topicPageNewSnapGridEnabled:] */

undefined1 *
FUN_107a804a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

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
  puStack_58 = PTR_PTR_1126f9910;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a805ec; end: 107a8060f; -[SCTopicViewerViewSnapCellViewModel copyWithZone:] */

undefined8 FUN_107a805ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a80610; end: 107a806ab; -[SCTopicViewerViewSnapCellViewModel hash] */

undefined8 * FUN_107a80610(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107a80784:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107a80790;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_107a80790;
              }
              goto LAB_107a80784;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107a80790:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107a806ac; end: 107a807ab; -[SCTopicViewerViewSnapCellViewModel isEqual:] */

long FUN_107a806ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a80784:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a80790;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_107a80790;
              }
              goto LAB_107a80784;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a80790:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a807ac; end: 107a807b3; -[SCTopicViewerViewSnapCellViewModel thumbnailInfo] */

undefined8 FUN_107a807ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a807b4; end: 107a807bb; -[SCTopicViewerViewSnapCellViewModel tapActionModel] */

undefined8 FUN_107a807b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a807bc; end: 107a807c3; -[SCTopicViewerViewSnapCellViewModel longPressActionModel] */

undefined8 FUN_107a807bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a807c4; end: 107a807cb; -[SCTopicViewerViewSnapCellViewModel snapTagTitle] */

undefined8 FUN_107a807c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a807cc; end: 107a807d3; -[SCTopicViewerViewSnapCellViewModel viewCount] */

undefined8 FUN_107a807cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a807d4; end: 107a807db; -[SCTopicViewerViewSnapCellViewModel topicPageNewSnapGridEnabled] */

undefined1 FUN_107a807d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a807dc; end: 107a8082f; -[SCTopicViewerViewSnapCellViewModel .cxx_destruct] */

void FUN_107a807dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a80830; end: 107a80877; +[SCTopicViewerLensFavoritesButtonState hidden] */

void FUN_107a80830(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d60b0;
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



/* Entry: 107a80878; end: 107a808db; +[SCTopicViewerLensFavoritesButtonState visibleWithIsFavorite:isEnabled:] */

void FUN_107a80878(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d60b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x10] = param_3;
  puVar2[0x11] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a808dc; end: 107a808ff; -[SCTopicViewerLensFavoritesButtonState copyWithZone:] */

undefined8 FUN_107a808dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a80900; end: 107a80963; -[SCTopicViewerLensFavoritesButtonState hash] */

void FUN_107a80900(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x11);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f9918;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a80964; end: 107a809a7; -[SCTopicViewerLensFavoritesButtonState internalInit] */

void FUN_107a80964(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9918;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a809a8; end: 107a80a4f; -[SCTopicViewerLensFavoritesButtonState isEqual:] */

bool FUN_107a809a8(ulong param_1,undefined8 param_2,ulong param_3)

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
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107a80a50; end: 107a80ad7; -[SCTopicViewerLensFavoritesButtonState matchHidden:visible:] */

void FUN_107a80a50(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11));
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



/* Entry: 107a80ad8; end: 107a80c3f; -[SCAddToStoryCameraScope initWithReplyConfiguration:presentingViewController:cameraScopeDismissalDelegate:captureWorkflowResultDelegate:quickStickerImage:quickStickerMetadata:] */

undefined8 *
FUN_107a80ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_60 = PTR_PTR_1126f9920;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_58;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 2,puVar3);
    _objc_release(puVar3);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a80c40; end: 107a80c47; -[SCAddToStoryCameraScope replyConfiguration] */

undefined8 FUN_107a80c40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a80c48; end: 107a80c5f; -[SCAddToStoryCameraScope presentingViewController] */

void FUN_107a80c48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a80c60; end: 107a80c77; -[SCAddToStoryCameraScope cameraScopeDismissalDelegate] */

void FUN_107a80c60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a80c78; end: 107a80c8f; -[SCAddToStoryCameraScope captureWorkflowResultDelegate] */

void FUN_107a80c78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a80c90; end: 107a80c97; -[SCAddToStoryCameraScope quickStickerImage] */

undefined8 FUN_107a80c90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a80c98; end: 107a80c9f; -[SCAddToStoryCameraScope quickStickerMetadata] */

undefined8 FUN_107a80c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a80ca0; end: 107a80cf3; -[SCAddToStoryCameraScope .cxx_destruct] */

void FUN_107a80ca0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a80cf4; end: 107a80cfb; -[SCCameraDirectorModeLaunchServices directorModeScopeLauncher] */

undefined8 FUN_107a80cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a80cfc; end: 107a80d07; -[SCCameraDirectorModeLaunchServices .cxx_destruct] */

void FUN_107a80cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a80d08; end: 107a80e5b; -[SCStoriesTopicShareManagerImpl initWithSpotlightShareSender:scopedConversationParser:sendToScopeExposer:sendToScopeServices:notificationServices:storiesConfigProvider:] */

undefined1 *
FUN_107a80d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f9930;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a80e5c; end: 107a81107; -[SCStoriesTopicShareManagerImpl shareTopicSnap:presentingViewController:thumbnailCoordinator:topicStoryId:] */

void FUN_107a80e5c(long param_1,undefined1 *param_2,undefined **param_3,undefined8 param_4,
                  undefined **param_5,undefined1 *param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar2 = param_5;
  if (param_3 != (undefined **)0x0) {
    _objc_storeWeak(param_1 + 0x38,param_4);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_70 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    func_0x00010bf0e700(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf0aa40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c2751c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    param_2 = param_6;
    FUN_107a830b8(puVar1,param_6,ppuVar4,1,1,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar7;
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(puVar1);
    ppuVar2 = param_3;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000107d227d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (ppuVar3 == (undefined **)0x0) {
      func_0x00010be69360(param_1);
    }
    else {
      _objc_initWeak(auStack_78,param_1);
      uVar5 = 0x15;
      _dispatch_get_global_queue(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107a81108;
      puStack_88 = &UNK_110853030;
      ppuVar2 = &puStack_a0;
      param_2 = auStack_78;
      _objc_copyWeak(auStack_80,param_2);
      func_0x00010c11da60(param_5);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    _objc_release(ppuVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 4);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  param_3 = param_3 + 4;
  _objc_loadWeakRetained(param_3);
  func_0x00010be69360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a81108; end: 107a8114f;  */

void FUN_107a81108(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a81150; end: 107a8126b; -[SCStoriesTopicShareManagerImpl _onFetchedThumbnailData:] */

void FUN_107a81150(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4458;
    _objc_alloc();
    func_0x00010c01c300();
    _objc_release(puVar2);
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a8126c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar3);
  puStack_48 = puVar3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107a8126c; end: 107a8129f;  */

void FUN_107a8126c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a812a0; end: 107a81433; -[SCStoriesTopicShareManagerImpl _launchSendToWithPreviewModel:] */

void FUN_107a812a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar1 = PTR_PTR_1126b0818;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  func_0x00010c044540(puVar1,param_2,puVar2,0,7,0xffffffffffffffff,0x149,0,0,0,0,0,0);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar5);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1;
  func_0x00010bea0a00(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bea0ba0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar3;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b0810;
  _objc_alloc();
  func_0x00010c046120();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf23ee0(uVar5,param_2,*(undefined8 *)(param_1 + 8),PTR____NSArray0__struct_11034ab48,
                      *(undefined8 *)(param_1 + 0x40),0,*(undefined8 *)(param_1 + 0x48),0,0,puVar1,
                      uVar6 & 0xffffffffffff0000,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a81434; end: 107a8150f; -[SCStoriesTopicShareManagerImpl _sendToContainerViewWithPresentingViewController:] */

void FUN_107a81434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
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
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a81510;
  puStack_50 = &UNK_110845c10;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x107a81524;
  puStack_78 = &UNK_110841f50;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0311a0(puVar2,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a81510; end: 107a81533;  */

void FUN_107a81510(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentViewController_animated_c_112621588,
             param_2,1,0);
  return;
}


