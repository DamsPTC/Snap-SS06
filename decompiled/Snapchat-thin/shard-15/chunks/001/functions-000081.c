/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8209bc; end: 10b820a6b; -[SIGSelectBar setAddAChatVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8209bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112794430));
  if ((uint)*(byte *)(param_1 + _DAT_112794414) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112794414) = (char)param_3;
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(lVar1);
  if ((uint)param_3 == 0) {
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  else {
    func_0x00010bf65be0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdca850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__animateAddAChatWithIsVisible__1125503b0,param_3);
  return;
}



/* Entry: 10b820a6c; end: 10b820b1f; -[SIGSelectBar setAddAChatText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b820a6c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112794430;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104980();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b820b20; end: 10b820bb7; -[SIGSelectBar _animateAddAChatWithIsVisible:] */

void FUN_10b820b20(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b820bb8;
  puStack_28 = &UNK_110845ce0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b820c4c;
  puStack_58 = &UNK_110857498;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03440(0x3fb1eb851eb851ec,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_40,
                      &puStack_70);
  return;
}



/* Entry: 10b820bb8; end: 10b820c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b820bb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
  func_0x00010c1677c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794438));
  uVar2 = 0x4034000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b820c4c; end: 10b820c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b820c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794438),
             PTR_s_setHidden__1126479f8,*(char *)(param_1 + 0x28) == '\0');
  return;
}



/* Entry: 10b820c6c; end: 10b82119f; -[SIGSelectBar _initializeNewGroupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b820c6c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010bfcf6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bdc2640();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112794404;
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar2;
  _objc_release(uVar17);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar20));
  _objc_release(puVar2);
  lVar18 = (long)_DAT_1127943f4;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar19 = (long)_DAT_112794408;
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar2;
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar19));
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c165e20(uVar17);
  func_0x00010b885170();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar19));
  _objc_release(uVar17);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = (long)_DAT_112794424;
  uVar14 = lVar1 + lVar18;
  _objc_loadWeakRetained();
  uVar15 = uVar14;
  _objc_opt_respondsToSelector();
  _objc_release(uVar14);
  if ((uVar15 & 1) != 0) {
    lVar1 = lVar1 + lVar18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c158880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8211a0; end: 10b82121b; -[SIGSelectBar _barTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8211a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794424;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c158880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b82121c; end: 10b8212b7; -[SIGSelectBar _sendToButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82121c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112794438);
  func_0x00010c074c20();
  lVar2 = param_1 + _DAT_112794424;
  _objc_loadWeakRetained(lVar2);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112794430);
    func_0x00010c26b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158840(lVar2,param_2,param_1,uVar3);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c158840(lVar2,param_2,param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b8212b8; end: 10b8212f3; -[SIGSelectBar _moreButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8212b8(long param_1)

{
  param_1 = param_1 + _DAT_112794424;
  _objc_loadWeakRetained(param_1);
  func_0x00010c158800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b8212f4; end: 10b82132f; -[SIGSelectBar _newGroupButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8212f4(long param_1)

{
  param_1 = param_1 + _DAT_112794424;
  _objc_loadWeakRetained(param_1);
  func_0x00010c158820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b821330; end: 10b821673; -[SIGSelectBar _updateCollectionViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b821330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_11279443c;
  if (*(long *)(param_1 + lVar12) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar12);
    *(undefined8 *)(param_1 + lVar12) = 0;
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar1);
  uStack_a8 = *(undefined8 *)(param_1 + lVar12);
  lVar13 = (long)_DAT_1127943ec;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127943f4);
  uStack_98 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar1;
  func_0x00010bf493a0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + lVar13);
  uStack_80 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127943f8);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = *(undefined **)(param_1 + lVar13);
  lStack_78 = lVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uStack_a8,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(lVar16);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  lVar15 = *(long *)(param_1 + _DAT_11279442c);
  lVar14 = *(long *)(param_1 + lVar12);
  lVar7 = *(long *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127943cc;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  if (lVar15 == 0) {
    func_0x00010bf493a0(lVar7,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + lVar13);
    lStack_90 = lVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + lVar4);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar13;
    func_0x00010bf493a0(lVar13,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(lVar14,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar16);
    _objc_release(lVar4);
    _objc_release(lVar13);
  }
  else {
    func_0x00010bf493c0(0x4020000000000000,lVar7,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(lVar14,param_2,lVar8);
  }
  _objc_release(lVar8);
  _objc_release(uVar1);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar12));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b821674;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112794440;
  lStack_110 = lVar7;
  puStack_108 = puVar5;
  lStack_100 = lVar16;
  lStack_f8 = lVar4;
  uStack_f0 = uVar1;
  lStack_e8 = lVar8;
  lStack_e0 = lVar14;
  lStack_d8 = lVar13;
  lStack_d0 = lVar12;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar2 + lVar15) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar3 = *(undefined8 *)(puVar2 + lVar15);
    *(undefined8 *)(puVar2 + lVar15) = 0;
    _objc_release(uVar3);
  }
  lVar16 = (long)_DAT_11279442c;
  lVar12 = *(long *)(puVar2 + lVar16);
  puVar6 = (undefined *)0x0;
  lStack_170 = lVar14;
  if (lVar12 != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(puVar2 + _DAT_1127943ec);
    lStack_138 = lVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(lVar12,param_2,lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(puVar2 + lVar16);
    lStack_130 = lVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(puVar2 + _DAT_1127943f4);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010bf493c0(0x4030000000000000,lVar8,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(puVar2 + lVar16);
    lStack_128 = lVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(puVar2 + _DAT_1127943f8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar16;
    func_0x00010bf493a0(lVar16,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_120 = lVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_130,3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar2 + lVar15);
    *(undefined **)(puVar2 + lVar15) = puVar6;
    _objc_release(uVar3);
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(lVar16);
    _objc_release(lVar4);
    _objc_release(uVar1);
    _objc_release(lVar8);
    _objc_release(lVar12);
    _objc_release(lVar13);
    _objc_release(lStack_138);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(puVar2 + lVar15));
    lStack_170 = lVar12;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b821884;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112794444;
  lStack_1a0 = lVar7;
  puStack_198 = puVar5;
  lStack_190 = lVar16;
  lStack_188 = lVar4;
  uStack_180 = uVar1;
  lStack_178 = lVar8;
  lStack_168 = lVar13;
  lStack_160 = lVar15;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_c0;
  if (*(long *)(puVar6 + lVar12) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(puVar6 + lVar12);
    *(undefined8 *)(puVar6 + lVar12) = 0;
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar16 = (long)_DAT_1127943f8;
  uVar3 = *(undefined8 *)(puVar6 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127943cc;
  uVar9 = *(undefined8 *)(puVar6 + lVar4);
  func_0x00010c2793a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b0 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1b0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar3);
  if (*(long *)(puVar6 + _DAT_1127943e8) == 1) {
    uVar3 = *(undefined8 *)(puVar6 + lVar16);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar6 + lVar4);
    func_0x00010bf348e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(puVar6 + lVar16);
    uStack_1c8 = uVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1c0 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1c8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar5);
  }
  else {
    if (*(long *)(puVar6 + _DAT_1127943e8) != 0) goto LAB_10b821af0;
    uVar3 = *(undefined8 *)(puVar6 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar6 + lVar4);
    func_0x00010c274200(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf493c0(0x4028000000000000,uVar3,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1b8 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1b8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,puVar10);
  }
  _objc_release(puVar10);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar3);
LAB_10b821af0:
  uVar1 = *(undefined8 *)(puVar6 + lVar12);
  *(undefined **)(puVar6 + lVar12) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(puVar6 + lVar12));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_112794418;
  if (*(long *)(puVar2 + lVar12) != 0) {
    func_0x00010bf82f40();
    uVar1 = *(undefined8 *)(puVar2 + lVar12);
    *(undefined8 *)(puVar2 + lVar12) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b821674; end: 10b821883; -[SIGSelectBar _updateSecondaryLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b821674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar11;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112794440;
  if (*(long *)(param_1 + lVar10) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    *(undefined8 *)(param_1 + lVar10) = 0;
    _objc_release(uVar1);
  }
  lVar11 = (long)_DAT_11279442c;
  lVar2 = *(long *)(param_1 + lVar11);
  puVar3 = (undefined *)0x0;
  lStack_c0 = unaff_x22;
  if (lVar2 != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = *(undefined8 *)(param_1 + _DAT_1127943ec);
    lStack_88 = lVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(lVar2,param_2,unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined8 *)(param_1 + lVar11);
    lStack_80 = lVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = *(undefined8 *)(param_1 + _DAT_1127943f4);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x23;
    func_0x00010bf493c0(0x4030000000000000,unaff_x23,param_2,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_1 + lVar11);
    uStack_78 = unaff_x25;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = *(undefined8 *)(param_1 + _DAT_1127943f8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = lVar11;
    func_0x00010bf493a0(lVar11,param_2,unaff_x27);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = unaff_x28;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar3;
    _objc_release(uVar1);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(lVar11);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(lVar2);
    _objc_release(unaff_x21);
    _objc_release(lStack_88);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + lVar10));
    lStack_c0 = lVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10b821884;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = (long)_DAT_112794444;
  lStack_f0 = unaff_x28;
  uStack_e8 = unaff_x27;
  lStack_e0 = lVar11;
  uStack_d8 = unaff_x25;
  uStack_d0 = unaff_x24;
  uStack_c8 = unaff_x23;
  uStack_b8 = unaff_x21;
  lStack_b0 = lVar10;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar3 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(puVar3 + lVar2);
    *(undefined8 *)(puVar3 + lVar2) = 0;
    _objc_release(uVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar10 = (long)_DAT_1127943f8;
  uVar5 = *(undefined8 *)(puVar3 + lVar10);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127943cc;
  uVar6 = *(undefined8 *)(puVar3 + lVar11);
  func_0x00010c2793a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf493c0(0xc030000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar4,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (*(long *)(puVar3 + _DAT_1127943e8) == 1) {
    uVar5 = *(undefined8 *)(puVar3 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar3 + lVar11);
    func_0x00010bf348e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(puVar3 + lVar10);
    uStack_118 = uVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar7);
  }
  else {
    if (*(long *)(puVar3 + _DAT_1127943e8) != 0) goto LAB_10b821af0;
    uVar5 = *(undefined8 *)(puVar3 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar3 + lVar11);
    func_0x00010c274200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf493c0(0x4028000000000000,uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_108,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,puVar8);
  }
  _objc_release(puVar8);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_10b821af0:
  uVar1 = *(undefined8 *)(puVar3 + lVar2);
  *(undefined **)(puVar3 + lVar2) = puVar4;
  _objc_retain(puVar4);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(puVar3 + lVar2));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_112794418;
  if (*(long *)(puVar4 + lVar10) != 0) {
    func_0x00010bf82f40();
    uVar1 = *(undefined8 *)(puVar4 + lVar10);
    *(undefined8 *)(puVar4 + lVar10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b821884; end: 10b821b5b; -[SIGSelectBar _updateSendToButtonConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b821884(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112794444;
  if (*(long *)(param_1 + lVar9) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = 0;
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar8 = (long)_DAT_1127943f8;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127943cc;
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c2793a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (*(long *)(param_1 + _DAT_1127943e8) == 1) {
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf348e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_1 + lVar8);
    uStack_88 = uVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  else {
    if (*(long *)(param_1 + _DAT_1127943e8) != 0) goto LAB_10b821af0;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c274200(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf493c0(0x4028000000000000,uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,puVar6);
  }
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_10b821af0:
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar9));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_112794418;
  if (*(long *)(puVar2 + lVar9) != 0) {
    func_0x00010bf82f40();
    uVar1 = *(undefined8 *)(puVar2 + lVar9);
    *(undefined8 *)(puVar2 + lVar9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b821b5c; end: 10b821b9f; -[SIGSelectBar _dismissTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b821b5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794418;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf82f40();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b821ba0; end: 10b8224e3; -[SIGSelectBar _setupAddAChatViewWithHiddenVisibiltiy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10b821ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar24 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
  lVar22 = (long)_DAT_112794438;
  uVar18 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar21;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  lVar19 = (long)_DAT_1127943c8;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar19),param_2,*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar21);
  _objc_release(puVar21);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar22),param_2,puVar1);
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_b0 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00(uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_a8 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_a0 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493c0(0,puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar18);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar21 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
  lVar23 = (long)_DAT_112794430;
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar21;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c21ad00(uVar18,param_2,0x14);
  func_0x00010b885188();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar23),param_2,uVar18);
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08c0e0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar18);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar23),param_2,puVar21);
  _objc_release(puVar21);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar23),param_2,puVar21);
  _objc_release(puVar21);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar21;
  func_0x00010bf414e0(0x3fc3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar23),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar21);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar23),param_2,9);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  func_0x00010bf414e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcba0(*(undefined8 *)(param_1 + lVar23),param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar2);
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar18);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar23),param_2,param_1);
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar18);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar22),param_2,*(undefined8 *)(param_1 + lVar23));
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar25 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar23);
  uStack_d0 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  uStack_c8 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar23);
  uStack_c0 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar24);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar27);
  _objc_release(uVar7);
  _objc_release(uVar26);
  _objc_release(uVar25);
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar25 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_1127943cc;
  uVar26 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar25;
  func_0x00010bf493c0(0,uVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar22);
  uStack_f0 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar27;
  func_0x00010bf493c0(0,uVar27,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar22);
  uStack_e8 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar14;
  func_0x00010bf493c0(0,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar23);
  uStack_e0 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493c0(0,uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar27);
  _objc_release(uVar24);
  _objc_release(uVar26);
  _objc_release(uVar25);
  *(undefined8 *)(param_1 + _DAT_112794448) = 0x82;
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar7;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f8,1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112794434;
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar21;
  _objc_release(uVar10);
  _objc_release(uVar18);
  _objc_release(uVar7);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar19));
  lVar19 = 0;
  func_0x00010bdca840(param_1,param_2,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(lVar19);
  lVar20 = param_6;
  func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  if ((int)lVar20 == 0) {
    lVar20 = lVar19;
    func_0x00010c26b700(lVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    lVar19 = lVar20;
    func_0x00010c08fa60(lVar20);
    lVar22 = param_6;
    func_0x00010c08fa60(param_6);
    _objc_release(lVar20);
    puVar21 = (undefined *)
              (ulong)((ulong)((lVar19 - param_5) + lVar22) <= *(ulong *)(puVar1 + _DAT_112794448));
  }
  else {
    func_0x00010c13a0e0(lVar19);
    _objc_release(lVar19);
    puVar21 = (undefined *)0x0;
  }
  _objc_release(param_6);
  return puVar21;
}



/* Entry: 10b8224e4; end: 10b8225b7; -[SIGSelectBar textView:shouldChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b8224e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_6;
  func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c08fa60(lVar1);
    lVar3 = param_6;
    func_0x00010c08fa60(param_6);
    _objc_release(lVar1);
    bVar4 = (ulong)((lVar2 - param_5) + lVar3) <= *(ulong *)(param_1 + _DAT_112794448);
  }
  else {
    func_0x00010c13a0e0(param_3);
    _objc_release(param_3);
    bVar4 = false;
  }
  _objc_release(param_6);
  return bVar4;
}



/* Entry: 10b8225b8; end: 10b822653; -[SIGSelectBar setShown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8225b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c07e040();
  puStack_38 = PTR_PTR_11270b358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setShown__11265e360,param_3);
  if ((param_3 & 1) == 0) {
    func_0x00010be03840(param_1);
    func_0x00010bf94800(*(undefined8 *)(param_1 + (long)_DAT_112794430));
  }
  else if ((uVar1 & 1) == 0) {
    _UIAccessibilityPostNotification
              (*(undefined4 *)PTR__UIAccessibilityLayoutChangedNotification_1103458e0,
               *(undefined8 *)(param_1 + (long)_DAT_1127943f8));
  }
  return;
}



/* Entry: 10b822654; end: 10b822663; -[SIGSelectBar collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127943dc),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10b822664; end: 10b822787; -[SIGSelectBar collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822664(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126e1660;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar5 = (long)_DAT_1127943dc;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar3 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f200(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_1127943e8));
  func_0x00010c1b5d40(uVar2,param_2,uVar4);
  lVar3 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  lVar5 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0(lVar5);
  func_0x00010c1b76a0(uVar2,param_2,lVar3 == lVar5 + -1);
  func_0x00010c18b5e0(uVar2,param_2,param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b822788; end: 10b822867; -[SIGSelectBar collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b822788(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = (long)_DAT_1127943dc;
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010c142240(param_7);
  func_0x00010c0dfd40(uVar3,param_4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126e1660;
  lVar2 = param_7;
  func_0x00010c142240(param_7);
  _objc_release(param_7);
  lVar4 = *(long *)(param_3 + lVar4);
  func_0x00010bf529e0(lVar4);
  uVar5 = *(undefined8 *)(param_3 + _DAT_1127943e4);
  func_0x00010c23d200(uVar5,puVar1,param_4,uVar3,lVar2 == lVar4 + -1,
                      *(undefined8 *)(param_3 + _DAT_1127943e0),
                      *(undefined8 *)(param_3 + _DAT_1127943e8));
  _objc_release(uVar3);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 10b822868; end: 10b822907; -[SIGSelectBar collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_112794424;
  _objc_retain(param_4);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127943dc);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1587a0(lVar2,param_2,param_1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b822908; end: 10b822943; -[SIGSelectBar scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822908(long param_1)

{
  param_1 = param_1 + _DAT_112794424;
  _objc_loadWeakRetained(param_1);
  func_0x00010c158860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b822944; end: 10b822963; -[SIGSelectBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822944(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794424);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b822964; end: 10b822977; -[SIGSelectBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822964(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794424,param_3);
  return;
}



/* Entry: 10b822978; end: 10b822987; -[SIGSelectBar moreButtonVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b822978(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127943d0);
}



/* Entry: 10b822988; end: 10b822997; -[SIGSelectBar secondaryLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b822988(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794428);
}



/* Entry: 10b822998; end: 10b8229a7; -[SIGSelectBar showNewGroupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b822998(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127943d4);
}



/* Entry: 10b8229a8; end: 10b8229b7; -[SIGSelectBar setShowNewGroupButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8229a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127943d4) = param_3;
  return;
}



/* Entry: 10b8229b8; end: 10b8229c7; -[SIGSelectBar addAChatVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8229b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794414);
}



/* Entry: 10b8229c8; end: 10b8229d7; -[SIGSelectBar showNewGroupButtonOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8229c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127943d8);
}



/* Entry: 10b8229d8; end: 10b8229e7; -[SIGSelectBar setShowNewGroupButtonOnboarding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8229d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127943d8) = param_3;
  return;
}



/* Entry: 10b8229e8; end: 10b8229f7; -[SIGSelectBar addAChatCharacterLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8229e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794448);
}



/* Entry: 10b8229f8; end: 10b822a07; -[SIGSelectBar setAddAChatCharacterLimit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8229f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112794448) = param_3;
  return;
}



/* Entry: 10b822a08; end: 10b822bd3; -[SIGSelectBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822a08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794428,0);
  _objc_destroyWeak(param_1 + _DAT_112794424);
  _objc_storeStrong(param_1 + _DAT_112794434,0);
  _objc_storeStrong(param_1 + _DAT_11279444c,0);
  _objc_storeStrong(param_1 + _DAT_112794438,0);
  _objc_storeStrong(param_1 + _DAT_112794430,0);
  _objc_storeStrong(param_1 + _DAT_112794444,0);
  _objc_storeStrong(param_1 + _DAT_112794410,0);
  _objc_storeStrong(param_1 + _DAT_11279440c,0);
  _objc_storeStrong(param_1 + _DAT_112794400,0);
  _objc_storeStrong(param_1 + _DAT_1127943fc,0);
  _objc_storeStrong(param_1 + _DAT_112794440,0);
  _objc_storeStrong(param_1 + _DAT_11279443c,0);
  _objc_storeStrong(param_1 + _DAT_1127943e0,0);
  _objc_storeStrong(param_1 + _DAT_1127943dc,0);
  _objc_storeStrong(param_1 + _DAT_112794420,0);
  _objc_storeStrong(param_1 + _DAT_112794418,0);
  _objc_storeStrong(param_1 + _DAT_11279442c,0);
  _objc_storeStrong(param_1 + _DAT_112794408,0);
  _objc_storeStrong(param_1 + _DAT_1127943f4,0);
  _objc_storeStrong(param_1 + _DAT_112794404,0);
  _objc_storeStrong(param_1 + _DAT_1127943f0,0);
  _objc_storeStrong(param_1 + _DAT_11279441c,0);
  _objc_storeStrong(param_1 + _DAT_1127943ec,0);
  _objc_storeStrong(param_1 + _DAT_1127943cc,0);
  _objc_storeStrong(param_1 + _DAT_1127943c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127943f8,0);
  return;
}



/* Entry: 10b822bd4; end: 10b822bdf; +[SIGSelectBarGradient layerClass] */

