/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d6d6c8; end: 106d6d6d7; +[SCCommerceHeroCell sizeForWidth:] */

void FUN_106d6d6c8(void)

{
  return;
}



/* Entry: 106d6d6d8; end: 106d6d727; -[SCCommerceHeroCell initWithFrame:] */

undefined1 * FUN_106d6d6d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6c70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d6d728; end: 106d6d7cb; -[SCCommerceHeroCell populateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6d728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d854);
  *(undefined8 *)(param_1 + _DAT_11275d854) = uVar1;
  _objc_release(uVar2);
  func_0x00010bf4cbe0(param_3);
  lVar3 = (long)_DAT_11275d858;
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a9f00(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106d6d7cc; end: 106d6db93; -[SCCommerceHeroCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d6d7cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar17 = (long)_DAT_11275d858;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar16);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  lStack_88 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493c0(0xc014000000000000,uVar13,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar3;
  }
  ___stack_chk_fail();
  return *(long *)(lVar3 + _DAT_11275d85c);
}



/* Entry: 106d6db94; end: 106d6dba3; -[SCCommerceHeroCell shadowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6db94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d85c);
}



/* Entry: 106d6dba4; end: 106d6dbe3; -[SCCommerceHeroCell setShadowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6dba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d85c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6dbe4; end: 106d6dbf3; -[SCCommerceHeroCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6dbe4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d858);
}



/* Entry: 106d6dbf4; end: 106d6dc33; -[SCCommerceHeroCell setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6dbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d858;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6dc34; end: 106d6dc43; -[SCCommerceHeroCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6dc34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d854);
}



/* Entry: 106d6dc44; end: 106d6dc83; -[SCCommerceHeroCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6dc44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d854;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6dc84; end: 106d6dcd3; -[SCCommerceHeroCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6dc84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d854,0);
  _objc_storeStrong(param_1 + _DAT_11275d858,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d85c,0);
  return;
}



/* Entry: 106d6dcd4; end: 106d6dd23; -[SCCommerceProductSharingPreviewView initWithFrame:] */

undefined1 * FUN_106d6dcd4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6c78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d6dd24; end: 106d6dfff; -[SCCommerceProductSharingPreviewView populateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6dd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11275d860;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar8);
  _objc_release(uVar7);
  func_0x00010bf4cbe0(param_3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar9));
  uVar7 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d864));
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010c0cab20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d868));
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010c112a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d86c));
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar7 = param_3;
  func_0x00010c25ccc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar7);
  lVar9 = (long)_DAT_11275d870;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c07eea0(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275d874));
  func_0x00010c07eea0(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275d878));
  uVar7 = param_3;
  func_0x00010c25ccc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c08fa60(uVar7);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9));
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11275d860;
  uVar7 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined **)(puVar1 + lVar6) = puVar2;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(puVar1 + lVar6);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar7);
  func_0x00010befbb60(puVar1);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11275d87c;
  uVar7 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined **)(puVar1 + lVar6) = puVar2;
  _objc_release(uVar7);
  func_0x00010c16e060(*(undefined8 *)(puVar1 + lVar6));
  func_0x00010c166c00(*(undefined8 *)(puVar1 + lVar6));
  func_0x00010c207380(0x4000000000000000,*(undefined8 *)(puVar1 + lVar6));
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar6));
  func_0x00010befbb60(puVar1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar9 = (long)_DAT_11275d864;
  uVar7 = *(undefined8 *)(puVar1 + lVar9);
  *(undefined **)(puVar1 + lVar9) = puVar2;
  _objc_release(uVar7);
  func_0x00010c21ad00(*(undefined8 *)(puVar1 + lVar9));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar1 + lVar9));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(puVar1 + lVar9));
  func_0x00010c1bdb00(*(undefined8 *)(puVar1 + lVar9));
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar9 = (long)_DAT_11275d880;
  uVar7 = *(undefined8 *)(puVar1 + lVar9);
  *(undefined **)(puVar1 + lVar9) = puVar2;
  _objc_release(uVar7);
  func_0x00010c16e060(*(undefined8 *)(puVar1 + lVar9));
  func_0x00010c207380(0x4018000000000000,*(undefined8 *)(puVar1 + lVar9));
  func_0x00010c166c00(*(undefined8 *)(puVar1 + lVar9));
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11275d868;
  uVar7 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined **)(puVar1 + lVar6) = puVar2;
  _objc_release(uVar7);
  func_0x00010c21ad00(*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar1 + lVar6));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(puVar1 + lVar6));
  func_0x00010c1bdb00(*(undefined8 *)(puVar1 + lVar6));
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar9));
  puVar2 = puVar1;
  func_0x00010bdf3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + _DAT_11275d884);
  *(undefined **)(puVar1 + _DAT_11275d884) = puVar2;
  _objc_release(uVar7);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar9));
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11275d86c;
  uVar7 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined **)(puVar1 + lVar6) = puVar2;
  _objc_release(uVar7);
  func_0x00010c21ad00(*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar1 + lVar6));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(puVar1 + lVar6));
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar9));
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11275d870;
  uVar7 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined **)(puVar1 + lVar6) = puVar2;
  _objc_release(uVar7);
  func_0x00010c21ad00(*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar1 + lVar6));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(puVar1 + lVar6));
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar9));
  puVar2 = puVar1;
  func_0x00010bdf3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + _DAT_11275d874);
  *(undefined **)(puVar1 + _DAT_11275d874) = puVar2;
  _objc_release(uVar7);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar9));
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11275d878;
  uVar7 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined **)(puVar1 + lVar6) = puVar2;
  _objc_release(uVar7);
  func_0x00010c21ad00(*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar1 + lVar6));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(puVar1 + lVar6));
  ppuVar5 = &PTR____CFConstantStringClassReference_110db3698;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3698,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(puVar1 + lVar6));
  _objc_release(ppuVar5);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar9));
                    /* WARNING: Could not recover jumptable at 0x00010be499d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__layoutViews_112570010);
  return;
}



/* Entry: 106d6e000; end: 106d6e4fb; -[SCCommerceProductSharingPreviewView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6e000(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_11275d860;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_11275d87c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c207380(0x4000000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar5 = (long)_DAT_11275d864;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar5 = (long)_DAT_11275d880;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c207380(0x4018000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_11275d868;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar5));
  lVar4 = param_1;
  func_0x00010bdf3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d884);
  *(long *)(param_1 + _DAT_11275d884) = lVar4;
  _objc_release(uVar3);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_11275d86c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_11275d870;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar5));
  lVar4 = param_1;
  func_0x00010bdf3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d874);
  *(long *)(param_1 + _DAT_11275d874) = lVar4;
  _objc_release(uVar3);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_11275d878;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3698;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3698,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(ppuVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010be499d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutViews_112570010);
  return;
}



/* Entry: 106d6e4fc; end: 106d6e897; -[SCCommerceProductSharingPreviewView _layoutViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6e4fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11275d860;
  uVar1 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_88 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = (long)_DAT_11275d87c;
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar15);
  uStack_a0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf493c0(0x4020000000000000,uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0xc020000000000000,uVar6,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21ad00();
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar13,param_2,puVar11);
  _objc_release(puVar11);
  func_0x00010c1cfce0(puVar13,param_2,1);
  func_0x00010c212f20(puVar13,param_2,&PTR____CFConstantStringClassReference_110db2d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106d6e898; end: 106d6e92b; -[SCCommerceProductSharingPreviewView _createSpacerView] */

