/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e1e5f0; end: 104e1e717; -[SCVoiceoverRecordingButtonView setState:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1e5f0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar4 = (long)_DAT_112713c4c;
  func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar4),param_2,1);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e1e718;
  puStack_60 = &UNK_110846540;
  _objc_copyWeak(auStack_58,auStack_48);
  ppuVar1 = &puStack_78;
  uStack_50 = param_3;
  _objc_retainBlock();
  if (param_4 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    func_0x00010c00ea00(0x3fc3333333333333);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar4));
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e1e718; end: 104e1e7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1e718(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (uVar2 = *(ulong *)(param_1 + 0x28), uVar2 < 3)) {
    uVar3 = *(undefined8 *)(&UNK_10dd8d230 + uVar2 * 8);
    uVar4 = *(undefined8 *)(&UNK_10dd8d248 + uVar2 * 8);
    func_0x00010c1677c0(*(undefined8 *)(&UNK_10dd8d218 + uVar2 * 8),lVar1);
    func_0x00010c1677c0(uVar3,*(undefined8 *)(lVar1 + _DAT_112713c50));
    func_0x00010c1677c0(uVar3,*(undefined8 *)(lVar1 + _DAT_112713c54));
    func_0x00010c1677c0(uVar4,*(undefined8 *)(lVar1 + _DAT_112713c58));
    func_0x00010c1677c0(uVar4,*(undefined8 *)(lVar1 + _DAT_112713c5c));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e1e7d0; end: 104e1ea97; -[SCVoiceoverRecordingButtonView _createViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1e7d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x0001092015b0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar5 = (long)_DAT_112713c50;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112713c54;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4014000000000000);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4043c00000000000);
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112713c58;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x3ff0000000000000);
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112713c5c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4043c00000000000);
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e1ea98; end: 104e1f27b; -[SCVoiceoverRecordingButtonView _layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1ea98(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(0x4053c00000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf49420(0x4053c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar14 = (long)_DAT_112713c50;
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf49420(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(uVar5);
  lVar15 = (long)_DAT_112713c54;
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(lVar15);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(uVar5);
  lVar15 = (long)_DAT_112713c5c;
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(lVar15);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(lVar14);
  _objc_release(uVar5);
  lVar16 = (long)_DAT_112713c58;
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = *(long *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(uVar12);
  _objc_release(lVar3);
  _objc_release(lVar14);
  _objc_release(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar15 + _DAT_112713c4c,0);
  _objc_storeStrong(lVar15 + _DAT_112713c5c,0);
  _objc_storeStrong(lVar15 + _DAT_112713c58,0);
  _objc_storeStrong(lVar15 + _DAT_112713c54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar15 + _DAT_112713c50,0);
  return;
}



/* Entry: 104e1f27c; end: 104e1f2eb; -[SCVoiceoverRecordingButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1f27c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713c4c,0);
  _objc_storeStrong(param_1 + _DAT_112713c5c,0);
  _objc_storeStrong(param_1 + _DAT_112713c58,0);
  _objc_storeStrong(param_1 + _DAT_112713c54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713c50,0);
  return;
}



/* Entry: 104e1f2ec; end: 104e1f3ff; -[SCVoiceoverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1f2ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b0db8;
  _objc_alloc(PTR_PTR_1126b0db8);
  lVar2 = param_1 + _DAT_112713c60;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b0dc0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112713c64;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112713c68;
  _objc_loadWeakRetained(lVar3);
  lVar5 = param_1 + _DAT_112713c6c;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c0626c0(puVar4,param_2,lVar2,lVar3,puVar1,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112713c70);
  *(undefined **)(param_1 + _DAT_112713c70) = puVar4;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e1f400; end: 104e1f45b; -[SCVoiceoverEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1f400(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713c70);
  *(undefined8 *)(param_1 + _DAT_112713c70) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e4680;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e1f45c; end: 104e1f4bb; -[SCVoiceoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1f45c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713c60);
  _objc_destroyWeak(param_1 + _DAT_112713c6c);
  _objc_destroyWeak(param_1 + _DAT_112713c68);
  _objc_destroyWeak(param_1 + _DAT_112713c64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713c70,0);
  return;
}



/* Entry: 104e1f4bc; end: 104e1f5fb; -[SCVoiceoverWorkflow initWithVoiceoverScope:audioServices:grapheneLogger:temporaryFileWriterServices:] */

undefined1 *
FUN_104e1f4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4688;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf84ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    func_0x00010beac580(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e1f5fc; end: 104e1f70f; -[SCVoiceoverWorkflow _setupEntryObservable] */

void FUN_104e1f5fc(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e1f710;
  puStack_58 = &UNK_110852548;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a0c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a0c00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e1f710; end: 104e1f79f;  */

void FUN_104e1f710(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bdac0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e1f7a0; end: 104e1f7b3;  */

void FUN_104e1f7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleEnterWithVoiceoverAudio_a_112567d40,
             param_2,param_3);
  return;
}



/* Entry: 104e1f7b4; end: 104e1fa73; -[SCVoiceoverWorkflow _handleEnterWithVoiceoverAudio:audioMixToggleInitialValue:mixingProportionValue:] */

void FUN_104e1f7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_7);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + 8);
  *(long *)(param_5 + 8) = param_7;
  _objc_release(uVar1);
  func_0x00010c0b3420(*(undefined8 *)(param_5 + 0x20),param_6,param_7 != 0);
  func_0x00010c0a9320(*(undefined8 *)(param_5 + 0x20),param_6,param_7 != 0);
  func_0x00010be9d2c0(param_5,param_6,param_7);
  lVar2 = *(long *)(param_5 + 0x10);
  func_0x00010c2a0b00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    func_0x00010c0c4ba0(&uStack_98,lVar2);
  }
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0dc8;
  _objc_alloc();
  func_0x00010bff51a0();
  puVar5 = PTR_PTR_1126b0dd0;
  _objc_alloc(PTR_PTR_1126b0dd0);
  func_0x00010bff5180(param_1);
  puVar6 = PTR_PTR_1126b0dd8;
  _objc_alloc(PTR_PTR_1126b0dd8);
  uVar7 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010c15fac0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86860(*(undefined8 *)(param_5 + 0x10));
  uVar11 = *(undefined8 *)(param_5 + 0x20);
  uVar8 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c2a0c20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfb4a20();
  uVar10 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c273c40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d20(param_1,param_2,param_3,param_4,puVar6,param_6,puVar5,uVar1,uVar11,uVar9,
                      uVar10,*(undefined8 *)(param_5 + 0x30));
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar7);
  func_0x00010c18b5e0(puVar6,param_6,param_5);
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c2a0b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4ec0(puVar6,param_6,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_7);
  return;
}



/* Entry: 104e1fa74; end: 104e1fabb; -[SCVoiceoverWorkflow voiceoverPlaybackControlsThumbnailFutures] */

void FUN_104e1fa74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a0c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e1fabc; end: 104e1fb43; -[SCVoiceoverWorkflow exitAndSaveAudio:] */

void FUN_104e1fabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c2a0c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a09c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010be03b40(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a0b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e1fb44; end: 104e1fbab; -[SCVoiceoverWorkflow exitWithoutSaving] */

void FUN_104e1fb44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a0c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a09c0();
  _objc_release(uVar1);
  func_0x00010be03b40(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a0b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e1fbac; end: 104e1fcdf; -[SCVoiceoverWorkflow _seekToEndOfAudio:] */

void FUN_104e1fbac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a0b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c2a0b00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c0c4ba0(&uStack_70,lVar2);
    }
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf0ed20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_88,lVar2);
    }
    _objc_release(lVar2);
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    uStack_90 = uStack_78;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_b0 = uStack_60;
    _CMTimeMinimum(&uStack_50,&uStack_a0,&uStack_c0);
  }
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_60 = uStack_40;
  func_0x00010c2a0b60(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104e1fce0; end: 104e1fd17; -[SCVoiceoverWorkflow _dismissVoiceoverViewController] */

void FUN_104e1fce0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e1fd18; end: 104e1fd83; -[SCVoiceoverWorkflow .cxx_destruct] */

void FUN_104e1fd18(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104e1fd84; end: 104e202b3; -[SCVoiceoverViewController initWithViewModel:audioSession:displayableArea:grapheneLogger:forceDisableAudioMixing:toolbarView:dismissalObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e1fd84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,byte param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_90 = PTR_PTR_1126e4690;
  puVar2 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar2);
    func_0x00010c219b20(puVar2);
    lVar6 = (long)_DAT_112713c90;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_7;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112713c94;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_8;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112713c98);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    lVar6 = (long)_DAT_112713c9c;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_9;
    _objc_release(uVar3);
    *(byte *)((long)puVar2 + (long)_DAT_112713ca0) = param_10 ^ 1;
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713ca4);
    *(undefined **)((long)puVar2 + (long)_DAT_112713ca4) = puVar4;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112713ca8;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_11;
    _objc_release(uVar3);
    func_0x00010bdd4340(puVar2);
    _objc_initWeak(auStack_a0,puVar2);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104e202b4;
    puStack_b0 = &UNK_110842a38;
    _objc_copyWeak(auStack_a8,auStack_a0);
    uVar3 = param_12;
    func_0x00010c25ff60(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_f0 = puVar4;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x104e202e0;
    puStack_d8 = &UNK_110852578;
    _objc_copyWeak(auStack_d0,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713cac);
    *(undefined **)((long)puVar2 + (long)_DAT_112713cac) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_118 = puVar4;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_104e20360;
    puStack_100 = &UNK_1108525a8;
    _objc_copyWeak(auStack_f8,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713cb0);
    *(undefined **)((long)puVar2 + (long)_DAT_112713cb0) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_140 = puVar4;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_104e203d8;
    puStack_128 = &UNK_1108525d8;
    _objc_copyWeak(auStack_120,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713cb8);
    *(undefined **)((long)puVar2 + (long)_DAT_112713cb8) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_168 = puVar4;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x104e204d4;
    puStack_150 = &UNK_110852608;
    _objc_copyWeak(auStack_148,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713cbc);
    *(undefined **)((long)puVar2 + (long)_DAT_112713cbc) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_190 = puVar4;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x104e20550;
    puStack_178 = &UNK_110852608;
    _objc_copyWeak(auStack_170,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713cc0);
    *(undefined **)((long)puVar2 + (long)_DAT_112713cc0) = puVar5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_198,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713cc4);
    *(undefined **)((long)puVar2 + (long)_DAT_112713cc4) = puVar4;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_198);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar2;
}



