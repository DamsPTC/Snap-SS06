/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106634378; end: 1066343f7;  */

void FUN_106634378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1066343f8;
  puStack_30 = &UNK_110842e18;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010bef95a0(0,0x3ff0000000000000,puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1066343f8; end: 106634433;  */

void FUN_1066343f8(long param_1,undefined8 param_2)

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
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 106634434; end: 106634463;  */

void FUN_106634434(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ac00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 106634464; end: 1066348cf; -[SCUnifiedProfileView initWithFrame:delegate:customAppThemeProvider:] */

/* WARNING: Possible PIC construction at 0x000106634c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106634c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106634c38) */
/* WARNING: Removing unreachable block (ram,0x000106634c64) */
/* WARNING: Removing unreachable block (ram,0x000106634c9c) */
/* WARNING: Removing unreachable block (ram,0x000106634cf0) */
/* WARNING: Removing unreachable block (ram,0x000106634df4) */
/* WARNING: Removing unreachable block (ram,0x000106634de0) */
/* WARNING: Removing unreachable block (ram,0x000106634ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106634464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_a0 = PTR_PTR_1126f22c0;
  puVar13 = &uStack_a8;
  uVar15 = param_1;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar13,PTR_s_initWithFrame__1125e2948);
  if (puVar13 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar13 + (long)_DAT_11274c828,param_7);
    puVar1 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    lVar16 = (long)_DAT_11274c82c;
    uVar14 = *(undefined8 *)((long)puVar13 + lVar16);
    *(undefined **)((long)puVar13 + lVar16) = puVar1;
    _objc_release(uVar14);
    lVar17 = (long)_DAT_11274c830;
    _objc_retain(param_8);
    uVar14 = *(undefined8 *)((long)puVar13 + lVar17);
    *(undefined8 *)((long)puVar13 + lVar17) = param_8;
    _objc_release(uVar14);
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    *(undefined8 *)((long)puVar13 + (long)_DAT_11274c834) = uVar15;
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar18 = (long)_DAT_11274c838;
    uVar15 = *(undefined8 *)((long)puVar13 + lVar18);
    *(undefined **)((long)puVar13 + lVar18) = puVar1;
    _objc_release(uVar15);
    func_0x00010befbb60(puVar13);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar17 = (long)_DAT_11274c83c;
    uVar15 = *(undefined8 *)((long)puVar13 + lVar17);
    *(undefined **)((long)puVar13 + lVar17) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar13 + lVar17));
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar13 + lVar18));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar19 = (long)_DAT_11274c840;
    uVar15 = *(undefined8 *)((long)puVar13 + lVar19);
    *(undefined **)((long)puVar13 + lVar19) = puVar1;
    _objc_release(uVar15);
    func_0x000108f7496c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar13 + lVar19));
    _objc_release(uVar15);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar13 + lVar19));
    func_0x00010befbb60(*(undefined8 *)((long)puVar13 + lVar18));
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_opt_new();
    lVar17 = (long)_DAT_11274c844;
    uVar15 = *(undefined8 *)((long)puVar13 + lVar17);
    *(undefined **)((long)puVar13 + lVar17) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puStack_98 = puVar2;
    func_0x000108f7496c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar13 + lVar17));
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar15 = *(undefined8 *)((long)puVar13 + lVar19);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126cc458;
    _objc_opt_class();
    _objc_alloc();
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    lVar17 = (long)_DAT_11274c848;
    uVar15 = *(undefined8 *)((long)puVar13 + lVar17);
    *(undefined **)((long)puVar13 + lVar17) = puVar2;
    _objc_release(uVar15);
    func_0x00010c16e440(*(undefined8 *)((long)puVar13 + lVar17));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar13 + lVar17));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar13 + lVar17));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar13 + lVar17));
    func_0x00010bde7b00(puVar13);
    func_0x00010c181f80(*(undefined8 *)((long)puVar13 + lVar17));
    func_0x00010befbb60(*(undefined8 *)((long)puVar13 + lVar19));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c16e9a0(*(undefined8 *)((long)puVar13 + lVar17));
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cc460;
    _objc_alloc();
    func_0x00010c005f60(0x4024000000000000);
    uVar15 = *(undefined8 *)((long)puVar13 + (long)_DAT_11274c84c);
    *(undefined **)((long)puVar13 + (long)_DAT_11274c84c) = puVar2;
    _objc_release(uVar15);
    func_0x00010befbb60(*(undefined8 *)((long)puVar13 + lVar18));
    func_0x00010c0e0760(*(undefined8 *)((long)puVar13 + lVar16));
    func_0x00010bee1f60(puVar13);
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar13;
  }
  ___stack_chk_fail();
  if (lRam00000001138466f0 < 3) {
    puVar13 = *(undefined8 **)(param_7 + _DAT_11274c850);
    uVar15 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar17 = (long)_DAT_11274c850;
    uVar15 = *(undefined8 *)(param_7 + lVar17);
    *(undefined **)(param_7 + lVar17) = puVar1;
    _objc_release(uVar15);
    func_0x00010c18b5e0(*(undefined8 *)(param_7 + lVar17));
    func_0x00010c0678a0(*(undefined8 *)(param_7 + lVar17));
    lVar18 = (long)_DAT_11274c854;
    lVar16 = *(long *)(param_7 + lVar18);
    if (lVar16 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010bf20c00(param_7);
      func_0x00010c013de0();
      uVar15 = *(undefined8 *)(param_7 + lVar18);
      *(undefined **)(param_7 + lVar18) = puVar1;
      _objc_release(uVar15);
      func_0x00010c219b60(*(undefined8 *)(param_7 + lVar18));
      func_0x00010c066fa0(*(undefined8 *)(param_7 + _DAT_11274c84c));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar5 = *(undefined8 *)(param_7 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_7;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_7 + lVar18);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_7 + lVar18);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_7;
      func_0x00010c2793a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_7 + lVar18);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_7;
      func_0x00010bf1ff80(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar2);
      _objc_release(uVar12);
      _objc_release(lVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(lVar8);
      _objc_release(uVar7);
      _objc_release(uVar14);
      _objc_release(lVar19);
      _objc_release(uVar6);
      _objc_release(uVar15);
      _objc_release(lVar16);
      _objc_release(uVar5);
      puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
      func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(puVar1);
      _objc_release(puVar2);
      uVar15 = *(undefined8 *)(param_7 + lVar18);
      func_0x00010c08c0e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar15);
      _objc_release(puVar1);
      lVar16 = *(long *)(param_7 + lVar18);
    }
    func_0x00010c1677c0(0,lVar16);
    uVar15 = *(undefined8 *)(param_7 + lVar17);
    func_0x00010bf5e160(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_7 + lVar18));
    _objc_release(uVar15);
    puVar13 = *(undefined8 **)(param_7 + lVar18);
    uVar15 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar13,PTR_s_setHidden__1126479f8,uVar15);
  return puVar13;
}



/* Entry: 1066348d0; end: 106634cf3; -[SCUnifiedProfileView _updateThemedBackground] */

/* WARNING: Possible PIC construction at 0x000106634c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106634c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106634c38) */
/* WARNING: Removing unreachable block (ram,0x000106634c64) */
/* WARNING: Removing unreachable block (ram,0x000106634c9c) */
/* WARNING: Removing unreachable block (ram,0x000106634cf0) */
/* WARNING: Removing unreachable block (ram,0x000106634df4) */
/* WARNING: Removing unreachable block (ram,0x000106634de0) */
/* WARNING: Removing unreachable block (ram,0x000106634ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066348d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  if (lRam00000001138466f0 < 3) {
    uVar14 = *(undefined8 *)(param_1 + _DAT_11274c850);
    uVar13 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar15 = (long)_DAT_11274c850;
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar14);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c0678a0(*(undefined8 *)(param_1 + lVar15));
    lVar16 = (long)_DAT_11274c854;
    lVar2 = *(long *)(param_1 + lVar16);
    if (lVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010bf20c00(param_1);
      func_0x00010c013de0();
      uVar14 = *(undefined8 *)(param_1 + lVar16);
      *(undefined **)(param_1 + lVar16) = puVar1;
      _objc_release(uVar14);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
      func_0x00010c066fa0(*(undefined8 *)(param_1 + _DAT_11274c84c));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c2793a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar16);
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
      _objc_release(uVar13);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar14);
      _objc_release(lVar2);
      _objc_release(uVar3);
      puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
      func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(puVar1);
      _objc_release(puVar12);
      uVar14 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c08c0e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar14);
      _objc_release(puVar1);
      lVar2 = *(long *)(param_1 + lVar16);
    }
    func_0x00010c1677c0(0,lVar2);
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf5e160(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar16));
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    uVar13 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar14,PTR_s_setHidden__1126479f8,uVar13);
  return;
}



/* Entry: 106634cf4; end: 106634df7; -[SCUnifiedProfileView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106634cf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1126f22c0;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puStack_48 = puVar2;
  func_0x000108f7496c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + _DAT_11274c844));
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106634df8;
  puStack_80 = puVar1;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010c281b20(*(undefined8 *)(puVar2 + _DAT_11274c82c));
  puStack_88 = PTR_PTR_1126f22c0;
  puStack_90 = puVar2;
  _objc_msgSendSuper2(&puStack_90,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106634df8; end: 106634e47; -[SCUnifiedProfileView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106634df8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11274c82c));
  puStack_28 = PTR_PTR_1126f22c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106634e48; end: 10663506f; -[SCUnifiedProfileView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106634e48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f22c0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11274c838));
  lVar4 = (long)_DAT_11274c834;
  func_0x00010bf20c00(param_1);
  lVar3 = (long)_DAT_11274c83c;
  func_0x00010c19f0e0(0,0,*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x4024000000000000;
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  lVar5 = (long)_DAT_11274c840;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
  _CGRectGetWidth();
  lVar3 = (long)_DAT_11274c84c;
  func_0x00010c19f0e0(0,uVar1,uVar7,0x404b800000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010bde7b20(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
  lVar6 = (long)_DAT_11274c848;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar6));
  lVar5 = (long)_DAT_11274c844;
  if (*(long *)(param_1 + lVar5) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010befe660(&uStack_90);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
  }
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c166440(uVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
  _CGRectGetWidth();
  dVar8 = 300.0;
  func_0x00010c19f0e0(0,0,uVar7,0x4072c00000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c166440(*(undefined8 *)(param_1 + lVar5));
  if (2 < lRam00000001138466f0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
    dVar9 = *(double *)(param_1 + lVar4);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274c854);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(0,0,uVar7,dVar9 + dVar8);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106635070; end: 106635073; -[SCUnifiedProfileView containerViewFrame] */

void FUN_106635070(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__contentContainerViewFrame_112557868);
  return;
}



/* Entry: 106635074; end: 1066350a7; -[SCUnifiedProfileView scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635074(long param_1)

{
  param_1 = param_1 + _DAT_11274c828;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066350a8; end: 1066350ab; -[SCUnifiedProfileView scrollViewDidEndDecelerating:] */

void FUN_1066350a8(void)

{
  return;
}



/* Entry: 1066350ac; end: 1066350af; -[SCUnifiedProfileView scrollViewDidEndDragging:willDecelerate:] */

void FUN_1066350ac(void)

{
  return;
}



/* Entry: 1066350b0; end: 1066350d3; -[SCUnifiedProfileView _contentCollectionViewEdgeInset] */

double FUN_1066350b0(double param_1)

{
  func_0x000108f6e6a8();
  param_1 = param_1 + -13.5;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return param_1;
}



/* Entry: 1066350d4; end: 10663512f; -[SCUnifiedProfileView _contentContainerViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066350d4(long param_1)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11274c838));
  func_0x00010bf20c00(param_1);
  return 0;
}



/* Entry: 106635130; end: 106635143; -[SCUnifiedProfileView themeBackgroundView:didUpdateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c854),PTR_s_setImage__1126481e8,param_4);
  return;
}



/* Entry: 106635144; end: 1066351b7; -[SCUnifiedProfileView _updateContentCollectionViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635144(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = (long)_DAT_11274c858;
  dVar3 = *(double *)(param_3 + lVar1);
  lVar2 = (long)_DAT_11274c848;
  func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar2));
  if (dVar3 != param_2) {
    func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar2));
    *(double *)(param_3 + lVar1) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 1066351b8; end: 1066351c7; -[SCUnifiedProfileView headerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066351b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c84c);
}



/* Entry: 1066351c8; end: 1066351d7; -[SCUnifiedProfileView contentCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066351c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c848);
}



/* Entry: 1066351d8; end: 1066352a3; -[SCUnifiedProfileView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066351d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c848,0);
  _objc_storeStrong(param_1 + _DAT_11274c84c,0);
  _objc_storeStrong(param_1 + _DAT_11274c830,0);
  _objc_destroyWeak(param_1 + _DAT_11274c828);
  _objc_storeStrong(param_1 + _DAT_11274c82c,0);
  _objc_storeStrong(param_1 + _DAT_11274c850,0);
  _objc_storeStrong(param_1 + _DAT_11274c854,0);
  _objc_storeStrong(param_1 + _DAT_11274c844,0);
  _objc_storeStrong(param_1 + _DAT_11274c83c,0);
  _objc_storeStrong(param_1 + _DAT_11274c840,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c838,0);
  return;
}



/* Entry: 1066352a4; end: 10663547f; -[SCUnifiedProfileViewController initWithHeaderDataProvider:sectionCreator:actionHandler:sectionProviders:pageViewName:circumstanceEngine:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066352a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f22c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126cc3f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c860);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c860) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274c864;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274c868;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274c86c;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c870);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c870) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274c874) = param_7;
    lVar4 = (long)_DAT_11274c878;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274c87c;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274c880;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106635480; end: 1066354df; -[SCUnifiedProfileViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635480(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11274c884;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1174a0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126f22c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1066354e0; end: 1066356b7; -[SCUnifiedProfileViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066354e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126cc450;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c014300();
  lVar6 = (long)_DAT_11274c888;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  lVar5 = (long)_DAT_11274c868;
  uVar3 = *(ulong *)(param_1 + lVar5);
  _objc_opt_respondsToSelector(uVar3,PTR_s_lifecycleAnnouncer_1125257b0);
  if ((uVar3 & 1) != 0) {
    func_0x00010c1bd8e0(*(undefined8 *)(param_1 + lVar5));
  }
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe01e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe01e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161980();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11274c88c) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07f8c0();
  *(char *)(param_1 + _DAT_11274c890) = (char)puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066356b8; end: 10663586f; -[SCUnifiedProfileViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066356b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f22c8;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126cc468;
  _objc_alloc();
  lVar7 = (long)_DAT_11274c888;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfe01e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a100();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274c894);
  *(undefined **)(param_1 + _DAT_11274c894) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126cc408;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf4c080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_opt_new();
  func_0x00010bfff8a0();
  lVar7 = (long)_DAT_11274c898;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  lVar7 = (long)_DAT_11274c884;
  uVar4 = param_1 + lVar7;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  _objc_opt_respondsToSelector();
  _objc_release(uVar4);
  if ((uVar5 & 1) != 0) {
    param_1 = param_1 + lVar7;
    _objc_loadWeakRetained(param_1);
    func_0x00010c117480();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106635870; end: 106635a17; -[SCUnifiedProfileViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635870(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f22c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) goto LAB_1066358d8;
  }
  else {
LAB_1066358d8:
    func_0x00010c2800c0(*(undefined8 *)(param_1 + (long)_DAT_11274c860));
    lVar3 = param_1 + (long)_DAT_11274c884;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1175c0();
    _objc_release(lVar3);
  }
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c077fe0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_10663596c;
  }
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + (long)_DAT_11274c870));
LAB_10663596c:
  func_0x00010c1cbec0(param_1);
  uVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0787e0();
  *(char *)(param_1 + (long)_DAT_11274c89c) = (char)uVar2;
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + (long)_DAT_11274c870));
  return;
}



/* Entry: 106635a18; end: 106635ae7; -[SCUnifiedProfileViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635a18(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f22c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c077fe0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106635ab0;
  }
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + (long)_DAT_11274c870));
LAB_106635ab0:
  lVar3 = param_1 + (long)_DAT_11274c884;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1174e0();
  _objc_release(lVar3);
  return;
}



/* Entry: 106635ae8; end: 106635b4b; -[SCUnifiedProfileViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635ae8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f22c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  param_1 = param_1 + _DAT_11274c884;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1175e0();
  _objc_release(param_1);
  return;
}



/* Entry: 106635b4c; end: 106635bb3; -[SCUnifiedProfileViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635b4c(long param_1,undefined8 param_2,long param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f22c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToParentViewController__1125bb948);
  if (param_3 == 0) {
    param_1 = param_1 + _DAT_11274c884;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1174a0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106635bb4; end: 106635d9b; -[SCUnifiedProfileViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635bb4(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f22c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidDisappear__112684c48);
  lVar4 = (long)_DAT_11274c870;
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + lVar4));
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c077fc0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106635d1c;
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c106ee0(param_1);
  }
  func_0x00010c14dc40(puVar3);
  _objc_release(puVar3);
  uVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(uVar1);
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + lVar4));
LAB_106635d1c:
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  func_0x00010c27ffe0(*(undefined8 *)(param_1 + (long)_DAT_11274c860));
  lVar4 = param_1 + (long)_DAT_11274c884;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c117500();
  _objc_release(lVar4);
  return;
}



/* Entry: 106635d9c; end: 106635de3; -[SCUnifiedProfileViewController cardToExpandTransition] */

void FUN_106635d9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = lVar1;
  }
  _objc_retain(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106635de4; end: 106635e57; -[SCUnifiedProfileViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635de4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf31f60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0797a0();
  if ((int)lVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274c87c);
    func_0x000108fab1e8();
    if (iVar1 != 0) {
      func_0x00010bf84a00(param_1,param_2,1,0);
      goto LAB_106635e48;
    }
  }
  func_0x00010bf84b00(lVar2,param_2,1,0);
LAB_106635e48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106635e58; end: 106635e5f; -[SCUnifiedProfileViewController cardTransitionShouldBeginWithView:touchLocation:] */

undefined8 FUN_106635e58(void)

{
  return 1;
}



/* Entry: 106635e60; end: 106635e63; -[SCUnifiedProfileViewController cardTransitionEndedWithView:transitionType:] */

void FUN_106635e60(void)

{
  return;
}



/* Entry: 106635e64; end: 106635e73; -[SCUnifiedProfileViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106635e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c874);
}



/* Entry: 106635e74; end: 106635e77; -[SCUnifiedProfileViewController unifiedProfileHeaderViewDidTapDismissButton:] */

void FUN_106635e74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf849f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissUnifiedProfile_1125bec20);
  return;
}



