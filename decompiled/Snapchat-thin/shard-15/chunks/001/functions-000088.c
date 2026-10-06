/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8415c8; end: 10b841697; -[SIGCell _updateActionIndicatorViewIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8415c8(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_112794750) == 2) {
    lVar2 = param_1;
    if (*(char *)(param_1 + _DAT_112794748) == '\x01') {
      bVar1 = *(byte *)(param_1 + _DAT_112794718);
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      if ((bVar1 & 1) == 0) {
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
      lVar3 = lVar2;
      func_0x00010bf338a0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112794754),param_2,lVar3);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b841698; end: 10b84172b; -[SIGCell _updateConstraintsForActionIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b841698(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11279479c;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + _DAT_112794754) != 0) {
    lVar2 = param_1;
    func_0x00010bde66a0();
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



/* Entry: 10b84172c; end: 10b841aeb; -[SIGCell _constraintsForActionIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84172c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112794754;
  uVar2 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010c2793a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)(param_5 + _DAT_112794704);
  uVar5 = uVar4;
  func_0x00010bf493c0(-(double)puVar1[3]);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
  uVar7 = uVar6;
  func_0x00010bf49420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar2);
  lVar10 = *(long *)(param_5 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
  lVar3 = lVar10;
  func_0x00010bf49420(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (*(char *)(param_5 + _DAT_11279471c) == '\x01') {
    uVar4 = *(undefined8 *)(param_5 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf49480(*puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_5;
    func_0x00010bf1ff80(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf49520(-(double)puVar1[2]);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_5 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar15));
    uVar7 = uVar12;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c14d8a0(0x4479c000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(lVar11);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(lVar10);
    _objc_release(uVar4);
  }
  else {
    func_0x00010befa120(puVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_1127947a0;
  if (*(long *)(lVar3 + lVar10) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar13 = *(undefined8 *)(lVar3 + lVar10);
    *(undefined8 *)(lVar3 + lVar10) = 0;
    _objc_release(uVar13);
  }
  lVar14 = (long)_DAT_112794760;
  if (*(long *)(lVar3 + lVar14) != 0) {
    if (*(char *)(lVar3 + _DAT_11279471c) == '\x01') {
      func_0x00010c181cc0(0x447a0000);
      func_0x00010c181cc0(0x447a0000,*(undefined8 *)(lVar3 + lVar14));
    }
    lVar14 = lVar3;
    func_0x00010bde66e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar3 + lVar10);
    *(long *)(lVar3 + lVar10) = lVar14;
    _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(lVar3 + lVar10));
    return;
  }
  return;
}



/* Entry: 10b841aec; end: 10b841bc3; -[SIGCell _updateConstraintsForOfficialBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b841aec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_1127947a0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar3 = (long)_DAT_112794760;
  if (*(long *)(param_1 + lVar3) != 0) {
    if (*(char *)(param_1 + _DAT_11279471c) == '\x01') {
      func_0x00010c181cc0(0x447a0000);
      func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar3));
    }
    lVar3 = param_1;
    func_0x00010bde66e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = lVar3;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_1 + lVar2));
    return;
  }
  return;
}



/* Entry: 10b841bc4; end: 10b841e13; -[SIGCell _constraintsForBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b841bc4(double param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_2 + _DAT_11279471c);
  lVar15 = (long)_DAT_112794760;
  lVar2 = *(long *)(param_2 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11279470c;
  lVar3 = *(long *)(param_2 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf493a0(lVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + lVar15);
    lStack_80 = lVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493c0(0x4020000000000000,uVar4,param_3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(param_2 + lVar15);
    uStack_78 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = *(undefined8 *)(param_2 + _DAT_112794708);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = lVar15;
    func_0x00010bf49500(lVar15,param_3,unaff_x27);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = unaff_x28;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(lVar15);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + lVar15);
    lStack_90 = lVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar14));
    uVar8 = uVar4;
    func_0x00010bf49520(param_1 + 5.0,uVar4,param_3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_90,2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  lVar14 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10b841e14;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_1127947a4;
  lVar7 = lVar14;
  lStack_f0 = unaff_x28;
  uStack_e8 = unaff_x27;
  lStack_e0 = lVar15;
  uStack_d8 = uVar8;
  puStack_d0 = puVar6;
  uStack_c8 = uVar5;
  uStack_c0 = uVar4;
  lStack_b8 = lVar11;
  lStack_b0 = lVar3;
  lStack_a8 = lVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar14 + lVar13) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = *(long *)(lVar14 + lVar13);
    *(undefined8 *)(lVar14 + lVar13) = 0;
    _objc_release();
  }
  lVar2 = (long)_DAT_112794744;
  lVar11 = *(long *)(lVar14 + lVar2);
  if ((lVar11 != 0) && (lVar3 = (long)_DAT_11279473c, *(long *)(lVar14 + lVar3) != 0)) {
    if (*(long *)(lVar14 + lVar13) == 0) {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar14 + lVar3);
      lStack_120 = lVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = uVar8;
      func_0x00010bf493c0(0xc018000000000000,lVar11,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar14 + lVar2);
      lStack_130 = lVar11;
      lStack_118 = lVar11;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar14 + lVar3);
      func_0x00010bf1ff80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf493c0(0xc018000000000000,uVar5,param_3,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar14 + lVar2);
      uStack_110 = uVar8;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf49420(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(lVar14 + lVar2);
      uStack_108 = uVar4;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010bf49420(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_100 = lVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_118,4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(lVar14 + lVar13);
      *(undefined **)(lVar14 + lVar13) = puVar6;
      _objc_release(uVar12);
      _objc_release(lVar3);
      _objc_release(lVar11);
      _objc_release(uVar4);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(lStack_130);
      _objc_release(uStack_128);
      _objc_release(lStack_120);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,
                          *(undefined8 *)(lVar14 + lVar13));
      lVar11 = *(long *)(lVar14 + lVar2);
    }
    lVar7 = lVar14;
    func_0x00010bf21300(lVar14,param_3,lVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (*(long *)(lVar7 + _DAT_112794740) == 2) {
    pcStack_138 = FUN_10b842058;
    uVar8 = *(undefined8 *)(lVar7 + _DAT_112794744);
    uStack_188 = *(undefined1 *)(lVar7 + _DAT_112794748);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x10b842130;
    puStack_168 = &UNK_110845ce0;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    uStack_1a0 = 0x10b8421c4;
    puStack_198 = &UNK_110857498;
    uStack_190 = uVar8;
    uStack_160 = uVar8;
    uStack_158 = uStack_188;
    lStack_150 = lVar3;
    lStack_148 = lVar14;
    ppuStack_140 = &puStack_a0;
    _objc_retain(uVar8);
    func_0x00010c27ac60(0x3fc999999999999a,puVar6,param_3,uVar8,0,&puStack_180,&puStack_1b0);
    _objc_release(uVar8);
  }
  return;
}



/* Entry: 10b841e14; end: 10b842057; -[SIGCell _updateConstraintsForLeadingAccessoryActionIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b841e14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127947a4;
  lVar1 = param_1;
  if (*(long *)(param_1 + lVar10) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar1 = *(long *)(param_1 + lVar10);
    *(undefined8 *)(param_1 + lVar10) = 0;
    _objc_release();
  }
  lVar11 = (long)_DAT_112794744;
  lVar8 = *(long *)(param_1 + lVar11);
  if ((lVar8 != 0) && (unaff_x20 = (long)_DAT_11279473c, *(long *)(param_1 + unaff_x20) != 0)) {
    if (*(long *)(param_1 + lVar10) == 0) {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + unaff_x20);
      lStack_90 = lVar8;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = uVar2;
      func_0x00010bf493c0(0xc018000000000000,lVar8,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar11);
      lStack_a0 = lVar8;
      lStack_88 = lVar8;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + unaff_x20);
      func_0x00010bf1ff80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf493c0(0xc018000000000000,uVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar11);
      uStack_80 = uVar2;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf49420(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(param_1 + lVar11);
      uStack_78 = uVar6;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = lVar1;
      func_0x00010bf49420(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = unaff_x20;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      *(undefined **)(param_1 + lVar10) = puVar7;
      _objc_release(uVar9);
      _objc_release(unaff_x20);
      _objc_release(lVar1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lStack_a0);
      _objc_release(uStack_98);
      _objc_release(lStack_90);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                          *(undefined8 *)(param_1 + lVar10));
      lVar8 = *(long *)(param_1 + lVar11);
    }
    lVar1 = param_1;
    func_0x00010bf21300(param_1,param_2,lVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (*(long *)(lVar1 + _DAT_112794740) == 2) {
    pcStack_a8 = FUN_10b842058;
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112794744);
    uStack_f8 = *(undefined1 *)(lVar1 + _DAT_112794748);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x10b842130;
    puStack_d8 = &UNK_110845ce0;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x10b8421c4;
    puStack_108 = &UNK_110857498;
    uStack_100 = uVar2;
    uStack_d0 = uVar2;
    uStack_c8 = uStack_f8;
    lStack_c0 = unaff_x20;
    lStack_b8 = param_1;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar2);
    func_0x00010c27ac60(0x3fc999999999999a,puVar7,param_2,uVar2,0,&puStack_f0,&puStack_120);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10b842058; end: 10b84221b; -[SIGCell _updateLeadingAccessoryActionIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b842058(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (*(long *)(param_1 + _DAT_112794740) == 2) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794744);
    uStack_58 = *(undefined1 *)(param_1 + _DAT_112794748);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x10b842130;
    puStack_38 = &UNK_110845ce0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10b8421c4;
    puStack_68 = &UNK_110857498;
    uStack_60 = uVar2;
    uStack_30 = uVar2;
    uStack_28 = uStack_58;
    _objc_retain(uVar2);
    func_0x00010c27ac60(0x3fc999999999999a,puVar1,param_2,uVar2,0,&puStack_50,&puStack_80);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10b84221c; end: 10b842353; -[SIGCell _stylizeTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84221c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = (long)_DAT_112794718;
  lVar1 = param_1;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    if (*(char *)(param_1 + _DAT_112794748) == '\x01') {
      lVar4 = param_1;
      func_0x00010beb2c60();
      if ((int)lVar4 != 0) {
        lVar3 = param_1;
        func_0x00010be9e1a0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794710));
        lVar4 = (long)_DAT_11279470c;
        func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
        func_0x00010be9e140(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b842330;
      }
      if ((*(byte *)(param_1 + lVar3) & 1) == 0) goto LAB_10b8422f4;
    }
    lVar3 = param_1;
    _objc_opt_class(param_1);
    lVar4 = (long)_DAT_112794710;
    func_0x00010bed0a00();
    lVar5 = (long)_DAT_11279470c;
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5),param_2,lVar3);
    func_0x00010becb460(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
  }
  else {
LAB_10b8422f4:
    lVar3 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bed0a00();
    lVar4 = (long)_DAT_11279470c;
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    func_0x00010be01e60(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_10b842330:
    uVar2 = *(undefined8 *)(param_1 + lVar4);
  }
  func_0x00010c213180(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b842354; end: 10b8423eb; -[SIGCell setAdjustsHeightAccommodatingExtraLines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b842354(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794738) = param_3;
  func_0x00010c26c2a0(PTR_PTR_1126b50b8);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + _DAT_11279470c));
  func_0x00010bf6f5c0(PTR_PTR_1126b50b8);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + _DAT_112794724));
  func_0x00010bf01e20(PTR_PTR_1126b50b8);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + _DAT_112794730));
                    /* WARNING: Could not recover jumptable at 0x00010beaab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupAutolayoutConstraints_112588488);
  return;
}



/* Entry: 10b8423ec; end: 10b84241f; -[SIGCell _shouldChangeTextAppearanceOnSelectedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b8423ec(long param_1)

{
  if (*(long *)(param_1 + _DAT_112794750) == 2) {
    return true;
  }
  return *(long *)(param_1 + _DAT_112794740) == 2;
}



/* Entry: 10b842420; end: 10b842443; +[SIGCell _typeStyleForTextStyle:] */

undefined8 FUN_10b842420(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10e5f31a0 + (param_3 - 1U) * 8);
  }
  return 0x14;
}



