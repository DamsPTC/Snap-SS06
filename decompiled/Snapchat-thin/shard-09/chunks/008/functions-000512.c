/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107152600; end: 10715269f;  */

void FUN_107152600(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010beffe80();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      func_0x00010c23a180(uVar1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071526a0; end: 107152a7f; -[PreviewViewController _didDismissFromSendViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071526a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  uVar1 = param_1;
  func_0x00010c11e820();
  if ((int)uVar1 == 0) goto LAB_1071527dc;
  uVar1 = param_1;
  func_0x00010c15d5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108eeb0bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x00010bfb8920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf529e0();
    if ((uVar3 == 0) && (uVar3 = uVar2, func_0x00010befc200(), (uVar3 & 1) == 0)) {
      uVar3 = uVar2;
      func_0x00010c22c040();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      if (uVar4 != 0) {
LAB_107152788:
        _objc_release(uVar3);
        goto LAB_107152790;
      }
      uVar4 = uVar2;
      func_0x00010c0ce9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      if (uVar5 != 0) {
LAB_107152780:
        _objc_release(uVar4);
        goto LAB_107152788;
      }
      uVar5 = uVar2;
      func_0x00010bfcf340();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      if (uVar6 != 0) {
        _objc_release(uVar5);
        goto LAB_107152780;
      }
      uVar6 = uVar2;
      func_0x00010bf25220();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if (uVar12 == 0) {
        func_0x00010c26ac00(param_1);
        goto LAB_1071527d4;
      }
    }
    else {
LAB_107152790:
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28bf40();
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
LAB_1071527d4:
  _objc_release(uVar2);
LAB_1071527dc:
  lVar13 = (long)_DAT_11276456c;
  if (*(char *)(param_1 + lVar13) == '\x01') {
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5ce0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + lVar13) = 0;
  func_0x00010bdc94a0(param_1);
  puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be76e60(param_1);
  func_0x00010c14dc40(puVar7,param_2,uVar1,1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar7);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c2a0260();
  func_0x00010c2bcb40(uVar5,param_2,uVar11 + 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107152a80; end: 107152caf; -[PreviewViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107152a80(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f8a50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidAppear__112684bd0);
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06bc00();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    func_0x00010bee9420(param_1);
    uVar2 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfae100();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3360();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c111920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9b40();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_1070c4ee8();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf52280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_1127644ac;
    func_0x00010c075080(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c0a2020(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010be64cc0(param_1);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010c231a80();
    if (iVar1 != 0) {
      func_0x00010be9fae0(param_1);
    }
  }
  return;
}



/* Entry: 107152cb0; end: 10715438b; -[PreviewViewController _viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107152cb0(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c169600(param_2,param_3,2);
  uVar20 = *(undefined8 *)(param_2 + _DAT_112764478);
  func_0x00010c0f2220(param_2);
  func_0x00010c24fc40(uVar20);
  lVar21 = (long)_DAT_112764520;
  if (*(char *)(param_2 + lVar21) == '\x01') {
    lVar22 = param_2;
    func_0x00010c231fc0();
    if ((int)lVar22 != 0) {
      func_0x00010bf85940(param_2);
    }
    *(undefined1 *)(param_2 + lVar21) = 0;
  }
  lVar21 = (long)_DAT_11276452c;
  if ((*(byte *)(param_2 + lVar21) & 1) == 0) {
    lVar22 = param_2;
    func_0x00010c111180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c060();
    _objc_release(lVar22);
    puVar11 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar11);
    _objc_initWeak(auStack_98,param_2);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10715438c;
    puStack_a8 = &UNK_1109900e8;
    _objc_copyWeak(auStack_a0,auStack_98);
    ppuVar1 = &puStack_c0;
    _objc_retainBlock(ppuVar1);
    lVar22 = (long)_DAT_1127644ac;
    uVar2 = *(ulong *)(param_2 + lVar22);
    func_0x00010c075080();
    uVar17 = *(ulong *)(param_2 + lVar22);
    if ((uVar2 & 1) == 0) {
      func_0x00010c06d080();
      iVar16 = (int)*(undefined8 *)(param_2 + lVar22);
      if ((uVar17 & 1) != 0) goto LAB_107152ee0;
      func_0x00010c0811c0();
      uVar2 = *(ulong *)(param_2 + lVar22);
      if (iVar16 == 0) {
        func_0x00010c070a20();
        if ((int)uVar2 != 0) {
          uVar2 = *(ulong *)(param_2 + lVar22);
          func_0x00010c2440e0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar2;
          func_0x00010c081c00();
          _objc_release(uVar2);
          goto LAB_107152ec8;
        }
      }
      else {
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar2;
        func_0x00010c081c00();
        _objc_release(uVar2);
LAB_107152ec8:
        if ((uVar17 & 1) == 0) goto LAB_107152ee0;
      }
      func_0x00010c29aee0(param_2);
    }
    else {
LAB_107152ee0:
      func_0x00010c0a50c0(param_2);
    }
    lVar22 = param_2;
    func_0x00010c15df80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afc00();
    _objc_release(lVar3);
    _objc_release(lVar22);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  lVar22 = param_2;
  func_0x00010c11e820();
  if ((int)lVar22 != 0) {
    lVar22 = (long)_DAT_1127644ac;
    iVar16 = (int)*(undefined8 *)(param_2 + lVar22);
    func_0x00010c07e840();
    if (iVar16 != 0) {
      uVar17 = *(ulong *)(param_2 + lVar22);
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar17;
      func_0x00010befc200();
      if ((uVar2 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + lVar22);
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar4;
        func_0x00010befc240();
        if ((int)uVar20 == 0) {
          lVar13 = *(long *)(param_2 + lVar22);
          func_0x00010c131e40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar13;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar3;
          func_0x00010c08fa60();
          _objc_release(lVar3);
          _objc_release(lVar13);
          _objc_release(uVar4);
          _objc_release(uVar17);
          if (lVar18 == 0) goto LAB_107153084;
          goto LAB_107152f9c;
        }
        _objc_release(uVar4);
      }
      _objc_release(uVar17);
    }
LAB_107152f9c:
    uVar17 = *(ulong *)(param_2 + lVar22);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar17;
    func_0x00010c073aa0();
    if ((uVar2 & 1) == 0) {
      lVar22 = param_2;
      func_0x00010bf00fe0();
      _objc_release(uVar17);
      if ((int)lVar22 != 0) {
        lVar22 = (long)_DAT_1127644f0;
        func_0x00010c229580(*(undefined8 *)(param_2 + lVar22));
        uVar17 = *(ulong *)(param_2 + lVar22);
        func_0x00010c15b960(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23a6e0();
        goto LAB_107152ff8;
      }
    }
    else {
LAB_107152ff8:
      _objc_release(uVar17);
    }
    puVar11 = PTR_PTR_1126d4d80;
    _objc_opt_new(PTR_PTR_1126d4d80);
    lVar22 = param_2;
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar22;
    func_0x0001070c4604();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar3;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar13);
    _objc_release(lVar18);
    _objc_release(lVar3);
    _objc_release(lVar22);
    _objc_release(puVar11);
  }
LAB_107153084:
  puVar11 = PTR_PTR_1126b19f8;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835e0();
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  *(undefined8 *)(param_2 + _DAT_112764528) = 3;
  puVar12 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_2);
  func_0x00010bfc8740(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar12);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_1127644ac;
  uVar20 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bf291a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5960();
  func_0x00010c2b33e0(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bf291a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b59a0();
  func_0x00010c2b3400(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c242400(*(undefined8 *)(param_2 + lVar19));
  func_0x00010c2b9b80(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbabe0(*(undefined8 *)(param_2 + lVar19));
  func_0x00010c2ae900(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bf291a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2540();
  func_0x00010c2ae380(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c131e40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar4;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c2b6e20(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108e00d3c();
  func_0x00010c2b8ba0(lVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar22);
  lVar3 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar22;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d080();
  func_0x00010c2b0260(lVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(lVar22);
  _objc_release(lVar3);
  lVar6 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0811c0();
  func_0x00010c2b1860(lVar22);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar22);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(lVar13);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bef0520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9da0(lVar22);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(lVar22);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(lVar13);
  _objc_release(lVar6);
  lVar22 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar22;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010c29d500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29f420();
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(lVar22);
  puVar11 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar11);
  lVar3 = param_2;
  func_0x00010c27acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  puVar11 = PTR_DAT_1126a5220;
  func_0x00010010fab4();
  lVar22 = lVar3;
  if ((int)lVar18 == 0) {
    lVar22 = 0;
  }
  _objc_retain(lVar22);
  _objc_release(lVar3);
  if ((*(byte *)(param_2 + lVar21) & 1) == 0) {
    iVar16 = (int)*(undefined8 *)(param_2 + lVar19);
    func_0x00010c075080();
    lVar18 = *(long *)(param_2 + lVar19);
    if (iVar16 == 0) {
      func_0x00010c2295e0(param_2);
    }
    else {
      func_0x00010bfbbbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar18 == 0) {
        func_0x00010be04620(param_2);
      }
      else {
        _objc_initWeak(auStack_98,param_2);
        uVar20 = *(undefined8 *)(param_2 + lVar19);
        func_0x00010bfbbbe0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e8 = 0xc2000000;
        pcStack_e0 = FUN_107154560;
        puStack_d8 = &UNK_110855f90;
        _objc_copyWeak(auStack_c8,auStack_98);
        lVar18 = lVar22;
        _objc_retain(lVar22);
        lStack_d0 = lVar22;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297280(uVar20);
        _objc_release(lVar18);
        _objc_release(uVar20);
        _objc_release(lStack_d0);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_98);
      }
    }
    if (lVar22 == 0) {
      func_0x00010c1119a0(param_2);
    }
    else {
      func_0x00010c06c6e0();
      if ((int)lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_2 + _DAT_112764480);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar4;
        func_0x00010c29f120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010bdd0280(param_2);
        _objc_release(uVar20);
      }
    }
    uVar17 = *(ulong *)(param_2 + lVar19);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar17;
    func_0x00010c077de0();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_2 + lVar19);
      func_0x00010bfbacc0();
      _objc_release(uVar17);
      if ((uVar2 & 1) == 0) {
        _objc_initWeak(auStack_98,param_2);
        lVar3 = param_2;
        func_0x00010c13b540(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar3;
        func_0x0001070c5578();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar18;
        func_0x00010c244ac0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_2;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar10;
        func_0x0001070c45e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar9;
        func_0x00010c293740();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar8;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        param_1 = 1.60807493534087e-314;
        uStack_140 = 0xc2000000;
        uStack_138 = 0x107154928;
        puStack_130 = &UNK_110861a28;
        puVar11 = auStack_98;
        _objc_copyWeak(auStack_128);
        func_0x00010c2448c0(lVar6);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(lVar7);
        _objc_release(lVar8);
        _objc_release(lVar9);
        _objc_release(lVar10);
        _objc_release(lVar6);
        _objc_release(lVar13);
        _objc_release(lVar18);
        _objc_release(lVar3);
        _objc_destroyWeak(auStack_128);
        _objc_destroyWeak(auStack_98);
        goto LAB_107153de0;
      }
    }
    else {
      _objc_release(uVar17);
    }
    lVar3 = param_2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar3;
    func_0x0001070c53a4();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar18;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar19);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010c1322e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6;
    func_0x00010bfc61a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    _objc_release(uVar4);
    _objc_release(lVar6);
    _objc_release(lVar13);
    _objc_release(lVar18);
    _objc_release(lVar3);
    _objc_initWeak(auStack_98,param_2);
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_107154634;
    puStack_108 = &UNK_110853590;
    puVar11 = auStack_98;
    _objc_copyWeak(auStack_f8);
    lStack_100 = param_2;
    func_0x00010c283d40(param_2);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar10);
  }
LAB_107153de0:
  if (((*(byte *)(param_2 + lVar21) & 1) == 0) &&
     (lVar3 = param_2, func_0x00010be42f20(), (int)lVar3 != 0)) {
    lVar3 = param_2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar3;
    func_0x0001070c5140();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar18;
    func_0x00010c111440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6;
    func_0x00010bf2d780();
    _objc_release(lVar6);
    _objc_release(lVar13);
    _objc_release(lVar18);
    _objc_release(lVar3);
    if ((int)lVar10 != 0) {
      uVar20 = *(undefined8 *)(param_2 + _DAT_1127644f0);
      func_0x00010c2737a0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar3;
      func_0x0001070c5284();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar18;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar13;
      func_0x00010c111420();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      func_0x00010c111480();
      param_1 = (double)lVar9;
      func_0x00010c216e60(uVar20);
      _objc_release(lVar10);
      _objc_release(lVar6);
      _objc_release(lVar13);
      _objc_release(lVar18);
      _objc_release(lVar3);
      _objc_release(uVar20);
      lVar3 = param_2;
      func_0x00010c13b540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar3;
      func_0x0001070c5140();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar18;
      func_0x00010c111440();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e1dc0();
      _objc_release(lVar6);
      _objc_release(lVar13);
      _objc_release(lVar18);
      _objc_release(lVar3);
    }
  }
  if ((*(byte *)(param_2 + lVar21) & 1) == 0) {
    iVar16 = (int)*(undefined8 *)(param_2 + lVar19);
    func_0x00010c073c20();
    if (iVar16 != 0) {
      _objc_initWeak(auStack_98,param_2);
      lVar3 = param_2;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar3;
      func_0x0001070c4790();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar18;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar13;
      func_0x00010c2a1480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(lVar18);
      _objc_release(lVar3);
      puVar11 = *(undefined **)(param_2 + lVar19);
      func_0x00010bfbbbe0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 == (undefined *)0x0) {
        puVar12 = *(undefined **)(param_2 + lVar19);
        func_0x00010c123d20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 == (undefined *)0x0) {
          puVar5 = PTR_PTR_1126ae558;
          func_0x00010bfe9ca0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(puVar12);
          puVar5 = puVar12;
        }
        _objc_release(puVar12);
      }
      else {
        _objc_retain(puVar11);
        puVar5 = puVar11;
      }
      _objc_release(puVar11);
      puVar12 = PTR_PTR_1126ae558;
      uVar20 = *(undefined8 *)(param_2 + _DAT_11276448c);
      lStack_90 = lVar6;
      puStack_88 = puVar5;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = uVar20;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beffb40();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 1.60807493534087e-314;
      puVar15 = auStack_150;
      puVar11 = auStack_98;
      _objc_copyWeak();
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar12);
      _objc_release(puVar15);
      _objc_release(puVar12);
      _objc_release(puVar14);
      _objc_release(uVar20);
      _objc_destroyWeak(auStack_150);
      _objc_release(puVar5);
      _objc_release(lVar6);
      _objc_destroyWeak(auStack_98);
    }
  }
  _CACurrentMediaTime();
  *(double *)(param_2 + _DAT_112764560) = param_1;
  *(undefined1 *)(param_2 + lVar21) = 1;
  func_0x00010bef7b60(param_2);
  func_0x00010c2a1c60(param_2);
  func_0x00010bdc94a0(param_2);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2;
  func_0x0001070c5434();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010c0e1880();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010c252700();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252a00();
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar21);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_98);
    __Unwind_Resume();
    _objc_retain(puVar11);
    lVar22 = lVar22 + 0x20;
    _objc_loadWeakRetained();
    if (lVar22 != 0) {
      puVar12 = puVar11;
      func_0x00010c231320();
      if ((int)puVar12 != 0) {
        lVar21 = lVar22;
        func_0x00010c13b540(lVar22);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar21;
        func_0x0001070c5260();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar3;
        func_0x00010bef1320();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar18;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c2bd7e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar12;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc900(lVar13);
        _objc_release(puVar5);
        _objc_release(puVar12);
        _objc_release(lVar13);
        _objc_release(lVar18);
        _objc_release(lVar3);
        _objc_release(lVar21);
      }
      func_0x00010c299d80(puVar11);
      lVar21 = lVar22;
      func_0x00010c13b540(lVar22);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar21;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar3;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar18;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar13;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b3780((float)param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar13);
      _objc_release(lVar18);
      _objc_release(lVar3);
      _objc_release(lVar21);
      lVar21 = lVar22;
      func_0x00010bf46560(lVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a50c0(lVar22);
      _objc_release(lVar21);
    }
    _objc_release(lVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar11);
    return;
  }
  return;
}



/* Entry: 10715438c; end: 10715455f;  */

void FUN_10715438c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = (undefined4)param_1;
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar1 = param_3;
    func_0x00010c231320();
    if ((int)uVar1 != 0) {
      lVar2 = param_2;
      func_0x00010c13b540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x0001070c5260();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bef1320();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c2bd7e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c0899c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc900(lVar5);
      _objc_release(uVar6);
      _objc_release(uVar1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    func_0x00010c299d80(param_3);
    lVar2 = param_2;
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3780((float)(double)CONCAT44(uVar9,uVar8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a50c0(param_2);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107154560; end: 107154633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107154560(double param_1,double param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar2 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if ((param_4 == 0) || (param_5 != 0)) {
      func_0x00010c10a100(lVar2);
      func_0x00010bf72ce0(lVar2);
      iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
      func_0x00010c06c6e0();
      if (iVar1 != 0) {
        func_0x00010c138400(*(undefined8 *)(param_3 + 0x20));
      }
    }
    else {
      lVar3 = (long)_DAT_1127644ac;
      func_0x00010c1a1640(*(undefined8 *)(lVar2 + lVar3));
      func_0x00010c23d0a0(param_4);
      dVar4 = param_1;
      func_0x00010c14e120(param_4);
      func_0x00010c1c5240(param_1 * dVar4,param_2 * dVar4,*(undefined8 *)(lVar2 + lVar3));
      func_0x00010be04620(lVar2);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107154634; end: 107154843;  */

void FUN_107154634(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1071476b4;
    uStack_70 = 0x1071476c4;
    uStack_68 = 0;
    uVar2 = param_2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf529e0();
    if (uVar8 < 2) {
      uVar8 = 0;
    }
    else {
      func_0x00010bf529e0(uVar2);
      uVar8 = uVar2;
      func_0x00010c25e980(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x0001070c58b4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb97e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c28c540(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107154844; end: 107154b0b;  */

uint FUN_107154844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  if ((uint)uVar4 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = param_2;
    _objc_release(uVar5);
  }
  _objc_release(param_2);
  return (uint)uVar4 ^ 1;
}



/* Entry: 107154b0c; end: 107154b23;  */

void FUN_107154b0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateWithBitmojiUser_bitmojiUse_112680b78,
             param_2,PTR____NSArray0__struct_11034ab48,param_2);
  return;
}



/* Entry: 107154b24; end: 107154c4b;  */

void FUN_107154b24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_2);
  func_0x00010c09e180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0ff580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107154c4c; end: 107154d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107154c4c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127644ac);
      func_0x00010c09fce0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf0c0();
      _objc_release(uVar1);
    }
    else {
      func_0x00010be03220(param_1,param_2,6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107154d4c; end: 107154d63;  */

void FUN_107154d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec4cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__storyPressed_11258ecd0);
  return;
}



/* Entry: 107154d64; end: 107154de7;  */

void FUN_107154d64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010c273880(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107154de8; end: 107154ea3; -[PreviewViewController _isCropped] */

uint FUN_107154de8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe6060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c072080(uVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  return (uint)uVar5 ^ 1;
}



/* Entry: 107154ea4; end: 107154f4f; -[PreviewViewController _isPreviewToolsLabelsEnabled] */

undefined8 FUN_107154ea4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5284();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c111420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf91340();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107154f50; end: 107154f53; -[PreviewViewController _sceneDidDisconnectNotification:] */

void FUN_107154f50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applicationWillTerminateNotific_112550ff8);
  return;
}



/* Entry: 107154f54; end: 10715508b; -[PreviewViewController _applicationWillTerminateNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107154f54(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x0001091a25c8();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c15df80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5140();
    _objc_release(uVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c15df80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afc40();
    _objc_release(uVar1);
    _objc_release(uVar2);
    uVar2 = *(ulong *)(param_1 + (long)_DAT_1127644ac);
    func_0x00010c0811c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c242ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ea20();
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be64cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyListenersOfTriggeredLifec_112576cd0,7)
  ;
  return;
}



/* Entry: 10715508c; end: 10715512f; -[PreviewViewController _requestUserLocationAccess] */

void FUN_10715508c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09ea80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2327c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c09ea80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136c80();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107155130; end: 10715517f;  */

void FUN_107155130(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2033e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107155180; end: 1071553cf; -[PreviewViewController _startupUpdatingLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107155180(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c06e260();
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar7 == 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lVar3 = lVar2;
      func_0x00010c23f6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c23f6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_112764584;
        lVar6 = *(long *)(param_1 + lVar7);
        *(long *)(param_1 + lVar7) = lVar3;
        goto LAB_107155330;
      }
      goto LAB_107155204;
    }
    lVar6 = lVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112764584;
    lVar5 = *(long *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar3;
  }
  else {
LAB_107155204:
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c5674();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112764584;
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar3;
    _objc_release(uVar4);
  }
  _objc_release(lVar5);
LAB_107155330:
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a9bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logLocationAccuracyForPreviewVis_112608100,
             *(undefined8 *)(param_1 + lVar7));
  return;
}



/* Entry: 1071553d0; end: 107155567; -[PreviewViewController viewWillDisappear:] */

void FUN_1071553d0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f8a50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillDisappear__112685438);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06bc00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010c12bc60(param_1);
    func_0x00010c169600(param_1);
    func_0x00010c256e40(param_1);
    func_0x00010c256100(param_1);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c562c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28dee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2565c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar6);
    func_0x00010be954c0(param_1);
    func_0x00010be64cc0(param_1);
  }
  return;
}



/* Entry: 107155568; end: 1071559cb; -[PreviewViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107155568(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f8a50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06bc00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010c169600(param_1);
    func_0x00010c18e8e0(param_1);
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c073aa0();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x0001070c4790();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf6d9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010beffe80();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar6 != 0) {
        uVar1 = param_1;
        func_0x00010c15df80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a5140();
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_1;
        func_0x00010c15df80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0afc20();
        _objc_release(uVar2);
        _objc_release(uVar1);
        func_0x00010bde0f80(param_1);
      }
    }
    if ((*(byte *)(param_1 + (long)_DAT_112764530) & 1) == 0) {
      func_0x00010bde0f80(param_1);
    }
    uVar1 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfae100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3300();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29f360();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc12c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3320();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c562c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28dee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2565c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar7);
    uVar1 = param_1;
    func_0x00010bfe6620();
    if ((uVar1 & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c104980();
      _objc_release(puVar7);
    }
    func_0x00010c12bb60(param_1);
    func_0x00010be64cc0(param_1);
  }
  return;
}



/* Entry: 1071559cc; end: 1071559d3; -[PreviewViewController shouldAutorotate] */

undefined8 FUN_1071559cc(void)

{
  return 0;
}



/* Entry: 1071559d4; end: 107155a33; -[PreviewViewController supportedInterfaceOrientations] */

undefined1 * FUN_1071559d4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0xffffffffffffffd0;
  func_0x000100456ca0();
  if (param_1 != 0) {
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_supportedInterfaceOrientations_112676698);
    return puVar5;
  }
  iVar1 = 0;
  puVar5 = (undefined1 *)0x2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    puVar5 = (undefined1 *)0x2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        puVar5 = *(undefined1 **)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return puVar5;
}



/* Entry: 107155a34; end: 107155a83; -[PreviewViewController preferredInterfaceOrientationForPresentation] */

void FUN_107155a34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x000100456ca0();
  if ((int)uVar1 != 0) {
    puStack_28 = PTR_PTR_1126f8a50;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_preferredInterfaceOrientationFor_11261f540);
  }
  return;
}



