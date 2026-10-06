/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10655d3cc; end: 10655d53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_10655d3cc(long param_1,undefined8 ***param_2,undefined8 ***param_3,undefined8 ***param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pppuVar2 = (undefined8 ***)&puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar19 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ***)0x0) {
      pppuVar1 = (undefined8 ***)&UNK_10f382f10;
    }
    else {
      pppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppuVar1);
    puStack_80 = (undefined8 **)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&puStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11092a948,&puStack_80);
    puStack_68 = (undefined1 *)&puStack_80;
    func_0x00010007e5dc(&puStack_68);
    pppuVar1 = pppuVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pppuVar1 = pppuVar2;
      param_4 = param_3;
    }
  }
  pppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar1);
  _objc_retain(param_4);
  puStack_110 = PTR_PTR_1126f1b38;
  pppuVar3 = &ppuStack_118;
  ppuStack_118 = pppuVar2;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined8 ***)0x0) {
    func_0x00010c219b60(pppuVar3);
    puVar4 = PTR_PTR_1126b1870;
    _objc_alloc();
    func_0x00010c0639c0();
    lVar20 = (long)_DAT_11274a62c;
    uVar18 = *(undefined8 *)((long)pppuVar3 + lVar20);
    *(undefined **)((long)pppuVar3 + lVar20) = puVar4;
    _objc_release(uVar18);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar3 + lVar20));
    pppuVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar1;
    func_0x00010bf44480(pppuVar1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar1;
    func_0x00010c29d560(pppuVar1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar1;
    func_0x00010bf443a0(pppuVar1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar5;
    func_0x00010bf55720();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_11274a630;
    uVar18 = *(undefined8 *)((long)pppuVar3 + lVar21);
    *(undefined8 ****)((long)pppuVar3 + lVar21) = pppuVar9;
    _objc_release(uVar18);
    _objc_release(pppuVar8);
    _objc_release(pppuVar7);
    _objc_release(pppuVar6);
    _objc_release(pppuVar5);
    _objc_release(pppuVar2);
    func_0x00010c1ee6c0(*(undefined8 *)((long)pppuVar3 + lVar21));
    func_0x00010befbb60(pppuVar3);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)pppuVar3 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar18;
    uVar11 = *(undefined8 *)((long)pppuVar3 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar12;
    uVar13 = *(undefined8 *)((long)pppuVar3 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar3;
    func_0x00010bfe0660(pppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar14;
    uVar15 = *(undefined8 *)((long)pppuVar3 + lVar20);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar3;
    func_0x00010c08e400(pppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f0 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(pppuVar7);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(pppuVar6);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(pppuVar5);
    _objc_release(uVar11);
    _objc_release(uVar18);
    _objc_release(pppuVar2);
    _objc_release(uVar10);
  }
  _objc_release(param_4);
  _objc_release(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  return pppuVar1;
}



/* Entry: 10655d540; end: 10655d8d3; -[SCFocusedComposerMessageCell initWithComposerContextParams:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10655d540(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR_PTR_1126f1b38;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    puVar2 = PTR_PTR_1126b1870;
    _objc_alloc();
    func_0x00010c0639c0();
    lVar16 = (long)_DAT_11274a62c;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    uVar14 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar14;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf44480(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010bf443a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf55720();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_11274a630;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = uVar7;
    _objc_release(uVar15);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar14);
    func_0x00010c1ee6c0(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar14;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar3;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfe0660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar7;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c08e400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar15);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(puVar4);
    _objc_release(uVar8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 10655d8d4; end: 10655d8d7; -[SCFocusedComposerMessageCell configureWithCollectionViewDelegate:] */

void FUN_10655d8d4(void)

{
  return;
}



/* Entry: 10655d8d8; end: 10655d8db; -[SCFocusedComposerMessageCell contentViewForFocusedContent:] */

void FUN_10655d8d8(void)

{
  return;
}



/* Entry: 10655d8dc; end: 10655d8df; -[SCFocusedComposerMessageCell resetWithOriginalContent] */

void FUN_10655d8dc(void)

{
  return;
}



/* Entry: 10655d8e0; end: 10655d8e3; -[SCFocusedComposerMessageCell setContentIsFocused:focusedMessageContent:] */

void FUN_10655d8e0(void)

{
  return;
}



/* Entry: 10655d8e4; end: 10655d8e7; -[SCFocusedComposerMessageCell setPlaceholderView:] */

void FUN_10655d8e4(void)

{
  return;
}



/* Entry: 10655d8e8; end: 10655da3b; -[SCFocusedComposerMessageCell rerenderWithBoundingSize:] */

/* WARNING: Possible PIC construction at 0x00010655d944: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655d8e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11274a634;
  lVar1 = *(long *)(param_3 + lVar8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf49420(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + lVar8);
    *(undefined **)(param_3 + lVar8) = puVar5;
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010c1cbe20();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    lVar7 = (long)_DAT_11274a634;
    lVar1 = *(long *)(param_3 + lVar7);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      return;
    }
    uVar6 = *(undefined8 *)(param_3 + lVar7);
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0,
             uVar6);
  return;
}



/* Entry: 10655da3c; end: 10655da83; -[SCFocusedComposerMessageCell resetWithOriginalSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655da3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a634;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0
               ,*(undefined8 *)(param_1 + lVar2));
    return;
  }
  return;
}



/* Entry: 10655da84; end: 10655dad3; -[SCFocusedComposerMessageCell sizeForMaxWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655da84(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a630;
  func_0x00010c2a1580(*(undefined8 *)(param_2 + lVar1),param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010c0c3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x7fefffffffffffff,*(undefined8 *)(param_2 + lVar1),
             PTR_s_measureLayoutWithMaxSize_directi_11260e9c8,0);
  return;
}



/* Entry: 10655dad4; end: 10655db23; -[SCFocusedComposerMessageCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655dad4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a634,0);
  _objc_storeStrong(param_1 + _DAT_11274a630,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a62c,0);
  return;
}



/* Entry: 10655db24; end: 10655e117; -[SCFocusedMessageHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10655db24(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126f1b40;
  puVar1 = &uStack_d8;
  uStack_d8 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar16 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar16 = (long)_DAT_11274a638;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar18 = (long)_DAT_11274a63c;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR_PTR_1126cb800;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar17 = (long)_DAT_11274a640;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493c0(0xc01c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08e400(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar14);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c1408a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar15;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar7;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar16 = *(long *)((long)puVar1 + lVar17);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar16;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar19;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf49420(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 10.0;
    uVar15 = uVar11;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar4;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(lVar19);
    _objc_release(uVar14);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  uVar15 = *(undefined8 *)(lVar16 + _DAT_11274a644);
  *(undefined8 **)(lVar16 + _DAT_11274a644) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar15);
  puVar1 = param_4;
  func_0x00010c15dee0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(lVar16 + _DAT_11274a638));
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c15e380(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11274a63c;
  func_0x00010c16b720(*(undefined8 *)(lVar16 + lVar19));
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c15e380(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(lVar16 + lVar19));
  _objc_release(puVar1);
  func_0x00010c2707c0(param_4);
  uVar15 = 0x3ff0000000000000;
  if (param_1 <= 0.0) {
    uVar15 = 0;
  }
  lVar19 = (long)_DAT_11274a640;
  func_0x00010c1677c0(uVar15,*(undefined8 *)(lVar16 + lVar19));
  func_0x00010c2707c0(param_4);
  func_0x00010c19bc60(*(undefined8 *)(lVar16 + lVar19));
  puVar1 = param_4;
  func_0x00010c2707a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(lVar16 + lVar19));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 10655e118; end: 10655e257; -[SCFocusedMessageHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655e118(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11274a644);
  *(long *)(param_2 + _DAT_11274a644) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = param_4;
  func_0x00010c15dee0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11274a638),param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c15e380(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11274a63c;
  func_0x00010c16b720(*(undefined8 *)(param_2 + lVar3),param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c15e380(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar3),param_3,lVar1 == 0);
  _objc_release(lVar1);
  func_0x00010c2707c0(param_4);
  uVar2 = 0x3ff0000000000000;
  if (param_1 <= 0.0) {
    uVar2 = 0;
  }
  lVar3 = (long)_DAT_11274a640;
  func_0x00010c1677c0(uVar2,*(undefined8 *)(param_2 + lVar3));
  func_0x00010c2707c0(param_4);
  func_0x00010c19bc60(*(undefined8 *)(param_2 + lVar3));
  lVar1 = param_4;
  func_0x00010c2707a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_2 + lVar3),param_3,lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10655e258; end: 10655e267; -[SCFocusedMessageHeaderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655e258(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a644);
}



/* Entry: 10655e268; end: 10655e2c7; -[SCFocusedMessageHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655e268(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a644,0);
  _objc_storeStrong(param_1 + _DAT_11274a640,0);
  _objc_storeStrong(param_1 + _DAT_11274a63c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a638,0);
  return;
}



/* Entry: 10655e2c8; end: 10655e55b; -[SCFocusedMessageStateView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10655e2c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
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
  undefined *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f1b48;
  puVar25 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar25,PTR_s_initWithFrame__1125e2948);
  puVar12 = puVar25;
  if (puVar25 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar25);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar27 = (long)_DAT_11274a648;
    uVar26 = *(undefined8 *)((long)puVar25 + lVar27);
    *(undefined **)((long)puVar25 + lVar27) = puVar1;
    _objc_release(uVar26);
    func_0x00010c219b60(*(undefined8 *)((long)puVar25 + lVar27));
    func_0x00010befbb60(puVar25);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar25 + lVar27);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar25;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar2;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar26;
    uVar3 = *(undefined8 *)((long)puVar25 + lVar27);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar25;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar5;
    uVar6 = *(undefined8 *)((long)puVar25 + lVar27);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar25;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar25 + lVar27);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf494e0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar26);
    _objc_release(puVar13);
    _objc_release(uVar2);
    func_0x00010beaf9c0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar25;
  }
  ___stack_chk_fail();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cb800;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4026000000000000,0x4026000000000000);
  lVar30 = (long)_DAT_11274a64c;
  uVar26 = *(undefined8 *)((long)puVar12 + lVar30);
  *(undefined **)((long)puVar12 + lVar30) = puVar1;
  _objc_release(uVar26);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)((long)puVar12 + lVar30));
  _objc_release(puVar1);
  func_0x00010c19bc60(0x3ff0000000000000,*(undefined8 *)((long)puVar12 + lVar30));
  func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar30));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  lVar28 = (long)_DAT_11274a650;
  uVar26 = *(undefined8 *)((long)puVar12 + lVar28);
  *(undefined **)((long)puVar12 + lVar28) = puVar1;
  _objc_release(uVar26);
  _objc_release(puVar11);
  func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar28));
  lVar31 = (long)_DAT_11274a648;
  func_0x00010befbb60(*(undefined8 *)((long)puVar12 + lVar31));
  func_0x00010befbb60(*(undefined8 *)((long)puVar12 + lVar31));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar29 = (long)_DAT_11274a654;
  uVar26 = *(undefined8 *)((long)puVar12 + lVar29);
  *(undefined **)((long)puVar12 + lVar29) = puVar1;
  _objc_release(uVar26);
  func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar29));
  func_0x00010c1cfce0(*(undefined8 *)((long)puVar12 + lVar29));
  uVar26 = *(undefined8 *)((long)puVar12 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar26);
  _objc_release(puVar1);
  uVar26 = *(undefined8 *)((long)puVar12 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar26);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)((long)puVar12 + lVar31));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = *(undefined8 **)((long)puVar12 + lVar30);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)((long)puVar12 + lVar31);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)((long)puVar12 + lVar30);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar14;
  func_0x00010bf49420(0x4026000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)((long)puVar12 + lVar30);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010bf49420(0x4026000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)((long)puVar12 + lVar30);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)((long)puVar12 + lVar29);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)((long)puVar12 + lVar28);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)((long)puVar12 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar12 + lVar28);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)((long)puVar12 + lVar30);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)((long)puVar12 + lVar28);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar22;
  func_0x00010bf49420(0x4019333340000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)((long)puVar12 + lVar28);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar23;
  func_0x00010bf49420(0x4019333340000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar11;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar3);
  _objc_release(uVar22);
  _objc_release(uVar2);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar10);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar8);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar26);
  _objc_release(uVar14);
  _objc_release(puVar25);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return puVar13;
  }
  ___stack_chk_fail();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = (long)_DAT_11274a654;
  func_0x00010c16b720(*(undefined8 *)((long)puVar13 + lVar28));
  lVar30 = (long)_DAT_11274a648;
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar13 + lVar30));
  lVar29 = (long)_DAT_11274a658;
  puVar25 = *(undefined8 **)((long)puVar13 + lVar29);
  if (puVar25 != (undefined8 *)0x0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  if (puVar24 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)((long)puVar13 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar13 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar6;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar13 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar13 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar13 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar13 + lVar30);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar13 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar13 + (long)_DAT_11274a64c);
    func_0x00010c1408a0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar18;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar13 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar13;
    func_0x00010c274200(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar13 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010bf1ff80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar13 + lVar29);
    *(undefined **)((long)puVar13 + lVar29) = puVar1;
    _objc_release(uVar22);
    _objc_release(uVar3);
    _objc_release(puVar12);
    _objc_release(uVar21);
    _objc_release(uVar2);
    _objc_release(puVar25);
    _objc_release(uVar20);
    _objc_release(uVar10);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar26);
    _objc_release(uVar9);
    _objc_release(uVar6);
    puVar25 = *(undefined8 **)((long)puVar13 + lVar29);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  func_0x00010c1cbe20(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return puVar13;
  }
  ___stack_chk_fail();
  if (puVar25 != (undefined8 *)0x0) {
    func_0x00010c23d0a0(puVar25);
    return puVar25;
  }
  return puVar13;
}



/* Entry: 10655e55c; end: 10655ea47; -[SCFocusedMessageStateView _setupSeenByView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10655e55c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cb800;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4026000000000000,0x4026000000000000);
  lVar23 = (long)_DAT_11274a64c;
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar23),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c19bc60(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e53db8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  lVar21 = (long)_DAT_11274a650;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar19);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21),param_2,0);
  lVar24 = (long)_DAT_11274a648;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar24),param_2,*(undefined8 *)(param_1 + lVar23));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar24),param_2,*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  dVar25 = *(double *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar25,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar22 = (long)_DAT_11274a654;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar22),param_2,0);
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar19,param_2,puVar1);
  _objc_release(puVar1);
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar19,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar24),param_2,*(undefined8 *)(param_1 + lVar22));
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar23);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar24);
  lStack_c8 = lVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar19;
  func_0x00010bf493a0(lVar3,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  lStack_d8 = lVar3;
  lStack_c0 = lVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar19;
  func_0x00010bf49420(0x4026000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  uStack_e8 = uVar19;
  uStack_b8 = uVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = uVar4;
  func_0x00010bf49420(0x4026000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  uStack_f8 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  uStack_108 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar19;
  func_0x00010bf493a0(uVar5,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar21);
  uStack_118 = uVar5;
  uStack_a8 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  uStack_120 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar19;
  func_0x00010bf493a0(uVar6,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar21);
  uStack_a0 = uVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar21);
  uStack_98 = uVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar26 = 6.300000190734863;
  uVar4 = uVar9;
  func_0x00010bf49420(0x4019333340000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar21);
  uStack_90 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf49420(0x4019333340000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_c0,8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  _objc_release(uStack_d0);
  lVar3 = lStack_c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return dVar26;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10655ea48;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_11274a654;
  uStack_190 = uVar4;
  uStack_188 = uVar9;
  uStack_180 = uVar19;
  uStack_178 = uVar8;
  uStack_170 = uVar7;
  uStack_168 = uVar6;
  lStack_160 = lVar21;
  puStack_158 = puVar1;
  uStack_150 = uVar5;
  uStack_148 = uVar10;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c16b720(*(undefined8 *)(lVar3 + lVar22));
  lVar24 = (long)_DAT_11274a648;
  func_0x00010c1a7f60(*(undefined8 *)(lVar3 + lVar24),param_2,puVar2 == (undefined *)0x0);
  lVar23 = (long)_DAT_11274a658;
  lVar21 = *(long *)(lVar3 + lVar23);
  if (lVar21 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  if (puVar2 != (undefined *)0x0) {
    uVar9 = *(undefined8 *)(lVar3 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar3 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar9;
    func_0x00010bf493c0(0x4028000000000000,uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar3 + lVar22);
    uStack_1c8 = uVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar3 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010bf493c0(0xc028000000000000,uVar11,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar3 + lVar22);
    uStack_1c0 = uVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(lVar3 + lVar24);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar3 + lVar22);
    uStack_1b8 = uVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar3 + _DAT_11274a64c);
    func_0x00010c1408a0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    dVar26 = 5.0;
    uVar6 = uVar15;
    func_0x00010bf493c0(0x4014000000000000,uVar15,param_2,uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(lVar3 + lVar24);
    uStack_1b0 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar3;
    func_0x00010c274200(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar17;
    func_0x00010bf493a0(uVar17,param_2,lVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(lVar3 + lVar24);
    uStack_1a8 = uVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar3;
    func_0x00010bf1ff80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar18;
    func_0x00010bf493a0(uVar18,param_2,lVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1a0 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1c8,6);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar3 + lVar23);
    *(undefined **)(lVar3 + lVar23) = puVar1;
    _objc_release(uVar20);
    _objc_release(uVar8);
    _objc_release(lVar22);
    _objc_release(uVar18);
    _objc_release(uVar7);
    _objc_release(lVar21);
    _objc_release(uVar17);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar19);
    _objc_release(uVar10);
    _objc_release(uVar9);
    lVar21 = *(long *)(lVar3 + lVar23);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  func_0x00010c1cbe20(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return dVar26;
  }
  ___stack_chk_fail();
  if (lVar21 != 0) {
    func_0x00010c23d0a0(lVar21);
    dVar26 = 11.0;
    if (11.0 <= dVar25) {
      dVar26 = dVar25;
    }
    return dVar26 + 24.0;
  }
  return 12.0;
}



/* Entry: 10655ea48; end: 10655ed93; -[SCFocusedMessageStateView setMessageState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10655ea48(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
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
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11274a654;
  func_0x00010c16b720(*(undefined8 *)(param_3 + lVar20));
  lVar22 = (long)_DAT_11274a648;
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar22),param_4,param_5 == 0);
  lVar21 = (long)_DAT_11274a658;
  lVar18 = *(long *)(param_3 + lVar21);
  if (lVar18 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_3 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf493c0(0x4028000000000000,uVar1,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + lVar20);
    uStack_98 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493c0(0xc028000000000000,uVar4,param_4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + lVar20);
    uStack_90 = uVar6;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + lVar22);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0(uVar7,param_4,uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + lVar20);
    uStack_88 = uVar9;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + _DAT_11274a64c);
    func_0x00010c1408a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 5.0;
    uVar12 = uVar10;
    func_0x00010bf493c0(0x4014000000000000,uVar10,param_4,uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + lVar22);
    uStack_80 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf493a0(uVar13,param_4,lVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_3 + lVar22);
    uStack_78 = uVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_3;
    func_0x00010bf1ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf493a0(uVar15,param_4,lVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_98,6);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_3 + lVar21);
    *(undefined **)(param_3 + lVar21) = puVar17;
    _objc_release(uVar19);
    _objc_release(uVar16);
    _objc_release(lVar20);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar18);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar18 = *(long *)(param_3 + lVar21);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  func_0x00010c1cbe20(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lVar18 != 0) {
    func_0x00010c23d0a0(lVar18);
    dVar23 = 11.0;
    if (11.0 <= param_2) {
      dVar23 = param_2;
    }
    return dVar23 + 24.0;
  }
  return 12.0;
}



/* Entry: 10655ed94; end: 10655edcb; +[SCFocusedMessageStateView heightForMessageState:] */

double FUN_10655ed94(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  double dVar1;
  
  if (param_5 != 0) {
    func_0x00010c23d0a0(param_5);
    dVar1 = 11.0;
    if (11.0 <= param_2) {
      dVar1 = param_2;
    }
    return dVar1 + 24.0;
  }
  return 12.0;
}



/* Entry: 10655edcc; end: 10655eddb; -[SCFocusedMessageStateView messageState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655edcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a65c);
}



/* Entry: 10655eddc; end: 10655ee5b; -[SCFocusedMessageStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655eddc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a65c,0);
  _objc_storeStrong(param_1 + _DAT_11274a658,0);
  _objc_storeStrong(param_1 + _DAT_11274a64c,0);
  _objc_storeStrong(param_1 + _DAT_11274a650,0);
  _objc_storeStrong(param_1 + _DAT_11274a654,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a648,0);
  return;
}



/* Entry: 10655ee5c; end: 10655f287; -[SCFocusedMessageView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10655ee5c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f1b50;
  puVar17 = &uStack_b8;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar17,PTR_s_init_1125d9248);
  lVar15 = 0;
  if (puVar17 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar17);
    _objc_release(puVar1);
    puVar2 = puVar17;
    func_0x00010c08c0e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar2);
    func_0x00010c160fc0(puVar17);
    func_0x00010c21e900(puVar17);
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_opt_new();
    lVar18 = (long)_DAT_11274a660;
    uVar14 = *(undefined8 *)((long)puVar17 + lVar18);
    *(undefined **)((long)puVar17 + lVar18) = puVar1;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar17 + lVar18));
    func_0x00010c16e060(*(undefined8 *)((long)puVar17 + lVar18));
    func_0x00010c190b80(*(undefined8 *)((long)puVar17 + lVar18));
    func_0x00010c166c00(*(undefined8 *)((long)puVar17 + lVar18));
    func_0x00010befbb60(puVar17);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar17;
    puStack_a8 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    puStack_a0 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x00010c274200(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar17;
    puStack_98 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x00010bf1ff80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar14);
    _objc_release(puVar2);
    puVar1 = PTR_PTR_1126cb808;
    _objc_alloc();
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar5,uVar8,uVar11,uVar19);
    lVar15 = (long)_DAT_11274a664;
    uVar14 = *(undefined8 *)((long)puVar17 + lVar15);
    *(undefined **)((long)puVar17 + lVar15) = puVar1;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar17 + lVar15));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar17 + lVar18));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar5,uVar8,uVar11,uVar19);
    lVar15 = (long)_DAT_11274a668;
    uVar14 = *(undefined8 *)((long)puVar17 + lVar15);
    *(undefined **)((long)puVar17 + lVar15) = puVar1;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar17 + lVar15));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar17 + lVar18));
    puVar1 = PTR_PTR_1126cb810;
    _objc_alloc();
    func_0x00010c013de0(uVar5,uVar8,uVar11,uVar19);
    lVar16 = (long)_DAT_11274a66c;
    uVar14 = *(undefined8 *)((long)puVar17 + lVar16);
    *(undefined **)((long)puVar17 + lVar16) = puVar1;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar17 + lVar16));
    lVar15 = *(long *)((long)puVar17 + lVar18);
    param_3 = *(undefined8 **)((long)puVar17 + lVar16);
    func_0x00010bef6d60();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar17;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar16 = (long)_DAT_11274a670;
  puVar17 = *(undefined8 **)(lVar15 + lVar16);
  _objc_retain(param_3);
  _objc_retain(puVar17);
  if (param_3 == puVar17) {
    _objc_release(puVar17);
    _objc_release(param_3);
  }
  else {
    if (puVar17 == (undefined8 *)0x0) {
      _objc_release();
    }
    else {
      puVar2 = param_3;
      func_0x00010c071ae0();
      _objc_release(puVar17);
      _objc_release(param_3);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10655f3bc;
    }
    _objc_retain(param_3);
    uVar14 = *(undefined8 *)(lVar15 + lVar16);
    *(undefined8 **)(lVar15 + lVar16) = param_3;
    _objc_release(uVar14);
    puVar17 = param_3;
    func_0x00010bfe0280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(lVar15 + _DAT_11274a664));
    _objc_release(puVar17);
    puVar17 = param_3;
    func_0x00010bf0e120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c70c0(*(undefined8 *)(lVar15 + _DAT_11274a66c));
    _objc_release(puVar17);
    puVar17 = param_3;
    func_0x00010bf4be20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(lVar15 + _DAT_11274a668));
    _objc_release(puVar17);
    func_0x00010c1cbe20(lVar15);
  }
LAB_10655f3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 10655f288; end: 10655f3d3; -[SCFocusedMessageView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655f288(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11274a670;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_10655f3bc;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bfe0280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11274a664),param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf0e120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c70c0(*(undefined8 *)(param_1 + _DAT_11274a66c),param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf4be20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274a668),param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
LAB_10655f3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655f3d4; end: 10655f3db; -[SCFocusedMessageView setContentView:] */

void FUN_10655f3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c182b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setContentView_maxWidth__11263e4f0,param_3,0)
  ;
  return;
}



/* Entry: 10655f3dc; end: 10655f7df; -[SCFocusedMessageView setContentView:maxWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655f3dc(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
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
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar23 = (long)_DAT_11274a674;
  if (param_7 != *(long *)(param_5 + lVar23)) {
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)(param_5 + lVar23);
    *(long *)(param_5 + lVar23) = param_7;
    _objc_release(uVar3);
    uVar2 = (undefined1)*(undefined8 *)(param_5 + lVar23);
    func_0x00010c27ad80();
    *(undefined1 *)(param_5 + _DAT_11274a678) = uVar2;
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar23));
    lVar22 = (long)_DAT_11274a668;
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar22));
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    fVar24 = -1.5881868e-23;
    dVar25 = param_4 * 0.2;
    _objc_release(puVar4);
    uVar5 = *(ulong *)(param_5 + lVar23);
    _objc_opt_respondsToSelector(uVar5,PTR_s_sizeForMaxWidth__11266ced8);
    if ((uVar5 & 1) == 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar23));
      dVar26 = param_4;
      if (dVar25 <= param_4) {
        dVar26 = dVar25;
      }
      dVar25 = (double)(long)(param_3 * (dVar26 / param_4));
      dVar26 = (double)(long)dVar26;
    }
    else {
      if (param_8 == 0) {
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar22));
      }
      else {
        func_0x00010bfb2c80(param_8);
        param_3 = (double)fVar24;
      }
      param_3 = param_3 + -24.0;
      func_0x00010c23d2c0(*(undefined8 *)(param_5 + lVar23));
      if (dVar25 <= param_2) {
        param_2 = dVar25;
      }
      dVar25 = (double)(long)param_3;
      dVar26 = (double)(long)param_2;
      param_3 = dVar25;
      param_4 = dVar26;
    }
    uVar6 = *(undefined8 *)(param_5 + lVar22);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf49420(dVar26);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_5 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_5 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_5 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_5 + lVar22);
    func_0x00010c2793a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf49520(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_5 + lVar23);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + lVar23);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_5 + _DAT_11274a67c);
    *(undefined **)(param_5 + _DAT_11274a67c) = puVar4;
    _objc_release(uVar21);
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
    _objc_release(uVar3);
    _objc_release(uVar6);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010c1cbe20(param_5);
    bVar1 = false;
    if ((param_3 == dVar25) && (bVar1 = false, !NAN(param_4) && !NAN(dVar26))) {
      bVar1 = param_4 == dVar26;
    }
    if (!bVar1) {
      func_0x00010c137cc0(dVar25,dVar26,*(undefined8 *)(param_5 + lVar23));
    }
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = (long)_DAT_11274a674;
  func_0x00010c219b60(*(undefined8 *)(param_7 + lVar20));
  if (*(long *)(param_7 + _DAT_11274a67c) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  func_0x00010c139ec0(*(undefined8 *)(param_7 + lVar20));
  uVar3 = *(undefined8 *)(param_7 + lVar20);
  *(undefined8 *)(param_7 + lVar20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10655f7e0; end: 10655f843; -[SCFocusedMessageView resetContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655f7e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_11274a674;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar1),param_2,
                      *(undefined1 *)(param_1 + _DAT_11274a678));
  if (*(long *)(param_1 + _DAT_11274a67c) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  func_0x00010c139ec0(*(undefined8 *)(param_1 + lVar1));
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10655f844; end: 10655f8d3; -[SCFocusedMessageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655f844(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a67c,0);
  _objc_storeStrong(param_1 + _DAT_11274a674,0);
  _objc_storeStrong(param_1 + _DAT_11274a670,0);
  _objc_storeStrong(param_1 + _DAT_11274a668,0);
  _objc_storeStrong(param_1 + _DAT_11274a66c,0);
  _objc_storeStrong(param_1 + _DAT_11274a664,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a660,0);
  return;
}



/* Entry: 10655f8d4; end: 10655f947; -[SCGrapheneSaturnChatHeaderMetric2 init] */

undefined1 * FUN_10655f8d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1b58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10655f948; end: 10655fabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_10655f948(long param_1,undefined8 *****param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *****pppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *****pppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  undefined8 ****ppppuVar23;
  undefined8 *puVar24;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 ****ppppuStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 *puStack_140;
  undefined8 ****ppppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = param_2;
  puVar18 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,pppppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pppppuVar1 = (undefined8 *****)&UNK_11092a9b8;
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11092a9b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar18 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar18 = puVar3;
      param_4 = param_3;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10655fabc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar10 = pppppuVar1;
  puVar3 = puVar18;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar1);
  _objc_retain(puVar18);
  puVar24 = (undefined8 *)0x0;
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar23 = pppppuVar2[1];
    _objc_retain(pppppuVar1);
    if (pppppuVar1 == (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar2 = pppppuVar1;
      _objc_retainAutorelease(pppppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pppppuVar2);
    _objc_retain(puVar18);
    if (puVar18 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f382f87;
    }
    else {
      _objc_retainAutorelease(puVar18);
      puVar3 = puVar18;
      func_0x00010bdc3520(puVar18);
    }
    _objc_release(puVar18);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    pppppuVar10 = (undefined8 *****)&UNK_11092aa08;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (*(code *)(*ppppuVar23)[3])(ppppuVar23,&UNK_11092aa08,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar22 = 0;
    puVar24 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar18);
  pppppuVar2 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar18);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar18);
  _objc_release(pppppuVar1);
  pppppuVar4 = pppppuVar2;
  __Unwind_Resume();
  puVar20 = &uStack_1a0;
  pcStack_128 = FUN_10655fcec;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar13 = pppppuVar10;
  puVar19 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar24;
  ppppuStack_148 = pppppuVar2;
  puStack_140 = puVar18;
  ppppuStack_138 = pppppuVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pppppuVar10);
  ppppuVar23 = (undefined8 ****)0x0;
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar23 = pppppuVar4[1];
    _objc_retain(pppppuVar10);
    if (pppppuVar10 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar1 = pppppuVar10;
      _objc_retainAutorelease(pppppuVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar10);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,pppppuVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    pppppuVar13 = (undefined8 *****)&UNK_11092aa58;
    (*(code *)(*ppppuVar23)[3])(ppppuVar23,&UNK_11092aa58,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar19 = puVar20;
    puVar24 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar19 = puVar20;
      puVar24 = &uStack_1a0;
    }
  }
  pppppuVar1 = pppppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar10);
  _objc_release(pppppuVar10);
  pppppuVar2 = pppppuVar1;
  __Unwind_Resume();
  puVar3 = &uStack_220;
  pcStack_1a8 = FUN_10655fe60;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar19;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar24;
  pppuStack_1c8 = ppppuVar23;
  ppppuStack_1c0 = pppppuVar1;
  ppppuStack_1b8 = pppppuVar10;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pppppuVar13);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar23 = pppppuVar2[1];
    _objc_retain(pppppuVar13);
    if (pppppuVar13 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar1 = pppppuVar13;
      _objc_retainAutorelease(pppppuVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar13);
    func_0x00010002b838(auStack_200,pppppuVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    (*(code *)(*ppppuVar23)[3])(ppppuVar23,&UNK_11092aaa8,&uStack_220,puVar19);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar18 = puVar3;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar18 = puVar3;
    }
  }
  pppppuVar1 = pppppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar13);
  _objc_release(pppppuVar13);
  __Unwind_Resume();
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar18);
  puStack_2b0 = PTR_PTR_1126f1b60;
  pppppuVar2 = &ppppuStack_2b8;
  ppppuStack_2b8 = pppppuVar1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),pppppuVar2,
                      PTR_s_initWithFrame__1125e2948);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    puVar5 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    puVar6 = puVar5;
    func_0x00010c08c0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(puVar6);
    func_0x00010befbd60(puVar5);
    puVar3 = puVar18;
    func_0x00010bf5d580(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar5);
    _objc_release(puVar3);
    func_0x00010c216380(puVar5);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar5);
    _objc_release(puVar6);
    func_0x00010befbb60(pppppuVar2);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar1 = pppppuVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    puStack_2a8 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar10 = pppppuVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    puStack_2a0 = puVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar13 = pppppuVar2;
    func_0x00010c08de00(pppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493c0(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    puStack_298 = puVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar4 = pppppuVar2;
    func_0x00010c2793a0(pppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf493c0(0xc03a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_290 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(pppppuVar4);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(pppppuVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(pppppuVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(pppppuVar1);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  pppppuVar1 = (undefined8 *****)((long)puVar18 + (long)_DAT_11274a684);
  _objc_loadWeakRetained(pppppuVar1);
  func_0x00010bf7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppppuVar1);
  return pppppuVar1;
}



/* Entry: 10655fabc; end: 10655fceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_10655fabc(long param_1,undefined8 *****param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *****pppppuVar1;
  undefined8 *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *****pppppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *****pppppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 ****ppppuVar22;
  long *plVar23;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 ****ppppuStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar7 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar23 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pppppuVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f382f87;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pppppuVar1 = (undefined8 *****)&UNK_11092aa08;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11092aa08,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar7 = auStack_78;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  _objc_release(param_3);
  pppppuVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pppppuVar4 = pppppuVar3;
  __Unwind_Resume();
  puVar20 = &uStack_120;
  pcStack_a8 = FUN_10655fcec;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar11 = pppppuVar1;
  puVar19 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar7;
  ppppuStack_c8 = pppppuVar3;
  puStack_c0 = param_3;
  ppppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar1);
  ppppuVar22 = (undefined8 ****)0x0;
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar22 = pppppuVar4[1];
    _objc_retain(pppppuVar1);
    if (pppppuVar1 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar3 = pppppuVar1;
      _objc_retainAutorelease(pppppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,pppppuVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    pppppuVar11 = (undefined8 *****)&UNK_11092aa58;
    (*(code *)(*ppppuVar22)[3])(ppppuVar22,&UNK_11092aa58,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar19 = puVar20;
    puVar7 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar19 = puVar20;
      puVar7 = &uStack_120;
    }
  }
  pppppuVar3 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar1);
  _objc_release(pppppuVar1);
  pppppuVar4 = pppppuVar3;
  __Unwind_Resume();
  puVar20 = &uStack_1a0;
  pcStack_128 = FUN_10655fe60;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar19;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar7;
  pppuStack_148 = ppppuVar22;
  ppppuStack_140 = pppppuVar3;
  ppppuStack_138 = pppppuVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pppppuVar11);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar22 = pppppuVar4[1];
    _objc_retain(pppppuVar11);
    if (pppppuVar11 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar1 = pppppuVar11;
      _objc_retainAutorelease(pppppuVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar11);
    func_0x00010002b838(auStack_180,pppppuVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    (*(code *)(*ppppuVar22)[3])(ppppuVar22,&UNK_11092aaa8,&uStack_1a0,puVar19);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar2 = puVar20;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar20;
    }
  }
  pppppuVar1 = pppppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar11);
  _objc_release(pppppuVar11);
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  puStack_230 = PTR_PTR_1126f1b60;
  pppppuVar3 = &ppppuStack_238;
  ppppuStack_238 = pppppuVar1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),pppppuVar3,
                      PTR_s_initWithFrame__1125e2948);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    puVar5 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    puVar6 = puVar5;
    func_0x00010c08c0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(puVar6);
    func_0x00010befbd60(puVar5);
    puVar7 = puVar2;
    func_0x00010bf5d580(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar5);
    _objc_release(puVar7);
    func_0x00010c216380(puVar5);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar5);
    _objc_release(puVar6);
    func_0x00010befbb60(pppppuVar3);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar1 = pppppuVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    puStack_228 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    puStack_220 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar4 = pppppuVar3;
    func_0x00010c08de00(pppppuVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf493c0(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    puStack_218 = puVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar16 = pppppuVar3;
    func_0x00010c2793a0(pppppuVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493c0(0xc03a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_210 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(pppppuVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(pppppuVar4);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(pppppuVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(pppppuVar1);
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  pppppuVar1 = (undefined8 *****)((long)puVar2 + (long)_DAT_11274a684);
  _objc_loadWeakRetained(pppppuVar1);
  func_0x00010bf7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppppuVar1);
  return pppppuVar1;
}



/* Entry: 10655fcec; end: 10655fe5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***** FUN_10655fcec(long param_1,undefined8 *****param_2,undefined1 *param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *****pppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *****pppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *****pppppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar19 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pppppuVar1 = (undefined8 *****)&UNK_11092aa58;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11092aa58,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar19;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar19;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar19 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar5;
  _objc_retain(pppppuVar1);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar21 = pppppuVar2[1];
    _objc_retain(pppppuVar1);
    if (pppppuVar1 == (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)&UNK_10f382f87;
    }
    else {
      pppppuVar2 = pppppuVar1;
      _objc_retainAutorelease(pppppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar1);
    func_0x00010002b838(auStack_e0,pppppuVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (*(code *)(*ppppuVar21)[3])(ppppuVar21,&UNK_11092aaa8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar18 = (undefined1 *)puVar19;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar18 = (undefined1 *)puVar19;
    }
  }
  pppppuVar2 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar1);
  _objc_release(pppppuVar1);
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar18);
  puStack_190 = PTR_PTR_1126f1b60;
  pppppuVar1 = &ppppuStack_198;
  ppppuStack_198 = pppppuVar2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),pppppuVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (pppppuVar1 != (undefined8 *****)0x0) {
    puVar3 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    puVar4 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(puVar4);
    func_0x00010befbd60(puVar3);
    puVar5 = puVar18;
    func_0x00010bf5d580(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar3);
    _objc_release(puVar5);
    func_0x00010c216380(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar3);
    _objc_release(puVar4);
    func_0x00010befbb60(pppppuVar1);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar2 = pppppuVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_188 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar9 = pppppuVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_180 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar12 = pppppuVar1;
    func_0x00010c08de00(pppppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493c0(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    puStack_178 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar1;
    func_0x00010c2793a0(pppppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493c0(0xc03a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_170 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(pppppuVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(pppppuVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(pppppuVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(pppppuVar2);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(puVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  pppppuVar1 = (undefined8 *****)(puVar18 + _DAT_11274a684);
  _objc_loadWeakRetained(pppppuVar1);
  func_0x00010bf7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppppuVar1);
  return pppppuVar1;
}



/* Entry: 10655fe60; end: 10655ffd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_10655fe60(long param_1,undefined8 ***param_2,undefined1 *param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ***pppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar19 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ***)0x0) {
      pppuVar1 = (undefined8 ***)&UNK_10f382f87;
    }
    else {
      pppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11092aaa8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar18 = (undefined1 *)puVar19;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar18 = (undefined1 *)puVar19;
    }
  }
  pppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar18);
  puStack_110 = PTR_PTR_1126f1b60;
  pppuVar2 = &ppuStack_118;
  ppuStack_118 = pppuVar1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),pppuVar2,
                      PTR_s_initWithFrame__1125e2948);
  if (pppuVar2 != (undefined8 ***)0x0) {
    puVar3 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    puVar4 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(puVar4);
    func_0x00010befbd60(puVar3);
    puVar5 = puVar18;
    func_0x00010bf5d580(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar3);
    _objc_release(puVar5);
    func_0x00010c216380(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar3);
    _objc_release(puVar4);
    func_0x00010befbb60(pppuVar2);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = pppuVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_108 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_100 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuVar2;
    func_0x00010c08de00(pppuVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493c0(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    puStack_f8 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar2;
    func_0x00010c2793a0(pppuVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493c0(0xc03a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f0 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(pppuVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(pppuVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(pppuVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(pppuVar1);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(puVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  pppuVar1 = (undefined8 ***)(puVar18 + _DAT_11274a684);
  _objc_loadWeakRetained(pppuVar1);
  func_0x00010bf7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar1);
  return pppuVar1;
}



/* Entry: 10655ffd4; end: 1065603bf; -[SCStackedStickerBitmojiChatCTAView initWithCTAViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10655ffd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126f1b60;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(puVar3);
    func_0x00010befbd60(puVar2);
    lVar4 = param_3;
    func_0x00010bf5d580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar2);
    _objc_release(lVar4);
    func_0x00010c216380(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_88 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    puStack_80 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493c0(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    puStack_78 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493c0(0xc03a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar17);
    _objc_release(puVar16);
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
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)(param_3 + _DAT_11274a684);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1065603c0; end: 1065603fb; -[SCStackedStickerBitmojiChatCTAView _createAvatarButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065603c0(long param_1)

{
  param_1 = param_1 + _DAT_11274a684;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065603fc; end: 10656041b; -[SCStackedStickerBitmojiChatCTAView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065603fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a684);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10656041c; end: 10656042f; -[SCStackedStickerBitmojiChatCTAView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656041c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a684,param_3);
  return;
}



/* Entry: 106560430; end: 10656043f; -[SCStackedStickerBitmojiChatCTAView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106560430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274a684);
  return;
}



/* Entry: 106560440; end: 1065604b7; -[SCStackedStickerBitmojiChatCTAViewModel initWithCtaTitleString:] */

undefined1 * FUN_106560440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1b68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065604b8; end: 1065604db; -[SCStackedStickerBitmojiChatCTAViewModel copyWithZone:] */

undefined8 FUN_1065604b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065604dc; end: 1065604e3; -[SCStackedStickerBitmojiChatCTAViewModel hash] */

void FUN_1065604dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1065604e4; end: 106560573; -[SCStackedStickerBitmojiChatCTAViewModel isEqual:] */

long FUN_1065604e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106560558;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106560558;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106560558;
    }
  }
  lVar3 = 1;
LAB_106560558:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106560574; end: 10656057b; -[SCStackedStickerBitmojiChatCTAViewModel ctaTitleString] */

undefined8 FUN_106560574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10656057c; end: 106560587; -[SCStackedStickerBitmojiChatCTAViewModel .cxx_destruct] */

void FUN_10656057c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106560588; end: 1065608af; -[SCCreateGroupCardMessagePlugin initWithCurrentUserId:groupLinkHandler:groupsDataFetcher:groupsDataCreator:groupsDataTracker:messagingExperimentService:addToGroupScopeExposer:addToGroupScopeServices:conversationUpdatesPublisher:navigationDelegate:standardExternalContentShareScopeExposer:groupProfileScopeExposer:friendProfileScopeExposer:] */

undefined8 *
FUN_106560588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f1b70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x14) = 0;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1065608b0; end: 106560a57; -[SCCreateGroupCardMessagePlugin _handleTapInviteLink] */

void FUN_1065608b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _os_unfair_lock_lock(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf529e0();
      uVar4 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c2920();
      _objc_release(uVar4);
      _objc_release(uVar1);
      if (uVar3 < uVar5) {
        _objc_initWeak(auStack_48,param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_50,auStack_48);
        func_0x00010c24ede0(uVar6);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      else {
        func_0x00010be2c080(param_1);
      }
    }
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0xa0);
  return;
}



