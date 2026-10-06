/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e113e4; end: 108e113e7; -[SCCaptionBigTextPlusView editingTextView] */

void FUN_108e113e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textView_112678cc8);
  return;
}



/* Entry: 108e113e8; end: 108e12413; -[SCCaptionBigTextPlusView initializeViewsWithState:backgroundImage:shouldKeepStyles:] */

void FUN_108e113e8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c086c00(param_3);
  func_0x00010c1b6e20(param_1);
  puVar1 = PTR_PTR_1126c4278;
  _objc_alloc(PTR_PTR_1126c4278);
  uVar12 = *(undefined8 *)(param_1 + 0x1b8);
  uVar15 = *(undefined8 *)(param_1 + 0x1c0);
  uVar17 = *(undefined8 *)(param_1 + 0x1c8);
  uVar19 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x00010c013fc0(uVar12,uVar15,uVar17,uVar19);
  func_0x00010c181a20(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar9 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c80();
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  lVar9 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7620(uVar12);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(puVar1);
  if ((*(byte *)(param_1 + 0xc9) & 1) == 0) {
    func_0x00010c262cc0(param_1);
    uVar13 = uVar12;
    _CGRectGetMidX();
    _CGRectGetMidY(uVar12,uVar15,uVar17,uVar19);
    lVar9 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(uVar13,uVar12);
    _objc_release(lVar9);
  }
  puVar1 = PTR_PTR_1126c4850;
  _objc_alloc(PTR_PTR_1126c4850);
  dVar20 = *(double *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar22 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(dVar20,uVar12,dVar22,uVar15);
  func_0x00010c213200(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar9 = param_1;
  func_0x00010c26ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dbe0();
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c26ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar9);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126dc068;
  _objc_alloc(PTR_PTR_1126dc068);
  func_0x00010c013de0(dVar20,uVar12,dVar22,uVar15);
  func_0x00010c2138e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d97c0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6ec0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbe0();
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar9);
  _objc_release(puVar1);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207da0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0c0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar9);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(lVar9);
  _objc_release(puVar1);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6da0();
  _objc_release(lVar9);
  puVar1 = param_3;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  puVar3 = puVar5;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cbf68;
    func_0x00010bf8b5c0(PTR_PTR_1126cbf68,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar4 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c26ca00();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x2) {
    lVar9 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0a0();
    _objc_release(lVar9);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar17,param_2,lVar9);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  func_0x00010c1bdbc0(param_1);
  _objc_release(lVar2);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar9,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c013de0(dVar20,uVar12,dVar22,uVar15);
  func_0x00010c2136a0(param_1,param_2,puVar4);
  _objc_release(puVar4);
  lVar9 = param_1;
  func_0x00010c26c740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26c740(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar9,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c26ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26c740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar9,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar9);
  lVar9 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  puVar4 = PTR_PTR_1126dc070;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    func_0x00010bffc6c0(puVar4,param_2,lVar2,param_4);
    lVar9 = *(long *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar4;
  }
  else {
    lVar9 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar9);
    func_0x00010bffc6e0(puVar4,param_2,lVar2,lVar9);
    uVar17 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar4;
    _objc_release(uVar17);
  }
  _objc_release(lVar9);
  _objc_release(lVar2);
  lVar9 = param_1;
  func_0x00010c26c740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar9);
  puVar4 = param_3;
  func_0x00010bfe1300(param_3);
  func_0x00010c1a7f60(param_1,param_2,puVar4);
  func_0x00010c262cc0(param_1);
  dVar14 = dVar20;
  _CGRectGetHeight();
  _CGRectGetWidth(dVar20,uVar12,dVar22,uVar15);
  if (dVar20 <= dVar14) {
    dVar14 = dVar20;
  }
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar21 = dVar20;
  _CGRectGetHeight();
  _CGRectGetWidth(dVar20,uVar12,dVar22,uVar15);
  if (dVar20 <= dVar21) {
    dVar21 = dVar20;
  }
  _objc_release(puVar4);
  dVar20 = 1.0;
  if (dVar21 != 0.0) {
    dVar20 = dVar14 / dVar21;
  }
  func_0x00010c19e5e0(param_1);
  func_0x00010bf86ca0(param_3);
  if ((((dVar20 == 1.79769313486232e+308) ||
       (func_0x00010bf8c740(param_3), dVar20 == 1.79769313486232e+308)) ||
      (func_0x00010bf8c740(param_3), dVar20 < 13.0)) ||
     (func_0x00010bf8c740(param_3), 130.0 < dVar20)) {
    puVar4 = puVar3;
    func_0x00010bfb40c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4000();
    if (dVar20 <= 0.0) {
      func_0x00010c19e5c0(0x4043000000000000,param_1);
    }
    else {
      puVar5 = puVar3;
      func_0x00010bfb40c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb4000();
      func_0x00010c19e5c0(param_1);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    func_0x00010bfb4000(param_1);
    func_0x00010c193ba0(param_1);
LAB_108e11dc8:
    dVar14 = 1.0;
    func_0x00010c1b8720(param_1);
  }
  else {
    func_0x00010bf86ca0(param_3);
    func_0x00010c19e5c0(param_1);
    puVar4 = param_3;
    func_0x00010bf8c660();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010bf8c740(param_3);
      func_0x00010c193ba0(param_1);
    }
    else {
      puVar4 = puVar3;
      func_0x00010bfb40c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb4000();
      func_0x00010c193ba0(param_1);
      _objc_release(puVar4);
    }
    func_0x00010bfb4000(param_1);
    dVar14 = 600.0;
    if (dVar20 <= 600.0) goto LAB_108e11dc8;
    func_0x00010bfb4000(param_1);
    func_0x00010c1b8720(dVar20 / 600.0,param_1);
    func_0x00010c19e5c0(param_1);
  }
  puVar4 = param_3;
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar5;
  }
  else {
    puVar10 = param_3;
    func_0x00010c268460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010c0d3c80();
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar5;
    _objc_release(uVar12);
  }
  _objc_release(puVar10);
  _objc_release(puVar4);
  puVar4 = param_3;
  func_0x00010c293da0();
  *(undefined **)(param_1 + 0xd8) = puVar4;
  func_0x00010bfb4000(param_1);
  dVar20 = dVar14;
  func_0x00010bfb4060(param_1);
  dVar14 = dVar14 * dVar20;
  lVar9 = param_1;
  func_0x00010be1f240(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar4 = param_3;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  lVar9 = param_1;
  if (puVar4 != (undefined *)0x0) {
    puVar10 = param_3;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010c08fa60();
    _objc_release(puVar10);
    _objc_release(puVar4);
    if (puVar6 != (undefined *)0x0) {
      lVar2 = param_1;
      func_0x00010c087020();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar11 = 0;
      }
      else {
        lVar7 = param_1;
        func_0x00010c087020(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c06e1e0();
        uVar11 = (uint)lVar8 ^ 1;
        _objc_release(lVar7);
      }
      _objc_release(lVar2);
      func_0x00010bf0e540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar9;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c14c7c0(puVar5,param_2,lVar2,param_5,uVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(lVar7);
      _objc_release(puVar4);
      _objc_release(lVar2);
      goto LAB_108e12000;
    }
  }
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
LAB_108e12000:
  _objc_release(lVar9);
  _objc_release(puVar5);
  puVar4 = param_3;
  func_0x00010c08a3e0();
  *(undefined **)(param_1 + 0x98) = puVar4;
  puVar4 = param_3;
  func_0x00010c0fb8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    *(undefined1 *)(param_1 + 199) = 1;
    puVar4 = param_3;
    func_0x00010c0fb8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar4;
    _objc_release(uVar12);
  }
  func_0x00010c178880(param_1,param_2,puVar1,puVar3);
  lVar9 = param_1;
  func_0x00010beffa20();
  if (lVar9 - 1U < 3) {
    lVar9 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(lVar9);
    lVar9 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167580();
    _objc_release(lVar9);
    func_0x00010bf8c740(param_1);
    dVar20 = 1.0;
    if (0.0 < dVar14) {
      func_0x00010bfb4000(param_1);
      dVar20 = dVar14;
      func_0x00010bf8c740(param_1);
      dVar20 = dVar14 / dVar20;
    }
    lVar9 = param_1;
    func_0x00010bde8220(param_1);
    dVar20 = dVar20 * (double)lVar9;
    lVar9 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0x47efffffe0000000;
    func_0x00010c23d5a0(dVar20,0x47efffffe0000000);
    _objc_release(lVar9);
    func_0x00010bea8500(dVar20,uVar12,param_1);
    lVar9 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar2 = param_1;
    dVar14 = dVar22;
    uVar12 = uVar15;
    func_0x00010c26c740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1827c0(dVar22,uVar15);
    _objc_release(lVar2);
    _objc_release(lVar9);
    lVar9 = param_1;
    func_0x00010c26c740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar2 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar22,uVar15,dVar14,uVar12);
    _objc_release(lVar2);
    _objc_release(lVar9);
    func_0x00010c285f60(*(undefined8 *)(param_1 + 0x90));
    func_0x00010bf34840(param_3);
    dVar20 = 1.79769313486232e+308;
    if (dVar22 == 1.79769313486232e+308) {
      func_0x00010bf348c0();
      func_0x00010be3b660(param_1);
      func_0x00010be3b6a0(param_1);
    }
    else {
      func_0x00010c141a80(param_3);
      func_0x00010c1b8700(param_1);
      func_0x00010bf34840(param_3);
      dVar20 = *(double *)(param_1 + 0x1b8);
      _CGRectGetWidth(dVar20,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8),
                      *(undefined8 *)(param_1 + 0x1d0));
      dVar21 = dVar22 * dVar20;
      func_0x00010bf348c0(param_3);
      dVar22 = *(double *)(param_1 + 0x1b8);
      dVar14 = *(double *)(param_1 + 0x1c8);
      uVar12 = *(undefined8 *)(param_1 + 0x1d0);
      _CGRectGetHeight(dVar22,*(undefined8 *)(param_1 + 0x1c0),dVar14,uVar12);
      dVar22 = dVar20 * dVar22;
      func_0x00010bdca740(dVar21,dVar22,param_1);
      dVar20 = dVar22;
      func_0x00010c1b8d00(param_1);
      func_0x00010c1b8d20(dVar22,param_1);
    }
    func_0x00010c21e900(param_1,param_2,0);
    func_0x00010bea89e0(param_1,param_2,0);
    func_0x00010be94660(param_1);
    func_0x00010c262cc0(param_1);
    dVar21 = dVar22;
    dVar16 = dVar20;
    dVar18 = dVar14;
    uVar15 = uVar12;
    func_0x00010c262ce0(param_1);
    func_0x00010c29caa0(dVar22,dVar20,dVar14,uVar12,dVar21,dVar16,dVar18,uVar15,param_1);
    puVar4 = param_3;
    func_0x00010bf8c660();
    if ((int)puVar4 != 0) {
      func_0x00010c24eaa0(param_1,param_2,0);
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e12414; end: 108e124db; -[SCCaptionBigTextPlusView alignCaption:] */

void FUN_108e12414(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uStack_38 = param_3 - 1;
  if (uStack_38 < 3) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uVar2 = 0xc0000000;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_108e124dc;
    puStack_40 = &UNK_110ac61b0;
    func_0x00010be5c920(param_1,param_2,&puStack_58);
    func_0x00010c166c00(param_1,param_2,param_3);
    func_0x00010bea4040(param_1);
    func_0x00010bea84e0(param_1);
    uVar1 = param_1;
    func_0x00010c26ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    func_0x00010bdca740(param_1);
    _objc_release(uVar1);
    func_0x00010c1b8d00(uVar2,param_1);
  }
  return;
}



