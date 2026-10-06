/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b91298; end: 106b912d7; -[SCSettingsClearTableViewCell initWithCoder:] */

void FUN_106b91298(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                      &PTR____CFConstantStringClassReference_110e76b58);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106b912d8; end: 106b91c43; -[SCSettingsClearTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b912d8(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126f5528;
  puVar1 = &uStack_f8;
  uStack_f8 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar43 = (long)_DAT_1127594e0;
    uVar38 = *(undefined8 *)((long)puVar1 + lVar43);
    *(undefined **)((long)puVar1 + lVar43) = puVar4;
    _objc_release(uVar38);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010c219b60(uVar5);
    uVar39 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar5;
    func_0x00010bf3ab20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar5);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar43));
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar43));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c161260(puVar1);
    func_0x00010c1fbac0(puVar1);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar3);
    func_0x00010c17d4c0(puVar1);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar40 = (long)_DAT_1127594e4;
    uVar38 = *(undefined8 *)((long)puVar1 + lVar40);
    *(undefined **)((long)puVar1 + lVar40) = puVar6;
    _objc_release(uVar38);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar40));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar40));
    puVar6 = PTR_PTR_1126d0d50;
    func_0x00010c1130c0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar40));
    _objc_release(puVar6);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar40));
    puVar6 = PTR_PTR_1126d0d50;
    func_0x00010c1130a0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar40));
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar40));
    _objc_release(puVar6);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar40));
    puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar42 = (long)_DAT_1127594e8;
    uVar38 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined **)((long)puVar1 + lVar42) = puVar6;
    _objc_release(uVar38);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar42));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar42));
    puVar6 = PTR_PTR_1126d0d50;
    func_0x00010c155180(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar42));
    _objc_release(puVar6);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar42));
    puVar6 = PTR_PTR_1126d0d50;
    func_0x00010c155160(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar42));
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar42));
    _objc_release(puVar6);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar42));
    puVar6 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_90 = *(undefined8 *)((long)puVar1 + lVar40);
    uStack_88 = *(undefined8 *)((long)puVar1 + lVar42);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar41 = (long)_DAT_1127594ec;
    uVar38 = *(undefined8 *)((long)puVar1 + lVar41);
    *(undefined **)((long)puVar1 + lVar41) = puVar6;
    _objc_release(uVar38);
    _objc_release(puVar7);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c065600(PTR_PTR_1126d0d50);
    func_0x00010c207380(*(undefined8 *)((long)puVar1 + lVar41));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar41));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)((long)puVar1 + lVar43));
    uVar9 = uVar8;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)((long)puVar1 + lVar43));
    uVar11 = uVar10;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar42);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1551a0(PTR_PTR_1126d0d50);
    uVar13 = uVar12;
    func_0x00010bf494e0(param_2 * 3.0);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    uVar39 = uVar14;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    uStack_d0 = uVar39;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    puVar20 = puVar18;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar20;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar40);
    func_0x00010bfb0e20();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar1;
    uStack_c0 = uVar23;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    puVar27 = puVar25;
    func_0x00010bf49480();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar27;
    uVar28 = *(undefined8 *)((long)puVar1 + lVar40);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1130e0(PTR_PTR_1126d0d50);
    uVar29 = uVar28;
    func_0x00010bf494e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar29;
    uVar30 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar31;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee660(PTR_PTR_1126d0d50);
    uVar5 = uVar30;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar5;
    uVar33 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)((long)puVar1 + lVar41);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c065540(PTR_PTR_1126d0d50);
    uVar38 = uVar33;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar1;
    uStack_a0 = uVar38;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar35;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)((long)puVar1 + lVar43);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee660(PTR_PTR_1126d0d50);
    puVar3 = puVar36;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar37);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(uVar38);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar5);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(puVar27);
    _objc_release(uVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar39);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126d09c0;
  func_0x00010c13fda0(PTR_PTR_1126d09c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ec80(puVar2);
  _objc_release(puVar4);
  return puVar2;
}