/* Entry: 106560a58; end: 106560b43;  */

void FUN_106560a58(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106560b44;
  puStack_50 = &UNK_11085c330;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106560b44; end: 106560bab;  */

void FUN_106560b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be009e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106560bac; end: 106560bdf;  */

void FUN_106560bac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106560be0; end: 106560dcb; -[SCCreateGroupCardMessagePlugin _handleTapAddMember] */

void FUN_106560be0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _os_unfair_lock_lock(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf529e0();
      uVar4 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c2920();
      _objc_release(uVar4);
      _objc_release(uVar1);
      if (uVar3 < uVar5) {
        lVar6 = *(long *)(param_1 + 0x40);
        func_0x00010c150520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 != 0) {
          func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        puVar7 = PTR_PTR_1126b2848;
        _objc_alloc(PTR_PTR_1126b2848);
        lVar6 = param_1 + 0xb8;
        _objc_loadWeakRetained(lVar6);
        puVar8 = PTR_PTR_1126b27d8;
        uVar1 = uVar2;
        func_0x00010bfceb20(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc1c0(puVar8,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c056d20(puVar7,param_2,lVar6,puVar8,0,param_1,0xc5,0,0);
        _objc_release(puVar8);
        _objc_release(uVar1);
        _objc_release(lVar6);
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010bf23820(uVar9,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,uVar9);
        _objc_release(uVar9);
        _objc_release(puVar7);
      }
      else {
        func_0x00010be2c080(param_1);
      }
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xa0);
  return;
}



/* Entry: 106560dcc; end: 106560efb; -[SCCreateGroupCardMessagePlugin _handleTapOpenGroupProfile] */

void FUN_106560dcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _os_unfair_lock_lock(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = *(long *)(param_1 + 0x68);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126b4b68;
      _objc_alloc(PTR_PTR_1126b4b68);
      lVar1 = param_1 + 0xb8;
      _objc_loadWeakRetained(lVar1);
      lVar4 = lVar2;
      func_0x00010bfceb20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0584c0(puVar3,param_2,lVar1,lVar4,0x27,param_1);
      _objc_release(lVar4);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68),param_2,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xa0);
  return;
}