/* Entry: 10b842444; end: 10b842467; -[SIGCell _selectedTypeStyleForTextStyle:] */

undefined8 FUN_10b842444(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10e5f31a0 + (param_3 - 1U) * 8);
  }
  return 0x16;
}



/* Entry: 10b842468; end: 10b84249b; -[SIGCell _textColorForTextStyle:] */

void FUN_10b842468(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xbf;
  if (param_3 != 4) {
    uVar1 = 0xc6;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b84249c; end: 10b8424ab; -[SIGCell _selectedTextColor] */

void FUN_10b84249c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc1);
  return;
}



/* Entry: 10b8424ac; end: 10b8424bb; -[SIGCell _disabledTextColor] */

void FUN_10b8424ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc0);
  return;
}



/* Entry: 10b8424bc; end: 10b8424cb; -[SIGCell style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8424bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794700);
}



/* Entry: 10b8424cc; end: 10b8424db; -[SIGCell isSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8424cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794748);
}



/* Entry: 10b8424dc; end: 10b8424eb; -[SIGCell isHighlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8424dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794758);
}



/* Entry: 10b8424ec; end: 10b8424fb; -[SIGCell isHighlightsOnTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8424ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127946c0);
}



/* Entry: 10b8424fc; end: 10b84250b; -[SIGCell highlightColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8424fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794714);
}



/* Entry: 10b84250c; end: 10b84254b; -[SIGCell setHighlightColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84250c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794714;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b84254c; end: 10b84255b; -[SIGCell isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b84254c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794718);
}



/* Entry: 10b84255c; end: 10b84256b; -[SIGCell leadingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84255c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279473c);
}



/* Entry: 10b84256c; end: 10b84257b; -[SIGCell leadingAccessoryActionIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84256c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794740);
}



/* Entry: 10b84257c; end: 10b84258b; -[SIGCell leadingAccessoryActionIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84257c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794744);
}



/* Entry: 10b84258c; end: 10b8425cb; -[SIGCell setLeadingAccessoryActionIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84258c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794744;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8425cc; end: 10b8425db; -[SIGCell adjustsHeightAccommodatingExtraLines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8425cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794738);
}



/* Entry: 10b8425dc; end: 10b8425eb; -[SIGCell getOfficialBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8425dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794734);
}



/* Entry: 10b8425ec; end: 10b8425fb; -[SIGCell badgeText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8425ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279476c);
}



/* Entry: 10b8425fc; end: 10b84260b; -[SIGCell trailingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8425fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279474c);
}



/* Entry: 10b84260c; end: 10b84261b; -[SIGCell actionIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84260c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794750);
}



/* Entry: 10b84261c; end: 10b84262b; -[SIGCell actionIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84261c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794754);
}



/* Entry: 10b84262c; end: 10b84263b; -[SIGCell textStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84262c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794710);
}



/* Entry: 10b84263c; end: 10b84264b; -[SIGCell isDestructive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b84263c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794770);
}



/* Entry: 10b84264c; end: 10b84265b; -[SIGCell isCentered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b84264c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794774);
}



/* Entry: 10b84265c; end: 10b84267b; -[SIGCell detailTextFormatDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84265c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794764);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b84267c; end: 10b84268f; -[SIGCell setDetailTextFormatDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84267c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794764,param_3);
  return;
}



/* Entry: 10b842690; end: 10b84269f; -[SIGCell optInForDynamicType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b842690(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794778);
}



/* Entry: 10b8426a0; end: 10b8426af; -[SIGCell traitCollectionFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8426a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127947a8);
}



/* Entry: 10b8426b0; end: 10b8426bb; -[SIGCell setTraitCollectionFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8426b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b8426bc; end: 10b8426cb; -[SIGCell textLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8426bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279470c);
}



/* Entry: 10b8426cc; end: 10b8426db; -[SIGCell detailLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8426cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794724);
}



/* Entry: 10b8426dc; end: 10b8426eb; -[SIGCell alternateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8426dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794730);
}



/* Entry: 10b8426ec; end: 10b842703; -[SIGCell edgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8426ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794704);
}



/* Entry: 10b842704; end: 10b8428bf; -[SIGCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b842704(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794730,0);
  _objc_storeStrong(param_1 + _DAT_112794724,0);
  _objc_storeStrong(param_1 + _DAT_11279470c,0);
  _objc_storeStrong(param_1 + _DAT_1127947a8,0);
  _objc_destroyWeak(param_1 + _DAT_112794764);
  _objc_storeStrong(param_1 + _DAT_112794754,0);
  _objc_storeStrong(param_1 + _DAT_11279474c,0);
  _objc_storeStrong(param_1 + _DAT_11279476c,0);
  _objc_storeStrong(param_1 + _DAT_112794744,0);
  _objc_storeStrong(param_1 + _DAT_11279473c,0);
  _objc_storeStrong(param_1 + _DAT_112794714,0);
  _objc_storeStrong(param_1 + _DAT_112794728,0);
  _objc_storeStrong(param_1 + _DAT_11279475c,0);
  _objc_storeStrong(param_1 + _DAT_1127947a0,0);
  _objc_storeStrong(param_1 + _DAT_11279479c,0);
  _objc_storeStrong(param_1 + _DAT_112794760,0);
  _objc_storeStrong(param_1 + _DAT_112794798,0);
  _objc_storeStrong(param_1 + _DAT_112794794,0);
  _objc_storeStrong(param_1 + _DAT_112794790,0);
  _objc_storeStrong(param_1 + _DAT_11279478c,0);
  _objc_storeStrong(param_1 + _DAT_112794788,0);
  _objc_storeStrong(param_1 + _DAT_112794784,0);
  _objc_storeStrong(param_1 + _DAT_112794708,0);
  _objc_storeStrong(param_1 + _DAT_1127947a4,0);
  _objc_storeStrong(param_1 + _DAT_112794780,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279477c,0);
  return;
}



/* Entry: 10b8428c0; end: 10b842ae3; -[SIGCellViewModel initWithMaxSize:titleText:detailText:titleTextStyle:badgeText:valueText:emojiText:trailingAccessoryView:leadingAccessoryView:isCentered:actionIndicator:officialBadgeType:adjustsHeightAccommodatingExtraLines:optInForDynamicType:traitCollectionFetcher:] */