void FUN_106d6e898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c212f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110db2d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d6e92c; end: 106d6e9eb; -[SCCommerceProductSharingPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6e92c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d878,0);
  _objc_storeStrong(param_1 + _DAT_11275d874,0);
  _objc_storeStrong(param_1 + _DAT_11275d870,0);
  _objc_storeStrong(param_1 + _DAT_11275d86c,0);
  _objc_storeStrong(param_1 + _DAT_11275d884,0);
  _objc_storeStrong(param_1 + _DAT_11275d868,0);
  _objc_storeStrong(param_1 + _DAT_11275d880,0);
  _objc_storeStrong(param_1 + _DAT_11275d864,0);
  _objc_storeStrong(param_1 + _DAT_11275d87c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d860,0);
  return;
}



/* Entry: 106d6e9ec; end: 106d6ea3b; -[SCCommerceSectionHeaderView initWithFrame:] */

undefined1 * FUN_106d6e9ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6c80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bead500(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d6ea3c; end: 106d6ea4b; -[SCCommerceSectionHeaderView setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ea3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d888),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106d6ea4c; end: 106d6eb17; -[SCCommerceSectionHeaderView _setupLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ea4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11275d888;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beda1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLabelConstraints_112594218);
  return;
}



/* Entry: 106d6eb18; end: 106d6ed53; -[SCCommerceSectionHeaderView _updateLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6eb18(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11275d888;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_11275d888,0);
  return;
}



/* Entry: 106d6ed54; end: 106d6ed67; -[SCCommerceSectionHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ed54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d888,0);
  return;
}



/* Entry: 106d6ed68; end: 106d6ee5b; -[SCCommerceCollapsingHeaderView initWithTopView:bottomView:aspectRatio:displayMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d6ed68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f6c88;
  uStack_60 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275d88c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275d890;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275d894) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275d898) = param_6;
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106d6ee5c; end: 106d6eed3; -[SCCommerceCollapsingHeaderView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ee5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_11275d890;
  func_0x00010c12d5a0(*(undefined8 *)(param_1 + lVar1),param_2,param_1,
                      &PTR____CFConstantStringClassReference_110db8c58,0);
  func_0x00010c12d5a0(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_1126f6c88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d6eed4; end: 106d6ef27; -[SCCommerceCollapsingHeaderView _scrollToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6eed4(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11275d890);
  func_0x00010bdc90c0();
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,-param_1 - *(double *)(param_2 + _DAT_11275d89c),uVar1,
             PTR_s_setContentOffset_animated__11263e2e0,1);
  return;
}



/* Entry: 106d6ef28; end: 106d6efc3; -[SCCommerceCollapsingHeaderView _adjustBottomViewContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ef28(double param_1,long param_2)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  pdVar1 = (double *)(param_2 + _DAT_11275d89c);
  dVar3 = *pdVar1;
  func_0x00010bdc90c0();
  dVar3 = dVar3 + param_1;
  lVar2 = (long)_DAT_11275d890;
  func_0x00010bf4c7c0(*(undefined8 *)(param_2 + lVar2));
  if (param_1 != dVar3) {
    func_0x00010c181f80(dVar3,pdVar1[1],pdVar1[2],pdVar1[3],*(undefined8 *)(param_2 + lVar2));
    func_0x00010c069fa0(*(undefined8 *)(param_2 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,-dVar3,*(undefined8 *)(param_2 + lVar2),PTR_s_setContentOffset_animated__11263e2e0,
               0);
    return;
  }
  return;
}



/* Entry: 106d6efc4; end: 106d6f4c7; -[SCCommerceCollapsingHeaderView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6efc4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_5);
  _objc_release(puVar2);
  func_0x00010c219b60(param_5);
  puVar1 = (undefined8 *)(param_5 + _DAT_11275d89c);
  lVar16 = (long)_DAT_11275d890;
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar16));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar16));
  func_0x00010befa220(*(undefined8 *)(param_5 + lVar16));
  func_0x00010befa220(*(undefined8 *)(param_5 + lVar16));
  func_0x00010befbb60(param_5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c2793a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_5;
  func_0x00010bf1ff80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  func_0x00010c08de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(lVar16);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(lVar17);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar15);
  _objc_release(uVar3);
  lVar17 = (long)_DAT_11275d88c;
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar17));
  func_0x00010befbb60(param_5);
  uVar10 = *(undefined8 *)(param_5 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5;
  func_0x00010c274200(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + _DAT_11275d8a0);
  *(undefined8 *)(param_5 + _DAT_11275d8a0) = uVar4;
  _objc_release(uVar14);
  _objc_release(lVar15);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_5 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5;
  func_0x00010c2a5060(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar18 = *(double *)(param_5 + _DAT_11275d894);
  uVar4 = uVar10;
  func_0x00010bf493e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + _DAT_11275d8a4);
  *(undefined8 *)(param_5 + _DAT_11275d8a4) = uVar4;
  _objc_release(uVar14);
  _objc_release(lVar15);
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_5 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_5 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(lVar15);
  _objc_release(uVar14);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c18b5e0();
  puVar9 = puVar2;
  func_0x00010bef9040(*(undefined8 *)(param_5 + lVar17));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar12 = puVar9;
  func_0x00010c252440();
  if (puVar12 == (undefined *)0x1) {
    lVar15 = (long)_DAT_11275d8a8;
    func_0x00010c09ef00(puVar9);
    *(double *)(puVar2 + lVar15) = dVar18;
    *(double *)((long)(puVar2 + lVar15) + 8) = param_2;
    lVar15 = (long)_DAT_11275d8ac;
    func_0x00010bf4cdc0(*(undefined8 *)(puVar2 + _DAT_11275d890));
    *(double *)(puVar2 + lVar15) = dVar18;
    *(double *)((long)(puVar2 + lVar15) + 8) = param_2;
  }
  else {
    puVar12 = puVar9;
    func_0x00010c252440();
    if (puVar12 == (undefined *)0x2) {
      func_0x00010c09ef00(puVar9);
      func_0x00010c182300(0,*(double *)(puVar2 + (long)_DAT_11275d8ac + 8) +
                            (*(double *)(puVar2 + (long)_DAT_11275d8a8 + 8) - param_2),
                          *(undefined8 *)(puVar2 + _DAT_11275d890));
    }
    else {
      puVar12 = puVar9;
      func_0x00010c252440();
      if (puVar12 == (undefined *)0x3) {
        func_0x00010bdc96a0(puVar2);
        func_0x00010bf4cdc0(*(undefined8 *)(puVar2 + _DAT_11275d890));
        if (param_2 <= dVar18) {
          _objc_initWeak(auStack_118,puVar2);
          puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_138 = 0xc2000000;
          pcStack_130 = FUN_106d6f650;
          puStack_128 = &UNK_1108434b0;
          _objc_copyWeak(auStack_120,auStack_118);
          func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_140);
          _objc_destroyWeak(auStack_120);
          _objc_destroyWeak(auStack_118);
        }
      }
    }
  }
  _objc_release(puVar9);
  return;
}



/* Entry: 106d6f4c8; end: 106d6f64f; -[SCCommerceCollapsingHeaderView _respondToPanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6f4c8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = (long)_DAT_11275d8a8;
    func_0x00010c09ef00(param_5);
    *(double *)(param_3 + lVar1) = param_1;
    ((double *)(param_3 + lVar1))[1] = param_2;
    lVar1 = (long)_DAT_11275d8ac;
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11275d890));
    *(double *)(param_3 + lVar1) = param_1;
    ((double *)(param_3 + lVar1))[1] = param_2;
  }
  else {
    lVar1 = param_5;
    func_0x00010c252440();
    if (lVar1 == 2) {
      func_0x00010c09ef00(param_5);
      func_0x00010c182300(0,*(double *)(param_3 + _DAT_11275d8ac + 8) +
                            (*(double *)(param_3 + _DAT_11275d8a8 + 8) - param_2),
                          *(undefined8 *)(param_3 + _DAT_11275d890));
    }
    else {
      lVar1 = param_5;
      func_0x00010c252440();
      if (lVar1 == 3) {
        func_0x00010bdc96a0(param_3);
        func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11275d890));
        if (param_2 <= param_1) {
          _objc_initWeak(auStack_48,param_3);
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0xc2000000;
          pcStack_60 = FUN_106d6f650;
          puStack_58 = &UNK_1108434b0;
          _objc_copyWeak(auStack_50,auStack_48);
          func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
          _objc_destroyWeak(auStack_50);
          _objc_destroyWeak(auStack_48);
        }
      }
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106d6f650; end: 106d6f67b;  */