void FUN_10b822bd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10b822be0; end: 10b822d93; -[SIGSelectBarGradient initWithFrame:reverse:barType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b822be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [48];
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_11270b360;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  puVar3 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    unaff_x21 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      unaff_x21 = (undefined8 *)0x0;
    }
    _objc_retain(unaff_x21);
    _objc_release(puVar3);
    FUN_10b81f188();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_1127943c0;
    uVar8 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_4;
    _objc_release(uVar8);
    param_4 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uStack_68 = uVar8;
    uVar8 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(unaff_x21);
    _objc_release(puVar4);
    _objc_release(param_4);
    bVar1 = (int)param_3 == 0;
    uVar8 = 0;
    if (bVar1) {
      uVar8 = 0x3ff0000000000000;
    }
    uVar10 = 0x3ff0000000000000;
    if (bVar1) {
      uVar10 = 0;
    }
    func_0x00010c209760(uVar8,0x3fe0000000000000,unaff_x21);
    func_0x00010c196020(uVar10,0x3fe0000000000000,unaff_x21);
    func_0x00010c1bff00(unaff_x21);
    puVar3 = unaff_x21;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_88 = FUN_10b822d94;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_d0 = PTR_PTR_11270b360;
    puStack_d8 = puVar3;
    uStack_b0 = param_4;
    puStack_a8 = unaff_x21;
    uStack_a0 = param_3;
    puStack_98 = puVar2;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_d8,PTR_s_traitCollectionDidChange__11267bf88);
    puVar5 = puVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar4);
    puVar2 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar5);
    lVar9 = (long)_DAT_1127943c0;
    uVar10 = *(undefined8 *)((long)puVar3 + lVar9);
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar7 = *(undefined8 *)((long)puVar3 + lVar9);
    uStack_c8 = uVar8;
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar10);
    puVar2 = puVar3;
    func_0x00010bf8d060();
    if (puVar2 == (undefined8 *)0x1) {
      _CGAffineTransformMakeScale(auStack_108,0xbff0000000000000,0x3ff0000000000000);
    }
    func_0x00010c219960(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      puVar3 = (undefined8 *)((long)puVar3 + (long)_DAT_1127943c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar3,0);
      return puVar3;
    }
    return puVar3;
  }
  return puVar2;
}



