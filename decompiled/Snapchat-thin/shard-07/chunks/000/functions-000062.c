/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105126f70; end: 105126f73; -[SCUserReachabilityViewController cardToExpandTransition] */

void FUN_105126f70(void)

{
  return;
}



/* Entry: 105126f74; end: 105126ffb; -[SCUserReachabilityViewController cardTransitionWillBeginWithView:] */

void FUN_105126f74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 != lVar1) {
    return;
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf727c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105126ffc; end: 105128f3f; -[SCUserReachabilityViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105126ffc(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c18b5e0();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c181a20(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_b0 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_a8 = lVar12;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  lStack_a0 = lVar17;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_98 = lVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
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
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f420(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf83340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf83340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = param_1;
  func_0x00010bf83340();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar13;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  lStack_c8 = lVar16;
  func_0x00010bf83340();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2793a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  lStack_c0 = lVar5;
  func_0x00010bf83340();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_b8 = lVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  lVar2 = param_1;
  func_0x00010bf83340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf83340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c17f5c0(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf42ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf42ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = param_1;
  func_0x00010bf42ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  lStack_e0 = lVar9;
  func_0x00010bf42ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_d8 = lVar8;
  func_0x00010bf42ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf83340();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf493c0(0xc052000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_d0 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  lVar2 = param_1;
  func_0x00010bf42ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c17f5e0(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bf42ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf42bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf42bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf42bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf42bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf42bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bee8000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194100(param_1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf42bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf8d700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf8d700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bf8d700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf42bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_f8 = lVar7;
  func_0x00010bf8d700();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf42bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_f0 = lVar12;
  func_0x00010bf8d700();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf42bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_e8 = lVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
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
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf8d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bee8000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db080(param_1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf42bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0faac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0faac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = param_1;
  func_0x00010c0faac0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf42bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  lStack_118 = lVar6;
  func_0x00010c0faac0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf42bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  lStack_110 = lVar10;
  func_0x00010c0faac0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf8d700(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar12;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  lStack_108 = lVar18;
  func_0x00010c0faac0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf42bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_100 = lVar22;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar16);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar14);
  lVar2 = param_1;
  func_0x00010c0faac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar25 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
  func_0x00010c1b9d20(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08daa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08daa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c08daa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_130 = lVar7;
  func_0x00010c08daa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_128 = lVar12;
  func_0x00010c08daa0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf42ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_120 = lVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
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
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08daa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08daa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c08daa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08daa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
  func_0x00010c1b9d60(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08dae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_148 = lVar7;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_140 = lVar12;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08daa0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010bf493c0(0xc026000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_138 = lVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
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
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08dae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08dae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1a7be0(param_1);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe03a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar2 = param_1;
  func_0x00010bfe03a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfe03a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf493e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c1e3380(0x443b8000,lVar7);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = param_1;
  lStack_170 = lVar7;
  func_0x00010bfe03a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bfe03a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  lStack_168 = lVar20;
  func_0x00010bfe03a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar24;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_160 = lVar6;
  func_0x00010bfe03a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493c0(0xc040800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_158 = lVar12;
  func_0x00010bfe03a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010bf493c0(0x4052800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_150 = lVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar24);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar16);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  lVar2 = param_1;
  func_0x00010bfe03a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(lVar2);
  _objc_initWeak(auStack_180,param_1);
  uVar26 = *(undefined8 *)(param_1 + _DAT_11271ccac);
  func_0x00010c269d40(uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar26;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_188,auStack_180);
  func_0x00010c0f7fc0(uVar25);
  _objc_release(uVar25);
  _objc_release(uVar26);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
  func_0x00010b8373e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1797a0(param_1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf31fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1797c0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf31fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19efc0(0x3ff0000000000000);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf31fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b20(param_1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf31fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_178 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(lVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_180);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_180);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be75b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105128f40; end: 105128f6b;  */

void FUN_105128f40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105128f6c; end: 1051292a7; -[SCUserReachabilityViewController _populateBoltAssets] */

void FUN_105128f6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar1 = param_1;
  func_0x00010c13b2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  uVar4 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1051292a8;
  puStack_88 = &UNK_110846320;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  uVar4 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  puStack_c8 = puVar5;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1051293bc;
  puStack_b0 = &UNK_110846320;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c13b2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2);
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1051292a8; end: 1051295cb;  */

void FUN_1051292a8(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105129350;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1051295cc; end: 1051296bb; -[SCUserReachabilityViewController _vendCell] */

void FUN_1051295cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b50b8;
  func_0x00010c24d760(PTR_PTR_1126b50b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(0,0,0x4034000000000000,0x4034000000000000);
  func_0x00010c182220();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1b9fe0(puVar1,param_2,puVar2);
  func_0x00010c1a89c0(puVar1,param_2,1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a86c0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c161a60(puVar1,param_2,3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051296bc; end: 1051296eb; -[SCUserReachabilityViewController _didTapLooksGoodButton:] */

void FUN_1051296bc(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051296ec; end: 10512971b; -[SCUserReachabilityViewController _didTapOutside] */

void FUN_1051296ec(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf727c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512971c; end: 10512974b; -[SCUserReachabilityViewController _didTapPhoneNumber] */

void FUN_10512971c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512974c; end: 10512977b; -[SCUserReachabilityViewController _didTapEmailAddress] */

void FUN_10512974c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512977c; end: 10512978b; -[SCUserReachabilityViewController resourceDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512977c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccb4);
}



/* Entry: 10512978c; end: 1051297cb; -[SCUserReachabilityViewController setResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512978c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccb4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051297cc; end: 1051297db; -[SCUserReachabilityViewController containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051297cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccb8);
}



/* Entry: 1051297dc; end: 10512981b; -[SCUserReachabilityViewController setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051297dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccb8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512981c; end: 10512982b; -[SCUserReachabilityViewController headingImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512981c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccbc);
}



/* Entry: 10512982c; end: 10512986b; -[SCUserReachabilityViewController setHeadingImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512982c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccbc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512986c; end: 10512987b; -[SCUserReachabilityViewController lblTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512986c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccc0);
}



/* Entry: 10512987c; end: 1051298bb; -[SCUserReachabilityViewController setLblTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512987c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051298bc; end: 1051298cb; -[SCUserReachabilityViewController lblBody] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051298bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccc4);
}



/* Entry: 1051298cc; end: 10512990b; -[SCUserReachabilityViewController setLblBody:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051298cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccc4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512990c; end: 10512991b; -[SCUserReachabilityViewController commsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512990c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccc8);
}



/* Entry: 10512991c; end: 10512995b; -[SCUserReachabilityViewController setCommsContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512991c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccc8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512995c; end: 10512996b; -[SCUserReachabilityViewController commsStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512995c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cccc);
}



/* Entry: 10512996c; end: 1051299ab; -[SCUserReachabilityViewController setCommsStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512996c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cccc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051299ac; end: 1051299bb; -[SCUserReachabilityViewController emailCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051299ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccd0);
}



/* Entry: 1051299bc; end: 1051299fb; -[SCUserReachabilityViewController setEmailCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051299bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051299fc; end: 105129a0b; -[SCUserReachabilityViewController phoneCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051299fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccd4);
}



/* Entry: 105129a0c; end: 105129a4b; -[SCUserReachabilityViewController setPhoneCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105129a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105129a4c; end: 105129a5b; -[SCUserReachabilityViewController dismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105129a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccd8);
}



/* Entry: 105129a5c; end: 105129a9b; -[SCUserReachabilityViewController setDismissButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105129a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105129a9c; end: 105129aab; -[SCUserReachabilityViewController cardTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105129a9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccdc);
}



/* Entry: 105129aac; end: 105129aeb; -[SCUserReachabilityViewController setCardTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105129aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccdc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105129aec; end: 105129b0b; -[SCUserReachabilityViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105129aec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ccb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105129b0c; end: 105129b1f; -[SCUserReachabilityViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105129b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ccb0,param_3);
  return;
}



/* Entry: 105129b20; end: 105129b2f; -[SCUserReachabilityViewController performerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105129b20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ccac);
}



/* Entry: 105129b30; end: 105129b6f; -[SCUserReachabilityViewController setPerformerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105129b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ccac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105129b70; end: 105129c5b; -[SCUserReachabilityViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105129b70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ccac,0);
  _objc_destroyWeak(param_1 + _DAT_11271ccb0);
  _objc_storeStrong(param_1 + _DAT_11271ccdc,0);
  _objc_storeStrong(param_1 + _DAT_11271ccd8,0);
  _objc_storeStrong(param_1 + _DAT_11271ccd4,0);
  _objc_storeStrong(param_1 + _DAT_11271ccd0,0);
  _objc_storeStrong(param_1 + _DAT_11271cccc,0);
  _objc_storeStrong(param_1 + _DAT_11271ccc8,0);
  _objc_storeStrong(param_1 + _DAT_11271ccc4,0);
  _objc_storeStrong(param_1 + _DAT_11271ccc0,0);
  _objc_storeStrong(param_1 + _DAT_11271ccbc,0);
  _objc_storeStrong(param_1 + _DAT_11271ccb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ccb4,0);
  return;
}



/* Entry: 105129c5c; end: 105129d03;  */

void FUN_105129c5c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6ab8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc6ab8,
                      &PTR____CFConstantStringClassReference_110dc6ad8,0);
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



/* Entry: 105129d04; end: 105129d2f; +[SCGrapheneReachabilityTakeoverMetric takeoverViewed] */

void FUN_105129d04(void)

{
  _objc_alloc(PTR_PTR_1126b5088);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105129d30; end: 105129d5b; +[SCGrapheneReachabilityTakeoverMetric emailTap] */

void FUN_105129d30(void)

{
  _objc_alloc(PTR_PTR_1126b5088);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105129d5c; end: 105129d87; +[SCGrapheneReachabilityTakeoverMetric phoneTap] */

void FUN_105129d5c(void)

{
  _objc_alloc(PTR_PTR_1126b5088);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105129d88; end: 105129db3; +[SCGrapheneReachabilityTakeoverMetric looksGoodTap] */

void FUN_105129d88(void)

{
  _objc_alloc(PTR_PTR_1126b5088);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105129db4; end: 105129ddf; +[SCGrapheneReachabilityTakeoverMetric backgroundDismiss] */

void FUN_105129db4(void)

{
  _objc_alloc(PTR_PTR_1126b5088);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105129de0; end: 105129e7f; -[SCGrapheneReachabilityTakeoverMetric description] */

void FUN_105129de0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6b98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc6b98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e6548;
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



/* Entry: 105129e80; end: 105129feb; -[SCGrapheneRegistry reachabilityTakeoverGraphene] */

void FUN_105129e80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105129f08;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9470 != -1) {
    func_0x00010002a2fc(0x1136b9470,&puStack_48);
  }
  uVar1 = uRam00000001136b9468;
  _objc_retain(uRam00000001136b9468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105129fec; end: 10512a087; -[SCUserReachabilityTakeoverScope initWithUIContainer:delegate:] */

undefined1 *
FUN_105129fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512a088; end: 10512a08f; -[SCUserReachabilityTakeoverScope uiContainer] */

undefined8 FUN_10512a088(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10512a090; end: 10512a0a7; -[SCUserReachabilityTakeoverScope delegate] */

void FUN_10512a090(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512a0a8; end: 10512a0d3; -[SCUserReachabilityTakeoverScope .cxx_destruct] */

void FUN_10512a0a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512a0d4; end: 10512a253; -[SCSelectionNewGroupErrorHandlerImp newGroupAlertWithNonMutualFriends:uiContainer:] */

void FUN_10512a0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6c58;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6c58,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x000105e59584(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 10512a254; end: 10512a263;  */

void FUN_10512a254(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10512a264; end: 10512a3bf; -[SCSelectionNewGroupErrorHandlerImp newGroupAlertFilterOutNonMutualFriends:uiContainer:] */

void FUN_10512a264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar4 = param_3;
  func_0x000105e59804(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 10512a3c0; end: 10512a3cf;  */

void FUN_10512a3c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10512a3d0; end: 10512a547; -[SCSelectionNewGroupErrorHandlerImp newGroupAlertWithNonUsers:uiContainer:] */

void FUN_10512a3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar4 = param_3;
  func_0x000105e59a84(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000105e59b98(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 10512a548; end: 10512a557;  */

void FUN_10512a548(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10512a558; end: 10512a5cf; -[SCSelectionNewGroupErrorHandlerImp newGroupAlreadyExistingMessage] */

void FUN_10512a558(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc6c78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6c78,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5a0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10512a5d0; end: 10512a647; -[SCSelectionNewGroupErrorHandlerImp cannotEditGroupNameMessage] */

void FUN_10512a5d0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc6c98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6c98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5a0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10512a648; end: 10512a793; -[SCSelectionNewGroupWorkflow initWithUiContainer:recipientPickerScopeExposer:recipientPickerScopeServices:newGroupDelegate:workflowDelegate:source:] */

undefined1 *
FUN_10512a648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e6558;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 10512a794; end: 10512a97b; -[SCSelectionNewGroupWorkflow beginNewGroupCreationWithSelectedItems:] */

void FUN_10512a794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2890;
  _objc_alloc();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc6cb8;
  uVar4 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6cb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0539a0();
  _objc_release(ppuVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(puVar1);
  func_0x00010bf24000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b2898;
  _objc_retain(uVar4);
  _objc_opt_new(puVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc6cd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6cd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb3c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  func_0x00010bf529e0(uVar4);
  _objc_release(uVar4);
  func_0x00010c2b06a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10512a97c; end: 10512aa3f;  */

void FUN_10512a97c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2898;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc6cd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc6cd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb3c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010bf529e0(param_2);
  _objc_release(param_2);
  func_0x00010c2b06a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10512aa40; end: 10512aa67;  */

void FUN_10512aa40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10512aa68; end: 10512ac27; -[SCSelectionNewGroupWorkflow didConfirmWithSelectedItems:title:uiContainer:] */

void FUN_10512aa68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uVar2 = uVar1;
  func_0x00010bf566a0();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 8));
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10512ac28; end: 10512aca3;  */

void FUN_10512ac28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf74380();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10512aca4; end: 10512ad1f; -[SCSelectionNewGroupWorkflow didDismissWithSelectedItems:title:] */

void FUN_10512aca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74fe0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10512ad20; end: 10512ad7b; -[SCSelectionNewGroupWorkflow .cxx_destruct] */

void FUN_10512ad20(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512ad7c; end: 10512af97; -[SCSelectionNewGroupCreatorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512ad7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b50c0;
  _objc_alloc();
  lVar11 = (long)_DAT_11271cd00;
  lVar3 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271cd08;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058780();
  lVar12 = (long)_DAT_11271cd0c;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf184a0(uVar10);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10512af98; end: 10512afd7;  */

void FUN_10512af98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10512afd8; end: 10512b1c3; -[SCSelectionNewGroupCreatorEntryPoint _createNewGroupCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512afd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar1 = param_1 + _DAT_11271cd10;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar9 = (long)_DAT_11271cd14;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar1 = param_1 + _DAT_11271cd18;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b50c8;
  _objc_alloc_init(PTR_PTR_1126b50c8);
  lVar1 = param_1 + _DAT_11271cd1c;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b2888;
  _objc_alloc(PTR_PTR_1126b2888);
  param_1 = param_1 + _DAT_11271cd20;
  _objc_loadWeakRetained();
  func_0x00010c05b400(puVar8,param_2,lVar2,lVar3,lVar4,lVar5,lVar9,puVar6,0,lVar7,param_1);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10512b1c4; end: 10512b263; -[SCSelectionNewGroupCreatorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512b1c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cd08);
  _objc_storeStrong(param_1 + _DAT_11271cd04,0);
  _objc_destroyWeak(param_1 + _DAT_11271cd20);
  _objc_destroyWeak(param_1 + _DAT_11271cd1c);
  _objc_destroyWeak(param_1 + _DAT_11271cd18);
  _objc_destroyWeak(param_1 + _DAT_11271cd24);
  _objc_destroyWeak(param_1 + _DAT_11271cd14);
  _objc_destroyWeak(param_1 + _DAT_11271cd10);
  _objc_destroyWeak(param_1 + _DAT_11271cd00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cd0c,0);
  return;
}



/* Entry: 10512b264; end: 10512b4cf; -[SCSendToActionSheetController initWithUIContainer:providers:sendToTracker:] */

undefined8 *
FUN_10512b264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126e6560;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar6 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = puVar1[2];
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10512b4d0;
    puStack_a0 = &UNK_11086a5b0;
    _objc_retain(puVar1);
    puStack_98 = puVar1;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf97e80(uVar2);
    uVar4 = puVar1[4];
    func_0x00010bf9a080(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_88);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_90);
    _objc_release(puStack_98);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10512b4d0; end: 10512b607;  */

void FUN_10512b4d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  func_0x00010c18b5e0(param_2);
  uVar1 = param_2;
  func_0x00010beeeec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10512b608; end: 10512b67b;  */

void FUN_10512b608(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512b67c; end: 10512b693; -[SCSendToActionSheetController dismissPresenterWithCompletion:] */

void FUN_10512b67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x28),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,param_3)
    ;
    return;
  }
  return;
}



/* Entry: 10512b694; end: 10512b89b; -[SCSendToActionSheetController presentAlertDialogWithTitle:text:acceptActionTitle:cancelActionTitle:onAccept:onCancel:] */

void FUN_10512b694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126aed70;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_8);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010512b8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_7 + 0x20) + 0x10))();
  return;
}



/* Entry: 10512b89c; end: 10512b903;  */

void FUN_10512b89c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010512b8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10512b904; end: 10512b9cf; -[SCSendToActionSheetController _presentActionSheet] */

void FUN_10512b904(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bdc5120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 < 2) {
      uVar3 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bfc1f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    else {
      uVar2 = param_1;
      func_0x00010be62420(param_1,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    if (uVar2 != 0) {
      _objc_retain(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(ulong *)(param_1 + 0x28) = uVar2;
      _objc_release(uVar4);
      func_0x00010c10c360(uVar2,param_2,*(undefined8 *)(param_1 + 8),0);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512b9d0; end: 10512b9ef; -[SCSendToActionSheetController _activeActionSheetProviders] */

void FUN_10512b9d0(long param_1)

{
  func_0x0001006372a4(*(undefined8 *)(param_1 + 0x10),&PTR___NSConcreteGlobalBlock_11086a630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512b9f0; end: 10512b9f7;  */

void FUN_10512b9f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isActionSheetAvailable_1125f8798);
  return;
}



/* Entry: 10512b9f8; end: 10512bae7; -[SCSendToActionSheetController _navigationActionSheetForProviders:] */

void FUN_10512b9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11086a670);
  puVar2 = PTR_PTR_1126b10a0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar4 = puVar2;
  FUN_10512c07c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10512bae8; end: 10512baf7;  */

void FUN_10512bae8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc7e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getNavigationOption_1125cf940);
  return;
}



/* Entry: 10512baf8; end: 10512bb7b; -[SCSendToActionSheetController _providerAvailabilityDidChange] */

void FUN_10512baf8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bdc5120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR_PTR_1126b50d0;
  func_0x00010beeeea0(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10512bb7c; end: 10512bb83;  */

void FUN_10512bb7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_actionSheetType_1125995d0);
  return;
}



/* Entry: 10512bb84; end: 10512bc0f; -[SCSendToActionSheetController _didEmitSendToEvent:] */

void FUN_10512bb84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10512bc10;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0c1600(param_3,param_2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,&puStack_38,0,0,0,0,0,0,0,0,
                      0);
  return;
}



/* Entry: 10512bc10; end: 10512bc17;  */

void FUN_10512bc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentActionSheet_11257c130);
  return;
}



/* Entry: 10512bc18; end: 10512bc6b; -[SCSendToActionSheetController .cxx_destruct] */

void FUN_10512bc18(long param_1)

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



/* Entry: 10512bc6c; end: 10512bd6b; -[SCSendToActionSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512bc6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271cd3c);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10512bd6c;
  puStack_58 = &UNK_11086a6f0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bf9d5c0(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10512bd6c; end: 10512bec3;  */

void FUN_10512bd6c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b50d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  FUN_10512bec4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  FUN_10512bec4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c259540();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  FUN_10512bec4();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0374e0(puVar1);
  _objc_release(param_2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10512bec4; end: 10512bee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512bec4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271cd40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512bee8; end: 10512bf2f;  */

void FUN_10512bee8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffd00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512bf30; end: 10512c02f; -[SCSendToActionSheetEntryPoint _didRegisterActionSheetProviders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512bf30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b50e0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar7 = (long)_DAT_11271cd40;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar5 = lVar7;
  func_0x00010c15d6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0571e0(puVar1,param_2,lVar3,uVar4,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271cd44);
  *(undefined **)(param_1 + _DAT_11271cd44) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10512c030; end: 10512c07b; -[SCSendToActionSheetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512c030(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271cd3c,0);
  _objc_destroyWeak(param_1 + _DAT_11271cd40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cd44,0);
  return;
}



/* Entry: 10512c07c; end: 10512c093;  */

void FUN_10512c07c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6cf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc6cf8,
                      &PTR____CFConstantStringClassReference_110dc6d18,0);
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



/* Entry: 10512c094; end: 10512c213; -[SCSendToEducationActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10512c094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b50e8;
  func_0x00010bf82f40(PTR_PTR_1126b50e8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b50e8;
    func_0x00010c279460(PTR_PTR_1126b50e8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
    if ((int)uVar2 == 0) {
      uVar3 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b50e8;
      func_0x00010bf34180(PTR_PTR_1126b50e8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(uVar3);
      if ((int)uVar2 == 0) {
        uVar3 = 0;
        goto LAB_10512c1ec;
      }
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c15d140();
    }
    else {
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c15d1a0();
    }
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c15d160();
  }
  _objc_release(param_1);
  uVar3 = 1;
LAB_10512c1ec:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 10512c214; end: 10512c243; -[SCSendToEducationActionHandler setContainer:] */

void FUN_10512c214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512c244; end: 10512c25b; -[SCSendToEducationActionHandler delegate] */

void FUN_10512c244(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512c25c; end: 10512c267; -[SCSendToEducationActionHandler setDelegate:] */

void FUN_10512c25c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10512c268; end: 10512c293; -[SCSendToEducationActionHandler .cxx_destruct] */

void FUN_10512c268(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512c294; end: 10512c3e3; -[SCSendToEducationCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10512c294(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6568;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c20eaa0(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e40();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165ea0();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271cd50) = 0;
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271cd54);
    *(undefined **)((long)puVar1 + (long)_DAT_11271cd54) = puVar2;
    _objc_release(uVar4);
    func_0x00010bef9040(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10512c3e4; end: 10512c57b; -[SCSendToEducationCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512c3e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11271cd58;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    lVar7 = (long)_DAT_11271cd50;
    if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
      func_0x00010c15d180(*(undefined8 *)(param_1 + _DAT_11271cd5c));
    }
    puVar2 = PTR_PTR_1126b50f0;
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
    func_0x00010bea53a0(param_1);
    func_0x00010bea8a60(param_1);
    uVar3 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(lVar4);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c260dc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(lVar4);
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + lVar7) = 1;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar5);
    func_0x00010bfcf7e0(uVar1);
    _objc_release(uVar1);
    func_0x00010c20eaa0(param_1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