/* Entry: 107155a84; end: 107155f87; -[PreviewViewController shouldShowHintLabel] */

/* WARNING: Possible PIC construction at 0x000107155f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107155f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107155f28) */
/* WARNING: Removing unreachable block (ram,0x000107155f68) */
/* WARNING: Removing unreachable block (ram,0x000107155f78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107155a84(double param_1,double param_2,double param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_4;
  func_0x00010c11e820();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = *(undefined **)(param_4 + _DAT_1127644ac);
    func_0x00010c07e920();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = param_4;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x0001070c5530();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010c274120();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c22f820();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar10);
      _objc_release();
      if ((int)puVar4 != 0) {
        if (puRam00000001136ca068 == (undefined *)0x0) {
          puVar1 = param_4;
          func_0x00010c1122a0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          _objc_release();
          if (puVar1 != (undefined *)0x0) {
            puVar10 = param_4;
            func_0x00010c1122a0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar10;
            func_0x00010bfe5d60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf20c00();
            _CGRectGetWidth();
            dRam00000001131ab500 = (double)(long)((param_1 + -6.0 + -74.0 + 20.0) / 3.0);
            _objc_release(puVar1);
            _objc_release();
          }
          func_0x000108ede8b8();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar10;
          func_0x000108ede8d0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x000108ede918();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x000108ede8e8();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x000108ede8a0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x000108ede9a8();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x000108ede6a8();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          _objc_release(puVar10);
          _objc_retain(puVar7);
          puVar1 = puVar7;
          func_0x00010bf52a60();
          lVar8 = lRam0000000000000000;
          while (puVar1 != (undefined *)0x0) {
            puVar10 = (undefined *)0x0;
            do {
              dVar11 = param_3;
              if (lRam0000000000000000 != lVar8) {
                _objc_enumerationMutation(puVar7);
                dVar11 = param_3;
              }
              uVar9 = *(undefined8 *)((long)puVar10 * 8);
              puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
              func_0x00010bf6d680(0x402a000000000000);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf20ba0(0x7fefffffffffffff,0x402a000000000000,uVar9);
              param_3 = dVar11;
              _objc_release(puVar3);
              _objc_release(puVar2);
              puVar2 = puRam00000001136ca068;
              if (dRam00000001131ab500 < dVar11) {
                puRam00000001136ca068 = PTR____kCFBooleanFalse_11034ab60;
                _objc_release(puVar2);
                uRam00000001131ab510 = 0x404c000000000000;
                dRam00000001131ab508 = 52.0;
                goto code_r0x00010bf1f3c0;
              }
              if (dRam00000001131ab508 < dVar11) {
                dRam00000001131ab508 = (double)(long)dVar11;
              }
              puVar10 = puVar10 + 1;
            } while (puVar1 != puVar10);
            puVar1 = puVar7;
            func_0x00010bf52a60();
          }
          _objc_release(puVar7);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c13b540(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_4;
          func_0x0001070c5530();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c274120();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c22f820();
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puRam00000001136ca068;
          puRam00000001136ca068 = puVar1;
          _objc_release(puVar10);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(param_4);
code_r0x00010bf1f3c0:
          puVar1 = puRam00000001136ca068;
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001136ca068,PTR_s_boolValue_1125a5698);
          return puVar1;
        }
        puVar1 = puRam00000001136ca068;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto code_r0x00010bf1f3c0;
        goto LAB_107155f84;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return (undefined *)0x0;
  }
LAB_107155f84:
  ___stack_chk_fail();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar10 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinX();
  _objc_release(puVar10);
  puVar10 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 - param_2;
  _objc_release(puVar10);
  func_0x00010bf4c660(*(undefined8 *)(puVar1 + _DAT_11276454c));
  NEON_fminnm(param_1,0x4069000000000000);
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxY();
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 107155f88; end: 107156083; -[PreviewViewController storyQuickPostFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107155f88(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinX();
  dVar2 = param_2 + param_1;
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 - param_2;
  _objc_release(lVar1);
  func_0x00010bf4c660(*(undefined8 *)(param_3 + _DAT_11276454c));
  NEON_fminnm(param_1,0x4069000000000000);
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxY();
  _objc_release(param_3);
  return dVar2;
}



/* Entry: 107156084; end: 107156113; -[PreviewViewController contentViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107156084(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  dVar1 = param_1;
  func_0x00010c0c4080(*(undefined8 *)(param_3 + _DAT_1127644ac));
  if (dVar1 == 0.0) {
    dVar2 = 0.0;
  }
  else if (dVar1 == INFINITY) {
    param_2 = 0.0;
    dVar2 = param_1;
  }
  else {
    dVar2 = param_2 * dVar1;
    if (param_1 <= dVar2) {
      param_2 = param_1 / dVar1;
      dVar2 = param_1;
    }
  }
  auVar3._0_8_ = (long)dVar2;
  auVar3._8_8_ = (long)param_2;
  return auVar3;
}



/* Entry: 107156114; end: 107156363; -[PreviewViewController containerViewContentBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107156114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_1127644ac;
  uVar1 = *(ulong *)(param_5 + lVar8);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar4 = *(ulong *)(param_5 + lVar8);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    _objc_retain(uVar3);
    uVar5 = uVar3;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar5;
  func_0x000109024028();
  uVar6 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf91760();
  _objc_release(uVar6);
  if (((int)uVar7 == 0) || ((uVar2 & 1) != 0)) {
    func_0x00010c0c4080(*(undefined8 *)(param_5 + lVar8));
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar8);
    _objc_release(param_5);
    func_0x00010b6908b0(param_1,param_2,param_3,param_4);
    func_0x00010b690910();
  }
  else {
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar8);
    _objc_release(param_5);
  }
  _objc_release(uVar5);
  return param_1;
}



/* Entry: 107156364; end: 10715651f; -[PreviewViewController fullMediaContentBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107156364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_5;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    func_0x00010bf4b2c0(param_5);
  }
  else {
    lVar5 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_5 + _DAT_1127644ac);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf91760();
  _objc_release(uVar7);
  if ((int)uVar8 != 0) {
    func_0x00010bfa3600(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010c141a80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbba00(param_1,param_2,param_3,param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_5);
  }
  return param_1;
}



/* Entry: 107156520; end: 107156693; -[PreviewViewController timeBaseForVideoTrackedImages] */

void FUN_107156520(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29a9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c29a9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_2);
  lVar2 = lVar3;
  func_0x00010c0818c0();
  if ((int)lVar2 == 0) {
    lVar2 = lVar4;
    func_0x00010c0818a0();
    if (((int)lVar2 != 0) && (lVar2 = lVar4, func_0x00010c0778e0(), (int)lVar2 != 0)) {
      lVar2 = lVar4;
      func_0x00010c100500();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1071565e0;
    }
  }
  else {
    lVar2 = lVar3;
    func_0x00010c27c960();
    _objc_retainAutoreleasedReturnValue();
LAB_1071565e0:
    lVar5 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar5 != 0) {
      func_0x00010bdc1120(&uStack_70,lVar5);
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[2] = uStack_60;
      _objc_release(lVar5);
      goto LAB_10715666c;
    }
  }
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar6;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
LAB_10715666c:
  _objc_release(lVar3);
  _objc_release(lVar4);
  return;
}



/* Entry: 107156694; end: 1071567a3; -[PreviewViewController contentScaleFactor] */