/* Entry: 104e202b4; end: 104e2035f;  */

void FUN_104e202b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be290e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e20360; end: 104e203d7;  */

void FUN_104e20360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0de8;
  _objc_alloc_init(PTR_PTR_1126b0de8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar2 = puVar1;
    func_0x00010bf9a080(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beaf540(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e203d8; end: 104e205cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e203d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112713cb4;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      func_0x00010c0c4ba0(&uStack_38,lVar1);
    }
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126b0df0;
    _objc_alloc(PTR_PTR_1126b0df0);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_98 = uStack_30;
    uStack_a0 = uStack_38;
    uStack_90 = uStack_28;
    _CMTimeRangeMake(auStack_68,&uStack_80,&uStack_a0);
    func_0x00010c003ca0(puVar2);
    func_0x00010c219b60();
    func_0x00010c160fc0(puVar2);
    func_0x00010c18b5e0(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e205cc; end: 104e2074f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e205cc(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104e20750;
    puStack_60 = &UNK_110849200;
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    ppuVar2 = &puStack_78;
    _objc_retainBlock(ppuVar2);
    puVar6 = PTR_PTR_1126b0e00;
    _objc_alloc(PTR_PTR_1126b0e00);
    func_0x00010c050720();
    lVar7 = (long)_DAT_112713c90;
    func_0x00010c06c920(*(undefined8 *)(lVar1 + lVar7));
    func_0x00010c210a80(puVar6);
    func_0x00010c160fc0(puVar6);
    lVar3 = lVar1 + _DAT_112713cb4;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0d4020();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c06c920(*(undefined8 *)(lVar1 + lVar7));
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar4);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e20750; end: 104e20783;  */

void FUN_104e20750(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e20784; end: 104e207d3; -[SCVoiceoverViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e20784(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112713ca4));
  puStack_28 = PTR_PTR_1126e4690;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e207d4; end: 104e20837; -[SCVoiceoverViewController loadView] */

void FUN_104e207d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbe00();
  _objc_release(param_1);
  return;
}



/* Entry: 104e20838; end: 104e208a7; -[SCVoiceoverViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e20838(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4690;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be49800(param_1);
  func_0x00010beab380(param_1);
  func_0x00010beaee60(param_1);
  func_0x00010bdead00(param_1);
  func_0x00010c0a9360(*(undefined8 *)(param_1 + _DAT_112713c9c));
  return;
}



/* Entry: 104e208a8; end: 104e208ef; -[SCVoiceoverViewController viewDidAppear:] */

void FUN_104e208a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be916e0(param_1);
  return;
}



/* Entry: 104e208f0; end: 104e20ac7; -[SCVoiceoverViewController _setupPlaybackControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e208f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  func_0x00010bdd42e0();
  func_0x00010bdd42c0(param_1);
  func_0x00010bedd300(param_1);
  lVar6 = (long)_DAT_112713c90;
  if (*(long *)(param_1 + lVar6) == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c0c20a0(&uStack_70);
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010bf5e7c0(&uStack_88);
      goto LAB_104e2095c;
    }
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
LAB_104e2095c:
  _CMTimeMinimum(&uStack_58,&uStack_70,&uStack_88);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = uStack_50;
  uStack_70 = uStack_58;
  uStack_60 = uStack_48;
  func_0x00010c288960();
  uStack_68 = uStack_50;
  uStack_70 = uStack_58;
  uStack_60 = uStack_48;
  func_0x00010c288e00(uVar1);
  lVar3 = param_1 + _DAT_112713cc8;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c2a0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214580(uVar1);
  _objc_release(lVar2);
  _objc_release(lVar3);
  uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010c0df320();
  if (lVar3 != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(param_1 + lVar6) == 0) {
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
      }
      else {
        func_0x00010bf8b3a0(&uStack_88);
      }
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_90 = uStack_60;
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      uStack_b0 = uStack_78;
      _CMTimeAdd(&uStack_70,&uStack_a0,&uStack_c0);
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_90 = uStack_60;
      func_0x00010befb300(uVar1);
      uVar5 = uVar5 + 1;
      uVar4 = *(ulong *)(param_1 + lVar6);
      func_0x00010c0df320();
    } while (uVar5 < uVar4);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 104e20ac8; end: 104e20b0f; -[SCVoiceoverViewController _setupButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e20ac8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bedede0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e20b10; end: 104e21c07; -[SCVoiceoverViewController _layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e20b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  double in_d3;
  double dVar23;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
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
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_alloc_init();
  lVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar22);
  lVar22 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar22 == 0) {
    dVar23 = 0.0;
  }
  else {
    lVar22 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar22;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar23 = (in_d3 - *(double *)(param_1 + _DAT_112713c98 + 0x18)) -
             *(double *)(param_1 + _DAT_112713c98 + 8);
    _objc_release(lVar21);
    _objc_release(lVar22);
  }
  puStack_1b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  puStack_180 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = (undefined *)lVar22;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = lVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = (undefined *)lVar22;
  func_0x00010bf493a0(puVar2,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_198 = puVar2;
  puStack_a0 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  puStack_1a8 = puVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = (undefined *)lVar22;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = (undefined *)lVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = (undefined *)lVar22;
  func_0x00010bf493a0(puVar3,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_1c8 = puVar3;
  puStack_98 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493a0(puVar2,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_90 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_168;
  func_0x00010c29bf00(lStack_168);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  puStack_170 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bf493c0(-dVar23,puVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1b8,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar21);
  _objc_release(lVar22);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(lStack_188);
  _objc_release(puStack_178);
  _objc_release(puStack_180);
  lVar21 = (long)_DAT_112713cac;
  uVar8 = *(undefined8 *)(lStack_168 + lVar21);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lStack_168;
  func_0x00010c29bf00(lStack_168);
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = (undefined *)uVar8;
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(lStack_168 + lVar21);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = (undefined *)uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_170;
  lStack_188 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar1;
  func_0x00010bf493c0(0x4024000000000000,uVar8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lStack_168 + lVar21);
  puStack_198 = (undefined *)uVar8;
  uStack_c0 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = (undefined *)uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_170;
  func_0x00010c274200(puStack_170);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493c0(0x4024000000000000,uVar9,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lStack_168 + lVar21);
  uStack_b8 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lStack_168 + lVar21);
  uStack_b0 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar20;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a8,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar19);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(lStack_188);
  _objc_release(puStack_178);
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_alloc_init();
  lVar22 = lStack_168;
  func_0x00010c29bf00(lStack_168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar22);
  puVar1 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_170;
  func_0x00010bf1ff80(puStack_170);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf493c0(0xc028000000000000,puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112713ccc;
  uVar8 = *(undefined8 *)(lStack_168 + lVar22);
  *(undefined **)(lStack_168 + lVar22) = puVar4;
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puStack_170;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010bf493c0(0x402c000000000000,puVar7,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  puStack_178 = puVar2;
  puStack_e0 = puVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puStack_170;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493c0(0xc02c000000000000,puVar16,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = *(undefined8 *)(lStack_168 + lVar22);
  puStack_d8 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar7);
  puStack_198 = (undefined *)(long)_DAT_112713cbc;
  uVar10 = *(undefined8 *)(lStack_168 + (long)puStack_198);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lStack_168;
  func_0x00010c29bf00(lStack_168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_1a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_178;
  puVar2 = puStack_178;
  puStack_190 = (undefined *)uVar8;
  func_0x00010c08de00(puStack_178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  uStack_100 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar11;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  uStack_f8 = uVar20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar13;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = uVar10;
  uStack_f0 = uVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a0,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar19);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(puStack_190);
  puStack_1a0 = (undefined *)(long)_DAT_112713cc0;
  uVar10 = *(undefined8 *)(lStack_168 + (long)puStack_1a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lStack_168;
  func_0x00010c29bf00(lStack_168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_1b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar19 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_178;
  puVar3 = puStack_178;
  puStack_1a8 = (undefined *)uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar19,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  uStack_120 = uVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar10;
  uStack_118 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar20;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = (undefined *)uVar10;
  uStack_110 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_120,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1b0,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar19);
  _objc_release(puVar3);
  _objc_release(puStack_1a8);
  uVar10 = *(undefined8 *)(lStack_168 + _DAT_112713cb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lStack_168;
  func_0x00010c29bf00(lStack_168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_1c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lStack_168 + (long)puStack_198);
  puStack_1a8 = (undefined *)uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = (undefined *)uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = (undefined *)uVar19;
  func_0x00010bf493c0(0x4030000000000000,uVar8,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar10;
  puStack_1b8 = (undefined *)uVar8;
  uStack_140 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lStack_168 + (long)puStack_1a0);
  puStack_1c8 = (undefined *)uVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = (undefined *)uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar19,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  uStack_138 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_178;
  puVar2 = puStack_178;
  func_0x00010c274200(puStack_178);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar10;
  uStack_130 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_128 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_140,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1c0,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(puVar1);
  _objc_release(uVar20);
  _objc_release(uVar11);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar19);
  _objc_release(uVar9);
  _objc_release(puStack_1a0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_198);
  _objc_release(puStack_1a8);
  uVar12 = *(undefined8 *)(lStack_168 + _DAT_112713cb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lStack_168;
  func_0x00010c29bf00(lStack_168);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf25b60(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar22,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(lVar22);
  puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = uVar12;
  func_0x00010bf25b60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_170;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = (undefined *)uVar12;
  uStack_150 = uVar19;
  func_0x00010bf25b60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar10;
  puStack_198 = (undefined *)uVar10;
  func_0x00010c274200(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0xc030000000000000,uVar11,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_148 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_150,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010beef8c0(puStack_1a8);
  _objc_release(puVar1);
  puVar1 = puStack_170;
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar19);
  lVar22 = lStack_168;
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar9);
  if (*(char *)(lVar22 + _DAT_112713ca0) == '\x01') {
    uVar20 = *(undefined8 *)(lVar22 + _DAT_112713cc4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(lVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar22);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = uVar20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010bf493c0(0x4020000000000000,uVar8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar20;
    uStack_160 = uVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf493c0(0x4020000000000000,uVar10,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_158 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_160,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar14);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(uVar10);
    _objc_release(uVar19);
    lVar22 = lStack_168;
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar20);
  }
  lVar21 = lVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar21);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(lStack_188);
  _objc_release(puStack_178);
  _objc_release(puStack_180);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_104e21c08;
  uStack_210 = uVar10;
  uStack_208 = uVar19;
  puStack_200 = puVar2;
  uStack_1f8 = uVar8;
  lStack_1f0 = lVar22;
  lStack_1e8 = lVar21;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lVar22 = (long)_DAT_112713cd0;
  uVar8 = *(undefined8 *)(puVar1 + lVar22);
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_104e21d0c;
  puStack_220 = &UNK_110852668;
  puStack_218 = puVar3;
  _objc_retain(puVar3);
  func_0x00010bef78c0(uVar8,param_2,&puStack_238);
  func_0x00010c181140(0x4059000000000000,*(undefined8 *)(puVar1 + _DAT_112713ccc));
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(puVar2);
  func_0x00010c24dc40(*(undefined8 *)(puVar1 + lVar22));
  _objc_release(puStack_218);
  _objc_release(puVar3);
  return;
}



/* Entry: 104e21c08; end: 104e21d0b; -[SCVoiceoverViewController _beginPresentAnimationWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e21c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112713cd0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e21d0c;
  puStack_50 = &UNK_110852668;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bef78c0(uVar2,param_2,&puStack_68);
  func_0x00010c181140(0x4059000000000000,*(undefined8 *)(param_1 + _DAT_112713ccc));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e21d0c; end: 104e21d17;  */

void FUN_104e21d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e21d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104e21d18; end: 104e21e17; -[SCVoiceoverViewController _beginDismissAnimationWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e21d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112713cd4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e21e18;
  puStack_50 = &UNK_110852668;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bef78c0(uVar2,param_2,&puStack_68);
  func_0x00010c181140(0xc028000000000000,*(undefined8 *)(param_1 + _DAT_112713ccc));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e21e18; end: 104e21e23;  */

void FUN_104e21e18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e21e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104e21e24; end: 104e21e7f; -[SCVoiceoverViewController _handleExitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e21e24(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112713c90);
  func_0x00010bfd5320();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb9030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showExitConfirmationDialog_11258bdb0);
    return;
  }
  param_1 = param_1 + _DAT_112713cc8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e21e80; end: 104e21f33; -[SCVoiceoverViewController _handleUndoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e21e80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = (long)_DAT_112713c90;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c0df320();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112713cb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f8c0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c12cd80(&uStack_48,uVar2);
    if (*(long *)(param_1 + lVar3) == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf5e7c0(&uStack_48);
    }
    func_0x00010c288e00(uVar2,param_2,&uStack_48,1);
    func_0x00010be9d2a0(param_1);
    func_0x00010bed2e80(param_1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 104e21f34; end: 104e21f37; -[SCVoiceoverViewController _handleSaveButton] */

void FUN_104e21f34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveAndDismiss_112583c28);
  return;
}



/* Entry: 104e21f38; end: 104e21fdb; -[SCVoiceoverViewController _handleAudioMixingSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e21f38(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c16bec0(*(undefined8 *)(param_1 + _DAT_112713c90),param_2,param_3 ^ 1);
  lVar1 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d4020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bededf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSaveAndUndoButtons_112595520);
  return;
}



/* Entry: 104e21fdc; end: 104e220ff; -[SCVoiceoverViewController _bindPlaybackControlsToPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e21fdc(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e22100;
  puStack_58 = &UNK_110852698;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112713ca4);
  param_1 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf5fa00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e22100; end: 104e221bb;  */

void FUN_104e22100(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e221bc;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104e221bc; end: 104e22227;  */

void FUN_104e221bc(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_38);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be74f40();
  _objc_release(param_1);
  return;
}



/* Entry: 104e22228; end: 104e22303; -[SCVoiceoverViewController _playbackTimeChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22228(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112713cd8);
  uVar3 = param_3[2];
  uVar5 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar5;
  puVar1[2] = uVar3;
  lVar4 = (long)_DAT_112713cdc;
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    func_0x00010bede660(param_1);
    *(undefined1 *)(param_1 + lVar4) = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x00010c288960();
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112713c90);
  func_0x00010c07bee0();
  if (iVar2 != 0) {
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    func_0x00010c288e00(uVar3,param_2,&uStack_50,0);
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 104e22304; end: 104e2242f; -[SCVoiceoverViewController _bindPlaybackButtonToPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22304(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e22430;
  puStack_58 = &UNK_1108526c8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112713ca4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fef40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e22430; end: 104e2251b;  */

void FUN_104e22430(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e2251c;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bf400(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104e2251c; end: 104e22573;  */

void FUN_104e2251c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e22574; end: 104e2267f; -[SCVoiceoverViewController _handlePlaybackButtonPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713cc4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112713c90);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf5a100(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e22680; end: 104e226df;  */

void FUN_104e22680(long param_1,undefined8 param_2,int param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010be293e0();
  }
  else {
    func_0x00010be31740();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e226e0; end: 104e22727; -[SCVoiceoverViewController _handlePlaybackButtonPause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e226e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a0b20();
  _objc_release(lVar1);
  func_0x00010bede660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed35b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAudioMixingSwitch_112592710);
  return;
}



/* Entry: 104e22728; end: 104e22863; -[SCVoiceoverViewController _handleSuccessfulPlaybackButtonPlayWithAudio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22728(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fef60();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar1 = (long)_DAT_112713cb4;
    lVar2 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar2);
    uVar3 = param_3;
    func_0x00010bf0ed20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0cf1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0b80(lVar2,param_2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c2a0b60();
    _objc_release(lVar2);
    param_1 = param_1 + lVar1;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a0b40();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e22864; end: 104e228b7; -[SCVoiceoverViewController _handleFailedPlaybackButtonPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22864(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd4e0();
  func_0x00010bede660(param_1);
  func_0x00010bed35a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e228b8; end: 104e229bf; -[SCVoiceoverViewController _setupRecordingButtonEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e228b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e229c0;
  puStack_58 = &UNK_110852728;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112713ca4);
  uVar2 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e229c0; end: 104e22aab;  */

void FUN_104e229c0(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e22aac;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bcae0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104e22aac; end: 104e22b03;  */

void FUN_104e22aac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ebe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e22b04; end: 104e22c17; -[SCVoiceoverViewController _bindToAudioSessionRecordingEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22b04(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e22c18;
  puStack_58 = &UNK_110852758;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112713ca4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713c90);
  func_0x00010c123dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e22c18; end: 104e22cd3;  */

void FUN_104e22c18(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e22cd4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e22cd4; end: 104e22d83;  */

void FUN_104e22cd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104e22d84;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x104e22d8c;
    puStack_58 = &UNK_110842e18;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x104e22d94;
    puStack_80 = &UNK_110841f20;
    lStack_78 = lVar1;
    lStack_50 = lVar1;
    lStack_28 = lVar1;
    func_0x00010c0bdc20(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48,&puStack_70,&puStack_98)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e22d84; end: 104e22d9f;  */

void FUN_104e22d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordingFailedToBegin_11257f870);
  return;
}



/* Entry: 104e22da0; end: 104e22df7; -[SCVoiceoverViewController _handleRecordingButtonBegan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22da0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112713c94);
  func_0x00010c1238e0();
  if (lVar1 == 0x67726e74) {
                    /* WARNING: Could not recover jumptable at 0x00010c2501d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112713c90),PTR_s_startRecording_112671a98);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be916f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestRecordingPermissionIfNee_112581f58);
  return;
}



/* Entry: 104e22df8; end: 104e22e07; -[SCVoiceoverViewController _handleRecordingButtonEnded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22df8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112713c90),PTR_s_stopRecording_112673400);
  return;
}



/* Entry: 104e22e08; end: 104e22e67; -[SCVoiceoverViewController _recordingFailedToBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22e08(long param_1)

{
  long lVar1;
  
  func_0x00010beb90e0();
  func_0x00010c0b3440(*(undefined8 *)(param_1 + _DAT_112713c9c));
  lVar1 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a0b20();
  _objc_release(lVar1);
  func_0x00010be9d2a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAllButtonStates_112592548);
  return;
}



/* Entry: 104e22e68; end: 104e22eaf; -[SCVoiceoverViewController _recordingStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22e68(long param_1)

{
  long lVar1;
  
  func_0x00010be9d2a0();
  lVar1 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a0b40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAllButtonStates_112592548);
  return;
}



/* Entry: 104e22eb0; end: 104e22fd7; -[SCVoiceoverViewController _recordingEndedWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22eb0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_3 & 1) == 0) {
    func_0x00010c0b3440(*(undefined8 *)(param_1 + _DAT_112713c9c),param_2,1);
  }
  else {
    func_0x00010c0b3460();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112713c90;
  if (*(long *)(param_1 + lVar2) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c0c20a0(&uStack_60);
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010bf5e7c0(&uStack_78);
      goto LAB_104e22f40;
    }
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
LAB_104e22f40:
  _CMTimeMinimum(&uStack_48,&uStack_60,&uStack_78);
  lVar2 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2a0b20();
  _objc_release(lVar2);
  func_0x00010be9d2a0(param_1);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010c288e00(uVar1);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010befb300(uVar1);
  func_0x00010bed2e80(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e22fd8; end: 104e22fdf; -[SCVoiceoverViewController snapSegmentExpandedCellShouldHandleTouch:] */

undefined8 FUN_104e22fd8(void)

{
  return 1;
}



/* Entry: 104e22fe0; end: 104e22fe3; -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeStartTime:] */

void FUN_104e22fe0(void)

{
  return;
}



/* Entry: 104e22fe4; end: 104e22fe7; -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeEndTime:] */

void FUN_104e22fe4(void)

{
  return;
}



/* Entry: 104e22fe8; end: 104e23097; -[SCVoiceoverViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e22fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112713cd8);
  uVar2 = param_4[2];
  uVar3 = *param_4;
  puVar1[1] = param_4[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd4e0();
  func_0x00010bede660(param_1);
  param_1 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a0b60();
  _objc_release(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 104e23098; end: 104e2309b; -[SCVoiceoverViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

void FUN_104e23098(void)

{
  return;
}



/* Entry: 104e2309c; end: 104e2309f; -[SCVoiceoverViewController snapSegmentExpandedCellFinishedSeeking:] */

void FUN_104e2309c(void)

{
  return;
}



/* Entry: 104e230a0; end: 104e230a3; -[SCVoiceoverViewController snapSegmentExpandedCellDidPressDelete:] */

void FUN_104e230a0(void)

{
  return;
}



/* Entry: 104e230a4; end: 104e230ab; -[SCVoiceoverViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

undefined8 FUN_104e230a4(void)

{
  return 0;
}



/* Entry: 104e230ac; end: 104e230af; -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

void FUN_104e230ac(void)

{
  return;
}



/* Entry: 104e230b0; end: 104e230b3; -[SCVoiceoverViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

void FUN_104e230b0(void)

{
  return;
}



/* Entry: 104e230b4; end: 104e230b7; -[SCVoiceoverViewController animationControllerForDismissedController:] */

void FUN_104e230b4(void)

{
  return;
}



/* Entry: 104e230b8; end: 104e230bb; -[SCVoiceoverViewController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_104e230b8(void)

{
  return;
}



/* Entry: 104e230bc; end: 104e230c3; -[SCVoiceoverViewController transitionDuration:] */

undefined8 FUN_104e230bc(void)

{
  return 0x3fd0000000000000;
}



/* Entry: 104e230c4; end: 104e233f3; -[SCVoiceoverViewController animateTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e230c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  
  _objc_retain(param_7);
  lVar3 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0 || lVar6 == 0) {
    func_0x00010bf43bc0(param_7,param_6,0);
  }
  else {
    lVar7 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = lVar6;
    if (lVar6 != lVar7) {
      lVar2 = lVar5;
    }
    _objc_retain(lVar2);
    uStack_88 = lVar6 == lVar7;
    if ((bool)uStack_88) {
      lVar9 = param_7;
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar9);
    }
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uVar12 = 0xc2000000;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104e233f4;
    puStack_a0 = &UNK_11084d5f8;
    lStack_98 = lVar2;
    _objc_retain(param_7);
    ppuVar8 = &puStack_b8;
    lStack_90 = param_7;
    _objc_retainBlock();
    lVar11 = (long)_DAT_112713ca8;
    lVar9 = *(long *)(param_5 + lVar11);
    if (lVar6 == lVar7) {
      if (lVar9 != 0) {
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_5 + _DAT_112713ce0);
        *(long *)(param_5 + _DAT_112713ce0) = lVar9;
        _objc_release(uVar10);
        puVar1 = (undefined8 *)(param_5 + _DAT_112713ce4);
        func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar11));
        *puVar1 = uVar12;
        puVar1[1] = param_2;
        puVar1[2] = param_3;
        puVar1[3] = param_4;
        uVar10 = *(undefined8 *)(param_5 + lVar11);
        func_0x00010c262ca0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar11));
        lVar7 = param_7;
        func_0x00010bf4b2a0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51460(uVar12,param_2,param_3,param_4,uVar10,param_6,lVar7);
        _objc_release(lVar7);
        _objc_release(uVar10);
        lVar7 = param_7;
        func_0x00010bf4b2a0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(lVar7);
        func_0x00010c19f0e0(uVar12,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar11));
      }
      func_0x00010bdd39e0(param_5,param_6,ppuVar8);
    }
    else {
      if (lVar9 != 0) {
        func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_112713ce0));
        puVar1 = (undefined8 *)(param_5 + _DAT_112713ce4);
        func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(param_5 + lVar11))
        ;
      }
      func_0x00010bdd3440(param_5,param_6,ppuVar8);
    }
    _objc_release(ppuVar8);
    _objc_release(lStack_90);
    _objc_release(lVar2);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_7);
  return;
}



/* Entry: 104e233f4; end: 104e23433;  */

void FUN_104e233f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 104e23434; end: 104e235ab; -[SCVoiceoverViewController _createAnimators] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23434(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104e235ac;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar1 = &puStack_80;
  _objc_retainBlock(ppuVar1);
  puStack_a8 = puVar3;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x104e23630;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_58);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  func_0x00010c00ea20(0x3fd0000000000000,0x3fe6666666666666);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112713cd0);
  *(undefined **)(param_1 + _DAT_112713cd0) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  func_0x00010c00ea20(0x3fd0000000000000,0x3fe6666666666666);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112713cd4);
  *(undefined **)(param_1 + _DAT_112713cd4) = puVar3;
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104e235ac; end: 104e236b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e235ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c181140(0xc028000000000000,*(undefined8 *)(param_1 + _DAT_112713ccc));
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e236b8; end: 104e23a0f; -[SCVoiceoverViewController _requestRecordingPermissionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e236b8(long param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined1 **)(param_1 + _DAT_112713c94);
  func_0x00010c1238e0();
  if (puVar1 != (undefined1 *)0x67726e74) {
    _objc_initWeak(auStack_98,param_1);
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104e23a10;
    puStack_a8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_a0,auStack_98);
    ppuVar2 = &puStack_c0;
    _objc_retainBlock();
    puStack_e8 = puVar8;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_104e23a3c;
    puStack_d0 = &UNK_11084e500;
    ppuVar3 = &puStack_e8;
    ppuStack_c8 = ppuVar2;
    _objc_retainBlock();
    puVar6 = PTR_PTR_1126aed70;
    ppuVar4 = ppuVar3;
    func_0x000109201cd0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x000109201cd0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    puStack_110 = puVar8;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_104e23aa8;
    puStack_f8 = &UNK_11084e500;
    ppuVar4 = &puStack_110;
    ppuStack_f0 = ppuVar2;
    _objc_retainBlock(ppuVar4);
    puVar8 = PTR_PTR_1126aed70;
    ppuVar5 = ppuVar4;
    func_0x000109201cb8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x000109201cb8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x0001092015bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar11 = puVar9;
    func_0x000109201c88();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x000109201ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar6;
    puStack_88 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c420(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c10eda0(param_1);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(ppuVar4);
    _objc_release(puVar6);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_a0);
    puVar1 = auStack_98;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bed2e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e23a10; end: 104e23a3b;  */

void FUN_104e23a10(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e23a3c; end: 104e23aa7;  */

void FUN_104e23a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_2);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
  _objc_release(puVar1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e23aa8; end: 104e23ab7;  */

void FUN_104e23aa8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104e23ab8; end: 104e23af3; -[SCVoiceoverViewController _updateAllButtonStates] */

void FUN_104e23ab8(undefined8 param_1)

{
  func_0x00010bedede0();
  func_0x00010bedd300(param_1);
  func_0x00010bede660(param_1);
  func_0x00010bed35a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateExitButton_112593838);
  return;
}



/* Entry: 104e23af4; end: 104e23b9b; -[SCVoiceoverViewController _updateSaveAndUndoButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23af4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713c90;
  func_0x00010c0df320(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c07bee0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cbc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195480();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e23b9c; end: 104e23c77; -[SCVoiceoverViewController _updateRecordingButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23b9c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = (long)_DAT_112713c90;
  if (*(long *)(param_1 + lVar4) == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
LAB_104e23be8:
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf5e7c0(&uStack_48);
    if (*(long *)(param_1 + lVar4) == 0) goto LAB_104e23be8;
    func_0x00010c0c20a0(&uStack_60);
  }
  puVar2 = &uStack_48;
  _CMTimeCompare(puVar2,&uStack_60);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112713cb0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c07bee0();
  if (iVar1 == 0) {
    if (-1 < (int)puVar2) {
      func_0x00010c195460(uVar3);
      goto LAB_104e23c5c;
    }
    func_0x00010c195460(uVar3);
  }
  func_0x00010c174b00(uVar3);
LAB_104e23c5c:
  _objc_release(uVar3);
  return;
}



/* Entry: 104e23c78; end: 104e23c9b; -[SCVoiceoverViewController _updatePlaybackControls] */

void FUN_104e23c78(undefined8 param_1)

{
  func_0x00010bedd5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bedd2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlaybackButton_112594e58);
  return;
}



/* Entry: 104e23c9c; end: 104e23cfb; -[SCVoiceoverViewController _updatePlayheadInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23c9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713c90);
  func_0x00010c07bee0(uVar2);
  func_0x00010c1ddd00(uVar1,param_2,(uint)uVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e23cfc; end: 104e23d6b; -[SCVoiceoverViewController _updatePlaybackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23cfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112713c90;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c07bee0(uVar2);
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010c0df320();
  uVar3 = (undefined4)uVar2;
  if (lVar4 == 0) {
    uVar3 = 1;
  }
  func_0x00010c1dd4c0(uVar1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e23d6c; end: 104e23dcb; -[SCVoiceoverViewController _updateExitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23d6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713c90);
  func_0x00010c07bee0(uVar2);
  func_0x00010c195460(uVar1,param_2,(uint)uVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e23dcc; end: 104e23e57; -[SCVoiceoverViewController _updateAudioMixingSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23dcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112713cc4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c07bee0(*(undefined8 *)(param_1 + _DAT_112713c90));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e23e58; end: 104e23f53; -[SCVoiceoverViewController _setAllButtonsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23e58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cbc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195480();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195480();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cc4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e23f54; end: 104e24027; -[SCVoiceoverViewController _saveAndDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e23f54(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e24028;
  puStack_48 = &UNK_1108526f8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  func_0x00010bea1ba0(param_1);
  func_0x00010bf5a100(*(undefined8 *)(param_1 + _DAT_112713c90));
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e24028; end: 104e240cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e24028(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_3 & 1) == 0) {
      func_0x00010beb90e0(param_1);
      func_0x00010bea1ba0(param_1);
    }
    else {
      func_0x00010c0b3480(*(undefined8 *)(param_1 + _DAT_112713c9c));
      lVar1 = param_1 + _DAT_112713cc8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf9b4e0();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e240d0; end: 104e2430b; -[SCVoiceoverViewController _showExitConfirmationDialog] */

void FUN_104e240d0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_e0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104e2430c;
  puStack_a0 = &UNK_110848c78;
  ppuVar1 = &puStack_b8;
  uStack_98 = param_1;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126aed70;
  func_0x000109201b38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104e24370;
  puStack_c8 = &UNK_110848c78;
  uStack_c0 = param_1;
  _objc_retainBlock(&puStack_e0);
  puVar5 = PTR_PTR_1126aed70;
  puVar4 = (undefined1 *)ppuVar3;
  func_0x0001092018f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000109201898();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar8 = puVar7;
  func_0x000109201b50();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  puStack_88 = puVar5;
  puStack_80 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  return;
}



/* Entry: 104e2430c; end: 104e24367;  */

void FUN_104e2430c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e24368;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_38);
  return;
}



/* Entry: 104e24368; end: 104e2436f;  */

void FUN_104e24368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveAndDismiss_112583c28);
  return;
}



/* Entry: 104e24370; end: 104e243cb;  */

void FUN_104e24370(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e243cc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_38);
  return;
}


