/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b83ad14; end: 10b83ad9f; -[SIGCell setLeadingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83ad14(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11279473c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    if (param_3 != 0) {
      func_0x00010c219b60(param_3,param_2,0);
      func_0x00010befbb60(param_1,param_2,param_3);
    }
    func_0x00010beaab80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83ada0; end: 10b83b1ef; -[SIGCell setLeadingAccessoryActionIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83ada0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
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
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_112794740;
  puVar3 = param_1;
  if (param_3 != *(undefined **)(param_1 + lVar20)) {
    lVar21 = (long)_DAT_112794744;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar21));
    uVar1 = *(undefined8 *)(param_1 + lVar21);
    *(undefined8 *)(param_1 + lVar21) = 0;
    _objc_release(uVar1);
    *(undefined **)(param_1 + lVar20) = param_3;
    puVar2 = PTR_PTR_1126b50b8;
    func_0x00010c0d7480(PTR_PTR_1126b50b8,param_2,param_3);
    puVar3 = PTR_PTR_1126b50b8;
    func_0x00010bfe7800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      if ((int)puVar2 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216160(puVar4,param_2,puVar2);
        _objc_release(puVar2);
      }
      func_0x00010c219b60(puVar4,param_2,0);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      func_0x00010c219b60();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c08c0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4024000000000000);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c08c0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar5);
      func_0x00010befbb60(puVar2,param_2,puVar4);
      if (param_1[_DAT_112794748] == '\x01') {
        func_0x00010c1677c0(0x3ff0000000000000,puVar2);
        uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      }
      else {
        func_0x00010c1677c0(0,puVar2);
        _CGAffineTransformMakeScale(&uStack_f0,0,0);
        uStack_b8 = uStack_e8;
        uStack_c0 = uStack_f0;
        uStack_a8 = uStack_d8;
        uStack_b0 = uStack_e0;
      }
      uStack_a0 = uStack_d0;
      uStack_98 = uStack_c8;
      func_0x00010c219960(puVar2,param_2,&uStack_c0);
      uVar1 = *(undefined8 *)(param_1 + lVar21);
      *(undefined **)(param_1 + lVar21) = puVar2;
      _objc_retain(puVar2);
      _objc_release(uVar1);
      func_0x00010bec5b40(param_1);
      func_0x00010befbb60(param_1,param_2,puVar2);
      func_0x00010beaab80(param_1);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar6 = puVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf493a0(puVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      puStack_90 = puVar8;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493a0(puVar9,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      puStack_88 = puVar11;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010c2a5060(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bf493c0(0x4014000000000000,puVar12,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      puStack_80 = puVar14;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar4;
      func_0x00010bfe0660(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      func_0x00010bf493c0(0x4014000000000000,puVar15,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar17;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,4);
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar18;
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar18);
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
      _objc_release(puVar4);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar20 = (long)_DAT_11279474c;
  uVar19 = *(ulong *)(puVar3 + lVar20);
  func_0x00010c071ae0(uVar19,param_2,param_3);
  if ((uVar19 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(puVar3 + lVar20));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(puVar3 + lVar20);
    *(undefined **)(puVar3 + lVar20) = param_3;
    _objc_release(uVar1);
    if (param_3 != (undefined *)0x0) {
      func_0x00010c219b60(param_3,param_2,0);
      func_0x00010befbb60(puVar3,param_2,param_3);
    }
    func_0x00010beaab80(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83b1f0; end: 10b83b27b; -[SIGCell setTrailingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b1f0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11279474c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    if (param_3 != 0) {
      func_0x00010c219b60(param_3,param_2,0);
      func_0x00010befbb60(param_1,param_2,param_3);
    }
    func_0x00010beaab80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83b27c; end: 10b83b407; +[SIGCell imageForActionIndicator:selected:] */

void FUN_10b83b27c(undefined *param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_3 < 3) {
    if (param_3 == 1) {
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010bf33880();
      _objc_retainAutoreleasedReturnValue();
LAB_10b83b3bc:
      puVar2 = puVar1;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      if (param_3 != 2) goto LAB_10b83b3e4;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      if (param_4 == 0) {
        func_0x00010bf338a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf338e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  else {
    if (param_3 == 3) {
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf33840();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      if (param_3 != 5) {
        if (param_3 != 4) goto LAB_10b83b3e4;
        func_0x00010b87f3b0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        func_0x00010bf33860();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b83b3bc;
      }
      param_1 = PTR_PTR_1126b0c40;
      func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,param_2,0x88);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
    puVar2 = puVar1;
    func_0x00010bfe77e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
  }
  _objc_release(param_1);
LAB_10b83b3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b83b408; end: 10b83b41f; +[SIGCell needsTintForActionIndicator:] */

uint FUN_10b83b408(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 6) & 0x3aU >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 10b83b420; end: 10b83b437; +[SIGCell trailingMarginForActionIndicator:] */

undefined8 FUN_10b83b420(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4028000000000000;
  if ((param_3 - 3U & 0xfffffffffffffffd) != 0) {
    uVar1 = 0x4030000000000000;
  }
  return uVar1;
}



/* Entry: 10b83b438; end: 10b83b5b3; -[SIGCell setActionIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b438(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112794750;
  if (param_4 == *(long *)(param_2 + lVar5)) {
    return;
  }
  lVar6 = (long)_DAT_112794754;
  func_0x00010c12c960(*(undefined8 *)(param_2 + lVar6));
  uVar1 = *(undefined8 *)(param_2 + lVar6);
  *(undefined8 *)(param_2 + lVar6) = 0;
  _objc_release(uVar1);
  *(long *)(param_2 + lVar5) = param_4;
  puVar2 = PTR_PTR_1126b50b8;
  func_0x00010c0d7480(PTR_PTR_1126b50b8,param_3,param_4);
  puVar3 = PTR_PTR_1126b50b8;
  func_0x00010bfe7800(PTR_PTR_1126b50b8,param_3,param_4,*(undefined1 *)(param_2 + _DAT_112794748));
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    if ((int)puVar2 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xce);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(puVar4,param_3,puVar2);
      _objc_release(puVar2);
    }
    func_0x00010c219b60(puVar4,param_3,0);
    func_0x00010c23d620(puVar4);
    uVar1 = *(undefined8 *)(param_2 + lVar6);
    *(undefined **)(param_2 + lVar6) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar1);
    func_0x00010c2794a0(PTR_PTR_1126b50b8,param_3,param_4);
    *(undefined8 *)(param_2 + _DAT_112794704 + 0x18) = param_1;
    func_0x00010befbb60(param_2,param_3,puVar4);
    _objc_release(puVar4);
  }
  func_0x00010bec5b40(param_2);
  func_0x00010beaab80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b83b5b4; end: 10b83b60b; -[SIGCell touchesBegan:withEvent:] */

void FUN_10b83b5b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesBegan_withEvent__11267b780);
  uVar1 = param_1;
  func_0x00010c074de0();
  if ((int)uVar1 != 0) {
    func_0x00010c1a8860(param_1);
  }
  return;
}



/* Entry: 10b83b60c; end: 10b83b657; -[SIGCell touchesEnded:withEvent:] */

void FUN_10b83b60c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesEnded_withEvent__11267b788);
  func_0x00010c1a8860(param_1);
  return;
}



/* Entry: 10b83b658; end: 10b83b6a3; -[SIGCell touchesCancelled:withEvent:] */

void FUN_10b83b658(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesCancelled_withEvent__112526c90);
  func_0x00010c1a8860(param_1);
  return;
}



/* Entry: 10b83b6a4; end: 10b83b79b; -[SIGCell traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b6a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270b438;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_traitCollectionDidChange__11267bf88,param_3);
  if (*(char *)(param_1 + (long)_DAT_11279471c) == '\x01') {
    uVar1 = param_1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c1069c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      func_0x00010beaab80(param_1);
      func_0x00010c069fa0(param_1);
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b83b79c; end: 10b83b7a3; -[SIGCell setSelected:] */

void FUN_10b83b79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelected_animated__11265c5a0,param_3,0);
  return;
}



/* Entry: 10b83b7a4; end: 10b83b7eb; -[SIGCell setSelected:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b7a4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112794748) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112794748) = (char)param_3;
  func_0x00010bec5b40();
  func_0x00010bed2740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beda890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLeadingAccessoryActionInd_1125943c8);
  return;
}



/* Entry: 10b83b7ec; end: 10b83b833; -[SIGCell setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b7ec(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112794718) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112794718) = (char)param_3;
  func_0x00010bec5b40();
  func_0x00010bed2740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beda890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLeadingAccessoryActionInd_1125943c8);
  return;
}



/* Entry: 10b83b834; end: 10b83b84f; -[SIGCell setHighlightsOnTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b834(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_1127946c0) != param_3) {
    *(char *)(param_1 + _DAT_1127946c0) = (char)param_3;
  }
  return;
}



/* Entry: 10b83b850; end: 10b83b8fb; -[SIGCell setHighlighted:] */

/* WARNING: Possible PIC construction at 0x00010b83b8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b83b8d0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b850(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + _DAT_112794758) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112794758) = (char)param_3;
  if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11279475c);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11279475c);
    *(long *)(param_1 + _DAT_11279475c) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010bfe30e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBackgroundColor__112639330,lVar1);
  return;
}



/* Entry: 10b83b8fc; end: 10b83b90b; -[SIGCell titleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279470c),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b83b90c; end: 10b83b99f; -[SIGCell setTitleText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b90c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11279470c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    if (*(char *)(param_1 + _DAT_11279471c) == '\x01') {
      func_0x00010c06a1e0(param_1);
    }
    func_0x00010beda220(param_1);
    func_0x00010bed5cc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83b9a0; end: 10b83b9af; -[SIGCell attributedTitleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279470c),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 10b83b9b0; end: 10b83b9f7; -[SIGCell setAdjustsTitleFontSizeToFitWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11279470c;
  func_0x00010c1c83a0(0x3fe6666666666666,*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c165e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setAdjustsFontSizeToFitWidth__1126371a8,param_3)
  ;
  return;
}



/* Entry: 10b83b9f8; end: 10b83ba07; -[SIGCell adjustsTitleFontSizeToFitWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83b9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befdb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279470c),PTR_s_adjustsFontSizeToFitWidth_11259d078);
  return;
}



/* Entry: 10b83ba08; end: 10b83babb; -[SIGCell setAttributedTitleText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83ba08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11279470c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_3) {
    _objc_release(lVar1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071b80();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
      func_0x00010beda220(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83babc; end: 10b83bc0f; -[SIGCell setOfficialBadgeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83babc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_112794734) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794734) = param_3;
  lVar4 = (long)_DAT_112794760;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  if (param_3 == 3) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    func_0x00010c21ad00();
    func_0x00010c212f20(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010c23d620(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    func_0x00010befbb60(param_1);
  }
  else if (param_3 == 0) {
    puVar2 = *(undefined **)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b50b8;
    func_0x00010be37160(PTR_PTR_1126b50b8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c219b60();
    func_0x00010c23d620(puVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar3);
    func_0x00010befbb60(param_1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beaab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupAutolayoutConstraints_112588488);
  return;
}



/* Entry: 10b83bc10; end: 10b83bd0b; +[SIGCell sizeForOfficialBadgeType:] */

undefined1  [16]
FUN_10b83bc10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar3 [16];
  
  if (param_5 < 3) {
    if (param_5 - 1U < 2) {
LAB_10b83bc60:
      lVar1 = param_3;
      func_0x00010be37160();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
        param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      }
      else {
        func_0x00010c23d0a0(lVar1);
        func_0x00010c141ec0(param_3);
      }
      _objc_release(lVar1);
      unaff_d8 = param_1;
      unaff_d9 = param_2;
      goto LAB_10b83bcf4;
    }
    if (param_5 != 0) goto LAB_10b83bcf4;
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    if (param_5 != 3) {
      if (param_5 != 4) goto LAB_10b83bcf4;
      goto LAB_10b83bc60;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0a498;
    func_0x00010c23b9c0(&PTR____CFConstantStringClassReference_110f0a498,param_4,0x17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(ppuVar2);
  }
  func_0x00010c141ec0(param_1,param_2,param_3);
  unaff_d8 = param_1;
  unaff_d9 = param_2;
LAB_10b83bcf4:
  auVar3._8_8_ = unaff_d9;
  auVar3._0_8_ = unaff_d8;
  return auVar3;
}



/* Entry: 10b83bd0c; end: 10b83bdaf; +[SIGCell _imageForOfficialBadgeType:] */

void FUN_10b83bd0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 4) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c101f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e1a80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 1) {
      uVar1 = 0;
      goto LAB_10b83bda0;
    }
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e1ac0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
LAB_10b83bda0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b83bdb0; end: 10b83bdbf; -[SIGCell detailText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83bdb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794724),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b83bdc0; end: 10b83beab; -[SIGCell setDetailText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83bdc0(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112794724;
  ppuVar2 = *(undefined ***)((long)param_1 + lVar5);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  func_0x00010c071ae0(ppuVar3,param_2,ppuVar1);
  _objc_release(ppuVar2);
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar3 = param_1;
    func_0x00010be1e960(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (ppuVar3 == (undefined **)0x0) {
      func_0x00010c12c960(*(undefined8 *)((long)param_1 + lVar5));
      uVar4 = *(undefined8 *)((long)param_1 + lVar5);
      *(undefined8 *)((long)param_1 + lVar5) = 0;
      _objc_release(uVar4);
      func_0x00010beaab80(param_1);
    }
    else {
      func_0x00010bdecee0(param_1);
    }
    func_0x00010c212f20(*(undefined8 *)((long)param_1 + lVar5),param_2,ppuVar3);
    func_0x00010beda220(param_1);
    param_3 = ppuVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83beac; end: 10b83bfef; -[SIGCell _getDetailTextFromFormatDelegateUsingText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83beac(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain(param_6);
  lVar8 = (long)_DAT_112794764;
  lVar1 = param_4 + lVar8;
  _objc_loadWeakRetained();
  lVar7 = param_6;
  if (lVar1 != 0) {
    lVar9 = (long)_DAT_112794724;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar9));
    dVar10 = param_3;
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126c4e78;
    if (0.0 < param_3) {
      uVar2 = *(undefined8 *)(param_4 + lVar9);
      func_0x00010c27dfe0(uVar2);
      uVar3 = *(undefined8 *)(param_4 + lVar9);
      func_0x00010c26b7a0(uVar3);
      uVar4 = *(undefined8 *)(param_4 + lVar9);
      func_0x00010c099180(uVar4);
      func_0x00010bf0e8a0(puVar5,param_5,uVar2,uVar3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_4 + lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar9));
      lVar7 = lVar8;
      func_0x00010bfb5820(dVar10,lVar8,param_5,param_6,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      _objc_release(lVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10b83bff0; end: 10b83c023; -[SIGCell setDetailTextTruncationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83bff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_112794764,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be929d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetDetailText_112582410);
  return;
}



/* Entry: 10b83c024; end: 10b83c0cf; -[SIGCell _resetDetailText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c024(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_4 + _DAT_112794764;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_112794724;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar3));
    _objc_release(lVar1);
    if (0.0 < param_3) {
      uVar2 = *(undefined8 *)(param_4 + lVar3);
      func_0x00010c26b700(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_4 + lVar3),param_5,0);
      func_0x00010c18c5c0(param_4,param_5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10b83c0d0; end: 10b83c0df; -[SIGCell attributedDetailText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c0d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794724),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 10b83c0e0; end: 10b83c1bf; -[SIGCell setAttributedDetailText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c0e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112794724;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_3) {
    _objc_release(lVar1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071b80();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      if (param_3 == 0) {
        func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        *(undefined8 *)(param_1 + lVar5) = 0;
        _objc_release(uVar4);
        func_0x00010beaab80(param_1);
      }
      else {
        func_0x00010bdecee0(param_1);
      }
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
      func_0x00010beda220(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83c1c0; end: 10b83c1ff; -[SIGCell emojiText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c1c0(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112794768) & 1) == 0) {
    func_0x00010c26b700(*(undefined8 *)(param_1 + _DAT_112794730));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83c200; end: 10b83c337; -[SIGCell setEmojiText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c200(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112794768;
  if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
    ppuVar2 = *(undefined ***)(param_1 + _DAT_112794730);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    func_0x00010c071ae0(ppuVar3,param_2,ppuVar1);
    _objc_release(ppuVar2);
    if (((ulong)ppuVar3 & 1) != 0) goto LAB_10b83c320;
  }
  if (param_3 == (undefined **)0x0) {
    lVar6 = (long)_DAT_112794730;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar4);
    func_0x00010beaab80(param_1);
  }
  else {
    func_0x00010bdeaa00(param_1,param_2,param_3,1);
    *(undefined1 *)(param_1 + lVar6) = 0;
  }
  puVar5 = PTR_PTR_1126b50b8;
  func_0x00010c27e000(PTR_PTR_1126b50b8,param_2,*(undefined8 *)(param_1 + _DAT_112794700));
  lVar6 = (long)_DAT_112794730;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6),param_2,puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010beda220(param_1);
LAB_10b83c320:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83c338; end: 10b83c34b; +[SIGCell typeStyleForEmojiTextWithStyle:] */

undefined8 FUN_10b83c338(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x13;
  if (param_3 != 1) {
    uVar1 = 0x17;
  }
  return uVar1;
}



/* Entry: 10b83c34c; end: 10b83c38f; -[SIGCell valueText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c34c(long param_1)

{
  if (*(char *)(param_1 + _DAT_112794768) == '\x01') {
    func_0x00010c26b700(*(undefined8 *)(param_1 + _DAT_112794730));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83c390; end: 10b83c4bb; -[SIGCell setValueText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c390(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112794768;
  if (*(char *)(param_1 + lVar6) == '\x01') {
    ppuVar2 = *(undefined ***)(param_1 + _DAT_112794730);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    func_0x00010c071ae0(ppuVar3,param_2,ppuVar1);
    _objc_release(ppuVar2);
    if (((ulong)ppuVar3 & 1) != 0) goto LAB_10b83c4a4;
  }
  if ((param_3 == (undefined **)0x0) ||
     (ppuVar3 = param_3, func_0x00010c08fa60(), ppuVar3 == (undefined **)0x0)) {
    lVar6 = (long)_DAT_112794730;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar4);
    func_0x00010beaab80(param_1);
  }
  else {
    func_0x00010bdeaa00(param_1,param_2,param_3,1);
    *(undefined1 *)(param_1 + lVar6) = 1;
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112794730;
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6),param_2,7);
  func_0x00010beda220(param_1);
LAB_10b83c4a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83c4bc; end: 10b83c4cb; -[SIGCell attributedValueText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794730),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 10b83c4cc; end: 10b83c5db; -[SIGCell setAttributedValueText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c4cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112794768;
  if (*(char *)(param_1 + lVar6) == '\x01') {
    lVar5 = (long)_DAT_112794730;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == param_3) {
      _objc_release(lVar1);
      goto LAB_10b83c5c4;
    }
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071b80();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) goto LAB_10b83c5c4;
  }
  if (param_3 == 0) {
    lVar6 = (long)_DAT_112794730;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar4);
    func_0x00010beaab80(param_1);
  }
  else {
    func_0x00010bdea9e0(param_1,param_2,0);
    *(undefined1 *)(param_1 + lVar6) = 1;
    lVar6 = (long)_DAT_112794730;
  }
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6),param_2,param_3);
  func_0x00010beda220(param_1);
LAB_10b83c5c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83c5dc; end: 10b83c7bb; -[SIGCell setBadgeText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c5dc(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11279476c;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd2518;
  if (*(undefined ***)(param_1 + lVar6) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_1 + lVar6);
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  func_0x00010c071ae0(ppuVar2,param_2,ppuVar1);
  if (((ulong)ppuVar2 & 1) == 0) {
    lVar7 = *(long *)(param_1 + lVar6);
    ppuVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined ***)(param_1 + lVar6) = ppuVar2;
    _objc_release(uVar5);
    if (param_3 == (undefined **)0x0) {
      if (lVar7 != 0) {
        func_0x00010c2194c0(param_1,param_2,0);
      }
    }
    else {
      puVar3 = PTR_PTR_1126aea58;
      _objc_alloc(PTR_PTR_1126aea58);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c213040(puVar3,param_2,1);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c21ad00(puVar3,param_2,0x18);
      puVar4 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4029000000000000);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar4);
      func_0x00010c212f20(puVar3,param_2,param_3);
      func_0x00010c165e00(puVar3,param_2,0);
      dVar8 = 1.79769313486232e+308;
      func_0x00010c23d5a0(0x7fefffffffffffff,0x4039000000000000,puVar3);
      func_0x00010c19f0e0(0,0,dVar8 + 25.0,0x4039000000000000,puVar3);
      func_0x00010c2194c0(param_1,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83c7bc; end: 10b83c7db; -[SIGCell setTextStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c7bc(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112794710) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794710) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec5b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylizeTextLabel_11258f078);
  return;
}



/* Entry: 10b83c7dc; end: 10b83c853; -[SIGCell setDestructive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c7dc(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(byte *)(param_1 + _DAT_112794770) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112794770) = (char)param_3;
  uVar1 = 0xd0;
  if (param_3 == 0) {
    uVar1 = 0xc6;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11279470c),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b83c854; end: 10b83c8c3; -[SIGCell setCentered:] */

/* WARNING: Possible PIC construction at 0x00010b83c8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b83c8a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c854(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112794774) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112794774) = (char)param_3;
  uVar1 = 4;
  if (param_3 != 0) {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279470c),PTR_s_setTextAlignment__112662638,uVar1);
  return;
}



/* Entry: 10b83c8c4; end: 10b83c92f; -[SIGCell setOptInForDynamicType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_5 + _DAT_112794778) = param_7;
  *(undefined1 *)(param_5 + _DAT_11279471c) = param_7;
  func_0x00010beda240();
  puVar1 = (undefined8 *)(param_5 + _DAT_112794704);
  func_0x00010bf69400(PTR_PTR_1126b50b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x00010beaab80(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b83c930; end: 10b83c93f; -[SIGCell _updateLabelTextScaling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beda250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateLabelTextScalingWithValue_112594238,
             *(undefined1 *)(param_1 + _DAT_11279471c));
  return;
}



/* Entry: 10b83c940; end: 10b83c997; -[SIGCell _updateLabelTextScalingWithValue:] */

/* WARNING: Possible PIC construction at 0x00010b83c968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b83c96c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83c940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c165e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279470c),
             PTR_s_setAdjustsFontForContentSizeCate_1126371a0);
  return;
}



/* Entry: 10b83c998; end: 10b83ca1f; -[SIGCell fetchedOrViewHierarchyTraitCollection] */

void FUN_10b83c998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c2795a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c2795a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_10b83ca0c;
  }
  func_0x00010c279540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
LAB_10b83ca0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b83ca20; end: 10b83cc33; -[SIGCell intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b83ca20(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  if (*(char *)(param_4 + _DAT_11279471c) == '\x01') {
    param_3 = *(double *)PTR__UIViewNoIntrinsicMetric_110345e70;
    dVar11 = param_3;
  }
  else {
    lVar1 = param_4;
    func_0x00010befdb60();
    if ((int)lVar1 == 0) {
      dVar10 = *(double *)(param_4 + _DAT_112794704);
      param_3 = dVar10 + ((double *)(param_4 + _DAT_112794704))[2];
      func_0x00010bfe0720(PTR_PTR_1126b50b8,param_5,*(undefined8 *)(param_4 + _DAT_112794700));
      dVar11 = *(double *)PTR__UIViewNoIntrinsicMetric_110345e70;
      param_3 = param_3 + dVar10;
    }
    else {
      lVar1 = param_4;
      _objc_opt_class(param_4);
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar3 = param_4;
      dVar11 = param_3;
      func_0x00010c25dfa0(param_4);
      lVar4 = param_4;
      func_0x00010c2716a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010bf6f6a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c26c880(param_4);
      lVar7 = param_4;
      func_0x00010bf154a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_4;
      func_0x00010c2792c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      lVar9 = param_4;
      dVar10 = dVar11;
      func_0x00010c08dda0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      func_0x00010c06e3c0(param_4);
      func_0x00010c252be0(param_3,0x7fefffffffffffff,dVar11,dVar10,lVar1,param_5,lVar3,lVar4,lVar5,
                          lVar6,lVar7,param_4);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar2);
    }
  }
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = dVar11;
  return auVar12;
}



/* Entry: 10b83cc34; end: 10b83cfdb; -[SIGCell sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b83cc34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined *puStack_a8;
  undefined *puStack_a0;
  
  if (param_5[_DAT_11279471c] == '\x01') {
    puVar4 = param_5;
    func_0x00010c297100();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_5;
    func_0x00010bf8e9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    if (param_5[_DAT_112794768] == '\0') {
      puVar5 = puVar4;
    }
    puVar7 = (undefined *)0x0;
    if (param_5[_DAT_112794768] == '\0') {
      puVar4 = (undefined *)0x0;
      puVar7 = puVar6;
    }
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b50b8;
    func_0x00010c25dfa0();
    puVar6 = param_5;
    func_0x00010c2716a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c880();
    puVar8 = param_5;
    func_0x00010bf6f6a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_5;
    func_0x00010bf154a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    func_0x00010c2792c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    puVar2 = param_5;
    uVar11 = param_3;
    uVar12 = param_4;
    func_0x00010c08dda0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010bfc8320();
    func_0x00010beee7c0();
    func_0x00010c06e3c0();
    func_0x00010befdb60();
    puVar3 = param_5;
    func_0x00010bfab8c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8c020(param_5);
    uVar10 = param_1;
    func_0x00010bf8bbc0(param_1,param_2,param_3,param_4,uVar11,uVar12,puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    param_3 = param_1;
    param_2 = uVar10;
  }
  else {
    puVar4 = param_5;
    func_0x00010befdb60();
    if ((int)puVar4 == 0) {
      puStack_a0 = PTR_PTR_11270b438;
      puStack_a8 = param_5;
      _objc_msgSendSuper2(param_1,param_2,&puStack_a8,PTR_s_sizeThatFits__11266cf90);
      goto LAB_10b83cfa8;
    }
    puVar4 = param_5;
    _objc_opt_class(param_5);
    func_0x00010c25dfa0(param_5);
    puVar5 = param_5;
    func_0x00010c2716a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_5;
    func_0x00010bf6f6a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c880(param_5);
    puVar7 = param_5;
    func_0x00010bf154a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_5;
    func_0x00010c2792c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    puVar9 = param_5;
    uVar10 = param_3;
    func_0x00010c08dda0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c06e3c0(param_5);
    func_0x00010c252be0(param_1,param_2,param_3,uVar10,puVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_2 = param_1;
  }
  param_1 = param_3;
  _objc_release(puVar4);
LAB_10b83cfa8:
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* Entry: 10b83cfdc; end: 10b83d0cf; +[SIGCell titleTextSizeThatFits:withText:andTitleTextStyle:isCentered:] */

undefined1  [16]
FUN_10b83cfdc(double param_1,undefined8 param_2,undefined8 param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_PTR_1126c4e78;
  dVar4 = param_1;
  _objc_retain(param_7);
  func_0x00010bed0a00(param_5,param_6,param_8);
  uVar1 = 4;
  if (param_9 != 0) {
    uVar1 = 1;
  }
  func_0x00010bf0e8a0(puVar2,param_6,param_5,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar3);
  func_0x00010bf20ba0(param_1,dVar4 + dVar4,param_7,param_6,3,puVar2,0);
  _objc_release(param_7);
  _objc_release(puVar2);
  auVar5._8_8_ = (long)param_4;
  auVar5._0_8_ = param_3;
  return auVar5;
}



/* Entry: 10b83d0d0; end: 10b83d21f; +[SIGCell titleDynamicTextSizeThatFits:withText:andTitleTextStyle:isCentered:adjustsHeightAccommodatingExtraLines:traitCollection:] */

undefined1  [16]
FUN_10b83d0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9,
             undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  puVar3 = PTR_PTR_1126c4e78;
  _objc_retain(param_11);
  _objc_retain(param_7);
  lVar2 = param_5;
  func_0x00010bed0a00(param_5,param_6,param_8);
  uVar1 = 4;
  if (param_9 != 0) {
    uVar1 = 1;
  }
  dVar5 = 21.0;
  func_0x00010bf0e900(0x4035000000000000,puVar3,param_6,lVar2,0,uVar1,0,1,param_11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  lVar2 = param_5;
  func_0x00010c26c2a0(param_5,param_6,param_10);
  puVar4 = puVar3;
  func_0x00010c0e00e0(puVar3,param_6,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar4);
  func_0x00010bf20ba0(param_1,dVar5 * (double)lVar2,param_7,param_6,3,puVar3,0);
  _objc_release(param_7);
  func_0x00010c141ec0(param_3,param_4,param_5);
  _objc_release(puVar3);
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 10b83d220; end: 10b83d2fb; +[SIGCell detailTextSizeThatFits:withText:isCentered:] */

undefined1  [16]
FUN_10b83d220(double param_1,undefined8 param_2,undefined8 param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_PTR_1126c4e78;
  uVar1 = 4;
  if (param_8 != 0) {
    uVar1 = 1;
  }
  dVar4 = param_1;
  _objc_retain(param_7);
  func_0x00010bf0e8a0(puVar2,param_6,0x17,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar3);
  func_0x00010bf20ba0(param_1,dVar4 * 6.0,param_7,param_6,3,puVar2,0);
  _objc_release(param_7);
  _objc_release(puVar2);
  auVar5._8_8_ = (long)param_4;
  auVar5._0_8_ = param_3;
  return auVar5;
}



/* Entry: 10b83d2fc; end: 10b83d433; +[SIGCell detailDynamicTextSizeThatFits:withText:isCentered:cellStyle:adjustsHeightAccommodatingExtraLines:traitCollection:] */

undefined1  [16]
FUN_10b83d2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  puVar2 = PTR_PTR_1126c4e78;
  uVar1 = 4;
  if (param_8 != 0) {
    uVar1 = 1;
  }
  _objc_retain(param_7);
  dVar5 = 18.0;
  func_0x00010bf0e900(0x4032000000000000,puVar2,param_6,0x17,0,uVar1,0,1,param_11);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf6f5c0(param_5,param_6,param_9,param_10);
  puVar4 = puVar2;
  func_0x00010c0e00e0(puVar2,param_6,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar4);
  func_0x00010bf20ba0(param_1,dVar5 * (double)lVar3,param_7,param_6,3,puVar2,0);
  _objc_release(param_7);
  func_0x00010c141ec0(param_3,param_4,param_5);
  _objc_release(puVar2);
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 10b83d434; end: 10b83d517; +[SIGCell badgeTextSizeThatFits:withText:] */

undefined1  [16]
FUN_10b83d434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_1126c4e78;
  uVar3 = param_1;
  _objc_retain(param_7);
  func_0x00010bf0e8a0(puVar1,param_6,0x18,1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar2);
  func_0x00010bf20ba0(param_1,uVar3,param_7,param_6,3,puVar1,0);
  _objc_release(param_7);
  func_0x00010c141ec0(param_3,param_4,param_5);
  _objc_release(puVar1);
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 10b83d518; end: 10b83d637; +[SIGCell alternateDynamicTextSizeThatFits:withText:typeStyle:adjustsHeightAccommodatingExtraLines:traitCollection:] */

undefined1  [16]
FUN_10b83d518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_PTR_1126c4e78;
  _objc_retain(param_7);
  dVar4 = 18.0;
  func_0x00010bf0e900(0x4032000000000000,puVar1,param_6,param_8,0,4,0,1,param_10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bf01e20(param_5,param_6,param_9);
  puVar3 = puVar1;
  func_0x00010c0e00e0(puVar1,param_6,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar3);
  func_0x00010bf20ba0(param_1,dVar4 * (double)lVar2,param_7,param_6,3,puVar1,0);
  _objc_release(param_7);
  func_0x00010c141ec0(param_3,param_4,param_5);
  _objc_release(puVar1);
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_3;
  return auVar5;
}



/* Entry: 10b83d638; end: 10b83d647; +[SIGCell textLabelLineCountWithAdjustsHeightAccommodatingExtraLines:] */

undefined8 FUN_10b83d638(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10b83d648; end: 10b83d663; +[SIGCell detailLabelLineCountWithCellStyle:adjustsHeightAccommodatingExtraLines:] */

undefined8 FUN_10b83d648(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 6;
  if (param_4 == 0) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_3 != 8) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10b83d664; end: 10b83d673; +[SIGCell alternateLabelLineCountWithAdjustsHeightAccommodatingExtraLines:] */

undefined8 FUN_10b83d664(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10b83d674; end: 10b83d67f; +[SIGCell computedHeightThatFits:cellStyle:titleText:detailText:titleTextStyle:badgeText:trailingAccessoryViewWidth:leadingAccessoryViewWidth:isCentered:] */

void FUN_10b83d674(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b50b8,PTR_s_staticLegacyComputedHeightThatFi_112672520);
  return;
}



/* Entry: 10b83d680; end: 10b83d7ef; +[SIGCell staticLegacyComputedHeightThatFits:cellStyle:titleText:detailText:titleTextStyle:badgeText:trailingAccessoryViewWidth:leadingAccessoryViewWidth:isCentered:] */

long FUN_10b83d680(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,long param_11,undefined8 param_12)

{
  double dVar1;
  double dVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  param_1 = param_1 + -32.0;
  if (param_11 == 0) {
    if (0.0 < param_3 + param_4) {
      dVar1 = param_1 - (param_3 + 16.0);
      if (param_3 <= 0.0) {
        dVar1 = param_1;
      }
      param_1 = dVar1;
      if (0.0 < param_4) {
        param_1 = dVar1 - (param_4 + 16.0);
      }
    }
  }
  else {
    dVar1 = 1.79769313486232e+308;
    func_0x00010bf154e0(0x7fefffffffffffff,0x4039000000000000,param_5,param_6,param_11);
    param_1 = param_1 - (dVar1 + -16.0);
  }
  dVar1 = param_2;
  func_0x00010c271740(param_1,param_2,param_5,param_6,param_8,param_10,param_12);
  if (param_9 != 0) {
    func_0x00010bf6f740(param_1,param_2,param_5,param_6,param_9,param_12);
    dVar2 = -5.0;
    if (param_7 != 8) {
      dVar2 = 3.0;
    }
    dVar1 = dVar1 + param_2 + dVar2 * 2.0;
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  return (long)(dVar1 + 32.0);
}



/* Entry: 10b83d7f0; end: 10b83d7ff; +[SIGCell trailingAccessoryViewTrailingMarginWithActionIndicator:edgeInsets:] */

undefined8 FUN_10b83d7f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 in_d3;
  
  if (param_3 != 0) {
    in_d3 = 0x4020000000000000;
  }
  return in_d3;
}



/* Entry: 10b83d800; end: 10b83d823; +[SIGCell edgeInsetsFromDefaultInsets:overridenEdgeInsets:] */

double FUN_10b83d800(double param_1)

{
  double in_d4;
  
  if (NAN(in_d4)) {
    in_d4 = param_1;
  }
  return in_d4;
}



/* Entry: 10b83d824; end: 10b83d857; +[SIGCell widthIncludingLeadMarginForOfficialBadgeType:hasAlternateLabelText:style:] */

long FUN_10b83d824(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_1 = 0.0;
  }
  else {
    func_0x00010c23d2e0(PTR_PTR_1126b50b8);
    param_1 = param_1 + 8.0;
  }
  return (long)param_1;
}



/* Entry: 10b83d858; end: 10b83d8af; +[SIGCell dynamicTypeComputedHeightThatFits:cellStyle:titleText:titleTextStyle:detailText:badgeText:valueText:emojiText:trailingAccessoryViewSize:leadingAccessoryViewSize:officialBadgeType:actionIndicator:isCentered:adjustsHeightAccommodatingExtraLines:dynamicTypeTraitCollection:] */

void FUN_10b83d858(void)

{
  func_0x00010bf8bbc0(PTR_PTR_1126b50b8);
  return;
}



/* Entry: 10b83d8b0; end: 10b83de8f; +[SIGCell dynamicTypeComputedHeightThatFits:cellStyle:titleText:titleTextStyle:detailText:badgeText:valueText:emojiText:trailingAccessoryViewSize:leadingAccessoryViewSize:officialBadgeType:actionIndicator:isCentered:adjustsHeightAccommodatingExtraLines:dynamicTypeTraitCollection:overriddenEdgeInsets:] */

double FUN_10b83d8b0(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,undefined8 param_7,undefined8 param_8,long param_9,
                    undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13,
                    undefined8 param_14,undefined8 param_15,long param_16,long param_17,
                    undefined4 param_18,undefined4 param_19,undefined8 param_20)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dStack_b0;
  
  dVar15 = param_1;
  dVar14 = param_2;
  dVar16 = param_3;
  dVar10 = param_4;
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_20);
  uVar3 = param_7;
  func_0x00010c26c240(param_7,param_8,param_14);
  uVar4 = param_7;
  func_0x00010c26c240(param_7,param_8,param_15);
  puVar5 = PTR_PTR_1126b50b8;
  func_0x00010bf69400(PTR_PTR_1126b50b8,param_8,1);
  func_0x00010bf8c080(puVar5);
  dVar9 = 0.0;
  dVar11 = param_1 - (param_5 + 8.0);
  dVar13 = dVar16 + param_6 + dVar15;
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  dVar12 = 0.0;
  if (0.0 < param_5) {
    param_1 = dVar11;
    dVar12 = dVar13;
  }
  dVar13 = dVar12;
  if (param_17 != 0) {
    func_0x00010c2794a0(PTR_PTR_1126b50b8,param_8,param_17);
    dVar10 = dVar9;
    func_0x00010c2794a0(PTR_PTR_1126b50b8,param_8,param_17);
    param_1 = param_1 - dVar10;
    puVar5 = PTR_PTR_1126b50b8;
    func_0x00010bfe7800(PTR_PTR_1126b50b8,param_8,param_17,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(puVar5);
    param_1 = param_1 - dVar10;
    dVar13 = dVar16 + dVar15 + dVar11;
    dVar10 = dVar9;
    if (dVar13 <= dVar12) {
      dVar13 = dVar12;
    }
  }
  if (param_13 == 0) {
    dStack_b0 = dVar13;
    if (0.0 < param_3) {
      dVar9 = dVar15;
      func_0x00010c279340(dVar15,dVar14,dVar16,dVar10,PTR_PTR_1126b50b8,param_8,param_17);
      param_1 = (param_1 - dVar9) - param_3;
      dStack_b0 = dVar16 + param_4 + dVar15;
      if (dStack_b0 <= dVar13) {
        dStack_b0 = dVar13;
      }
    }
  }
  else {
    dVar12 = 25.0;
    dVar9 = param_1;
    func_0x00010bf154e0(param_7,param_8,param_13);
    dVar11 = dVar15;
    func_0x00010c279340(dVar15,dVar14,dVar16,dVar10,PTR_PTR_1126b50b8,param_8,param_17);
    param_1 = (param_1 - (dVar9 + 25.0)) - dVar11;
    dStack_b0 = dVar16 + dVar15 + dVar12;
    if (dStack_b0 <= dVar13) {
      dStack_b0 = dVar13;
    }
  }
  dVar11 = dVar15;
  func_0x00010c0879c0(dVar15,dVar14,dVar16,dVar10,PTR_PTR_1126b50b8,param_8,param_9,0.0 < param_5);
  dVar9 = dVar15;
  func_0x00010c0879e0(dVar15,dVar14,dVar16,dVar10,PTR_PTR_1126b50b8,param_8,param_9,
                      0.0 < param_3 || param_17 != 0);
  dVar14 = (param_1 - dVar11) - dVar9;
  uVar6 = (uint)uVar3;
  uVar1 = uVar6 | (uint)uVar4;
  func_0x00010c2a5140(param_7,param_8,param_16,uVar1 & 1,param_9);
  dVar9 = dVar14 - dVar9;
  dVar15 = dVar15 + dVar16;
  uVar3 = param_7;
  func_0x00010c26c240(param_7,param_8,param_10);
  func_0x00010c26c240(param_7,param_8,param_12);
  param_2 = param_2 - dVar15;
  uVar8 = (uint)uVar3;
  uVar7 = (uint)param_7;
  if (param_9 == 1) {
    dVar16 = 0.0;
    if (uVar8 != 0) {
      dVar16 = param_2;
      func_0x00010c271280(dVar9,PTR_PTR_1126b50b8,param_8,param_10,param_11,(undefined1)param_18,
                          param_18._1_1_,param_20);
      dVar16 = dVar16 + 0.0;
    }
    if (uVar7 == 0) {
      if ((uVar1 & 1) != 0) {
        dVar10 = dVar16 + 4.0;
        if (uVar8 == 0) {
          dVar10 = dVar16;
        }
        uVar3 = param_14;
        if (uVar6 == 0) {
          uVar3 = param_15;
        }
        uVar4 = 7;
        if (uVar6 == 0) {
          uVar4 = 0x13;
        }
        _objc_retain(uVar3);
        func_0x00010bf01dc0(dVar14,PTR_PTR_1126b50b8,param_8,uVar3,uVar4,param_18._1_1_,param_20);
        dVar16 = dVar10 + param_2;
        _objc_release(uVar3);
      }
    }
    else {
      param_2 = param_2 - dVar16;
      func_0x00010bf6f540(dVar14,PTR_PTR_1126b50b8,param_8,param_12,(undefined1)param_18,1,
                          param_18._1_1_,param_20);
      dVar16 = dVar16 + param_2;
    }
  }
  else {
    puVar5 = PTR_PTR_1126b50b8;
    func_0x00010c08df00(PTR_PTR_1126b50b8,param_8,param_20);
    dVar16 = 0.0;
    if ((uVar1 & 1) != 0) {
      uVar2 = (uint)puVar5;
      uVar1 = uVar2;
      if (((uVar8 | uVar7) & 1) == 0) {
        uVar1 = param_16 == 0 | uVar2;
      }
      dVar11 = dVar14;
      dVar10 = dVar9;
      if ((uVar1 & 1) == 0) {
        dVar11 = dVar14 + -8.0;
        dVar10 = dVar9 + -8.0;
      }
      dVar16 = dVar10;
      if (dVar11 <= dVar10) {
        dVar16 = dVar11;
      }
      if (((uVar2 | (uVar8 | uVar7) ^ 0xffffffff) & 1) == 0) {
        dVar16 = dVar16 - (double)(long)(dVar14 * 0.3);
      }
      uVar3 = param_14;
      if (uVar6 == 0) {
        uVar3 = param_15;
      }
      uVar4 = 7;
      if (uVar6 == 0) {
        uVar4 = 0x17;
      }
      _objc_retain(uVar3);
      dVar13 = param_2;
      func_0x00010bf01dc0(dVar16,PTR_PTR_1126b50b8,param_8,uVar3,uVar4,param_18._1_1_,param_20);
      dVar12 = dVar15 + dVar13;
      if (dVar15 + dVar13 <= dStack_b0) {
        dVar12 = dStack_b0;
      }
      dVar14 = dVar11 - dVar16;
      dVar9 = dVar10 - dVar16;
      dVar16 = 0.0;
      if (uVar2 != 0) {
        dVar14 = dVar11;
        dVar12 = dStack_b0;
        dVar9 = dVar10;
        dVar16 = dVar13 + 4.0;
      }
      dStack_b0 = dVar12;
      _objc_release(uVar3);
    }
    if (uVar8 != 0) {
      dVar10 = param_2;
      func_0x00010c271280(dVar9,PTR_PTR_1126b50b8,param_8,param_10,param_11,(undefined1)param_18,
                          param_18._1_1_,param_20);
      dVar16 = dVar16 + dVar10;
    }
    if (uVar7 != 0) {
      param_2 = param_2 - dVar16;
      func_0x00010bf6f540(dVar14,PTR_PTR_1126b50b8,param_8,param_12,(undefined1)param_18,param_9,
                          param_18._1_1_,param_20);
      dVar16 = dVar16 + param_2;
    }
  }
  dVar14 = dVar15 + dVar16;
  if (dVar15 + dVar16 <= dStack_b0) {
    dVar14 = dStack_b0;
  }
  dVar15 = (double)(long)dVar14;
  if (dVar15 <= 44.0) {
    dVar15 = 44.0;
  }
  _objc_release(param_20);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  return dVar15;
}



/* Entry: 10b83de90; end: 10b83df2b; +[SIGCell computedHeightThatFits:titleText:detailText:titleTextStyle:isCentered:] */

undefined8
FUN_10b83de90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_class(param_3);
  func_0x00010bf45a40(param_1,param_2,0,0);
  _objc_release(param_6);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 10b83df2c; end: 10b83e07f; -[SIGCell _createDetailsLabelIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83df2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794724;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1c3ae0(0x4032000000000000);
  func_0x00010bf6f5c0(PTR_PTR_1126b50b8);
  func_0x00010c1cfce0(puVar1);
  func_0x00010c219b60(puVar1);
  func_0x00010c21ad00(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  func_0x00010c181cc0(0x443b8000,puVar1);
  if (*(char *)(param_1 + _DAT_112794774) == '\x01') {
    func_0x00010c213040(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beaab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupAutolayoutConstraints_112588488);
  return;
}



/* Entry: 10b83e080; end: 10b83e087; -[SIGCell _createAlternateLabelIfNeededWithText:] */

void FUN_10b83e080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeaa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createAlternateLabelIfNeededWit_112558420,param_3,0);
  return;
}



/* Entry: 10b83e088; end: 10b83e0fb; -[SIGCell _createAlternateLabelIfNeededWithText:setLowHorizontalCompressionResistance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83e088(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdeaa20(param_1);
  lVar1 = (long)_DAT_112794730;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_3);
  if (param_4 != 0) {
    func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupAutolayoutConstraints_112588488);
  return;
}



/* Entry: 10b83e0fc; end: 10b83e1f7; -[SIGCell _createAlternateLabelIfNeededWithoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83e0fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794730;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1c3ae0(0x4032000000000000);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,4);
  if (*(long *)(param_1 + _DAT_112794700) != 1) {
    func_0x00010c213040(puVar1,param_2,0);
  }
  puVar2 = PTR_PTR_1126b50b8;
  func_0x00010bf01e20(PTR_PTR_1126b50b8,param_2,*(undefined1 *)(param_1 + _DAT_112794738));
  func_0x00010c1cfce0(puVar1,param_2,puVar2);
  func_0x00010c23d620(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b83e1f8; end: 10b83e263; -[SIGCell _setupAutolayoutConstraints] */

void FUN_10b83e1f8(undefined8 param_1)

{
  func_0x00010bed5bc0();
  func_0x00010bed5c80(param_1);
  func_0x00010bed5c40(param_1);
  func_0x00010bed5d80(param_1);
  func_0x00010bed5cc0(param_1);
  func_0x00010bed5c00(param_1);
  func_0x00010bed5b60(param_1);
  func_0x00010bed5da0(param_1);
  func_0x00010bed5b40(param_1);
  func_0x00010bed6c60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed5c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraintsForLeadingAcce_1125930c0);
  return;
}



/* Entry: 10b83e264; end: 10b83e33f; -[SIGCell _updateConstraintsForContentView] */

/* WARNING: Possible PIC construction at 0x00010b83e314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b83e318) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83e264(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11279477c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  if (*(char *)(param_1 + _DAT_11279471c) == '\x01') {
    if ((uVar1 != 0) && (func_0x00010c06b700(), (uVar1 & 1) != 0)) {
      return;
    }
    lVar2 = param_1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf494e0(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    func_0x00010c1e3380(0x4479c000,*(undefined8 *)(param_1 + lVar5));
    uVar1 = *(ulong *)(param_1 + lVar5);
    uVar4 = 1;
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setActive__112636340,uVar4);
  return;
}



/* Entry: 10b83e340; end: 10b83e3db; -[SIGCell _updateConstraintsForLeadingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83e340(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794780;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + _DAT_11279473c) != 0) {
    func_0x00010be0a520(param_1);
    lVar2 = param_1;
    func_0x00010bde67a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_1 + lVar3));
    return;
  }
  return;
}



/* Entry: 10b83e3dc; end: 10b83e45b; -[SIGCell _ensureInjectedViewHasSIGCellAsSuperview:] */

void FUN_10b83e3dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c12c960(param_3);
    func_0x00010c219b60(param_3,param_2,0);
    func_0x00010befbb60(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83e45c; end: 10b83e7fb; -[SIGCell _constraintsForLeadingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83e45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11279473c;
  uVar1 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010bf348e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_5;
  func_0x00010c08de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
  uVar5 = uVar4;
  func_0x00010bf49420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar14);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(uVar1);
  lVar8 = *(long *)(param_5 + lVar15);
  if (*(char *)(param_5 + _DAT_11279471c) == '\x01') {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112794704;
    lVar9 = lVar8;
    func_0x00010bf49480(*(undefined8 *)(param_5 + lVar12));
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_5 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_5;
    func_0x00010bf1ff80(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010bf49520(-(double)((undefined8 *)(param_5 + lVar12))[2]);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_5 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
    uVar3 = uVar2;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c14d8a0(0x4479c000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar13);
    _objc_release(lVar10);
    _objc_release(uVar1);
    _objc_release(lVar9);
  }
  else {
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
    lVar14 = lVar8;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  lVar14 = (long)_DAT_112794784;
  if (*(long *)(lVar8 + lVar14) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar11 = lVar8;
  func_0x00010bde6780();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar8 + lVar14);
  *(long *)(lVar8 + lVar14) = lVar11;
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(lVar8 + lVar14));
  return;
}



/* Entry: 10b83e7fc; end: 10b83e863; -[SIGCell _updateConstraintsForLabelsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83e7fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794784;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar1 = param_1;
  func_0x00010bde6780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10b83e864; end: 10b83ee1f; -[SIGCell _constraintsForLabelsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b83e864(double param_1,long param_2,undefined8 param_3)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11279473c;
  lVar3 = *(long *)(param_2 + lVar17);
  if (lVar3 == 0) {
    lVar3 = param_2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar20 = (long)_DAT_11279471c;
  if (*(char *)(param_2 + lVar20) == '\x01') {
    pdVar1 = (double *)(param_2 + _DAT_112794704);
    param_1 = *pdVar1;
    func_0x00010c0879c0(param_1,pdVar1[1],pdVar1[2],pdVar1[3],PTR_PTR_1126b50b8,param_3,
                        *(undefined8 *)(param_2 + _DAT_112794700),*(long *)(param_2 + lVar17) != 0);
  }
  else {
    func_0x00010be46c40(param_2);
  }
  lVar18 = (long)_DAT_11279474c;
  lVar17 = *(long *)(param_2 + lVar18);
  if (lVar17 == 0) {
    lVar17 = *(long *)(param_2 + _DAT_112794754);
    if (lVar17 == 0) {
      lVar17 = param_2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      dVar22 = 0.0;
      if ((*(byte *)(param_2 + lVar20) & 1) == 0) {
        dVar22 = *(double *)(param_2 + _DAT_112794704 + 0x18);
      }
      goto LAB_10b83e970;
    }
  }
  dVar21 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 0.0;
  if ((*(byte *)(param_2 + lVar20) & 1) == 0) {
    func_0x00010be46c60(param_2);
    dVar22 = dVar21;
  }
LAB_10b83e970:
  if (*(char *)(param_2 + lVar20) == '\x01') {
    if (*(long *)(param_2 + lVar18) == 0) {
      bVar2 = *(long *)(param_2 + _DAT_112794754) != 0;
    }
    else {
      bVar2 = true;
    }
    pdVar1 = (double *)(param_2 + _DAT_112794704);
    dVar22 = *pdVar1;
    func_0x00010c0879e0(dVar22,pdVar1[1],pdVar1[2],pdVar1[3],PTR_PTR_1126b50b8,param_3,
                        *(undefined8 *)(param_2 + _DAT_112794700),bVar2);
  }
  lVar19 = (long)_DAT_112794708;
  uVar4 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar19);
  uStack_90 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = -dVar22;
  uVar7 = uVar6;
  func_0x00010bf493c0(dVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar19);
  uStack_88 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x00010bf348e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0(uVar8,param_3,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_90,3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar14;
  func_0x00010c0d3c80();
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(lVar18);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(char *)(param_2 + lVar20) == '\x01') {
    puVar11 = *(undefined **)(param_2 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2;
    func_0x00010c274200(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112794704;
    puVar14 = puVar11;
    func_0x00010bf49480(*(undefined8 *)(param_2 + lVar16),puVar11,param_3,lVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar20);
    _objc_release(puVar11);
    lVar12 = *(long *)(param_2 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2;
    func_0x00010bf1ff80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar12;
    func_0x00010bf49520(-(double)((undefined8 *)(param_2 + lVar16))[2],lVar12,param_3,lVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar20);
    _objc_release(lVar12);
    puVar13 = *(undefined **)(param_2 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    dVar22 = 5.49408334062176e-315;
    puVar11 = puVar15;
    func_0x00010c14d8a0(0x42480000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar13);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar14;
    lStack_a0 = lVar18;
    puStack_98 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_a8,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar10,param_3,puVar15);
    _objc_release(puVar15);
    param_2 = lVar18;
  }
  else {
    lVar20 = param_2;
    func_0x00010befdb60();
    puVar14 = *(undefined **)(param_2 + lVar19);
    if ((int)lVar20 == 0) {
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0660(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010bf493a0(puVar14,param_3,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar10,param_3,puVar11);
    }
    else {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_2;
      func_0x00010c274200(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf493c0(param_1,puVar14,param_3,lVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar20);
      _objc_release(puVar14);
      lVar18 = *(long *)(param_2 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80(param_2);
      _objc_retainAutoreleasedReturnValue();
      dVar22 = -param_1;
      lVar20 = lVar18;
      func_0x00010bf493c0(dVar22,lVar18,param_3,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(lVar18);
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar15;
      lStack_b0 = lVar20;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_b8,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar10,param_3,puVar11);
      puVar14 = puVar15;
      param_2 = lVar20;
    }
  }
  _objc_release(puVar11);
  _objc_release(param_2);
  _objc_release(puVar14);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return dVar22;
  }
  ___stack_chk_fail();
  dVar22 = 4.0;
  if ((*(long *)(lVar3 + _DAT_112794700) != 1) &&
     (dVar22 = 8.0, *(long *)(lVar3 + _DAT_11279473c) == 0)) {
    return *(double *)(lVar3 + _DAT_112794704 + 8);
  }
  return dVar22;
}



/* Entry: 10b83ee20; end: 10b83ee63; -[SIGCell _labelsContainerLeadingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b83ee20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4010000000000000;
  if ((*(long *)(param_1 + _DAT_112794700) != 1) &&
     (uVar1 = 0x4020000000000000, *(long *)(param_1 + _DAT_11279473c) == 0)) {
    return *(undefined8 *)(param_1 + _DAT_112794704 + 8);
  }
  return uVar1;
}



/* Entry: 10b83ee64; end: 10b83ee83; -[SIGCell _labelsContainerTrailingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b83ee64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4010000000000000;
  if (*(long *)(param_1 + _DAT_112794700) != 1) {
    uVar1 = 0x4030000000000000;
  }
  return uVar1;
}



/* Entry: 10b83ee84; end: 10b83ee9f; +[SIGCell labelsContainerLeadingMarginWithStyle:hasLeadingAccessoryView:cellEdgeInsets:] */

undefined8
FUN_10b83ee84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4020000000000000;
  if (param_6 == 0) {
    uVar1 = param_2;
  }
  uVar2 = 0x4010000000000000;
  if (param_5 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10b83eea0; end: 10b83eebb; +[SIGCell labelsContainerTrailingMarginWithStyle:hasTrailingAccessoryOrActionView:cellEdgeInsets:] */

undefined8 FUN_10b83eea0(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 in_d3;
  
  uVar1 = 0x4010000000000000;
  if (param_3 != 1) {
    uVar1 = 0x4030000000000000;
  }
  if (param_4 == 0) {
    uVar1 = in_d3;
  }
  return uVar1;
}



/* Entry: 10b83eebc; end: 10b83ef23; -[SIGCell _updateConstraintsForTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83eebc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794788;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar1 = param_1;
  func_0x00010bde67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10b83ef24; end: 10b83f02f; -[SIGCell _dynamicTypeTitleLabelTrailingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83ef24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + _DAT_112794730) == 0) || (*(long *)(param_1 + _DAT_112794700) == 1)) &&
     (*(long *)(param_1 + _DAT_112794760) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11279470c);
    func_0x00010c2793a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794708);
    func_0x00010c2793a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf493a0(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11279470c);
    func_0x00010c2793a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794708);
    func_0x00010c2793a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf49500(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b83f030; end: 10b83f233; -[SIGCell _dynamicTypeConstraintsForTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83f030(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar16 = (long)_DAT_11279470c;
  puVar2 = *(undefined **)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112794708;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06d60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar10);
  _objc_release(puVar9);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  iVar1 = _DAT_11279470c;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar2[_DAT_11279471c] == '\x01') {
    func_0x00010be06d00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    puVar10 = puVar2;
  }
  else {
    lVar15 = (long)_DAT_112794730;
    if ((*(long *)(puVar2 + lVar15) == 0) || (*(long *)(puVar2 + _DAT_112794700) == 1)) {
      puVar10 = *(undefined **)(puVar2 + _DAT_11279470c);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = (long)_DAT_112794708;
      uVar14 = *(undefined8 *)(puVar2 + lVar16);
      func_0x00010c2793a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar10 = *(undefined **)(puVar2 + _DAT_11279470c);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = (long)_DAT_112794708;
      uVar14 = *(undefined8 *)(puVar2 + lVar16);
      func_0x00010c2793a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar18 = (long)iVar1;
    _objc_release(uVar14);
    _objc_release(puVar10);
    uVar3 = *(undefined8 *)(puVar2 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + lVar16);
    func_0x00010bf348e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar2 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar2 + lVar16);
    func_0x00010c08de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0d3c80();
    _objc_release(puVar9);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(uVar5);
    _objc_release(uVar3);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010befa120(puVar10);
    }
    lVar17 = (long)_DAT_112794700;
    if ((*(long *)(puVar2 + lVar17) == 1) && (lVar15 = *(long *)(puVar2 + lVar15), lVar15 != 0)) {
      _objc_retain(lVar15);
LAB_10b83f4cc:
      uVar14 = 0xc014000000000000;
      if (*(long *)(puVar2 + lVar17) != 8) {
        uVar14 = 0x4008000000000000;
      }
      uVar3 = *(undefined8 *)(puVar2 + lVar18);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(puVar2 + lVar16);
      func_0x00010c08de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(uVar12);
      _objc_release(uVar5);
      _objc_release(uVar3);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010befa120(puVar11);
      }
      puVar10 = puVar2;
      func_0x00010befdb60();
      uVar12 = *(undefined8 *)(puVar2 + lVar18);
      if ((int)puVar10 == 0) {
        func_0x00010bf1ff80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(puVar2 + lVar16);
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar12;
        func_0x00010bf493c0(uVar14,uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
      }
      else {
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(puVar2 + lVar16);
        func_0x00010c274200(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar12;
        func_0x00010bf493a0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(uVar14);
        _objc_release(uVar3);
        _objc_release(uVar12);
        uVar12 = *(undefined8 *)(puVar2 + lVar18);
        func_0x00010bf1ff80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(puVar2 + lVar16);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar12;
        func_0x00010bf493a0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar3;
        func_0x00010c14d8a0(0x443b4000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(uVar14);
      }
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar12);
      _objc_retain(puVar11);
      _objc_release(lVar15);
      puVar10 = puVar11;
    }
    else {
      lVar15 = *(long *)(puVar2 + _DAT_112794724);
      _objc_retain(lVar15);
      if (lVar15 != 0) goto LAB_10b83f4cc;
      puVar9 = puVar2;
      func_0x00010befdb60();
      if (((ulong)puVar9 & 1) != 0) {
        lVar15 = 0;
        goto LAB_10b83f4cc;
      }
      _objc_retain(puVar10);
    }
    _objc_release(puVar10);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lVar13 = (long)_DAT_11279478c;
    if (*(long *)(puVar4 + lVar13) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    puVar10 = puVar4;
    func_0x00010bde6760();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar4 + lVar13);
    *(undefined **)(puVar4 + lVar13) = puVar10;
    _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(puVar4 + lVar13));
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b83f234; end: 10b83f743; -[SIGCell _constraintsForTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83f234(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  iVar1 = _DAT_11279470c;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[_DAT_11279471c] == '\x01') {
    func_0x00010be06d00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    puVar8 = param_1;
    goto LAB_10b83f6f0;
  }
  lVar12 = (long)_DAT_112794730;
  if ((*(long *)(param_1 + lVar12) == 0) || (*(long *)(param_1 + _DAT_112794700) == 1)) {
    puVar2 = *(undefined **)(param_1 + _DAT_11279470c);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112794708;
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c2793a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + _DAT_11279470c);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112794708;
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c2793a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar16 = (long)iVar1;
  _objc_release(uVar13);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010befa120(puVar8);
  }
  lVar15 = (long)_DAT_112794700;
  if (*(long *)(param_1 + lVar15) == 1) {
    lVar12 = *(long *)(param_1 + lVar12);
    if (lVar12 == 0) goto LAB_10b83f4a0;
    _objc_retain(lVar12);
LAB_10b83f4cc:
    uVar13 = 0xc014000000000000;
    if (*(long *)(param_1 + lVar15) != 8) {
      uVar13 = 0x4008000000000000;
    }
    uVar4 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c08de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010befa120(puVar9);
    }
    puVar2 = param_1;
    func_0x00010befdb60();
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    if ((int)puVar2 == 0) {
      func_0x00010bf1ff80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf493c0(uVar13,uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
    }
    else {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c274200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar10;
      func_0x00010bf493a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_release(uVar10);
      uVar10 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010bf1ff80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf493a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010c14d8a0(0x443b4000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(uVar13);
    }
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_retain(puVar9);
    _objc_release(lVar12);
    puVar8 = puVar9;
  }
  else {
LAB_10b83f4a0:
    lVar12 = *(long *)(param_1 + _DAT_112794724);
    _objc_retain(lVar12);
    if (lVar12 != 0) goto LAB_10b83f4cc;
    puVar2 = param_1;
    func_0x00010befdb60();
    if (((ulong)puVar2 & 1) != 0) {
      lVar12 = 0;
      goto LAB_10b83f4cc;
    }
    _objc_retain(puVar8);
  }
  _objc_release(puVar8);
  _objc_release();
LAB_10b83f6f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_11279478c;
  if (*(long *)(puVar3 + lVar11) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar2 = puVar3;
  func_0x00010bde6760();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar3 + lVar11);
  *(undefined **)(puVar3 + lVar11) = puVar2;
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(puVar3 + lVar11));
  return;
}



/* Entry: 10b83f744; end: 10b83f7ab; -[SIGCell _updateConstraintsForDetailLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83f744(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11279478c;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar1 = param_1;
  func_0x00010bde6760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10b83f7ac; end: 10b83f8a7; -[SIGCell _dynamicTypeDetailLabelTrailingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83f7ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + _DAT_112794730) == 0) || (*(long *)(param_1 + _DAT_112794700) == 1)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794724);
    func_0x00010c2793a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794708);
    func_0x00010c2793a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf493a0(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794724);
    func_0x00010c2793a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794708);
    func_0x00010c2793a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf49500(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b83f8a8; end: 10b83faaf; -[SIGCell _dynamicTypeConstraintsForDetailsLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83f8a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar17 = (long)_DAT_112794724;
  puVar2 = *(undefined **)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11279470c);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112794708;
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06d20();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar13);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_112794724;
  puVar8 = *(undefined **)(puVar2 + lVar16);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar8 != (undefined *)0x0) {
    if (puVar2[_DAT_11279471c] == '\x01') {
      func_0x00010be06ce0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      puVar1 = puVar2;
    }
    else {
      if ((*(long *)(puVar2 + _DAT_112794730) == 0) ||
         (lVar17 = (long)_DAT_112794700, *(long *)(puVar2 + lVar17) == 1)) {
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_112794708;
        uVar15 = *(undefined8 *)(puVar2 + lVar18);
        func_0x00010c2793a0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(puVar8);
        lVar17 = (long)_DAT_112794700;
        puVar8 = puVar1;
      }
      else {
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_112794708;
        uVar15 = *(undefined8 *)(puVar2 + lVar18);
        func_0x00010c2793a0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar8;
        func_0x00010bf49500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(puVar8);
        puVar8 = puVar1;
      }
      dVar19 = -5.0;
      if (*(long *)(puVar2 + lVar17) != 8) {
        dVar19 = 3.0;
      }
      uVar9 = *(undefined8 *)(puVar2 + lVar16);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(puVar2 + lVar18);
      func_0x00010c08de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar13;
      func_0x00010c0d3c80();
      _objc_release(puVar13);
      _objc_release(uVar15);
      _objc_release(uVar3);
      _objc_release(uVar9);
      puVar13 = puVar2;
      func_0x00010befdb60();
      puVar10 = *(undefined **)(puVar2 + lVar16);
      if ((int)puVar13 == 0) {
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = *(undefined **)(puVar2 + lVar18);
        func_0x00010bf348e0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar10;
        func_0x00010bf493c0(dVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
LAB_10b83fe8c:
        _objc_release(puVar2);
        _objc_release(puVar13);
        _objc_release(puVar10);
      }
      else {
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(puVar2 + lVar18);
        func_0x00010bf1ff80(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010bf493a0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar13);
        _objc_release(uVar15);
        _objc_release(puVar10);
        uVar9 = *(undefined8 *)(puVar2 + lVar16);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(puVar2 + _DAT_11279470c);
        func_0x00010bf1ff80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar9;
        func_0x00010bf493c0(dVar19 + dVar19,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar15);
        _objc_release(uVar3);
        _objc_release(uVar9);
        puVar13 = puVar2;
        func_0x00010c26c280();
        _objc_retainAutoreleasedReturnValue();
        if (puVar13 != (undefined *)0x0) {
          puVar10 = puVar2;
          func_0x00010bf6f5a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar13);
          if (puVar10 != (undefined *)0x0) {
            puVar10 = puVar2;
            func_0x00010bf6f5a0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar10;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26c280();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar2;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar13;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            _objc_release(puVar11);
            puVar8 = puVar12;
            goto LAB_10b83fe8c;
          }
        }
      }
      func_0x00010befa120(puVar1);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = (long)_DAT_112794790;
    if (*(long *)(puVar8 + lVar14) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    puVar1 = puVar8;
    func_0x00010bde66c0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar8 + lVar14);
    *(undefined **)(puVar8 + lVar14) = puVar1;
    _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(puVar8 + lVar14));
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b83fab0; end: 10b83fefb; -[SIGCell _constraintsForDetailsLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83fab0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112794724;
  puVar1 = *(undefined **)(param_1 + lVar12);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 == (undefined *)0x0) goto LAB_10b83feb8;
  if (param_1[_DAT_11279471c] == '\x01') {
    func_0x00010be06ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    puVar2 = param_1;
    goto LAB_10b83feb8;
  }
  if ((*(long *)(param_1 + _DAT_112794730) == 0) ||
     (lVar11 = (long)_DAT_112794700, *(long *)(param_1 + lVar11) == 1)) {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112794708;
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c2793a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(puVar1);
    lVar11 = (long)_DAT_112794700;
    puVar1 = puVar2;
  }
  else {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112794708;
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c2793a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(puVar1);
    puVar1 = puVar2;
  }
  dVar14 = -5.0;
  if (*(long *)(param_1 + lVar11) != 8) {
    dVar14 = 3.0;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c0d3c80();
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar8 = param_1;
  func_0x00010befdb60();
  puVar5 = *(undefined **)(param_1 + lVar12);
  if ((int)puVar8 == 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(param_1 + lVar13);
    func_0x00010bf348e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar5;
    func_0x00010bf493c0(dVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
LAB_10b83fe8c:
    _objc_release(param_1);
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  else {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf1ff80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar10);
    _objc_release(puVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11279470c);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493c0(dVar14 + dVar14,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar8 = param_1;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      puVar5 = param_1;
      func_0x00010bf6f5a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      if (puVar5 != (undefined *)0x0) {
        puVar5 = param_1;
        func_0x00010bf6f5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26c280();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar6);
        puVar1 = puVar7;
        goto LAB_10b83fe8c;
      }
    }
  }
  func_0x00010befa120(puVar2);
  _objc_release();
LAB_10b83feb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = (long)_DAT_112794790;
    if (*(long *)(puVar1 + lVar9) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    puVar2 = puVar1;
    func_0x00010bde66c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar1 + lVar9);
    *(undefined **)(puVar1 + lVar9) = puVar2;
    _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(puVar1 + lVar9));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b83fefc; end: 10b83ff63; -[SIGCell _updateConstraintsForAlternateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83fefc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794790;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar1 = param_1;
  func_0x00010bde66c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10b83ff64; end: 10b840643; -[SIGCell _constraintsForAlternateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83ff64(long param_1)

{
  char cVar1;
  long lVar2;
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
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112794730;
  lVar2 = *(long *)(param_1 + lVar19);
  puVar13 = PTR____NSArray0__struct_11034ab48;
  if ((lVar2 == 0) || (uVar17 = *(ulong *)(param_1 + _DAT_112794700), 8 < uVar17))
  goto LAB_10b840354;
  if ((1L << (uVar17 & 0x3f) & 0x1bdU) == 0) {
    if (uVar17 != 1) goto LAB_10b840354;
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar11 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112794708;
    uVar5 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c08de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c2793a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar13);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar11);
    cVar1 = *(char *)(param_1 + _DAT_11279471c);
    lVar2 = *(long *)(param_1 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    lVar3 = lVar2;
    if (cVar1 == '\x01') {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + _DAT_11279470c);
      func_0x00010bf1ff80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf49480(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar13);
      _objc_release(puVar15);
      _objc_release(uVar11);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar14);
      _objc_release(uVar12);
      goto LAB_10b840338;
    }
    func_0x00010bf348e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0x4008000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar13);
  }
  else {
    if (*(char *)(param_1 + _DAT_11279471c) == '\x01') {
      lVar2 = param_1;
      func_0x00010bf8d060();
      puVar13 = PTR_PTR_1126b50b8;
      if (lVar2 == 1) {
        lVar2 = param_1;
        func_0x00010bfab8c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08df00();
        _objc_release(lVar2);
        if ((int)puVar13 == 0) goto LAB_10b840218;
        lVar3 = *(long *)(param_1 + lVar19);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_112794708;
        uVar4 = *(undefined8 *)(param_1 + lVar18);
        func_0x00010c2793a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010bf49500();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_10b840218:
        lVar3 = *(long *)(param_1 + lVar19);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_112794708;
        uVar4 = *(undefined8 *)(param_1 + lVar18);
        func_0x00010c2793a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar4);
      _objc_release(lVar3);
      uVar4 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar11;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar11);
    }
    else {
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = (long)_DAT_112794708;
      uVar4 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c2793a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c274200(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar14);
      _objc_release(uVar6);
    }
LAB_10b840338:
    _objc_release(uVar5);
  }
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release();
LAB_10b840354:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    lVar16 = (long)_DAT_112794794;
    if (*(long *)(lVar2 + lVar16) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    lVar19 = lVar2;
    func_0x00010bde6740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + lVar16);
    *(long *)(lVar2 + lVar16) = lVar19;
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(lVar2 + lVar16));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10b840644; end: 10b8406ab; -[SIGCell _updateDependentLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b840644(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794794;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar1 = param_1;
  func_0x00010bde6740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10b8406ac; end: 10b8409eb; -[SIGCell _constraintsForDependentLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8406ac(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_1[_DAT_11279471c] == '\x01') {
    func_0x00010be06ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
  }
  else {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    func_0x00010c0d3c80(PTR____NSArray0__struct_11034ab48);
    puVar2 = param_1;
    func_0x00010bf01e00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = param_1;
      func_0x00010c26c280();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        lVar8 = *(long *)(param_1 + _DAT_112794700);
        _objc_release();
        _objc_release(puVar2);
        if (lVar8 == 1) goto LAB_10b8409d0;
        puVar2 = param_1;
        func_0x00010bf01e00(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_1;
        func_0x00010c26c280(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf49480(0x4020000000000000,puVar3,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = param_1;
        func_0x00010bf6f5a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined *)0x0) {
          puVar2 = param_1;
          func_0x00010bf01e00(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_1;
          func_0x00010bf6f5a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf49480(0x4020000000000000,puVar3,param_2,puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
        }
        puVar2 = param_1;
        func_0x00010bf01e00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          puVar4 = param_1;
          func_0x00010bf01e00();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c08fa60();
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if (puVar6 == (undefined *)0x0) goto LAB_10b8409d0;
          puVar2 = param_1;
          func_0x00010c26c280(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_1 + _DAT_112794708);
          func_0x00010c2a5060(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf494c0(0x3fd3333333333333,0,puVar3,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(uVar7);
          _objc_release(puVar3);
          _objc_release(puVar2);
          func_0x00010bf01e00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c181cc0(0x447a0000);
          puVar2 = param_1;
        }
      }
      _objc_release(puVar2);
    }
  }
LAB_10b8409d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8409ec; end: 10b840a47; +[SIGCell leadingLabelColumnIncludesAlternateLabelForTraitCollection:] */

bool FUN_10b8409ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c1069c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    _UIContentSizeCategoryCompareToCategory();
    bVar1 = lVar2 == 1;
    _objc_release(param_3);
  }
  return bVar1;
}



/* Entry: 10b840a48; end: 10b841113; -[SIGCell _dynamicConstraintsForDependentLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b840a48(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c0d3c80(PTR____NSArray0__struct_11034ab48);
  puVar3 = PTR_PTR_1126b50b8;
  puVar5 = param_1;
  func_0x00010bf01e00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0875e0();
  _objc_release(puVar5);
  puVar4 = PTR_PTR_1126b50b8;
  if (((int)puVar3 == 0) || (*(long *)(param_1 + _DAT_112794700) == 1)) goto LAB_10b8410d4;
  puVar3 = param_1;
  func_0x00010bfab8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08df00(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  lVar15 = (long)_DAT_112794708;
  puVar5 = *(undefined **)(param_1 + lVar15);
  func_0x00010c274200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b50b8;
  puVar6 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0875e0(puVar3,param_2,puVar6);
  _objc_release(puVar6);
  if ((uint)puVar3 != 0) {
    puVar6 = param_1;
    func_0x00010c26c280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = puVar13;
    if (((ulong)puVar4 & 1) == 0) {
      puVar6 = param_1;
      func_0x00010bf01e00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010c26c280(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar12;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar13;
      func_0x00010bf49480(0x4020000000000000,puVar13,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar6);
      puVar6 = param_1;
      func_0x00010c26c280(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c2a5060(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010bf494a0(0x3fd3333333333333,puVar13,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar12);
      _objc_release(puVar12);
      _objc_release(uVar9);
      _objc_release(puVar13);
      _objc_release(puVar6);
    }
  }
  puVar6 = PTR_PTR_1126b50b8;
  puVar13 = param_1;
  func_0x00010bf6f5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0875e0(puVar6,param_2,puVar13);
  _objc_release(puVar13);
  if ((uint)puVar6 == 0) {
LAB_10b840e60:
    if ((((uint)puVar4 | ((uint)puVar3 | (uint)puVar6) ^ 0xffffffff) & 1) == 0) {
      puVar3 = param_1;
      func_0x00010bf01e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181cc0(0x447a0000);
      _objc_release(puVar3);
    }
    if ((uint)puVar4 != 0) goto LAB_10b840ea4;
    lVar14 = (long)_DAT_112794760;
    if (*(long *)(param_1 + lVar14) != 0) {
      puVar3 = param_1;
      func_0x00010bf01e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c2793a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf49480(0x4020000000000000,puVar4,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar9);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    lVar14 = (long)_DAT_112794730;
    uVar10 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf348e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493a0(uVar10,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = *(undefined **)(param_1 + lVar14);
    uStack_88 = uVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = *(undefined **)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010bf49460(puVar12,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010befa160(puVar2);
    _objc_release(puVar4);
  }
  else {
    puVar13 = param_1;
    func_0x00010bf6f5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar13);
    puVar5 = puVar12;
    if (((ulong)puVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + _DAT_112794730);
      func_0x00010c08de00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + _DAT_112794724);
      func_0x00010c2793a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x00010bf49480(0x4020000000000000,uVar10,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(uVar10);
      puVar13 = param_1;
      func_0x00010bf6f5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c2a5060(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar12;
      func_0x00010bf494a0(0x3fd3333333333333,puVar12,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar9);
      _objc_release(puVar12);
      _objc_release(puVar13);
      goto LAB_10b840e60;
    }
LAB_10b840ea4:
    iVar1 = _DAT_112794730;
    uVar10 = *(undefined8 *)(param_1 + _DAT_112794730);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493a0(uVar10,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = *(undefined **)(param_1 + iVar1);
    uStack_78 = uVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010befa160(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar5);
LAB_10b8410d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  if (puVar6 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  func_0x00010c26b700(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c240(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  return puVar5;
}



/* Entry: 10b841114; end: 10b84116b; +[SIGCell labelExistsAndHasText:] */

undefined8 FUN_10b841114(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c240(param_1,param_2,param_3);
    _objc_release(param_3);
    return param_1;
  }
  return 0;
}



/* Entry: 10b84116c; end: 10b841197; +[SIGCell textIsNonNil:] */

bool FUN_10b84116c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c08fa60(param_3);
    return param_3 != 0;
  }
  return false;
}



/* Entry: 10b841198; end: 10b8411a3; +[SIGCell roundedUpSizeFromSize:] */

undefined1  [16] FUN_10b841198(double param_1,double param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (long)param_1;
  auVar1._8_8_ = (long)param_2;
  return auVar1;
}



/* Entry: 10b8411a4; end: 10b841253; -[SIGCell _updateConstraintsForTrailingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8411a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794798;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + _DAT_11279474c) != 0) {
    if (*(char *)(param_1 + _DAT_11279471c) == '\x01') {
      func_0x00010be0a520(param_1);
    }
    lVar2 = param_1;
    func_0x00010bde67e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_1 + lVar3));
    return;
  }
  return;
}



/* Entry: 10b841254; end: 10b8415c7; -[SIGCell _constraintsForTrailingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b841254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_5 + _DAT_112794754);
  if (lVar3 == 0) {
    lVar3 = param_5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    dVar16 = *(double *)(param_5 + _DAT_112794704 + 0x18);
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    dVar16 = 8.0;
  }
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar15 = (long)_DAT_11279474c;
  uVar4 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_6,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar15);
  uStack_98 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493c0(-dVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar15);
  uStack_90 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
  uVar13 = uVar9;
  func_0x00010bf49420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_5 + lVar15);
  uStack_88 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
  uVar14 = uVar10;
  func_0x00010bf49420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar12,param_6,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  if (*(char *)(param_5 + _DAT_11279471c) == '\x01') {
    uVar13 = *(undefined8 *)(param_5 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010c274200(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined8 *)(param_5 + _DAT_112794704);
    uVar6 = uVar13;
    func_0x00010bf49480(*puVar1,uVar13,param_6,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_5 + lVar15);
    uStack_a8 = uVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    func_0x00010bf49520(-(double)puVar1[2],uVar14,param_6,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a0 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_a8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar12,param_6,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar8);
    _objc_release(param_5);
    _objc_release(uVar14);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar3 + _DAT_112794750) == 2) {
    lVar5 = lVar3;
    if (*(char *)(lVar3 + _DAT_112794748) == '\x01') {
      bVar2 = *(byte *)(lVar3 + _DAT_112794718);
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar5;
      if ((bVar2 & 1) == 0) {
        func_0x00010bf338c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf338e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar5;
      func_0x00010bf338a0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9f00(*(undefined8 *)(lVar3 + _DAT_112794754),param_6,lVar15);
    _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}