/* Entry: 106b91c44; end: 106b91c97; -[SCSettingsClearTableViewCell init] */

undefined8 FUN_106b91c44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d09c0;
  func_0x00010c13fda0(PTR_PTR_1126d09c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ec80(param_1,param_2,1,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106b91c98; end: 106b91ca7; -[SCSettingsClearTableViewCell primaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594e4),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b91ca8; end: 106b91cff; -[SCSettingsClearTableViewCell setPrimaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127594e4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar1,param_2,param_3);
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b91d00; end: 106b91d0f; -[SCSettingsClearTableViewCell secondaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594e8),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b91d10; end: 106b91d1f; -[SCSettingsClearTableViewCell setSecondaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594e8),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106b91d20; end: 106b91d8b; -[SCSettingsClearTableViewCell didMoveToWindow] */

void FUN_106b91d20(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5528;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
  }
  return;
}



/* Entry: 106b91d8c; end: 106b91deb; -[SCSettingsClearTableViewCell _contentTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91d8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127594dc;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    *(undefined1 *)(param_1 + lVar2) = 1;
    lVar1 = param_1;
    func_0x00010bf33a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c228040();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar2) = 0;
  }
  return;
}



/* Entry: 106b91dec; end: 106b91e4b; -[SCSettingsClearTableViewCell _clearIconTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91dec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127594dc;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    *(undefined1 *)(param_1 + lVar2) = 1;
    lVar1 = param_1;
    func_0x00010bf33a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c228020();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar2) = 0;
  }
  return;
}



/* Entry: 106b91e4c; end: 106b91e6b; -[SCSettingsClearTableViewCell cellDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91e4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127594f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b91e6c; end: 106b91e7f; -[SCSettingsClearTableViewCell setCellDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127594f0,param_3);
  return;
}



/* Entry: 106b91e80; end: 106b91eeb; -[SCSettingsClearTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91e80(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127594f0);
  _objc_storeStrong(param_1 + _DAT_1127594e8,0);
  _objc_storeStrong(param_1 + _DAT_1127594e4,0);
  _objc_storeStrong(param_1 + _DAT_1127594e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127594ec,0);
  return;
}



/* Entry: 106b91eec; end: 106b91ef7; +[SCSettingsSwitchTableViewCell reuseIdentifier] */

undefined ** FUN_106b91eec(void)

{
  return &PTR____CFConstantStringClassReference_110e76b98;
}



/* Entry: 106b91ef8; end: 106b91f37; -[SCSettingsSwitchTableViewCell initWithCoder:] */

void FUN_106b91ef8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                      &PTR____CFConstantStringClassReference_110e76b58);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106b91f38; end: 106b9282f; -[SCSettingsSwitchTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b91f38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e8 = PTR_PTR_1126f5530;
  puVar1 = &uStack_f0;
  uStack_f0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc_init();
    lVar35 = (long)_DAT_1127594f8;
    uVar32 = *(undefined8 *)((long)puVar1 + lVar35);
    *(undefined **)((long)puVar1 + lVar35) = puVar2;
    _objc_release(uVar32);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar35));
    puVar2 = PTR_PTR_1126d0d50;
    func_0x00010bf4fea0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(*(undefined8 *)((long)puVar1 + lVar35));
    _objc_release(puVar2);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar35));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar35));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c161260(puVar1);
    func_0x00010c1fbac0(puVar1);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar3);
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar33 = (long)_DAT_1127594fc;
    uVar32 = *(undefined8 *)((long)puVar1 + lVar33);
    *(undefined **)((long)puVar1 + lVar33) = puVar2;
    _objc_release(uVar32);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar33));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar33));
    puVar2 = PTR_PTR_1126d0d50;
    func_0x00010c1130c0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar33));
    _objc_release(puVar2);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar33));
    puVar2 = PTR_PTR_1126d0d50;
    func_0x00010c1130a0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar33));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar33));
    _objc_release(puVar2);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar33));
    puVar2 = PTR__OBJC_CLASS___UITextView_1126afb88;
    _objc_alloc_init();
    lVar34 = (long)_DAT_112759500;
    uVar32 = *(undefined8 *)((long)puVar1 + lVar34);
    *(undefined **)((long)puVar1 + lVar34) = puVar2;
    _objc_release(uVar32);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c193a00(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar1 + lVar34));
    uVar32 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010c26ba00(uVar32);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdbc0(0);
    _objc_release(uVar32);
    func_0x00010b8166c0();
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar34));
    puVar2 = PTR_PTR_1126d0d50;
    func_0x00010c155180(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar34));
    _objc_release(puVar2);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar34));
    puVar2 = PTR_PTR_1126d0d50;
    func_0x00010c155160(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar34));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar34));
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar34));
    uStack_90 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR_PTR_1126d0d50;
    func_0x00010c099620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bde80(*(undefined8 *)((long)puVar1 + lVar34));
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar34));
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_a0 = *(undefined8 *)((long)puVar1 + lVar33);
    uStack_98 = *(undefined8 *)((long)puVar1 + lVar34);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar34 = (long)_DAT_112759504;
    uVar32 = *(undefined8 *)((long)puVar1 + lVar34);
    *(undefined **)((long)puVar1 + lVar34) = puVar2;
    _objc_release(uVar32);
    _objc_release(puVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c065600(PTR_PTR_1126d0d50);
    func_0x00010c207380(*(undefined8 *)((long)puVar1 + lVar34));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar34));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    uVar32 = uVar5;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_e0 = uVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    puVar11 = puVar9;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010bfb0e20();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    uStack_d0 = uVar14;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    puVar18 = puVar16;
    func_0x00010bf49480();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar18;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1130e0(PTR_PTR_1126d0d50);
    uVar20 = uVar19;
    func_0x00010bf494e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar20;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee660(PTR_PTR_1126d0d50);
    uVar24 = uVar21;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar24;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)puVar1 + lVar34);
    func_0x00010c2793a0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c065540(PTR_PTR_1126d0d50);
    uVar27 = uVar25;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar1;
    uStack_b0 = uVar27;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar28;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)((long)puVar1 + lVar35);
    func_0x00010c2793a0(uVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee660(PTR_PTR_1126d0d50);
    puVar31 = puVar29;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar31;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar31);
    _objc_release(uVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar32);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b5550;
  func_0x00010c13fda0(PTR_PTR_1126b5550);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ec80(puVar3);
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 106b92830; end: 106b92883; -[SCSettingsSwitchTableViewCell init] */