/* Entry: 106560efc; end: 106560f8b; -[SCCreateGroupCardMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_106560efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee7540(param_1,param_2,param_3,uVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106560f8c; end: 106560fa3; -[SCCreateGroupCardMessagePlugin readAllMessagesCardComposerContextParamsForConversationParticipants:] */

void FUN_106560f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForMessage_ca_1125976f8,0,
             &PTR____CFConstantStringClassReference_110e53e18,1,param_3);
  return;
}



/* Entry: 106560fa4; end: 10656141b; -[SCCreateGroupCardMessagePlugin _valdiContextParamsForMessage:cacheId:userReadAllMessages:conversationParticipants:] */

void FUN_106560fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x0001070b1c70();
  if ((int)uVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2533e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 6) {
      uVar1 = param_3;
      func_0x00010c0cb8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar1);
    }
    puVar4 = PTR_PTR_1126cb818;
    _objc_alloc();
    func_0x00010c01f120();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f060(puVar4);
    _objc_release(puVar12);
    _objc_initWeak(auStack_80,param_1);
    puVar5 = PTR_PTR_1126cb820;
    _objc_alloc(PTR_PTR_1126cb820);
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10656141c;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_80);
    puStack_d0 = puVar12;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106561448;
    puStack_b8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010c031840(puVar5);
    _objc_copyWeak(auStack_d8,auStack_80);
    func_0x00010c1d3c00(puVar5);
    lVar6 = param_1;
    func_0x00010be212a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_6;
    func_0x0001070b26d4(param_6,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100504554();
    func_0x00010c0d9840(lVar6);
    lVar7 = lVar6;
    func_0x00010bf870a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f940(puVar5);
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010be21080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194dc0(puVar5);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bf8fac0();
    _objc_release(uVar10);
    if ((int)uVar3 != 0) {
      func_0x00010be210c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b02a0(puVar5);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(param_1);
    }
    puVar12 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar11 = PTR_PTR_1126cb828;
    func_0x00010bf44480(PTR_PTR_1126cb828);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_d8);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10656141c; end: 1065614eb;  */