undefined8 *
FUN_10b8428c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_19);
  func_0x00010c26c240(PTR_PTR_1126b50b8);
  func_0x00010c26c240(PTR_PTR_1126b50b8);
  puStack_78 = PTR_PTR_11270b440;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xd] = param_1;
    puVar1[0xe] = param_2;
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[2] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_13;
    puVar1[8] = param_15;
    puVar1[9] = param_16;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 10) = param_17._1_1_;
    uVar2 = param_19;
    _objc_retainBlock();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_19);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b842ae4; end: 10b842aeb; -[SIGCellViewModel maxCellSize] */

undefined1  [16] FUN_10b842ae4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 10b842aec; end: 10b842af3; -[SIGCellViewModel setMaxCellSize:] */

void FUN_10b842aec(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x68) = param_1;
  *(undefined8 *)(param_3 + 0x70) = param_2;
  return;
}



/* Entry: 10b842af4; end: 10b842afb; -[SIGCellViewModel cellTextStyle] */

undefined8 FUN_10b842af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b842afc; end: 10b842b03; -[SIGCellViewModel setCellTextStyle:] */

void FUN_10b842afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b842b04; end: 10b842b0b; -[SIGCellViewModel titleText] */

undefined8 FUN_10b842b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b842b0c; end: 10b842b3b; -[SIGCellViewModel setTitleText:] */