undefined8 FUN_106b92830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5550;
  func_0x00010c13fda0(PTR_PTR_1126b5550);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ec80(param_1,param_2,1,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106b92884; end: 106b92893; -[SCSettingsSwitchTableViewCell switchOnTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_onTintColor_1126176a0);
  return;
}



/* Entry: 106b92894; end: 106b928a3; -[SCSettingsSwitchTableViewCell setSwitchOnTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_setOnTintColor__112652a28);
  return;
}



/* Entry: 106b928a4; end: 106b928b3; -[SCSettingsSwitchTableViewCell isSwitchOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b928a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c079050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_isOn_1125fbe20);
  return;
}



/* Entry: 106b928b4; end: 106b928c3; -[SCSettingsSwitchTableViewCell setSwitchOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b928b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_setOn__112651f00);
  return;
}



/* Entry: 106b928c4; end: 106b928d3; -[SCSettingsSwitchTableViewCell setSwitchOn:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b928c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_setOn_animated__112651f08);
  return;
}



/* Entry: 106b928d4; end: 106b928e3; -[SCSettingsSwitchTableViewCell isSwitchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b928d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 106b928e4; end: 106b928f3; -[SCSettingsSwitchTableViewCell setSwitchEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b928e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 106b928f4; end: 106b92903; -[SCSettingsSwitchTableViewCell switchAccessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b928f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_accessibilityLabel_112598d68);
  return;
}



/* Entry: 106b92904; end: 106b92913; -[SCSettingsSwitchTableViewCell setSwitchAccessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_setAccessibilityLabel__112635e28);
  return;
}



/* Entry: 106b92914; end: 106b92923; -[SCSettingsSwitchTableViewCell switchAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b92924; end: 106b92933; -[SCSettingsSwitchTableViewCell setSwitchAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594f8),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b92934; end: 106b92943; -[SCSettingsSwitchTableViewCell primaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594fc),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b92944; end: 106b9299b; -[SCSettingsSwitchTableViewCell setPrimaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127594fc;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar1,param_2,param_3);
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b9299c; end: 106b929ab; -[SCSettingsSwitchTableViewCell primaryTextAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9299c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594fc),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b929ac; end: 106b929bb; -[SCSettingsSwitchTableViewCell setPrimaryTextAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b929ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594fc),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b929bc; end: 106b92a1b; -[SCSettingsSwitchTableViewCell isPrimaryTextEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b929bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + _DAT_1127594fc);
  func_0x00010c26b920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0d50;
  func_0x00010c1130a0(PTR_PTR_1126d0d50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  return puVar1 == puVar2;
}



/* Entry: 106b92a1c; end: 106b92a7b; -[SCSettingsSwitchTableViewCell setPrimaryTextEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92a1c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0d50;
  if ((param_3 & 1) == 0) {
    func_0x00010bf80ec0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1130a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_1127594fc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b92a7c; end: 106b92a8b; -[SCSettingsSwitchTableViewCell primaryTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594fc),PTR_s_textColor_112678870);
  return;
}



/* Entry: 106b92a8c; end: 106b92a9b; -[SCSettingsSwitchTableViewCell setPrimaryTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594fc),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 106b92a9c; end: 106b92aab; -[SCSettingsSwitchTableViewCell secondaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759500),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b92aac; end: 106b92b0b; -[SCSettingsSwitchTableViewCell setSecondaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92aac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60(param_3);
  lVar2 = (long)_DAT_112759500;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,lVar1 == 0);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b92b0c; end: 106b92d07; -[SCSettingsSwitchTableViewCell setSecondaryText:linkLabel:linkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92b0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  func_0x00010c08fa60(puVar1);
  puVar3 = PTR_PTR_1126d0d50;
  func_0x00010c155180(PTR_PTR_1126d0d50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d0d50;
  func_0x00010c155160(PTR_PTR_1126d0d50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  func_0x00010b8166c0();
  func_0x00010c166c00(puVar3);
  func_0x00010bef6f20(puVar2);
  puVar4 = puVar1;
  func_0x00010c11f420();
  _objc_release(param_4);
  if (puVar4 != (undefined *)0x7fffffffffffffff) {
    func_0x00010bef6f20(puVar2);
  }
  lVar5 = (long)_DAT_112759500;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b92d08; end: 106b92d17; -[SCSettingsSwitchTableViewCell secondaryTextAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759500),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b92d18; end: 106b92d27; -[SCSettingsSwitchTableViewCell setSecondaryTextAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759500),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b92d28; end: 106b92d37; -[SCSettingsSwitchTableViewCell setSecondaryTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759500),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 106b92d38; end: 106b92d47; -[SCSettingsSwitchTableViewCell setPrimaryTextLineBreakMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bdb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127594fc),PTR_s_setLineBreakMode__11264d0e8);
  return;
}



/* Entry: 106b92d48; end: 106b92dcb; -[SCSettingsSwitchTableViewCell enableAppThemeSupport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92d48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(*(undefined8 *)(param_1 + _DAT_1127594f8),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b92dcc; end: 106b92e37; -[SCSettingsSwitchTableViewCell didMoveToWindow] */