/* Entry: 108e124dc; end: 108e124e7;  */

void FUN_108e124dc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setTextAlignment__112662638,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e124e8; end: 108e124ef; -[SCCaptionBigTextPlusView _initializeLastRotation] */

void FUN_108e124e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b8710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setLastRotation__11264bbe8);
  return;
}



/* Entry: 108e124f0; end: 108e1266b; -[SCCaptionBigTextPlusView _initializeLastLocations:] */

/* WARNING: Possible PIC construction at 0x000108e1256c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e12570) */
/* WARNING: Removing unreachable block (ram,0x000108e125c8) */
/* WARNING: Removing unreachable block (ram,0x000108e12580) */
/* WARNING: Removing unreachable block (ram,0x000108e125b0) */
/* WARNING: Removing unreachable block (ram,0x000108e12588) */
/* WARNING: Removing unreachable block (ram,0x000108e12590) */
/* WARNING: Removing unreachable block (ram,0x000108e125e4) */
/* WARNING: Removing unreachable block (ram,0x000108e125ec) */
/* WARNING: Removing unreachable block (ram,0x000108e12644) */
/* WARNING: Removing unreachable block (ram,0x000108e12648) */
/* WARNING: Removing unreachable block (ram,0x000108e1264c) */
/* WARNING: Removing unreachable block (ram,0x000108e12650) */

void FUN_108e124f0(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_2;
  func_0x00010c075fe0();
  dVar2 = *(double *)(param_2 + 0x1b8);
  if ((int)lVar1 == 0) {
    _CGRectGetHeight(dVar2,*(undefined8 *)(param_2 + 0x1c0),*(undefined8 *)(param_2 + 0x1c8),
                     *(undefined8 *)(param_2 + 0x1d0));
    param_1 = param_1 * dVar2;
  }
  else {
    _CGRectGetWidth();
    param_1 = *(double *)(param_2 + 0x1b8);
    _CGRectGetHeight(param_1,*(undefined8 *)(param_2 + 0x1c0),*(undefined8 *)(param_2 + 0x1c8),
                     *(undefined8 *)(param_2 + 0x1d0));
    param_1 = param_1 * 0.5;
    lVar1 = param_2;
    func_0x00010bde8220(param_2);
    func_0x00010bdca760(dVar2 * 0.5,param_1,(double)lVar1,param_2);
    func_0x00010c1b8d00(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b8d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setLastTranslationY__11264bd70);
  return;
}



/* Entry: 108e1266c; end: 108e126c7; -[SCCaptionBigTextPlusView updateAnchor:rotation:scale:] */

void FUN_108e1266c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c1b8d00();
  func_0x00010c1b8d20(param_2,param_5);
  func_0x00010c1b8700(param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c1b8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,param_5,PTR_s_setLastScale__11264bbf0);
  return;
}



/* Entry: 108e126c8; end: 108e1270b; -[SCCaptionBigTextPlusView dealloc] */

void FUN_108e126c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d5e0();
  puStack_28 = PTR_PTR_1126fea30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108e1270c; end: 108e127df; -[SCCaptionBigTextPlusView tearDownAndRemoveFromSuperview] */

void FUN_108e1270c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar1);
  func_0x00010be5c920(param_1);
  lVar1 = param_1;
  func_0x00010c26c740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,0);
  return;
}



/* Entry: 108e127e0; end: 108e127e7;  */

void FUN_108e127e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 108e127e8; end: 108e12803; -[SCCaptionBigTextPlusView clearText] */

void FUN_108e127e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__manipulateCaptionTextViewsWithA_112574be8,
             &PTR___NSConcreteGlobalBlock_110ac6210);
  return;
}



/* Entry: 108e12804; end: 108e12807; -[SCCaptionBigTextPlusView view] */

void FUN_108e12804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_containerView_1125b0650);
  return;
}



/* Entry: 108e12808; end: 108e1286b; -[SCCaptionBigTextPlusView _configureTextViewBasedOnEditMode] */

void FUN_108e12808(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf8c660();
  if ((uVar1 & 1) == 0) {
    func_0x00010bea89e0(param_1);
    uVar1 = param_1;
    func_0x00010c26c740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c071280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserInteractionEnabled__112665468,uVar1);
  return;
}



/* Entry: 108e1286c; end: 108e12afb; -[SCCaptionBigTextPlusView _setTopAlphaGradientEnabled:] */

void FUN_108e1286c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_5;
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_7 == 0) {
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c26ba60();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_5);
        return;
      }
      goto LAB_108e12af8;
    }
  }
  else if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    func_0x00010c26c740(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(puVar2);
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c209760(0x3ff0000000000000,0x3fb3333340000000,puVar1);
    func_0x00010c196020(0x3ff0000000000000,0,puVar1);
    func_0x00010c26ba60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
LAB_108e12af8:
  ___stack_chk_fail();
  func_0x00010bee8860();
  func_0x00010be3b660(puVar1);
  func_0x00010c1b8720(0x3ff0000000000000,puVar1);
  func_0x00010bf8c740(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setFontSize__112645390);
  return;
}



/* Entry: 108e12afc; end: 108e12b3b; -[SCCaptionBigTextPlusView _resetFontSizeAndUpdatePosition] */

void FUN_108e12afc(undefined8 param_1)

{
  func_0x00010bee8860();
  func_0x00010be3b660(param_1);
  func_0x00010c1b8720(0x3ff0000000000000,param_1);
  func_0x00010bf8c740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c19e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFontSize__112645390);
  return;
}