void FUN_10b842b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b842b3c; end: 10b842b43; -[SIGCellViewModel detailText] */

undefined8 FUN_10b842b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b842b44; end: 10b842b73; -[SIGCellViewModel setDetailText:] */

void FUN_10b842b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b842b74; end: 10b842b7b; -[SIGCellViewModel badgeText] */

undefined8 FUN_10b842b74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b842b7c; end: 10b842bab; -[SIGCellViewModel setBadgeText:] */

void FUN_10b842b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b842bac; end: 10b842bb3; -[SIGCellViewModel valueText] */

undefined8 FUN_10b842bac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b842bb4; end: 10b842be3; -[SIGCellViewModel setValueText:] */

void FUN_10b842bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b842be4; end: 10b842beb; -[SIGCellViewModel emojiText] */

undefined8 FUN_10b842be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b842bec; end: 10b842c1b; -[SIGCellViewModel setEmojiText:] */

void FUN_10b842bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b842c1c; end: 10b842c23; -[SIGCellViewModel actionIndicator] */

undefined8 FUN_10b842c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b842c24; end: 10b842c2b; -[SIGCellViewModel setActionIndicator:] */

void FUN_10b842c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b842c2c; end: 10b842c33; -[SIGCellViewModel officialBadgeType] */

undefined8 FUN_10b842c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b842c34; end: 10b842c3b; -[SIGCellViewModel setOfficialBadgeType:] */

