/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e7c7fc; end: 108e7cb87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c7fc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
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
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x20) == *(long *)(*(long *)(param_2 + 0x28) + (long)_DAT_11277caf8)) {
    _CACurrentMediaTime();
    *(double *)(*(long *)(param_2 + 0x28) + (long)_DAT_11277cb30) = param_1;
    lVar21 = (long)_DAT_11277cafc;
    lVar19 = *(long *)(param_2 + 0x28);
    if (*(long *)(*(long *)(param_2 + 0x28) + lVar21) == 0) {
      puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf4dce0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c013de0();
      uVar18 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21);
      *(undefined **)(*(long *)(param_2 + 0x28) + lVar21) = puVar1;
      _objc_release(uVar18);
      _objc_release(uVar2);
      func_0x00010c213040(*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21),param_3,1);
      func_0x00010bed7620(*(undefined8 *)(param_2 + 0x28));
      func_0x00010c1bdb00(*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21),param_3,2);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf4dce0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar2);
      func_0x00010c219b60(*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21),param_3,0);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar3;
      func_0x00010bf493a0(uVar3,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21);
      uStack_88 = uVar18;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf493a0(uVar5,param_3,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21);
      uStack_80 = uVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010bf493a0(uVar9,param_3,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar21);
      uStack_78 = uVar12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf4dce0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar13;
      func_0x00010bf493a0(uVar13,param_3,uVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_3,puVar17);
      _objc_release(puVar17);
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
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar18);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar19 = *(long *)(param_2 + 0x28);
    }
    param_2 = lVar19;
    func_0x00010bea3a20();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = (long)_DAT_11277cafc;
  if (*(long *)(param_2 + lVar19) != 0) {
    func_0x00010bf8e3c0();
    iVar20 = (int)param_1;
    uVar2 = *(undefined8 *)(param_2 + lVar19);
    func_0x00010bfb3a80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    _objc_release(uVar2);
    if (param_1 != (double)iVar20) {
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c266f40((double)iVar20,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_2 + lVar19),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 108e7cb88; end: 108e7cc3b; -[SCStickerPickerStickerCell _updateEmojiLabelFontSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7cb88(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = (long)_DAT_11277cafc;
  if (*(long *)(param_2 + lVar3) != 0) {
    func_0x00010bf8e3c0();
    iVar4 = (int)param_1;
    uVar1 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010bfb3a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    _objc_release(uVar1);
    if (param_1 != (double)iVar4) {
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c266f40((double)iVar4,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_2 + lVar3),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 108e7cc3c; end: 108e7cde3; -[SCStickerPickerStickerCell _setEmojiLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7cc3c(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11277cafc;
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar10),param_3,0);
  puVar2 = PTR_PTR_1126b0d08;
  lVar9 = (long)_DAT_11277caf8;
  uVar7 = *(ulong *)(param_2 + lVar9);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  lVar4 = *(long *)(param_2 + lVar10);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(param_2 + lVar10);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(lVar4);
    if ((uVar7 & 1) != 0) goto LAB_108e7cd4c;
  }
  uVar3 = uVar1;
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar10));
  _objc_release(uVar3);
LAB_108e7cd4c:
  uVar8 = *(undefined8 *)(param_2 + lVar10);
  lVar10 = (long)_DAT_11277cb28;
  _objc_retain(uVar8);
  uVar6 = *(undefined8 *)(param_2 + lVar10);
  *(undefined8 *)(param_2 + lVar10) = uVar8;
  _objc_release(uVar6);
  _CACurrentMediaTime();
  param_1 = param_1 - *(double *)(param_2 + _DAT_11277cb30);
  lVar10 = *(long *)(param_2 + _DAT_11277cb34);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x10))(param_1,lVar10,*(undefined8 *)(param_2 + lVar9));
  }
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254780(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7cde4; end: 108e7ceb7;  */

void FUN_108e7cde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2;
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dbfb8;
  _objc_opt_class(PTR_PTR_1126dbfb8);
  uVar3 = uVar1;
  func_0x00010beecc20(uVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfc1d60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010c0b0aa0(param_1,uVar5,param_3,param_2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108e7ceb8; end: 108e7d16b; -[SCStickerPickerStickerCell _setImageStickerWithUserSession:contexts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ceb8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  uVar9 = (undefined4)param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = (long)_DAT_11277cb38;
  if (*(long *)(param_2 + lVar7) == 0) {
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    *(undefined **)(param_2 + lVar7) = puVar1;
    _objc_release(uVar3);
  }
  _CACurrentMediaTime();
  lVar8 = (long)_DAT_11277cb30;
  *(ulong *)(param_2 + lVar8) = CONCAT44(uVar10,uVar9);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11277caf8);
  _objc_retain(uVar5);
  uVar3 = uVar5;
  func_0x00010c271a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108e7d16c;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(uVar5);
  uVar2 = 0;
  uStack_90 = uVar5;
  func_0x000107c27d90(0,&puStack_b0);
  lVar6 = (long)_DAT_11277cb04;
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  *(undefined8 *)(param_2 + lVar6) = uVar2;
  _objc_release(uVar4);
  func_0x000107c312d4(0x3e19999a,"APPSTORE",*(undefined8 *)(param_2 + lVar6));
  puVar1 = PTR_PTR_1126dc428;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  _objc_initWeak(auStack_b8,param_2);
  uVar2 = *(undefined8 *)(param_2 + lVar7);
  _objc_copyWeak(auStack_c8,auStack_b8);
  _objc_retain(puVar1);
  uStack_c0 = uVar4;
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar1);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108e7d16c; end: 108e7d283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7d16c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c071ae0(uVar2,param_2,*(undefined8 *)(lVar1 + _DAT_11277caf8));
    if ((int)uVar2 != 0) {
      lVar3 = *(long *)(lVar1 + _DAT_11277caf0);
      if ((lVar3 == 0) || (func_0x00010c074c20(), (int)lVar3 != 0)) {
        lVar3 = (long)_DAT_11277caf4;
        if (*(long *)(lVar1 + lVar3) == 0) {
          puVar4 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
          _objc_alloc();
          func_0x00010bf20c00(lVar1);
          func_0x00010c013de0();
          uVar2 = *(undefined8 *)(lVar1 + lVar3);
          *(undefined **)(lVar1 + lVar3) = puVar4;
          _objc_release(uVar2);
          lVar5 = lVar1;
          func_0x00010bf4dce0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          _objc_release(lVar5);
        }
        puVar4 = PTR_PTR_1126d4eb0;
        func_0x00010c2541c0(PTR_PTR_1126d4eb0,param_2,*(undefined8 *)(lVar1 + _DAT_11277cb3c));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17e800(*(undefined8 *)(lVar1 + lVar3),param_2,puVar4);
        _objc_release(puVar4);
        func_0x00010c1a7f60(*(undefined8 *)(lVar1 + lVar3),param_2,0);
        func_0x00010c24dbc0(*(undefined8 *)(lVar1 + lVar3));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e7d284; end: 108e7d617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7d284(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_108e7d5a4;
  _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + 0x20));
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108e7d618;
  puStack_a0 = &UNK_110ac78e8;
  uStack_80 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_90,param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uStack_98 = uVar7;
  _objc_copyWeak(auStack_88,auStack_78);
  ppuVar2 = &puStack_b8;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c27dd80();
  if ((lVar3 == 6) || (*(long *)(param_1 + 0x30) == 0)) {
LAB_108e7d4d8:
    uVar6 = *(ulong *)(param_1 + 0x28);
    _objc_opt_respondsToSelector(uVar6,PTR_s_thumbnailImageWithUserSession_co_1126791e8);
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(ppuVar2);
      func_0x00010c26df00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c178140(*(undefined8 *)(param_1 + 0x20));
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = (long)_DAT_11277cb2c;
      _objc_retain(uVar8);
      uVar4 = *(undefined8 *)(lVar1 + lVar3);
      *(undefined8 *)(lVar1 + lVar3) = uVar8;
      _objc_release(uVar4);
      _objc_release(uVar7);
      ppuVar5 = ppuVar2;
      goto LAB_108e7d574;
    }
  }
  else {
    lVar3 = (long)_DAT_11277cb1c;
    uVar4 = *(undefined8 *)(lVar1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf2d360();
    _objc_release(uVar4);
    if ((int)uVar7 == 0) goto LAB_108e7d4d8;
    ppuVar5 = (undefined **)PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    uVar4 = *(undefined8 *)(lVar1 + lVar3);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar7;
    func_0x00010c0e0460(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,param_1 + 0x48);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar9);
    _objc_retain(ppuVar2);
    uVar8 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar4);
    func_0x00010c178140(*(undefined8 *)(param_1 + 0x20));
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = (long)_DAT_11277cb2c;
    _objc_retain(uVar8);
    uVar4 = *(undefined8 *)(lVar1 + lVar3);
    *(undefined8 *)(lVar1 + lVar3) = uVar8;
    _objc_release(uVar4);
    _objc_release(ppuVar2);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uVar7);
LAB_108e7d574:
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
LAB_108e7d5a4:
  _objc_release(lVar1);
  return;
}