double FUN_107156694(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x00010bf4b2c0();
  uVar2 = param_5;
  dVar4 = param_3;
  dVar6 = param_4;
  func_0x00010c1122a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar5 = dVar4;
  dVar7 = dVar6;
  _objc_release(uVar3);
  _objc_release(uVar2);
  bVar1 = false;
  if ((param_3 == dVar4) && (bVar1 = false, !NAN(param_4) && !NAN(dVar6))) {
    bVar1 = param_4 == dVar6;
  }
  dVar4 = 1.0;
  if (!bVar1) {
    uVar2 = param_5;
    func_0x00010c1122a0(0x3ff0000000000000,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(uVar2);
    _objc_release(param_5);
    dVar4 = dVar7 / param_4;
    if (dVar7 / param_4 <= dVar5 / param_3) {
      dVar4 = dVar5 / param_3;
    }
  }
  return dVar4;
}



/* Entry: 1071567a4; end: 107156883; -[PreviewViewController contentTargetAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1071567a4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  func_0x00010bfc43e0();
  dVar6 = INFINITY;
  if (param_1 == INFINITY) {
    lVar1 = param_2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52160();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = 0.5625;
    if (lVar5 == 0) {
      func_0x00010c0c4080(*(undefined8 *)(param_2 + _DAT_1127644ac));
      param_1 = dVar6;
    }
    _objc_release(lVar5);
  }
  return param_1;
}



/* Entry: 107156884; end: 107156da7; -[PreviewViewController updateXButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107156884(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c071280();
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  if ((int)lVar4 != 0) {
    lVar6 = param_1;
    func_0x00010bdd2060(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf88120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    lVar6 = param_1;
    goto LAB_107156d40;
  }
  lVar7 = (long)_DAT_1127644f0;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  lVar2 = param_1;
  if (lVar6 == 0) {
    lVar6 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = (long)_DAT_1127644ac;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c07e920();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
      func_0x00010c06d080();
      if (iVar1 != 0) goto LAB_107156be4;
      uVar5 = *(ulong *)(param_1 + lVar6);
      func_0x00010c070a20();
      if ((uVar5 & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
        func_0x00010c075060();
        if (iVar1 == 0) goto LAB_107156be4;
      }
      func_0x00010bdd2060(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be43d20(param_1);
      lVar6 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf88120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar7);
      _objc_release(lVar6);
LAB_107156be4:
      func_0x00010beebda0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar6 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(lVar7);
  }
  else {
    lVar6 = param_1;
    func_0x00010bdd2060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c084c40();
    _objc_release(lVar6);
    _objc_release(lVar3);
    if (lVar4 == 3) {
      lVar6 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010c2be8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar4);
      _objc_release(lVar6);
    }
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c084c40();
    _objc_release(lVar6);
    _objc_release(lVar4);
    if (lVar7 == 4) {
      lVar6 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c2be8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf88120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar6 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
    func_0x00010c07e880();
    if (iVar1 != 0) {
      lVar6 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d25a0();
      lVar4 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bf88120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar7);
      _objc_release(lVar2);
      _objc_release(lVar6);
      lVar6 = param_1;
      func_0x00010bdd2060(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c2be8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(lVar2);
      lVar2 = param_1;
LAB_107156d40:
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar6);
      return;
    }
  }
  return;
}



/* Entry: 107156da8; end: 107156f1f; -[PreviewViewController handleDeletableViewGesture:currentTouchTarget:deleteAnimationCompletion:] */

void FUN_107156da8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beffa20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beffa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar4 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bdf9b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010010fab4();
    if ((puVar1 != (undefined *)0x0) && ((int)puVar2 != 0)) {
      puVar2 = PTR_PTR_1126d4d88;
      func_0x00010bf5a2e0(PTR_PTR_1126d4d88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2ad80(param_1);
      _objc_release(puVar2);
    }
  }
  else {
    puVar1 = PTR_PTR_1126d4d88;
    func_0x00010bf5a2c0(PTR_PTR_1126d4d88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2ad80(param_1);
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107156f20; end: 1071575bb; -[PreviewViewController _endDeletableViewGestures:currentTouchTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107156f20(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar17 = (long)_DAT_1127644f0;
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2737a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2c80();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2737a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar5);
  uVar1 = param_1;
  func_0x00010bdf9b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0df520();
  if ((uVar2 < 2) &&
     (uVar2 = param_1, func_0x00010c27af80(), puVar6 = PTR_PTR_1126d4d90, (int)uVar2 != 0)) {
    _objc_retain(uVar1);
    _objc_opt_class(puVar6);
    uVar7 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar6);
    uVar2 = uVar1;
    if ((uVar7 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    if (uVar2 != 0) {
      func_0x00010c18b940(uVar1);
    }
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    func_0x00010bfd0ce0(param_1);
    puVar6 = PTR_PTR_1126ba960;
    _objc_opt_class(PTR_PTR_1126ba960);
    uVar7 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar6);
    if ((uVar7 & 1) == 0) {
      puVar6 = PTR_PTR_1126c4850;
      _objc_opt_class(PTR_PTR_1126c4850);
      uVar7 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar6);
      puVar6 = PTR_DAT_1126a5950;
      if ((uVar7 & 1) == 0) {
        _objc_retain(uVar2);
        func_0x00010010fab4(uVar2,puVar6);
        param_1 = uVar2;
      }
      else {
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1;
        func_0x0001070c45bc();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar7;
        func_0x00010bf30080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a2920();
        _objc_release(uVar16);
        _objc_release(uVar7);
      }
    }
    else {
      _objc_retain(uVar2);
      uVar7 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar7;
      func_0x00010c241880();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar16;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0706c0();
      _objc_release(uVar8);
      _objc_release(uVar16);
      _objc_release(uVar7);
      if ((int)uVar9 != 0) {
        uVar7 = param_1;
        func_0x00010bfa3600(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar7;
        func_0x00010c241880();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf746e0();
        _objc_release(uVar8);
        _objc_release(uVar16);
        _objc_release(uVar7);
      }
      uVar7 = uVar2;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar7;
      FUN_107125260();
      _objc_release(uVar7);
      if ((int)uVar16 != 0) {
        uVar7 = param_1;
        func_0x00010bfa3600(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar7;
        func_0x00010bfede40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220ac0();
        _objc_release(uVar8);
        _objc_release(uVar16);
        _objc_release(uVar7);
      }
      puVar6 = PTR_PTR_1126bab40;
      uVar7 = uVar2;
      func_0x00010c253880(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfee100();
      _objc_release(uVar7);
      if (puVar6 == (undefined *)0xb) {
        uVar7 = param_1;
        func_0x00010bfa3600(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar7;
        func_0x00010c0d2940();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3c060();
        _objc_release(uVar8);
        _objc_release(uVar16);
        _objc_release(uVar7);
        uVar7 = param_1;
        func_0x00010bfa3600(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar7;
        func_0x00010c0d2940();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf840a0();
        _objc_release(uVar8);
        _objc_release(uVar16);
        _objc_release(uVar7);
      }
      uVar7 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar7;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar16;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf74780();
      _objc_release(uVar8);
      _objc_release(uVar16);
      _objc_release(uVar7);
      uVar7 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar7;
      func_0x0001070c45bc();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar16;
      func_0x00010c254980();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c253880(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07f9e0();
      func_0x00010c06f8c0();
      func_0x00010c073ae0();
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_1;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c243340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0b20(uVar8);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(param_1);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar16);
      _objc_release(uVar7);
      param_1 = uVar2;
    }
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1677c0(0x3ff0000000000000,uVar1);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071575bc; end: 1071577a3;  */

void FUN_1071575bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  _objc_opt_isKindOfClass(uVar7,puVar1);
  if ((uVar7 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126c4850;
    _objc_opt_class(PTR_PTR_1126c4850);
    _objc_opt_isKindOfClass(uVar7,puVar1);
    puVar1 = PTR_DAT_1126a5950;
    if ((uVar7 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar8);
      lVar4 = lVar8;
      func_0x00010010fab4(lVar8,puVar1);
      _objc_release(lVar8);
      if (((int)lVar4 == 0) || (lVar8 == 0)) goto LAB_107157774;
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfa3600(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf11400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6b700();
      goto LAB_10715775c;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = uVar6;
    func_0x00010bf30100(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b840(uVar6);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf2d340();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
      goto LAB_107157774;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e580();
LAB_10715775c:
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
LAB_107157774:
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c111180(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1071577a4; end: 1071579a7; -[PreviewViewController trashContains:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1071577a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beffa20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27afa0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    lVar7 = (long)_DAT_1127644f0;
    uVar5 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c2737a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf60800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b40();
    dVar8 = param_1;
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (param_1 <= 0.0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c2737a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_5;
      func_0x00010c1122a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27afc0(uVar6,param_6,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar6);
      _CGRectInset(dVar8,param_2,param_3,param_4,0xc024000000000000,0xc024000000000000);
      dVar9 = dVar8;
      uVar5 = param_2;
      func_0x00010c1122a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_5;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_7;
      func_0x00010c09ef00(param_7,param_6,uVar1);
      _CGRectContainsPoint(dVar8,param_2,param_3,param_4,dVar9,uVar5);
      _objc_release(uVar1);
      _objc_release(param_5);
    }
  }
  else {
    uVar6 = 1;
  }
  _objc_release(param_7);
  return uVar6;
}



/* Entry: 1071579a8; end: 1071579af; -[PreviewViewController dismissPreviewViewController] */

void FUN_1071579a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelPreviewWithExitType__1125a9480,1);
  return;
}



/* Entry: 1071579b0; end: 107157a63; -[PreviewViewController setGesturesEnabled:] */

/* WARNING: Possible PIC construction at 0x000107157a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107157a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071579b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c141c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0fc240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c272950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764504),PTR_s_toggleGestureOptions_enabled__11267a478
             ,1,param_3);
  return;
}



/* Entry: 107157a64; end: 107157a8f; -[PreviewViewController resetGestureRecognizers] */

/* WARNING: Possible PIC construction at 0x000107157a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107157a7c) */

void FUN_107157a64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setGesturesEnabled__112646648,0);
  return;
}



/* Entry: 107157a90; end: 107157c97; -[PreviewViewController _allTrackedObjectViews] */

undefined * FUN_107157a90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c279080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010bf00ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_1;
        func_0x00010c278ba0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar11 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar3,param_2,lVar4);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar2;
      puVar9 = &uStack_120;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar5 = puVar3;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf308a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (puVar8 == (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x00010bfa3600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c253b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  func_0x00010bfa3600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c081580();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar9);
  return puVar7;
}



/* Entry: 107157c98; end: 107157dff; -[PreviewViewController _touchControlGestureSupported:] */

long FUN_107157c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf308a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c253b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c081580();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107157e00; end: 107157e97; -[PreviewViewController _handleTouchControlGesture:] */

void FUN_107157e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becdb00(param_1,param_2,param_3);
  if ((int)uVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_107157e98;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_30 = param_3;
    uStack_28 = param_1;
    func_0x00010be6fe20(param_1,param_2,param_3,&puStack_50);
    _objc_release(uStack_30);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107157e98; end: 10715894f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107157e98(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  uVar12 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
  _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
  _objc_opt_isKindOfClass(uVar12,puVar1);
  if ((uVar12 & 1) == 0) {
    uVar12 = *(ulong *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    _objc_opt_isKindOfClass(uVar12,puVar1);
    if ((uVar12 & 1) == 0) {
      uVar12 = *(ulong *)(param_1 + 0x20);
      puVar1 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
      _objc_opt_class(PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148);
      _objc_opt_isKindOfClass(uVar12,puVar1);
      if ((uVar12 & 1) != 0) {
        lVar6 = (long)_DAT_112764588;
        uVar12 = *(long *)(param_1 + 0x28) + lVar6;
        _objc_loadWeakRetained();
        uVar3 = uVar12;
        func_0x00010010fab4();
        uVar9 = uVar12;
        if ((int)uVar3 == 0) {
          uVar9 = 0;
        }
        _objc_retain(uVar9);
        _objc_release(uVar12);
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010beffa20();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = *(long *)(param_1 + 0x28) + lVar6;
        _objc_loadWeakRetained(lVar13);
        lVar14 = lVar5;
        func_0x00010beffa00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        uVar12 = uVar9;
        func_0x00010c071280();
        _objc_release(uVar9);
        lVar13 = *(long *)(param_1 + 0x28);
        if (((uVar12 & 1) == 0) && (lVar14 != 0)) {
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar13;
          func_0x00010c0fc5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c07aa80();
          _objc_release(lVar4);
          _objc_release(lVar6);
          _objc_release(lVar13);
          lVar13 = *(long *)(param_1 + 0x28);
          func_0x00010bfa3600(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar13;
          func_0x00010beffa20();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          if ((int)lVar5 != 0) goto LAB_10715820c;
          func_0x00010c141a20();
          goto LAB_107158248;
        }
        lVar13 = lVar13 + lVar6;
        _objc_loadWeakRetained(lVar13);
        func_0x00010c141aa0();
        goto LAB_107158258;
      }
    }
    else {
      lVar6 = (long)_DAT_112764588;
      uVar12 = *(long *)(param_1 + 0x28) + lVar6;
      _objc_loadWeakRetained();
      uVar3 = uVar12;
      func_0x00010010fab4();
      uVar9 = uVar12;
      if ((int)uVar3 == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar12);
      uVar12 = uVar9;
      func_0x00010c071280();
      _objc_release(uVar9);
      if ((uVar12 & 1) == 0) {
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010beffa20();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = *(long *)(param_1 + 0x28) + lVar6;
        _objc_loadWeakRetained(lVar13);
        lVar14 = lVar5;
        func_0x00010beffa00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        lVar13 = *(long *)(param_1 + 0x28);
        if (lVar14 == 0) {
          lVar13 = lVar13 + lVar6;
          _objc_loadWeakRetained(lVar13);
          func_0x00010c0f3600();
        }
        else {
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar13;
          func_0x00010c0fc5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c07aa80();
          _objc_release(lVar4);
          _objc_release(lVar6);
          _objc_release(lVar13);
          lVar13 = *(long *)(param_1 + 0x28);
          func_0x00010bfa3600(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar13;
          func_0x00010beffa20();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          if ((int)lVar5 == 0) {
            func_0x00010c27ad60();
          }
          else {
LAB_10715820c:
            func_0x00010c115580();
          }
LAB_107158248:
          _objc_release(lVar4);
          _objc_release(lVar6);
        }
LAB_107158258:
        _objc_release(lVar13);
        goto LAB_107158260;
      }
    }
  }
  else {
    lVar14 = *(long *)(param_1 + 0x28) + (long)_DAT_112764588;
    _objc_loadWeakRetained(lVar14);
    func_0x00010c0fc1e0();
LAB_107158260:
    _objc_release(lVar14);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar6 == 1) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3600(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf5afe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + 0x28);
    lVar14 = (long)_DAT_112764588;
    lVar6 = lVar13 + lVar14;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c278ba0(lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2771c0(uVar8);
    _objc_release(lVar13);
    _objc_release(lVar6);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3600(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf5af00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x28) + lVar14;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c2771c0(uVar8);
    _objc_release(lVar6);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar12 = *(long *)(param_1 + 0x28) + lVar14;
    _objc_loadWeakRetained();
    puVar1 = PTR_PTR_1126ba960;
    _objc_opt_class(PTR_PTR_1126ba960);
    uVar9 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar1);
    _objc_release(uVar12);
    uVar12 = *(long *)(param_1 + 0x28) + lVar14;
    _objc_loadWeakRetained();
    if ((uVar9 & 1) == 0) {
      puVar1 = PTR_PTR_1126c4850;
      _objc_opt_class(PTR_PTR_1126c4850);
      uVar9 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar1);
      _objc_release(uVar12);
      uVar12 = *(ulong *)(param_1 + 0x28);
      if ((uVar9 & 1) != 0) {
        func_0x00010bfa3600(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar12;
        func_0x00010c29b9c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = *(long *)(param_1 + 0x28) + lVar14;
        _objc_loadWeakRetained(lVar14);
        func_0x00010bf80c80(uVar3);
        _objc_release(lVar14);
        _objc_release(uVar3);
        _objc_release(uVar9);
        goto LAB_1071584c0;
      }
      lVar6 = uVar12 + lVar14;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c278ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      if (uVar12 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bfa3600(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar7;
        func_0x00010c29b9c0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = *(long *)(param_1 + 0x28);
        lVar6 = lVar13 + lVar14;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c278ba0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf80c80(uVar8);
        _objc_release(lVar13);
        _objc_release(lVar6);
        _objc_release(uVar8);
        _objc_release(uVar10);
        _objc_release(uVar7);
        uVar12 = *(long *)(param_1 + 0x28) + lVar14;
        _objc_loadWeakRetained();
        uVar3 = uVar12;
        func_0x00010010fab4();
        uVar9 = uVar12;
        if ((int)uVar3 == 0) {
          uVar9 = 0;
        }
        _objc_retain(uVar9);
        _objc_release(uVar12);
        if (uVar9 != 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          goto LAB_107158420;
        }
        uVar12 = 0;
        goto LAB_1071584c0;
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfa3600(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010c29b9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf80c80();
      _objc_release(uVar8);
      _objc_release(uVar10);
      _objc_release(uVar7);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
LAB_107158420:
      func_0x00010c24e500(uVar10);
LAB_1071584c0:
      _objc_release(uVar12);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c06ff60();
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar11);
    if ((int)uVar7 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfa3600(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ef80();
      _objc_release(uVar8);
      _objc_release(uVar10);
      _objc_release(uVar7);
    }
  }
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar6 != 3) {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c252440();
    if (lVar6 != 4) {
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x00010c252440();
      if (lVar6 != 5) {
        return;
      }
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3600(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112764588;
  lVar6 = *(long *)(param_1 + 0x28) + lVar14;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c27af80(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c277200(uVar8);
  _objc_release(lVar6);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3600(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf5afe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 0x28);
  lVar6 = lVar13 + lVar14;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c278ba0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27af80(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c2771e0(uVar8);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar7);
  uVar12 = *(long *)(param_1 + 0x28) + lVar14;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar3 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar1);
  uVar9 = uVar12;
  if ((uVar3 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar12);
  puVar1 = PTR_PTR_1126ba8a8;
  if (uVar9 == 0) {
    lVar14 = *(long *)(param_1 + 0x28) + lVar14;
    _objc_loadWeakRetained();
    lVar6 = lVar14;
    func_0x00010010fab4();
    _objc_release(lVar14);
    if ((lVar14 == 0) || ((int)lVar6 == 0)) goto LAB_107158804;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c13b540(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a3e0(puVar1);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = uVar11;
    func_0x00010bfa3600(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2be0(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar10);
  }
  func_0x00010bfaf720(*(undefined8 *)(param_1 + 0x28));
LAB_107158804:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107158950; end: 107158ae3; -[PreviewViewController _panPinchOrRotateWithGestureRecognizer:block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107158950(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d4d98;
  func_0x00010bf5a300(PTR_PTR_1126d4d98,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beb2a80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_3;
    func_0x00010c252440();
    if (lVar3 == 1) {
      lVar3 = param_1 + (long)_DAT_112764588;
      _objc_loadWeakRetained();
      _objc_release();
      lVar4 = (long)_DAT_11276458c;
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + lVar4) = 1;
        func_0x00010becdaa0(param_1,param_2,param_3);
      }
      else {
        *(long *)(param_1 + lVar4) = *(long *)(param_1 + lVar4) + 1;
      }
    }
    (**(code **)(param_4 + 0x10))(param_4);
    lVar3 = param_3;
    func_0x00010c252440();
    if (lVar3 == 2) {
      func_0x00010becdac0(param_1,param_2,param_3);
    }
    lVar3 = param_3;
    func_0x00010c252440();
    if (((lVar3 == 3) || (lVar3 = param_3, func_0x00010c252440(), lVar3 == 4)) ||
       (lVar3 = param_3, func_0x00010c252440(), lVar3 == 5)) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11276458c) + -1;
      *(long *)(param_1 + (long)_DAT_11276458c) = lVar3;
      if (lVar3 == 0) {
        func_0x00010becdae0(param_1,param_2,param_3);
        uVar2 = param_1;
        func_0x00010c06fa20();
        if ((int)uVar2 == 0) {
          func_0x00010c111180(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28d140();
          _objc_release(param_1);
        }
        else {
          func_0x00010c28d160(param_1);
        }
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107158ae4; end: 107158b87; -[PreviewViewController trackableViewOfTouchTarget:] */

void FUN_107158ae4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bdf9b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010010fab4();
  lVar3 = param_1;
  if ((int)lVar2 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  puVar1 = PTR_DAT_1126a5960;
  lVar2 = 0;
  if (lVar3 != 0) {
    _objc_retain(param_1);
    lVar3 = param_1;
    func_0x00010010fab4(param_1,puVar1);
    _objc_release(param_1);
    _objc_release(param_1);
    lVar2 = 0;
    if ((param_1 != 0) && ((int)lVar3 != 0)) {
      _objc_retain(param_1);
      lVar2 = param_1;
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107158b88; end: 107158ce3; -[PreviewViewController _deletableViewOfTouchTarget:] */

void FUN_107158b88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010beffa20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beffa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_1);
  if (uVar2 == 0) {
    puVar3 = PTR_PTR_1126d4d90;
    _objc_opt_class(PTR_PTR_1126d4d90);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    puVar3 = PTR_DAT_1126a51c0;
    if ((uVar4 & 1) == 0) {
      _objc_retain(param_3);
      uVar4 = param_3;
      func_0x00010010fab4(param_3,puVar3);
      uVar1 = param_3;
      if ((int)uVar4 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_3);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = param_3;
        func_0x00010c071280();
        _objc_release(param_3);
        if ((uVar4 & 1) == 0) {
          uVar4 = param_3;
          func_0x00010c26ba60(param_3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      _objc_retain(param_3);
      uVar4 = param_3;
    }
  }
  else {
    uVar4 = uVar2;
    func_0x00010bf6b1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107158ce4; end: 107159453; -[PreviewViewController _touchControlGestureBegins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107158ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c111f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24eb00();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c084c40();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar6);
  if (lVar5 == 0xc) {
    lVar1 = lVar4;
    func_0x00010bf606e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_storeWeak(param_1 + _DAT_112764588,lVar1);
      lVar6 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161840();
      _objc_release(lVar6);
      func_0x00010bf18200(lVar4);
    }
    goto LAB_107159048;
  }
  lVar6 = lVar2;
  func_0x00010bf308a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar6 = lVar2;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) goto LAB_107158ecc;
    lVar6 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf11500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar6);
    if (lVar5 == 0) {
      lVar6 = param_1;
      func_0x00010be163e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010c2774a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar1 != 0) {
        _objc_storeWeak(param_1 + _DAT_112764588,lVar1);
        goto LAB_107159048;
      }
      lVar6 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c253b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar6);
      if (lVar5 == 0) {
        lVar6 = param_1;
        func_0x00010c06fa20();
        if (((int)lVar6 != 0) && (lVar6 = lVar4, func_0x00010bf4b400(), (int)lVar6 != 0)) {
          lVar6 = lVar4;
          func_0x00010bf606e0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_storeWeak(param_1 + _DAT_112764588,lVar6);
          _objc_release(lVar6);
          lVar6 = param_1;
          func_0x00010c1122a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c161840();
          _objc_release(lVar6);
          func_0x00010bf18200(lVar4);
        }
        goto LAB_10715904c;
      }
      lVar6 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c253b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar6);
      lVar6 = (long)_DAT_112764588;
      _objc_storeWeak(param_1 + lVar6,lVar1);
      lVar3 = lVar1;
      func_0x00010c262ca0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300();
      _objc_release(lVar3);
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfd0ce0(param_1);
      _objc_release(lVar6);
      lVar6 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c0fc5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe2c20();
      _objc_release(lVar5);
      _objc_release(lVar3);
      goto LAB_107159040;
    }
    lVar6 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf11500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_storeWeak(param_1 + _DAT_112764588,lVar1);
    _objc_retain();
    func_0x00010bfd0ce0(param_1);
    _objc_release(lVar1);
  }
  else {
    _objc_release();
LAB_107158ecc:
    lVar6 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2c20();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bf5afe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2340();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar6);
    lVar1 = lVar2;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = lVar2;
    if (lVar1 == 0) {
      func_0x00010bf308a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c29bf00(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
    else {
      func_0x00010bf5e800();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_storeWeak(param_1 + _DAT_112764588,lVar6);
    _objc_retain();
    func_0x00010bfd0ce0(param_1);
    lVar1 = lVar6;
LAB_107159040:
    _objc_release(lVar6);
  }
LAB_107159048:
  _objc_release(lVar1);
LAB_10715904c:
  lVar6 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf606c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070080();
  func_0x00010c287d60(lVar3);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107159454; end: 1071594f7; -[PreviewViewController _touchControlGestureChanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107159454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112764588;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bdf9b60(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfd0ce0(param_1,param_2,param_3,lVar3,0);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071594f8; end: 107159a7f; -[PreviewViewController _touchControlGestureEnds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071594f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar12 = (long)_DAT_1127644f0;
  uVar1 = *(ulong *)(param_1 + lVar12);
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06ff60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c111f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13fe80();
      goto LAB_1071595d4;
    }
  }
  else {
    _objc_release();
LAB_1071595d4:
    _objc_release(uVar1);
  }
  lVar11 = (long)_DAT_112764588;
  lVar8 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar8);
  uVar2 = param_1;
  func_0x00010bdf9b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  lVar8 = param_1 + lVar11;
  _objc_loadWeakRetained();
  if (uVar2 == 0) {
    lVar6 = lVar8;
    func_0x00010010fab4(lVar8,PTR_DAT_1126a5968);
    _objc_release(lVar8);
    bVar13 = false;
    if (((int)lVar6 != 0) && (lVar8 != 0)) {
      _objc_initWeak(auStack_68,param_1);
      uVar2 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c23fc40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0efe60();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010befd9a0(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      bVar13 = true;
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010c278ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    uVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07a120();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar5 == 0) {
      uVar9 = 1;
    }
    else {
      uVar1 = uVar2;
      func_0x00010c081660();
      uVar9 = (uint)uVar1 ^ 1;
    }
    puVar7 = PTR_PTR_1126ba960;
    _objc_opt_class(PTR_PTR_1126ba960);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar7);
    if ((uVar1 & 1) == 0) {
      puVar7 = PTR_PTR_1126c4850;
      _objc_opt_class(PTR_PTR_1126c4850);
      uVar1 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar7);
      if ((uVar1 & 1) == 0) {
        uVar9 = (uint)(uVar2 == 0);
      }
      uVar9 = uVar9 & 1;
    }
    if (uVar9 != 0) {
      lVar8 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar8);
      func_0x00010be09920(param_1);
      _objc_release(lVar8);
    }
    _objc_release(uVar2);
    bVar13 = false;
  }
  uVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) goto LAB_107159980;
  uVar1 = param_1 + lVar11;
  _objc_loadWeakRetained(uVar1);
  uVar3 = param_1;
  func_0x00010c278ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c081660();
  if ((uVar4 & 1) == 0) {
    lVar8 = *(long *)(param_1 + lVar12);
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if (lVar12 != 0) goto LAB_107159980;
    uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112764538);
    lVar12 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar12);
    func_0x00010bfafd00(uVar10);
    _objc_release(lVar12);
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c06ba20();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) goto LAB_107159980;
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar12);
    func_0x00010bfafd00(uVar3);
    _objc_release(lVar12);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_107159980:
  if (!bVar13) {
    _objc_storeWeak(param_1 + lVar11,0);
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c141a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf61d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070080();
    func_0x00010c287d60(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  func_0x00010c242fa0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 107159a80; end: 107159b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107159a80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + _DAT_112764588,0);
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c141a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf61d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070080();
    func_0x00010c287d60(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107159b68; end: 107159f93; -[PreviewViewController startClipLevelEditingWithEditType:currentTouchTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107159b68(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c070a20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) goto LAB_107159f74;
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26e760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf8c7a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar5 != 0x7fffffffffffffff) goto LAB_107159f74;
  }
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070a20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26e700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c159f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar5 != 0) goto LAB_107159f74;
  }
  puVar6 = PTR_PTR_1126ba960;
  if (param_3 - 1U < 2) {
    _objc_retain(param_4);
    _objc_opt_class(puVar6);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar6);
    uVar1 = param_4;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    puVar6 = PTR_DAT_1126a51c0;
    _objc_retain(param_4);
    uVar3 = param_4;
    func_0x00010010fab4(param_4,puVar6);
    uVar2 = param_4;
    if ((int)uVar3 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    uVar3 = uVar2;
    if (uVar1 != 0) {
      uVar3 = param_4;
    }
    func_0x00010c280560(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c070a20();
    uVar4 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    if ((uVar3 & 1) == 0) {
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = uVar7;
    func_0x00010bfd6840();
    if ((int)uVar2 == 0) {
      func_0x00010c0f6160(param_1);
    }
    else {
      uVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0811c0();
      _objc_release(uVar2);
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      if ((int)uVar3 == 0) {
        func_0x00010bf7f1c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c26e700();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c26fe40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c26e760();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c1fab40();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  else if ((param_3 == 0) || (param_3 == 6)) {
    func_0x00010c0f6160(param_1);
  }
LAB_107159f74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107159f94; end: 10715a1a3; -[PreviewViewController finishClipLevelEditingWithEditType:] */

void FUN_107159f94(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0811c0();
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c070a20();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      return;
    }
  }
  else {
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0811c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c26e760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf8c7a0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0x7fffffffffffffff) {
      return;
    }
  }
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c070a20();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c26e700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c159f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      return;
    }
  }
  if ((param_3 < 7) && ((1L << (param_3 & 0x3f) & 0x47U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c13db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x3fc999999999999a,param_1,PTR_s_resumeVideoWithDelay__11262d0e0);
    return;
  }
  return;
}



/* Entry: 10715a1a4; end: 10715a303; -[PreviewViewController resumeVideoWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715a1a4(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar4 = (long)_DAT_112764590;
  if (*(long *)(param_2 + lVar4) != 0) {
    _dispatch_block_cancel();
  }
  _objc_initWeak(auStack_48,param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10715a304;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_70);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined8 *)(param_2 + lVar4) = uVar1;
  _objc_release(uVar3);
  if (param_1 <= 0.0) {
    (**(code **)(*(long *)(param_2 + lVar4) + 0x10))();
  }
  else {
    func_0x000100c749e0((float)param_1,"APPSTORE",*(undefined8 *)(param_2 + lVar4));
  }
  lVar4 = param_2;
  func_0x00010bec24c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5720();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf21f60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(param_2);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10715a304; end: 10715a387;  */

void FUN_10715a304(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10715a388; end: 10715a46b; -[PreviewViewController pauseVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715a388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112764590;
  if (*(long *)(param_1 + lVar4) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
  }
  lVar4 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6160();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bec24c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5720();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf21f60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10715a46c; end: 10715a65b; -[PreviewViewController bounceFeature:willSwitchIntoBounceModeWithCompletion:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010715a6c8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined *
FUN_10715a46c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(lVar1);
      }
      uVar25 = *(ulong *)(lVar27 * 8);
      uVar3 = uVar25;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c081680();
      if ((int)uVar4 == 0) {
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar25;
        func_0x00010bfd97a0();
        _objc_release(uVar25);
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          _objc_release(lVar1);
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010c0fc5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23dea0();
          _objc_release(lVar20);
          _objc_release(lVar2);
          _objc_release(param_3);
          goto LAB_10715a610;
        }
      }
      else {
        _objc_release(uVar3);
      }
      lVar27 = lVar27 + 1;
    } while (lVar2 != lVar27);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  (**(code **)(param_6 + 0x10))(param_6);
LAB_10715a610:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return param_6;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_6;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar24 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar5);
      }
      puVar22 = *(undefined **)((long)puVar26 * 8);
      puVar28 = puVar22;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar28;
      func_0x00010bfd97a0();
      _objc_release(puVar28);
      if ((int)puVar6 == 0) {
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar22 != (undefined *)0x0) {
          puVar28 = param_6;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar28;
          func_0x00010c29b9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar22;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf80c80();
          _objc_release(puVar6);
          goto LAB_10715a8bc;
        }
      }
      else {
        puVar6 = param_6;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar6;
        func_0x00010bf207a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar23;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar28 = (undefined *)0x0;
        }
        else {
          puVar28 = PTR_PTR_1126d4da0;
          _objc_alloc();
          puVar9 = param_6;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010bf207a0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff94c0();
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar23);
        _objc_release(puVar6);
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265760();
LAB_10715a8bc:
        _objc_release(puVar22);
        _objc_release(puVar28);
      }
      puVar26 = puVar26 + 1;
    } while (puVar24 != puVar26);
    puVar24 = puVar5;
    func_0x00010bf52a60();
  }
  func_0x00010c283880(param_6);
  puVar24 = param_6;
  func_0x00010bf46560(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2295e0(param_6);
  _objc_release(puVar24);
  func_0x00010c2888a0(param_6);
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar24 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar5);
      }
      uVar21 = *(undefined8 *)((long)puVar26 * 8);
      uVar13 = uVar21;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bfd97a0();
      _objc_release(uVar13);
      if ((int)uVar14 != 0) {
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265820();
        _objc_release(uVar21);
      }
      puVar26 = puVar26 + 1;
    } while (puVar24 != puVar26);
    puVar24 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar26 = puVar5;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  puVar24 = puVar26;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar24 != (undefined *)0x0) {
    puVar28 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar26);
      }
      puVar23 = *(undefined **)((long)puVar28 * 8);
      puVar6 = puVar23;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar6;
      func_0x00010c294b80();
      if (((ulong)puVar22 & 1) == 0) {
        _objc_release(puVar6);
LAB_10715abd0:
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar23 != (undefined *)0x0) {
          puVar23 = puVar5;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar23;
          func_0x00010c29b9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf80c80();
          _objc_release(puVar22);
          _objc_release(puVar6);
          goto LAB_10715ac38;
        }
      }
      else {
        puVar22 = puVar23;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar22;
        func_0x00010bfd97a0();
        _objc_release(puVar22);
        _objc_release(puVar6);
        if ((int)puVar7 == 0) goto LAB_10715abd0;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265820();
LAB_10715ac38:
        _objc_release(puVar23);
      }
      puVar28 = puVar28 + 1;
    } while (puVar24 != puVar28);
    puVar24 = puVar26;
    func_0x00010bf52a60();
  }
  func_0x00010c283880(puVar5);
  puVar24 = puVar5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar24;
  func_0x00010c2295e0(puVar5);
  _objc_release(puVar24);
  func_0x00010c2888a0(puVar5);
  func_0x00010c28d160(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar26;
  }
  ___stack_chk_fail();
  _objc_retain(puVar28);
  puVar24 = puVar26;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar24;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar24);
  puVar24 = PTR_PTR_1126d4da8;
  func_0x00010bf5a300(PTR_PTR_1126d4da8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ad80(puVar26);
  _objc_release(puVar24);
  puVar24 = puVar26;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar24;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c06ff60();
  _objc_release(puVar22);
  _objc_release(puVar5);
  _objc_release(puVar24);
  if ((int)puVar23 == 0) {
    puVar24 = puVar6;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    if (((puVar24 == (undefined *)0x0) || (puVar28 == *(undefined **)(puVar26 + _DAT_112764508))) ||
       (puVar28 == *(undefined **)(puVar26 + _DAT_11276450c))) {
      _objc_release();
    }
    else {
      puVar24 = *(undefined **)(puVar26 + _DAT_112764510);
      _objc_release();
      if (puVar28 != puVar24) goto LAB_10715afe8;
    }
    puVar24 = puVar26;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar24;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c071280();
    _objc_release(puVar22);
    _objc_release(puVar5);
    _objc_release(puVar24);
    if (((ulong)puVar23 & 1) == 0) {
      puVar24 = puVar26;
      func_0x00010c254bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar24;
      func_0x00010c0791a0();
      _objc_release(puVar24);
      if (((ulong)puVar5 & 1) == 0) {
        puVar24 = puVar26;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar24;
        func_0x00010c2705e0();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar22;
        func_0x00010c081060();
        _objc_release(puVar22);
        _objc_release(puVar5);
        _objc_release(puVar24);
        if (((ulong)puVar23 & 1) == 0) {
          puVar24 = puVar26;
          func_0x00010be4bfa0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar24;
          func_0x00010c06c2a0();
          _objc_release(puVar24);
          if ((int)puVar5 == 0) {
LAB_10715b2b4:
            puVar24 = puVar26 + _DAT_112764588;
            _objc_loadWeakRetained();
            _objc_release();
            if (puVar24 == (undefined *)0x0) {
              puVar24 = PTR_PTR_1126d4d98;
              func_0x00010bf5a300();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar26;
              func_0x00010be163e0(puVar26);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar5;
              func_0x00010bfc1c20();
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar24;
              func_0x00010c22e4a0();
              _objc_release(puVar22);
              _objc_release(puVar5);
              _objc_release(puVar24);
              if (((ulong)puVar23 & 1) == 0) {
                puVar5 = puVar6;
                func_0x00010bf308a0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar5 == (undefined *)0x0) {
                  puVar5 = puVar26;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  puVar24 = puVar5;
                  func_0x00010bf11400();
                  _objc_retainAutoreleasedReturnValue();
                  puVar23 = puVar24;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar23;
                  func_0x00010bf11500();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar7 == (undefined *)0x0) {
                    puVar8 = puVar26;
                    func_0x00010bfa3600();
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar8;
                    func_0x00010c253b20();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar9;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar10;
                    func_0x00010c253b80();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar11 == (undefined *)0x0) {
                      puVar12 = puVar26;
                      func_0x00010bfa3600();
                      _objc_retainAutoreleasedReturnValue();
                      puVar15 = puVar12;
                      func_0x00010c23fc40();
                      _objc_retainAutoreleasedReturnValue();
                      puVar16 = puVar15;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      puVar17 = puVar16;
                      func_0x00010c0efe60();
                      _objc_retainAutoreleasedReturnValue();
                      puVar22 = puVar17;
                      func_0x00010bf4b400();
                      if (((ulong)puVar22 & 1) == 0) {
                        puVar18 = puVar26;
                        func_0x00010be4bfa0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar22 = puVar18;
                        func_0x00010c22e5c0();
                        if (((ulong)puVar22 & 1) == 0) {
                          func_0x00010be163e0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar22 = puVar26;
                          func_0x00010c2774a0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar22 = (undefined *)(ulong)(puVar22 != (undefined *)0x0);
                          _objc_release();
                          _objc_release(puVar26);
                        }
                        else {
                          puVar22 = (undefined *)((long)&lRam0000000000000000 + 1);
                        }
                        _objc_release(puVar18);
                      }
                      else {
                        puVar22 = (undefined *)((long)&lRam0000000000000000 + 1);
                      }
                      _objc_release(puVar17);
                      _objc_release(puVar16);
                      _objc_release(puVar15);
                      _objc_release(puVar12);
                    }
                    else {
                      puVar22 = (undefined *)((long)&lRam0000000000000000 + 1);
                    }
                    _objc_release(puVar11);
                    _objc_release(puVar10);
                    _objc_release(puVar9);
                    _objc_release(puVar8);
                  }
                  else {
                    puVar22 = (undefined *)((long)&lRam0000000000000000 + 1);
                  }
                  _objc_release(puVar7);
                  goto LAB_10715ae98;
                }
                puVar22 = (undefined *)((long)&lRam0000000000000000 + 1);
LAB_10715aea8:
                _objc_release(puVar5);
                goto LAB_10715afec;
              }
              goto LAB_10715afe8;
            }
          }
          else {
            puVar24 = puVar26;
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar24;
            func_0x00010c094ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar22 = puVar5;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar22;
            func_0x00010c0773a0();
            _objc_release(puVar22);
            _objc_release(puVar5);
            _objc_release(puVar24);
            if (((ulong)puVar23 & 1) == 0) {
              puVar24 = puVar26;
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar24;
              func_0x0001070c5bf0();
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar5;
              func_0x00010befec80();
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar22;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar23;
              func_0x00010c06bc00();
              _objc_release(puVar23);
              _objc_release(puVar22);
              _objc_release(puVar5);
              _objc_release(puVar24);
              if (((ulong)puVar7 & 1) == 0) {
                puVar24 = puVar26;
                func_0x00010c1122a0();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar24;
                func_0x00010c110940();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar24);
                if (puVar5 == (undefined *)0x0) {
LAB_10715b180:
                  puVar24 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                  puVar22 = puVar28;
                  _objc_opt_isKindOfClass(puVar28,puVar24);
                  if (((ulong)puVar22 & 1) == 0) {
                    puVar24 = puVar26;
                    func_0x00010be4bfa0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar22 = puVar24;
                    func_0x00010c22e5c0();
                    _objc_release(puVar24);
                    if ((int)puVar22 == 0) goto LAB_10715b254;
                  }
                  puVar24 = puVar6;
                  func_0x00010bf308a0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar24 != (undefined *)0x0) {
                    puVar22 = (undefined *)0x0;
                    goto LAB_10715aea0;
                  }
                  puVar24 = puVar26;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  puVar22 = puVar24;
                  func_0x00010c253b20();
                  _objc_retainAutoreleasedReturnValue();
                  puVar23 = puVar22;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar23;
                  func_0x00010c253b80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(puVar23);
                  _objc_release(puVar22);
                  _objc_release(puVar24);
                  if (puVar7 == (undefined *)0x0) {
                    puVar24 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                    _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                    puVar22 = puVar28;
                    _objc_opt_isKindOfClass(puVar28,puVar24);
                    if (((ulong)puVar22 & 1) != 0) {
                      puVar24 = puVar26;
                      func_0x00010be163e0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar22 = puVar24;
                      func_0x00010c2774a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      _objc_release(puVar24);
                      if (puVar22 != (undefined *)0x0) goto LAB_10715b254;
                    }
                    _objc_release(puVar5);
                    goto LAB_10715b2b4;
                  }
                }
                else {
                  func_0x00010c09ef00(puVar28);
                  puVar24 = puVar5;
                  func_0x00010c074c20();
                  if ((((ulong)puVar24 & 1) != 0) ||
                     (puVar24 = puVar5, func_0x00010c102b20(uVar13,param_2),
                     ((ulong)puVar24 & 1) == 0)) goto LAB_10715b180;
                }
LAB_10715b254:
                puVar22 = (undefined *)0x0;
                goto LAB_10715aea8;
              }
            }
          }
          puVar22 = (undefined *)((long)&lRam0000000000000000 + 1);
          goto LAB_10715afec;
        }
      }
    }
  }
  else if (puVar28 == *(undefined **)(puVar26 + _DAT_112764508)) {
    puVar24 = puVar26;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar24;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c07a120();
    _objc_release(puVar22);
    _objc_release(puVar5);
    _objc_release(puVar24);
    if ((int)puVar23 != 0) {
      func_0x00010bfa3600(puVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar26;
      func_0x00010c0fc5e0();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar24;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar23;
      func_0x00010c22dcc0();
      puVar5 = puVar26;
LAB_10715ae98:
      _objc_release(puVar23);
LAB_10715aea0:
      _objc_release(puVar24);
      goto LAB_10715aea8;
    }
  }
LAB_10715afe8:
  puVar22 = (undefined *)0x0;
LAB_10715afec:
  _objc_release(puVar6);
  _objc_release(puVar28);
  return puVar22;
}



