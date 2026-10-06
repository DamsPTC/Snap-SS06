/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051848ac; end: 105184acf; -[SCSnapKitIdentityWebViewRootViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051848ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126e69c0;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11271e384;
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  lStack_78 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105184ad0;
  puStack_b8 = PTR_PTR_1126e69c0;
  lStack_c0 = lVar2;
  lStack_b0 = lVar3;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c24dbc0(*(undefined8 *)(lVar2 + _DAT_11271e384));
  return;
}



/* Entry: 105184ad0; end: 105184b1f; -[SCSnapKitIdentityWebViewRootViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184ad0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e69c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11271e384));
  return;
}



/* Entry: 105184b20; end: 105184c3b; -[SCSnapKitIdentityWebViewRootViewController presentAuthorizationModal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar3 = (long)_DAT_11271e388;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c167420(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c201b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219d60(*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c108fe0(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105184c3c; end: 105184c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184c3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11271e384));
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271e388);
    func_0x00010c27b3a0(PTR_PTR_1126b5828);
    func_0x00010c10c5a0(uVar1,param_2,param_1,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105184ca0; end: 105184cb3; -[SCSnapKitIdentityWebViewRootViewController dismissAuthorizationModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271e388),PTR_s_dismissAnimated__1125be608,0);
  return;
}



/* Entry: 105184cb4; end: 105184cf3; -[SCSnapKitIdentityWebViewRootViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105184cb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e388,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e384,0);
  return;
}



/* Entry: 105184cf4; end: 105185b63; -[SCSnapKitIdentityWebViewAuthPermissionView initWithIdentityWebViewConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105184cf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined *puVar63;
  undefined8 uVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uStack_1a0;
  undefined *puStack_198;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_198 = PTR_PTR_1126e69c8;
  puVar1 = &uStack_1a0;
  uStack_1a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar71 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar72 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar73 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar74 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar71,uVar72,uVar73,uVar74);
    lVar68 = (long)_DAT_11271e38c;
    uVar64 = *(undefined8 *)((long)puVar1 + lVar68);
    *(undefined **)((long)puVar1 + lVar68) = puVar2;
    _objc_release(uVar64);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar68));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar68));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar67 = (long)_DAT_11271e390;
    uVar64 = *(undefined8 *)((long)puVar1 + lVar67);
    *(undefined **)((long)puVar1 + lVar67) = puVar2;
    _objc_release(uVar64);
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar67));
    func_0x00010c216260(*(undefined8 *)((long)puVar1 + lVar67));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar67));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar68));
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar66 = (long)_DAT_11271e394;
    uVar64 = *(undefined8 *)((long)puVar1 + lVar66);
    *(undefined **)((long)puVar1 + lVar66) = puVar2;
    _objc_release(uVar64);
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar66));
    func_0x00010c216260(*(undefined8 *)((long)puVar1 + lVar66));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar66));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar68));
    lVar70 = param_3;
    func_0x00010c2418c0();
    _objc_retainAutoreleasedReturnValue();
    lVar65 = param_3;
    lStack_b8 = lVar70;
    func_0x00010c2418c0();
    _objc_retainAutoreleasedReturnValue();
    lVar69 = param_3;
    lStack_b0 = lVar65;
    func_0x00010c2418c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dc90d8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dc90f8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_a8 = lVar69;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar69);
    _objc_release(lVar65);
    _objc_release(lVar70);
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110daafd8;
    lVar70 = param_3;
    func_0x00010c113f00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dc9098;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_c8 = lVar70;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar70);
    puVar2 = PTR_PTR_1126b0ac8;
    _objc_alloc();
    func_0x00010c013de0(uVar71,uVar72,uVar73,uVar74);
    lVar69 = (long)_DAT_11271e398;
    uVar64 = *(undefined8 *)((long)puVar1 + lVar69);
    *(undefined **)((long)puVar1 + lVar69) = puVar2;
    _objc_release(uVar64);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar69));
    _objc_release(puVar2);
    func_0x00010c193a00(*(undefined8 *)((long)puVar1 + lVar69));
    func_0x00010c212fe0(*(undefined8 *)((long)puVar1 + lVar69));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar69));
    _objc_release(puVar2);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar69));
    func_0x00010c2131e0(0x4024000000000000,0x4024000000000000,0x4024000000000000,0x4024000000000000,
                        *(undefined8 *)((long)puVar1 + lVar69));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar64 = *(undefined8 *)((long)puVar1 + lVar69);
    func_0x00010c08c0e0(uVar64);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar64);
    _objc_release(puVar2);
    uVar64 = *(undefined8 *)((long)puVar1 + lVar69);
    func_0x00010c08c0e0(uVar64);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar64);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar69));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar69));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar69));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar68));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar71,uVar72,uVar73,uVar74);
    lVar65 = (long)_DAT_11271e39c;
    uVar64 = *(undefined8 *)((long)puVar1 + lVar65);
    *(undefined **)((long)puVar1 + lVar65) = puVar2;
    _objc_release(uVar64);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar65));
    _objc_release(puVar2);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar65));
    lVar70 = param_3;
    func_0x00010c2418c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar65));
    _objc_release(lVar70);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar65));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar65));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar65));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar68));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar71,uVar72,uVar73,uVar74);
    lVar70 = (long)_DAT_11271e3a0;
    uVar64 = *(undefined8 *)((long)puVar1 + lVar70);
    *(undefined **)((long)puVar1 + lVar70) = puVar2;
    _objc_release(uVar64);
    uVar64 = *(undefined8 *)((long)puVar1 + lVar70);
    func_0x00010c08c0e0(uVar64);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar64);
    uVar64 = *(undefined8 *)((long)puVar1 + lVar70);
    func_0x00010c08c0e0(uVar64);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar64);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar70));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar68));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uVar16;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar67);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493c0(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar67);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010bf493c0(0xc044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar22;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar67);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uVar24;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar66);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)puVar1 + lVar67);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar25;
    func_0x00010bf493c0(0x8000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uVar27;
    uVar28 = *(undefined8 *)((long)puVar1 + lVar66);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)((long)puVar1 + lVar67);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar30;
    uVar31 = *(undefined8 *)((long)puVar1 + lVar66);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)((long)puVar1 + lVar67);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar31;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar33;
    uVar34 = *(undefined8 *)((long)puVar1 + lVar66);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)((long)puVar1 + lVar67);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar36;
    uVar37 = *(undefined8 *)((long)puVar1 + lVar69);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = *(undefined8 *)((long)puVar1 + lVar66);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar37;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uVar39;
    uVar40 = *(undefined8 *)((long)puVar1 + lVar69);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = uVar40;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar42;
    uVar43 = *(undefined8 *)((long)puVar1 + lVar69);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar74 = uVar43;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar74;
    uVar45 = *(undefined8 *)((long)puVar1 + lVar65);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = *(undefined8 *)((long)puVar1 + lVar69);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar47 = uVar45;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar47;
    uVar48 = *(undefined8 *)((long)puVar1 + lVar65);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar49 = *(undefined8 *)((long)puVar1 + lVar66);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = uVar48;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar50;
    uVar51 = *(undefined8 *)((long)puVar1 + lVar65);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar52 = *(undefined8 *)((long)puVar1 + lVar66);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar53 = uVar51;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar53;
    uVar54 = *(undefined8 *)((long)puVar1 + lVar70);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = *(undefined8 *)((long)puVar1 + lVar65);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar54;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar56;
    uVar57 = *(undefined8 *)((long)puVar1 + lVar70);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar58 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar64 = uVar57;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar64;
    uVar59 = *(undefined8 *)((long)puVar1 + lVar70);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar71 = uVar59;
    func_0x00010bf49420(0x405f400000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar71;
    uVar60 = *(undefined8 *)((long)puVar1 + lVar70);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar72 = uVar60;
    func_0x00010bf49420(0x405f400000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar72;
    uVar61 = *(undefined8 *)((long)puVar1 + lVar70);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar62 = *(undefined8 *)((long)puVar1 + lVar68);
    func_0x00010c274200(uVar62);
    _objc_retainAutoreleasedReturnValue();
    uVar73 = uVar61;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar63 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar73;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar63);
    _objc_release(uVar73);
    _objc_release(uVar62);
    _objc_release(uVar61);
    _objc_release(uVar72);
    _objc_release(uVar60);
    _objc_release(uVar71);
    _objc_release(uVar59);
    _objc_release(uVar64);
    _objc_release(uVar58);
    _objc_release(uVar57);
    _objc_release(uVar56);
    _objc_release(uVar55);
    _objc_release(uVar54);
    _objc_release(uVar53);
    _objc_release(uVar52);
    _objc_release(uVar51);
    _objc_release(uVar50);
    _objc_release(uVar49);
    _objc_release(uVar48);
    _objc_release(uVar47);
    _objc_release(uVar46);
    _objc_release(uVar45);
    _objc_release(uVar74);
    _objc_release(uVar44);
    _objc_release(uVar43);
    _objc_release(uVar42);
    _objc_release(uVar41);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(param_3 + _DAT_11271e390);
}



/* Entry: 105185b64; end: 105185b73; -[SCSnapKitIdentityWebViewAuthPermissionView cancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105185b64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e390);
}



/* Entry: 105185b74; end: 105185b83; -[SCSnapKitIdentityWebViewAuthPermissionView continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105185b74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e394);
}



/* Entry: 105185b84; end: 105185b93; -[SCSnapKitIdentityWebViewAuthPermissionView bodyTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105185b84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e398);
}



/* Entry: 105185b94; end: 105185ba3; -[SCSnapKitIdentityWebViewAuthPermissionView iconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105185b94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e3a0);
}



/* Entry: 105185ba4; end: 105185be3; -[SCSnapKitIdentityWebViewAuthPermissionView setIconImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105185ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e3a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105185be4; end: 105185c73; -[SCSnapKitIdentityWebViewAuthPermissionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105185be4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e3a0,0);
  _objc_storeStrong(param_1 + _DAT_11271e398,0);
  _objc_storeStrong(param_1 + _DAT_11271e394,0);
  _objc_storeStrong(param_1 + _DAT_11271e390,0);
  _objc_storeStrong(param_1 + _DAT_11271e39c,0);
  _objc_storeStrong(param_1 + _DAT_11271e38c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e3a4,0);
  return;
}



/* Entry: 105185c74; end: 105185eaf; -[SCSnapKitIdentityWebViewWorkflow initWithIdentityWebViewConfig:identityWebViewService:identityWebViewDelegate:identityWebViewRouter:imageSourceProvider:blizzardLogger:metricsReporter:] */