/* Entry: 10b822d94; end: 10b822f1f; -[SIGSelectBarGradient traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822d94(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_88 [48];
  ulong uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_11270b360;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_traitCollectionDidChange__11267bf88);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar7 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar1);
  lVar8 = (long)_DAT_1127943c0;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  uStack_48 = uVar5;
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(uVar4);
  uVar7 = param_1;
  func_0x00010bf8d060();
  if (uVar7 == 1) {
    _CGAffineTransformMakeScale(auStack_88,0xbff0000000000000,0x3ff0000000000000);
  }
  func_0x00010c219960(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + (long)_DAT_1127943c0,0);
    return;
  }
  return;
}



/* Entry: 10b822f20; end: 10b822f33; -[SIGSelectBarGradient .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b822f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127943c0,0);
  return;
}



/* Entry: 10b822f34; end: 10b8232a7; -[SIGSelectBarItemCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b822f34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  puStack_78 = PTR_PTR_11270b368;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794450);
    *(undefined **)((long)puVar1 + (long)_DAT_112794450) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010c21ad00(puVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794454);
    *(undefined **)((long)puVar1 + (long)_DAT_112794454) = puVar4;
    _objc_release(uVar3);
    _objc_retain(puVar4);
    func_0x00010c219b60(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfcf7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c21ad00(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4);
    _objc_release(puVar5);
    func_0x00010c1a7f60(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794458);
    *(undefined **)((long)puVar1 + (long)_DAT_112794458) = puVar5;
    _objc_release(uVar3);
    _objc_retain(puVar5);
    func_0x00010c219b60(puVar5);
    func_0x00010c182220(puVar5);
    func_0x00010c1a7f60(puVar5);
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar7 = puVar6;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf3ab20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279445c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279445c) = puVar6;
    _objc_release(uVar3);
    _objc_retain(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c219b60(puVar6);
    func_0x00010c182220(puVar6);
    func_0x00010c1a7f60(puVar6);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794460);
    *(undefined **)((long)puVar1 + (long)_DAT_112794460) = puVar7;
    _objc_release(uVar3);
    _objc_retain(puVar7);
    func_0x00010c219b60(puVar7);
    func_0x00010c1a7f60(puVar7);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar5);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar6);
    func_0x00010c066fe0(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b8232a8; end: 10b8232cb; -[SIGSelectBarItemCell setLast:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8232a8(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(long *)(param_1 + _DAT_112794464) != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794454),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 10b8232cc; end: 10b823463; -[SIGSelectBarItemCell setBarType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8232cc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *unaff_x21;
  long lVar4;
  undefined8 uVar5;
  
  *(long *)(param_1 + _DAT_112794464) = param_3;
  if (param_3 == 1) {
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff8000001d);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar2;
    func_0x00010bf414e0(0x3fc3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  lVar4 = (long)_DAT_112794460;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,unaff_x21);
  _objc_release(unaff_x21);
  bVar1 = param_3 == 0;
  uVar5 = 0x4032000000000000;
  if (!bVar1) {
    uVar5 = 0x4028000000000000;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar5);
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,bVar1);
  lVar4 = (long)_DAT_11279445c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,bVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794454),param_2,!bVar1);
  if (param_3 != 0) {
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b823464; end: 10b823723; -[SIGSelectBarItemCell setItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b823464(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112794468;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  puVar2 = param_3;
  func_0x00010bdc2820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112794450),param_2,puVar2);
  _objc_release(puVar2);
  if (*(long *)(param_1 + _DAT_112794464) == 0) {
    puVar2 = param_3;
    func_0x00010bdc2840(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794460),param_2,puVar2 == (undefined *)0x1
                       );
  }
  puVar2 = param_3;
  func_0x00010bdc2840(param_3);
  lVar4 = (long)_DAT_112794458;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,puVar2 == (undefined *)0x1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,4);
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar2 = param_3;
  func_0x00010bdc2820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010beecec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar3 = param_3;
  func_0x00010bdc2840();
  puVar2 = PTR_PTR_1126b0c40;
  if ((long)puVar3 < 3) {
    if (puVar3 == (undefined *)0x1) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,0);
      goto LAB_10b8236f8;
    }
    if (puVar3 != (undefined *)0x2) goto LAB_10b8236f8;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfcf580();
    _objc_retainAutoreleasedReturnValue();
LAB_10b823660:
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    if (puVar3 == (undefined *)0x3) {
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c25ba40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b823660;
    }
    if (puVar3 == (undefined *)0x4) {
      puVar2 = param_3;
      func_0x00010bf61660(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
      goto LAB_10b8236f8;
    }
    if (puVar3 != (undefined *)0x5) goto LAB_10b8236f8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x28f,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
LAB_10b8236f8:
  puVar2 = param_3;
  func_0x00010bdc2840(param_3);
  func_0x00010bde6520(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b823724; end: 10b823787; -[SIGSelectBarItemCell intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b823724(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  _objc_opt_class();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112794468);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794454);
  func_0x00010c074c20(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c23d210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,lVar1,PTR_s_sizeForItem_last_widthCache_cach_11266cea8,uVar3,(uint)uVar2 ^ 1,0,
             *(undefined8 *)(param_1 + _DAT_112794464));
  return;
}



/* Entry: 10b823788; end: 10b8238ab; +[SIGSelectBarItemCell sizeForItem:last:widthCache:cachedCommaWidth:barType:] */