/* Entry: 106635e78; end: 106635e8f; -[SCUnifiedProfileViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635e78(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274c860),PTR_s_addListener__11259c008);
    return;
  }
  return;
}



/* Entry: 106635e90; end: 106635ea7; -[SCUnifiedProfileViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635e90(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274c860),PTR_s_removeListener__112628e00);
    return;
  }
  return;
}



/* Entry: 106635ea8; end: 106635eeb; -[SCUnifiedProfileViewController dismissUnifiedProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635ea8(long param_1)

{
  param_1 = param_1 + _DAT_11274c884;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106635eec; end: 106635f4f; -[SCUnifiedProfileViewController dismissUnifiedProfileAnimated:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635eec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274c884;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84320();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106635f50; end: 106635f7f; -[SCUnifiedProfileViewController unifiedProfileView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106635f50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274c888);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106635f80; end: 106635fe3; -[SCUnifiedProfileViewController canPanDownToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106635f80(undefined8 param_1,double param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274c888;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar4);
  func_0x00010c082800();
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010bf4c080(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    bVar3 = param_2 <= 0.0;
    _objc_release(uVar2);
  }
  return bVar3;
}



/* Entry: 106635fe4; end: 106635fe7; -[SCUnifiedProfileViewController preferredStatusBarStyle] */