/* Entry: 108e7d618; end: 108e7d6e3;  */

void FUN_108e7d618(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  param_1 = param_1 - *(double *)(param_2 + 0x38);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x00010c27dd80();
    if (lVar1 == 3) {
      FUN_108e7cde4(param_1,0);
    }
  }
  else {
    _objc_release();
  }
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar1);
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010be8e440(param_1,lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e7d6e4; end: 108e7d7bb;  */

void FUN_108e7d6e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108e7d7bc;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = param_2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar3;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c312cc("APPSTORE",&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e7d7bc; end: 108e7d903;  */

void FUN_108e7d7bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108e7d904;
  uStack_40 = 0x108e7d914;
  uStack_38 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0c0800(uVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),puStack_58[5],puStack_78[3]);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 108e7d904; end: 108e7d91b;  */

void FUN_108e7d904(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e7d91c; end: 108e7d9b7;  */

void FUN_108e7d91c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar2 = param_2;
  func_0x00010c09c920();
  _objc_release(param_2);
  uVar1 = 1;
  if ((int)uVar2 != 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 108e7d9b8; end: 108e7d9c7;  */

void FUN_108e7d9b8(void)

{
  return;
}



/* Entry: 108e7d9c8; end: 108e7dce7; -[SCStickerPickerStickerCell _renderStickerImage:sticker:thumbnailRequest:timeElapsed:downloadSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7d9c8(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5,ulong param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_6 != 0) && (uVar1 = param_6, func_0x00010bf2f5c0(), (uVar1 & 1) == 0)) {
    lVar9 = (long)_DAT_11277caf8;
    lVar7 = param_5;
    func_0x00010c071ae0();
    lVar2 = param_5;
    func_0x00010c27dd80();
    if (lVar2 == 3) {
      lVar2 = (long)_DAT_11277cb20;
      lVar5 = *(long *)(param_2 + lVar2);
      if (lVar5 < *(long *)(param_2 + _DAT_11277cb24)) {
        FUN_108e7cde4(param_1,lVar7);
        lVar5 = *(long *)(param_2 + lVar2);
      }
      if (0 < lVar5) {
        do {
          FUN_108e7cde4(param_1,0);
          lVar6 = *(long *)(param_2 + lVar2);
          lVar5 = lVar6 + -1;
          *(long *)(param_2 + lVar2) = lVar5;
        } while (lVar5 != 0 && 0 < lVar6);
      }
    }
    lVar2 = *(long *)(param_2 + _DAT_11277cb34);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(param_1,lVar2,*(undefined8 *)(param_2 + lVar9));
    }
    if ((int)lVar7 != 0) {
      *(undefined8 *)(param_2 + _DAT_11277cb08) = 2;
      lVar7 = (long)_DAT_11277cb04;
      if (*(long *)(param_2 + lVar7) != 0) {
        _dispatch_block_cancel();
        uVar3 = *(undefined8 *)(param_2 + lVar7);
        *(undefined8 *)(param_2 + lVar7) = 0;
        _objc_release(uVar3);
      }
      lVar2 = (long)_DAT_11277caf0;
      lVar7 = *(long *)(param_2 + lVar2);
      if (lVar7 == 0) {
        puVar4 = PTR_PTR_1126bb2a0;
        _objc_alloc();
        lVar7 = param_2;
        func_0x00010bf4dce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010c013de0();
        _objc_release(lVar7);
        uVar3 = *(undefined8 *)(param_2 + lVar2);
        *(undefined **)(param_2 + lVar2) = puVar4;
        _objc_retain(puVar4);
        _objc_release(uVar3);
        lVar7 = param_2;
        func_0x00010bf4dce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(puVar4);
        _objc_release(lVar7);
        lVar7 = *(long *)(param_2 + lVar2);
      }
      func_0x00010c182220(lVar7);
      puVar4 = PTR_PTR_1126dbc28;
      if (param_4 == (undefined *)0x0) {
        func_0x00010c161020(param_2);
        param_4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 *)(param_2 + _DAT_11277cb00) = 1;
      }
      else {
        lVar7 = param_5;
        func_0x00010c2540c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1235a0(puVar4);
        _objc_release(lVar7);
        uVar8 = *(undefined8 *)(param_2 + lVar2);
        lVar7 = (long)_DAT_11277cb28;
        _objc_retain(uVar8);
        uVar3 = *(undefined8 *)(param_2 + lVar7);
        *(undefined8 *)(param_2 + lVar7) = uVar8;
        _objc_release(uVar3);
      }
      lVar7 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c254780(param_1);
      _objc_release(lVar7);
      lVar7 = param_2;
      func_0x00010bf4dce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar2));
      _objc_release(lVar7);
      func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar2));
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar2));
      lVar7 = (long)_DAT_11277caf4;
      func_0x00010c2558c0(*(undefined8 *)(param_2 + lVar7));
      func_0x00010c12c960(*(undefined8 *)(param_2 + lVar7));
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      *(undefined8 *)(param_2 + lVar7) = 0;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e7dce8; end: 108e7dd87; -[SCStickerPickerStickerCell _stopAnimatingStickerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7dce8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277cb04;
  if (*(long *)(param_1 + lVar6) != 0) {
    _dispatch_block_cancel();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126bb2a0;
  uVar5 = *(ulong *)(param_1 + _DAT_11277caf0);
  _objc_retain(uVar5);
  _objc_opt_class(puVar3);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    func_0x00010c2558c0(uVar5);
    func_0x00010c16ce00(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7dd88; end: 108e7de03; -[SCStickerPickerStickerCell _startAnimatingStickerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7dd88(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126bb2a0;
  uVar4 = *(ulong *)(param_1 + _DAT_11277caf0);
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
  if (uVar1 != 0) {
    func_0x00010c16ce00(uVar4);
    func_0x00010c24dbc0(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7de04; end: 108e7de7f; -[SCStickerPickerStickerCell isStickerReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e7de04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277caf8);
  func_0x00010c27dd80();
  if (lVar1 != 6) {
    lVar1 = *(long *)(param_1 + _DAT_11277cb28);
    if (lVar1 == 0) {
      return false;
    }
    if (lVar1 != *(long *)(param_1 + _DAT_11277cafc)) {
      return lVar1 == *(long *)(param_1 + _DAT_11277caf0);
    }
  }
  return true;
}



/* Entry: 108e7de80; end: 108e7df17; -[SCStickerPickerStickerCell grow] */

void FUN_108e7de80(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108e7df18;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e7df78;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03460(0x3fc3333340000000,0,0x3ff0000000000000,0x3fb99999a0000000,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,&puStack_38,&puStack_60);
  return;
}



/* Entry: 108e7df18; end: 108e7df77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7df18(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff35c28fccccccd,0x3ff35c28fccccccd);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cb28),param_2,
                      &uStack_80);
  return;
}



/* Entry: 108e7df78; end: 108e7dffb;  */

void FUN_108e7df78(long param_1,int param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108e7dffc;
    puStack_20 = &UNK_110842e18;
    uStack_18 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf03460(0x3fc3333340000000,0,0x3ff0000000000000,0x3fb99999a0000000,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,&puStack_38,0);
  }
  return;
}



/* Entry: 108e7dffc; end: 108e7e05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7dffc(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff19999a0000000,0x3ff19999a0000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cb28),param_2,
                      &uStack_80);
  return;
}



/* Entry: 108e7e05c; end: 108e7e0f3; -[SCStickerPickerStickerCell shrink] */

void FUN_108e7e05c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108e7e0f4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e7e154;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03460(0x3fc3333340000000,0,0x3ff0000000000000,0x3fb99999a0000000,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,&puStack_38,&puStack_60);
  return;
}



/* Entry: 108e7e0f4; end: 108e7e153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e0f4(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3fee666660000000,0x3fee666660000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cb28),param_2,
                      &uStack_80);
  return;
}



/* Entry: 108e7e154; end: 108e7e21f;  */

void FUN_108e7e154(long param_1,int param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    uStack_28 = 0x108e7e1d8;
    puStack_20 = &UNK_110842e18;
    uStack_18 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf03460(0x3fc3333340000000,0,0x3ff0000000000000,0x3fb99999a0000000,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,&puStack_38,0);
  }
  return;
}