void FUN_10b842c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b842c3c; end: 10b842c43; -[SIGCellViewModel isCentered] */

undefined1 FUN_10b842c3c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b842c44; end: 10b842c4b; -[SIGCellViewModel setCentered:] */

void FUN_10b842c44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b842c4c; end: 10b842c53; -[SIGCellViewModel adjustsHeightAccommodatingExtraLines] */

undefined1 FUN_10b842c4c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b842c54; end: 10b842c5b; -[SIGCellViewModel setAdjustsHeightAccommodatingExtraLines:] */

void FUN_10b842c54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b842c5c; end: 10b842c63; -[SIGCellViewModel optInForDynamicType] */

undefined1 FUN_10b842c5c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b842c64; end: 10b842c6b; -[SIGCellViewModel setOptInForDynamicType:] */

void FUN_10b842c64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b842c6c; end: 10b842c73; -[SIGCellViewModel trailingAccessoryView] */

undefined8 FUN_10b842c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b842c74; end: 10b842ca3; -[SIGCellViewModel setTrailingAccessoryView:] */

void FUN_10b842c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b842ca4; end: 10b842cab; -[SIGCellViewModel leadingAccessoryView] */

undefined8 FUN_10b842ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b842cac; end: 10b842cdb; -[SIGCellViewModel setLeadingAccessoryView:] */