undefined1  [16]
FUN_10b823788(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c0dff20(param_6,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c2a50c0(param_2,param_3,param_4,param_7);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    dVar3 = dVar4;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_6,param_3,puVar2,param_4);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf885a0(lVar1);
    dVar3 = dVar4;
  }
  if ((param_5 & 1) == 0) {
    if (param_1 == 0.0) {
      func_0x00010bf41ac0(param_2,param_3,param_7);
      param_1 = dVar3;
    }
    dVar4 = dVar4 + param_1;
  }
  dVar3 = 0.0;
  if (0.0 <= dVar4) {
    dVar3 = dVar4;
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  auVar5._8_8_ = 0x4042000000000000;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 10b8238ac; end: 10b8239ef; +[SIGSelectBarItemCell widthForItem:barType:] */

double FUN_10b8238ac(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bdc2820(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bdc2840();
  _objc_release(param_4);
  if (lVar1 < 4) {
    if (1 < lVar1 - 2U) {
      if (lVar1 != 1) {
        return 0.0;
      }
      if (param_5 == 1) {
        return param_1 + 24.0 + 8.0 + 16.0 + 4.0;
      }
      return param_1;
    }
LAB_10b823988:
    if (param_5 != 1) {
LAB_10b8239a0:
      if (param_5 != 0) {
        return 0.0;
      }
      param_1 = param_1 + 44.0;
      dVar3 = 16.0;
      goto LAB_10b8239d8;
    }
    dVar3 = 60.0;
  }
  else {
    if (lVar1 != 4) {
      if (lVar1 != 5) {
        return 0.0;
      }
      goto LAB_10b823988;
    }
    if (param_5 != 1) goto LAB_10b8239a0;
    dVar3 = 52.0;
  }
  param_1 = param_1 + dVar3 + 8.0 + 16.0;
  dVar3 = 4.0;
LAB_10b8239d8:
  return param_1 + dVar3;
}



/* Entry: 10b8239f0; end: 10b823a83; +[SIGSelectBarItemCell commaWidthForBarType:] */

undefined8 FUN_10b8239f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfcf7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c23ba00(puVar2,param_3,0x16,4,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(puVar1);
    _objc_release(puVar2);
    uVar3 = param_1;
  }
  return uVar3;
}



/* Entry: 10b823a84; end: 10b823b23; -[SIGSelectBarItemCell _constrainItemWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b823a84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_11279446c;
  if (param_3 != *(long *)(param_1 + lVar1)) {
    lVar2 = (long)_DAT_112794470;
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + lVar2));
    if (*(long *)(param_1 + _DAT_112794464) == 1) {
      func_0x00010bed5d00(param_1,param_2,param_3);
    }
    else if (*(long *)(param_1 + _DAT_112794464) == 0) {
      func_0x00010bed5be0(param_1,param_2,param_3);
    }
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + lVar2));
    *(long *)(param_1 + lVar1) = param_3;
  }
  return;
}



/* Entry: 10b823b24; end: 10b8247ab; -[SIGSelectBarItemCell _updateConstraintsForDefaultSelectBarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b823b24(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
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
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uStack_430;
  undefined *puStack_3e8;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_208;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  puVar7 = param_1;
  puStack_1b8 = param_1;
  puStack_1d0 = param_1;
  puStack_238 = param_1;
  puStack_250 = param_1;
  puStack_280 = param_1;
  if ((long)param_3 < 4) {
    if ((long)param_3 - 2U < 2) {
LAB_10b823d78:
      lVar30 = (long)_DAT_112794458;
      puStack_1c8 = *(undefined **)(param_1 + lVar30);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puStack_1c8;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar30);
      puStack_120 = puVar6;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = *(undefined **)(param_1 + lVar30);
      uStack_118 = uVar8;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a0 = puStack_198;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puStack_1a8 = *(undefined **)(param_1 + lVar30);
      puStack_110 = puStack_1a0;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = puStack_1a8;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar32 = (long)_DAT_112794450;
      puVar27 = *(undefined **)(param_1 + lVar32);
      puStack_108 = puStack_1b0;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar27;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = *(undefined **)(param_1 + lVar32);
      puStack_100 = puStack_1c0;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar26;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar32);
      puStack_f8 = puVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d8 = *(undefined **)(param_1 + lVar30);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_208 = uVar4;
      func_0x00010bf493c0(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar30 = (long)_DAT_112794454;
      uStack_230 = *(undefined8 *)(param_1 + lVar30);
      uStack_f0 = uStack_208;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uStack_240 = uStack_230;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_248 = *(undefined8 *)(param_1 + lVar30);
      uStack_e8 = uStack_240;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uStack_258 = uStack_248;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_260 = *(undefined8 *)(param_1 + lVar30);
      uStack_e0 = uStack_258;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_268 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_270 = uStack_260;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar30 = (long)_DAT_112794460;
      uStack_278 = *(undefined8 *)(param_1 + lVar30);
      uStack_d8 = uStack_270;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uStack_288 = uStack_278;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + lVar30);
      uStack_d0 = uStack_288;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar16;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)(param_1 + lVar30);
      uStack_c8 = uVar10;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010c08de00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)(param_1 + lVar30);
      uStack_c0 = uVar12;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c2793a0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar28;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      param_3 = &puStack_120;
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_b8 = uVar13;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + _DAT_112794470);
      *(undefined **)(param_1 + _DAT_112794470) = puVar14;
      _objc_release(uVar17);
      _objc_release(uVar13);
      _objc_release(uVar15);
      _objc_release(uVar28);
      _objc_release(uVar12);
      _objc_release(puVar11);
      _objc_release(uVar25);
      _objc_release(uVar10);
      _objc_release(puVar9);
      goto LAB_10b82466c;
    }
    if (param_3 == (undefined **)0x1) {
      lVar30 = (long)_DAT_112794450;
      puStack_1c8 = *(undefined **)(param_1 + lVar30);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puStack_1c8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar30);
      puStack_b0 = puVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = *(undefined **)(param_1 + lVar30);
      uStack_a8 = uVar8;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a0 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a8 = puStack_198;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar32 = (long)_DAT_112794454;
      puStack_1b0 = *(undefined **)(param_1 + lVar32);
      puStack_a0 = puStack_1a8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puStack_1b8 = puStack_1b0;
      func_0x00010bf493a0(puStack_1b0,puVar27,puVar27);
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = *(undefined **)(param_1 + lVar32);
      puStack_98 = puStack_1b8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d0 = puStack_1c0;
      func_0x00010bf493a0(puStack_1c0,puVar26,puVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = *(undefined **)(param_1 + lVar32);
      puStack_90 = puStack_1d0;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar30);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d8 = puVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = &puStack_b0;
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puStack_1d8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uStack_208 = *(undefined8 *)(param_1 + _DAT_112794470);
      *(undefined **)(param_1 + _DAT_112794470) = puVar9;
      goto LAB_10b8246d4;
    }
  }
  else {
    if (param_3 != (undefined **)0x4) {
      if (param_3 != (undefined **)0x5) goto LAB_10b82476c;
      goto LAB_10b823d78;
    }
    lVar32 = (long)_DAT_112794458;
    puStack_1c8 = *(undefined **)(param_1 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_1c8;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar32);
    puStack_190 = puVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = *(undefined **)(param_1 + lVar32);
    uStack_188 = uVar8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puStack_198;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = *(undefined **)(param_1 + lVar32);
    puStack_180 = puStack_1a0;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puStack_1a8;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar30 = (long)_DAT_112794450;
    puVar27 = *(undefined **)(param_1 + lVar30);
    puStack_178 = puStack_1b0;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = *(undefined **)(param_1 + lVar30);
    puStack_170 = puStack_1c0;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar30);
    puStack_168 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = *(undefined **)(param_1 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_208 = uVar4;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar32 = (long)_DAT_112794454;
    uStack_230 = *(undefined8 *)(param_1 + lVar32);
    uStack_160 = uStack_208;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_240 = uStack_230;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = *(undefined8 *)(param_1 + lVar32);
    uStack_158 = uStack_240;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = uStack_248;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_260 = *(undefined8 *)(param_1 + lVar32);
    uStack_150 = uStack_258;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = uStack_260;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar32 = (long)_DAT_112794460;
    uStack_278 = *(undefined8 *)(param_1 + lVar32);
    uStack_148 = uStack_270;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_288 = uStack_278;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar32);
    uStack_140 = uStack_288;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar32);
    uStack_138 = uVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + lVar32);
    uStack_130 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010c2793a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar28;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_190;
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + _DAT_112794470);
    *(undefined **)(param_1 + _DAT_112794470) = puVar14;
    _objc_release(uVar17);
    _objc_release(uVar13);
    _objc_release(uVar15);
    _objc_release(uVar28);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar25);
    _objc_release(uVar10);
    _objc_release(puVar9);
LAB_10b82466c:
    _objc_release(uVar16);
    _objc_release(uStack_288);
    _objc_release(puStack_280);
    _objc_release(uStack_278);
    _objc_release(uStack_270);
    _objc_release(uStack_268);
    _objc_release(uStack_260);
    _objc_release(uStack_258);
    _objc_release(puStack_250);
    _objc_release(uStack_248);
    _objc_release(uStack_240);
    _objc_release(puStack_238);
    _objc_release(uStack_230);
LAB_10b8246d4:
    _objc_release(uStack_208);
    _objc_release(puStack_1d8);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puStack_1d0);
    _objc_release(puVar26);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puVar27);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    _objc_release(puStack_198);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release();
    param_1 = puStack_1c8;
  }
LAB_10b82476c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = (long)_DAT_112794460;
  uVar15 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_11279445c;
  uVar19 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar18;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112794450;
  uVar22 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2793a0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar21;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar24;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(uVar28);
  _objc_release(uVar24);
  _objc_release(uVar25);
  _objc_release(uVar23);
  _objc_release(uVar4);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar2);
  _objc_release(puVar9);
  _objc_release(uVar20);
  _objc_release(uVar13);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar12);
  _objc_release(puVar3);
  _objc_release(uVar17);
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar15);
  puVar7 = param_1;
  puVar6 = param_1;
  puVar3 = param_1;
  if ((long)param_3 < 4) {
    if ((long)param_3 - 2U < 2) {
LAB_10b824c3c:
      lVar34 = (long)_DAT_112794458;
      uVar4 = *(undefined8 *)(param_1 + lVar34);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf493c0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)(param_1 + lVar34);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = *(undefined **)(param_1 + lVar34);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar26;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = *(undefined **)(param_1 + lVar34);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puStack_3e8 = puVar27;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_430 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uStack_430;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar28;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + lVar34);
      func_0x00010c2793a0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar15;
      func_0x00010bf493c0(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar5);
      _objc_release(puVar14);
      _objc_release(uVar2);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(puVar11);
      _objc_release(uVar28);
      _objc_release(uVar12);
      goto LAB_10b825108;
    }
    if (param_3 != (undefined **)0x1) goto LAB_10b825164;
    uVar4 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = *(undefined **)(param_1 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar26;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_3e8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
  }
  else {
    if (param_3 != (undefined **)0x4) {
      if (param_3 != (undefined **)0x5) goto LAB_10b825164;
      goto LAB_10b824c3c;
    }
    lVar34 = (long)_DAT_112794458;
    uVar4 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = *(undefined **)(param_1 + lVar34);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar26;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = *(undefined **)(param_1 + lVar34);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_3e8 = puVar27;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_430 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uStack_430;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010c2793a0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar15;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(puVar14);
    _objc_release(uVar2);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(puVar11);
    _objc_release(uVar28);
    _objc_release(uVar12);
LAB_10b825108:
    _objc_release(puVar3);
    _objc_release(uStack_430);
  }
  _objc_release(puStack_3e8);
  _objc_release(puVar27);
  _objc_release(puVar9);
  _objc_release(puVar26);
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(uVar25);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar4);
LAB_10b825164:
  lVar32 = *(long *)(param_1 + _DAT_112794470);
  *(undefined **)(param_1 + _DAT_112794470) = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126e1658;
  uVar31 = *(ulong *)(lVar32 + _DAT_112794468);
  if (uVar31 != 0) {
    _objc_retain(uVar31);
    _objc_opt_class(puVar5);
    uVar29 = uVar31;
    _objc_opt_isKindOfClass(uVar31,puVar5);
    uVar1 = uVar31;
    if ((uVar29 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar31);
    uVar33 = 0;
    if ((uVar29 & 1) != 0) {
      func_0x00010c0840e0(uVar31);
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar31;
    }
    lVar32 = lVar32 + _DAT_112794474;
    _objc_loadWeakRetained(lVar32);
    func_0x00010bf846a0();
    _objc_release(lVar32);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar33);
    return;
  }
  return;
}



/* Entry: 10b8247ac; end: 10b8251bb; -[SIGSelectBarItemCell _updateConstraintsForRefreshedSelectBarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8247ac(undefined *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uStack_1a0;
  undefined *puStack_158;
  
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_112794460;
  uVar2 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_11279445c;
  uVar12 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_112794450;
  uVar18 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c2793a0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar17;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar19;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar20;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(uVar27);
  _objc_release(uVar20);
  _objc_release(uVar24);
  _objc_release(uVar19);
  _objc_release(uVar23);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = param_1;
  puVar6 = param_1;
  puVar9 = param_1;
  if (param_3 < 4) {
    if (param_3 - 2U < 2) {
LAB_10b824c3c:
      lVar34 = (long)_DAT_112794458;
      uVar23 = *(undefined8 *)(param_1 + lVar34);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar23;
      func_0x00010bf493c0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(param_1 + lVar34);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar24;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = *(undefined **)(param_1 + lVar34);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar25;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = *(undefined **)(param_1 + lVar34);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = puVar26;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_1a0 = *(undefined8 *)(param_1 + lVar31);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uStack_1a0;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = *(undefined8 *)(param_1 + lVar31);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar27;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar31);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar34);
      func_0x00010c2793a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar2;
      func_0x00010bf493c0(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar22);
      _objc_release(puVar28);
      _objc_release(uVar16);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar13);
      _objc_release(puVar21);
      _objc_release(uVar27);
      _objc_release(uVar10);
      goto LAB_10b825108;
    }
    if (param_3 != 1) goto LAB_10b825164;
    uVar23 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = *(undefined **)(param_1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar22);
  }
  else {
    if (param_3 != 4) {
      if (param_3 != 5) goto LAB_10b825164;
      goto LAB_10b824c3c;
    }
    lVar34 = (long)_DAT_112794458;
    uVar23 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar23;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = *(undefined **)(param_1 + lVar34);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar25;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = *(undefined **)(param_1 + lVar34);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar26;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uStack_1a0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010c2793a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar22);
    _objc_release(puVar28);
    _objc_release(uVar16);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar13);
    _objc_release(puVar21);
    _objc_release(uVar27);
    _objc_release(uVar10);
LAB_10b825108:
    _objc_release(puVar9);
    _objc_release(uStack_1a0);
  }
  _objc_release(puStack_158);
  _objc_release(puVar26);
  _objc_release(puVar15);
  _objc_release(puVar25);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar23);
LAB_10b825164:
  lVar31 = *(long *)(param_1 + _DAT_112794470);
  *(undefined **)(param_1 + _DAT_112794470) = puVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  ___stack_chk_fail();
  puVar22 = PTR_PTR_1126e1658;
  uVar32 = *(ulong *)(lVar31 + _DAT_112794468);
  if (uVar32 != 0) {
    _objc_retain(uVar32);
    _objc_opt_class(puVar22);
    uVar29 = uVar32;
    _objc_opt_isKindOfClass(uVar32,puVar22);
    uVar1 = uVar32;
    if ((uVar29 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar32);
    uVar33 = 0;
    if ((uVar29 & 1) != 0) {
      func_0x00010c0840e0(uVar32);
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar32;
    }
    lVar31 = lVar31 + _DAT_112794474;
    _objc_loadWeakRetained(lVar31);
    func_0x00010bf846a0();
    _objc_release(lVar31);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar33);
    return;
  }
  return;
}



/* Entry: 10b8251bc; end: 10b825297; -[SIGSelectBarItemCell _dismissTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8251bc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126e1658;
  uVar4 = *(ulong *)(param_1 + _DAT_112794468);
  if (uVar4 != 0) {
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
    uVar5 = 0;
    if ((uVar3 & 1) != 0) {
      func_0x00010c0840e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
    }
    param_1 = param_1 + _DAT_112794474;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf846a0();
    _objc_release(param_1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 10b825298; end: 10b8252a7; -[SIGSelectBarItemCell barType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b825298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794464);
}



/* Entry: 10b8252a8; end: 10b8252b7; -[SIGSelectBarItemCell item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8252a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794468);
}



/* Entry: 10b8252b8; end: 10b8252c7; -[SIGSelectBarItemCell last] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8252b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127943c4);
}



/* Entry: 10b8252c8; end: 10b8252e7; -[SIGSelectBarItemCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8252c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794474);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8252e8; end: 10b8252fb; -[SIGSelectBarItemCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8252e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794474,param_3);
  return;
}



/* Entry: 10b8252fc; end: 10b825397; -[SIGSelectBarItemCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8252fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112794474);
  _objc_storeStrong(param_1 + _DAT_112794468,0);
  _objc_storeStrong(param_1 + _DAT_112794470,0);
  _objc_storeStrong(param_1 + _DAT_11279445c,0);
  _objc_storeStrong(param_1 + _DAT_112794450,0);
  _objc_storeStrong(param_1 + _DAT_112794454,0);
  _objc_storeStrong(param_1 + _DAT_112794458,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794460,0);
  return;
}



/* Entry: 10b825398; end: 10b825413; +[SIGActionSheet viewControllerIsActionSheet:] */

uint FUN_10b825398(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b27f8;
    _objc_opt_class(PTR_PTR_1126b27f8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126b10a8;
      _objc_opt_class(PTR_PTR_1126b10a8);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      uVar3 = (uint)uVar2;
    }
    else {
      uVar3 = 1;
    }
  }
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 10b825414; end: 10b8254a7; +[SIGActionSheet getPresentedActionSheet:] */

void FUN_10b825414(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b27f8;
  _objc_opt_class(PTR_PTR_1126b27f8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b10a8;
    _objc_opt_class(PTR_PTR_1126b10a8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      _objc_retain(param_3);
    }
  }
  else {
    func_0x00010c10f840(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b8254a8; end: 10b82566b; -[SIGActionSheet initWithHeader:title:actionSheetCells:footer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b8254a8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined1 *param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x24;
  long unaff_x25;
  long lVar12;
  undefined1 *unaff_x26;
  undefined1 *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = param_5;
  puVar9 = param_3;
  uVar7 = param_6;
  func_0x00010bff0840();
  puVar2 = PTR_PTR_1126b10a0;
  if (param_1 != (undefined1 *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    puVar1 = param_3;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    func_0x00010c161da0(puVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_5);
    puVar9 = (undefined1 *)0x10;
    puVar3 = param_5;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x25 = *plStack_120;
      do {
        unaff_x26 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != unaff_x25) {
            _objc_enumerationMutation(param_5);
          }
          func_0x00010c161da0(*(undefined8 *)(lStack_128 + (long)unaff_x26 * 8));
          unaff_x26 = unaff_x26 + 1;
        } while (puVar3 != unaff_x26);
        puVar9 = (undefined1 *)0x10;
        puVar3 = param_5;
        func_0x00010bf52a60();
        unaff_x24 = 0;
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(param_5);
    puVar3 = param_1;
    func_0x00010c161da0(param_6);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10b82566c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  _objc_retain(uVar7);
  uVar11 = uVar7;
  func_0x00010c131280(param_3);
  puVar2 = PTR_PTR_1126b10a0;
  _objc_retain(puVar3);
  _objc_opt_class(puVar2);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  func_0x00010c161da0(puVar1);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  _objc_retain(puVar9);
  puVar4 = auStack_218;
  uVar10 = 0x10;
  puVar5 = puVar9;
  func_0x00010bf52a60();
  if (puVar5 != (undefined1 *)0x0) {
    unaff_x25 = *plStack_250;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != unaff_x25) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010c161da0(*(undefined8 *)(lStack_258 + (long)unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (puVar5 != unaff_x26);
      puVar4 = auStack_218;
      uVar10 = 0x10;
      puVar5 = puVar9;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (puVar5 != (undefined1 *)0x0);
  }
  _objc_release(puVar9);
  puVar8 = param_3;
  func_0x00010c161da0(uVar7);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(puVar9);
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_2c0;
  pcStack_268 = FUN_10b825824;
  puStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  uStack_2a0 = unaff_x24;
  puStack_298 = puVar1;
  puStack_290 = param_3;
  uStack_288 = uVar7;
  puStack_280 = puVar9;
  puStack_278 = puVar3;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  puStack_2b8 = PTR_PTR_11270b370;
  puStack_2c0 = puVar5;
  _objc_msgSendSuper2(&puStack_2c0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (ppuVar6 != (undefined1 **)0x0) {
    func_0x00010c189400(ppuVar6);
    func_0x00010c1c8b80(ppuVar6);
    lVar12 = (long)_DAT_112794478;
    _objc_retain(puVar4);
    uVar7 = *(undefined8 *)((long)ppuVar6 + lVar12);
    *(undefined1 **)((long)ppuVar6 + lVar12) = puVar4;
    _objc_release(uVar7);
    lVar12 = (long)_DAT_11279447c;
    _objc_retain(uVar10);
    uVar7 = *(undefined8 *)((long)ppuVar6 + lVar12);
    *(undefined8 *)((long)ppuVar6 + lVar12) = uVar10;
    _objc_release(uVar7);
    lVar12 = (long)_DAT_112794480;
    _objc_retain(uVar11);
    uVar7 = *(undefined8 *)((long)ppuVar6 + lVar12);
    *(undefined8 *)((long)ppuVar6 + lVar12) = uVar11;
    _objc_release(uVar7);
    puVar3 = puVar8;
    func_0x00010c0d3c80();
    uVar7 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112794484);
    *(undefined1 **)((long)ppuVar6 + (long)_DAT_112794484) = puVar3;
    _objc_release(uVar7);
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar8);
  return (undefined1 *)ppuVar6;
}



/* Entry: 10b82566c; end: 10b825823; -[SIGActionSheet replaceWithHeader:title:actionSheetCells:footer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b82566c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x24;
  long unaff_x25;
  long lVar11;
  long unaff_x26;
  undefined1 *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar9 = param_6;
  func_0x00010c131280(param_1);
  puVar2 = PTR_PTR_1126b10a0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  puVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  puVar1 = param_3;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  func_0x00010c161da0(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_5);
  puVar3 = auStack_e8;
  uVar8 = 0x10;
  lVar11 = param_5;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x25 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_5);
        }
        func_0x00010c161da0(*(undefined8 *)(lStack_128 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar11 != unaff_x26);
      puVar3 = auStack_e8;
      uVar8 = 0x10;
      lVar11 = param_5;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (lVar11 != 0);
  }
  _objc_release(param_5);
  uVar7 = param_1;
  func_0x00010c161da0(param_6);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_190;
  pcStack_138 = FUN_10b825824;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  puStack_168 = puVar1;
  uStack_160 = param_1;
  uStack_158 = param_6;
  lStack_150 = param_5;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar7);
  _objc_retain(puVar3);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  puStack_188 = PTR_PTR_11270b370;
  puStack_190 = puVar4;
  _objc_msgSendSuper2(&puStack_190,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (ppuVar5 != (undefined1 **)0x0) {
    func_0x00010c189400(ppuVar5);
    func_0x00010c1c8b80(ppuVar5);
    lVar11 = (long)_DAT_112794478;
    _objc_retain(puVar3);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined1 **)((long)ppuVar5 + lVar11) = puVar3;
    _objc_release(uVar6);
    lVar11 = (long)_DAT_11279447c;
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined8 *)((long)ppuVar5 + lVar11) = uVar8;
    _objc_release(uVar6);
    lVar11 = (long)_DAT_112794480;
    _objc_retain(uVar9);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined8 *)((long)ppuVar5 + lVar11) = uVar9;
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010c0d3c80();
    uVar10 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_112794484);
    *(undefined8 *)((long)ppuVar5 + (long)_DAT_112794484) = uVar6;
    _objc_release(uVar10);
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar7);
  return (undefined1 *)ppuVar5;
}



/* Entry: 10b825824; end: 10b825963; -[SIGActionSheet initWithActionItems:title:headerItem:footerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b825824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_11270b370;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
    lVar4 = (long)_DAT_112794478;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11279447c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112794480;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794484);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794484) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b825964; end: 10b825a83; -[SIGActionSheet replaceWithActionItems:title:headerItem:footerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b825964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010be921a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794478);
  *(undefined8 *)(param_1 + _DAT_112794478) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279447c);
  *(undefined8 *)(param_1 + _DAT_11279447c) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794480);
  *(undefined8 *)(param_1 + _DAT_112794480) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794484);
  *(undefined8 *)(param_1 + _DAT_112794484) = uVar2;
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010beacec0(param_1);
  func_0x00010beab0a0(param_1);
  func_0x00010beaca40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraints_112593058);
  return;
}



/* Entry: 10b825a84; end: 10b825aff; -[SIGActionSheet setAttributedText:typeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b825a84(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794478);
    *(undefined8 *)(param_1 + _DAT_112794478) = 0;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_112794488;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + _DAT_11279448c) = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b825b00; end: 10b825b4f; -[SIGActionSheet presentNestedActionSheet:] */

void FUN_10b825b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010beeefe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11bfc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b825b50; end: 10b825b7f; -[SIGActionSheet dismissActionSheet] */

void FUN_10b825b50(undefined8 param_1)

{
  func_0x00010beeefe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b825b80; end: 10b825bcf; -[SIGActionSheet dismissActionSheetWithCompletion:] */

void FUN_10b825b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010beeefe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103820();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b825bd0; end: 10b825c57; -[SIGActionSheet presentFromSCUIContainer:completion:] */

void FUN_10b825bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b27f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040200();
  func_0x00010c161de0(param_1,param_2,puVar1);
  func_0x00010bf0c9a0(param_3,param_2,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b825c58; end: 10b825c8b; -[SIGActionSheet viewWillAppear:] */

void FUN_10b825c58(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270b370;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 10b825c8c; end: 10b826017; -[SIGActionSheet viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b825c8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_11270b370;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794490);
  *(long *)(param_1 + _DAT_112794490) = lVar3;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_112794494;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_112794498;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar5 = (long)_DAT_11279449c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar3 = (long)_DAT_1127944a0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar3 = (long)_DAT_1127944a4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar3);
  func_0x00010beacec0(param_1);
  func_0x00010beab0a0(param_1);
  func_0x00010beaca40(param_1);
  return;
}



/* Entry: 10b826018; end: 10b82605f; -[SIGActionSheet viewDidLayoutSubviews] */

void FUN_10b826018(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b370;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010bed5ac0(param_1);
  return;
}



/* Entry: 10b826060; end: 10b8261eb; -[SIGActionSheet _resetActionSheetView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b826060(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_1127944a8;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar5));
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_1127944ac;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_1127944b0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11279447c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_112794480;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + _DAT_11279449c);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_11279447c;
  if (*(long *)(lVar2 + lVar5) != 0) {
    func_0x00010c219b60();
    lVar7 = (long)_DAT_1127944a0;
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(lVar2 + lVar7));
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(lVar2 + lVar7);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(lVar2 + lVar7);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(lVar2 + lVar7);
    func_0x00010c261580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7520();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar2 + lVar7),PTR_s_addSubview__11259c880,
               *(undefined8 *)(lVar2 + lVar5));
    return;
  }
  return;
}



/* Entry: 10b8261ec; end: 10b8262f3; -[SIGActionSheet _setupHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8261ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11279447c;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c219b60(lVar1,param_2,0);
    lVar1 = (long)_DAT_1127944a0;
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar1));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar1));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c261580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7520();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_addSubview__11259c880,
               *(undefined8 *)(param_1 + lVar4));
    return;
  }
  return;
}



/* Entry: 10b8262f4; end: 10b8263fb; -[SIGActionSheet _setupFooter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8262f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794480;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c219b60(lVar1,param_2,0);
    lVar1 = (long)_DAT_1127944a4;
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar1));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar1));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c261580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7520();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_addSubview__11259c880,
               *(undefined8 *)(param_1 + lVar4));
    return;
  }
  return;
}



/* Entry: 10b8263fc; end: 10b8266ab; -[SIGActionSheet _setupBody] */

/* WARNING: Possible PIC construction at 0x00010b82755c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b8263fc(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  long lVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  double dVar52;
  double dVar53;
  undefined8 uVar54;
  double dVar55;
  undefined8 uVar56;
  
  iVar1 = _DAT_112794484;
  puVar5 = PTR__CGRectZero_110347608;
  lVar40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar45 = (long)_DAT_112794478;
  if ((*(long *)(param_4 + lVar45) != 0) || (*(long *)(param_4 + _DAT_112794488) != 0)) {
    lVar2 = *(long *)(param_4 + _DAT_112794484);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126e1678;
      _objc_alloc(PTR_PTR_1126e1678);
      param_3 = *(double *)(puVar5 + 0x10);
      func_0x00010c013de0(*(undefined8 *)puVar5,*(undefined8 *)(puVar5 + 8),param_3,
                          *(undefined8 *)(puVar5 + 0x18));
      if (*(long *)(param_4 + lVar45) == 0) {
        if (*(long *)(param_4 + _DAT_112794488) != 0) {
          func_0x00010c16b740(puVar3);
        }
      }
      else {
        func_0x00010c216240(puVar3);
      }
      if (*(long *)(param_4 + _DAT_1127944b4) != 0) {
        func_0x00010c1a7780(puVar3);
      }
      if (*(long *)(param_4 + _DAT_1127944b8) != 0) {
        func_0x00010bea4580(puVar3);
        lVar45 = param_4;
        func_0x00010c0e4780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d2600(puVar3);
        _objc_release(lVar45);
      }
      func_0x00010c219b60(puVar3);
      func_0x00010bef6d60(*(undefined8 *)(param_4 + _DAT_11279449c));
      _objc_release(puVar3);
    }
  }
  dVar53 = 0.0;
  lVar44 = *(long *)(param_4 + iVar1);
  _objc_retain(lVar44);
  lVar2 = lVar44;
  func_0x00010bf52a60();
  lVar45 = lRam0000000000000000;
  if (lVar2 != 0) {
    dVar52 = *(double *)puVar5;
    uVar54 = *(undefined8 *)(puVar5 + 8);
    dVar55 = *(double *)(puVar5 + 0x10);
    uVar56 = *(undefined8 *)(puVar5 + 0x18);
    do {
      lVar51 = 0;
      do {
        if (lRam0000000000000000 != lVar45) {
          _objc_enumerationMutation(lVar44);
        }
        lVar48 = (long)_DAT_11279449c;
        lVar4 = *(long *)(param_4 + lVar48);
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        lVar42 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        if (lVar42 != 0) {
          puVar5 = PTR_PTR_1126e1680;
          _objc_alloc();
          dVar53 = dVar52;
          param_3 = dVar55;
          func_0x00010c013de0(dVar52,uVar54,dVar55,uVar56);
          func_0x00010c219b60();
          func_0x00010bef6d60(*(undefined8 *)(param_4 + lVar48));
          _objc_release(puVar5);
        }
        func_0x00010bef6d60(*(undefined8 *)(param_4 + lVar48));
        lVar51 = lVar51 + 1;
      } while (lVar2 != lVar51);
      lVar2 = lVar44;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar40) {
    return dVar53;
  }
  ___stack_chk_fail();
  lVar51 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar40 = lVar44;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127944a8;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar54 = *(undefined8 *)(lVar44 + lVar4);
  *(undefined8 *)(lVar44 + lVar4) = 0;
  _objc_release(uVar54);
  lVar48 = (long)_DAT_1127944ac;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar54 = *(undefined8 *)(lVar44 + lVar48);
  *(undefined8 *)(lVar44 + lVar48) = 0;
  _objc_release(uVar54);
  lVar42 = (long)_DAT_1127944b0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar54 = *(undefined8 *)(lVar44 + lVar42);
  *(undefined8 *)(lVar44 + lVar42) = 0;
  _objc_release(uVar54);
  lVar45 = lVar40;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar45;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar45);
  func_0x00010c148fc0(lVar40);
  dVar52 = 0.0;
  dVar53 = 0.0;
  if (param_3 <= 0.0) {
    dVar53 = 10.0;
  }
  lVar45 = (long)_DAT_112794480;
  lVar46 = *(long *)(lVar44 + lVar45);
  lVar49 = (long)_DAT_112794494;
  uVar56 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar53 = -dVar53;
  uVar54 = uVar56;
  if (lVar46 == 0) {
    func_0x00010bf493c0(dVar53);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = *(undefined8 *)(lVar44 + _DAT_1127944a4);
    func_0x00010c274200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  _objc_release(uVar56);
  uVar7 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar40;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar7;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar40;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112794498;
  uVar9 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = (long)_DAT_11279449c;
  uVar21 = *(undefined8 *)(lVar44 + lVar47);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar44 + lVar47);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(lVar44 + lVar47);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(lVar44 + lVar47);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(lVar44 + lVar43);
  func_0x00010bf1ff80(uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(lVar44 + lVar47);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  dVar55 = 5.65581687602019e-315;
  uVar38 = uVar37;
  func_0x00010c14d8a0(0x443b8000);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(lVar44 + lVar47);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(lVar44 + lVar49);
  func_0x00010c2a5060(uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(lVar44 + lVar48);
  *(undefined **)(lVar44 + lVar48) = puVar5;
  _objc_release(uVar41);
  _objc_release(uVar39);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar36);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar35);
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
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar50);
  _objc_release(uVar8);
  _objc_release(uVar56);
  _objc_release(lVar46);
  _objc_release(uVar7);
  if (*(long *)(lVar44 + lVar45) != 0) {
    lVar48 = (long)_DAT_1127944a4;
    uVar35 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(lVar44 + lVar49);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar35;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar37;
    func_0x00010bf493c0(dVar53);
    _objc_retainAutoreleasedReturnValue();
    uVar38 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(lVar44 + lVar49);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar38;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar44 + lVar49);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010bf1ff80(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010c08de00(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar44 + lVar48);
    func_0x00010c2793a0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar44 + lVar42);
    *(undefined **)(lVar44 + lVar42) = puVar5;
    _objc_release(uVar21);
    _objc_release(uVar26);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar23);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar20);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar17);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar6);
    _objc_release(uVar37);
    _objc_release(uVar56);
    _objc_release(uVar36);
    _objc_release(uVar35);
    dVar55 = dVar53;
  }
  lVar45 = (long)_DAT_11279447c;
  if (*(long *)(lVar44 + lVar45) != 0) {
    lVar50 = (long)_DAT_1127944a0;
    uVar35 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = lVar44;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = lVar42;
    func_0x00010c08cee0();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = lVar48;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar56 = uVar35;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(lVar44 + lVar49);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    dVar55 = -10.0;
    uVar6 = uVar36;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar38 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(lVar44 + lVar49);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar38;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar44 + lVar49);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010c08de00(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(lVar44 + lVar45);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar44 + lVar50);
    func_0x00010c2793a0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar44 + lVar4);
    *(undefined **)(lVar44 + lVar4) = puVar5;
    _objc_release(uVar21);
    _objc_release(uVar26);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar23);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar20);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar17);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar6);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar56);
    _objc_release(lVar46);
    _objc_release(lVar48);
    _objc_release(lVar42);
    _objc_release(uVar35);
  }
  func_0x00010beaab60(lVar44);
  _objc_release(uVar54);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar51) {
    return dVar55;
  }
  ___stack_chk_fail();
  lVar44 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar53 = 0.0;
  lVar2 = *(long *)(lVar40 + _DAT_11279449c);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar2;
  func_0x00010bf52a60();
  lVar40 = lRam0000000000000000;
  if (lVar45 == 0) {
    dVar55 = 0.0;
  }
  else {
    dVar55 = 0.0;
    do {
      lVar51 = 0;
      do {
        if (lRam0000000000000000 != lVar40) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c0699c0(*(undefined8 *)(lVar51 * 8));
        dVar55 = dVar55 + dVar52;
        lVar51 = lVar51 + 1;
      } while (lVar45 != lVar51);
      lVar45 = lVar2;
      func_0x00010bf52a60();
    } while (lVar45 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar44) {
    return dVar55;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + _DAT_1127944a8) == 0) {
    if (*(long *)(lVar2 + _DAT_1127944ac) != 0) {
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    if (*(long *)(lVar2 + _DAT_1127944b0) == 0) {
      return dVar53;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8);
  return dVar53;
}



/* Entry: 10b8266ac; end: 10b82741b; -[SIGActionSheet _updateConstraints] */

/* WARNING: Possible PIC construction at 0x00010b82755c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b8266ac(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  undefined *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  
  lVar40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_1127944a8;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar2 = *(undefined8 *)(param_4 + lVar45);
  *(undefined8 *)(param_4 + lVar45) = 0;
  _objc_release(uVar2);
  lVar46 = (long)_DAT_1127944ac;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar2 = *(undefined8 *)(param_4 + lVar46);
  *(undefined8 *)(param_4 + lVar46) = 0;
  _objc_release(uVar2);
  lVar43 = (long)_DAT_1127944b0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar2 = *(undefined8 *)(param_4 + lVar43);
  *(undefined8 *)(param_4 + lVar43) = 0;
  _objc_release(uVar2);
  lVar41 = lVar1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar41;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar41);
  func_0x00010c148fc0(lVar1);
  dVar52 = 0.0;
  dVar53 = 0.0;
  if (param_3 <= 0.0) {
    dVar53 = 10.0;
  }
  lVar41 = (long)_DAT_112794480;
  lVar47 = *(long *)(param_4 + lVar41);
  lVar49 = (long)_DAT_112794494;
  uVar3 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar53 = -dVar53;
  uVar2 = uVar3;
  if (lVar47 == 0) {
    func_0x00010bf493c0(dVar53);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_4 + _DAT_1127944a4);
    func_0x00010c274200(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112794498;
  uVar7 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_11279449c;
  uVar19 = *(undefined8 *)(param_4 + lVar48);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_4 + lVar48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_4 + lVar48);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_4 + lVar48);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_4 + lVar44);
  func_0x00010bf1ff80(uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_4 + lVar48);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  dVar51 = 5.65581687602019e-315;
  uVar37 = uVar36;
  func_0x00010c14d8a0(0x443b8000);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_4 + lVar48);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_4 + lVar49);
  func_0x00010c2a5060(uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_4 + lVar46);
  *(undefined **)(param_4 + lVar46) = puVar33;
  _objc_release(uVar42);
  _objc_release(uVar38);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar35);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar34);
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
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar50);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar47);
  _objc_release(uVar5);
  if (*(long *)(param_4 + lVar41) != 0) {
    lVar46 = (long)_DAT_1127944a4;
    uVar34 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_4 + lVar49);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar36;
    func_0x00010bf493c0(dVar53);
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = *(undefined8 *)(param_4 + lVar49);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar37;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_4 + lVar49);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010bf1ff80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010c08de00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_4 + lVar46);
    func_0x00010c2793a0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_4 + lVar43);
    *(undefined **)(param_4 + lVar43) = puVar33;
    _objc_release(uVar19);
    _objc_release(uVar24);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar21);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar18);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar15);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar4);
    _objc_release(uVar36);
    _objc_release(uVar3);
    _objc_release(uVar35);
    _objc_release(uVar34);
    dVar51 = dVar53;
  }
  lVar41 = (long)_DAT_11279447c;
  if (*(long *)(param_4 + lVar41) != 0) {
    lVar50 = (long)_DAT_1127944a0;
    uVar34 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = lVar43;
    func_0x00010c08cee0();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = lVar46;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar34;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_4 + lVar49);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    dVar51 = -10.0;
    uVar4 = uVar35;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = *(undefined8 *)(param_4 + lVar49);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar37;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_4 + lVar49);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010c08de00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_4 + lVar41);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_4 + lVar50);
    func_0x00010c2793a0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_4 + lVar45);
    *(undefined **)(param_4 + lVar45) = puVar33;
    _objc_release(uVar19);
    _objc_release(uVar24);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar21);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar18);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar15);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar4);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar3);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar43);
    _objc_release(uVar34);
  }
  func_0x00010beaab60(param_4);
  _objc_release(uVar2);
  _objc_release(lVar39);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar40) {
    return dVar51;
  }
  ___stack_chk_fail();
  lVar40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar53 = 0.0;
  lVar39 = *(long *)(lVar1 + _DAT_11279449c);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar39;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar41 == 0) {
    dVar51 = 0.0;
  }
  else {
    dVar51 = 0.0;
    do {
      lVar43 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar39);
        }
        func_0x00010c0699c0(*(undefined8 *)(lVar43 * 8));
        dVar51 = dVar51 + dVar52;
        lVar43 = lVar43 + 1;
      } while (lVar41 != lVar43);
      lVar41 = lVar39;
      func_0x00010bf52a60();
    } while (lVar41 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar40) {
    return dVar51;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar39 + _DAT_1127944a8) == 0) {
    if (*(long *)(lVar39 + _DAT_1127944ac) != 0) {
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    if (*(long *)(lVar39 + _DAT_1127944b0) == 0) {
      return dVar53;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8);
  return dVar53;
}



/* Entry: 10b82741c; end: 10b827533; -[SIGActionSheet _stackViewIntrinsicContentHeight] */

/* WARNING: Possible PIC construction at 0x00010b82755c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b82741c(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar6 = 0.0;
  lVar2 = *(long *)(param_3 + _DAT_11279449c);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    dVar7 = 0.0;
  }
  else {
    dVar7 = 0.0;
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c0699c0(*(undefined8 *)(lVar5 * 8));
        dVar7 = dVar7 + param_2;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    if (*(long *)(lVar2 + _DAT_1127944a8) == 0) {
      if (*(long *)(lVar2 + _DAT_1127944ac) != 0) {
        func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      }
      if (*(long *)(lVar2 + _DAT_1127944b0) == 0) {
        return dVar6;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8);
    return dVar6;
  }
  return dVar7;
}



/* Entry: 10b827534; end: 10b8275a3; -[SIGActionSheet _setupAutolayout] */

/* WARNING: Possible PIC construction at 0x00010b82755c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b827534(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127944a8) == 0) {
    if (*(long *)(param_1 + _DAT_1127944ac) != 0) {
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    if (*(long *)(param_1 + _DAT_1127944b0) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8);
  return;
}



/* Entry: 10b8275a4; end: 10b8275b3; -[SIGActionSheet header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8275a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944a0);
}



/* Entry: 10b8275b4; end: 10b8275f3; -[SIGActionSheet setHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8275b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127944a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8275f4; end: 10b827603; -[SIGActionSheet footer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8275f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944a4);
}



/* Entry: 10b827604; end: 10b827643; -[SIGActionSheet setFooter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b827604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127944a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b827644; end: 10b827653; -[SIGActionSheet actionItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b827644(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794484);
}



/* Entry: 10b827654; end: 10b827663; -[SIGActionSheet headerActionLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b827654(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944b8);
}



/* Entry: 10b827664; end: 10b82766f; -[SIGActionSheet setHeaderActionLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b827664(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b827670; end: 10b82767f; -[SIGActionSheet onHeaderActionLabelTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b827670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944bc);
}



/* Entry: 10b827680; end: 10b82768b; -[SIGActionSheet setOnHeaderActionLabelTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b827680(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b82768c; end: 10b8276ab; -[SIGActionSheet delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82768c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127944c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8276ac; end: 10b8276bf; -[SIGActionSheet setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8276ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127944c0,param_3);
  return;
}



/* Entry: 10b8276c0; end: 10b8276cf; -[SIGActionSheet headerDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8276c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127944b4);
}



/* Entry: 10b8276d0; end: 10b8276db; -[SIGActionSheet setHeaderDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8276d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b8276dc; end: 10b8276fb; -[SIGActionSheet actionSheetNavigationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8276dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127944c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8276fc; end: 10b82770f; -[SIGActionSheet setActionSheetNavigationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8276fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127944c4,param_3);
  return;
}



/* Entry: 10b827710; end: 10b82771f; -[SIGActionSheet backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b827710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794490);
}



/* Entry: 10b827720; end: 10b82775f; -[SIGActionSheet setBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b827720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794490;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b827760; end: 10b82776f; -[SIGActionSheet bodyScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b827760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794494);
}



/* Entry: 10b827770; end: 10b8277af; -[SIGActionSheet setBodyScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b827770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794494;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8277b0; end: 10b8278f7; -[SIGActionSheet .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8277b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794494,0);
  _objc_storeStrong(param_1 + _DAT_112794490,0);
  _objc_destroyWeak(param_1 + _DAT_1127944c4);
  _objc_storeStrong(param_1 + _DAT_1127944b4,0);
  _objc_destroyWeak(param_1 + _DAT_1127944c0);
  _objc_storeStrong(param_1 + _DAT_1127944bc,0);
  _objc_storeStrong(param_1 + _DAT_1127944b8,0);
  _objc_storeStrong(param_1 + _DAT_1127944a4,0);
  _objc_storeStrong(param_1 + _DAT_1127944a0,0);
  _objc_storeStrong(param_1 + _DAT_112794498,0);
  _objc_storeStrong(param_1 + _DAT_112794480,0);
  _objc_storeStrong(param_1 + _DAT_11279447c,0);
  _objc_storeStrong(param_1 + _DAT_1127944b0,0);
  _objc_storeStrong(param_1 + _DAT_1127944ac,0);
  _objc_storeStrong(param_1 + _DAT_1127944a8,0);
  _objc_storeStrong(param_1 + _DAT_11279449c,0);
  _objc_storeStrong(param_1 + _DAT_112794488,0);
  _objc_storeStrong(param_1 + _DAT_112794478,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794484,0);
  return;
}



/* Entry: 10b8278f8; end: 10b8279b7; -[SIGActionSheetItemSeparator initWithFrame:] */

undefined1 * FUN_10b8278f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfe0660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b8279b8; end: 10b82822b; -[SIGActionSheetSectionHeader initWithFrame:] */

/* WARNING: Possible PIC construction at 0x00010b827b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b827c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b827b78) */
/* WARNING: Removing unreachable block (ram,0x00010b827c74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b8279b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_11270b380;
  puVar1 = &uStack_108;
  uStack_108 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      return (undefined *)0x0;
    }
    ___stack_chk_fail();
    lVar5 = (long)_DAT_1127944d0;
    func_0x00010c16b720(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = *(undefined **)((long)puVar1 + lVar5);
    uVar4 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c219b60();
    func_0x00010c21ad00(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar2);
    func_0x00010c1cfce0(puVar3);
    func_0x00010c1bdb00(puVar3);
    lVar5 = (long)_DAT_1127944c8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc(PTR_PTR_1126aea58);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c219b60();
    func_0x00010c21ad00(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar2);
    func_0x00010c1cfce0(puVar3);
    func_0x00010c1bdb00(puVar3);
    uVar4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_setHidden__1126479f8,uVar4);
  return puVar3;
}



/* Entry: 10b82822c; end: 10b82825f; -[SIGActionSheetSectionHeader _setHeaderActionLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82822c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127944d0;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,0);
  return;
}