/* Entry: 108e7e220; end: 108e7e2a3; -[SCStickerPickerStickerCell emojiFontSize] */

double FUN_108e7e220(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = param_1;
  _objc_release(uVar1);
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(param_2);
  if (dVar2 <= param_1) {
    param_1 = dVar2;
  }
  return param_1 * 0.95;
}



/* Entry: 108e7e2a4; end: 108e7e2c3; -[SCStickerPickerStickerCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e2a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277cb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e7e2c4; end: 108e7e2d7; -[SCStickerPickerStickerCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277cb40,param_3);
  return;
}



/* Entry: 108e7e2d8; end: 108e7e2e7; -[SCStickerPickerStickerCell sticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7e2d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277caf8);
}



/* Entry: 108e7e2e8; end: 108e7e2f7; -[SCStickerPickerStickerCell sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7e2e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb3c);
}



/* Entry: 108e7e2f8; end: 108e7e307; -[SCStickerPickerStickerCell setSourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277cb3c) = param_3;
  return;
}



/* Entry: 108e7e308; end: 108e7e317; -[SCStickerPickerStickerCell canTapToReload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e7e308(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277cb00);
}



/* Entry: 108e7e318; end: 108e7e327; -[SCStickerPickerStickerCell timeToDisplayCallbackBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7e318(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb34);
}



/* Entry: 108e7e328; end: 108e7e333; -[SCStickerPickerStickerCell setTimeToDisplayCallbackBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e7e334; end: 108e7e44f; -[SCStickerPickerStickerCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e334(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cb34,0);
  _objc_storeStrong(param_1 + _DAT_11277caf8,0);
  _objc_destroyWeak(param_1 + _DAT_11277cb40);
  _objc_storeStrong(param_1 + _DAT_11277caec,0);
  _objc_storeStrong(param_1 + _DAT_11277cb1c,0);
  _objc_storeStrong(param_1 + _DAT_11277cb18,0);
  _objc_storeStrong(param_1 + _DAT_11277cb14,0);
  _objc_storeStrong(param_1 + _DAT_11277cb10,0);
  _objc_storeStrong(param_1 + _DAT_11277cb0c,0);
  _objc_storeStrong(param_1 + _DAT_11277cb04,0);
  _objc_storeStrong(param_1 + _DAT_11277cb38,0);
  _objc_storeStrong(param_1 + _DAT_11277cb2c,0);
  _objc_storeStrong(param_1 + _DAT_11277cb28,0);
  _objc_storeStrong(param_1 + _DAT_11277caf4,0);
  _objc_storeStrong(param_1 + _DAT_11277caf0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cafc,0);
  return;
}



/* Entry: 108e7e450; end: 108e7e48f; -[SCStickerPickerThumbnailLoadRequest cancel] */

