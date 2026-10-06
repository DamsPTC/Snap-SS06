/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e337dc; end: 106e337e3; -[SCMemoriesSnapClustererOption isSnapsTab] */

undefined1 FUN_106e337dc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e337e4; end: 106e33813; -[SCMemoriesSnapClustererOption .cxx_destruct] */

void FUN_106e337e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e33814; end: 106e33817; -[SCMemoriesSnapGroupViewModel diffIdentifier] */

void FUN_106e33814(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 106e33818; end: 106e3381f; -[SCMemoriesSnapGroupViewModel isEqualToDiffableObject:] */

undefined8 FUN_106e33818(void)

{
  return 1;
}



/* Entry: 106e33820; end: 106e343a3; -[SCMemoriesSnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e33820(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar14;
  undefined *unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  long lVar17;
  undefined8 *unaff_x26;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
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
  puStack_108 = PTR_PTR_1126f7168;
  puVar12 = &uStack_110;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar12,PTR_s_initWithFrame__1125e2948);
  lVar15 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    puVar1 = puVar12;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar12 + (long)_DAT_11275f550);
    *(undefined8 **)((long)puVar12 + (long)_DAT_11275f550) = puVar1;
    _objc_release(uVar13);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar15 = (long)_DAT_11275f554;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    *(undefined **)((long)puVar12 + lVar15) = puVar2;
    _objc_release(uVar13);
    _objc_release(puVar1);
    func_0x00010c182220(*(undefined8 *)((long)puVar12 + lVar15));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar12 + lVar15));
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar12 + lVar15));
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar15));
    puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    lStack_120 = uVar13;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar13;
    uVar3 = *(undefined8 *)((long)puVar12 + lVar15);
    lStack_130 = uVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    uStack_140 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar3;
    uVar4 = *(undefined8 *)((long)puVar12 + lVar15);
    uStack_158 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_150);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uStack_158);
    _objc_release(puStack_148);
    _objc_release(puStack_138);
    _objc_release(uStack_140);
    _objc_release(lStack_130);
    _objc_release(puStack_128);
    _objc_release(puStack_118);
    _objc_release(lStack_120);
    puVar2 = PTR_PTR_1126d22b8;
    _objc_alloc();
    uVar18 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar15 = (long)_DAT_11275f564;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    *(undefined **)((long)puVar12 + lVar15) = puVar2;
    _objc_release(uVar13);
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar15));
    puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    lStack_120 = uVar13;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar13;
    uVar3 = *(undefined8 *)((long)puVar12 + lVar15);
    lStack_130 = uVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    uStack_140 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar3;
    uVar4 = *(undefined8 *)((long)puVar12 + lVar15);
    uStack_158 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_150);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uStack_158);
    _objc_release(puStack_148);
    _objc_release(puStack_138);
    _objc_release(uStack_140);
    _objc_release(lStack_130);
    _objc_release(puStack_128);
    _objc_release(puStack_118);
    _objc_release(lStack_120);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar15 = (long)_DAT_11275f568;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    *(undefined **)((long)puVar12 + lVar15) = puVar2;
    _objc_release(uVar13);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar12 + lVar15));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar12 + lVar15));
    _objc_release(puVar2);
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08c0e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08c0e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4000000000000000);
    _objc_release(uVar13);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar13);
    _objc_release(puVar2);
    uVar13 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08c0e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f19999a);
    _objc_release(uVar13);
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar15));
    puStack_118 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar3;
    uVar6 = *(undefined8 *)((long)puVar12 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar6;
    func_0x00010bf493c0(0xc008000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_118);
    _objc_release(puVar2);
    _objc_release(uVar13);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar14 = (long)_DAT_11275f56c;
    uVar13 = *(undefined8 *)((long)puVar12 + lVar14);
    *(undefined **)((long)puVar12 + lVar14) = puVar2;
    _objc_release(uVar13);
    _objc_release(puVar9);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar12 + lVar14));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar12 + lVar14));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar12 + lVar14));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar12 + lVar14));
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar14));
    puStack_138 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar15 = *(long *)((long)puVar12 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    lStack_120 = lVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar1;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_100 = lVar15;
    unaff_x24 = *(undefined8 *)((long)puVar12 + lVar14);
    lStack_130 = lVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x26;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = unaff_x24;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar13;
    unaff_x25 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = unaff_x25;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = unaff_x20;
    unaff_x21 = *(undefined8 *)((long)puVar12 + lVar14);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x23;
    func_0x00010beef8c0(puStack_138);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(unaff_x25);
    _objc_release(uVar13);
    _objc_release(puVar1);
    _objc_release(unaff_x26);
    _objc_release(unaff_x24);
    _objc_release(lStack_130);
    _objc_release(puStack_128);
    _objc_release(puStack_118);
    lVar15 = lStack_120;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar1 = &uStack_280;
  pcStack_168 = FUN_106e343a4;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b0 = unaff_x26;
  uStack_1a8 = unaff_x25;
  uStack_1a0 = unaff_x24;
  puStack_198 = unaff_x23;
  uStack_190 = unaff_x22;
  uStack_188 = unaff_x21;
  uStack_180 = unaff_x20;
  puStack_178 = puVar12;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar14 = *(long *)(lVar15 + _DAT_11275f570);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf52a60();
  puVar12 = (undefined8 *)0x0;
  if (lVar15 != 0) {
    lVar16 = *plStack_270;
    do {
      lVar17 = 0;
      do {
        if (*plStack_270 != lVar16) {
          _objc_enumerationMutation(lVar14);
        }
        uVar10 = *(ulong *)(lStack_278 + lVar17 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        puVar1 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(uVar10);
        if ((uVar11 & 1) != 0) {
          puVar12 = (undefined8 *)0x1;
          goto LAB_106e344a4;
        }
        lVar17 = lVar17 + 1;
      } while (lVar15 != lVar17);
      lVar15 = lVar14;
      puVar1 = &uStack_280;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
    puVar12 = (undefined8 *)0x0;
  }
LAB_106e344a4:
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  puVar12 = *(undefined8 **)(param_3 + _DAT_11275f574);
  *(undefined8 **)(param_3 + _DAT_11275f574) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return puVar12;
}



/* Entry: 106e343a4; end: 106e344ef; -[SCMemoriesSnapCell containsSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e343a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + _DAT_11275f570);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(ulong *)(lStack_118 + lVar8 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          uVar5 = 1;
          goto LAB_106e344a4;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_106e344a4:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  uVar5 = *(undefined8 *)(param_3 + _DAT_11275f574);
  *(undefined8 **)(param_3 + _DAT_11275f574) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return uVar5;
}



/* Entry: 106e344f0; end: 106e34527; -[SCMemoriesSnapCell setClusterTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e344f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f574);
  *(undefined8 *)(param_1 + _DAT_11275f574) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e34528; end: 106e34557; -[SCMemoriesSnapCell getClusterTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e34528(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f574);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e34558; end: 106e345d3; -[SCMemoriesSnapCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e34558(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dbc0(*(undefined8 *)(param_1 + _DAT_11275f578),param_2,
                      *(undefined8 *)(param_1 + _DAT_11275f550));
  lVar2 = (long)_DAT_11275f57c;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010be93900(param_1);
  puStack_28 = PTR_PTR_1126f7168;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e345d4; end: 106e347e7; -[SCMemoriesSnapCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e345d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f7168;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010c219960(param_1);
  lVar3 = (long)_DAT_11275f550;
  func_0x00010bf2dbc0(*(undefined8 *)(param_1 + _DAT_11275f578));
  lVar1 = param_1;
  func_0x00010be93900();
  if ((*(byte *)(param_1 + _DAT_11275f580) & 1) == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  func_0x00010bddaac0(param_1);
  lVar1 = (long)_DAT_11275f584;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar2);
  lVar1 = (long)_DAT_11275f588;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar2);
  lVar1 = (long)_DAT_11275f58c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar2);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f554));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275f574);
  *(undefined8 *)(param_1 + _DAT_11275f574) = 0;
  _objc_release(uVar2);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275f568));
  lVar1 = (long)_DAT_11275f57c;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar1));
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar2);
  func_0x00010c1facc0(param_1);
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_11275f564));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f558));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f55c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f56c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f590));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f594));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f598));
  *(undefined1 *)(param_1 + _DAT_11275f59c) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275f5a0);
  *(undefined8 *)(param_1 + _DAT_11275f5a0) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_11275f5a4) = 0;
  lVar1 = (long)_DAT_11275f5a8;
  if (*(long *)(param_1 + lVar1) != 0) {
    _dispatch_block_cancel();
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106e347e8; end: 106e34927; -[SCMemoriesSnapCell configureWithSyncStatusGenerator:thumbnailGenerator:streamingContentPrefetcher:isRetryThumbnailLoadingEnabled:thumbnailRetryDelayInSeconds:maxThumbnailNilRetryCount:shouldAlwaysClearIdentifier:memoriesMonetizationEnabled:shouldShowQuotaThumbnailStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e347e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = (long)_DAT_11275f578;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_4;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = (long)_DAT_11275f57c;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_3);
  _objc_storeWeak(param_1 + _DAT_11275f5ac,param_5);
  _objc_release(param_5);
  *(undefined1 *)(param_1 + _DAT_11275f5b0) = param_6;
  *(undefined8 *)(param_1 + _DAT_11275f5b4) = param_7;
  *(undefined8 *)(param_1 + _DAT_11275f5b8) = param_8;
  *(undefined1 *)(param_1 + _DAT_11275f580) = (undefined1)param_9;
  *(char *)(param_1 + _DAT_11275f5bc) = param_9._2_1_;
  if ((param_9._1_1_ != '\0') && (func_0x00010bdeae80(param_1), param_9._2_1_ != '\0')) {
    func_0x00010bdefaa0(param_1);
    func_0x00010bdecba0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e34928; end: 106e34953; -[SCMemoriesSnapCell setSelectMode:disableMode:] */

void FUN_106e34928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1facc0();
                    /* WARNING: Could not recover jumptable at 0x00010c18e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisableMode__112641498,param_4);
  return;
}



/* Entry: 106e34954; end: 106e34cd3; -[SCMemoriesSnapCell _requestThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e34954(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  double dStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar9 = (long)_DAT_11275f570;
  uVar2 = *(ulong *)(param_5 + lVar9);
  func_0x00010c06ece0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bdc71a0(param_5);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11275f584));
  func_0x00010bfb68e0(param_5);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  param_3 = param_3 * param_1;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0ed100();
  _objc_release(uVar5);
  dStack_b0 = param_3;
  dStack_b8 = param_4 * param_1;
  if (((long)(int)uVar6 - 2U & 0xfffffffffffffffa) != 0) {
    dStack_b0 = param_4 * param_1;
    dStack_b8 = param_3;
  }
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_106e34cd4;
  uStack_80 = 0x106e34ce4;
  uVar6 = *(undefined8 *)(param_5 + lVar9);
  puStack_98 = &uStack_a0;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = uVar6;
  _objc_initWeak(auStack_a8,param_5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106e34cec;
  puStack_d0 = &UNK_1108e46e0;
  _objc_copyWeak(auStack_c0,auStack_a8);
  ppuVar7 = &puStack_e8;
  puStack_c8 = &uStack_a0;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_5 + lVar9);
  func_0x00010c073480();
  if (iVar1 == 0) {
    (*(code *)ppuVar7[2])(ppuVar7);
    if (*(char *)(param_5 + _DAT_11275f5b0) != '\x01') goto LAB_106e34c5c;
    func_0x00010be93900(param_5);
    ppuVar10 = *(undefined ***)(param_5 + _DAT_11275f550);
    _objc_retain(ppuVar10);
    puStack_160 = puVar3;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_106e3527c;
    puStack_148 = &UNK_110947248;
    puVar8 = auStack_128;
    _objc_copyWeak(puVar8,auStack_a8);
    puStack_130 = &uStack_a0;
    ppuStack_140 = ppuVar10;
    _objc_retain(ppuVar7);
    ppuStack_138 = ppuVar7;
    _objc_retain(ppuVar10);
    uVar6 = 0;
    func_0x0001008553e8(0,&puStack_160);
    uVar5 = *(undefined8 *)(param_5 + _DAT_11275f5c0);
    *(undefined8 *)(param_5 + _DAT_11275f5c0) = uVar6;
    _objc_release(uVar5);
    _dispatch_time(0,*(long *)(param_5 + _DAT_11275f5b4) * 1000000000);
    func_0x00010058c530();
    _objc_release(ppuStack_138);
    _objc_release(ppuStack_140);
  }
  else {
    uVar6 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar3;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_106e35188;
    puStack_108 = &UNK_1108493b0;
    puVar8 = auStack_f0;
    _objc_copyWeak(puVar8,auStack_a8);
    puStack_f8 = &uStack_a0;
    _objc_retain(ppuVar7);
    ppuStack_100 = ppuVar7;
    func_0x00010007380c(uVar6,&puStack_120);
    _objc_release(uVar6);
    ppuVar10 = ppuStack_100;
  }
  _objc_release(ppuVar10);
  _objc_destroyWeak(puVar8);
LAB_106e34c5c:
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  return;
}



/* Entry: 106e34cd4; end: 106e34ceb;  */

void FUN_106e34cd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e34cec; end: 106e34ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e34cec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11275f550;
    uVar4 = *(ulong *)(lVar1 + lVar5);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      func_0x00010bf2dbc0(*(undefined8 *)(lVar1 + _DAT_11275f578));
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + lVar5);
      *(undefined8 *)(lVar1 + lVar5) = uVar2;
      _objc_release(uVar3);
    }
    uVar2 = *(undefined8 *)(lVar1 + lVar5);
    _objc_retain(uVar2);
    lVar5 = *(long *)(lVar1 + _DAT_11275f554);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010beb6160(lVar1);
    }
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11275f578);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c136ae0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106e34ec8; end: 106e35113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e34ec8(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0720c0();
      if (iVar1 != 0) {
        if (param_2 == 0) {
          func_0x00010bddaac0(lVar2);
          func_0x00010bfe6ac0(*(undefined8 *)(lVar2 + _DAT_11275f554));
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
          func_0x00010c23ff80(uVar4);
          _objc_retainAutoreleasedReturnValue();
          if (*(char *)(lVar2 + _DAT_11275f5b0) == '\x01') {
            uVar5 = *(ulong *)(lVar2 + _DAT_11275f5a4);
            if (uVar5 < *(ulong *)(lVar2 + _DAT_11275f5b8)) {
              *(ulong *)(lVar2 + _DAT_11275f5a4) = uVar5 + 1;
              func_0x00010be93900(lVar2);
              _objc_initWeak(auStack_58,lVar2);
              uVar3 = 0;
              _dispatch_time(0,5000000000);
              puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_80 = 0xc2000000;
              pcStack_78 = FUN_106e35114;
              puStack_70 = &UNK_110841fb0;
              _objc_copyWeak(auStack_60,auStack_58);
              uVar7 = *(undefined8 *)(param_1 + 0x20);
              _objc_retain(uVar7);
              uStack_68 = uVar7;
              func_0x00010058c530(uVar3,PTR___dispatch_main_q_11034be20,&puStack_88);
              _objc_release(uStack_68);
              _objc_destroyWeak(auStack_60);
              _objc_destroyWeak(auStack_58);
            }
          }
          _objc_release(uVar4);
        }
        else {
          lVar6 = (long)_DAT_11275f554;
          func_0x00010bfe6ac0(*(undefined8 *)(lVar2 + lVar6));
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x00010c23d0a0(param_2);
          func_0x00010bedadc0(lVar2);
          func_0x00010be93900(lVar2);
          func_0x00010c1a9f00(*(undefined8 *)(lVar2 + lVar6));
          func_0x00010c1cbe20(lVar2);
          func_0x00010c1cbd40(lVar2);
        }
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106e35114; end: 106e35187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e35114(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_11275f554);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)(lVar1 + _DAT_11275f550));
      if ((int)uVar3 != 0) {
        func_0x00010be91a00(lVar1);
      }
    }
    else {
      _objc_release();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e35188; end: 106e3526f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e35188(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11275f578);
    func_0x00010c2778a0(uVar2,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106e35270;
    puStack_40 = &UNK_110849530;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_58);
    _objc_release(uVar3);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106e35270; end: 106e3527b;  */

void FUN_106e35270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e35278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106e3527c; end: 106e35353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3527c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11275f5c0);
    *(undefined8 *)(lVar1 + _DAT_11275f5c0) = 0;
    _objc_release(uVar2);
    lVar3 = *(long *)(lVar1 + _DAT_11275f554);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = (long)_DAT_11275f550;
      func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(lVar1 + lVar3));
      if ((int)uVar2 != 0) {
        if ((*(byte *)(lVar1 + _DAT_11275f5b0) & 1) == 0) {
          func_0x00010bf2dbc0(*(undefined8 *)(lVar1 + _DAT_11275f578),param_2,
                              *(undefined8 *)(param_1 + 0x20));
        }
        if (*(char *)(lVar1 + _DAT_11275f580) == '\x01') {
          uVar2 = *(undefined8 *)(lVar1 + lVar3);
          *(undefined8 *)(lVar1 + lVar3) = 0;
          _objc_release(uVar2);
        }
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
      }
    }
    else {
      _objc_release();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e35354; end: 106e3550b; -[SCMemoriesSnapCell _configureSyncStatusGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e35354(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11275f57c;
  lVar1 = *(long *)(param_2 + lVar4);
  func_0x00010c2666e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar5 == 0) {
    lVar5 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c2666e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar5);
    _objc_release(uVar2);
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c2666e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1 + -18.0 + -6.0,0x4018000000000000,0x4032000000000000,
                        0x4032000000000000);
    _objc_release(uVar2);
    _objc_release(lVar5);
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c2666e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d4a0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    lVar5 = (long)_DAT_11275f570;
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c113000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289f80(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010bf97060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285900(uVar3);
    _objc_release(uVar2);
    func_0x00010c1facc0(*(undefined8 *)(param_2 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar4),PTR_s_startGeneratingUpdates_112671590);
  return;
}



/* Entry: 106e3550c; end: 106e356e7; -[SCMemoriesSnapCell _startLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3550c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11275f58c;
  lVar1 = *(long *)(param_1 + lVar11);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar11));
    lVar1 = (long)_DAT_11275f554;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf34860(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf348e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar11);
  }
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + _DAT_11275f58c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106e356e8; end: 106e356f7; -[SCMemoriesSnapCell _stopLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e356e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f58c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106e356f8; end: 106e3574b; -[SCMemoriesSnapCell _shouldShowLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e356f8(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11275f570);
  func_0x00010c06ece0();
  if (iVar1 == 0) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopLoading_11258e610);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoading_11258daa8);
  return;
}



/* Entry: 106e3574c; end: 106e3584b; -[SCMemoriesSnapCell _updateLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3574c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bddaac0();
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106e3584c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275f5c8);
  *(undefined8 *)(param_1 + _DAT_11275f5c8) = uVar1;
  _objc_release(uVar2);
  if (param_3 == 0) {
    _dispatch_time(0,3000000000);
    func_0x00010058c530();
  }
  else {
    func_0x00010beb6160(param_1);
  }
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e3584c; end: 106e35883;  */

void FUN_106e3584c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb6160(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e35884; end: 106e358c7; -[SCMemoriesSnapCell _cancelMiniThumbnailBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e35884(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f5c8;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e358c8; end: 106e35957; -[SCMemoriesSnapCell _updateAtRiskIconWithIconType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e358c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4032000000000000,0x4032000000000000,puVar2,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f590),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e35958; end: 106e35bf3; -[SCMemoriesSnapCell _createAtRiskIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e35958(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11275f590;
  puVar1 = param_1;
  if (*(long *)(param_1 + lVar20) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar19 = *(undefined8 *)(param_1 + lVar20);
    *(undefined **)(param_1 + lVar20) = puVar1;
    _objc_release(uVar19);
    func_0x00010bed3360(param_1);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar20));
    puVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
    puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = *(undefined **)(param_1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar5;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar11;
    func_0x00010beef8c0(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar19);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11275f594;
  puVar12 = puVar1;
  if (*(long *)(puVar1 + lVar20) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar12 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4032000000000000,0x4032000000000000,puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar19 = *(undefined8 *)(puVar1 + lVar20);
    *(undefined **)(puVar1 + lVar20) = puVar2;
    _objc_release(uVar19);
    _objc_release(puVar12);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)(puVar1 + lVar20));
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar20));
    puVar12 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar12);
    func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar20));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = *(undefined **)(puVar1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar5;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar1;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar19);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11275f598;
  puVar1 = puVar12;
  if (*(long *)(puVar12 + lVar20) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar19 = *(undefined8 *)(puVar12 + lVar20);
    *(undefined **)(puVar12 + lVar20) = puVar1;
    _objc_release(uVar19);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(puVar12 + lVar20));
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar19 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar19);
    func_0x00010c1a7f60(*(undefined8 *)(puVar12 + lVar20));
    puVar1 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar20));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar13;
    func_0x00010bf493c0(0xc008000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar19);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar13);
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar21 = (long)_DAT_11275f5cc;
    uVar19 = *(undefined8 *)(puVar12 + lVar21);
    *(undefined **)(puVar12 + lVar21) = puVar1;
    _objc_release(uVar19);
    func_0x00010c21ad00(*(undefined8 *)(puVar12 + lVar21));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar12 + lVar21));
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)(puVar12 + lVar20));
    func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar21));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = *(undefined **)(puVar12 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar12 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar12 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar12 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar12;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar13);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar19);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11275f584;
  puVar12 = puVar1;
  if (*(long *)(puVar1 + lVar20) == 0) {
    puVar12 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar19 = *(undefined8 *)(puVar1 + lVar20);
    *(undefined **)(puVar1 + lVar20) = puVar12;
    _objc_release(uVar19);
    puVar12 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar12);
    func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar20));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = *(undefined **)(puVar1 + lVar20);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar1;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar19);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined *)0x2) {
    puVar1 = puVar12;
    FUN_106e3958c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != (undefined *)0x1) {
      puVar1 = (undefined *)0x0;
      goto LAB_106e368b0;
    }
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((puVar1 != (undefined *)0x0) &&
     (lVar20 = (long)_DAT_11275f588, *(long *)(puVar12 + lVar20) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar19 = *(undefined8 *)(puVar12 + lVar20);
    *(undefined **)(puVar12 + lVar20) = puVar2;
    _objc_release(uVar19);
    puVar2 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar20));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar14;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar12 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(uVar19);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar8);
  }