undefined8 *
FUN_105185c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e69d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_5);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b5840;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c2418a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf4f080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf0d660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffef20();
    uVar7 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105185eb0; end: 105185f6f; -[SCSnapKitIdentityWebViewWorkflow beginWorkFlow] */

void FUN_105185eb0(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c134080(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110dbf578);
  func_0x00010c239ac0(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bdd0e60(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105185f70; end: 105185fbf;  */

void FUN_105185f70(long param_1,undefined8 param_2)

{
  func_0x00010c133560(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if ((int)param_2 == 0) {
    func_0x00010be2a900();
  }
  else {
    func_0x00010becad80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105185fc0; end: 10518612b; -[SCSnapKitIdentityWebViewWorkflow _attemptToOpenUniversalLinkWithCompletion:] */

void FUN_105185fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0d660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
  puStack_40 = PTR____kCFBooleanTrue_11034ab68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10518612c;
  puStack_58 = &UNK_110842508;
  uStack_50 = param_3;
  _objc_retain(param_3);
  func_0x00010c0e9b80(puVar3,param_2,puVar1,puVar4,&puStack_70);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105186134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10518612c; end: 105186137;  */

void FUN_10518612c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105186134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105186138; end: 105186267; -[SCSnapKitIdentityWebViewWorkflow _handleIdentityWebViewRequest] */

void FUN_105186138(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2418a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd4600();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadBrowser__112570c60,0);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2418a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa5c80(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105186268; end: 1051862cf;  */

void FUN_105186268(long param_1,ulong param_2,ulong param_3)

{
  func_0x00010c132e20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if ((param_2 & 1) == 0) {
    func_0x00010be04580();
  }
  else if ((param_3 & 1) == 0) {
    func_0x00010be30160();
  }
  else {
    func_0x00010be2b800();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051862d0; end: 1051862df; -[SCSnapKitIdentityWebViewWorkflow _handleShowAuthorizationModal] */

void FUN_1051862d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_showAuthorizationModalWithIdenti_11266b208,
             *(undefined8 *)(param_1 + 0x20),param_1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051862e0; end: 1051862e7; -[SCSnapKitIdentityWebViewWorkflow _handleLoadWebBrowser] */

void FUN_1051862e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadBrowser__112570c60,0);
  return;
}



/* Entry: 1051862e8; end: 1051863d3; -[SCSnapKitIdentityWebViewWorkflow _loadBrowser:] */

void FUN_1051862e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010c0a7ea0(*(undefined8 *)(param_1 + 0x30));
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2418a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c283920(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051863d4; end: 105186417;  */

void FUN_1051863d4(long param_1,undefined8 param_2)

{
  func_0x00010c133f40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beab200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105186418; end: 1051864fb; -[SCSnapKitIdentityWebViewWorkflow _setupBrowser:] */

void FUN_105186418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2418a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa77e0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051864fc; end: 1051865eb;  */

void FUN_1051864fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  func_0x00010c132e40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  if (lVar2 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be04580();
  }
  else {
    lVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    if (lVar2 == 0) {
      func_0x00010be2c4e0();
    }
    else {
      func_0x00010be7a5c0();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051865ec; end: 10518672f; -[SCSnapKitIdentityWebViewWorkflow _presentBrowserWithHeaders:] */

void FUN_1051865ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0d660(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2afe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c23ad20(*(undefined8 *)(param_1 + 0x18),param_2,puVar5,param_1);
  func_0x00010c133fe0(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110dc9118);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105186730; end: 105186777; -[SCSnapKitIdentityWebViewWorkflow _tearDownIdentityWebView] */

void FUN_105186730(long param_1,undefined8 param_2)

{
  func_0x00010c134080(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110dc9138);
  func_0x00010bf843c0(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe6260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105186778; end: 105186833; -[SCSnapKitIdentityWebViewWorkflow _tearDownWebBrowser] */

void FUN_105186778(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c133fe0(*(undefined8 *)(param_2 + 0x38),param_3,
                      &PTR____CFConstantStringClassReference_110dc9158);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b4fe0();
  func_0x00010c0a7e40(uVar3,param_3,puVar2);
  _objc_release(puVar1);
  func_0x00010bf84c00(*(undefined8 *)(param_2 + 0x18));
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010bfe6260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105186834; end: 1051868db; -[SCSnapKitIdentityWebViewWorkflow _displayErrorMessage] */

void FUN_105186834(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c237460(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1051868dc; end: 105186907;  */

void FUN_1051868dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becad80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105186908; end: 10518696f; -[SCSnapKitIdentityWebViewWorkflow _handleMissingDisplayNameWithRequestHeaders:] */

void FUN_105186908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c132e40(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110dc9178);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c237160(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105186970; end: 1051869b3; -[SCSnapKitIdentityWebViewWorkflow identityWebViewAuthorizationModalDidAccept] */

void FUN_105186970(long param_1,undefined8 param_2)

{
  func_0x00010c132600(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110dc9198);
  func_0x00010c0a7e60(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf83220(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010be4cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadBrowser__112570c60,1);
  return;
}



/* Entry: 1051869b4; end: 105186a0f; -[SCSnapKitIdentityWebViewWorkflow identityWebViewAuthorizationModalDidCancel] */

void FUN_1051869b4(long param_1,undefined8 param_2)

{
  func_0x00010c132600(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110dc91b8);
  func_0x00010c0a7e80(*(undefined8 *)(param_1 + 0x30),param_2,1);
  func_0x00010bf83220(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf843c0(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe6260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105186a10; end: 105186a1f; -[SCSnapKitIdentityWebViewWorkflow identityWebViewAuthorizationModalDidPresent] */

void FUN_105186a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_reportAuthModalPresentationStatu_11262a3a0,
             &PTR____CFConstantStringClassReference_110dc9118);
  return;
}



/* Entry: 105186a20; end: 105186ad3; -[SCSnapKitIdentityWebViewWorkflow webBrowserDidDismiss:] */

void FUN_105186a20(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105186aa8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105186ad4; end: 105186b0b; -[SCSnapKitIdentityWebViewWorkflow editDisplayNameDismissed] */

void FUN_105186ad4(long param_1,undefined8 param_2)

{
  func_0x00010c132be0(*(undefined8 *)(param_1 + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110dc9158);
  func_0x00010bf837e0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010becad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tearDownIdentityWebView_112590508);
  return;
}



/* Entry: 105186b0c; end: 105186bef; -[SCSnapKitIdentityWebViewWorkflow editDisplayNameSavePressed:] */

void FUN_105186b0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c132be0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf837e0(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_38,param_1);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    func_0x00010becad80();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c00c560();
    func_0x00010c1d0640();
    func_0x00010be7a5c0(param_1);
  }
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105186bf0; end: 105186c6f; -[SCSnapKitIdentityWebViewWorkflow .cxx_destruct] */

void FUN_105186bf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105186c70; end: 105186c9b; +[SCGrapheneSnapKitIwvMetric snapKitIwvWorkflow] */

void FUN_105186c70(void)

{
  _objc_alloc(PTR_PTR_1126b57f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105186c9c; end: 105186d3b; -[SCGrapheneSnapKitIwvMetric description] */

void FUN_105186c9c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc91f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc91f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e69d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105186d3c; end: 105186e7f; -[SCGrapheneRegistry snapKitIwvGraphene] */

void FUN_105186d3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105186dc4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b94b0 != -1) {
    func_0x00010002a2fc(0x1136b94b0,&puStack_48);
  }
  uVar1 = uRam00000001136b94a8;
  _objc_retain(uRam00000001136b94a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105186e80; end: 105186f43; -[SCEditDisplayNameScope initWithUIContainer:config:delegate:] */

undefined1 *
FUN_105186e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e69e0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105186f44; end: 105186f4b; -[SCEditDisplayNameScope uiContainer] */

undefined8 FUN_105186f44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105186f4c; end: 105186f53; -[SCEditDisplayNameScope editDisplayNameConfig] */

undefined8 FUN_105186f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105186f54; end: 105186f6b; -[SCEditDisplayNameScope delegate] */

void FUN_105186f54(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105186f6c; end: 105186fa3; -[SCEditDisplayNameScope .cxx_destruct] */

void FUN_105186f6c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105186fa4; end: 10518710f; -[SCEditDisplayNameConfig initWithFirstNamePlaceholder:lastNamePlaceholder:saveButtonText:cancelButtonText:alertTitle:alertDescription:] */

undefined1 *
FUN_105186fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e69e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105187110; end: 105187133; -[SCEditDisplayNameConfig copyWithZone:] */

undefined8 FUN_105187110(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105187134; end: 1051871d7; -[SCEditDisplayNameConfig hash] */

undefined8 * FUN_105187134(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1051872b8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1051872c4;
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
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_1051872c4;
                }
                goto LAB_1051872b8;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1051872c4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1051871d8; end: 1051872df; -[SCEditDisplayNameConfig isEqual:] */

long FUN_1051871d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1051872b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1051872c4;
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
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_1051872c4;
                }
                goto LAB_1051872b8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1051872c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1051872e0; end: 1051872e7; -[SCEditDisplayNameConfig firstNamePlaceholder] */

undefined8 FUN_1051872e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051872e8; end: 1051872ef; -[SCEditDisplayNameConfig lastNamePlaceholder] */

undefined8 FUN_1051872e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051872f0; end: 1051872f7; -[SCEditDisplayNameConfig saveButtonText] */

undefined8 FUN_1051872f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051872f8; end: 1051872ff; -[SCEditDisplayNameConfig cancelButtonText] */

undefined8 FUN_1051872f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105187300; end: 105187307; -[SCEditDisplayNameConfig alertTitle] */

undefined8 FUN_105187300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105187308; end: 10518730f; -[SCEditDisplayNameConfig alertDescription] */

undefined8 FUN_105187308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105187310; end: 10518736f; -[SCEditDisplayNameConfig .cxx_destruct] */

void FUN_105187310(long param_1)

{
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



/* Entry: 105187370; end: 1051873e3; -[SCSnapKitDataCoordinator initWithDocObjectContext:] */

undefined1 * FUN_105187370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e69f0;
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



/* Entry: 1051873e4; end: 1051873ef; -[SCSnapKitDataCoordinator fetchIdentityWebViewAuthorizationStateForAppId:] */

void FUN_1051873e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b5800);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar2);
  }
  puVar3 = &uStack_111;
  FUN_105187a20();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_3);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar4 = &uStack_a0;
  uStack_158 = param_3;
  puStack_d8 = puVar3;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar4,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar5 = puVar4;
  func_0x00010bfb1920(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051873f0; end: 10518748b; -[SCSnapKitDataCoordinator setIdentityWebViewAppAuthorizationState:completion:] */

void FUN_1051873f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10518748c;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,0,param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10518748c; end: 10518749b;  */

void FUN_10518748c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  puVar1 = PTR_PTR_1126b5848;
  FUN_105188a50(PTR_PTR_1126b5848,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10518749c; end: 105187537; -[SCSnapKitDataCoordinator refreshLastAuthorizedForIdentityWebViewAppAuthorizationState:completion:] */

void FUN_10518749c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105187538;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,0,param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105187538; end: 105187547;  */

void FUN_105187538(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain();
  _objc_retain(uVar6);
  uVar1 = uVar6;
  func_0x00010bf07940(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_105187554(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b5848;
    FUN_105188eec(PTR_PTR_1126b5848,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    FUN_1051897ec(auStack_58,uVar6);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    auStack_58[0] = 0;
    uStack_48 = param_1;
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b5848;
    puVar5 = auStack_58;
    FUN_105189878(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_105188a50(puVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c25ed40(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uStack_50);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 105187548; end: 105187553; -[SCSnapKitDataCoordinator .cxx_destruct] */

void FUN_105187548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105187554; end: 1051877af;  */

void FUN_105187554(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b5800);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_105187a20();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051877b0; end: 10518783b;  */

void FUN_1051877b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b5848;
  FUN_105188a50(PTR_PTR_1126b5848,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518783c; end: 105187a1f;  */

void FUN_10518783c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf07940(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  FUN_105187554(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b5848;
    FUN_105188eec(PTR_PTR_1126b5848,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    FUN_1051897ec(auStack_58,param_3);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    auStack_58[0] = 0;
    uStack_48 = param_1;
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b5848;
    puVar5 = auStack_58;
    FUN_105189878(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_105188a50(puVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uStack_50);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105187a20; end: 105187a83;  */

undefined ** FUN_105187a20(void)

{
  int iVar1;
  
  if ((bRam0000000113818118 & 1) == 0) {
    iVar1 = 0x13818118;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c6620,0x100000000);
      ___cxa_guard_release(0x113818118);
    }
  }
  return &PTR_PTR_1130c6620;
}



/* Entry: 105187a84; end: 105187b0b;  */

void FUN_105187a84(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105187b0c; end: 105187b97;  */

void FUN_105187b0c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf07940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf07940(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105187b98; end: 105187c07;  */

undefined8 * FUN_105187b98(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11086d7d0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105187c08; end: 1051882c3;  */

void FUN_105187c08(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105188268;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105188288;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105188288;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001051881fc:
                    /* WARNING: Could not recover jumptable at 0x000105188220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001051881fc;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x000105188288;
    }
    goto code_r0x00010518827c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x00010518827c;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x000105188288;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105188288;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105188298;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105188268:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x00010518827c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105188288:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105188298:
  return;
}



/* Entry: 1051882c4; end: 1051883f7;  */

void FUN_1051882c4(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar4 = *(undefined8 **)(param_1 + 0x48); puVar4 != puVar1; puVar4 = puVar4 + 1) {
        uVar5 = *puVar4;
        *param_3 = *param_3 + 1;
        _sqlite3_bind_double(uVar5,param_2);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      *param_3 = *param_3 + 1;
      _sqlite3_bind_double(*(undefined8 *)(param_1 + 0x30),param_2);
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001051883ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1051883f8; end: 105188553;  */

double FUN_1051883f8(double param_1,long param_2,long param_3,long param_4,byte *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  double dVar6;
  double dStack_68;
  double dStack_60;
  byte bStack_52;
  byte bStack_51;
  
  _objc_retain(param_4);
  iVar4 = *(int *)(param_2 + 8);
  dVar6 = 0.0;
  if (iVar4 < 0xe) {
    if (iVar4 - 1U < 2) {
      *param_5 = 0;
      goto LAB_105188528;
    }
    if (iVar4 - 0xcU < 2) goto LAB_105188528;
  }
  else {
    if (iVar4 - 0xfU < 2) {
      *param_5 = 0;
      dVar6 = *(double *)(param_2 + 0x30);
      goto LAB_105188528;
    }
    if (iVar4 == 0xe) {
      lVar1 = 0x28;
      lVar2 = param_4;
      if (param_3 != 0) {
        lVar1 = 0x20;
        lVar2 = param_3;
      }
      (**(code **)(param_2 + lVar1))(lVar2,param_5);
      dVar6 = param_1;
      goto LAB_105188528;
    }
  }
  if (iVar4 - 6U < 6) {
    plVar5 = *(long **)(param_2 + 0x38);
    plVar3 = *(long **)(param_2 + 0x40);
    (**(code **)(*plVar5 + 0x28))(plVar5,param_3,param_4,&bStack_51);
    dStack_60 = param_1;
    (**(code **)(*plVar3 + 0x28))(plVar3,param_3,param_4,&bStack_52);
    *param_5 = (bStack_51 | bStack_52) & 1;
    dStack_68 = param_1;
    FUN_105188554(plVar5,&dStack_60,&dStack_68,iVar4,0);
    dVar6 = (double)((ulong)plVar5 & 0xffffffff);
  }
LAB_105188528:
  _objc_release(param_4);
  return dVar6;
}



/* Entry: 105188554; end: 105188607;  */

bool FUN_105188554(undefined8 param_1,double *param_2,double *param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_4 < 9) {
    if (param_4 == 6) {
      return *param_2 < *param_3;
    }
    if (param_4 == 7) {
      return *param_2 <= *param_3;
    }
    if (param_4 == 8) {
      return *param_3 < *param_2;
    }
  }
  else {
    if (param_4 == 9) {
      return *param_3 <= *param_2;
    }
    if (param_4 == 10) {
      bVar1 = *param_2 == *param_3;
    }
    else if (param_4 == 0xb) {
      return *param_2 != *param_3;
    }
  }
  return bVar1;
}



/* Entry: 105188608; end: 10518879b;  */

undefined8 * FUN_105188608(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_11086d7d0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10518879c; end: 105188833;  */

undefined8 * FUN_10518879c(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_11086d7d0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_105188834(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105188834; end: 1051888ab;  */

void FUN_105188834(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1051888ac(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1051888ac; end: 1051888e7;  */

undefined1  [16] FUN_1051888ac(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_1051888fc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = plVar1;
    return auVar3;
  }
  FUN_1051888e8();
  func_0x000104bd47e8("vector");
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104bd35f4();
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = "snapkit__identitywebviewappauthorizationstate_draft_1";
  return auVar5;
}



/* Entry: 1051888e8; end: 1051888fb;  */

undefined1  [16] FUN_1051888e8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x000104bd47e8("vector");
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = "snapkit__identitywebviewappauthorizationstate_draft_1";
  return auVar3;
}



/* Entry: 1051888fc; end: 10518892f;  */

undefined1  [16] FUN_1051888fc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = "snapkit__identitywebviewappauthorizationstate_draft_1";
  return auVar3;
}



/* Entry: 105188930; end: 10518893b; +[SCSnapKitIdentityWebViewAppAuthorizationState table] */

char * FUN_105188930(void)

{
  return "snapkit__identitywebviewappauthorizationstate_draft_1";
}



/* Entry: 10518893c; end: 105188a2b; +[SCSnapKitIdentityWebViewAppAuthorizationState immutableObjectParse:bufferSize:] */

void FUN_10518893c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126b5800;
  _objc_alloc(PTR_PTR_1126b5800);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
    uVar8 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    uVar8 = 0;
    if ((6 < uVar3) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5)), uVar6 != 0)) {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
  }
  func_0x00010bff39e0(uVar8,puVar4,param_2,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105188a2c; end: 105188a4f; +[SCSnapKitIdentityWebViewAppAuthorizationState objectClassFunctionPointer] */

undefined1  [16] FUN_105188a2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105188a48;
  auVar1._0_8_ = 0x105188a40;
  return auVar1;
}



/* Entry: 105188a50; end: 105188b23;  */

void FUN_105188a50(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar2 = PTR_PTR_1126b5848;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010bf07940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0883c0(param_2);
    FUN_105188b24(puVar2,0xffffffffffffffff,lVar1);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105188b24; end: 105188bcf;  */

undefined1 * FUN_105188b24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126e69f8;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 105188bd0; end: 105188eeb;  */

void FUN_105188bd0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar4 < 0) {
      puVar4 = param_1;
      func_0x00010bf07940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010bf636c0();
        _objc_release(puVar4);
        func_0x0001001b9e08(puVar1,
                            "SELECT rowid, p FROM snapkit__identitywebviewappauthorizationstate_draft_1 WHERE applicationId=?1 LIMIT 1"
                           );
        puVar4 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_105188e58;
        puVar4 = param_1;
        func_0x00010bf07940(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar4);
        _objc_release(puVar4);
        puVar4 = puVar1;
        _sqlite3_step();
        if ((int)puVar4 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126b5800);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar4);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_105188e50;
          puVar4 = PTR_PTR_1126b5848;
          _objc_alloc(PTR_PTR_1126b5848);
          puVar1 = puVar3;
          func_0x00010bf07940(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0883c0(puVar3);
          FUN_105188b24(puVar4,puVar2,puVar1);
          param_1 = puVar3;
          goto LAB_105188ca8;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b5800);
      puVar3 = puVar4;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126b5848;
        _objc_alloc(PTR_PTR_1126b5848);
        puVar1 = puVar3;
        func_0x00010bf07940(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0883c0(puVar3);
        FUN_105188b24(puVar4,puVar2,puVar1);
        param_1 = puVar3;
LAB_105188ca8:
        _objc_release(puVar1);
        goto LAB_105188e58;
      }
LAB_105188e50:
      param_1 = (undefined *)0x0;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_105188e58:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105188eec; end: 105188f5f;  */

void FUN_105188eec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105188bd0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105188f60; end: 105188fc3;  */

void FUN_105188f60(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5800;
    _objc_alloc(PTR_PTR_1126b5800);
    func_0x00010bff39e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105188fc4; end: 105188fcf; -[SCSnapKitIdentityWebViewAppAuthorizationStateChangeRequest .cxx_destruct] */

void FUN_105188fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105188fd0; end: 105188fdb; -[SCSnapKitIdentityWebViewAppAuthorizationStateChangeRequest table] */

char * FUN_105188fd0(void)

{
  return "snapkit__identitywebviewappauthorizationstate_draft_1";
}



/* Entry: 105188fdc; end: 105189023; -[SCSnapKitIdentityWebViewAppAuthorizationStateChangeRequest createTableWithSQLite:] */

void FUN_105188fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd90285,0xb1,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105189024; end: 1051893ab; -[SCSnapKitIdentityWebViewAppAuthorizationStateChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105189024(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_105188f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1051893ac(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO snapkit__identitywebviewappauthorizationstate_draft_1 (p, applicationId) VALUES (?1, ?2)"
                       );
    if (lVar6 == 0) goto LAB_105189348;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105189348;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b5800);
    func_0x00010c21c9a0(puVar7);
LAB_105189330:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,
                            "DELETE FROM snapkit__identitywebviewappauthorizationstate_draft_1 WHERE rowid=?1"
                           );
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b5800);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105189354;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105189354;
    }
    FUN_105188f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1051893ac(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE snapkit__identitywebviewappauthorizationstate_draft_1 SET p=?1, applicationId=?3 WHERE rowid=?2 LIMIT 1"
                       );
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b5800);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105189330;
      }
    }
LAB_105189348:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105189354:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1051893ac; end: 105189583;  */

ulong FUN_1051893ac(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010bf07940();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1051894ac;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_2,pcVar5,pcVar6);
    goto LAB_1051894ac;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_10518946c;
    uVar9 = 0;
  }
  else {
LAB_10518946c:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_2,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_1051894ac:
  _objc_release(pcVar4);
  func_0x00010c0883c0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,6);
  func_0x0001001ce2e4(param_2,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105189584; end: 105189623; -[SCSnapKitIdentityWebViewAppAuthorizationState initWithApplicationId:lastAuthorizedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105189584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e6a00;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e404);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e404) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e408) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105189624; end: 105189647; -[SCSnapKitIdentityWebViewAppAuthorizationState copyWithZone:] */

undefined8 FUN_105189624(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105189648; end: 1051896e3; -[SCSnapKitIdentityWebViewAppAuthorizationState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105189648(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271e404);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + _DAT_11271e408) + *(ulong *)(param_1 + _DAT_11271e408) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105189790:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10518979c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar7 = *(double *)((long)puVar3 + (long)_DAT_11271e408);
      dVar8 = *(double *)((long)param_3 + (long)_DAT_11271e408);
      dVar9 = ABS(dVar7 - dVar8);
      dVar7 = ABS(dVar7 + dVar8) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar7))) {
        bVar1 = dVar9 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11271e404);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11271e404)) {
          func_0x00010c071ae0();
          goto LAB_10518979c;
        }
        goto LAB_105189790;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10518979c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1051896e4; end: 1051897b7; -[SCSnapKitIdentityWebViewAppAuthorizationState isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1051896e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105189790:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10518979c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11271e408);
      dVar6 = *(double *)(param_3 + (long)_DAT_11271e408);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11271e404);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11271e404)) {
          func_0x00010c071ae0();
          goto LAB_10518979c;
        }
        goto LAB_105189790;
      }
    }
    lVar4 = 0;
  }
LAB_10518979c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1051897b8; end: 1051897c7; -[SCSnapKitIdentityWebViewAppAuthorizationState applicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051897b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e404);
}