/* Entry: 10715a65c; end: 10715a98f; -[PreviewViewController bounceFeatureSwitchedIntoBounceMode:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010715a6c8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_10715a65c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar20 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      puVar18 = *(undefined **)((long)puVar21 * 8);
      puVar22 = puVar18;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar22;
      func_0x00010bfd97a0();
      _objc_release(puVar22);
      if ((int)puVar3 == 0) {
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar18 != (undefined *)0x0) {
          puVar22 = param_3;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar22;
          func_0x00010c29b9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar18;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf80c80();
          _objc_release(puVar3);
          goto LAB_10715a8bc;
        }
      }
      else {
        puVar3 = param_3;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar3;
        func_0x00010bf207a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar19;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar22 = PTR_PTR_1126d4da0;
          _objc_alloc();
          puVar6 = param_3;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf207a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff94c0();
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar19);
        _objc_release(puVar3);
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265760();
LAB_10715a8bc:
        _objc_release(puVar18);
        _objc_release(puVar22);
      }
      puVar21 = puVar21 + 1;
    } while (puVar20 != puVar21);
    puVar20 = puVar2;
    func_0x00010bf52a60();
  }
  func_0x00010c283880(param_3);
  puVar20 = param_3;
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2295e0(param_3);
  _objc_release(puVar20);
  func_0x00010c2888a0(param_3);
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar20 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      uVar17 = *(undefined8 *)((long)puVar21 * 8);
      uVar10 = uVar17;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bfd97a0();
      _objc_release(uVar10);
      if ((int)uVar11 != 0) {
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265820();
        _objc_release(uVar17);
      }
      puVar21 = puVar21 + 1;
    } while (puVar20 != puVar21);
    puVar20 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = puVar2;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  puVar20 = puVar21;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar20 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar21);
      }
      puVar19 = *(undefined **)((long)puVar22 * 8);
      puVar3 = puVar19;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar3;
      func_0x00010c294b80();
      if (((ulong)puVar18 & 1) == 0) {
        _objc_release(puVar3);
LAB_10715abd0:
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar19 != (undefined *)0x0) {
          puVar19 = puVar2;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar19;
          func_0x00010c29b9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf80c80();
          _objc_release(puVar18);
          _objc_release(puVar3);
          goto LAB_10715ac38;
        }
      }
      else {
        puVar18 = puVar19;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar18;
        func_0x00010bfd97a0();
        _objc_release(puVar18);
        _objc_release(puVar3);
        if ((int)puVar4 == 0) goto LAB_10715abd0;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265820();
LAB_10715ac38:
        _objc_release(puVar19);
      }
      puVar22 = puVar22 + 1;
    } while (puVar20 != puVar22);
    puVar20 = puVar21;
    func_0x00010bf52a60();
  }
  func_0x00010c283880(puVar2);
  puVar20 = puVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2295e0(puVar2);
  _objc_release(puVar20);
  func_0x00010c2888a0(puVar2);
  func_0x00010c28d160(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return puVar21;
  }
  ___stack_chk_fail();
  _objc_retain(puVar22);
  puVar20 = puVar21;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar20);
  puVar20 = PTR_PTR_1126d4da8;
  func_0x00010bf5a300(PTR_PTR_1126d4da8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ad80(puVar21);
  _objc_release(puVar20);
  puVar20 = puVar21;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c06ff60();
  _objc_release(puVar18);
  _objc_release(puVar2);
  _objc_release(puVar20);
  if ((int)puVar19 == 0) {
    puVar20 = puVar3;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    if (((puVar20 == (undefined *)0x0) || (puVar22 == *(undefined **)(puVar21 + _DAT_112764508))) ||
       (puVar22 == *(undefined **)(puVar21 + _DAT_11276450c))) {
      _objc_release();
    }
    else {
      puVar20 = *(undefined **)(puVar21 + _DAT_112764510);
      _objc_release();
      if (puVar22 != puVar20) goto LAB_10715afe8;
    }
    puVar20 = puVar21;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c071280();
    _objc_release(puVar18);
    _objc_release(puVar2);
    _objc_release(puVar20);
    if (((ulong)puVar19 & 1) == 0) {
      puVar20 = puVar21;
      func_0x00010c254bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar20;
      func_0x00010c0791a0();
      _objc_release(puVar20);
      if (((ulong)puVar2 & 1) == 0) {
        puVar20 = puVar21;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar20;
        func_0x00010c2705e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar18;
        func_0x00010c081060();
        _objc_release(puVar18);
        _objc_release(puVar2);
        _objc_release(puVar20);
        if (((ulong)puVar19 & 1) == 0) {
          puVar20 = puVar21;
          func_0x00010be4bfa0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar20;
          func_0x00010c06c2a0();
          _objc_release(puVar20);
          if ((int)puVar2 == 0) {
LAB_10715b2b4:
            puVar20 = puVar21 + _DAT_112764588;
            _objc_loadWeakRetained();
            _objc_release();
            if (puVar20 == (undefined *)0x0) {
              puVar20 = PTR_PTR_1126d4d98;
              func_0x00010bf5a300();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar21;
              func_0x00010be163e0(puVar21);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar2;
              func_0x00010bfc1c20();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar20;
              func_0x00010c22e4a0();
              _objc_release(puVar18);
              _objc_release(puVar2);
              _objc_release(puVar20);
              if (((ulong)puVar19 & 1) == 0) {
                puVar2 = puVar3;
                func_0x00010bf308a0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar2 == (undefined *)0x0) {
                  puVar2 = puVar21;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = puVar2;
                  func_0x00010bf11400();
                  _objc_retainAutoreleasedReturnValue();
                  puVar19 = puVar20;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar19;
                  func_0x00010bf11500();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar4 == (undefined *)0x0) {
                    puVar5 = puVar21;
                    func_0x00010bfa3600();
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = puVar5;
                    func_0x00010c253b20();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar6;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = puVar7;
                    func_0x00010c253b80();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar8 == (undefined *)0x0) {
                      puVar9 = puVar21;
                      func_0x00010bfa3600();
                      _objc_retainAutoreleasedReturnValue();
                      puVar12 = puVar9;
                      func_0x00010c23fc40();
                      _objc_retainAutoreleasedReturnValue();
                      puVar13 = puVar12;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      puVar14 = puVar13;
                      func_0x00010c0efe60();
                      _objc_retainAutoreleasedReturnValue();
                      puVar18 = puVar14;
                      func_0x00010bf4b400();
                      if (((ulong)puVar18 & 1) == 0) {
                        puVar15 = puVar21;
                        func_0x00010be4bfa0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar18 = puVar15;
                        func_0x00010c22e5c0();
                        if (((ulong)puVar18 & 1) == 0) {
                          func_0x00010be163e0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar18 = puVar21;
                          func_0x00010c2774a0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar18 = (undefined *)(ulong)(puVar18 != (undefined *)0x0);
                          _objc_release();
                          _objc_release(puVar21);
                        }
                        else {
                          puVar18 = (undefined *)((long)&lRam0000000000000000 + 1);
                        }
                        _objc_release(puVar15);
                      }
                      else {
                        puVar18 = (undefined *)((long)&lRam0000000000000000 + 1);
                      }
                      _objc_release(puVar14);
                      _objc_release(puVar13);
                      _objc_release(puVar12);
                      _objc_release(puVar9);
                    }
                    else {
                      puVar18 = (undefined *)((long)&lRam0000000000000000 + 1);
                    }
                    _objc_release(puVar8);
                    _objc_release(puVar7);
                    _objc_release(puVar6);
                    _objc_release(puVar5);
                  }
                  else {
                    puVar18 = (undefined *)((long)&lRam0000000000000000 + 1);
                  }
                  _objc_release(puVar4);
                  goto LAB_10715ae98;
                }
                puVar18 = (undefined *)((long)&lRam0000000000000000 + 1);
LAB_10715aea8:
                _objc_release(puVar2);
                goto LAB_10715afec;
              }
              goto LAB_10715afe8;
            }
          }
          else {
            puVar20 = puVar21;
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar20;
            func_0x00010c094ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar18;
            func_0x00010c0773a0();
            _objc_release(puVar18);
            _objc_release(puVar2);
            _objc_release(puVar20);
            if (((ulong)puVar19 & 1) == 0) {
              puVar20 = puVar21;
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar20;
              func_0x0001070c5bf0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar2;
              func_0x00010befec80();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar18;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar19;
              func_0x00010c06bc00();
              _objc_release(puVar19);
              _objc_release(puVar18);
              _objc_release(puVar2);
              _objc_release(puVar20);
              if (((ulong)puVar4 & 1) == 0) {
                puVar20 = puVar21;
                func_0x00010c1122a0();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar20;
                func_0x00010c110940();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar20);
                if (puVar2 == (undefined *)0x0) {
LAB_10715b180:
                  puVar20 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                  puVar18 = puVar22;
                  _objc_opt_isKindOfClass(puVar22,puVar20);
                  if (((ulong)puVar18 & 1) == 0) {
                    puVar20 = puVar21;
                    func_0x00010be4bfa0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar18 = puVar20;
                    func_0x00010c22e5c0();
                    _objc_release(puVar20);
                    if ((int)puVar18 == 0) goto LAB_10715b254;
                  }
                  puVar20 = puVar3;
                  func_0x00010bf308a0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar20 != (undefined *)0x0) {
                    puVar18 = (undefined *)0x0;
                    goto LAB_10715aea0;
                  }
                  puVar20 = puVar21;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  puVar18 = puVar20;
                  func_0x00010c253b20();
                  _objc_retainAutoreleasedReturnValue();
                  puVar19 = puVar18;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar19;
                  func_0x00010c253b80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(puVar19);
                  _objc_release(puVar18);
                  _objc_release(puVar20);
                  if (puVar4 == (undefined *)0x0) {
                    puVar20 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                    _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                    puVar18 = puVar22;
                    _objc_opt_isKindOfClass(puVar22,puVar20);
                    if (((ulong)puVar18 & 1) != 0) {
                      puVar20 = puVar21;
                      func_0x00010be163e0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar18 = puVar20;
                      func_0x00010c2774a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      _objc_release(puVar20);
                      if (puVar18 != (undefined *)0x0) goto LAB_10715b254;
                    }
                    _objc_release(puVar2);
                    goto LAB_10715b2b4;
                  }
                }
                else {
                  func_0x00010c09ef00(puVar22);
                  puVar20 = puVar2;
                  func_0x00010c074c20();
                  if ((((ulong)puVar20 & 1) != 0) ||
                     (puVar20 = puVar2, func_0x00010c102b20(uVar10,param_2),
                     ((ulong)puVar20 & 1) == 0)) goto LAB_10715b180;
                }
LAB_10715b254:
                puVar18 = (undefined *)0x0;
                goto LAB_10715aea8;
              }
            }
          }
          puVar18 = (undefined *)((long)&lRam0000000000000000 + 1);
          goto LAB_10715afec;
        }
      }
    }
  }
  else if (puVar22 == *(undefined **)(puVar21 + _DAT_112764508)) {
    puVar20 = puVar21;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c07a120();
    _objc_release(puVar18);
    _objc_release(puVar2);
    _objc_release(puVar20);
    if ((int)puVar19 != 0) {
      func_0x00010bfa3600(puVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar21;
      func_0x00010c0fc5e0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar19;
      func_0x00010c22dcc0();
      puVar2 = puVar21;
LAB_10715ae98:
      _objc_release(puVar19);
LAB_10715aea0:
      _objc_release(puVar20);
      goto LAB_10715aea8;
    }
  }
LAB_10715afe8:
  puVar18 = (undefined *)0x0;
LAB_10715afec:
  _objc_release(puVar3);
  _objc_release(puVar22);
  return puVar18;
}



/* Entry: 10715a990; end: 10715aacb; -[PreviewViewController bounceFeatureWillChangeBounceOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10715a990(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (uVar22 != 0) {
    uVar23 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_3);
      }
      uVar20 = *(undefined8 *)(uVar23 * 8);
      uVar1 = uVar20;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd97a0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265820();
        _objc_release(uVar20);
      }
      uVar23 = uVar23 + 1;
    } while (uVar22 != uVar23);
    uVar22 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = param_3;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  uVar22 = uVar23;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (uVar22 != 0) {
    uVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(uVar23);
      }
      uVar21 = *(ulong *)(uVar24 * 8);
      uVar3 = uVar21;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c294b80();
      if ((uVar4 & 1) == 0) {
        _objc_release(uVar3);
LAB_10715abd0:
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar21 != 0) {
          uVar21 = param_3;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar21;
          func_0x00010c29b9c0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf80c80();
          _objc_release(uVar4);
          _objc_release(uVar3);
          goto LAB_10715ac38;
        }
      }
      else {
        uVar4 = uVar21;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfd97a0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((int)uVar5 == 0) goto LAB_10715abd0;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265820();
LAB_10715ac38:
        _objc_release(uVar21);
      }
      uVar24 = uVar24 + 1;
    } while (uVar22 != uVar24);
    uVar22 = uVar23;
    func_0x00010bf52a60();
  }
  func_0x00010c283880(param_3);
  uVar22 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar22;
  func_0x00010c2295e0(param_3);
  _objc_release(uVar22);
  func_0x00010c2888a0(param_3);
  func_0x00010c28d160(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return uVar23;
  }
  ___stack_chk_fail();
  _objc_retain(uVar24);
  uVar22 = uVar23;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar22;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar22);
  puVar6 = PTR_PTR_1126d4da8;
  func_0x00010bf5a300(PTR_PTR_1126d4da8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ad80(uVar23);
  _objc_release(puVar6);
  uVar22 = uVar23;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar22;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar21;
  func_0x00010c06ff60();
  _objc_release(uVar21);
  _objc_release(uVar3);
  _objc_release(uVar22);
  if ((int)uVar5 == 0) {
    uVar22 = uVar4;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar22 == 0) || (uVar24 == *(ulong *)(uVar23 + (long)_DAT_112764508))) ||
       (uVar24 == *(ulong *)(uVar23 + (long)_DAT_11276450c))) {
      _objc_release();
    }
    else {
      uVar22 = *(ulong *)(uVar23 + (long)_DAT_112764510);
      _objc_release();
      if (uVar24 != uVar22) goto LAB_10715afe8;
    }
    uVar22 = uVar23;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar22;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar21;
    func_0x00010c071280();
    _objc_release(uVar21);
    _objc_release(uVar3);
    _objc_release(uVar22);
    if ((uVar5 & 1) == 0) {
      uVar22 = uVar23;
      func_0x00010c254bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar22;
      func_0x00010c0791a0();
      _objc_release(uVar22);
      if ((uVar3 & 1) == 0) {
        uVar22 = uVar23;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar22;
        func_0x00010c2705e0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar21;
        func_0x00010c081060();
        _objc_release(uVar21);
        _objc_release(uVar3);
        _objc_release(uVar22);
        if ((uVar5 & 1) == 0) {
          uVar22 = uVar23;
          func_0x00010be4bfa0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar22;
          func_0x00010c06c2a0();
          _objc_release(uVar22);
          if ((int)uVar3 == 0) {
LAB_10715b2b4:
            lVar8 = uVar23 + (long)_DAT_112764588;
            _objc_loadWeakRetained();
            _objc_release();
            if (lVar8 == 0) {
              puVar6 = PTR_PTR_1126d4d98;
              func_0x00010bf5a300();
              _objc_retainAutoreleasedReturnValue();
              uVar22 = uVar23;
              func_0x00010be163e0(uVar23);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar22;
              func_0x00010bfc1c20();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar6;
              func_0x00010c22e4a0();
              _objc_release(uVar3);
              _objc_release(uVar22);
              _objc_release(puVar6);
              if (((ulong)puVar9 & 1) == 0) {
                uVar3 = uVar4;
                func_0x00010bf308a0();
                _objc_retainAutoreleasedReturnValue();
                if (uVar3 == 0) {
                  uVar3 = uVar23;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  uVar22 = uVar3;
                  func_0x00010bf11400();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar22;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar5;
                  func_0x00010bf11500();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar7 == 0) {
                    uVar10 = uVar23;
                    func_0x00010bfa3600();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar10;
                    func_0x00010c253b20();
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = uVar11;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = uVar12;
                    func_0x00010c253b80();
                    _objc_retainAutoreleasedReturnValue();
                    if (uVar13 == 0) {
                      uVar14 = uVar23;
                      func_0x00010bfa3600();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c23fc40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar16 = uVar15;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar17 = uVar16;
                      func_0x00010c0efe60();
                      _objc_retainAutoreleasedReturnValue();
                      uVar21 = uVar17;
                      func_0x00010bf4b400();
                      if ((uVar21 & 1) == 0) {
                        uVar18 = uVar23;
                        func_0x00010be4bfa0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar21 = uVar18;
                        func_0x00010c22e5c0();
                        if ((uVar21 & 1) == 0) {
                          func_0x00010be163e0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar21 = uVar23;
                          func_0x00010c2774a0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar21 = (ulong)(uVar21 != 0);
                          _objc_release();
                          _objc_release(uVar23);
                        }
                        else {
                          uVar21 = 1;
                        }
                        _objc_release(uVar18);
                      }
                      else {
                        uVar21 = 1;
                      }
                      _objc_release(uVar17);
                      _objc_release(uVar16);
                      _objc_release(uVar15);
                      _objc_release(uVar14);
                    }
                    else {
                      uVar21 = 1;
                    }
                    _objc_release(uVar13);
                    _objc_release(uVar12);
                    _objc_release(uVar11);
                    _objc_release(uVar10);
                  }
                  else {
                    uVar21 = 1;
                  }
                  _objc_release(uVar7);
                  goto LAB_10715ae98;
                }
                uVar21 = 1;
LAB_10715aea8:
                _objc_release(uVar3);
                goto LAB_10715afec;
              }
              goto LAB_10715afe8;
            }
          }
          else {
            uVar22 = uVar23;
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar22;
            func_0x00010c094ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar21;
            func_0x00010c0773a0();
            _objc_release(uVar21);
            _objc_release(uVar3);
            _objc_release(uVar22);
            if ((uVar5 & 1) == 0) {
              uVar22 = uVar23;
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar22;
              func_0x0001070c5bf0();
              _objc_retainAutoreleasedReturnValue();
              uVar21 = uVar3;
              func_0x00010befec80();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar21;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar5;
              func_0x00010c06bc00();
              _objc_release(uVar5);
              _objc_release(uVar21);
              _objc_release(uVar3);
              _objc_release(uVar22);
              if ((uVar7 & 1) == 0) {
                uVar22 = uVar23;
                func_0x00010c1122a0();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar22;
                func_0x00010c110940();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar22);
                if (uVar3 == 0) {
LAB_10715b180:
                  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                  uVar22 = uVar24;
                  _objc_opt_isKindOfClass(uVar24,puVar6);
                  if ((uVar22 & 1) == 0) {
                    uVar22 = uVar23;
                    func_0x00010be4bfa0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar21 = uVar22;
                    func_0x00010c22e5c0();
                    _objc_release(uVar22);
                    if ((int)uVar21 == 0) goto LAB_10715b254;
                  }
                  uVar22 = uVar4;
                  func_0x00010bf308a0();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar22 != 0) {
                    uVar21 = 0;
                    goto LAB_10715aea0;
                  }
                  uVar22 = uVar23;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  uVar21 = uVar22;
                  func_0x00010c253b20();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar21;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar5;
                  func_0x00010c253b80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(uVar5);
                  _objc_release(uVar21);
                  _objc_release(uVar22);
                  if (uVar7 == 0) {
                    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                    _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                    uVar22 = uVar24;
                    _objc_opt_isKindOfClass(uVar24,puVar6);
                    if ((uVar22 & 1) != 0) {
                      uVar22 = uVar23;
                      func_0x00010be163e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar21 = uVar22;
                      func_0x00010c2774a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      _objc_release(uVar22);
                      if (uVar21 != 0) goto LAB_10715b254;
                    }
                    _objc_release(uVar3);
                    goto LAB_10715b2b4;
                  }
                }
                else {
                  func_0x00010c09ef00(uVar24);
                  uVar22 = uVar3;
                  func_0x00010c074c20();
                  if (((uVar22 & 1) != 0) ||
                     (uVar22 = uVar3, func_0x00010c102b20(uVar1,param_2), (uVar22 & 1) == 0))
                  goto LAB_10715b180;
                }
LAB_10715b254:
                uVar21 = 0;
                goto LAB_10715aea8;
              }
            }
          }
          uVar21 = 1;
          goto LAB_10715afec;
        }
      }
    }
  }
  else if (uVar24 == *(ulong *)(uVar23 + (long)_DAT_112764508)) {
    uVar22 = uVar23;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar22;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar21;
    func_0x00010c07a120();
    _objc_release(uVar21);
    _objc_release(uVar3);
    _objc_release(uVar22);
    if ((int)uVar5 != 0) {
      func_0x00010bfa3600(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar23;
      func_0x00010c0fc5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar22;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar5;
      func_0x00010c22dcc0();
      uVar3 = uVar23;
LAB_10715ae98:
      _objc_release(uVar5);
LAB_10715aea0:
      _objc_release(uVar22);
      goto LAB_10715aea8;
    }
  }
LAB_10715afe8:
  uVar21 = 0;
LAB_10715afec:
  _objc_release(uVar4);
  _objc_release(uVar24);
  return uVar21;
}



/* Entry: 10715aacc; end: 10715aceb; -[PreviewViewController bounceFeatureSwitchedOutOfBounceMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10715aacc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  func_0x00010bdca140();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = 0;
  uVar20 = uVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar20 != 0) {
    uVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar1);
      }
      uVar19 = *(ulong *)(uVar21 * 8);
      uVar2 = uVar19;
      func_0x00010c2796c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c294b80();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
LAB_10715abd0:
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar19 != 0) {
          uVar19 = param_3;
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar19;
          func_0x00010c29b9c0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf80c80();
          _objc_release(uVar3);
          _objc_release(uVar2);
          goto LAB_10715ac38;
        }
      }
      else {
        uVar3 = uVar19;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfd97a0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((int)uVar4 == 0) goto LAB_10715abd0;
        func_0x00010c2796c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c265820();
LAB_10715ac38:
        _objc_release(uVar19);
      }
      uVar21 = uVar21 + 1;
    } while (uVar20 != uVar21);
    uVar20 = uVar1;
    func_0x00010bf52a60();
  }
  func_0x00010c283880(param_3);
  uVar20 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c2295e0(param_3);
  _objc_release(uVar20);
  func_0x00010c2888a0(param_3);
  func_0x00010c28d160(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return uVar1;
  }
  ___stack_chk_fail();
  _objc_retain(uVar21);
  uVar20 = uVar1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar20;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar20);
  puVar5 = PTR_PTR_1126d4da8;
  func_0x00010bf5a300(PTR_PTR_1126d4da8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ad80(uVar1);
  _objc_release(puVar5);
  uVar20 = uVar1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar20;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010c06ff60();
  _objc_release(uVar19);
  _objc_release(uVar2);
  _objc_release(uVar20);
  if ((int)uVar4 == 0) {
    uVar20 = uVar3;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar20 == 0) || (uVar21 == *(ulong *)(uVar1 + (long)_DAT_112764508))) ||
       (uVar21 == *(ulong *)(uVar1 + (long)_DAT_11276450c))) {
      _objc_release();
    }
    else {
      uVar20 = *(ulong *)(uVar1 + (long)_DAT_112764510);
      _objc_release();
      if (uVar21 != uVar20) goto LAB_10715afe8;
    }
    uVar20 = uVar1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar20;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar19;
    func_0x00010c071280();
    _objc_release(uVar19);
    _objc_release(uVar2);
    _objc_release(uVar20);
    if ((uVar4 & 1) == 0) {
      uVar20 = uVar1;
      func_0x00010c254bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar20;
      func_0x00010c0791a0();
      _objc_release(uVar20);
      if ((uVar2 & 1) == 0) {
        uVar20 = uVar1;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar20;
        func_0x00010c2705e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar19;
        func_0x00010c081060();
        _objc_release(uVar19);
        _objc_release(uVar2);
        _objc_release(uVar20);
        if ((uVar4 & 1) == 0) {
          uVar20 = uVar1;
          func_0x00010be4bfa0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar20;
          func_0x00010c06c2a0();
          _objc_release(uVar20);
          if ((int)uVar2 == 0) {
LAB_10715b2b4:
            lVar7 = uVar1 + (long)_DAT_112764588;
            _objc_loadWeakRetained();
            _objc_release();
            if (lVar7 == 0) {
              puVar5 = PTR_PTR_1126d4d98;
              func_0x00010bf5a300();
              _objc_retainAutoreleasedReturnValue();
              uVar20 = uVar1;
              func_0x00010be163e0(uVar1);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar20;
              func_0x00010bfc1c20();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar5;
              func_0x00010c22e4a0();
              _objc_release(uVar2);
              _objc_release(uVar20);
              _objc_release(puVar5);
              if (((ulong)puVar8 & 1) == 0) {
                uVar2 = uVar3;
                func_0x00010bf308a0();
                _objc_retainAutoreleasedReturnValue();
                if (uVar2 == 0) {
                  uVar2 = uVar1;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  uVar20 = uVar2;
                  func_0x00010bf11400();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar20;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar4;
                  func_0x00010bf11500();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar6 == 0) {
                    uVar9 = uVar1;
                    func_0x00010bfa3600();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar9;
                    func_0x00010c253b20();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar10;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = uVar11;
                    func_0x00010c253b80();
                    _objc_retainAutoreleasedReturnValue();
                    if (uVar12 == 0) {
                      uVar13 = uVar1;
                      func_0x00010bfa3600();
                      _objc_retainAutoreleasedReturnValue();
                      uVar14 = uVar13;
                      func_0x00010c23fc40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar16 = uVar15;
                      func_0x00010c0efe60();
                      _objc_retainAutoreleasedReturnValue();
                      uVar19 = uVar16;
                      func_0x00010bf4b400();
                      if ((uVar19 & 1) == 0) {
                        uVar17 = uVar1;
                        func_0x00010be4bfa0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar19 = uVar17;
                        func_0x00010c22e5c0();
                        if ((uVar19 & 1) == 0) {
                          func_0x00010be163e0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar19 = uVar1;
                          func_0x00010c2774a0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar19 = (ulong)(uVar19 != 0);
                          _objc_release();
                          _objc_release(uVar1);
                        }
                        else {
                          uVar19 = 1;
                        }
                        _objc_release(uVar17);
                      }
                      else {
                        uVar19 = 1;
                      }
                      _objc_release(uVar16);
                      _objc_release(uVar15);
                      _objc_release(uVar14);
                      _objc_release(uVar13);
                    }
                    else {
                      uVar19 = 1;
                    }
                    _objc_release(uVar12);
                    _objc_release(uVar11);
                    _objc_release(uVar10);
                    _objc_release(uVar9);
                  }
                  else {
                    uVar19 = 1;
                  }
                  _objc_release(uVar6);
                  goto LAB_10715ae98;
                }
                uVar19 = 1;
LAB_10715aea8:
                _objc_release(uVar2);
                goto LAB_10715afec;
              }
              goto LAB_10715afe8;
            }
          }
          else {
            uVar20 = uVar1;
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar20;
            func_0x00010c094ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar19;
            func_0x00010c0773a0();
            _objc_release(uVar19);
            _objc_release(uVar2);
            _objc_release(uVar20);
            if ((uVar4 & 1) == 0) {
              uVar20 = uVar1;
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar20;
              func_0x0001070c5bf0();
              _objc_retainAutoreleasedReturnValue();
              uVar19 = uVar2;
              func_0x00010befec80();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar19;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar4;
              func_0x00010c06bc00();
              _objc_release(uVar4);
              _objc_release(uVar19);
              _objc_release(uVar2);
              _objc_release(uVar20);
              if ((uVar6 & 1) == 0) {
                uVar20 = uVar1;
                func_0x00010c1122a0();
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar20;
                func_0x00010c110940();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar20);
                if (uVar2 == 0) {
LAB_10715b180:
                  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                  uVar20 = uVar21;
                  _objc_opt_isKindOfClass(uVar21,puVar5);
                  if ((uVar20 & 1) == 0) {
                    uVar20 = uVar1;
                    func_0x00010be4bfa0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = uVar20;
                    func_0x00010c22e5c0();
                    _objc_release(uVar20);
                    if ((int)uVar19 == 0) goto LAB_10715b254;
                  }
                  uVar20 = uVar3;
                  func_0x00010bf308a0();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar20 != 0) {
                    uVar19 = 0;
                    goto LAB_10715aea0;
                  }
                  uVar20 = uVar1;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  uVar19 = uVar20;
                  func_0x00010c253b20();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar19;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar4;
                  func_0x00010c253b80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(uVar4);
                  _objc_release(uVar19);
                  _objc_release(uVar20);
                  if (uVar6 == 0) {
                    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                    _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                    uVar20 = uVar21;
                    _objc_opt_isKindOfClass(uVar21,puVar5);
                    if ((uVar20 & 1) != 0) {
                      uVar20 = uVar1;
                      func_0x00010be163e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar19 = uVar20;
                      func_0x00010c2774a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      _objc_release(uVar20);
                      if (uVar19 != 0) goto LAB_10715b254;
                    }
                    _objc_release(uVar2);
                    goto LAB_10715b2b4;
                  }
                }
                else {
                  func_0x00010c09ef00(uVar21);
                  uVar20 = uVar2;
                  func_0x00010c074c20();
                  if (((uVar20 & 1) != 0) ||
                     (uVar20 = uVar2, func_0x00010c102b20(uVar22,param_2), (uVar20 & 1) == 0))
                  goto LAB_10715b180;
                }
LAB_10715b254:
                uVar19 = 0;
                goto LAB_10715aea8;
              }
            }
          }
          uVar19 = 1;
          goto LAB_10715afec;
        }
      }
    }
  }
  else if (uVar21 == *(ulong *)(uVar1 + (long)_DAT_112764508)) {
    uVar20 = uVar1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar20;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar19;
    func_0x00010c07a120();
    _objc_release(uVar19);
    _objc_release(uVar2);
    _objc_release(uVar20);
    if ((int)uVar4 != 0) {
      func_0x00010bfa3600(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar1;
      func_0x00010c0fc5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar4;
      func_0x00010c22dcc0();
      uVar2 = uVar1;
LAB_10715ae98:
      _objc_release(uVar4);
LAB_10715aea0:
      _objc_release(uVar20);
      goto LAB_10715aea8;
    }
  }
LAB_10715afe8:
  uVar19 = 0;
LAB_10715afec:
  _objc_release(uVar3);
  _objc_release(uVar21);
  return uVar19;
}



/* Entry: 10715acec; end: 10715b51b; -[PreviewViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10715acec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  _objc_retain(param_5);
  uVar18 = param_3;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar18;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar18);
  puVar3 = PTR_PTR_1126d4da8;
  func_0x00010bf5a300(PTR_PTR_1126d4da8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ad80(param_3);
  _objc_release(puVar3);
  uVar18 = param_3;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar18;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010c06ff60();
  _objc_release(uVar17);
  _objc_release(uVar1);
  _objc_release(uVar18);
  if ((int)uVar4 == 0) {
    uVar18 = uVar2;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar18 == 0) || (param_5 == *(ulong *)(param_3 + (long)_DAT_112764508))) ||
       (param_5 == *(ulong *)(param_3 + (long)_DAT_11276450c))) {
      _objc_release();
    }
    else {
      uVar18 = *(ulong *)(param_3 + (long)_DAT_112764510);
      _objc_release();
      if (param_5 != uVar18) goto LAB_10715afe8;
    }
    uVar18 = param_3;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar18;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c071280();
    _objc_release(uVar17);
    _objc_release(uVar1);
    _objc_release(uVar18);
    if ((uVar4 & 1) == 0) {
      uVar18 = param_3;
      func_0x00010c254bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar18;
      func_0x00010c0791a0();
      _objc_release(uVar18);
      if ((uVar1 & 1) == 0) {
        uVar18 = param_3;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar18;
        func_0x00010c2705e0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar17;
        func_0x00010c081060();
        _objc_release(uVar17);
        _objc_release(uVar1);
        _objc_release(uVar18);
        if ((uVar4 & 1) == 0) {
          uVar18 = param_3;
          func_0x00010be4bfa0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar18;
          func_0x00010c06c2a0();
          _objc_release(uVar18);
          if ((int)uVar1 == 0) {
LAB_10715b2b4:
            lVar6 = param_3 + (long)_DAT_112764588;
            _objc_loadWeakRetained();
            _objc_release();
            if (lVar6 == 0) {
              puVar3 = PTR_PTR_1126d4d98;
              func_0x00010bf5a300();
              _objc_retainAutoreleasedReturnValue();
              uVar18 = param_3;
              func_0x00010be163e0(param_3);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar18;
              func_0x00010bfc1c20();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar3;
              func_0x00010c22e4a0();
              _objc_release(uVar1);
              _objc_release(uVar18);
              _objc_release(puVar3);
              if (((ulong)puVar7 & 1) == 0) {
                uVar1 = uVar2;
                func_0x00010bf308a0();
                _objc_retainAutoreleasedReturnValue();
                if (uVar1 == 0) {
                  uVar1 = param_3;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  uVar18 = uVar1;
                  func_0x00010bf11400();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar18;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010bf11500();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar5 == 0) {
                    uVar8 = param_3;
                    func_0x00010bfa3600();
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar8;
                    func_0x00010c253b20();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar9;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar10;
                    func_0x00010c253b80();
                    _objc_retainAutoreleasedReturnValue();
                    if (uVar11 == 0) {
                      uVar12 = param_3;
                      func_0x00010bfa3600();
                      _objc_retainAutoreleasedReturnValue();
                      uVar13 = uVar12;
                      func_0x00010c23fc40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar14 = uVar13;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c0efe60();
                      _objc_retainAutoreleasedReturnValue();
                      uVar17 = uVar15;
                      func_0x00010bf4b400();
                      if ((uVar17 & 1) == 0) {
                        uVar16 = param_3;
                        func_0x00010be4bfa0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar17 = uVar16;
                        func_0x00010c22e5c0();
                        if ((uVar17 & 1) == 0) {
                          func_0x00010be163e0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar17 = param_3;
                          func_0x00010c2774a0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar17 = (ulong)(uVar17 != 0);
                          _objc_release();
                          _objc_release(param_3);
                        }
                        else {
                          uVar17 = 1;
                        }
                        _objc_release(uVar16);
                      }
                      else {
                        uVar17 = 1;
                      }
                      _objc_release(uVar15);
                      _objc_release(uVar14);
                      _objc_release(uVar13);
                      _objc_release(uVar12);
                    }
                    else {
                      uVar17 = 1;
                    }
                    _objc_release(uVar11);
                    _objc_release(uVar10);
                    _objc_release(uVar9);
                    _objc_release(uVar8);
                  }
                  else {
                    uVar17 = 1;
                  }
                  _objc_release(uVar5);
                  goto LAB_10715ae98;
                }
                uVar17 = 1;
LAB_10715aea8:
                _objc_release(uVar1);
                goto LAB_10715afec;
              }
              goto LAB_10715afe8;
            }
          }
          else {
            uVar18 = param_3;
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar18;
            func_0x00010c094ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar1;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar17;
            func_0x00010c0773a0();
            _objc_release(uVar17);
            _objc_release(uVar1);
            _objc_release(uVar18);
            if ((uVar4 & 1) == 0) {
              uVar18 = param_3;
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar18;
              func_0x0001070c5bf0();
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar1;
              func_0x00010befec80();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar17;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c06bc00();
              _objc_release(uVar4);
              _objc_release(uVar17);
              _objc_release(uVar1);
              _objc_release(uVar18);
              if ((uVar5 & 1) == 0) {
                uVar18 = param_3;
                func_0x00010c1122a0();
                _objc_retainAutoreleasedReturnValue();
                uVar1 = uVar18;
                func_0x00010c110940();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar18);
                if (uVar1 == 0) {
LAB_10715b180:
                  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                  uVar18 = param_5;
                  _objc_opt_isKindOfClass(param_5,puVar3);
                  if ((uVar18 & 1) == 0) {
                    uVar18 = param_3;
                    func_0x00010be4bfa0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar18;
                    func_0x00010c22e5c0();
                    _objc_release(uVar18);
                    if ((int)uVar17 == 0) goto LAB_10715b254;
                  }
                  uVar18 = uVar2;
                  func_0x00010bf308a0();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar18 != 0) {
                    uVar17 = 0;
                    goto LAB_10715aea0;
                  }
                  uVar18 = param_3;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  uVar17 = uVar18;
                  func_0x00010c253b20();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar17;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010c253b80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(uVar4);
                  _objc_release(uVar17);
                  _objc_release(uVar18);
                  if (uVar5 == 0) {
                    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                    _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                    uVar18 = param_5;
                    _objc_opt_isKindOfClass(param_5,puVar3);
                    if ((uVar18 & 1) != 0) {
                      uVar18 = param_3;
                      func_0x00010be163e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar17 = uVar18;
                      func_0x00010c2774a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      _objc_release(uVar18);
                      if (uVar17 != 0) goto LAB_10715b254;
                    }
                    _objc_release(uVar1);
                    goto LAB_10715b2b4;
                  }
                }
                else {
                  func_0x00010c09ef00(param_5);
                  uVar18 = uVar1;
                  func_0x00010c074c20();
                  if (((uVar18 & 1) != 0) ||
                     (uVar18 = uVar1, func_0x00010c102b20(param_1,param_2), (uVar18 & 1) == 0))
                  goto LAB_10715b180;
                }
LAB_10715b254:
                uVar17 = 0;
                goto LAB_10715aea8;
              }
            }
          }
          uVar17 = 1;
          goto LAB_10715afec;
        }
      }
    }
  }
  else if (param_5 == *(ulong *)(param_3 + (long)_DAT_112764508)) {
    uVar18 = param_3;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar18;
    func_0x00010c0fc5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c07a120();
    _objc_release(uVar17);
    _objc_release(uVar1);
    _objc_release(uVar18);
    if ((int)uVar4 != 0) {
      func_0x00010bfa3600(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = param_3;
      func_0x00010c0fc5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar18;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar4;
      func_0x00010c22dcc0();
      uVar1 = param_3;
LAB_10715ae98:
      _objc_release(uVar4);
LAB_10715aea0:
      _objc_release(uVar18);
      goto LAB_10715aea8;
    }
  }
LAB_10715afe8:
  uVar17 = 0;
LAB_10715afec:
  _objc_release(uVar2);
  _objc_release(param_5);
  return uVar17;
}



/* Entry: 10715b51c; end: 10715b6eb; -[PreviewViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_10715b51c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be163e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c072f00();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010be4bfa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076940();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == lVar3) {
    lVar4 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != lVar6) {
      uVar7 = 0;
      goto LAB_10715b674;
    }
    lVar1 = param_1;
    func_0x00010be4bfa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06c2a0();
    func_0x00010be4bfa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c06c2a0();
    uVar7 = (uint)lVar2 ^ (uint)lVar3 ^ 1;
  }
  else {
    _objc_release(lVar3);
    uVar7 = 0;
    param_1 = lVar2;
  }
  _objc_release(param_1);
  _objc_release(lVar1);
LAB_10715b674:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10715b6ec; end: 10715b79f; -[PreviewViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8
FUN_10715b6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be4bfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076940();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010be163e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c072f00();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 10715b7a0; end: 10715b967; -[PreviewViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_10715b7a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be163e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c072f00();
  _objc_release(param_4);
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
LAB_10715b944:
    uVar5 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf308a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      lVar1 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c253b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 == 0) {
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        func_0x00010bf11400();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf11500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(param_1);
        if (lVar3 == 0) goto LAB_10715b944;
      }
    }
    uVar5 = 1;
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10715b968; end: 10715c0eb; -[PreviewViewController setupAudioDataAndLensForVideoFilter:] */