LAB_106e368b0:
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e35bf4; end: 106e35eeb; -[SCMemoriesSnapCell _createLockedIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e35bf4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_11275f594;
  puVar2 = param_1;
  if (*(long *)(param_1 + lVar21) == 0) {
    puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR_PTR_1126b0c40;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4032000000000000,0x4032000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    *(undefined **)(param_1 + lVar21) = puVar13;
    _objc_release(uVar19);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar21));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar21));
    puVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
    puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = *(undefined **)(param_1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar5;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar11;
    func_0x00010beef8c0(puVar13);
    _objc_release(puVar11);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar19);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_11275f598;
  puVar13 = puVar2;
  if (*(long *)(puVar2 + lVar21) == 0) {
    puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar19 = *(undefined8 *)(puVar2 + lVar21);
    *(undefined **)(puVar2 + lVar21) = puVar13;
    _objc_release(uVar19);
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(puVar2 + lVar21));
    _objc_release(puVar1);
    _objc_release(puVar13);
    uVar19 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar19);
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar21));
    puVar13 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar13);
    func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar21));
    puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar12;
    func_0x00010bf493c0(0xc008000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar13);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar19);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(uVar12);
    puVar13 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar20 = (long)_DAT_11275f5cc;
    uVar19 = *(undefined8 *)(puVar2 + lVar20);
    *(undefined **)(puVar2 + lVar20) = puVar13;
    _objc_release(uVar19);
    func_0x00010c21ad00(*(undefined8 *)(puVar2 + lVar20));
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar2 + lVar20));
    _objc_release(puVar13);
    func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar21));
    func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar20));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar13 = *(undefined **)(puVar2 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar2 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar2 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar2 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar16;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar12);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar19);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_11275f584;
  puVar2 = puVar13;
  if (*(long *)(puVar13 + lVar21) == 0) {
    puVar2 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar19 = *(undefined8 *)(puVar13 + lVar21);
    *(undefined **)(puVar13 + lVar21) = puVar2;
    _objc_release(uVar19);
    puVar2 = puVar13;
    func_0x00010bf4dce0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(puVar13 + lVar21));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = *(undefined **)(puVar13 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar13 + lVar21);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar13 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar13 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar13;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar19);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined *)0x2) {
    puVar13 = puVar2;
    FUN_106e3958c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != (undefined *)0x1) {
      puVar13 = (undefined *)0x0;
      goto LAB_106e368b0;
    }
    puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((puVar13 != (undefined *)0x0) &&
     (lVar21 = (long)_DAT_11275f588, *(long *)(puVar2 + lVar21) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar19 = *(undefined8 *)(puVar2 + lVar21);
    *(undefined **)(puVar2 + lVar21) = puVar1;
    _objc_release(uVar19);
    puVar1 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar21));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar14;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar2 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(uVar19);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar8);
  }