void FUN_106d6f650(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9c220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d6f67c; end: 106d6f81b; -[SCCommerceCollapsingHeaderView _bottomViewDidScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6f67c(double param_1,double param_2,double param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_4 + _DAT_11275d8b0);
  *(undefined **)(param_4 + _DAT_11275d8b0) = puVar4;
  _objc_release(uVar5);
  func_0x00010bdc96a0(param_4);
  lVar6 = (long)_DAT_11275d890;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar6));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar6));
  dVar9 = param_1 - param_2;
  if (*(long *)(param_4 + _DAT_11275d898) == 1) {
    dVar7 = *(double *)(param_4 + _DAT_11275d894);
    dVar8 = dVar9;
    if (param_1 < param_2) {
      dVar8 = 0.0;
    }
    func_0x00010c181140(dVar8,*(undefined8 *)(param_4 + _DAT_11275d8a0));
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (-dVar9 <= param_3 * -0.33329999446868896 + dVar7 * param_3) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_2) && !NAN(param_1)) {
        bVar1 = param_2 < param_1;
        bVar2 = param_2 == param_1;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) goto LAB_106d6f780;
  }
  else {
    if (*(long *)(param_4 + _DAT_11275d898) != 0) goto LAB_106d6f780;
    func_0x00010c181140(dVar9,*(undefined8 *)(param_4 + _DAT_11275d8a0));
    dVar9 = 0.0;
  }
  func_0x00010c181140(dVar9,*(undefined8 *)(param_4 + _DAT_11275d8a4));