undefined8 FUN_106635fe4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 106635fe8; end: 106635fef; -[SCUnifiedProfileViewController prefersStatusBarHidden] */

undefined8 FUN_106635fe8(void)

{
  return 0;
}



/* Entry: 106635ff0; end: 106635ff7; -[SCUnifiedProfileViewController preferredStatusBarUpdateAnimation] */

undefined8 FUN_106635ff0(void)

{
  return 1;
}



/* Entry: 106635ff8; end: 1066360b3; -[SCUnifiedProfileViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_106635ff8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f22c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c106ee0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1066360b4; end: 1066360b7; -[SCUnifiedProfileViewController willStartCensoringScreenshot] */

void FUN_1066360b4(void)

{
  return;
}



/* Entry: 1066360b8; end: 1066360bb; -[SCUnifiedProfileViewController willEndCensoringScreenshot] */

void FUN_1066360b8(void)

{
  return;
}



/* Entry: 1066360bc; end: 1066360c7; -[SCUnifiedProfileViewController defaultProjectNameV2] */

undefined ** FUN_1066360bc(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 1066360c8; end: 1066360cf; -[SCUnifiedProfileViewController shouldDismissViewControllerLater] */

undefined8 FUN_1066360c8(void)

{
  return 1;
}



/* Entry: 1066360d0; end: 1066360fb; -[SCUnifiedProfileViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_1066360d0(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    _objc_alloc_init(PTR_PTR_1126cc400);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066360fc; end: 1066360ff; -[SCUnifiedProfileViewController didSetupSections:] */

void FUN_1066360fc(void)

{
  return;
}



/* Entry: 106636100; end: 10663616b; -[SCUnifiedProfileViewController didUpdateSectionsWithAnimationFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106636100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274c86c);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(uVar2,param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10663616c; end: 10663616f; -[SCUnifiedProfileViewController didTearDownSections:] */

void FUN_10663616c(void)

{
  return;
}



/* Entry: 106636170; end: 106636173; -[SCUnifiedProfileViewController presentingViewControllerForSection] */

void FUN_106636170(void)

{
  return;
}



/* Entry: 106636174; end: 1066362cb; -[SCUnifiedProfileViewController handleNotificationWhenReady:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106636174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b43a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar7 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15f540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0dc200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05c420(puVar1,param_2,uVar7,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274c86c);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar7,param_2,param_1,puVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066362cc; end: 1066362ef; -[SCUnifiedProfileViewController scrollViewWillScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066362cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c870),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098,
             &PTR____CFConstantStringClassReference_110eb7358,0,0);
  return;
}



/* Entry: 1066362f0; end: 106636343; -[SCUnifiedProfileViewController exit:] */

void FUN_1066362f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  func_0x00010bf098c0(puVar1);
  func_0x00010bf84a00(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106636344; end: 106636363; -[SCUnifiedProfileViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106636344(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274c884);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106636364; end: 106636377; -[SCUnifiedProfileViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106636364(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274c884,param_3);
  return;
}



/* Entry: 106636378; end: 106636387; -[SCUnifiedProfileViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106636378(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c870);
}



/* Entry: 106636388; end: 106636397; -[SCUnifiedProfileViewController isOverlayPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106636388(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274c85c);
}



/* Entry: 106636398; end: 1066363a7; -[SCUnifiedProfileViewController setIsOverlayPresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106636398(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274c85c) = param_3;
  return;
}



/* Entry: 1066363a8; end: 106636483; -[SCUnifiedProfileViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066363a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c870,0);
  _objc_destroyWeak(param_1 + _DAT_11274c884);
  _objc_storeStrong(param_1 + _DAT_11274c880,0);
  _objc_storeStrong(param_1 + _DAT_11274c87c,0);
  _objc_storeStrong(param_1 + _DAT_11274c898,0);
  _objc_storeStrong(param_1 + _DAT_11274c868,0);
  _objc_storeStrong(param_1 + _DAT_11274c86c,0);
  _objc_storeStrong(param_1 + _DAT_11274c894,0);
  _objc_storeStrong(param_1 + _DAT_11274c864,0);
  _objc_storeStrong(param_1 + _DAT_11274c878,0);
  _objc_storeStrong(param_1 + _DAT_11274c888,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c860,0);
  return;
}



/* Entry: 106636484; end: 106636713; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider initWithvaldiRuntimeProvider:dataSource:legacySnapchatterServices:canEditName:groupMembers:streakProvider:friendmojiRegistry:friendmojiDataProvider:cofStore:circumstanceEngine:] */

undefined8 *
FUN_106636484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f22d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 5) = param_6;
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    func_0x00010befc780(puVar1[2]);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106636714; end: 1066367e7; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider valdiContext] */

void FUN_106636714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc470;
  _objc_opt_class(PTR_PTR_1126cc470);
  lVar3 = param_1;
  func_0x00010bdec340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf55740(uVar6,param_2,puVar2,0,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 0x50),param_2,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1066367e8; end: 1066368b7; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider setUp] */