/* Entry: 108e12b3c; end: 108e12b93; -[SCCaptionBigTextPlusView addObservers] */

void FUN_108e12b3c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e12b94; end: 108e12be3; -[SCCaptionBigTextPlusView removeObservers] */

void FUN_108e12b94(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e12be4; end: 108e12d1f; -[SCCaptionBigTextPlusView inputKeyboardWillChangeFrame:] */

void FUN_108e12be4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar1);
  _objc_release(param_7);
  uVar1 = param_5;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073040();
  _objc_release(uVar1);
  if ((((int)uVar2 != 0) && (_CGRectGetHeight(param_1,param_2,param_3,param_4), param_1 != 0.0)) &&
     (dVar3 = param_1, func_0x00010c086c00(param_5), param_1 != dVar3)) {
    func_0x00010c1b6e20(param_1,param_5);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108e12d20;
    puStack_60 = &UNK_110842e18;
    uStack_58 = param_5;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_78);
  }
  return;
}



/* Entry: 108e12d20; end: 108e12d27;  */

void FUN_108e12d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__resize_112582b38);
  return;
}



/* Entry: 108e12d28; end: 108e12d63; -[SCCaptionBigTextPlusView isHidden] */

undefined8 FUN_108e12d28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074c20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e12d64; end: 108e12d67; -[SCCaptionBigTextPlusView isEditing] */

void FUN_108e12d64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_editing_1125c0b40);
  return;
}



/* Entry: 108e12d68; end: 108e12dab; -[SCCaptionBigTextPlusView text] */

void FUN_108e12d68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e12dac; end: 108e12dd3; -[SCCaptionBigTextPlusView captionStyle] */

void FUN_108e12dac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e12dd4; end: 108e12dfb; -[SCCaptionBigTextPlusView pickedColor] */

void FUN_108e12dd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e12dfc; end: 108e1304f; -[SCCaptionBigTextPlusView searchableNameForFriendFiltering] */

void FUN_108e12dfc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0xd8) == 0x7fffffffffffffff) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c24d960(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c0e1ce0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    lVar9 = *(long *)(param_1 + 0xd8);
    uVar8 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(uVar8);
    lVar7 = *(long *)(param_1 + 0xd8);
    if (lVar7 < 0) {
      _objc_release(uVar2);
      uVar8 = 0;
      goto LAB_108e12e34;
    }
    lVar1 = uVar4 - lVar7;
    if ((long)uVar6 <= (long)uVar4) {
      lVar7 = lVar9;
      lVar1 = uVar6 - lVar9;
    }
    uVar3 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    FUN_108e3ebf0(lVar7,lVar1,uVar6);
    uVar8 = uVar4;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar8 != 0) && (uVar2 = uVar8, func_0x00010c08fa60(), uVar2 != 0)) {
      uVar2 = uVar8;
      func_0x00010c260c20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_108e12e34;
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0x7fffffffffffffff;
LAB_108e12e34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 108e13050; end: 108e13097; -[SCCaptionBigTextPlusView usernamesForTagging] */

void FUN_108e13050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108e226d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e13098; end: 108e130df; -[SCCaptionBigTextPlusView topicsInCaption] */

void FUN_108e13098(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108e227f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e130e0; end: 108e130e7; -[SCCaptionBigTextPlusView setCaptionExitSource:] */

void FUN_108e130e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 108e130e8; end: 108e130ef; -[SCCaptionBigTextPlusView captionExitSource] */

undefined8 FUN_108e130e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108e130f0; end: 108e13107; -[SCCaptionBigTextPlusView taggedUsers] */

void FUN_108e130f0(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e13108; end: 108e131db; -[SCCaptionBigTextPlusView addTaggedUser:] */

void FUN_108e13108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd8) != 0x7fffffffffffffff) {
    uVar1 = param_3;
    FUN_108e22f3c(param_3,*(undefined1 *)(param_1 + 0xc1));
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010be8ed00(param_1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108e131dc; end: 108e13273;  */

void FUN_108e131dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d2ab0;
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf51620(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4438;
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010befbcc0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e13274; end: 108e1338f; -[SCCaptionBigTextPlusView addTaggedUsers:] */

ulong FUN_108e13274(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      func_0x000108e22aa4(*(undefined8 *)(uVar4 * 8),*(undefined8 *)(param_1 + 0x70),
                          *(undefined8 *)(param_1 + 0x118));
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    uVar1 = param_3;
    func_0x00010bf52a60();
  }
  func_0x00010bea8560(param_1);
  func_0x00010be94760(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_3 + 0x70);
  func_0x00010bf002e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  return (ulong)(lVar2 != 0);
}



/* Entry: 108e13390; end: 108e133d3; -[SCCaptionBigTextPlusView hasTaggedUsers] */

bool FUN_108e13390(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010bf002e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 108e133d4; end: 108e13403; -[SCCaptionBigTextPlusView setTopics:] */

void FUN_108e133d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e13404; end: 108e13447; -[SCCaptionBigTextPlusView attributedText] */

void FUN_108e13404(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e13448; end: 108e1344b; -[SCCaptionBigTextPlusView isFullscreen] */

void FUN_108e13448(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEditing_1125f9eb0);
  return;
}



/* Entry: 108e1344c; end: 108e134db; -[SCCaptionBigTextPlusView captionPresent] */

uint FUN_108e1344c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  _objc_release(uVar2);
  return (uint)puVar1 ^ 1;
}



/* Entry: 108e134dc; end: 108e13503; -[SCCaptionBigTextPlusView textContainerView] */

void FUN_108e134dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e13504; end: 108e1354f; -[SCCaptionBigTextPlusView textSize] */

undefined1  [16]
FUN_108e13504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c620();
  _objc_release(param_5);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e13550; end: 108e135e7; -[SCCaptionBigTextPlusView stopTagging] */

void FUN_108e13550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d1320;
  lVar2 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  lVar3 = param_1;
  func_0x00010be1dde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfd0760(puVar1,param_2,param_1,lVar2,uVar5,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e135e8; end: 108e13637; -[SCCaptionBigTextPlusView _getCombinedTaggedItemsDictionary] */

void FUN_108e135e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010bef7f60(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e13638; end: 108e13713; -[SCCaptionBigTextPlusView _removeTagFromCaptionIfNeededForText:range:] */

void FUN_108e13638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010befa120(puVar2,param_2,*(undefined8 *)(param_1 + 0x70));
  }
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar1 = PTR_PTR_1126c4438;
  if (puVar3 != (undefined *)0x0) {
    lVar4 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c12e8c0(puVar1,param_2,puVar2,lVar4,param_4,param_5,uVar5,
                        *(undefined1 *)(param_1 + 0xc1));
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e13714; end: 108e13a17; -[SCCaptionBigTextPlusView _replaceTextWithFormattedTag:updateDictionaryHandler:] */

void FUN_108e13714(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0xd8) != 0x7fffffffffffffff) {
    uVar1 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c24d960(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0e1ce0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    lVar9 = *(long *)(param_1 + 0xd8);
    uVar1 = uVar2;
    func_0x00010c08fa60();
    if ((((uVar7 == 0x7fffffffffffffff) || (uVar1 < uVar7)) ||
        (0x7ffffffffffffffe < *(ulong *)(param_1 + 0xd8))) ||
       ((long)uVar7 < (long)*(ulong *)(param_1 + 0xd8))) {
      FUN_108e3ebf0(lVar9,uVar7 - lVar9,uVar2);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c25cf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar8);
      uVar2 = uVar1;
      func_0x00010c08fa60(uVar1);
      uVar4 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      _objc_release(uVar4);
      (**(code **)(param_4 + 0x10))(param_4,lVar9,uVar7 - lVar9,uVar2 - uVar6);
      _objc_retain(param_3);
      _objc_retain(uVar1);
      func_0x00010be5c920(param_1);
      func_0x00010bea8560(param_1);
      *(undefined8 *)(param_1 + 0xd8) = 0x7fffffffffffffff;
      func_0x00010be94760(param_1);
      _objc_release(uVar1);
      _objc_release(param_3);
      uVar2 = uVar1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e13a18; end: 108e13ab3;  */

void FUN_108e13a18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c26ca80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14c840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108e13ab4; end: 108e13b33; -[SCCaptionBigTextPlusView setUserInteractionEnabled:] */

void FUN_108e13ab4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c082800();
  _objc_release(uVar1);
  if (param_3 != (int)uVar2) {
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e13b34; end: 108e13b6b; -[SCCaptionBigTextPlusView setHidden:] */

void FUN_108e13b34(undefined8 param_1)

{
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e13b6c; end: 108e13c2b; -[SCCaptionBigTextPlusView setTextFromTagging:] */

void FUN_108e13b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0xc3) = 1;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c159e80();
  _objc_release(lVar1);
  func_0x00010c212f20(param_1);
  FUN_108e3ebf0(lVar2 + 1,param_2,param_3);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb500();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0xc3) = 0;
  return;
}



/* Entry: 108e13c2c; end: 108e13d1b; -[SCCaptionBigTextPlusView setPromptText:] */

void FUN_108e13c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0xc4) = 1;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbe0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128d60();
  _objc_release(lVar1);
  func_0x00010c212f20(param_1,param_2,param_3);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb500();
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e13d1c; end: 108e13e27; -[SCCaptionBigTextPlusView setText:] */

void FUN_108e13d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_90 [5];
  undefined8 auStack_68 [5];
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar1 = auStack_90;
  if (lVar5 != 0) {
    puVar1 = auStack_68;
  }
  pcVar2 = FUN_108e13ea8;
  if (lVar5 != 0) {
    pcVar2 = FUN_108e13e28;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_110ac6290;
  puVar1[4] = param_3;
  _objc_retain(param_3);
  func_0x00010be5c920(param_1,param_2,puVar1);
  _objc_release(puVar1[4]);
  _objc_release(param_3);
  func_0x00010bea8560(param_1);
  func_0x00010be94760(param_1,param_2,1,1,0,0);
  return;
}



/* Entry: 108e13e28; end: 108e13ea7;  */

void FUN_108e13e28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf0e540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14c840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e13ea8; end: 108e13eb3;  */

void FUN_108e13ea8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setText__1126625f0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e13eb4; end: 108e13f53; -[SCCaptionBigTextPlusView setCaptionStyle:appliedStyle:] */

void FUN_108e13eb4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010c071ae0(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = param_3;
      _objc_release(uVar2);
    }
    uVar1 = param_4;
    func_0x00010c071ae0(param_4,param_2,*(undefined8 *)(param_1 + 0x18));
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = param_4;
      _objc_release(uVar2);
      func_0x00010bdcdca0(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e13f54; end: 108e13fbb; -[SCCaptionBigTextPlusView _applyCaptionStyleUpdates] */

void FUN_108e13f54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb5d40();
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2018c0();
  _objc_release(uVar1);
  func_0x00010bea8560(param_1);
  func_0x00010bed4da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCaptionStyle_112592d00);
  return;
}



/* Entry: 108e13fbc; end: 108e1403f; -[SCCaptionBigTextPlusView _changeFontSizeBasedOnScale] */

void FUN_108e13fbc(double param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c089ce0();
  dVar2 = param_1;
  func_0x00010bfb4000(param_2);
  dVar1 = dVar2;
  func_0x00010c089ce0(param_2);
  dVar2 = dVar2 * dVar1;
  if (600.0 < dVar2) {
    func_0x00010bfb4000(param_2);
    param_1 = 600.0 / dVar2;
  }
  func_0x00010c089ce0(param_2);
  dVar2 = dVar2 / param_1;
  func_0x00010c1b8720(dVar2,param_2);
  func_0x00010bfb4000(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c19e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 * dVar2,param_2,PTR_s_setFontSize__112645390);
  return;
}



/* Entry: 108e14040; end: 108e14097; -[SCCaptionBigTextPlusView _changeScaleBasedOnFontSize] */

void FUN_108e14040(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010bf8c740();
  dVar1 = param_1;
  func_0x00010bfb4000(param_2);
  param_1 = param_1 / dVar1;
  func_0x00010c089ce0(param_2);
  func_0x00010c1b8720(dVar1 / param_1,param_2);
  func_0x00010bf8c740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c19e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setFontSize__112645390);
  return;
}



/* Entry: 108e14098; end: 108e140bb; -[SCCaptionBigTextPlusView _maxTextWidth] */

long FUN_108e14098(long param_1)

{
  func_0x00010bde8220();
  return (long)((double)param_1 + -16.0);
}



/* Entry: 108e140bc; end: 108e140ef; -[SCCaptionBigTextPlusView _contentWidth] */

long FUN_108e140bc(double param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc9) == '\x01') {
    param_1 = *(double *)(param_2 + 0x178);
  }
  else {
    func_0x00010c262ce0();
  }
  _CGRectGetWidth();
  return (long)param_1;
}