LAB_106d6f780:
  _objc_initWeak(auStack_58,param_4);
  uVar5 = 0;
  _dispatch_time(0,500000000);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106d6f81c;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010058c530(uVar5,PTR___dispatch_main_q_11034be20,&puStack_80);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106d6f81c; end: 106d6f847;  */

void FUN_106d6f81c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc94c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d6f848; end: 106d6f907; -[SCCommerceCollapsingHeaderView _adjustScrollAfterIdle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6f848(double param_1,double param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  double dVar4;
  
  if (*(long *)(param_3 + _DAT_11275d8b0) != 0) {
    func_0x00010bdc96a0();
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11275d890));
    dVar4 = param_1 + -5.0;
    param_1 = param_1 + 5.0;
    bVar1 = false;
    bVar2 = true;
    if (dVar4 <= param_2) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2) && !NAN(param_1)) {
        bVar1 = param_2 == param_1;
        bVar2 = param_1 <= param_2;
      }
    }
    if (!bVar2 || bVar1) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar3);
      if (0.5 <= dVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010be9c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__scrollToTop_112584a30);
        return;
      }
    }
  }
  return;
}



/* Entry: 106d6f908; end: 106d6f93b; -[SCCommerceCollapsingHeaderView _adjustedZero] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106d6f908(double param_1,long param_2)

{
  func_0x00010bdc90c0();
  return -param_1 - *(double *)(param_2 + _DAT_11275d89c);
}



/* Entry: 106d6f93c; end: 106d6f977; -[SCCommerceCollapsingHeaderView _additionalBottomViewTopContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106d6f93c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_11275d88c));
  return param_3 * *(double *)(param_4 + _DAT_11275d894);
}



/* Entry: 106d6f978; end: 106d6f9ef; -[SCCommerceCollapsingHeaderView _bottomViewShouldRespondToGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106d6f978(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11275d88c;
  if (*(long *)(param_5 + lVar2) != 0) {
    lVar3 = (long)_DAT_11275d890;
    uVar1 = *(ulong *)(param_5 + lVar3);
    if (uVar1 == 0) {
      return false;
    }
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar3));
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
      return param_4 <= param_2;
    }
  }
  return false;
}



/* Entry: 106d6f9f0; end: 106d6fa5b; -[SCCommerceCollapsingHeaderView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106d6f9f0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bdd5620();
  if ((int)lVar1 == 0) {
    bVar2 = false;
  }
  else {
    func_0x00010c297a00(param_5,param_4,*(undefined8 *)(param_3 + _DAT_11275d88c));
    bVar2 = ABS(param_1) < ABS(param_2);
  }
  _objc_release(param_5);
  return bVar2;
}



/* Entry: 106d6fa5c; end: 106d6fb83; -[SCCommerceCollapsingHeaderView observeValueForKeyPath:ofObject:change:context:] */

void FUN_106d6fa5c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_98 [4];
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [4];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) goto LAB_106d6fb38;
    puVar3 = auStack_78;
    pcVar2 = (code *)0x106d6fbb0;
    puVar4 = auStack_98;
  }
  else {
    puVar4 = auStack_70;
    puVar3 = auStack_50;
    pcVar2 = FUN_106d6fb84;
  }
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4[1] = 0xc2000000;
  puVar4[2] = pcVar2;
  puVar4[3] = &UNK_1108434b0;
  _objc_copyWeak(puVar3,auStack_48);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,puVar4);
  _objc_destroyWeak(puVar3);
LAB_106d6fb38:
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d6fb84; end: 106d6fbdb;  */

void FUN_106d6fb84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd5600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d6fbdc; end: 106d6fc4b; -[SCCommerceCollapsingHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6fbdc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d8b0,0);
  _objc_storeStrong(param_1 + _DAT_11275d8a0,0);
  _objc_storeStrong(param_1 + _DAT_11275d8a4,0);
  _objc_storeStrong(param_1 + _DAT_11275d890,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d88c,0);
  return;
}



/* Entry: 106d6fc4c; end: 106d6fc9b; -[SCCommerceLineItemCellView initWithFrame:] */

undefined1 * FUN_106d6fc4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6c90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d6fc9c; end: 106d6ff4f; -[SCCommerceLineItemCellView _setupSubviews] */