void FUN_10b842cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b842cdc; end: 10b842ce3; -[SIGCellViewModel traitCollectionFetcher] */

undefined8 FUN_10b842cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b842ce4; end: 10b842ceb; -[SIGCellViewModel setTraitCollectionFetcher:] */

void FUN_10b842ce4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b842cec; end: 10b842d63; -[SIGCellViewModel .cxx_destruct] */

void FUN_10b842cec(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b842d64; end: 10b842dbb;  */

double FUN_10b842d64(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  
  func_0x00010bfe0720(PTR_PTR_1126b50b8,param_5,param_4);
  dVar1 = param_1;
  FUN_10b86a780(param_5,param_6,0,0);
  return param_3 + param_1 + dVar1;
}



/* Entry: 10b842dbc; end: 10b842fc3;  */

double FUN_10b842dbc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                    undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                    undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000018;
  long in_stack_00000020;
  
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(in_stack_00000020);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  FUN_10b86a780(param_8,param_9,puVar2,0);
  param_1 = param_1 - (dVar6 + dVar4);
  if ((in_stack_00000018._2_1_ == '\0') || (in_stack_00000020 == 0)) {
    func_0x00010bf45a40(param_1,param_2,param_3,param_5,PTR_PTR_1126b50b8);
  }
  else {
    func_0x00010bf8bba0(param_1,param_2,param_3,param_4,param_5,param_6,PTR_PTR_1126b50b8);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(in_stack_00000020);
  _objc_release(param_14);
  _objc_release(param_13);
  return dVar5 + dVar3 + param_1;
}



/* Entry: 10b842fc4; end: 10b84335b;  */

double FUN_10b842fc4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                    undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  FUN_10b86a780(param_6,param_7,puVar2,0);
  param_1 = param_1 - (dVar6 + dVar4);
  func_0x00010bf45a40(param_1,param_2,param_3,param_4,PTR_PTR_1126b50b8);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return dVar5 + dVar3 + param_1;
}