void FUN_108e7e450(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf2f540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 108e7e490; end: 108e7e4c7; -[SCStickerPickerThumbnailLoadRequest setCancelable:] */

void FUN_108e7e490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 108e7e4c8; end: 108e7e4cf; -[SCStickerPickerThumbnailLoadRequest canceled] */

undefined1 FUN_108e7e4c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e7e4d0; end: 108e7e4d7; -[SCStickerPickerThumbnailLoadRequest cancelable] */

undefined8 FUN_108e7e4d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e7e4d8; end: 108e7e4e3; -[SCStickerPickerThumbnailLoadRequest .cxx_destruct] */

void FUN_108e7e4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e7e4e4; end: 108e7e55b; -[SCStickerPickerToggleableViewAttributes copyWithZone:] */

undefined1 * FUN_108e7e4e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fed18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_copyWithZone__1125b2238);
  func_0x00010c247ac0(param_1);
  func_0x00010c207040(puVar1);
  func_0x00010bfaef60(param_1);
  func_0x00010c19c9a0(puVar1);
  func_0x00010c0fb9a0(param_1);
  func_0x00010c1db6a0(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 108e7e55c; end: 108e7e6af; -[SCStickerPickerToggleableViewAttributes isEqual:] */

undefined1 *
FUN_108e7e55c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar4 = &uStack_50;
  _objc_retain(param_7);
  uVar2 = param_5;
  _objc_opt_class(param_5);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,uVar2);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
    goto LAB_108e7e664;
  }
  _objc_retain(param_7);
  func_0x00010c247ac0(param_7);
  uVar2 = param_5;
  dVar5 = param_1;
  uVar6 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  func_0x00010c247ac0();
  iVar1 = (int)uVar2;
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,dVar5,uVar6,uVar7,uVar8);
  if (iVar1 == 0) {
LAB_108e7e650:
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bfaef60(param_7);
    uVar2 = param_5;
    dVar5 = param_1;
    uVar6 = param_2;
    uVar7 = param_3;
    uVar8 = param_4;
    func_0x00010bfaef60();
    iVar1 = (int)uVar2;
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,dVar5,uVar6,uVar7,uVar8);
    if (iVar1 == 0) goto LAB_108e7e650;
    func_0x00010c0fb9a0(param_7);
    dVar5 = param_1;
    func_0x00010c0fb9a0(param_5);
    if (param_1 != dVar5) goto LAB_108e7e650;
    puStack_48 = PTR_PTR_1126fed18;
    uStack_50 = param_5;
    _objc_msgSendSuper2(&uStack_50,PTR_s_isEqual__1125fa0c8,param_7);
  }
  _objc_release(param_7);