/* WARNING: Possible PIC construction at 0x000106d6fee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106d6fefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106d6ff14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d6ff00) */
/* WARNING: Removing unreachable block (ram,0x000106d6fee8) */
/* WARNING: Removing unreachable block (ram,0x000106d6ff18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6fc9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b0608;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_11275d8b4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11275d8b8;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11275d8bc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11275d8c0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11275d8c4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275d8c8;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275d8cc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106d6ff50; end: 106d701f7; -[SCCommerceLineItemCellView _updateViewContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ff50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d8d0);
  *(undefined8 *)(param_1 + _DAT_11275d8d0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c26e580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805a0(*(undefined8 *)(param_1 + _DAT_11275d8b4));
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11275d8b8;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar2);
  func_0x00010c271680(param_3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c112b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11275d8bc;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar2);
  func_0x00010c112ba0(param_3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  uVar2 = param_3;
  func_0x00010bf813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11275d8c0;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar2);
  func_0x00010bf813c0(param_3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21ad20(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c297600(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11275d8c4;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar2);
  func_0x00010c297820(param_3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  lVar5 = (long)_DAT_11275d8c8;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  uVar2 = param_3;
  func_0x00010c11cf80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf833a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d8cc);
  uVar2 = param_3;
  func_0x00010c12b560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bed5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraints_112593058);
  return;
}



/* Entry: 106d701f8; end: 106d70c5b; -[SCCommerceLineItemCellView _updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d701f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_11275d8d4;
  if (*(long *)(param_1 + lVar12) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11275d8b4;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf493c0(0x4030000000000000,uVar2,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_a0 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4028000000000000,uVar3,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_98 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  uStack_90 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar14);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(uVar2);
  lVar15 = (long)_DAT_11275d8b8;
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0x4030000000000000,uVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_b8 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4028000000000000,uVar3,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_b0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493c0(0xc055400000000000,uVar5,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar8);
  lVar14 = (long)_DAT_11275d8c4;
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_d0 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4010000000000000,uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_c8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf493c0(0xc055400000000000,uVar6,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar8);
  lVar16 = (long)_DAT_11275d8c0;
  lVar9 = *(long *)(param_1 + lVar16);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 == 0) {
    lVar16 = (long)_DAT_11275d8bc;
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf493c0(0xc024000000000000,uVar10,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar16);
    uStack_100 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf493c0(0xc024000000000000,uVar10,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar16);
    uStack_e0 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(lVar9);
    _objc_release(uVar10);
    lVar13 = (long)_DAT_11275d8bc;
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + lVar16);
    func_0x00010c2793a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf493a0(uVar10,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar13);
    uStack_f0 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf1ff80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0,2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa160(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(uVar10);
  lVar13 = (long)_DAT_11275d8cc;
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11275d8c8;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0x4030000000000000,uVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_118 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4024000000000000,uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_110 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf49500(uVar6,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar8);
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  uStack_128 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_128,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar10);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = uVar11;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268120(uVar11);
  func_0x00010bf7d2c0(uVar4,param_2,uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106d70c5c; end: 106d70c9f; -[SCCommerceLineItemCellView _removeButtonTapped] */