void FUN_10715b968(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x27;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c075080();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) goto LAB_10715c0b0;
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c48b0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c114720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5f160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1bb2a0(param_3);
  uVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf0f7a0();
  uVar8 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = uVar8;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = unaff_x27;
    func_0x00010c08fa60();
    if (uVar9 != 0) goto LAB_10715bac4;
    func_0x00010c16bc20(param_3);
LAB_10715baec:
    _objc_release(unaff_x27);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
LAB_10715bac4:
    func_0x00010c2992a0(param_1);
    func_0x00010c16bc20(param_3);
    if ((uVar7 & 1) == 0) goto LAB_10715baec;
  }
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__kCMTimeZero_110348670;
  if (uVar7 == 0) {
    puStack_c0 = (undefined *)0x0;
  }
  else {
    puStack_c0 = PTR_PTR_1126d4db0;
    _objc_alloc();
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf08020();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)(puVar1 + 8);
    uStack_b0 = *(undefined8 *)puVar1;
    uStack_a0 = *(undefined8 *)(puVar1 + 0x10);
    func_0x00010bff51c0();
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    puStack_c8 = (undefined *)0x0;
LAB_10715bd84:
    _objc_release(uVar2);
  }
  else {
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf07e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c07ca60();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar8 != 0) {
      puStack_c8 = PTR_PTR_1126c4a68;
      _objc_alloc();
      uVar2 = param_1;
      func_0x00010c13ff60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = *(undefined8 *)(puVar1 + 8);
      uStack_b0 = *(undefined8 *)puVar1;
      uStack_a0 = *(undefined8 *)(puVar1 + 0x10);
      func_0x00010b056d1c(puStack_c8,uVar2,&uStack_b0);
      goto LAB_10715bd84;
    }
    puStack_c8 = (undefined *)0x0;
  }
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26c8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf60820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar8 == 0) {
    puStack_d0 = (undefined *)0x0;
  }
  else {
    puStack_d0 = PTR_PTR_1126c4a68;
    _objc_alloc();
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26c8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf60820();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)(puVar1 + 8);
    uStack_b0 = *(undefined8 *)puVar1;
    uStack_a0 = *(undefined8 *)(puVar1 + 0x10);
    func_0x00010b056d1c(puStack_d0,uVar8,&uStack_b0);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uStack_78 = *(undefined8 *)(puVar1 + 8);
  uStack_80 = *(undefined8 *)puVar1;
  uStack_70 = *(undefined8 *)(puVar1 + 0x10);
  if (uVar9 != 0) {
    func_0x00010bdc1120(&uStack_b0,uVar9);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_70 = uStack_a0;
  }
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0cece0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c2a0fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108453a1c(&uStack_b0,uVar5,puStack_c0,puStack_d0,puStack_c8,uVar10,uVar13,&uStack_80);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1c8720(param_3);
  func_0x00010c16f280(param_3);
  func_0x00010c16bf80(param_3);
  func_0x00010c16bfa0(param_3);
  FUN_10715c0ec(&uStack_b0);
  _objc_release(uVar9);
  _objc_release(puStack_d0);
  _objc_release(uVar4);
  _objc_release(puStack_c8);
  _objc_release(puStack_c0);
  _objc_release(uVar5);
  _objc_release(uVar6);