LAB_108e7e664:
  _objc_release(param_7);
  return (undefined1 *)puVar4;
}



/* Entry: 108e7e6b0; end: 108e7e6c7; -[SCStickerPickerToggleableViewAttributes sourceRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7e6b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb4c);
}



/* Entry: 108e7e6c8; end: 108e7e6df; -[SCStickerPickerToggleableViewAttributes setSourceRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277cb4c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108e7e6e0; end: 108e7e6f7; -[SCStickerPickerToggleableViewAttributes finalFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7e6e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb50);
}



/* Entry: 108e7e6f8; end: 108e7e70f; -[SCStickerPickerToggleableViewAttributes setFinalFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277cb50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108e7e710; end: 108e7e71f; -[SCStickerPickerToggleableViewAttributes pickerAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7e710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb54);
}



/* Entry: 108e7e720; end: 108e7e72f; -[SCStickerPickerToggleableViewAttributes setPickerAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7e720(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277cb54) = param_1;
  return;
}



/* Entry: 108e7e730; end: 108e7e79b; -[SCStickerPickerController initWithPickerView:] */

undefined1 * FUN_108e7e730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fed20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e7e79c; end: 108e7e80b; -[SCStickerPickerController openAtCategory:stickerOffset:] */

void FUN_108e7e79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8f00();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e7e80c; end: 108e7e83b; -[SCStickerPickerController willDisplay] */