void FUN_10656141c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065614ec; end: 10656151b; -[SCCreateGroupCardMessagePlugin identifier] */

void FUN_1065614ec(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeba58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeba58);
  return;
}



/* Entry: 10656151c; end: 106561523; -[SCCreateGroupCardMessagePlugin pluginType] */

undefined8 FUN_10656151c(void)

{
  return 1;
}



/* Entry: 106561524; end: 10656163f; -[SCCreateGroupCardMessagePlugin setActiveConversationIdObservable:] */

void FUN_106561524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106561640; end: 106561687;  */

void FUN_106561640(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106561688; end: 106561723; -[SCCreateGroupCardMessagePlugin _getOrCreateUsersSubjectForCacheId:] */

void FUN_106561688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xa0);
  puVar1 = *(undefined **)(param_1 + 0x88);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0xa0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106561724; end: 1065617ff; -[SCCreateGroupCardMessagePlugin _getOrCreateConversationEnableInviteActionsObservable] */

void FUN_106561724(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _os_unfair_lock_lock(param_1 + 0xa0);
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa4cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar6 = *(long *)(param_1 + 0x90);
  }
  _objc_retain(lVar6);
  _os_unfair_lock_unlock(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106561800; end: 106561893;  */

bool FUN_106561800(undefined8 param_1,long param_2)

{
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 106561894; end: 10656197f; -[SCCreateGroupCardMessagePlugin _getOrCreateConversationIsCommunityObservable] */

void FUN_106561894(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _os_unfair_lock_lock(param_1 + 0xa0);
  lVar6 = *(long *)(param_1 + 0x98);
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar4 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____kCFBooleanFalse_11034ab60);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar4;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfcefc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = uVar3;
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    lVar6 = *(long *)(param_1 + 0x98);
  }
  _objc_retain(lVar6);
  _os_unfair_lock_unlock(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106561980; end: 1065619af;  */

void FUN_106561980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c06ecc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1065619b0; end: 106561a3f; -[SCCreateGroupCardMessagePlugin _handleConversationChange:] */

void FUN_1065619b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xa0);
  uVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x88));
  _os_unfair_lock_unlock(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106561a40; end: 106561a43; -[SCCreateGroupCardMessagePlugin _didSucceedWithGroup:deeplink:] */

void FUN_106561a40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentOffPlatformShareSheetWit_11257cd40);
  return;
}