LAB_10715c0b0:
  _objc_release(param_3);
  return;
}



/* Entry: 10715c0ec; end: 10715c123;  */

void FUN_10715c0ec(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
  _objc_release(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[3]);
  return;
}



/* Entry: 10715c124; end: 10715c867; -[PreviewViewController previewDidLoadAllDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715c124(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar14 = (long)_DAT_1127644ac;
  uVar2 = *(ulong *)(param_1 + lVar14);
  func_0x00010c06d080();
  if ((uVar2 & 1) != 0) goto LAB_10715c808;
  uVar2 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158ae0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)(param_1 + (long)_DAT_112764594) - 1U < 2) {
    func_0x00010c23ac40(param_1);
  }
  uVar2 = *(ulong *)(param_1 + lVar14);
  func_0x00010c07e920();
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + lVar14);
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
LAB_10715c1f8:
      _objc_release();
      goto LAB_10715c1fc;
    }
    lVar4 = *(long *)(param_1 + lVar14);
    func_0x00010bfbbbe0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) goto LAB_10715c1f8;
    uVar2 = *(ulong *)(param_1 + lVar14);
    func_0x00010c06d080();
    if ((uVar2 & 1) != 0) goto LAB_10715c1fc;
  }
  else {
LAB_10715c1fc:
    lVar4 = (long)_DAT_1127644f0;
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf4b2a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar5);
    uVar2 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161840();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4be0(0x3ff0000000000000);
    _objc_release(uVar2);
    func_0x00010c283880(param_1);
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf6d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4de0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bfe2860(param_1);
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c15b960(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c15b700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c14a0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar5);
  }
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2647e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a9a0();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1236a0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c244120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf954e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    func_0x00010c28d160(param_1);
  }
  uVar2 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c060();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c08ae00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110520();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar14);
  func_0x00010c233e40();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + (long)_DAT_112764598) & 1) == 0)) {
    *(undefined1 *)(param_1 + (long)_DAT_112764598) = 1;
    func_0x00010be79160(param_1);
  }
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c22f720();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar8 == 0) {
    uVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2588a0();
    if ((uVar7 & 1) != 0) {
      uVar7 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x0001070c5530();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c274120();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c22f940();
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar12 != 0) {
        _objc_initWeak(auStack_68,param_1);
        uVar2 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x0001070c5a40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c0d4b00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1;
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x0001070c5da0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010c11a940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_1;
        func_0x0001070c5cc8();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf62060();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_10715c868;
        puStack_78 = &UNK_11095a208;
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x000108ede32c(uVar6,uVar10,uVar12,uVar13,&puStack_90);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(param_1);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      goto LAB_10715c808;
    }
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + (long)_DAT_1127644f0);
    func_0x00010c14a120(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x000108ede9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d740(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar9);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001070c5530();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fae0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
  }
  _objc_release(uVar2);
LAB_10715c808:
  _objc_release(param_3);
  return;
}



/* Entry: 10715c868; end: 10715c8b3;  */