void FUN_108e7e80c(undefined8 param_1)

{
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e7e83c; end: 108e7e86b; -[SCStickerPickerController close] */

void FUN_108e7e83c(undefined8 param_1)

{
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e7e86c; end: 108e7e8bb; -[SCStickerPickerController reloadDataWithDataSourceUpdateHint:] */

void FUN_108e7e86c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e7e8bc; end: 108e7e91b; -[SCStickerPickerController reloadDataWithDataSourceUpdateHint:shouldRefreshSuperCategoryIcons:] */

void FUN_108e7e8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e7e91c; end: 108e7e933; -[SCStickerPickerController dataSource] */

void FUN_108e7e91c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e7e934; end: 108e7e93f; -[SCStickerPickerController setDataSource:] */

void FUN_108e7e934(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 108e7e940; end: 108e7e957; -[SCStickerPickerController delegate] */

void FUN_108e7e940(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e7e958; end: 108e7e963; -[SCStickerPickerController setDelegate:] */

void FUN_108e7e958(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108e7e964; end: 108e7e97b; -[SCStickerPickerController pickerView] */

void FUN_108e7e964(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e7e97c; end: 108e7e9ab; -[SCStickerPickerController .cxx_destruct] */

void FUN_108e7e97c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108e7e9ac; end: 108e7e9af; -[SCPreviewStickerPickerPresentationController initWithControlsContainer:stickerPickerViewController:categoryIndexPath:yOffset:] */

void FUN_108e7e9ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0393f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithPresentingViewController_1125ebef8);
  return;
}



/* Entry: 108e7e9b0; end: 108e7ea7b; -[SCPreviewStickerPickerPresentationController initWithPresentingViewController:stickerPickerViewController:categoryIndexPath:yOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e7e9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fed28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithPresentedViewController__1125ebc88,param_4,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277cb64;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277cb68;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108e7ea7c; end: 108e7eb7f; -[SCPreviewStickerPickerPresentationController controlsVC] */

void FUN_108e7ea7c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c318f8();
  _objc_release(uVar1);
  uVar4 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || ((uVar2 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    uVar1 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    _objc_release(uVar4);
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x000107c318f8();
      _objc_release(uVar1);
      uVar4 = 0;
      if ((uVar1 != 0) && ((int)uVar2 != 0)) {
        uVar4 = param_1;
        func_0x00010c275140(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e7eb80; end: 108e7eb83; -[SCPreviewStickerPickerPresentationController stickerPickerVC] */

void FUN_108e7eb80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10f950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentedViewController_112621870);
  return;
}



/* Entry: 108e7eb84; end: 108e7ecb3; -[SCPreviewStickerPickerPresentationController presentationTransitionWillBegin] */

void FUN_108e7eb84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c254ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5f80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c254ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfecf20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c2bec60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8f00(uVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf50020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1839e0(param_1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7ecb4; end: 108e7ed0f; -[SCPreviewStickerPickerPresentationController presentationTransitionDidEnd:] */

void FUN_108e7ecb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c254ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6680(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7ed10; end: 108e7ed9f; -[SCPreviewStickerPickerPresentationController dismissalTransitionWillBegin] */

void FUN_108e7ed10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf50020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c254ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e7eda0; end: 108e7eddb; -[SCPreviewStickerPickerPresentationController dismissalTransitionDidEnd:] */

void FUN_108e7eda0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf4ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6680(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7eddc; end: 108e7eee3; -[SCPreviewStickerPickerPresentationController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_108e7eddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = param_1;
  uVar4 = param_2;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c254ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108e7eee4;
  puStack_80 = &UNK_110ac7a08;
  uStack_78 = param_3;
  uStack_70 = uVar3;
  uStack_68 = uVar4;
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x00010bf02c20(param_5);
  puStack_a0 = PTR_PTR_1126fed28;
  uStack_a8 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&uStack_a8,PTR_s_viewWillTransitionToSize_withTra_112685490,
                      param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 108e7eee4; end: 108e7ef57;  */

void FUN_108e7eee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c254ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7ef58; end: 108e7f033; -[SCPreviewStickerPickerPresentationController _addControlsViewToView:] */

void FUN_108e7ef58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  func_0x00010bf50020(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf50040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(uVar1);
  func_0x00010bf51460(uVar2,param_6,param_7);
  _objc_release(uVar2);
  func_0x00010befbb60(param_7,param_6,uVar1);
  _objc_release(param_7);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7f034; end: 108e7f043; -[SCPreviewStickerPickerPresentationController indexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7f034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb64);
}



/* Entry: 108e7f044; end: 108e7f053; -[SCPreviewStickerPickerPresentationController yOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7f044(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb68);
}



/* Entry: 108e7f054; end: 108e7f073; -[SCPreviewStickerPickerPresentationController controlsContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7f054(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277cb6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e7f074; end: 108e7f087; -[SCPreviewStickerPickerPresentationController setControlsContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7f074(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277cb6c,param_3);
  return;
}



/* Entry: 108e7f088; end: 108e7f0d3; -[SCPreviewStickerPickerPresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7f088(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277cb6c);
  _objc_storeStrong(param_1 + _DAT_11277cb68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cb64,0);
  return;
}



/* Entry: 108e7f0d4; end: 108e7f17b; -[SCPreviewStickerPickerTransitionAnimator initAtCategoryIndexPath:yOffset:] */

undefined1 *
FUN_108e7f0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fed30;
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
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e7f17c; end: 108e7f413; -[SCPreviewStickerPickerTransitionAnimator _animatePresentationWithContext:] */

void FUN_108e7f17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010bec2b20(param_5,param_6,param_7,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  lVar3 = param_5;
  func_0x00010bde8aa0(param_5,param_6,param_7,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010bf50040(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar4);
    uVar2 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51460(param_1,param_2,param_3,param_4,lVar5,param_6,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar5);
    uVar2 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf50040(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2,param_6,lVar5);
    _objc_release(lVar5);
    _objc_release(uVar2);
    func_0x00010c219b60(lVar4,param_6,1);
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,lVar4);
    _objc_release(lVar4);
  }
  lVar4 = lVar1;
  func_0x00010c0fbbc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a080();
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010c0fbbc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a940(param_5,param_6,param_7);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108e7f414;
  puStack_88 = &UNK_110841f80;
  lStack_80 = param_5;
  uStack_78 = param_7;
  _objc_retain(param_7);
  func_0x00010bf03340(param_1,lVar4,param_6,&puStack_a0);
  _objc_release(lVar4);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 108e7f414; end: 108e7f443;  */

void FUN_108e7f414(long param_1,undefined8 param_2)

{
  func_0x00010c2199e0(*(undefined8 *)(param_1 + 0x20),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 108e7f444; end: 108e7f8b7; -[SCPreviewStickerPickerTransitionAnimator _animateDismissalWithContext:] */

void FUN_108e7f444(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long lVar28;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bec2b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bde8aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    uVar4 = param_4;
    func_0x00010bf4b2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf50040(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar4);
    _objc_release(lVar5);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = param_4;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf50040();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010bf50040();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_4;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar3;
    func_0x00010bf50040();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = param_4;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3;
    func_0x00010bf50040(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar27);
    _objc_release(uVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  lVar5 = lVar2;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a940(param_2);
  _objc_retain(param_4);
  func_0x00010bf03360(param_1,lVar5);
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c2199e0(*(undefined8 *)(lVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 108e7f8b8; end: 108e7f8e7;  */

void FUN_108e7f8b8(long param_1,undefined8 param_2)

{
  func_0x00010c2199e0(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 108e7f8e8; end: 108e7f947; -[SCPreviewStickerPickerTransitionAnimator _stickerPickerVCFromContext:key:] */

void FUN_108e7f8e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c29c220(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000107c318f8();
  lVar2 = 0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    _objc_retain(param_3);
    lVar2 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108e7f948; end: 108e7fa03; -[SCPreviewStickerPickerTransitionAnimator _controlsVCFromContext:key:] */

void FUN_108e7f948(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010c29c220(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bde8ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = param_3;
      func_0x00010c275140(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde8ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar3 = param_1;
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108e7fa04; end: 108e7fa5b; -[SCPreviewStickerPickerTransitionAnimator _controlsVCFromVC:] */

void FUN_108e7fa04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b38);
  lVar2 = 0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    _objc_retain(param_3);
    lVar2 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108e7fa5c; end: 108e7fab7; -[SCPreviewStickerPickerTransitionAnimator animateTransition:] */

void FUN_108e7fa5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c27a660();
  if (lVar1 == 1) {
    func_0x00010bdcaba0(param_1,param_2,param_3);
  }
  else if (lVar1 == 0) {
    func_0x00010bdcb040(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e7fab8; end: 108e7fabb; -[SCPreviewStickerPickerTransitionAnimator animationEnded:] */

void FUN_108e7fab8(void)

{
  return;
}



/* Entry: 108e7fabc; end: 108e7fac7; -[SCPreviewStickerPickerTransitionAnimator transitionDuration:] */

undefined8 FUN_108e7fabc(void)

{
  return 0x3fe3333333333333;
}



/* Entry: 108e7fac8; end: 108e7facb; -[SCPreviewStickerPickerTransitionAnimator animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_108e7fac8(void)

{
  return;
}



/* Entry: 108e7facc; end: 108e7facf; -[SCPreviewStickerPickerTransitionAnimator animationControllerForDismissedController:] */

void FUN_108e7facc(void)

{
  return;
}



/* Entry: 108e7fad0; end: 108e7fad7; -[SCPreviewStickerPickerTransitionAnimator interactionControllerForPresentation:] */

undefined8 FUN_108e7fad0(void)

{
  return 0;
}



/* Entry: 108e7fad8; end: 108e7fadf; -[SCPreviewStickerPickerTransitionAnimator interactionControllerForDismissal:] */

undefined8 FUN_108e7fad8(void)

{
  return 0;
}



/* Entry: 108e7fae0; end: 108e7fc4b; -[SCPreviewStickerPickerTransitionAnimator presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] */

void FUN_108e7fae0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b40);
  lVar4 = 0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    _objc_retain(param_3);
    lVar4 = param_3;
  }
  lVar1 = param_5;
  func_0x000107c318f8(param_5,PTR_DAT_1126a5b38);
  puVar2 = PTR_PTR_1126dc430;
  uVar3 = param_1;
  if ((param_5 == 0) || ((int)lVar1 == 0)) {
    _objc_alloc(PTR_PTR_1126dc430);
    func_0x00010bfecf20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0393e0(puVar2);
  }
  else {
    _objc_retain(param_5);
    _objc_alloc(puVar2);
    func_0x00010bfecf20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0049e0(puVar2);
    _objc_release(param_5);
  }
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e7fc4c; end: 108e7fc53; -[SCPreviewStickerPickerTransitionAnimator indexPath] */

undefined8 FUN_108e7fc4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e7fc54; end: 108e7fc5b; -[SCPreviewStickerPickerTransitionAnimator yOffset] */

undefined8 FUN_108e7fc54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e7fc5c; end: 108e7fc63; -[SCPreviewStickerPickerTransitionAnimator transition] */

undefined8 FUN_108e7fc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e7fc64; end: 108e7fc6b; -[SCPreviewStickerPickerTransitionAnimator setTransition:] */

void FUN_108e7fc64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108e7fc6c; end: 108e7fc9b; -[SCPreviewStickerPickerTransitionAnimator .cxx_destruct] */

void FUN_108e7fc6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e7fc9c; end: 108e7fd73; -[SCStickerPickerDataSourceUpdateHint initWithInserts:updates:deletes:] */

undefined1 *
FUN_108e7fc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fed38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e7fd74; end: 108e7fdbb; -[SCStickerPickerDataSourceUpdateHint inserts] */

void FUN_108e7fd74(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed2e0(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e7fdbc; end: 108e7fe03; -[SCStickerPickerDataSourceUpdateHint updates] */

void FUN_108e7fdbc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed2e0(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e7fe04; end: 108e7fe4b; -[SCStickerPickerDataSourceUpdateHint deletes] */

void FUN_108e7fe04(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x18);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed2e0(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