/* Entry: 10b84335c; end: 10b843423;  */

double FUN_10b84335c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  param_1 = param_1 * 0.5;
  if (param_2 < 6) {
    if (param_2 == 4) {
      dVar3 = param_1 + 12.0;
      dVar4 = -12.0;
    }
    else {
      if (param_2 != 5) {
        return param_1;
      }
      dVar3 = param_1 + -12.0;
      dVar4 = 12.0;
    }
    if (puVar2 == (undefined *)0x0) {
      dVar3 = param_1 + dVar4;
    }
  }
  else if (param_2 == 7) {
    dVar3 = param_1 + 12.0;
  }
  else {
    dVar3 = param_1;
    if (param_2 == 6) {
      dVar3 = param_1 + -12.0;
    }
  }
  return dVar3;
}



/* Entry: 10b843424; end: 10b84347b; +[SIGCollectionViewCell computedHeightThatFits:cellStyle:containerStyle:titleText:titleTextStyle:detailText:badgeText:valueText:emojiText:trailingAccessoryViewSize:leadingAccessoryViewSize:officialBadgeType:actionIndicator:isCentered:adjustsHeightAccommodatingExtraLines:optInForDynamicType:traitCollection:] */

double FUN_10b843424(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x7;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000028;
  long in_stack_00000030;
  
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000030);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  FUN_10b86a780(in_x3,in_x4,puVar2,0);
  param_1 = param_1 - (dVar6 + dVar4);
  if ((in_stack_00000028._2_1_ == '\0') || (in_stack_00000030 == 0)) {
    func_0x00010bf45a40(param_1,param_2,param_3,param_5,PTR_PTR_1126b50b8);
  }
  else {
    func_0x00010bf8bba0(param_1,param_2,param_3,param_4,param_5,param_6,PTR_PTR_1126b50b8);
  }
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  return dVar5 + dVar3 + param_1;
}



/* Entry: 10b84347c; end: 10b8434f3; -[SIGCollectionViewCellBase initWithFrame:] */