void FUN_1066367e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c295320();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1066368b8; end: 1066368f3;  */

void FUN_1066368b8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0f8920(PTR_PTR_1126cc478,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066368f4; end: 106636903; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider tearDown] */

void FUN_1066368f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106636904; end: 106636a0f; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_106636904(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = param_3;
  func_0x00010c0720c0();
  if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) {
    uVar2 = param_3;
    func_0x00010c0720c0();
    if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0))
    goto LAB_10663698c;
    puVar1 = PTR_PTR_1126cc478;
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c0f91e0(puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126cc478;
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c0f91c0(puVar1);
  }
  _objc_release(puVar3);
LAB_10663698c:
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106636a10; end: 106636bdf; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider _createComponentContext] */

void FUN_106636a10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126cc480;
  _objc_alloc(PTR_PTR_1126cc480);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c272120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c272120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106636be0;
  puStack_78 = &UNK_110843540;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c017ae0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bdf4300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e3c0(puVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106636be0; end: 106636cbb;  */

void FUN_106636be0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x80),param_2,param_1,puVar1,0);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106636cbc; end: 106636d43; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider updateDisplayNameAndIsMutedState] */

void FUN_106636cbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfcea80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c078420(uVar2);
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106636d44; end: 106637063; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider _participants] */