void FUN_106b92dcc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5530;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
  }
  return;
}



/* Entry: 106b92e38; end: 106b92ecb; -[SCSettingsSwitchTableViewCell _switchChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127594f4;
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    *(undefined1 *)(param_1 + lVar3) = 1;
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bf33a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c079040(param_3);
    _objc_release(param_3);
    func_0x00010c228320(lVar1,param_2,param_1,uVar2);
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  return;
}



/* Entry: 106b92ecc; end: 106b92f7f; -[SCSettingsSwitchTableViewCell textView:shouldInteractWithURL:inRange:interaction:] */

undefined8 FUN_106b92ecc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = param_1;
    func_0x00010bf33a20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf33a20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c228300();
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106b92f80; end: 106b92f9f; -[SCSettingsSwitchTableViewCell cellDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92f80(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112759508);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b92fa0; end: 106b92fb3; -[SCSettingsSwitchTableViewCell setCellDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759508,param_3);
  return;
}



/* Entry: 106b92fb4; end: 106b9301f; -[SCSettingsSwitchTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b92fb4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759508);
  _objc_storeStrong(param_1 + _DAT_112759500,0);
  _objc_storeStrong(param_1 + _DAT_1127594fc,0);
  _objc_storeStrong(param_1 + _DAT_1127594f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759504,0);
  return;
}



/* Entry: 106b93020; end: 106b9302b; +[SCSettingsTextTableViewCell reuseIdentifier] */