undefined8
FUN_10b84347c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c015080(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 10b8434f4; end: 10b84387f; -[SIGCollectionViewCellBase initWithFrame:underlyingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b8434f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_b8 = PTR_PTR_11270b448;
  puVar21 = &uStack_c0;
  uStack_c0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar21,PTR_s_initWithFrame__1125e2948);
  if (puVar21 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar21);
    lVar22 = (long)_DAT_1127947ac;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar21 + lVar22);
    *(long *)((long)puVar21 + lVar22) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5f68;
    _objc_alloc();
    func_0x00010c003f40();
    uVar2 = *(undefined8 *)((long)puVar21 + (long)_DAT_1127947b0);
    *(undefined **)((long)puVar21 + (long)_DAT_1127947b0) = puVar3;
    _objc_release(uVar2);
    _objc_retain(puVar3);
    func_0x00010c219b60(puVar3);
    puVar4 = puVar21;
    func_0x00010bf4dce0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar21;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_b0 = puVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar21;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    puStack_a8 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar21;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    puStack_a0 = puVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar21;
    func_0x00010bf4dce0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar20);
    _objc_release(puVar19);
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
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar21;
  }
  ___stack_chk_fail();
  puVar21 = *(undefined8 **)(param_7 + _DAT_1127947b0);
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar21,PTR_s_intrinsicContentSize_1125f8080);
  return puVar21;
}



/* Entry: 10b843880; end: 10b84388f; -[SIGCollectionViewCellBase intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b843890; end: 10b84389f; -[SIGCollectionViewCellBase contentViewInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_contentViewInsets_1125b1110);
  return;
}



/* Entry: 10b8438a0; end: 10b8438af; -[SIGCollectionViewCellBase setContentViewInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8438a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c182b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_setContentViewInsets__11263e500);
  return;
}



/* Entry: 10b8438b0; end: 10b8438bf; -[SIGCollectionViewCellBase style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8438b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_style_112675210);
  return;
}



/* Entry: 10b8438c0; end: 10b8438cf; -[SIGCollectionViewCellBase setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8438c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_setStyle__1126614d0);
  return;
}



/* Entry: 10b8438d0; end: 10b8438eb; -[SIGCollectionViewCellBase setUseScreenScaledContainerBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8438d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127947b4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c21da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),
             PTR_s_setUseScreenScaledBorderWidth__1126650c0);
  return;
}



/* Entry: 10b8438ec; end: 10b843933; -[SIGCollectionViewCellBase backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8438ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127947b0);
  func_0x00010bf13d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b843934; end: 10b8439c3; -[SIGCollectionViewCellBase setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843934(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127947b0;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8439c4; end: 10b8439d3; -[SIGCollectionViewCellBase specOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8439c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_specOverride_11266faa8);
  return;
}



/* Entry: 10b8439d4; end: 10b8439e3; -[SIGCollectionViewCellBase setSpecOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8439d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2074b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_setSpecOverride__11265f750);
  return;
}



/* Entry: 10b8439e4; end: 10b8439f3; -[SIGCollectionViewCellBase shadowDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8439e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_shadowDisabled_112668208);
  return;
}



/* Entry: 10b8439f4; end: 10b843a03; -[SIGCollectionViewCellBase setShadowDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8439f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fe770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_setShadowDisabled__11265d400);
  return;
}



/* Entry: 10b843a04; end: 10b843a13; -[SIGCollectionViewCellBase backgroundCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127947b0),PTR_s_backgroundCornerRadius_1125a2938);
  return;
}



/* Entry: 10b843a14; end: 10b843a6b; -[SIGCollectionViewCellBase setBackgroundCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b843a14(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_1127947b0;
  dVar2 = param_1;
  func_0x00010bf13e40(*(undefined8 *)(param_2 + lVar1));
  if (param_1 != dVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010c16e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(param_2 + lVar1),PTR_s_setBackgroundCornerRadius__112639368);
    return;
  }
  return;
}



/* Entry: 10b843a6c; end: 10b843a7b; -[SIGCollectionViewCellBase useScreenScaledContainerBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b843a6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127947b4);
}



/* Entry: 10b843a7c; end: 10b843a8b; -[SIGCollectionViewCellBase underlyingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b843a7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127947ac);
}