/* Entry: 106561a44; end: 106561c3f; -[SCCreateGroupCardMessagePlugin _presentOffPlatformShareSheetWithGroup:deeplink:] */

void FUN_106561a44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 0) {
    func_0x000106562a5c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106562a44();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106561c40;
  puStack_68 = &UNK_11085c390;
  _objc_retain(puVar4);
  puStack_60 = puVar4;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_88,param_1);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106561cc0;
  puStack_a0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar5);
  puStack_98 = puVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_release(puStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar5);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106561c40; end: 106561cbf;  */

void FUN_106561c40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar2,param_2,uVar1,puVar3,0,0x13,0,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106561cc0; end: 106561cf3;  */

void FUN_106561cc0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106561cf4; end: 106561de3; -[SCCreateGroupCardMessagePlugin _presentOffPlatformShareSheetWithConfig:] */

void FUN_106561cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b24a0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0574a0(puVar4,param_2,lVar3,param_3,0,0,0,0xc,puVar5,param_1);
  _objc_release(param_3);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106561de4; end: 106561dfb; -[SCCreateGroupCardMessagePlugin _didFailWithError:] */

void FUN_106561de4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be2c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleMaxParticipants_1125689c0);
    return;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleNoGroupName_112568d40);
    return;
  }
  return;
}