LAB_106e368b0:
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e35eec; end: 106e363a7; -[SCMemoriesSnapCell _createDaysLeftBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e35eec(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_11275f598;
  puVar8 = param_1;
  if (*(long *)(param_1 + lVar21) == 0) {
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    *(undefined **)(param_1 + lVar21) = puVar8;
    _objc_release(uVar19);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar8;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar21));
    _objc_release(puVar15);
    _objc_release(puVar8);
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar19);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar21));
    puVar8 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar8);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar1 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar1;
    func_0x00010bf493c0(0xc008000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar19);
    _objc_release(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar20 = (long)_DAT_11275f5cc;
    uVar19 = *(undefined8 *)(param_1 + lVar20);
    *(undefined **)(param_1 + lVar20) = puVar8;
    _objc_release(uVar19);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar20));
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar20));
    _objc_release(puVar8);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = *(undefined **)(param_1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar9;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar13;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar4;
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar19);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_11275f584;
  puVar15 = puVar8;
  if (*(long *)(puVar8 + lVar21) == 0) {
    puVar15 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar19 = *(undefined8 *)(puVar8 + lVar21);
    *(undefined **)(puVar8 + lVar21) = puVar15;
    _objc_release(uVar19);
    puVar15 = puVar8;
    func_0x00010bf4dce0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar15);
    func_0x00010c219b60(*(undefined8 *)(puVar8 + lVar21));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar15 = *(undefined **)(puVar8 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar8 + lVar21);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar8 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar8 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar8;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar19);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar3);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined *)0x2) {
    puVar8 = puVar15;
    FUN_106e3958c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != (undefined *)0x1) {
      puVar8 = (undefined *)0x0;
      goto LAB_106e368b0;
    }
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((puVar8 != (undefined *)0x0) &&
     (lVar21 = (long)_DAT_11275f588, *(long *)(puVar15 + lVar21) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar19 = *(undefined8 *)(puVar15 + lVar21);
    *(undefined **)(puVar15 + lVar21) = puVar2;
    _objc_release(uVar19);
    puVar2 = puVar15;
    func_0x00010bf4dce0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(puVar15 + lVar21));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(puVar15 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar9;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar15 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010bf4dce0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar15 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar11;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar15 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar1);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(puVar16);
    _objc_release(puVar7);
    _objc_release(uVar10);
    _objc_release(uVar19);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar9);
  }