undefined ** FUN_106b93020(void)

{
  return &PTR____CFConstantStringClassReference_110e76bb8;
}



/* Entry: 106b9302c; end: 106b9306b; -[SCSettingsTextTableViewCell initWithCoder:] */

void FUN_106b9302c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                      &PTR____CFConstantStringClassReference_110e76b58);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106b9306c; end: 106b93b23; -[SCSettingsTextTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b9306c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126f5538;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c161260(puVar1);
    func_0x00010c1fbac0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112759510) = 1;
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    func_0x00010bff3fe0();
    lVar23 = (long)_DAT_112759514;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar3;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c065540(PTR_PTR_1126d0d50);
    func_0x00010c207380(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar23));
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    uVar20 = uVar4;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    uStack_a0 = uVar20;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ee6e0(PTR_PTR_1126d0d50);
    puVar10 = puVar8;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    uStack_90 = uVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c2793a0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493c0(0x4040800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar20);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar22 = (long)_DAT_112759518;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar3;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010c1130c0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010c1130a0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c181f00(0x437a0000,*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR_PTR_1126af270;
    _objc_alloc_init();
    lVar21 = (long)_DAT_11275951c;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar3;
    _objc_release(uVar20);
    func_0x00010b8166c0();
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar21));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010c155180(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar3);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar21));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010c155160(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar21));
    uStack_b0 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010c099620();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a8 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1bdd60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_c0 = *(undefined8 *)((long)puVar1 + lVar22);
    uStack_b8 = *(undefined8 *)((long)puVar1 + lVar21);
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar22 = (long)_DAT_112759520;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar3;
    _objc_release(uVar20);
    _objc_release(puVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c065600(PTR_PTR_1126d0d50);
    func_0x00010c207380(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar23));
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar22 = (long)_DAT_112759524;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar3;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010bf6f6e0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010bf6f6c0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar23));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar22 = (long)_DAT_112759528;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar3;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c216140(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010bf49520(0xc048000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar20;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_d0 = uVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2793a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c8 = puVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar19);
    _objc_release(puVar10);
    _objc_release(uVar11);
    _objc_release(puVar8);
    _objc_release(uVar14);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar22 = (long)_DAT_11275952c;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar3;
    _objc_release(uVar20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010c1130c0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = PTR_PTR_1126d0d50;
    func_0x00010bf99040(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar18);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c31e0;
  func_0x00010c13fda0(PTR_PTR_1126c31e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ec80(puVar2);
  _objc_release(puVar3);
  return puVar2;
}



/* Entry: 106b93b24; end: 106b93b77; -[SCSettingsTextTableViewCell init] */

undefined8 FUN_106b93b24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c31e0;
  func_0x00010c13fda0(PTR_PTR_1126c31e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ec80(param_1,param_2,1,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106b93b78; end: 106b93bcf; -[SCSettingsTextTableViewCell prepareForReuse] */

void FUN_106b93b78(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1e2b00(param_1);
  func_0x00010c17a480(param_1);
  return;
}



/* Entry: 106b93bd0; end: 106b93bdf; -[SCSettingsTextTableViewCell primaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759518),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b93be0; end: 106b93c37; -[SCSettingsTextTableViewCell setPrimaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112759518);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar1,param_2,param_3);
  func_0x00010c1e2ac0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b93c38; end: 106b93c47; -[SCSettingsTextTableViewCell primaryTextAccessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759518),PTR_s_accessibilityLabel_112598d68);
  return;
}



/* Entry: 106b93c48; end: 106b93c57; -[SCSettingsTextTableViewCell setPrimaryTextAccessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759518),PTR_s_setAccessibilityLabel__112635e28);
  return;
}



/* Entry: 106b93c58; end: 106b93c67; -[SCSettingsTextTableViewCell primaryTextAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759518),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b93c68; end: 106b93c77; -[SCSettingsTextTableViewCell setPrimaryTextAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759518),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b93c78; end: 106b93cc7; -[SCSettingsTextTableViewCell setPrimaryTextEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93c78(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112759510) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112759510) = (char)param_3;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112759518),param_2,param_3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bee35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewColors_112596720);
  return;
}



/* Entry: 106b93cc8; end: 106b93cd7; -[SCSettingsTextTableViewCell primaryTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759518),PTR_s_textColor_112678870);
  return;
}



/* Entry: 106b93cd8; end: 106b93ce7; -[SCSettingsTextTableViewCell setPrimaryTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759518),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 106b93ce8; end: 106b93d8b; -[SCSettingsTextTableViewCell secondaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93ce8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11275951c);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_opt_class(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c25cd40(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106b93d8c; end: 106b93deb; -[SCSettingsTextTableViewCell setSecondaryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93d8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60(param_3);
  lVar2 = (long)_DAT_11275951c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,lVar1 == 0);
  func_0x00010c099980(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b93dec; end: 106b93dfb; -[SCSettingsTextTableViewCell secondaryTextAccessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275951c),PTR_s_accessibilityLabel_112598d68);
  return;
}



/* Entry: 106b93dfc; end: 106b93e0b; -[SCSettingsTextTableViewCell setSecondaryTextAccessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275951c),PTR_s_setAccessibilityLabel__112635e28);
  return;
}



/* Entry: 106b93e0c; end: 106b93e1b; -[SCSettingsTextTableViewCell secondaryTextAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275951c),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b93e1c; end: 106b93e2b; -[SCSettingsTextTableViewCell setSecondaryTextAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275951c),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b93e2c; end: 106b93e3b; -[SCSettingsTextTableViewCell detailText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759524),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b93e3c; end: 106b93ea3; -[SCSettingsTextTableViewCell setDetailText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93e3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112759524;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar2);
  lVar1 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,lVar1 == 0);
  return;
}



/* Entry: 106b93ea4; end: 106b93ec3; -[SCSettingsTextTableViewCell setDisclosureIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93ea4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_112759530)) {
    return;
  }
  *(long *)(param_1 + _DAT_112759530) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewColors_112596720);
  return;
}



/* Entry: 106b93ec4; end: 106b93f63; -[SCSettingsTextTableViewCell setCellState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93ec4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == *(long *)(param_1 + _DAT_112759534)) {
    return;
  }
  *(long *)(param_1 + _DAT_112759534) = param_3;
  if (param_3 == 2) {
    lVar1 = param_1;
    func_0x00010be0b200(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_112759514));
  }
  else {
    lVar2 = (long)_DAT_112759538;
    if (*(long *)(param_1 + lVar2) == 0) goto LAB_106b93f50;
    func_0x00010c12c960();
    lVar1 = *(long *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  _objc_release(lVar1);
LAB_106b93f50:
                    /* WARNING: Could not recover jumptable at 0x00010bee35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewColors_112596720);
  return;
}



/* Entry: 106b93f64; end: 106b940c3; -[SCSettingsTextTableViewCell _errorViewCreatingIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b93f64(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112759538;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    if (param_3 == 0) {
      lVar5 = 0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110e76bd8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar1;
      _objc_release(uVar4);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar6),param_2,4);
      func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar6),param_2,0);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c2a5060(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf49420(0x4018000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar5 = param_1;
      func_0x00010bdf73a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar6),param_2,lVar5);
      _objc_release(lVar5);
      func_0x00010c216140(*(undefined8 *)(param_1 + lVar6),param_2,1);
      lVar5 = *(long *)(param_1 + lVar6);
      _objc_retain(lVar5);
      _objc_release(puVar2);
    }
  }
  else {
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106b940c4; end: 106b94123; -[SCSettingsTextTableViewCell _currentTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b940c4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112759534) == 2) {
    func_0x00010bf99040(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + _DAT_112759534) == 1) {
    func_0x00010c2a2260(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b94124; end: 106b943e7; -[SCSettingsTextTableViewCell _updateViewColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b94124(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = param_1;
  func_0x00010bdf73a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c07b160();
    puVar3 = PTR_PTR_1126d0d50;
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bf80ec0(PTR_PTR_1126d0d50);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1130a0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126d0d50;
    func_0x00010c155160(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d0d50;
    func_0x00010bf6f6c0(PTR_PTR_1126d0d50);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    puVar3 = puVar1;
    puVar2 = puVar1;
    puVar4 = puVar1;
  }
  _objc_retain(puVar1);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11275953c),param_2,puVar3);
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_112759540),param_2,puVar1);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112759518),param_2,puVar3);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11275951c),param_2,puVar2);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112759524),param_2,puVar4);
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_112759538),param_2,puVar1);
  func_0x00010c161260(param_1,param_2,1);
  lVar8 = *(long *)(param_1 + _DAT_112759530);
  if (lVar8 == 0) {
    uVar7 = 0;
LAB_106b9437c:
    func_0x00010c161260(param_1,param_2,uVar7);
    lVar8 = (long)_DAT_112759528;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar8),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,1);
  }
  else {
    if (lVar8 == 1) {
      if (puVar1 == (undefined *)0x0) {
        uVar7 = 1;
        goto LAB_106b9437c;
      }
      func_0x00010c161260(param_1,param_2,0);
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110e76bf8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      lVar8 = (long)_DAT_112759528;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar8),param_2,puVar6);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,0);
    }
    else {
      if (lVar8 != 2) {
        lVar8 = (long)_DAT_112759528;
        goto LAB_106b943a0;
      }
      func_0x00010c161260(param_1,param_2,0);
      puVar5 = PTR_PTR_1126d0d50;
      func_0x00010c22ab60(PTR_PTR_1126d0d50);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      if (puVar1 != (undefined *)0x0) {
        func_0x00010bfe9720(puVar5,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      lVar8 = (long)_DAT_112759528;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar8),param_2,puVar6);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,0);
    }
    _objc_release(puVar6);
  }
LAB_106b943a0:
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar8),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b943e8; end: 106b94493; -[SCSettingsTextTableViewCell attributedLabel:didSelectLinkWithURL:] */

void FUN_106b943e8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = param_1;
    func_0x00010bf33a20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf33a20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c228340();
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b94494; end: 106b944a3; -[SCSettingsTextTableViewCell disclosureIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b94494(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759530);
}



/* Entry: 106b944a4; end: 106b944c3; -[SCSettingsTextTableViewCell cellDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b944a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112759544);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b944c4; end: 106b944d7; -[SCSettingsTextTableViewCell setCellDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b944c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759544,param_3);
  return;
}



/* Entry: 106b944d8; end: 106b944e7; -[SCSettingsTextTableViewCell cellState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b944d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759534);
}



/* Entry: 106b944e8; end: 106b944f7; -[SCSettingsTextTableViewCell isChecked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b944e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275950c);
}



/* Entry: 106b944f8; end: 106b94507; -[SCSettingsTextTableViewCell setChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b944f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275950c) = param_3;
  return;
}



/* Entry: 106b94508; end: 106b94517; -[SCSettingsTextTableViewCell isPrimaryTextEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b94508(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112759510);
}



/* Entry: 106b94518; end: 106b94527; -[SCSettingsTextTableViewCell detailTextAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b94518(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759548);
}



/* Entry: 106b94528; end: 106b94533; -[SCSettingsTextTableViewCell setDetailTextAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b94528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b94534; end: 106b94543; -[SCSettingsTextTableViewCell leadingImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b94534(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275954c);
}



/* Entry: 106b94544; end: 106b9454f; -[SCSettingsTextTableViewCell setLeadingImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b94544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b94550; end: 106b9455f; -[SCSettingsTextTableViewCell leadingText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b94550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759550);
}



/* Entry: 106b94560; end: 106b9456b; -[SCSettingsTextTableViewCell setLeadingText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b94560(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b9456c; end: 106b9457b; -[SCSettingsTextTableViewCell leadingViewAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9456c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759554);
}



/* Entry: 106b9457c; end: 106b94587; -[SCSettingsTextTableViewCell setLeadingViewAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9457c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b94588; end: 106b94597; -[SCSettingsTextTableViewCell callToActionText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b94588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759558);
}



/* Entry: 106b94598; end: 106b945a3; -[SCSettingsTextTableViewCell setCallToActionText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b94598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b945a4; end: 106b945b3; -[SCSettingsTextTableViewCell callToActionAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b945a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275955c);
}



/* Entry: 106b945b4; end: 106b945bf; -[SCSettingsTextTableViewCell setCallToActionAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b945b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b945c0; end: 106b946eb; -[SCSettingsTextTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b945c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275955c,0);
  _objc_storeStrong(param_1 + _DAT_112759558,0);
  _objc_storeStrong(param_1 + _DAT_112759554,0);
  _objc_storeStrong(param_1 + _DAT_112759550,0);
  _objc_storeStrong(param_1 + _DAT_11275954c,0);
  _objc_storeStrong(param_1 + _DAT_112759548,0);
  _objc_destroyWeak(param_1 + _DAT_112759544);
  _objc_storeStrong(param_1 + _DAT_112759538,0);
  _objc_storeStrong(param_1 + _DAT_11275952c,0);
  _objc_storeStrong(param_1 + _DAT_112759528,0);
  _objc_storeStrong(param_1 + _DAT_11275951c,0);
  _objc_storeStrong(param_1 + _DAT_112759518,0);
  _objc_storeStrong(param_1 + _DAT_112759524,0);
  _objc_storeStrong(param_1 + _DAT_11275953c,0);
  _objc_storeStrong(param_1 + _DAT_112759540,0);
  _objc_storeStrong(param_1 + _DAT_112759520,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759514,0);
  return;
}



/* Entry: 106b946ec; end: 106b946f3; +[_SCSettingsConstants outerVerticalPadding] */

undefined8 FUN_106b946ec(void)

{
  return 0x4024000000000000;
}



/* Entry: 106b946f4; end: 106b946fb; +[_SCSettingsConstants outerHorizontalPadding] */

undefined8 FUN_106b946f4(void)

{
  return 0x4030000000000000;
}