void FUN_106636d44(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be248c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 1) {
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126cc488;
    _objc_alloc();
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ac00(puVar5,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c16da00(puVar5,param_2,uVar4);
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(uVar1);
    uVar2 = uVar1;
    func_0x00010bf52a60(uVar1,param_2,&uStack_140,auStack_f8,0x10);
    if (uVar2 != 0) {
      lVar14 = *plStack_130;
      do {
        uVar3 = 0;
        do {
          if (*plStack_130 != lVar14) {
            _objc_enumerationMutation(uVar1);
          }
          uVar13 = *(undefined8 *)(lStack_138 + uVar3 * 8);
          uVar6 = uVar13;
          func_0x00010c2923e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          if ((uVar8 & 1) == 0) {
            func_0x00010bf1bae0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar13;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar13);
            puVar12 = PTR_PTR_1126cc488;
            _objc_alloc(PTR_PTR_1126cc488);
            func_0x00010c05ac00();
            func_0x00010c16da00();
            func_0x00010befa120(puVar5,param_2,puVar12);
            _objc_release(puVar12);
            _objc_release(uVar9);
          }
          _objc_release(uVar6);
          uVar3 = uVar3 + 1;
        } while (uVar2 != uVar3);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_2,&uStack_140,auStack_f8,0x10);
      } while (uVar2 != 0);
    }
    _objc_release(uVar1);
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_alloc();
    func_0x00010bff4000();
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar10 = *(undefined **)(uVar1 + 0x10);
    func_0x00010bfcee40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010bf529e0();
    puVar12 = puVar5;
    if (puVar11 == (undefined *)0x0) {
      puVar12 = *(undefined **)(uVar1 + 0x20);
    }
    _objc_retain(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106637064; end: 1066370df; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider _groupMembers] */