LAB_106e368b0:
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e363a8; end: 106e3661f; -[SCMemoriesSnapCell _addIncompatibleIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e363a8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11275f584;
  puVar1 = param_1;
  if (*(long *)(param_1 + lVar18) == 0) {
    puVar1 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar16 = *(undefined8 *)(param_1 + lVar18);
    *(undefined **)(param_1 + lVar18) = puVar1;
    _objc_release(uVar16);
    puVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = *(undefined **)(param_1 + lVar18);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar12;
    func_0x00010beef8c0(puVar17);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar16);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined *)0x2) {
    puVar17 = puVar1;
    FUN_106e3958c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != (undefined *)0x1) {
      puVar17 = (undefined *)0x0;
      goto LAB_106e368b0;
    }
    puVar17 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((puVar17 != (undefined *)0x0) &&
     (lVar18 = (long)_DAT_11275f588, *(long *)(puVar1 + lVar18) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar16 = *(undefined8 *)(puVar1 + lVar18);
    *(undefined **)(puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar18));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)(puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar8;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar8);
  }
LAB_106e368b0:
  _objc_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e36620; end: 106e368f3; -[SCMemoriesSnapCell _addIconViewWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36620(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 2) {
    puVar16 = param_1;
    FUN_106e3958c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 1) {
      puVar16 = (undefined *)0x0;
      goto LAB_106e368b0;
    }
    puVar16 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e87c38);
    _objc_retainAutoreleasedReturnValue();
  }
  if ((puVar16 != (undefined *)0x0) &&
     (lVar17 = (long)_DAT_11275f588, *(long *)(param_1 + lVar17) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar15 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar1;
    _objc_release(uVar15);
    puVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
LAB_106e368b0:
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e368f4; end: 106e368f7; -[SCMemoriesSnapCell bindViewModel:] */

void FUN_106e368f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 106e368f8; end: 106e36907; -[SCMemoriesSnapCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e368f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f554),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e36908; end: 106e36917; -[SCMemoriesSnapCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f554),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e36918; end: 106e36947; -[SCMemoriesSnapCell transitioningExpandingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36918(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f554);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e36948; end: 106e36957; -[SCMemoriesSnapCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f554),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106e36958; end: 106e36a1f; -[SCMemoriesSnapCell setSelected:selectOverlayImage:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36958(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11275f570;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c06ece0();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + _DAT_11275f5d0) & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c113000(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_5;
      func_0x00010bf4b900(param_5,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      uVar4 = 1;
    }
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + _DAT_11275f564),param_2,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106e36a20; end: 106e36b27; -[SCMemoriesSnapCell setSelectionOrderNumber:orderNumbersBySnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36a20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11275f570;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c06ece0();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + _DAT_11275f5d0) & 1) == 0)) {
    lVar4 = *(long *)(param_1 + lVar4);
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_3;
    if (lVar2 == 0) {
      _objc_retain(param_3);
    }
    else {
      lVar3 = param_4;
      func_0x00010c0e00e0(param_4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = lVar3;
      }
      _objc_retain(lVar4);
      _objc_release(lVar3);
    }
    func_0x00010c1fba00(*(undefined8 *)(param_1 + _DAT_11275f564),param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e36b28; end: 106e36b8b; -[SCMemoriesSnapCell setSelectMode:] */

/* WARNING: Possible PIC construction at 0x000106e36b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e36b70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36b28(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11275f5c4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11275f5c4) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f57c),PTR_s_setSelectMode__11265c558);
  return;
}



/* Entry: 106e36b8c; end: 106e36bfb; -[SCMemoriesSnapCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((uint)*(byte *)(param_1 + _DAT_11275f5d0) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11275f5d0) = (char)param_3;
  if ((uint)param_3 != 0) {
    *(undefined1 *)(param_1 + _DAT_11275f5c4) = 0;
    func_0x00010c1facc0(*(undefined8 *)(param_1 + _DAT_11275f57c),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c18ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f564),PTR_s_setDisabled__112641538,param_3);
  return;
}



/* Entry: 106e36bfc; end: 106e36c0b; -[SCMemoriesSnapCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e36bfc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f5d0);
}



/* Entry: 106e36c0c; end: 106e36cdf; -[SCMemoriesSnapCell animateLongTapForTouchLocation:reverse:] */

void FUN_106e36c0c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uStack_40 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uStack_40 = 0x3fee666666666666;
  }
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e36ce0; end: 106e36d47;  */

void FUN_106e36ce0(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CGAffineTransformMakeScale
              (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(lVar1,param_2,&uStack_80);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106e36d48; end: 106e36dd7; -[SCMemoriesSnapCell interactionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106e36d48(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_11275f570);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_11275f5c4) ^ 1;
  }
  else {
    bVar1 = 3;
  }
  return bVar1;
}



/* Entry: 106e36dd8; end: 106e36e1b; -[SCMemoriesSnapCell _resetRetryThumbnailLoadingIfNecessaryWorkItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36dd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f5c0;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e36e1c; end: 106e36fb7; -[SCMemoriesSnapCell viewIsFullyVisibleOnScreen:inSelectMode:delayForStreamingPrefetchSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36e1c(double param_1,long param_2,undefined8 param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (((param_4 != 0) && (param_5 == 0)) &&
     (lVar7 = (long)_DAT_11275f59c, (*(byte *)(param_2 + lVar7) & 1) == 0)) {
    lVar1 = param_2;
    func_0x00010bf34260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + _DAT_11275f5a0);
    *(long *)(param_2 + _DAT_11275f5a0) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    *(undefined1 *)(param_2 + lVar7) = 1;
    if (param_1 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c107f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_prefetchStreamingContent_11261fa00);
      return;
    }
    _objc_initWeak(auStack_58,param_2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106e36fb8;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    uVar5 = 0;
    func_0x0001008553e8(0,&puStack_80);
    uVar6 = *(undefined8 *)(param_2 + _DAT_11275f5a8);
    *(undefined8 *)(param_2 + _DAT_11275f5a8) = uVar5;
    _objc_release(uVar6);
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    func_0x00010058c530();
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106e36fb8; end: 106e36feb;  */

void FUN_106e36fb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c107f80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e36fec; end: 106e37137; -[SCMemoriesSnapCell prefetchStreamingContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e36fec(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = (long)_DAT_11275f5a0;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(param_1 + lVar6);
    lVar2 = param_1;
    func_0x00010bf34260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar7,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar2);
    if ((int)uVar7 != 0) {
      lVar2 = (long)_DAT_11275f570;
      iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
      func_0x00010c07ffa0();
      if (iVar1 != 0) {
        lVar6 = param_1 + _DAT_11275f5ac;
        _objc_loadWeakRetained(lVar6);
        uVar5 = *(undefined8 *)(param_1 + lVar2);
        func_0x00010c245680(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c108b00(lVar6,param_2,uVar7,PTR___dispatch_main_q_11034be20,
                            &PTR___NSConcreteGlobalBlock_11097ee00);
        _objc_release(uVar7);
        _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 106e37138; end: 106e3713b;  */

void FUN_106e37138(void)

{
  return;
}



/* Entry: 106e3713c; end: 106e37203; +[SCMemoriesSnapCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106e3713c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cfb60;
  _objc_opt_class(PTR_PTR_1126cfb60);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((param_5 == 0) || ((uVar2 & 1) == 0)) {
    func_0x000107e8599c(param_1);
  }
  else {
    dVar3 = (double)(long)((param_1 + 1.0) / 99.0);
    dVar4 = 0.0;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    uVar2 = (ulong)dVar4;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    param_1 = (param_1 - (double)(uVar2 - 1)) / (double)uVar2;
    param_2 = param_1 * 1.6666666666666667;
  }
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106e37204; end: 106e3727f; -[SCMemoriesSnapCell _applyQuotaThumbnailOrLegacyStorageState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37204(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f570);
  func_0x00010c11eb20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11275f594) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdce790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyQuotaThumbnailState__112551380,uVar2)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdce370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyLegacyStorageAtRiskState_112551278);
  return;
}



/* Entry: 106e37280; end: 106e374bf; -[SCMemoriesSnapCell _applyQuotaThumbnailState:] */

/* WARNING: Possible PIC construction at 0x000106e37370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106e3739c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106e37478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e373a0) */
/* WARNING: Removing unreachable block (ram,0x000106e373ac) */
/* WARNING: Removing unreachable block (ram,0x000106e373b8) */
/* WARNING: Removing unreachable block (ram,0x000106e37420) */
/* WARNING: Removing unreachable block (ram,0x000106e3749c) */
/* WARNING: Removing unreachable block (ram,0x000106e37454) */
/* WARNING: Removing unreachable block (ram,0x000106e37374) */
/* WARNING: Removing unreachable block (ram,0x000106e37380) */
/* WARNING: Removing unreachable block (ram,0x000106e37388) */
/* WARNING: Removing unreachable block (ram,0x000106e3747c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37280(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(param_1 + _DAT_11275f570);
  func_0x00010c074da0();
  uVar1 = (uint)uVar3 ^ 1;
  uVar4 = param_3 == 1 & uVar1;
  if (param_3 == 2) {
    uVar4 = uVar1;
  }
  if (uVar4 == 1) {
    bVar2 = *(long *)(param_1 + _DAT_11275f590) != 0;
    if (!bVar2 && (param_3 == 3 && (uVar3 & 1) == 0)) {
      bVar2 = *(long *)(param_1 + _DAT_11275f594) != 0;
    }
    uVar4 = (uint)bVar2;
    func_0x00010bed3360(param_1);
  }
  else if (param_3 == 3 && (uVar3 & 1) == 0) {
    uVar4 = (uint)(*(long *)(param_1 + _DAT_11275f594) != 0);
  }
  else {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f56c),PTR_s_setHidden__1126479f8,uVar1 & 1 | uVar4)
  ;
  return;
}



/* Entry: 106e374c0; end: 106e375f7; -[SCMemoriesSnapCell _applyLegacyStorageAtRiskState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e374c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11275f570;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c07fb80();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c2332a0();
    if (iVar1 != 0) {
      func_0x00010bed3360(param_1,param_2,0xec);
      iVar1 = 0;
      goto LAB_106e3750c;
    }
  }
  iVar1 = 1;
LAB_106e3750c:
  uVar4 = (uint)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c074da0();
  uVar4 = uVar4 ^ 1;
  if ((iVar1 == 0) && ((uVar4 & 1) == 0)) {
    uVar4 = (uint)(*(long *)(param_1 + _DAT_11275f590) != 0);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f56c),param_2,uVar4);
  if (*(long *)(param_1 + _DAT_11275f590) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + _DAT_11275f590),param_2,iVar1);
  }
  if (*(long *)(param_1 + _DAT_11275f594) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + _DAT_11275f594),param_2,1);
  }
  if (*(long *)(param_1 + _DAT_11275f598) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + _DAT_11275f598),param_2,1);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c299de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11275f568;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x00010c299de0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,lVar5 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106e375f8; end: 106e37767; -[SCMemoriesSnapCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e375f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cfb60;
  _objc_opt_class(PTR_PTR_1126cfb60);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar7 = (long)_DAT_11275f570;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar1;
    _objc_release(uVar4);
    *(undefined8 *)(param_1 + _DAT_11275f5a4) = 0;
    if (*(char *)(param_1 + _DAT_11275f5bc) == '\x01') {
      func_0x00010bdce760();
    }
    else {
      func_0x00010bdce360(param_1);
    }
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      func_0x00010bf91bc0(*(undefined8 *)(param_1 + lVar7));
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f558));
    _objc_release(lVar6);
    _objc_release(lVar5);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f55c));
    func_0x00010bfa2460(*(undefined8 *)(param_1 + lVar7));
    func_0x00010bdc70a0(param_1);
    func_0x00010bfa2460(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f588));
    func_0x00010be91a00(param_1);
    func_0x00010bde5c60(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e37768; end: 106e377b7; -[SCMemoriesSnapCell syncStatusGenerator:didUpdateStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37768(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11275f570);
  func_0x00010bfa2460(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f588),PTR_s_setHidden__1126479f8,
             param_4 != 0 || lVar1 == 0);
  return;
}



/* Entry: 106e377b8; end: 106e377c7; -[SCMemoriesSnapCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e377b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f5d4);
}



/* Entry: 106e377c8; end: 106e377d7; -[SCMemoriesSnapCell selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e377c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f5c4);
}



/* Entry: 106e377d8; end: 106e377e7; -[SCMemoriesSnapCell cellViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e377d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f570);
}



/* Entry: 106e377e8; end: 106e37993; -[SCMemoriesSnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e377e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f570,0);
  _objc_storeStrong(param_1 + _DAT_11275f5d4,0);
  _objc_storeStrong(param_1 + _DAT_11275f5c0,0);
  _objc_storeStrong(param_1 + _DAT_11275f578,0);
  _objc_storeStrong(param_1 + _DAT_11275f57c,0);
  _objc_storeStrong(param_1 + _DAT_11275f574,0);
  _objc_storeStrong(param_1 + _DAT_11275f5a8,0);
  _objc_storeStrong(param_1 + _DAT_11275f5c8,0);
  _objc_storeStrong(param_1 + _DAT_11275f550,0);
  _objc_storeStrong(param_1 + _DAT_11275f5a0,0);
  _objc_destroyWeak(param_1 + _DAT_11275f5ac);
  _objc_storeStrong(param_1 + _DAT_11275f560,0);
  _objc_storeStrong(param_1 + _DAT_11275f55c,0);
  _objc_storeStrong(param_1 + _DAT_11275f558,0);
  _objc_storeStrong(param_1 + _DAT_11275f588,0);
  _objc_storeStrong(param_1 + _DAT_11275f5cc,0);
  _objc_storeStrong(param_1 + _DAT_11275f598,0);
  _objc_storeStrong(param_1 + _DAT_11275f594,0);
  _objc_storeStrong(param_1 + _DAT_11275f590,0);
  _objc_storeStrong(param_1 + _DAT_11275f56c,0);
  _objc_storeStrong(param_1 + _DAT_11275f568,0);
  _objc_storeStrong(param_1 + _DAT_11275f58c,0);
  _objc_storeStrong(param_1 + _DAT_11275f584,0);
  _objc_storeStrong(param_1 + _DAT_11275f564,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f554,0);
  return;
}



/* Entry: 106e37994; end: 106e37c53; -[SCMemoriesSnapGroupHeaderCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e37994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f7170;
  puVar9 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar9,PTR_s_initWithFrame__1125e2948);
  lVar2 = 0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126d2c28;
    _objc_alloc();
    func_0x00010c0142a0(param_1,param_2,param_3,param_4);
    lVar11 = (long)_DAT_11275f5d8;
    uVar10 = *(undefined8 *)((long)puVar9 + lVar11);
    *(undefined **)((long)puVar9 + lVar11) = puVar1;
    _objc_release(uVar10);
    func_0x00010befbb60(puVar9);
    func_0x00010c219b60(*(undefined8 *)((long)puVar9 + lVar11));
    puStack_e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = *(long *)((long)puVar9 + lVar11);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    lStack_c0 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_a8 = lVar2;
    uVar4 = *(undefined8 *)((long)puVar9 + lVar11);
    lStack_d0 = lVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    uStack_d8 = uVar4;
    func_0x00010c08de00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar9 + lVar11);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c2793a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar10;
    unaff_x20 = *(undefined8 *)((long)puVar9 + lVar11);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf1ff80(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e0);
    _objc_release(puVar1);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(unaff_x20);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uStack_d8);
    _objc_release(lStack_d0);
    _objc_release(puStack_c8);
    lVar2 = lStack_c0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106e37c54;
  puStack_108 = PTR_PTR_1126f7170;
  lStack_110 = lVar2;
  uStack_100 = unaff_x20;
  puStack_f8 = puVar9;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_prepareForReuse_112620008);
  func_0x00010c1382a0(*(undefined8 *)(lVar2 + _DAT_11275f5d8));
  func_0x00010c1facc0(lVar2);
  puVar9 = *(undefined8 **)(lVar2 + _DAT_11275f5dc);
  *(undefined8 *)(lVar2 + _DAT_11275f5dc) = 0;
  _objc_release(puVar9);
  return puVar9;
}



/* Entry: 106e37c54; end: 106e37cc3; -[SCMemoriesSnapGroupHeaderCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37c54(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f7170;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1382a0(*(undefined8 *)(param_1 + _DAT_11275f5d8));
  func_0x00010c1facc0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f5dc);
  *(undefined8 *)(param_1 + _DAT_11275f5dc) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 106e37cc4; end: 106e37cf3; -[SCMemoriesSnapGroupHeaderCell getClusterTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37cc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f5dc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e37cf4; end: 106e37d47; -[SCMemoriesSnapGroupHeaderCell baseViewDidTapSelect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37cf4(long param_1)

{
  if (*(char *)(param_1 + _DAT_11275f5e0) == '\x01') {
    param_1 = param_1 + _DAT_11275f5e4;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfceb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106e37d48; end: 106e37ddf; -[SCMemoriesSnapGroupHeaderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37d48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c216400(*(undefined8 *)(param_1 + _DAT_11275f5d8));
    lVar5 = (long)_DAT_11275f5dc;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e37de0; end: 106e37de3; -[SCMemoriesSnapGroupHeaderCell bindViewModel:] */

void FUN_106e37de0(void)

{
  return;
}



/* Entry: 106e37de4; end: 106e37e53; -[SCMemoriesSnapGroupHeaderCell setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37de4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275f5e0;
  if (*(byte *)(param_1 + lVar1) == param_3) {
    return;
  }
  if ((param_3 & 1) == 0) {
    func_0x00010c1fadc0(param_1,param_2,0);
  }
  *(char *)(param_1 + lVar1) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1fac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f5d8),PTR_s_setSelectLabelIsHidden__11265c548,1);
  return;
}



/* Entry: 106e37e54; end: 106e37edb; -[SCMemoriesSnapGroupHeaderCell setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37e54(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_11275f5e8) != param_3) &&
     (*(char *)(param_1 + _DAT_11275f5e8) = (char)param_3,
     *(char *)(param_1 + _DAT_11275f5e0) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275f5d8);
    if ((param_3 & 1) == 0) {
      func_0x000108dfd56c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108dfd584();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1faca0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106e37edc; end: 106e37f3b; -[SCMemoriesSnapGroupHeaderCell updateSelectionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37edc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11275f5e0) == '\x01') {
    lVar1 = param_1 + _DAT_11275f5e4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfceae0();
    func_0x00010c1fadc0(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106e37f3c; end: 106e37f4b; -[SCMemoriesSnapGroupHeaderCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e37f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f5ec);
}



/* Entry: 106e37f4c; end: 106e37f5b; -[SCMemoriesSnapGroupHeaderCell selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e37f4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f5e0);
}



/* Entry: 106e37f5c; end: 106e37f6b; -[SCMemoriesSnapGroupHeaderCell selected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e37f5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f5e8);
}



/* Entry: 106e37f6c; end: 106e37f8b; -[SCMemoriesSnapGroupHeaderCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37f6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275f5e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e37f8c; end: 106e37f9f; -[SCMemoriesSnapGroupHeaderCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275f5e4,param_3);
  return;
}



/* Entry: 106e37fa0; end: 106e37ffb; -[SCMemoriesSnapGroupHeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e37fa0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275f5e4);
  _objc_storeStrong(param_1 + _DAT_11275f5ec,0);
  _objc_storeStrong(param_1 + _DAT_11275f5dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f5d8,0);
  return;
}



/* Entry: 106e37ffc; end: 106e382bb; -[SCMemoriesSnapGroupHeaderReusableView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e37ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  long lVar10;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f7178;
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar4 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d2c28;
    _objc_alloc();
    func_0x00010c0142a0(param_1,param_2,param_3,param_4);
    lVar10 = (long)_DAT_11275f5f0;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar10));
    puStack_e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = *(undefined8 **)((long)puVar1 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    puStack_c0 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar3;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar10);
    puStack_d0 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    uStack_d8 = uVar5;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar9;
    unaff_x20 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e0);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(unaff_x20);
    _objc_release(uVar9);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uStack_d8);
    _objc_release(puStack_d0);
    _objc_release(puStack_c8);
    puVar4 = puStack_c0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106e382bc;
  puStack_108 = PTR_PTR_1126f7178;
  puStack_110 = puVar4;
  uStack_100 = unaff_x20;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_110,PTR_s_prepareForReuse_112620008);
  func_0x00010c1382a0(*(undefined8 *)((long)puVar4 + (long)_DAT_11275f5f0));
  func_0x00010c1facc0(puVar4);
  return puVar4;
}



/* Entry: 106e382bc; end: 106e38317; -[SCMemoriesSnapGroupHeaderReusableView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e382bc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f7178;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1382a0(*(undefined8 *)(param_1 + _DAT_11275f5f0));
  func_0x00010c1facc0(param_1);
  return;
}



/* Entry: 106e38318; end: 106e3836b; -[SCMemoriesSnapGroupHeaderReusableView baseViewDidTapSelect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e38318(long param_1)

{
  if (*(char *)(param_1 + _DAT_11275f5f4) == '\x01') {
    param_1 = param_1 + _DAT_11275f5f8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfceb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106e3836c; end: 106e3842b; -[SCMemoriesSnapGroupHeaderReusableView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3836c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cfc30;
  _objc_opt_class(PTR_PTR_1126cfc30);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275f5fc);
  *(ulong *)(param_1 + _DAT_11275f5fc) = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275f5f0);
  uVar3 = uVar1;
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216400(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e3842c; end: 106e3849b; -[SCMemoriesSnapGroupHeaderReusableView setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3842c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275f5f4;
  if (*(byte *)(param_1 + lVar1) == param_3) {
    return;
  }
  if ((param_3 & 1) == 0) {
    func_0x00010c1fadc0(param_1,param_2,0);
  }
  *(char *)(param_1 + lVar1) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1fac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f5f0),PTR_s_setSelectLabelIsHidden__11265c548,
             param_3 ^ 1);
  return;
}



/* Entry: 106e3849c; end: 106e38523; -[SCMemoriesSnapGroupHeaderReusableView setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3849c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_11275f600) != param_3) &&
     (*(char *)(param_1 + _DAT_11275f600) = (char)param_3,
     *(char *)(param_1 + _DAT_11275f5f4) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275f5f0);
    if ((param_3 & 1) == 0) {
      func_0x000108dfd56c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108dfd584();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1faca0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106e38524; end: 106e38583; -[SCMemoriesSnapGroupHeaderReusableView updateSelectionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e38524(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11275f5f4) == '\x01') {
    lVar1 = param_1 + _DAT_11275f5f8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfceae0();
    func_0x00010c1fadc0(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106e38584; end: 106e38593; -[SCMemoriesSnapGroupHeaderReusableView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e38584(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f5fc);
}



/* Entry: 106e38594; end: 106e385a3; -[SCMemoriesSnapGroupHeaderReusableView selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e38594(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f5f4);
}



/* Entry: 106e385a4; end: 106e385b3; -[SCMemoriesSnapGroupHeaderReusableView selected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e385a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f600);
}



/* Entry: 106e385b4; end: 106e385d3; -[SCMemoriesSnapGroupHeaderReusableView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e385b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275f5f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e385d4; end: 106e385e7; -[SCMemoriesSnapGroupHeaderReusableView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e385d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275f5f8,param_3);
  return;
}



/* Entry: 106e385e8; end: 106e38633; -[SCMemoriesSnapGroupHeaderReusableView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e385e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275f5f8);
  _objc_storeStrong(param_1 + _DAT_11275f5fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f5f0,0);
  return;
}



/* Entry: 106e38634; end: 106e38fdb; -[SCMemoriesSnapGroupHeaderView initWithFrame:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e38634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined8 *puVar1;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_7;
  _objc_retain(param_7);
  puStack_118 = PTR_PTR_1126f7180;
  puVar1 = &uStack_120;
  uStack_120 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275f604,param_7);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar25 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar2);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493c0(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_c0 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08e400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_b8 = puVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c1408a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puStack_b0 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
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
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar16 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    lVar24 = (long)_DAT_11275f608;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar16;
    _objc_release(uVar23);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar24));
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release(puVar16);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c1c83a0(0x3fe3b13b13b13b14,*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010befbb60(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c274200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar23;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08e400(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar8);
    _objc_release(uVar21);
    _objc_release(puVar6);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar5);
    _objc_release(uVar18);
    _objc_release(uVar23);
    _objc_release(puVar3);
    _objc_release(uVar17);
    puVar16 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    lVar24 = (long)_DAT_11275f60c;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar16;
    _objc_release(uVar23);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c1c83a0(0x3fe3b13b13b13b14,*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar24));
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release();
    func_0x000108dfd56c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release(puVar16);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010befbb60(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar23;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar21;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e0 = uVar19;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar5);
    _objc_release(uVar19);
    _objc_release(puVar6);
    _objc_release(uVar20);
    _objc_release(uVar21);
    _objc_release(puVar8);
    _objc_release(uVar18);
    _objc_release(uVar23);
    _objc_release(puVar3);
    _objc_release(uVar17);
    puVar22 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar22);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar22;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar22;
    puStack_110 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar22;
    puStack_108 = puVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    puStack_100 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08e400(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar14;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar23);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar12);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puVar16 = puVar3;
    func_0x00010bef9040(puVar22);
    _objc_release(puVar3);
    _objc_release(puVar22);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar16;
  _objc_retain(puVar16);
  func_0x000108dfdc5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(puVar2);
  lVar24 = (long)_DAT_11275f608;
  func_0x00010c212f20(*(undefined8 *)(param_7 + lVar24));
  _objc_release(puVar16);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_7 + lVar24));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 106e38fdc; end: 106e39087; -[SCMemoriesSnapGroupHeaderView setTitleLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e38fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108dfdc5c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11275f608;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  _objc_release(param_3);
  uVar1 = 0x4c;
  if ((int)uVar2 == 0) {
    uVar1 = 0xc6;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106e39088; end: 106e39097; -[SCMemoriesSnapGroupHeaderView setSelectLabelIsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e39088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f60c),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 106e39098; end: 106e390a7; -[SCMemoriesSnapGroupHeaderView setSelectLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e39098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f60c),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106e390a8; end: 106e390bb; -[SCMemoriesSnapGroupHeaderView resetBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e390a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f608),PTR_s_setText__1126625f0,0);
  return;
}



/* Entry: 106e390bc; end: 106e390ef; -[SCMemoriesSnapGroupHeaderView _toggleSelectAll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e390bc(long param_1)

{
  param_1 = param_1 + _DAT_11275f604;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf16380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e390f0; end: 106e3910f; -[SCMemoriesSnapGroupHeaderView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e390f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275f604);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e39110; end: 106e39123; -[SCMemoriesSnapGroupHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e39110(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275f604,param_3);
  return;
}



/* Entry: 106e39124; end: 106e3916f; -[SCMemoriesSnapGroupHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e39124(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275f604);
  _objc_storeStrong(param_1 + _DAT_11275f60c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f608,0);
  return;
}



/* Entry: 106e39170; end: 106e39237;  */

void FUN_106e39170(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  if ((param_2 == 0) || (lVar1 = param_2, func_0x00010bf529e0(), lVar1 == 0)) {
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_2);
    func_0x00010c246ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e39238; end: 106e393cf;  */

long FUN_106e39238(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_2 == 0) {
    lVar6 = -1;
  }
  else if (lVar1 == 0) {
    lVar6 = 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar6 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar5 = *(long *)(param_1 + 0x20);
    lVar6 = lVar1;
    func_0x00010c241220(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      lVar6 = 1;
      if (lVar4 != 0) {
        lVar6 = -1;
      }
      if (lVar4 == 0 && lVar5 == 0) {
        lVar2 = param_2;
        func_0x00010bf59960(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010bf59960(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010bf433a0(lVar2);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
    }
    else {
      lVar6 = lVar4;
      func_0x00010bf433a0(lVar4);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar6;
}