/* Entry: 106561dfc; end: 106561fcf; -[SCCreateGroupCardMessagePlugin _handleNoGroupName] */

void FUN_106561dfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126aed70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x000106562aec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106562abc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000106562ad4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106561fe0;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar3);
  ppuVar7 = &puStack_88;
  puStack_68 = puVar3;
  func_0x0001000d76cc("APPSTORE",ppuVar7);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (ppuVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106561fd0; end: 106561fdf;  */

void FUN_106561fd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106561fe0; end: 106562013;  */

void FUN_106561fe0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106562014; end: 10656225b; -[SCCreateGroupCardMessagePlugin _handleMaxParticipants] */

void FUN_106562014(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126aed70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000106562aec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2920();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106562b04();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar4;
  func_0x000106562b1c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10656226c;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar4);
  ppuVar8 = &puStack_88;
  puStack_68 = puVar4;
  func_0x0001000d76cc("APPSTORE",ppuVar8);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (ppuVar8,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10656225c; end: 10656226b;  */

void FUN_10656225c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10656226c; end: 10656229f;  */

void FUN_10656226c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065622a0; end: 1065622e7; -[SCCreateGroupCardMessagePlugin _presentAlert:] */

void FUN_1065622a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0c980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065622e8; end: 10656231f; -[SCCreateGroupCardMessagePlugin createChatSelectionScopeWantsToDismiss:] */

void FUN_1065622e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106562320; end: 106562367; -[SCCreateGroupCardMessagePlugin createChatSelectionScopeDidDismiss:] */

void FUN_106562320(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106562368; end: 10656239f; -[SCCreateGroupCardMessagePlugin createChatSelectionScope:wantsToDismissWithNewChat:] */

void FUN_106562368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065623a0; end: 1065623a7; -[SCCreateGroupCardMessagePlugin handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1065623a0(void)

{
  return 0;
}



/* Entry: 1065623a8; end: 1065623ef; -[SCCreateGroupCardMessagePlugin shareSheetDismissedWithShareDestination:] */

void FUN_1065623a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065623f0; end: 10656247b; -[SCCreateGroupCardMessagePlugin groupProfileWillDimiss:] */

void FUN_1065623f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10656247c; end: 106562567; -[SCCreateGroupCardMessagePlugin groupProfileDidDimiss:withRequestedFriendshipProfile:] */

void FUN_10656247c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    uStack_90 = 0x27;
    uStack_88 = 0;
    uStack_78 = 0x12;
    uStack_80 = 0x2e879d01;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    lVar1 = param_1 + 0xb8;
    _objc_loadWeakRetained(lVar1);
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c015a00(puVar2,param_2,&uStack_90,lVar1,param_4,param_1);
    }
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106562568; end: 1065625c7; -[SCCreateGroupCardMessagePlugin groupProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_106562568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c183aa0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065625c8; end: 10656260f; -[SCCreateGroupCardMessagePlugin friendProfileDidDismiss:] */

void FUN_1065625c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106562610; end: 106562683; -[SCCreateGroupCardMessagePlugin dismissPresentedView] */

void FUN_106562610(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106562684; end: 10656268b; -[SCCreateGroupCardMessagePlugin activeConversationIdObservable] */

undefined8 FUN_106562684(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10656268c; end: 106562693; -[SCCreateGroupCardMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_10656268c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106562694; end: 1065626c3; -[SCCreateGroupCardMessagePlugin setActiveConversationInformationObservable:] */

void FUN_106562694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065626c4; end: 1065626db; -[SCCreateGroupCardMessagePlugin uiContainer] */

void FUN_1065626c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065626dc; end: 1065626e7; -[SCCreateGroupCardMessagePlugin setUiContainer:] */

void FUN_1065626dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 1065626e8; end: 1065626ff; -[SCCreateGroupCardMessagePlugin chatPresenter] */

void FUN_1065626e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106562700; end: 10656270b; -[SCCreateGroupCardMessagePlugin setChatPresenter:] */

void FUN_106562700(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 10656270c; end: 10656282b; -[SCCreateGroupCardMessagePlugin .cxx_destruct] */

void FUN_10656270c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10656282c; end: 106562837; +[SCCCreateGroupCardView componentPath] */

undefined ** FUN_10656282c(void)

{
  return &PTR____CFConstantStringClassReference_110e53e38;
}



/* Entry: 106562838; end: 10656286b; -[SCCCreateGroupCardView initWithViewModel:componentContext:runtime:] */

void FUN_106562838(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1b78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10656286c; end: 1065628bb; -[SCCCreateGroupCardView setViewModel:] */

void FUN_10656286c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065628bc; end: 1065628ff; -[SCCCreateGroupCardView viewModel] */

void FUN_1065628bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106562900; end: 10656299f; -[SCCCreateGroupCardContext initWithOnTapInviteLink:onTapAddMember:] */

undefined8 *
FUN_106562900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126f1b80;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}