void FUN_106637064(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfcee40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = lVar2;
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1066370e0; end: 1066370e7;  */

void FUN_1066370e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchatter_11266eac8);
  return;
}



/* Entry: 1066370e8; end: 10663723f; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider _createStreakPillV2Context] */

void FUN_1066370e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126cc490;
  _objc_alloc_init(PTR_PTR_1126cc490);
  func_0x00010bdf42e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4500(puVar1);
  _objc_release(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106637240;
  puStack_58 = &UNK_110930828;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1d37e0(puVar1);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c1d3800(puVar1);
  func_0x00010c17df40(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106637240; end: 1066372cf;  */

void FUN_106637240(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066372d0; end: 106637467; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider _createStreakDataObservable] */

void FUN_1066372d0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = *(undefined **)(param_1 + 0x58);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c25c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    puVar3 = puVar4;
    func_0x00010c0b8600(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106637468; end: 106637643;  */

void FUN_106637468(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126cc498;
      _objc_opt_new(PTR_PTR_1126cc498);
      lVar2 = lVar1;
      func_0x00010bf9ca60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf9dbe0();
      _objc_release(lVar2);
      puVar6 = PTR_PTR_1126b3e30;
      if (lVar3 == 0) {
        puVar5 = *(undefined **)(param_1 + 0x60);
        func_0x00010c269d40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25bec0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162b00(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar4);
      }
      else {
        puVar5 = PTR_PTR_1126b3d68;
        _objc_opt_new(PTR_PTR_1126b3d68);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar2 = lVar1;
        func_0x00010bf9ca60(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9dbe0();
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1846c0(puVar5);
        _objc_release(puVar6);
        _objc_release(lVar2);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bfceb20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c183b80(puVar5);
        _objc_release(uVar4);
        func_0x00010c198d20(puVar7);
      }
      _objc_release(puVar5);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106637644; end: 106637797; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider _handleStreakPillTap:] */

void FUN_106637644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b42c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bfcee40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  func_0x00010c028c80((double)lVar3,puVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfcea80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a49a0(puVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106637798;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar6;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 106637798; end: 1066377a7;  */

void FUN_106637798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1066377a8; end: 106637887; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider _handleStreakRestorePillTap:] */

void FUN_1066377a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126afdb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff0880();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106637888;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106637888; end: 106637897;  */

void FUN_106637888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 106637898; end: 1066378bf; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider groupUnifiedProfileDataSource] */

void FUN_106637898(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066378c0; end: 1066378e7; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider circumstanceEngine] */

void FUN_1066378c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066378e8; end: 10663790f; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider initialGroupMembers] */

void FUN_1066378e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106637910; end: 106637937; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider participantsSubject] */

void FUN_106637910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106637938; end: 10663795f; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider participantsSizeSubject] */

void FUN_106637938(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106637960; end: 106637987; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider legacySnapchatterServices] */

void FUN_106637960(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106637988; end: 10663798b; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider legacyParticipantsForGroupAvatar] */

void FUN_106637988(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__participants_112579b80);
  return;
}