void FUN_10715c868(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10715c8b4; end: 10715c8bb; -[PreviewViewController startIgnoringAppearanceMethodsWhenBeingDismissed] */

void FUN_10715c8b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIgnoreAppearanceMethodsWhenBe_112648140,1)
  ;
  return;
}



/* Entry: 10715c8bc; end: 10715c8d3; -[PreviewViewController generateBlobWithCompletion:] */

void FUN_10715c8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbf0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7ff0000000000000,param_1,PTR_s_generateBlobWithUsingOriginalIma_1125cd5e0,1,0,param_3
            );
  return;
}



/* Entry: 10715c8d4; end: 10715e527; -[PreviewViewController generateBlobWithUsingOriginalImage:usingFilteredImage:croppingAspectRatio:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715c8d4(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4,uint param_5,
                  long param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lVar32;
  ulong uVar33;
  ulong uStack_2b0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_10715e488;
  uVar18 = param_2;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  if (uVar18 != 0) {
    uVar2 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010c07f160();
    if ((int)uVar3 == 0) {
      uVar3 = param_2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c06ba20();
      _objc_release(uVar3);
      _objc_release(uVar15);
      _objc_release(uVar2);
      _objc_release(uVar18);
      if ((uVar4 & 1) == 0) {
        (**(code **)(param_6 + 0x10))(param_6,0);
        goto LAB_10715e488;
      }
    }
    else {
      _objc_release(uVar15);
      _objc_release(uVar2);
      _objc_release(uVar18);
    }
  }
  uVar18 = param_2;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar18;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar18);
  uVar18 = uVar3;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar18;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  puVar5 = PTR_PTR_1126d4db8;
  _objc_alloc_init();
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  func_0x00010c1c4ca0(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  func_0x00010bfd4160(param_2);
  func_0x00010c1a5860(puVar5);
  lVar32 = (long)_DAT_1127644ac;
  func_0x00010c0c6c20(*(undefined8 *)(param_2 + lVar32));
  func_0x00010c1c5440(puVar5);
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ce0(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cd00(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010bf5ce40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186500(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1919a0(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010c13b420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bfaee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c960(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c255460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bd80(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  func_0x00010c2992a0(param_2);
  func_0x00010c16bc20(puVar5);
  uVar7 = *(undefined8 *)(param_2 + lVar32);
  func_0x00010c09a760(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be3a0(puVar5);
  _objc_release(uVar19);
  _objc_release(uVar9);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_2 + lVar32);
  func_0x00010c09a760(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar9;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar19;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc920(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar9);
  _objc_release(uVar8);
  func_0x00010c1e1ea0(puVar5);
  uVar9 = *(undefined8 *)(param_2 + lVar32);
  func_0x00010c23faa0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203ce0(puVar5);
  _objc_release(uVar9);
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081200();
  func_0x00010c1ac2c0(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf0d6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2039e0(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  lVar10 = *(long *)(param_2 + lVar32);
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    func_0x00010c1ac540(puVar5);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + lVar32);
    func_0x00010bfede80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac540(puVar5);
    _objc_release(uVar9);
  }
  _objc_release(lVar10);
  uVar18 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  if (uVar6 == 0) {
    uVar18 = *(ulong *)(param_2 + lVar32);
    func_0x00010c15f220(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd400(puVar5);
LAB_10715d19c:
    _objc_release(uVar18);
  }
  else {
    uVar18 = param_2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_2;
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar20;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010c072080();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar20);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar15);
    _objc_release(uVar18);
    if ((uVar14 & 1) == 0) {
      uVar18 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar18;
      func_0x00010c23fc40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf5e580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c186260(puVar5);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar15);
      goto LAB_10715d19c;
    }
  }
  uVar18 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x0001070c58b4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar6;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170a80(puVar5);
  _objc_release(uVar20);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  func_0x00010c186240(param_1,puVar5);
  uVar15 = *(ulong *)(param_2 + lVar32);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf91760();
  if ((uVar18 & 1) == 0) {
    _objc_release(uVar15);
LAB_10715d288:
    func_0x00010bf4d820(param_2);
  }
  else {
    puVar16 = puVar5;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar15);
    if (puVar16 != (undefined *)0x0) goto LAB_10715d288;
  }
  func_0x00010c1c40e0(puVar5);
  uVar18 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c26f640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar18);
  if (uVar6 != 0) {
    uVar18 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar15;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214ec0(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar15);
    _objc_release(uVar18);
  }
  uVar18 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c29a9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c29a9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar18 = uVar6;
  func_0x00010c0818c0();
  if ((int)uVar18 == 0) {
    uVar18 = uVar4;
    func_0x00010c0818a0();
    if (((int)uVar18 != 0) && (uVar18 = uVar4, func_0x00010c0778e0(), (int)uVar18 != 0)) {
      uVar18 = uVar4;
      func_0x00010c100500();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10715d410;
    }
LAB_10715d5d0:
    uStack_2b0 = 0;
  }
  else {
    uVar18 = uVar6;
    func_0x00010c27c960();
    _objc_retainAutoreleasedReturnValue();
LAB_10715d410:
    uStack_2b0 = uVar18;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    if (uStack_2b0 == 0) goto LAB_10715d5d0;
    func_0x00010c214ec0(puVar5);
    func_0x00010c26f060(&uStack_f0,param_2);
    puStack_148 = puStack_e8;
    uStack_150 = uStack_f0;
    uStack_140 = uStack_e0;
    puStack_1f8 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
    uStack_200 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_1f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar17 = &uStack_150;
    _CMTimeCompare(puVar17,&uStack_200);
    if (0 < (int)puVar17) {
      puVar16 = puVar5;
      func_0x00010c255460(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = puStack_e8;
      uStack_150 = uStack_f0;
      uStack_140 = uStack_e0;
      uVar18 = param_2;
      func_0x00010becf560(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20bd80(puVar5);
      _objc_release(uVar18);
      _objc_release(puVar16);
      puVar16 = puVar5;
      func_0x00010bf30960(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = puStack_e8;
      uStack_150 = uStack_f0;
      uStack_140 = uStack_e0;
      uVar18 = param_2;
      func_0x00010becf4c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c178ce0(puVar5);
      _objc_release(uVar18);
      _objc_release(puVar16);
      puVar16 = puVar5;
      func_0x00010bf114c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = puStack_e8;
      uStack_150 = uStack_f0;
      uStack_140 = uStack_e0;
      uVar18 = param_2;
      func_0x00010becf4a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16cd00(puVar5);
      _objc_release(uVar18);
      _objc_release(puVar16);
    }
  }
  uVar18 = *(ulong *)(param_2 + lVar32);
  func_0x00010c2325e0();
  if ((uVar18 & 1) == 0) {
    uVar18 = param_2;
    func_0x00010be8e7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010c0918c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb2c0(puVar5);
    _objc_release(uVar15);
    _objc_release(uVar18);
  }
  uVar19 = *(undefined8 *)(param_2 + lVar32);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar19;
  func_0x00010c081be0();
  _objc_release(uVar19);
  if ((int)uVar9 != 0) {
    uVar9 = *(undefined8 *)(param_2 + lVar32);
    func_0x00010c249660(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207a40(puVar5);
    _objc_release(uVar9);
  }
  uVar18 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar20;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca160(puVar5);
  _objc_release(uVar11);
  _objc_release(uVar20);
  _objc_release(uVar15);
  _objc_release(uVar18);
  uVar9 = *(undefined8 *)(param_2 + lVar32);
  func_0x00010bf16100(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f3c0(puVar5);
  _objc_release(uVar9);
  iVar1 = (int)*(undefined8 *)(param_2 + lVar32);
  func_0x00010c083340();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + lVar32);
    func_0x00010c075080();
    if (iVar1 != 0) {
      uVar18 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar18;
      func_0x00010c2705e0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe75c0();
      func_0x00010c1c4580(puVar5);
      _objc_release(uVar20);
      _objc_release(uVar15);
      _objc_release(uVar18);
      puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puStack_e8 = &uStack_f0;
      uStack_f0 = 0;
      uStack_e0 = 0x3032000000;
      pcStack_d8 = FUN_1071476b4;
      uStack_d0 = 0x1071476c4;
      uStack_c8 = 0;
      lVar10 = *(long *)(param_2 + lVar32);
      func_0x00010bf4e7c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 == 0) {
        uVar18 = param_2;
        func_0x00010c13b420();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar18;
        func_0x00010bfadc40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar15;
        func_0x00010bfc1300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(uVar18);
        uVar18 = uVar20;
        func_0x00010bfc1240();
        _objc_retainAutoreleasedReturnValue();
        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_110 = 0xc2000000;
        pcStack_108 = FUN_10715ea58;
        puStack_100 = &UNK_1108616a8;
        _objc_retain(puVar5);
        uVar15 = uVar18;
        puStack_f8 = puVar5;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar15;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(uVar18);
        if (uVar11 != 0) {
          func_0x00010bf4e760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar21 = PTR_PTR_1126d4dc8;
          _objc_alloc(PTR_PTR_1126d4dc8);
          uVar18 = uVar11;
          func_0x00010bfaea60(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01c380(puVar21);
          func_0x00010befa120(puVar16);
          _objc_release(puVar21);
          _objc_release(uVar18);
        }
        _objc_release(uVar11);
        puVar21 = puStack_f8;
      }
      else {
        puVar21 = PTR_PTR_1126d4dc8;
        _objc_alloc(PTR_PTR_1126d4dc8);
        uVar20 = *(ulong *)(param_2 + lVar32);
        func_0x00010bf4e7c0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c380(puVar21);
        func_0x00010befa120(puVar16);
      }
      _objc_release(puVar21);
      _objc_release(uVar20);
      lVar10 = *(long *)(param_2 + lVar32);
      func_0x00010c25e320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 != 0) {
        puVar21 = PTR_PTR_1126d4dc8;
        _objc_alloc(PTR_PTR_1126d4dc8);
        uVar9 = *(undefined8 *)(param_2 + lVar32);
        func_0x00010c25e320(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c380(puVar21);
        func_0x00010befa120(puVar16);
        _objc_release(puVar21);
        _objc_release(uVar9);
      }
      lVar22 = *(long *)(param_2 + lVar32);
      func_0x00010c111580();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar22;
      _objc_release();
      if (lVar22 != 0) {
        puVar21 = PTR_PTR_1126d4dc8;
        _objc_alloc(PTR_PTR_1126d4dc8);
        lVar10 = *(long *)(param_2 + lVar32);
        func_0x00010c111580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c380(puVar21);
        func_0x00010befa120(puVar16);
        _objc_release(puVar21);
        _objc_release();
      }
      puStack_148 = &uStack_150;
      uStack_150 = 0;
      uStack_140 = 0x3032000000;
      pcStack_138 = FUN_1071476b4;
      uStack_130 = 0x1071476c4;
      uStack_128 = 0;
      _dispatch_group_create();
      uVar18 = param_2;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar18;
      func_0x00010c094ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar20;
      func_0x00010c077380();
      if ((uVar11 & 1) == 0) {
        uVar11 = param_2;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x0001070c5bf0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010befec80();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar14;
        func_0x00010c06bcc0();
        if ((uVar23 & 1) == 0) {
          uVar23 = param_2;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = uVar23;
          func_0x0001070c5bf0();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = uVar24;
          func_0x00010c0f7f60();
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar25;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar27 = uVar26;
          func_0x00010c079d60();
          if ((uVar27 & 1) == 0) {
            uVar27 = param_2;
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            uVar28 = uVar27;
            func_0x00010bf5ce40();
            _objc_retainAutoreleasedReturnValue();
            uVar29 = uVar28;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar33 = uVar29;
            func_0x00010c07c2e0();
            _objc_release(uVar29);
            _objc_release(uVar28);
            _objc_release(uVar27);
          }
          else {
            uVar33 = 1;
          }
          _objc_release(uVar26);
          _objc_release(uVar25);
          _objc_release(uVar24);
          _objc_release(uVar23);
        }
        else {
          uVar33 = 1;
        }
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
      }
      else {
        uVar33 = 1;
      }
      _objc_release(uVar20);
      _objc_release(uVar15);
      _objc_release(uVar18);
      if (((param_5 & 1) == 0) && ((uVar33 & 1) == 0)) {
        if (param_4 != 0) {
          _dispatch_group_enter(lVar10);
          puVar21 = PTR_PTR_1126c4830;
          _objc_opt_new(PTR_PTR_1126c4830);
          func_0x00010c2b50e0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2ab6c0(0x7ff0000000000000,puVar21);
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar18 = param_2;
          func_0x00010c13b420(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar18;
          func_0x00010bfaeca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06c320();
          func_0x00010c2bbda0(puVar21);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(uVar18);
          uVar18 = param_2;
          func_0x00010bfa3600(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar18;
          func_0x00010c0ef680();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar15;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar21;
          func_0x00010bf21f60(puVar21);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(PTR___dispatch_main_q_11034be20);
          puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1c8 = 0xc2000000;
          uStack_1c0 = 0x10715ebd4;
          puStack_1b8 = &UNK_1109902b8;
          _objc_retain(puVar5);
          puStack_1a0 = &uStack_150;
          puStack_198 = &uStack_f0;
          puStack_1b0 = puVar5;
          _objc_retain(lVar10);
          lStack_1a8 = lVar10;
          func_0x00010bfc9ee0(uVar20);
          _objc_release(PTR___dispatch_main_q_11034be20);
          _objc_release(puVar30);
          _objc_release(uVar20);
          _objc_release(uVar15);
          _objc_release(uVar18);
          _objc_release(lStack_1a8);
          puVar30 = puStack_1b0;
          goto LAB_10715e178;
        }
      }
      else {
        _dispatch_group_enter(lVar10);
        puVar21 = PTR_PTR_1126c4830;
        _objc_opt_new(PTR_PTR_1126c4830);
        func_0x00010c2ae1c0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2ab6c0(param_1,puVar21);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar18 = param_2;
        func_0x00010c13b420(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar18;
        func_0x00010bfaeca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06c320();
        func_0x00010c2bbda0(puVar21);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(uVar18);
        uVar18 = param_2;
        func_0x00010bfa3600(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar18;
        func_0x00010c0ef680();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar30 = puVar21;
        func_0x00010bf21f60(puVar21);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_188 = 0xc2000000;
        pcStack_180 = FUN_10715eb24;
        puStack_178 = &UNK_1109902b8;
        _objc_retain(puVar5);
        puStack_160 = &uStack_150;
        puStack_158 = &uStack_f0;
        puStack_170 = puVar5;
        _objc_retain(lVar10);
        lStack_168 = lVar10;
        func_0x00010bfc9ee0(uVar20);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(puVar30);
        _objc_release(uVar20);
        _objc_release(uVar15);
        _objc_release(uVar18);
        _objc_release(lStack_168);
        puVar30 = puStack_170;
LAB_10715e178:
        _objc_release(puVar30);
        _objc_release(puVar21);
      }
      _dispatch_group_enter(lVar10);
      puVar30 = PTR_PTR_1126c4830;
      _objc_opt_new();
      func_0x00010c2aa000();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2adfc0(puVar30);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ab6c0(param_1,puVar30);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar18 = param_2;
      func_0x00010c13b420(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar18;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c320();
      func_0x00010c2bbda0(puVar30);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar18);
      puVar31 = puVar30;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puStack_1f8 = &uStack_200;
      uStack_200 = 0;
      uStack_1f0 = 0x3032000000;
      pcStack_1e8 = FUN_1071476b4;
      uStack_1e0 = 0x1071476c4;
      uStack_1d8 = 0;
      uVar18 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar18;
      func_0x00010c0ef680();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_228 = 0xc2000000;
      uStack_220 = 0x10715ec84;
      puStack_218 = &UNK_1108e8330;
      puStack_208 = &uStack_200;
      _objc_retain(lVar10);
      lStack_210 = lVar10;
      func_0x00010bfc9ee0(uVar20);
      puVar21 = PTR___dispatch_main_q_11034be20;
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar20);
      _objc_release(uVar15);
      _objc_release(uVar18);
      _objc_initWeak(auStack_238,param_2);
      puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_290 = 0xc2000000;
      pcStack_288 = FUN_10715ece0;
      puStack_280 = &UNK_1109902e8;
      puStack_258 = &uStack_200;
      _objc_retain(puVar5);
      puStack_250 = &uStack_150;
      puStack_278 = puVar5;
      puStack_270 = puVar16;
      puStack_268 = puVar31;
      _objc_retain(puVar31);
      _objc_retain(puVar16);
      _objc_copyWeak(auStack_240,auStack_238);
      puStack_248 = &uStack_f0;
      _objc_retain(param_6);
      lStack_260 = param_6;
      func_0x000100bc0718(lVar10,puVar21,&puStack_298);
      _objc_release(puVar21);
      _objc_release(lStack_260);
      _objc_destroyWeak(auStack_240);
      _objc_release(puStack_268);
      _objc_release(puStack_270);
      _objc_release(puStack_278);
      _objc_destroyWeak(auStack_238);
      _objc_release(lStack_210);
      __Block_object_dispose(&uStack_200,8);
      _objc_release(uStack_1d8);
      _objc_release(puVar31);
      _objc_release(puVar30);
      _objc_release(lVar10);
      __Block_object_dispose(&uStack_150,8);
      _objc_release(uStack_128);
      __Block_object_dispose(&uStack_f0,8);
      _objc_release(uStack_c8);
      _objc_release(puVar16);
    }
  }
  else {
    uVar18 = param_2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010bf207a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar20;
    func_0x00010bf208a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar20);
    _objc_release(uVar15);
    _objc_release(uVar18);
    if (uVar11 != 0) {
      puVar21 = PTR_PTR_1126d4dc0;
      _objc_alloc(PTR_PTR_1126d4dc0);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar18 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar18;
      func_0x00010bf207a0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar20;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf208a0();
      func_0x00010c0df720(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c031020(puVar21);
      func_0x00010c173880(puVar5);
      _objc_release(puVar21);
      _objc_release(puVar16);
      _objc_release(uVar11);
      _objc_release(uVar20);
      _objc_release(uVar15);
      _objc_release(uVar18);
      uVar19 = *(undefined8 *)(param_2 + lVar32);
      func_0x00010c29ae80(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar19;
      func_0x00010bf51e00();
      func_0x00010c1d68c0(puVar5);
      _objc_release(uVar9);
      _objc_release(uVar19);
    }
    _objc_initWeak(&uStack_f0,param_2);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10715e528;
    puStack_a8 = &UNK_110990288;
    _objc_copyWeak(auStack_90,&uStack_f0);
    _objc_retain(puVar5);
    puStack_a0 = puVar5;
    uStack_88 = param_1;
    _objc_retain(param_6);
    lStack_98 = param_6;
    func_0x00010c29aee0(param_2);
    _objc_release(lStack_98);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(&uStack_f0);
  }
  _objc_release(uStack_2b0);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_10715e488:
  _objc_release(param_6);
  return;
}



/* Entry: 10715e528; end: 10715e64b;  */