void FUN_106d70c5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268120(param_1);
  func_0x00010bf7d2c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d70ca0; end: 106d70d1b; -[SCCommerceLineItemCellView _quantityButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d70ca0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c268120(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d8d0);
  func_0x00010c11cf80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c067ec0();
  func_0x00010bf7d240(lVar1,param_2,lVar2,(long)(int)uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d70d1c; end: 106d70d2b; -[SCCommerceLineItemCellView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d70d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d8b4),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 106d70d2c; end: 106d70d4b; -[SCCommerceLineItemCellView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d70d2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d70d4c; end: 106d70d5f; -[SCCommerceLineItemCellView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d70d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d8d8,param_3);
  return;
}



/* Entry: 106d70d60; end: 106d70d7f; -[SCCommerceLineItemCellView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d70d60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d8dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d70d80; end: 106d70e67; -[SCCommerceLineItemCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d70d80(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d8dc);
  _objc_destroyWeak(param_1 + _DAT_11275d8d8);
  _objc_storeStrong(param_1 + _DAT_11275d8d0,0);
  _objc_storeStrong(param_1 + _DAT_11275d8c8,0);
  _objc_storeStrong(param_1 + _DAT_11275d8cc,0);
  _objc_storeStrong(param_1 + _DAT_11275d8e0,0);
  _objc_storeStrong(param_1 + _DAT_11275d8e4,0);
  _objc_storeStrong(param_1 + _DAT_11275d8c4,0);
  _objc_storeStrong(param_1 + _DAT_11275d8c0,0);
  _objc_storeStrong(param_1 + _DAT_11275d8bc,0);
  _objc_storeStrong(param_1 + _DAT_11275d8b8,0);
  _objc_storeStrong(param_1 + _DAT_11275d8b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d8d4,0);
  return;
}



/* Entry: 106d70e68; end: 106d70ee7; +[SCCommerceLineItemCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106d70e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b0a78;
  _objc_opt_class(PTR_PTR_1126b0a78);
  lVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  bVar1 = ((uint)(param_4 != 0) & (uint)lVar3) == 0;
  if (bVar1) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar4 = 0x4061000000000000;
  if (bVar1) {
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106d70ee8; end: 106d70fb7; -[SCCommerceLineItemCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d70ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR_PTR_1126d2600;
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  puStack_58 = PTR_PTR_1126f6c98;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_underlyingView__1125e2e00,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11275d8e8;
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined **)((long)puVar2 + lVar4) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 106d70fb8; end: 106d7107b; -[SCCommerceLineItemCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d70fb8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0a78;
  _objc_opt_class(PTR_PTR_1126b0a78);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((param_3 != 0) && ((uVar2 & 1) != 0)) {
    lVar5 = (long)_DAT_11275d8ec;
    uVar2 = param_3;
    func_0x00010c071ae0();
    puVar1 = PTR_PTR_1126b0a78;
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_3);
      _objc_opt_class(puVar1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      uVar2 = param_3;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = uVar2;
      _objc_release(uVar4);
      func_0x00010bee3620(*(undefined8 *)(param_1 + _DAT_11275d8e8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d7107c; end: 106d7108b; -[SCCommerceLineItemCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d7107c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d8e8),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 106d7108c; end: 106d7109b; -[SCCommerceLineItemCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d7108c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d8e8),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 106d7109c; end: 106d710ab; -[SCCommerceLineItemCell setTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d7109c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c211790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d8e8),PTR_s_setTag__112662008);
  return;
}



/* Entry: 106d710ac; end: 106d710bb; -[SCCommerceLineItemCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d710ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d8ec);
}



/* Entry: 106d710bc; end: 106d710db; -[SCCommerceLineItemCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d710bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d710dc; end: 106d710fb; -[SCCommerceLineItemCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d710dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d8f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d710fc; end: 106d71153; -[SCCommerceLineItemCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d710fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d8f4);
  _objc_destroyWeak(param_1 + _DAT_11275d8f0);
  _objc_storeStrong(param_1 + _DAT_11275d8e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d8ec,0);
  return;
}



/* Entry: 106d71154; end: 106d711a3; -[SCCommerceStoreCellView initWithFrame:] */

undefined1 * FUN_106d71154(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6ca0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d711a4; end: 106d7132b; -[SCCommerceStoreCellView _setupSubviews] */

/* WARNING: Possible PIC construction at 0x000106d712ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106d71304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d712f0) */
/* WARNING: Removing unreachable block (ram,0x000106d71308) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d711a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b0608;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_11275d8f8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11275d8fc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11275d900;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11275d904;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106d7132c; end: 106d7133b; -[SCCommerceStoreCellView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d7132c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d8f8),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 106d7133c; end: 106d71483; -[SCCommerceStoreCellView _updateViewContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d7133c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26dde0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805a0(*(undefined8 *)(param_1 + _DAT_11275d8f8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c257d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275d8fc;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar1);
  func_0x00010c257ca0(param_3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  uVar1 = param_3;
  func_0x00010c11cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275d900;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar1);
  func_0x00010c11cfc0(param_3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bf90ec0(param_3);
  _objc_release(param_3);
  lVar4 = (long)_DAT_11275d904;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010bddc380(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraints_112593058);
  return;
}



/* Entry: 106d71484; end: 106d71b87; -[SCCommerceStoreCellView _updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11275d908;
  if (*(long *)(param_5 + lVar15) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11275d8f8;
  uVar3 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar16);
  uStack_a0 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar16);
  uStack_98 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_5;
  func_0x00010bf348e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf493a0(uVar6,param_6,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar16);
  uStack_90 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_5;
  func_0x00010c08de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 0x4030000000000000;
  uVar12 = uVar7;
  func_0x00010bf493c0(0x4030000000000000,uVar7,param_6,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_6,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar12);
  _objc_release(lVar18);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(lVar17);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  lVar17 = (long)_DAT_11275d904;
  uVar9 = *(ulong *)(param_5 + lVar17);
  func_0x00010c074c20();
  if ((uVar9 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bfe6ac0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar10);
    uVar3 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0(uVar3,param_6,lVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + lVar17);
    uStack_c0 = uVar10;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + lVar17);
    uStack_b8 = uVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010bf49420(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar17);
    uStack_b0 = uVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_5;
    func_0x00010c2793a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf493c0(0xc030000000000000,uVar7,param_6,lVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_c0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_6,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(uVar7);
    _objc_release(uVar14);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(lVar18);
    _objc_release(uVar3);
  }
  lVar18 = (long)_DAT_11275d8fc;
  uVar10 = *(undefined8 *)(param_5 + lVar18);
  func_0x00010bf0e540(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_5);
  func_0x00010bf20bc0(param_3,param_4,uVar10,param_6,2,0);
  _objc_release(uVar10);
  uVar12 = *(undefined8 *)(param_5 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf493a0(uVar12,param_6,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar18);
  uStack_e0 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar18);
  uStack_d8 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bf49420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_5 + lVar18);
  uStack_d0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_5 + lVar17);
  func_0x00010c074c20();
  if (iVar1 == 0) {
    lVar17 = *(long *)(param_5 + lVar17);
    func_0x00010c08de00(lVar17);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar17 = param_5;
    func_0x00010c2793a0(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar13 = uVar19;
  func_0x00010bf493a0(uVar19,param_6,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_e0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_6,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar13);
  _objc_release(lVar17);
  _objc_release(uVar19);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar12);
  lVar17 = (long)_DAT_11275d900;
  uVar14 = *(undefined8 *)(param_5 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar18);
  func_0x00010bf1ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar14;
  func_0x00010bf493a0(uVar14,param_6,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar17);
  uStack_f0 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar18);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_f0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_6,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar14);
  uVar10 = *(undefined8 *)(param_5 + lVar15);
  *(undefined **)(param_5 + lVar15) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar10);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,
                      *(undefined8 *)(param_5 + lVar15));
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b0c40;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_6,0x87,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d71b88; end: 106d71c03; -[SCCommerceStoreCellView _cellRightIconImage] */

void FUN_106d71b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x87,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d71c04; end: 106d71c23; -[SCCommerceStoreCellView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71c04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d90c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d71c24; end: 106d71c9f; -[SCCommerceStoreCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71c24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d90c);
  _objc_storeStrong(param_1 + _DAT_11275d908,0);
  _objc_storeStrong(param_1 + _DAT_11275d904,0);
  _objc_storeStrong(param_1 + _DAT_11275d900,0);
  _objc_storeStrong(param_1 + _DAT_11275d8fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d8f8,0);
  return;
}



/* Entry: 106d71ca0; end: 106d71d1f; +[SCCommerceStoreCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106d71ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b0a68;
  _objc_opt_class(PTR_PTR_1126b0a68);
  lVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  bVar1 = ((uint)(param_4 != 0) & (uint)lVar3) == 0;
  if (bVar1) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar4 = 0x404e000000000000;
  if (bVar1) {
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106d71d20; end: 106d71def; -[SCCommerceStoreCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d71d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR_PTR_1126d2608;
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  puStack_58 = PTR_PTR_1126f6ca8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_underlyingView__1125e2e00,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11275d910;
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined **)((long)puVar2 + lVar4) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 106d71df0; end: 106d71dff; -[SCCommerceStoreCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d910),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 106d71e00; end: 106d71ed7; -[SCCommerceStoreCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71e00(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0a68;
  _objc_opt_class(PTR_PTR_1126b0a68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((param_3 != 0) && ((uVar2 & 1) != 0)) {
    lVar5 = (long)_DAT_11275d914;
    uVar2 = param_3;
    func_0x00010c071ae0();
    puVar1 = PTR_PTR_1126b0a68;
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_3);
      _objc_opt_class(puVar1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      uVar2 = param_3;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = uVar2;
      _objc_release(uVar4);
      func_0x00010bee3620(*(undefined8 *)(param_1 + _DAT_11275d910));
      func_0x00010bf90ec0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c21e900(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d71ed8; end: 106d71f2b; -[SCCommerceStoreCell setHighlighted:] */

void FUN_106d71ed8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0x1e;
  if (param_3 == 0) {
    uVar1 = 0x29;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d71f2c; end: 106d71f3b; -[SCCommerceStoreCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d71f2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d914);
}



/* Entry: 106d71f3c; end: 106d71f5b; -[SCCommerceStoreCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71f3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d71f5c; end: 106d71fa7; -[SCCommerceStoreCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71f5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d918);
  _objc_storeStrong(param_1 + _DAT_11275d910,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d914,0);
  return;
}



/* Entry: 106d71fa8; end: 106d7225f; -[SCCommerceAutoSizeToFitCollectionViewFlowLayout prepareLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d71fa8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5
                  )

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar9 = (long)_DAT_11275d91c;
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  *(undefined **)(param_5 + lVar9) = puVar1;
  _objc_release(uVar7);
  lVar10 = (long)_DAT_11275d920;
  *(undefined8 *)(param_5 + lVar10) = 0;
  lVar11 = (long)_DAT_11275d924;
  *(undefined8 *)(param_5 + lVar11) = 0;
  uVar8 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c0deec0();
  _objc_release(uVar8);
  if (0 < (long)uVar2) {
    uVar8 = 0;
    dVar15 = 0.0;
    do {
      puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar13 = param_3;
      _objc_release(uVar3);
      uVar3 = param_5;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar14 = param_4;
      _objc_release(uVar3);
      uVar3 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
      _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar6 & 1) == 0) {
LAB_106d72148:
        puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0(dVar15,0,param_3,param_4);
        func_0x00010befa120(*(undefined8 *)(param_5 + lVar9));
        dVar16 = *(double *)(param_5 + lVar11);
        dVar12 = dVar15;
        dVar13 = param_3;
        dVar14 = param_4;
        _CGRectGetMaxX(dVar15,0);
        if (dVar12 <= dVar16) {
          dVar12 = dVar16;
        }
        *(double *)(param_5 + lVar11) = dVar12;
        *(double *)(param_5 + lVar10) = param_4;
        param_4 = param_3;
LAB_106d721ac:
        dVar15 = dVar15 + param_4;
        _objc_release(puVar5);
      }
      else {
        uVar3 = param_5;
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf408e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar4;
        func_0x00010c151fc0();
        _objc_release(uVar4);
        if (uVar3 == 0) {
          puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
          func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19f0e0(0,dVar15,param_3,param_4);
          func_0x00010befa120(*(undefined8 *)(param_5 + lVar9));
          dVar16 = *(double *)(param_5 + lVar10);
          dVar12 = 0.0;
          dVar13 = param_3;
          dVar14 = param_4;
          _CGRectGetMaxY(0,dVar15);
          if (dVar12 <= dVar16) {
            dVar12 = dVar16;
          }
          *(double *)(param_5 + lVar10) = dVar12;
          *(double *)(param_5 + lVar11) = param_3;
          goto LAB_106d721ac;
        }
        if (uVar3 == 1) goto LAB_106d72148;
      }
      param_4 = dVar14;
      param_3 = dVar13;
      _objc_release(puVar1);
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  return;
}



/* Entry: 106d72260; end: 106d72277; -[SCCommerceAutoSizeToFitCollectionViewFlowLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106d72260(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(param_1 + _DAT_11275d924);
  auVar1._8_8_ = *(undefined8 *)(param_1 + _DAT_11275d920);
  return auVar1;
}



/* Entry: 106d72278; end: 106d723d7; -[SCCommerceAutoSizeToFitCollectionViewFlowLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106d72278(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  undefined8 uVar4;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = *(long *)(param_1 + _DAT_11275d91c);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_f8,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        uVar4 = uVar6;
        func_0x00010bfb68e0();
        iVar1 = (int)uVar4;
        _CGRectIntersectsRect();
        if (iVar1 != 0) {
          func_0x00010befa120(puVar2,param_2,uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(lVar5 + _DAT_11275d91c);
}



/* Entry: 106d723d8; end: 106d723e7; -[SCCommerceAutoSizeToFitCollectionViewFlowLayout cache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d723d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d91c);
}



/* Entry: 106d723e8; end: 106d72427; -[SCCommerceAutoSizeToFitCollectionViewFlowLayout setCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d723e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d91c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d72428; end: 106d7243b; -[SCCommerceAutoSizeToFitCollectionViewFlowLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d72428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d91c,0);
  return;
}



/* Entry: 106d7243c; end: 106d72587; -[SCCommerceProductDetailsPageImageSlider initWithNumberOfImages:] */

undefined1 * FUN_106d7243c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f6cb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    func_0x00010c1cfc60(puVar1);
    func_0x00010beb0780(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8420(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c3ce0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    func_0x00010c1c8440(0,puVar1);
    func_0x00010c1c3d00(0x42c80000,puVar1);
    func_0x00010c220160(0,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d72588; end: 106d725bf; -[SCCommerceProductDetailsPageImageSlider trackRectForBounds:] */

void FUN_106d72588(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6cb0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_trackRectForBounds__112534f38);
  return;
}



/* Entry: 106d725c0; end: 106d727f7; -[SCCommerceProductDetailsPageImageSlider _setupThumbImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d725c0(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  func_0x00010bf20c00();
  dVar8 = param_3 / (double)*(long *)(param_4 + _DAT_11275d92c) -
          *(double *)(param_4 + _DAT_11275d930);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(dVar8,0x4010000000000000);
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00010bfe91c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _CGColorSpaceCreateDeviceRGB();
  puVar5 = puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1020();
  _CGImageGetBitsPerComponent();
  uVar6 = 0;
  _CGBitmapContextCreate(0,(long)(dVar8 + 4.0),0xc,puVar5,0,puVar4,1);
  _CGColorSpaceRelease(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fbeb851eb851eb8,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetShadowWithColor(0,0,0x4014000000000000,uVar6,puVar5);
  _objc_release(puVar4);
  puVar4 = puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1020();
  _CGContextDrawImage(0x4000000000000000,0x4010000000000000,dVar8,0x4010000000000000,uVar6,puVar4);
  uVar7 = uVar6;
  _CGBitmapContextCreateImage(uVar6);
  _CGContextRelease(uVar6);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(uVar7);
  _UIGraphicsEndImageContext();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c213e00(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106d727f8; end: 106d728a3; -[SCCommerceProductDetailsPageImageSlider thumbRectForBounds:trackRect:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106d727f8(double param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f6cb0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_thumbRectForBounds_trackRect_val_112534f40);
  func_0x00010bf20c00(param_2);
  func_0x00010c0dee80(param_2);
  func_0x00010c0dee80(param_2);
  return param_1 + 2.0;
}



/* Entry: 106d728a4; end: 106d728d7; -[SCCommerceProductDetailsPageImageSlider setNumberOfImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d728a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11275d92c) = param_3;
  func_0x00010beb0780();
                    /* WARNING: Could not recover jumptable at 0x00010c220170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setValue__112665a80);
  return;
}



/* Entry: 106d728d8; end: 106d729ab; -[SCCommerceProductDetailsPageImageSlider scrollSliderToScrollPosition:totalContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d728d8(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar2 = param_3;
  func_0x00010c0dee80();
  if (param_2 != 0.0 && 1 < lVar2) {
    lVar2 = (long)_DAT_11275d930;
    *(undefined8 *)(param_3 + lVar2) = 0;
    dVar3 = 0.0;
    if (0.0 <= param_1) {
      dVar3 = (param_1 / param_2) * 100.0;
    }
    dVar4 = 100.0;
    if (param_1 <= param_2) {
      dVar4 = dVar3;
    }
    func_0x00010c220180((float)dVar4,param_3);
    if ((param_1 < 0.0) || (param_2 < param_1)) {
      lVar1 = param_3;
      func_0x00010c0dee80();
      param_1 = ABS(param_1);
      _fmod(param_1,param_2);
      *(double *)(param_3 + lVar2) = param_1 * (1.0 / (double)lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb0790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__setupThumbImageSize_112589b88);
      return;
    }
  }
  return;
}



/* Entry: 106d729ac; end: 106d729cb; -[SCCommerceProductDetailsPageImageSlider delgate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d729ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d934);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d729cc; end: 106d729df; -[SCCommerceProductDetailsPageImageSlider setDelgate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d729cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d934,param_3);
  return;
}



/* Entry: 106d729e0; end: 106d729ef; -[SCCommerceProductDetailsPageImageSlider numberOfImages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d729e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d92c);
}



/* Entry: 106d729f0; end: 106d72a83; -[SCCommerceProductDetailsPageImageSlider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d729f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d934);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d938,0);
  return;
}



/* Entry: 106d72a84; end: 106d72b53; -[SCCommerceUnlimitedCollectionView initWithFrame:] */

undefined1 *
FUN_106d72a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puVar1 = PTR_PTR_1126d2610;
  _objc_opt_new(PTR_PTR_1126d2610);
  func_0x00010c1f7ac0();
  puStack_48 = PTR_PTR_1126f6cb8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c167a00(puVar2);
    func_0x00010c1d8be0(puVar2);
    func_0x00010c2026e0(puVar2);
    func_0x00010c2025c0(puVar2);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 106d72b54; end: 106d72c43; -[SCCommerceUnlimitedCollectionView scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_106d72b54(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,double *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c152ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dee80();
  _objc_release(lVar1);
  if (1 < lVar2) {
    dVar4 = *param_7;
    func_0x00010bfb68e0(param_6);
    lVar3 = (long)(dVar4 / param_3);
    lVar1 = param_4;
    func_0x00010c152ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dee80();
    _objc_release(lVar1);
    if (lVar2 < lVar3) {
      func_0x00010c152ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010c0dee80();
      _objc_release(param_4);
    }
    func_0x00010bfb68e0(param_6);
    *param_7 = param_3 * (double)lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106d72c44; end: 106d72cc7; -[SCCommerceUnlimitedCollectionView scrollViewDidScroll:] */

void FUN_106d72c44(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  
  _objc_retain(param_6);
  func_0x00010bf4d5e0(param_4);
  dVar1 = param_1;
  func_0x00010bfb68e0(param_6);
  _objc_release(param_6);
  func_0x00010bf4cdc0(param_4);
  func_0x00010c152ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152240(dVar1,param_1 - param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d72cc8; end: 106d72d13; -[SCCommerceUnlimitedCollectionView scrollToItemAtIndexPath:animated:] */

void FUN_106d72cc8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  func_0x00010c0840e0(param_6);
  func_0x00010bfb68e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3 * (double)param_6,0,param_4,PTR_s_setContentOffset_animated__11263e2e0,param_7)
  ;
  return;
}



/* Entry: 106d72d14; end: 106d72d1b; -[SCCommerceUnlimitedCollectionView numberOfSections] */

undefined8 FUN_106d72d14(void)

{
  return 1;
}



/* Entry: 106d72d1c; end: 106d72d3b; -[SCCommerceUnlimitedCollectionView scrubber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d72d1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d93c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d72d3c; end: 106d72d4f; -[SCCommerceUnlimitedCollectionView setScrubber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d72d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d93c,param_3);
  return;
}



/* Entry: 106d72d50; end: 106d72d5f; -[SCCommerceUnlimitedCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d72d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d93c);
  return;
}