/* Entry: 10663798c; end: 106637993; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider actionHandler] */

undefined8 FUN_10663798c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106637994; end: 1066379c3; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider setActionHandler:] */

void FUN_106637994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066379c4; end: 1066379cb; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1066379c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1066379cc; end: 1066379fb; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1066379cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066379fc; end: 106637a13; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider contextProviderDelegate] */

void FUN_1066379fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106637a14; end: 106637a1f; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider setContextProviderDelegate:] */

void FUN_106637a14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 106637a20; end: 106637aff; -[SCGroupUnifiedProfileIdentityComposerSectionDataProvider .cxx_destruct] */

void FUN_106637a20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106637b00; end: 106637bb7; +[SCGroupUnifiedProfileIdentityUpdateHelper performUpdateDisplayNameAndIsMutedStateOnQueue:withWeakProvider:] */

void FUN_106637b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106637bb8; end: 106637beb;  */

void FUN_106637bb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c285380(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106637bec; end: 106637cb3; +[SCGroupUnifiedProfileIdentityUpdateHelper performUpdateParticipantsOnQueue:withWeakProvider:] */

void FUN_106637bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106637cb4; end: 106637cef;  */

void FUN_106637cb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2885e0(*(undefined8 *)(param_1 + 0x28),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