/* Entry: 108e140f0; end: 108e141e7; -[SCCaptionBigTextPlusView _centerFromAnchorPoint:] */

undefined1  [16] FUN_108e140f0(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_3;
  dVar3 = param_1;
  func_0x00010beffa20();
  if (lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010c26ba60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar2 = dVar3;
    func_0x00010c089ce0(param_3);
    dVar3 = dVar3 * dVar2;
    _objc_release(lVar1);
    func_0x00010c089cc0(param_3);
    _cos();
    dVar3 = dVar3 * -0.5;
  }
  else {
    if (lVar1 != 1) goto LAB_108e141cc;
    lVar1 = param_3;
    func_0x00010c26ba60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar2 = dVar3;
    func_0x00010c089ce0(param_3);
    dVar2 = dVar3 * dVar2;
    dVar3 = dVar2 * 0.5;
    _objc_release(lVar1);
    func_0x00010c089cc0(param_3);
    _cos();
  }
  param_1 = param_1 + dVar2 * dVar3;
  func_0x00010c089cc0(param_3);
  _sin();
  param_2 = param_2 + dVar2 * dVar3;
LAB_108e141cc:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 108e141e8; end: 108e14257; -[SCCaptionBigTextPlusView _anchorFromCenterPoint:] */

undefined1  [16] FUN_108e141e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3;
  uVar2 = param_1;
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010bdca760(param_1,param_2,uVar2,param_3);
  _objc_release(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108e14258; end: 108e14303; -[SCCaptionBigTextPlusView _anchorFromCenterPoint:textWidth:] */

undefined1  [16] FUN_108e14258(double param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_4;
  dVar2 = param_1;
  func_0x00010beffa20();
  if (lVar1 == 3) {
    func_0x00010c089ce0(param_4);
    dVar2 = param_3 * dVar2;
    param_3 = dVar2 * 0.5;
    func_0x00010c089cc0(param_4);
    _cos();
  }
  else {
    if (lVar1 != 1) goto LAB_108e142e8;
    func_0x00010c089ce0(param_4);
    param_3 = param_3 * dVar2;
    func_0x00010c089cc0(param_4);
    _cos();
    param_3 = param_3 * -0.5;
  }
  param_1 = param_1 + dVar2 * param_3;
  func_0x00010c089cc0(param_4);
  _sin();
  param_2 = param_2 + dVar2 * param_3;
LAB_108e142e8:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108e14304; end: 108e1433f; -[SCCaptionBigTextPlusView _verticalCoordinate] */

double FUN_108e14304(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010c08a560();
  dVar1 = *(double *)(param_2 + 0x1b8);
  _CGRectGetHeight(dVar1,*(undefined8 *)(param_2 + 0x1c0),*(undefined8 *)(param_2 + 0x1c8),
                   *(undefined8 *)(param_2 + 0x1d0));
  return param_1 / dVar1;
}



/* Entry: 108e14340; end: 108e145a7; -[SCCaptionBigTextPlusView textViewDidChange:] */

void FUN_108e14340(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_7);
  func_0x00010be94760(param_5,param_6,1,1,0,1);
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c26b900();
  _objc_release(lVar1);
  if (*(char *)(param_5 + 0xc4) == '\x01') {
    *(undefined1 *)(param_5 + 0xc5) = 1;
  }
  lVar1 = param_7;
  func_0x00010c0bbdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c071780(), (int)lVar2 != 0)) {
    func_0x00010bea8560(param_5);
  }
  lVar2 = param_5;
  func_0x00010c26c740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  lVar3 = param_5;
  func_0x00010c26c740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c26c740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(0,param_2 - param_4);
  _objc_release(lVar2);
  if (*(char *)(param_5 + 0x60) == '\x01') {
    lVar2 = param_5;
    func_0x00010c26ca80(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c26ca80(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c26ca80(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c24d960(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0e1ce0(lVar2,param_6,lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar8 = PTR_PTR_1126c4438;
    lVar2 = param_5;
    func_0x00010c26ca80(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010be1dde0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf480(puVar8,param_6,lVar7,lVar4,lVar5);
    *(undefined **)(param_5 + 0xd8) = puVar8;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e145a8; end: 108e14957; -[SCCaptionBigTextPlusView textView:shouldChangeTextInRange:replacementText:] */

undefined8
FUN_108e145a8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
             long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    lVar1 = param_6;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) {
      uVar2 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fa60();
      lVar1 = param_6;
      func_0x00010c08fa60();
      uVar3 = (uVar3 - param_5) + lVar1;
      _objc_release(uVar2);
      if (0xfa < uVar3) {
        uVar2 = param_3;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c08fa60();
        _objc_release(uVar2);
        if (uVar4 <= uVar3) {
          uVar3 = param_3;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          FUN_108e225c8();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c26b700(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          _objc_release(uVar2);
          _objc_release(uVar3);
          if ((uVar7 & 1) == 0) {
            puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_80 = 0xc2000000;
            pcStack_78 = FUN_108e14958;
            puStack_70 = &UNK_110848ba8;
            _objc_retain(param_3);
            uStack_68 = param_3;
            _objc_retain(param_6);
            lStack_60 = param_6;
            lStack_58 = param_1;
            func_0x000107c312d0("APPSTORE",&puStack_88);
            _objc_release(lStack_60);
            _objc_release(uStack_68);
          }
          goto LAB_108e145f0;
        }
      }
      if (*(char *)(param_1 + 0x60) == '\x01') {
        lVar1 = param_6;
        func_0x00010c0720c0();
        if ((int)lVar1 != 0) {
          uVar3 = param_1 + 0x20;
          _objc_loadWeakRetained();
          uVar2 = uVar3;
          _objc_opt_respondsToSelector();
          _objc_release(uVar3);
          if ((uVar2 & 1) != 0) {
            lVar1 = param_1 + 0x20;
            _objc_loadWeakRetained(lVar1);
            func_0x00010bf7c4a0();
            _objc_release(lVar1);
          }
          *(undefined8 *)(param_1 + 0xd8) = param_4;
        }
        func_0x00010be8d920(param_1);
      }
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c0b5aa0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_6;
      func_0x00010c11f340();
      if (lVar1 == 0x7fffffffffffffff) {
        _objc_release(puVar5);
LAB_108e1481c:
        lVar1 = param_6;
        func_0x00010bf4b6e0();
        if ((int)lVar1 != 0) {
          puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e0 = 0xc2000000;
          pcStack_d8 = FUN_108e14a90;
          puStack_d0 = &UNK_110841f80;
          lStack_c8 = param_1;
          _objc_retain(param_3);
          uStack_c0 = param_3;
          func_0x000107c312d0("APPSTORE",&puStack_e8);
          uVar3 = uStack_c0;
          goto LAB_108e14878;
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 0x18);
        func_0x00010bfb40c0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar6;
        func_0x00010c26ca00();
        _objc_release(lVar6);
        _objc_release(puVar5);
        if (lVar1 != 2) goto LAB_108e1481c;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x108e149f8;
        puStack_a0 = &UNK_110841f80;
        _objc_retain(param_3);
        uStack_98 = param_3;
        lStack_90 = param_1;
        func_0x000107c312d0("APPSTORE",&puStack_b8);
        uVar3 = uStack_98;
LAB_108e14878:
        _objc_release(uVar3);
      }
      uVar8 = 1;
      goto LAB_108e145f4;
    }
    func_0x00010c12ddc0(param_1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010bf2d960();
    _objc_release(lVar1);
    if ((int)lVar6 != 0) {
      *(undefined8 *)(param_1 + 0x80) = 2;
      func_0x00010c255ee0(param_1);
    }
  }
LAB_108e145f0:
  uVar8 = 0;
LAB_108e145f4:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 108e14958; end: 108e14a8f;  */

void FUN_108e14958(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108e225c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be94660(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e14a90; end: 108e14aeb;  */

void FUN_108e14a90(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xc0) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xc0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCaptionStyle_112592d00);
  return;
}



/* Entry: 108e14aec; end: 108e14b43; -[SCCaptionBigTextPlusView textViewDidBeginEditing:] */

void FUN_108e14aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  func_0x00010c1fb500(param_3,param_2,uVar2,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e14b44; end: 108e14d2f; -[SCCaptionBigTextPlusView textViewDidChangeSelection:] */

void FUN_108e14b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c159e80(param_3);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26cb40(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if ((*(char *)(param_1 + 0xc3) == '\x01') && (*(char *)(param_1 + 0x60) == '\x01')) {
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c24d960(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1ce0(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126c4438;
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be1dde0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf480();
    *(undefined **)(param_1 + 0xd8) = puVar7;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 108e14d30; end: 108e14dc7; -[SCCaptionBigTextPlusView textPasteConfigurationSupporting:transformPasteItem:] */

void FUN_108e14d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108e14dc8;
  puStack_38 = &UNK_110ac62c0;
  uStack_30 = param_4;
  uStack_28 = param_1;
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_50);
  FUN_108e23020(param_4,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 108e14dc8; end: 108e14ed7;  */

void FUN_108e14dc8(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if ((lVar2 == 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
    func_0x00010c1cd880(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar2 = param_2;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf8c1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf2f800();
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        func_0x00010c1cd880(*(undefined8 *)(param_1 + 0x20));
        iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010bf8c660();
        if (iVar1 != 0) {
          func_0x00010c255ee0(*(undefined8 *)(param_1 + 0x28));
        }
        lVar2 = *(long *)(param_1 + 0x28) + 0x20;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf2fbc0();
        _objc_release(lVar2);
        goto LAB_108e14eb8;
      }
    }
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c20e840(*(undefined8 *)(param_1 + 0x20));
    }
  }
LAB_108e14eb8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e14ed8; end: 108e14f2b; -[SCCaptionBigTextPlusView startEditingAnimated:] */

void FUN_108e14ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be795c0();
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be00770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didStartEditingAnimated__11255db78,param_3);
  return;
}



/* Entry: 108e14f2c; end: 108e14fa3; -[SCCaptionBigTextPlusView stopEditingAnimated:] */

void FUN_108e14f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a6f00();
  _objc_release(lVar1);
  func_0x00010be795e0(param_1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(lVar1);
  func_0x00010bea8560(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be00930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didStopEditingAnimated__11255dbe8,param_3);
  return;
}



/* Entry: 108e14fa4; end: 108e1501b; -[SCCaptionBigTextPlusView _prepareToStartEditing] */

void FUN_108e14fa4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1a7f60(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(lVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x108));
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c109080();
  _objc_release(lVar1);
  func_0x00010bddcac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resize_112582b38);
  return;
}



/* Entry: 108e1501c; end: 108e1512f; -[SCCaptionBigTextPlusView _didStartEditingAnimated:] */

void FUN_108e1501c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x00010c193b00(param_1,param_2,1);
  func_0x00010bde5d00(param_1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7bb80();
  _objc_release(lVar1);
  if (param_3 != 0) {
    func_0x00010c071280();
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bdc93c0(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resize_112582b38);
  return;
}



/* Entry: 108e15130; end: 108e15147;  */

void FUN_108e15130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resizeWithScreenWidthInEditingM_112582b78,0,0,1,
             0);
  return;
}



/* Entry: 108e15148; end: 108e15187;  */

void FUN_108e15148(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071280();
  if (bVar1 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__resize_112582b38);
    return;
  }
  return;
}



/* Entry: 108e15188; end: 108e151d3; -[SCCaptionBigTextPlusView _prepareToStopEditing] */

void FUN_108e15188(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf301c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be94770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__resizeWithScreenWidthInEditingM_112582b78,0,0,1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108e151d4; end: 108e1533f; -[SCCaptionBigTextPlusView _didStopEditingAnimated:] */

void FUN_108e151d4(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf7c480();
      _objc_release(lVar3);
    }
  }
  lVar3 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(lVar3);
  func_0x00010c193b00(param_1);
  func_0x00010bde5d00(param_1);
  if (param_3 == 0) {
    func_0x00010be94660(param_1);
  }
  else {
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bdc93c0(param_1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x108));
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c256fe0();
  _objc_release(param_1);
  return;
}



/* Entry: 108e15340; end: 108e1534b;  */

void FUN_108e15340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__resize_112582b38);
  return;
}



/* Entry: 108e1534c; end: 108e153b7;  */

void FUN_108e1534c(double param_1,long param_2)

{
  func_0x00010c088a20(*(undefined8 *)(param_2 + 0x20));
  if ((param_1 == 1.0) || (func_0x00010c088a20(*(undefined8 *)(param_2 + 0x20)), param_1 == 0.0)) {
    func_0x00010bddc940(*(undefined8 *)(param_2 + 0x20));
  }
  else {
    func_0x00010c1b8720(0x3ff0000000000000,*(undefined8 *)(param_2 + 0x20));
    func_0x00010bf8c740(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c19e5c0(*(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s__resize_112582b38);
  return;
}



/* Entry: 108e153b8; end: 108e1552f; -[SCCaptionBigTextPlusView tap:] */

void FUN_108e153b8(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c26ca80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c074c20();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c071280(), (int)uVar1 != 0)) {
    uVar1 = param_3;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_3 + 0x20;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010bf2d960();
      _objc_release(lVar3);
      if ((int)lVar4 != 0) {
        *(undefined8 *)(param_3 + 0x80) = 3;
        func_0x00010c255ee0(param_3,param_4,1);
      }
    }
  }
  else {
    lVar3 = param_3 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf2d920();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      uVar1 = param_3;
      func_0x00010c074c20();
      if ((int)uVar1 != 0) {
        uVar1 = param_3;
        func_0x00010bf4b2a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,uVar1);
        _objc_release(uVar1);
        dVar5 = *(double *)(param_3 + 0x1b8);
        _CGRectGetHeight(dVar5,*(undefined8 *)(param_3 + 0x1c0),*(undefined8 *)(param_3 + 0x1c8),
                         *(undefined8 *)(param_3 + 0x1d0));
        func_0x00010be3b660(param_2 / dVar5,param_3);
        func_0x00010be3b6a0(param_3);
      }
      func_0x00010c24eaa0(param_3,param_4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e15530; end: 108e155d3; -[SCCaptionBigTextPlusView pan:] */

void FUN_108e15530(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if ((lVar1 != 1) ||
     (uVar2 = param_1, func_0x00010c2321e0(param_1,param_2,param_3), (int)uVar2 != 0)) {
    uVar2 = param_1;
    func_0x00010c26ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f3600();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c26ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2835e0(param_1,param_2,uVar2,param_3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e155d4; end: 108e1582b; -[SCCaptionBigTextPlusView pinch:] */

void FUN_108e155d4(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf8c660();
  func_0x00010c14e120(param_4);
  lVar2 = param_4;
  dVar5 = param_1;
  func_0x00010c252440();
  if ((uVar1 & 1) == 0) {
    if (((lVar2 == 2) && (param_1 != 0.0)) && (!NAN(param_1))) {
      func_0x00010bfb4000(param_2);
      dVar3 = dVar5;
      func_0x00010c089ce0(param_2);
      dVar5 = param_1 * dVar5 * dVar3;
      if (dVar5 < 600.0) {
        func_0x00010bfb4000(param_2);
        dVar3 = dVar5;
        func_0x00010c089ce0(param_2);
        if (10.0 < param_1 * dVar5 * dVar3) {
          uVar1 = param_2;
          func_0x00010c26ba60(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0fc1e0();
          _objc_release(uVar1);
          uVar1 = param_2;
          func_0x00010c26ba60(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c1b8720(param_2);
          _objc_release(uVar1);
        }
      }
    }
    lVar2 = param_4;
    func_0x00010c252440();
    if (lVar2 == 3) {
      func_0x00010bddc940(param_2);
      func_0x00010be94760(param_2,param_3,1,0,1,0);
      uVar1 = param_2;
      func_0x00010c26ba60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2835e0(param_2,param_3,uVar1,param_4);
      _objc_release(uVar1);
    }
  }
  else {
    if (lVar2 == 1) {
      func_0x00010c1b7bc0(0x3ff0000000000000,param_2);
    }
    else {
      lVar2 = param_4;
      func_0x00010c252440();
      if (((lVar2 == 2) && (param_1 != 0.0)) && (!NAN(param_1))) {
        func_0x00010c1c1cc0(param_2,param_3,1);
        func_0x00010bf8c740(param_2);
        dVar3 = dVar5;
        func_0x00010c14e120(param_4);
        dVar4 = dVar3;
        func_0x00010c088a20(param_2);
        dVar5 = dVar5 * (dVar3 / dVar4);
        func_0x00010c193ba0(param_2);
        func_0x00010bf8c740(param_2);
        dVar3 = 13.0;
        if (13.0 <= dVar5) {
          dVar3 = dVar5;
        }
        func_0x00010c193ba0(dVar3,param_2);
        func_0x00010bf8c740(param_2);
        uVar6 = NEON_fminnm(dVar3,0x4060400000000000);
        func_0x00010c193ba0(uVar6,param_2);
        func_0x00010c14e120(param_4);
        func_0x00010c1b7bc0(param_2);
        func_0x00010be92c80(param_2);
        func_0x00010be94660(param_2);
      }
    }
    lVar2 = param_4;
    func_0x00010c252440();
    if (lVar2 == 3) {
      func_0x00010c1b7bc0(0x3ff0000000000000,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e1582c; end: 108e158bf; -[SCCaptionBigTextPlusView rotation:] */

void FUN_108e1582c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2321e0(param_1,param_2,param_3);
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c26ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141aa0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c26ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2835e0(param_1,param_2,uVar1,param_3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e158c0; end: 108e15acf; -[SCCaptionBigTextPlusView textFrameContainsGesture:] */

ulong FUN_108e158c0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                   ulong param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_7);
  uVar3 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,uVar3);
  uVar4 = param_1;
  uVar6 = param_2;
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar10 = param_3;
  _objc_release(uVar3);
  dVar11 = 80.0;
  if (80.0 <= param_3) {
    dVar11 = param_3;
  }
  uVar3 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar12 = param_4;
  _objc_release(uVar3);
  dVar13 = 80.0;
  if (80.0 <= param_4) {
    dVar13 = param_4;
  }
  uVar3 = param_5;
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar5 = uVar4;
  _CGRectGetMidX();
  _CGRectGetMidY(uVar4,uVar6,dVar10,dVar12);
  func_0x00010b690910(uVar5,uVar4,dVar11,dVar13);
  _objc_release();
  uVar6 = uVar5;
  uVar8 = uVar4;
  _CGRectContainsPoint(uVar5,uVar4,dVar11,dVar13,param_1,param_2);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_7;
    func_0x00010c0df520();
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      do {
        uVar1 = param_5;
        func_0x00010c26ba60(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_7;
        func_0x00010c09f140(param_7,param_6,uVar2,uVar1);
        uVar7 = uVar5;
        uVar9 = uVar4;
        _CGRectContainsPoint(uVar5,uVar4,dVar11,dVar13,uVar6,uVar8);
        _objc_release(uVar1);
        if ((int)uVar3 != 0) break;
        uVar2 = uVar2 + 1;
        uVar1 = param_7;
        func_0x00010c0df520();
        uVar6 = uVar7;
        uVar8 = uVar9;
      } while (uVar2 < uVar1);
    }
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_7);
  return uVar3;
}



/* Entry: 108e15ad0; end: 108e15ad3; -[SCCaptionBigTextPlusView resizeForEditing] */

void FUN_108e15ad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resize_112582b38);
  return;
}



/* Entry: 108e15ad4; end: 108e15ae7; -[SCCaptionBigTextPlusView _resize] */

void FUN_108e15ad4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resizeWithScreenWidthInEditingM_112582b78,1,1,1,0);
  return;
}



/* Entry: 108e15ae8; end: 108e15bf7; -[SCCaptionBigTextPlusView _textOrigin] */

undefined1  [16] FUN_108e15ae8(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  uVar1 = param_3;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  uVar3 = param_3;
  dVar5 = param_1;
  func_0x00010c26ca80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba40();
  param_1 = param_1 + param_2;
  uVar4 = param_3;
  func_0x00010c26ca80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba40();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c26ca80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,dVar5,uVar1,param_4,param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 108e15bf8; end: 108e15c73; -[SCCaptionBigTextPlusView _setTextOrigin:] */

void FUN_108e15bf8(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  double dStack_40;
  double dStack_38;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010becb6a0();
  dStack_40 = dVar1 - param_1;
  dStack_38 = dVar2 - param_2;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc0000000;
  pcStack_50 = FUN_108e15c74;
  puStack_48 = &UNK_110ac6310;
  func_0x00010be5c920(param_3,param_4,&puStack_60);
  return;
}



/* Entry: 108e15c74; end: 108e15cbb;  */

void FUN_108e15c74(double param_1,double param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf345e0(param_4);
  func_0x00010c17a6a0(param_1 - *(double *)(param_3 + 0x20),param_2 - *(double *)(param_3 + 0x28),
                      param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e15cbc; end: 108e15dd7; -[SCCaptionBigTextPlusView _adjustTextContainerInsetsRetainingOrigin:] */

void FUN_108e15cbc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  uVar4 = param_5;
  dVar5 = param_1;
  dVar6 = param_2;
  dVar7 = param_3;
  dVar8 = param_4;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba40();
  bVar2 = false;
  if ((dVar6 == param_2) && (bVar2 = false, !NAN(dVar5) && !NAN(param_1))) {
    bVar2 = dVar5 == param_1;
  }
  bVar3 = false;
  if ((bVar2) && (bVar3 = false, !NAN(dVar8) && !NAN(param_4))) {
    bVar3 = dVar8 == param_4;
  }
  if (bVar3) {
    _objc_release(uVar4);
    if (dVar7 == param_3) {
      return;
    }
  }
  else {
    _objc_release(uVar4);
  }
  func_0x00010becb6a0(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc0000000;
  pcStack_80 = FUN_108e15dd8;
  puStack_78 = &UNK_110ac6330;
  dStack_70 = param_1;
  dStack_68 = param_2;
  dStack_60 = param_3;
  dStack_58 = param_4;
  func_0x00010be5c920(param_5,param_6,&puStack_90);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x108e15de8;
  puStack_b0 = &UNK_110858dc0;
  uStack_a8 = param_5;
  dStack_a0 = dVar5;
  dStack_98 = dVar6;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_c8);
  return;
}



/* Entry: 108e15dd8; end: 108e15df7;  */

void FUN_108e15dd8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2131f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2,
             PTR_s_setTextContainerInset__1126626a0);
  return;
}



/* Entry: 108e15df8; end: 108e165e3; -[SCCaptionBigTextPlusView _resizeWithScreenWidthInEditingMode:updateLastLocation:shouldChangeFont:didTextViewChange:] */

void FUN_108e15df8(double param_1,long param_2,undefined8 param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  double dStack_88;
  double dStack_80;
  undefined1 uStack_78;
  
  lVar1 = param_2;
  func_0x00010bf8c660();
  if ((int)lVar1 == 0) {
    func_0x00010bfb4000(param_2);
  }
  else {
    func_0x00010bf8c740(param_2);
  }
  lVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139a0();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf8c660();
  lVar5 = param_2;
  if ((int)lVar1 == 0) {
    func_0x00010bf8c740(param_2);
    dVar10 = 1.0;
    if (param_1 != 0.0) {
      func_0x00010bfb4000(param_2);
      dVar10 = param_1;
      func_0x00010bf8c740(param_2);
      dVar10 = param_1 / dVar10;
    }
    dVar9 = dVar10 * 20.0;
    dVar12 = dVar10 * 15.0;
    dVar11 = dVar9;
    func_0x00010bdc9500(dVar9,dVar12,dVar9,dVar12,param_2);
    if (param_6 != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010bfb4000(param_2);
      dVar16 = dVar9;
      func_0x00010bfb4060(param_2);
      lVar1 = param_2;
      func_0x00010be1f240(dVar9 * dVar16,param_2,param_3,uVar14);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c087020();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        lVar2 = param_2;
        func_0x00010c087020(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06e1e0();
        _objc_release(lVar2);
      }
      _objc_release(lVar6);
      lVar6 = param_2;
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c14c7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      _objc_release(lVar1);
    }
    lVar1 = param_2;
    func_0x00010bde8220();
    dVar10 = dVar10 * (double)lVar1;
    lVar1 = param_2;
    func_0x00010c26ca80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x47efffffe0000000;
    func_0x00010c23d5a0();
    dVar9 = dVar10;
    _objc_release(lVar1);
    func_0x00010c089ce0(param_2);
    lVar1 = param_2;
    func_0x00010c26ba60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(dVar9);
    _objc_release(lVar1);
    func_0x00010bea8500(dVar10,uVar15,param_2);
    lVar1 = param_2;
    func_0x00010c26ca80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar6 = param_2;
    func_0x00010c26c740(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1827c0(dVar11,dVar12);
    _objc_release(lVar6);
    _objc_release(lVar1);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uVar14 = 0xc2000000;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_108e16640;
    puStack_d0 = &UNK_110ac6380;
    lStack_c8 = param_2;
    dStack_c0 = dVar10;
    uStack_b8 = uVar15;
    func_0x00010be5c920(param_2,param_3,&puStack_e8);
    func_0x00010c285f60(*(undefined8 *)(param_2 + 0x90));
    if (param_5 == 0) goto LAB_108e16548;
    func_0x00010c08a540(param_2);
    uVar15 = uVar14;
    func_0x00010c08a560(param_2);
    func_0x00010bddc640(uVar14,uVar15,param_2);
    lVar1 = param_2;
    func_0x00010c26ba60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b80(uVar14,uVar15);
    _objc_release(lVar1);
    func_0x00010c089cc0(param_2);
    func_0x00010c26ba60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee7a0(uVar14);
  }
  else {
    uVar14 = 0x4034000000000000;
    uVar15 = 0x402e000000000000;
    func_0x00010bdc9500(0x4034000000000000,0x402e000000000000,0x4034000000000000,0x402e000000000000,
                        param_2);
    if (param_6 != 0) {
      lVar1 = param_2;
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010bf8c740(param_2);
      lVar1 = param_2;
      func_0x00010be1f240(param_2,param_3,uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010c087020();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar8 = 0;
      }
      else {
        lVar3 = param_2;
        func_0x00010c087020(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c06e1e0();
        uVar8 = (uint)lVar4 ^ 1;
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
      lVar2 = lVar6;
      func_0x00010c14c7c0(lVar6,param_3,lVar1,1,uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar6);
    }
    lVar1 = param_2;
    func_0x00010c26ca80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bde8220();
    dVar9 = (double)lVar6;
    dVar12 = 3.4028234663852886e+38;
    func_0x00010c23d5a0(lVar1);
    dVar10 = dVar9;
    _objc_release(lVar1);
    func_0x00010c262cc0(param_2);
    _CGRectGetHeight();
    dVar11 = dVar10;
    func_0x00010c086c00(param_2);
    dVar10 = dVar10 - dVar11;
    dVar16 = dVar10 + -55.0;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x108));
    _CGRectGetHeight();
    dVar16 = dVar16 - dVar10;
    func_0x00010bea89e0(param_2,param_3,dVar16 < dVar12);
    lVar1 = param_2;
    func_0x00010c26c740(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c26ca80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    _objc_release(lVar6);
    _objc_release(lVar1);
    dVar11 = dVar9;
    if (param_4 != 0) {
      lVar1 = param_2;
      func_0x00010bde8220(dVar9,param_2);
      dVar11 = (double)lVar1;
    }
    dVar13 = dVar12;
    if (dVar16 <= dVar12) {
      dVar13 = dVar16;
    }
    if (dVar10 <= dVar13) {
      dVar10 = dVar13;
    }
    func_0x00010bea8500(dVar11,dVar10,param_2);
    lVar1 = param_2;
    func_0x00010c26c740(param_2);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = dVar12;
    func_0x00010c1827c0(dVar9,dVar12);
    _objc_release(lVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uVar7 = 0xc2000000;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108e165e4;
    puStack_98 = &UNK_110ac6350;
    uStack_78 = (undefined1)param_4;
    lStack_90 = param_2;
    dStack_88 = dVar9;
    dStack_80 = dVar12;
    func_0x00010be5c920(param_2,param_3,&puStack_b0);
    func_0x00010c285f60(*(undefined8 *)(param_2 + 0x90));
    lVar1 = param_2;
    func_0x00010c26ba60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      lVar6 = param_2;
      func_0x00010c26ba60(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0bc120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(uVar7,dVar10,uVar14,uVar15);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      _objc_release(lVar1);
    }
    func_0x00010bed7400(param_2);
    func_0x00010c26ba60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(0x3ff0000000000000);
  }
  _objc_release(lVar5);
LAB_108e16548:
  func_0x00010bea84e0(param_2);
  func_0x00010bea4020(param_2,param_3,param_7);
  lVar6 = *(long *)(param_2 + 0x18);
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c26c7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(lVar6);
  if (lVar5 != 0) {
    func_0x00010bea7660(param_2);
  }
  lVar1 = param_2;
  func_0x00010be626a0();
  if ((int)lVar1 != 0) {
    func_0x00010bea4040(param_2);
  }
  func_0x00010bed4d80(param_2);
  return;
}



/* Entry: 108e165e4; end: 108e1663f;  */

void FUN_108e165e4(long param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bde8220(lVar1);
    dVar2 = (double)lVar1;
  }
  else {
    dVar2 = *(double *)(param_1 + 0x28);
  }
  func_0x000107c308a4(dVar2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c19f0e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e16640; end: 108e16727;  */

void FUN_108e16640(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c26c740(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar4 = param_3;
  dVar5 = param_4;
  _objc_release(uVar3);
  bVar1 = true;
  if ((!NAN(param_1)) && (bVar1 = true, !NAN(param_2))) {
    bVar1 = false;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = true, !NAN(param_3))) {
    bVar2 = false;
  }
  bVar1 = true;
  if ((!bVar2) && (bVar1 = true, !NAN(param_4))) {
    bVar1 = false;
  }
  if (bVar1) {
    param_1 = *(double *)(param_5 + 0x28);
    param_2 = *(double *)(param_5 + 0x30);
    func_0x000107c308a4(param_1,param_2);
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c26c740(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,dVar4,dVar5);
    _objc_release(uVar3);
    param_3 = dVar4;
    param_4 = dVar5;
  }
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108e16728; end: 108e169a3; -[SCCaptionBigTextPlusView _setTextContainerViewBoundsAndTextScrollViewFrameWithSize:] */

void FUN_108e16728(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c308a4();
  lVar1 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = param_3;
  dVar9 = param_4;
  func_0x00010c1739e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_a0,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  dVar3 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar4 = dVar3;
  dVar7 = dVar6;
  dVar8 = dVar5;
  dVar10 = dVar9;
  func_0x00010bf14200(*(undefined8 *)(param_5 + 0x90));
  lVar2 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar3 + dVar7,dVar6 + dVar4,dVar5 - (dVar7 + dVar10),dVar9 - (dVar4 + dVar8));
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c26c740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar5 = param_1;
  func_0x00010bf14220(*(undefined8 *)(param_5 + 0x90));
  param_1 = param_1 + dVar5;
  lVar2 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  func_0x00010bf14220(*(undefined8 *)(param_5 + 0x90));
  func_0x00010c26c740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,dVar5 + param_2);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 108e169a4; end: 108e16a7f; -[SCCaptionBigTextPlusView _getFontWithAppliedStyle:fontSize:] */

void FUN_108e169a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfb40c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc078;
  if (puVar3 == (undefined *)0x0) {
    uVar1 = param_4;
    func_0x00010c25e080(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0380(param_1,puVar4,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = puVar4;
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e16a80; end: 108e16cf7; -[SCCaptionBigTextPlusView _updateEditModeFrameLoc] */

void FUN_108e16a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar1 = param_5;
  func_0x00010c075fe0();
  dVar12 = 0.0;
  dVar7 = 0.0;
  dVar9 = 0.0;
  if ((int)lVar1 != 0) {
    dVar7 = *(double *)(param_5 + 0x1b8);
    _CGRectGetHeight(dVar7,*(undefined8 *)(param_5 + 0x1c0),*(undefined8 *)(param_5 + 0x1c8),
                     *(undefined8 *)(param_5 + 0x1d0));
    dVar9 = dVar7;
    func_0x00010c262cc0(param_5);
    _CGRectGetHeight();
    dVar11 = (dVar7 - dVar9) * 0.5;
    dVar7 = *(double *)(param_5 + 0x1b8);
    param_4 = *(undefined8 *)(param_5 + 0x1d0);
    _CGRectGetWidth(dVar7,*(undefined8 *)(param_5 + 0x1c0),*(undefined8 *)(param_5 + 0x1c8),param_4)
    ;
    dVar9 = dVar7;
    func_0x00010c262cc0(param_5);
    _CGRectGetWidth();
    dVar2 = (dVar7 - dVar9) * 0.5;
    param_2 = 0;
    dVar7 = 0.0;
    if (0.0 <= dVar11) {
      dVar7 = dVar11;
    }
    dVar9 = 0.0;
    if (0.0 <= dVar2) {
      dVar9 = dVar2;
    }
  }
  dVar2 = dVar9;
  dVar11 = dVar7;
  if ((*(byte *)(param_5 + 0xc9) & 1) == 0) {
    func_0x00010c262cc0(param_5);
    _CGRectGetHeight();
    dVar12 = dVar2;
    func_0x00010c262ce0(param_5);
    _CGRectGetHeight();
    dVar2 = dVar2 - dVar12;
    param_2 = 0x3fe0000000000000;
    dVar12 = dVar2 * 0.5;
  }
  lVar1 = param_5;
  func_0x00010c26c740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar3 = dVar2;
  _objc_release(lVar1);
  func_0x00010c086c00(param_5);
  dVar4 = dVar2;
  _CGRectGetHeight(dVar2,param_2,dVar11,param_4);
  dVar5 = dVar4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x108));
  _CGRectGetHeight();
  dVar6 = *(double *)(param_5 + 0x1b8);
  _CGRectGetHeight(dVar6,*(undefined8 *)(param_5 + 0x1c0),*(undefined8 *)(param_5 + 0x1c8),
                   *(undefined8 *)(param_5 + 0x1d0));
  dVar10 = *(double *)(param_5 + 0xb0);
  lVar1 = param_5;
  func_0x00010beffa20();
  if (lVar1 == 3) {
    dVar8 = *(double *)(param_5 + 0x1b8);
    _CGRectGetMaxX(dVar8,*(undefined8 *)(param_5 + 0x1c0),*(undefined8 *)(param_5 + 0x1c8),
                   *(undefined8 *)(param_5 + 0x1d0));
    dVar9 = dVar8 - dVar9;
    _CGRectGetWidth(dVar2,param_2,dVar11,param_4);
    dVar11 = -0.5;
  }
  else {
    if (lVar1 == 2) {
      dVar8 = *(double *)(param_5 + 0x1b8);
      _CGRectGetMidX(dVar8,*(undefined8 *)(param_5 + 0x1c0),*(undefined8 *)(param_5 + 0x1c8),
                     *(undefined8 *)(param_5 + 0x1d0));
      goto LAB_108e16c68;
    }
    dVar8 = 0.0;
    if (lVar1 != 1) goto LAB_108e16c68;
    dVar8 = *(double *)(param_5 + 0x1b8);
    _CGRectGetMinX(dVar8,*(undefined8 *)(param_5 + 0x1c0),*(undefined8 *)(param_5 + 0x1c8),
                   *(undefined8 *)(param_5 + 0x1d0));
    dVar9 = dVar9 + dVar8;
    _CGRectGetWidth(dVar2,param_2,dVar11,param_4);
    dVar11 = 0.5;
  }
  dVar8 = dVar9 + dVar2 * dVar11;
LAB_108e16c68:
  lVar1 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b80(dVar8,dVar10 + ((dVar6 - (((dVar3 + dVar4 * 0.5) - dVar12) + dVar5)) - dVar7))
  ;
  _objc_release(lVar1);
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee7a0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e16cf8; end: 108e16e17; -[SCCaptionBigTextPlusView _updateCaptionStyleCarouselViewFrame] */

void FUN_108e16cf8(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 in_d3;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x108));
  dVar2 = *(double *)(param_1 + 0x198);
  if (*(char *)(param_1 + 0xc9) == '\x01') {
    _CGRectGetWidth();
    dVar3 = *(double *)(param_1 + 0x178);
    _CGRectGetWidth(dVar3,*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                    *(undefined8 *)(param_1 + 400));
    dVar2 = (dVar2 - dVar3) * 0.5;
  }
  else {
    _CGRectGetMinX(dVar2,*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),
                   *(undefined8 *)(param_1 + 0x1b0));
  }
  lVar1 = param_1;
  func_0x00010c075fe0();
  dVar3 = 0.0;
  if ((int)lVar1 != 0) {
    dVar4 = *(double *)(param_1 + 0x1b8);
    _CGRectGetHeight(dVar4,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8),
                     *(undefined8 *)(param_1 + 0x1d0));
    dVar3 = dVar4;
    func_0x00010c262cc0(param_1);
    _CGRectGetHeight();
    dVar4 = (dVar4 - dVar3) * 0.5;
    dVar3 = 0.0;
    if (0.0 <= dVar4) {
      dVar3 = dVar4;
    }
  }
  dVar4 = *(double *)(param_1 + 0x178);
  _CGRectGetHeight(dVar4,*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                   *(undefined8 *)(param_1 + 400));
  dVar3 = dVar3 + dVar4;
  dVar4 = dVar3 + *(double *)(param_1 + 0xb0);
  lVar1 = param_1;
  func_0x00010c071280();
  if ((int)lVar1 != 0) {
    func_0x00010c086c00(param_1);
    dVar4 = dVar4 - dVar3;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x108));
    _CGRectGetHeight();
    dVar4 = dVar4 - dVar3;
  }
  lVar1 = param_1;
  func_0x00010bde8220(param_1);
  func_0x00010c19f0e0(dVar2,dVar4,(double)lVar1,in_d3,*(undefined8 *)(param_1 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010be64870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyEditingLayoutDidUpdate_112576bb8);
  return;
}



/* Entry: 108e16e18; end: 108e16e93; -[SCCaptionBigTextPlusView _notifyEditingLayoutDidUpdate] */

void FUN_108e16e18(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010c071280();
  if ((int)lVar1 != 0) {
    uVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf2fec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}