void FUN_10715e528(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = param_2;
    func_0x00010bf51e00(param_2);
    func_0x00010c221d20(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
    func_0x00010c2381a0(lVar1);
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10715e64c; end: 10715e75b;  */

void FUN_10715e64c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126c4830;
  _objc_opt_new();
  func_0x00010c2bc700();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa000(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2adfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab6c0(*(undefined8 *)(param_1 + 0x38),puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10715e75c;
  puStack_58 = &UNK_1108465d0;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_48 = puVar2;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  _objc_retain(puVar2);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(puStack_48);
  _objc_release(puVar2);
  return;
}



/* Entry: 10715e75c; end: 10715e877;  */

void FUN_10715e75c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c12cfe0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ef680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf21f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10715e878;
  puStack_58 = &UNK_110990258;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar6;
  _objc_retain(uVar5);
  uStack_48 = uVar5;
  func_0x00010bfc9ee0(uVar3,param_2,uVar4,0,PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10715e878; end: 10715ea57;  */

long FUN_10715e878(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c151a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1eaa20(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar2 = PTR_PTR_1126d4dc8;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c151a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c380();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eaa20(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010c141d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1c4e40(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar2 = PTR_PTR_1126d4dc8;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c141d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c380();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4e40(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  lVar7 = lVar1;
  func_0x00010bfaea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
    func_0x00010bfaee40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf4e780();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bfadea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c0720c0(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar7);
  _objc_release(lVar1);
  return lVar8;
}



/* Entry: 10715ea58; end: 10715eb23;  */

undefined8 FUN_10715ea58(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfaea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfaee40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4e780();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bfadea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 10715eb24; end: 10715ecdf;  */

void FUN_10715eb24(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c151a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c27fe80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar1);
  if (param_3 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined ***)(lVar3 + 0x28) = &PTR____CFConstantStringClassReference_110ea0ad8;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10715ece0; end: 10715f003;  */

void FUN_10715ece0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **unaff_x21;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **unaff_x24;
  undefined8 uVar15;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined8 *puVar16;
  undefined **unaff_x28;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined **ppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_100;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010c151a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar13 = &PTR_PTR_1126d4000;
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126d4dc8;
    _objc_alloc();
    unaff_x21 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c151a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c380();
    param_4 = (undefined8 *)0x1;
    unaff_x22 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eaa20(*(undefined8 *)(param_1 + 0x20));
    _objc_release(unaff_x22);
    _objc_release(puVar4);
    _objc_release(unaff_x21);
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010c141d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    unaff_x21 = (undefined **)PTR_PTR_1126d4dc8;
    _objc_alloc();
    unaff_x22 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c141d60();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined8 *)0x2;
    func_0x00010c01c380();
    func_0x00010befa120(uVar10);
    _objc_release(unaff_x21);
    _objc_release(unaff_x22);
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c27fee0();
  if (iVar2 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20));
  }
  ppuVar5 = *(undefined ***)(param_1 + 0x28);
  func_0x00010bf51e00();
  ppuVar9 = ppuVar5;
  func_0x00010c1c4e40(*(undefined8 *)(param_1 + 0x20));
  _objc_release(ppuVar5);
  ppuVar5 = (undefined **)(param_1 + 0x58);
  _objc_loadWeakRetained();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = ppuVar5;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = unaff_x24;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = unaff_x24;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar5;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = unaff_x25;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x27;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x28;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
    ppuVar13 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = unaff_x21;
    param_4 = unaff_x22;
    func_0x00010c0acba0(unaff_x24);
    _objc_release(ppuVar13);
    _objc_release(unaff_x21);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(ppuStack_88);
    _objc_release(unaff_x24);
    _objc_release(ppuStack_80);
    _objc_release(ppuStack_78);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10715f004;
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = unaff_x28;
  ppuStack_e8 = unaff_x27;
  ppuStack_e0 = unaff_x26;
  ppuStack_d8 = unaff_x25;
  ppuStack_d0 = unaff_x24;
  ppuStack_c8 = ppuVar13;
  puStack_c0 = unaff_x22;
  ppuStack_b8 = unaff_x21;
  ppuStack_b0 = ppuVar5;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(ppuVar9);
  puVar7 = &uStack_1c0;
  ppuVar5 = ppuVar9;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x27 = (undefined **)*puStack_1b0;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1b0 != unaff_x27) {
          _objc_enumerationMutation(ppuVar9);
        }
        ppuVar13 = *(undefined ***)(lStack_1b8 + (long)unaff_x28 * 8);
        ppuVar6 = ppuVar13;
        func_0x00010c081660();
        if ((int)ppuVar6 == 0) {
          func_0x00010befa120(puVar11);
        }
        else {
          func_0x00010c2790e0();
          _objc_retainAutoreleasedReturnValue();
          uStack_1d8 = param_4[1];
          uStack_1e0 = *param_4;
          uStack_1d0 = param_4[2];
          unaff_x25 = ppuVar13;
          func_0x000108cfa1e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
          ppuVar13 = (undefined **)PTR_PTR_1126d4dd0;
          func_0x00010c255040();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuVar13;
          func_0x00010c2bbb60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x24);
          _objc_release(ppuVar13);
          func_0x00010befa120(puVar11);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar5 != unaff_x28);
      puVar7 = &uStack_1c0;
      ppuVar5 = ppuVar9;
      func_0x00010bf52a60();
      unaff_x22 = (undefined8 *)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_100) {
    ___stack_chk_fail();
    pcStack_1e8 = FUN_10715f1f8;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_240 = unaff_x28;
    ppuStack_238 = unaff_x27;
    ppuStack_230 = unaff_x26;
    ppuStack_228 = unaff_x25;
    ppuStack_220 = unaff_x24;
    ppuStack_218 = ppuVar13;
    puStack_210 = unaff_x22;
    puStack_208 = param_4;
    puStack_200 = puVar11;
    ppuStack_1f8 = ppuVar9;
    ppuStack_1f0 = &puStack_a0;
    _objc_retain(puVar7);
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    _objc_retain(puVar7);
    puVar16 = &uStack_310;
    puVar12 = puVar7;
    func_0x00010bf52a60();
    if (puVar12 != (undefined8 *)0x0) {
      lVar3 = *plStack_300;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_300 != lVar3) {
            _objc_enumerationMutation(puVar7);
          }
          uVar14 = *(undefined8 *)(lStack_308 + (long)puVar16 * 8);
          uVar10 = uVar14;
          func_0x00010c081660();
          if ((int)uVar10 == 0) {
            func_0x00010befa120(puVar11);
          }
          else {
            uVar10 = uVar14;
            func_0x00010bf52240();
            func_0x00010c2790e0();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar14;
            func_0x000108cfa1e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c219440(uVar10);
            _objc_release(uVar15);
            _objc_release(uVar14);
            func_0x00010befa120(puVar11);
            _objc_release(uVar10);
          }
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar12 != puVar16);
        puVar16 = &uStack_310;
        puVar12 = puVar7;
        func_0x00010bf52a60();
      } while (puVar12 != (undefined8 *)0x0);
    }
    _objc_release(puVar7);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar16;
        func_0x00010c0fb820();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar11;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar7 != (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar11);
            }
            uVar15 = *(undefined8 *)((long)puVar12 * 8);
            puVar8 = PTR_PTR_1126bcec8;
            _objc_alloc(PTR_PTR_1126bcec8);
            uVar10 = uVar15;
            func_0x00010c26b700(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27a600(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar15;
            func_0x000108cfa1e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c051760(puVar8);
            _objc_release(uVar14);
            _objc_release(uVar15);
            _objc_release(uVar10);
            func_0x00010befa120(puVar4);
            _objc_release(puVar8);
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          } while (puVar7 != puVar12);
          puVar7 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        puVar11 = (undefined8 *)PTR_PTR_1126bced0;
        _objc_alloc();
        func_0x00010c035e80();
        _objc_release(puVar4);
      }
      _objc_release(puVar16);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
        ___stack_chk_fail();
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar16;
        func_0x0001070c48d4();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar7;
        func_0x00010c1597e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar12;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar7);
        _objc_release(puVar16);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10715f004; end: 10715f1f7; -[PreviewViewController _translateStickerStates:withTimeBase:] */

void FUN_10715f004(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x22;
  undefined8 *puVar7;
  undefined *unaff_x23;
  undefined8 uVar8;
  undefined *unaff_x24;
  undefined8 uVar9;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar10;
  long unaff_x27;
  undefined8 *puVar11;
  long unaff_x28;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = &uStack_130;
  lVar10 = param_3;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined **)(lStack_128 + unaff_x28 * 8);
        puVar2 = unaff_x23;
        func_0x00010c081660();
        if ((int)puVar2 == 0) {
          func_0x00010befa120(puVar6);
        }
        else {
          func_0x00010c2790e0();
          _objc_retainAutoreleasedReturnValue();
          uStack_148 = param_4[1];
          uStack_150 = *param_4;
          uStack_140 = param_4[2];
          unaff_x25 = unaff_x23;
          func_0x000108cfa1e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          unaff_x23 = PTR_PTR_1126d4dd0;
          func_0x00010c255040();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c2bbb60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          func_0x00010befa120(puVar6);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar10 != unaff_x28);
      puVar4 = &uStack_130;
      lVar10 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar10 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_10715f1f8;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1b0 = unaff_x28;
    lStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    puStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    uStack_180 = unaff_x22;
    puStack_178 = param_4;
    puStack_170 = puVar6;
    lStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    _objc_retain(puVar4);
    puVar11 = &uStack_280;
    puVar7 = puVar4;
    func_0x00010bf52a60();
    if (puVar7 != (undefined8 *)0x0) {
      lVar10 = *plStack_270;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_270 != lVar10) {
            _objc_enumerationMutation(puVar4);
          }
          uVar8 = *(undefined8 *)(lStack_278 + (long)puVar11 * 8);
          uVar3 = uVar8;
          func_0x00010c081660();
          if ((int)uVar3 == 0) {
            func_0x00010befa120(puVar6);
          }
          else {
            uVar3 = uVar8;
            func_0x00010bf52240();
            func_0x00010c2790e0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x000108cfa1e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c219440(uVar3);
            _objc_release(uVar9);
            _objc_release(uVar8);
            func_0x00010befa120(puVar6);
            _objc_release(uVar3);
          }
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar7 != puVar11);
        puVar11 = &uStack_280;
        puVar7 = puVar4;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined8 *)0x0);
    }
    _objc_release(puVar4);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar11;
        func_0x00010c0fb820();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar4 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar6);
            }
            uVar9 = *(undefined8 *)((long)puVar7 * 8);
            puVar5 = PTR_PTR_1126bcec8;
            _objc_alloc(PTR_PTR_1126bcec8);
            uVar3 = uVar9;
            func_0x00010c26b700(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27a600(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar9;
            func_0x000108cfa1e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c051760(puVar5);
            _objc_release(uVar8);
            _objc_release(uVar9);
            _objc_release(uVar3);
            func_0x00010befa120(puVar2);
            _objc_release(puVar5);
            puVar7 = (undefined8 *)((long)puVar7 + 1);
          } while (puVar4 != puVar7);
          puVar4 = puVar6;
          func_0x00010bf52a60();
        }
        _objc_release(puVar6);
        puVar6 = (undefined8 *)PTR_PTR_1126bced0;
        _objc_alloc();
        func_0x00010c035e80();
        _objc_release(puVar2);
      }
      _objc_release(puVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
        ___stack_chk_fail();
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar11;
        func_0x0001070c48d4();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c1597e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar11);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10715f1f8; end: 10715f3b7; -[PreviewViewController _translateCaptionStates:withTimeBase:] */

void FUN_10715f1f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
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
  puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar5 = &uStack_130;
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        uVar1 = uVar9;
        func_0x00010c081660();
        if ((int)uVar1 == 0) {
          func_0x00010befa120(puVar7);
        }
        else {
          uVar1 = uVar9;
          func_0x00010bf52240();
          func_0x00010c2790e0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x000108cfa1e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c219440(uVar1);
          _objc_release(uVar10);
          _objc_release(uVar9);
          func_0x00010befa120(puVar7);
          _objc_release(uVar1);
        }
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      puVar5 = &uStack_130;
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c0fb820();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (puVar7 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(puVar3);
          }
          uVar10 = *(undefined8 *)((long)puVar8 * 8);
          puVar4 = PTR_PTR_1126bcec8;
          _objc_alloc(PTR_PTR_1126bcec8);
          uVar1 = uVar10;
          func_0x00010c26b700(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27a600(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar10;
          func_0x000108cfa1e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c051760(puVar4);
          _objc_release(uVar9);
          _objc_release(uVar10);
          _objc_release(uVar1);
          func_0x00010befa120(puVar2);
          _objc_release(puVar4);
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar7 != puVar8);
        puVar7 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
      puVar7 = (undefined8 *)PTR_PTR_1126bced0;
      _objc_alloc();
      func_0x00010c035e80();
      _objc_release(puVar2);
    }
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x0001070c48d4();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010c1597e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10715f3b8; end: 10715f5bb; -[PreviewViewController _translateAutoCaptionsStates:withTimeBase:] */

void FUN_10715f3b8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c0fb820();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar10 = *(undefined8 *)((long)puVar9 * 8);
        puVar4 = PTR_PTR_1126bcec8;
        _objc_alloc(PTR_PTR_1126bcec8);
        uVar5 = uVar10;
        func_0x00010c26b700(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27a600(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar10;
        func_0x000108cfa1e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c051760(puVar4);
        _objc_release(uVar6);
        _objc_release(uVar10);
        _objc_release(uVar5);
        func_0x00010befa120(puVar2);
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar8 != puVar9);
      puVar8 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar8 = PTR_PTR_1126bced0;
    _objc_alloc();
    func_0x00010c035e80();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x0001070c48d4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1597e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10715f5bc; end: 10715f6d7; -[PreviewViewController previewAppliedLensIds] */

void FUN_10715f5bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c48d4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1597e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10715f6d8; end: 10715f857; -[PreviewViewController _didScreenShot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715f6d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  func_0x00010bea00a0(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf324a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010c1598c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  FUN_1070c4ee8();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf2ac60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127644ac;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf311e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bfbabe0(uVar8);
  func_0x00010c0aeda0(lVar6,param_2,1,uVar7,lVar2,uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10715f858; end: 10715f85f; -[PreviewViewController _didScreenRecord] */

void FUN_10715f858(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea00b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendScreenCaptureNotificationMe_1125859d0,1)
  ;
  return;
}



/* Entry: 10715f860; end: 10715fa0b; -[PreviewViewController _sendScreenCaptureNotificationMessageWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715f860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127644ac;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2d240();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + lVar6);
    func_0x00010c242400();
    if (lVar3 != 0x69) {
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c077de0();
      _objc_release(uVar1);
      lVar3 = *(long *)(param_1 + lVar6);
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar2 == 0) {
        lVar5 = lVar3;
        func_0x00010c1322c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        if (lVar5 == 0) {
          return;
        }
        lVar3 = *(long *)(param_1 + lVar6);
        func_0x00010c131e40(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c1322c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        func_0x00010bea0080(param_1,param_2,lVar6,param_3);
      }
      else {
        lVar6 = lVar3;
        func_0x00010c1322e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x0001070c598c();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf50600();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010beee460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf50380();
        _objc_release(lVar4);
        _objc_release(lVar5);
        _objc_release(lVar3);
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar6);
      return;
    }
  }
  return;
}



/* Entry: 10715fa0c; end: 10715fbab; -[PreviewViewController _sendScreenCaptureForUserId:type:] */

void FUN_10715fa0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c5968();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x19;
  lVar10 = 0;
  func_0x0001000819a8(0x19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf504e0(lVar3);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b540(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x0001070c598c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar10;
    func_0x00010bfb1920(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50380(uVar9);
    _objc_release(lVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 10715fbac; end: 10715fc9b;  */

void FUN_10715fbac(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c598c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50380(uVar5);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10715fc9c; end: 10715fd83; -[PreviewViewController merlinOnboardingNeedsDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715fc9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + _DAT_1127641dc);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127641dc);
    }
    _objc_retain(uVar3);
    func_0x00010c12e1c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10715fd84; end: 10715fd8f; -[PreviewViewController memoriesInformationWebViewControllerDidPressBack:] */

void FUN_10715fd84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
  return;
}



/* Entry: 10715fd90; end: 10715fe0f; -[PreviewViewController displayingConfidentalFeatureName] */

undefined ** FUN_10715fd90(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c070700();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22e38;
  if ((int)uVar4 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10715fe10; end: 10715fe3f; -[PreviewViewController displayingConfidentalFeatureDescriptionWithFeatureName:] */

void FUN_10715fe10(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e22e58);
  return;
}



/* Entry: 10715fe40; end: 107160067; -[PreviewViewController checkForConfidentialFeatureWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715fe40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010bf86c80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126af180;
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0,1);
    }
  }
  else {
    _objc_retain(param_3);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af180;
    _objc_retain(param_3);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar4);
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(param_3 + 0x20) + (long)_DAT_112764408) = 0;
  lVar6 = *(long *)(param_3 + 0x28);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010716008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x10))(lVar6,1,0);
    return;
  }
  return;
}



/* Entry: 107160068; end: 1071600af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107160068(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764408) = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010716008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0);
    return;
  }
  return;
}



/* Entry: 1071600b0; end: 1071600b3; -[PreviewViewController parentViewControllerForPreviewFeature] */

void FUN_1071600b0(void)

{
  return;
}



/* Entry: 1071600b4; end: 107160303; -[PreviewViewController _logGallerySnapSendSessionStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071600b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127644ac;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c07e920();
  if ((int)uVar1 == 0) {
    return;
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + lVar7);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + lVar7);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar3 == 0) {
    if (lVar2 == 0) {
      if (lVar7 == 0) goto LAB_1071602cc;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x0001070c5380();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c88c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7320();
    }
    else {
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x0001070c5380();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c88c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7340();
    }
  }
  else {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x0001070c5380();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c88c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7380();
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
LAB_1071602cc:
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107160304; end: 1071603e3; -[PreviewViewController _postingDirectlyToPublicStoryInstead:] */

ulong FUN_107160304(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2588a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  if ((uVar4 & 1) == 0) {
    uVar1 = uVar3;
    func_0x000108f482e0(uVar3);
    param_3 = (ulong)((uint)uVar1 ^ 1);
  }
  _objc_release(uVar3);
  return param_3;
}



/* Entry: 1071603e4; end: 107160667; -[PreviewViewController _displayOneTapTooltipWithRecentMyStory:recentlyPostedPublicStory:recentlyPostedCustomStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071603e4(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  lVar4 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c11aa60();
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x000108f482e0();
  uVar1 = param_3 | param_4 | param_5;
  if ((((param_4 & 1) == 0) && (param_3 != 0)) && (param_5 == 0)) {
    uVar10 = 1;
  }
  else {
    uVar10 = (uVar1 ^ 1) & (uint)lVar4;
  }
  lVar4 = lVar2;
  func_0x000108f482e0();
  if (((uVar10 & 1) != 0) ||
     ((((param_3 | param_5 | param_4 ^ 1) & (uVar1 | (uint)lVar4) ^ 1) & (uint)lVar3 & 1) != 0)) {
    lVar9 = (long)_DAT_1127644f0;
    lVar4 = *(long *)(param_1 + lVar9);
    func_0x00010c259240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar11 = (long)_DAT_112764548;
      lVar4 = *(long *)(param_1 + lVar11);
      _objc_release();
      if (lVar4 == 0) {
        lVar4 = param_1;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c273f60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x000108edf398();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c259240(uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar5;
        func_0x00010c23a8c0(0xc028000000000000,0,lVar5,param_2,lVar6,uVar7,0);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + lVar11);
        *(long *)(param_1 + lVar11) = lVar9;
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar3);
        _objc_release(lVar4);
      }
    }
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x0001070c5530();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa240();
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107160668; end: 1071607d7; -[PreviewViewController _currentSnapProProfile] */

void FUN_107160668(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar4;
  func_0x00010c116a20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f04f08(uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126d4dd8;
  _objc_retain(uVar3);
  _objc_opt_class(puVar5);
  uVar6 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  uVar1 = uVar3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar6 = uVar1;
  func_0x00010c1164a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1071607d8; end: 10716086b; -[PreviewViewController _shouldDisablePublicStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1071607d8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_1127644ac);
  func_0x00010c07b5a0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c07c2a0();
    if ((int)param_1 == 0) {
      bVar1 = false;
    }
    else {
      func_0x000107d6fc14();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c25aac0();
      bVar1 = lVar4 == 0;
      _objc_release(lVar3);
      _objc_release(param_1);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


