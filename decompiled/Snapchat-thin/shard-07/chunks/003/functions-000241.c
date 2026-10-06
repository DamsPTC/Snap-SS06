/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10545fd80; end: 10545fdb7;  */

void FUN_10545fd80(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10545fdb8; end: 10545fe4f; -[SCSnapAdTrackSpectrumLogger getSpectrumRegion:] */

undefined8 FUN_10545fdb8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110ddf1b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110ddf1d8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110ddf1f8);
        uVar2 = 3;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10545fe50; end: 10545ffcb; -[SCSnapAdTrackSpectrumLogger _submitRequest:trackUrl:isShadowRequest:] */

void FUN_10545fe50(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b86e8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c197720(puVar1,param_3,(long)(param_1 * 1000.0));
  if (param_6 == 0) {
    puVar4 = PTR_PTR_1126b9340;
    _objc_opt_new(PTR_PTR_1126b9340);
    func_0x00010c2190a0();
    _objc_release(param_4);
    func_0x00010c164c80(puVar1,param_3,puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126b9338;
    _objc_opt_new(PTR_PTR_1126b9338);
    func_0x00010c2190a0();
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126b8c98;
    func_0x00010c229f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      func_0x00010c04e820();
      func_0x00010c2122c0(puVar4,param_3,puVar3);
      _objc_release(puVar3);
    }
    func_0x00010c164ce0(puVar1,param_3,puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  func_0x00010bfca920(param_2,param_3,param_5);
  _objc_release(param_5);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c520();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10545ffcc; end: 105460013; -[SCSnapAdTrackSpectrumLogger .cxx_destruct] */

void FUN_10545ffcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105460014; end: 1054603af; +[SCAdTrackAppInstallEventParser parseResultForAdTrackAppInstallUiEvents:prevAdViewtrackEvents:adConfigProvider:adConfigProviderV2:] */

void FUN_105460014(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_4;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar3 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    uVar3 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar16;
    func_0x00010bef60a0();
    _objc_release(uVar16);
    _objc_release(uVar2);
    FUN_105466b50(param_4);
    uVar17 = param_1;
    _objc_retain(param_4);
    uVar3 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf8f560();
    _objc_release(uVar3);
    uVar2 = param_4;
    FUN_1054651a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010bf529e0();
    uVar14 = 0;
    if (uVar16 != 0) {
      uVar16 = 0;
      do {
        uVar8 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        if ((int)uVar7 == 0) {
          FUN_105465988();
        }
        else {
          FUN_105465d9c();
        }
        if ((uVar14 == 0) && (0 < (long)uVar9)) {
          _objc_retainAutorelease(uVar8);
          uVar14 = uVar8;
        }
        _objc_release(uVar8);
        uVar16 = uVar16 + 1;
        uVar8 = uVar2;
        func_0x00010bf529e0();
      } while (uVar16 < uVar8);
    }
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_retain(uVar14);
    uVar2 = uVar14;
    func_0x000105464d14();
    iVar1 = 0;
    if (uVar6 < 2) {
      iVar1 = (int)uVar4;
    }
    uStack_78 = uVar2;
    if (iVar1 == 1) {
      FUN_105466250(param_4,PTR____NSArray0__struct_11034ab48,&uStack_78);
    }
    iVar1 = 0;
    if (uVar6 < 2) {
      iVar1 = (int)uVar5;
    }
    if (iVar1 == 1) {
      FUN_105466d78(param_4,PTR____NSArray0__struct_11034ab48);
      param_1 = uVar17;
    }
    puVar10 = PTR_PTR_1126b9348;
    func_0x00010bfe6000(PTR_PTR_1126b9348);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2bab40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2a9840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2a89a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010c2b0240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    uVar3 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf8f2a0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      FUN_105467e6c(param_4);
      puVar10 = puVar15;
      func_0x00010c2bb760(puVar15);
      _objc_retainAutoreleasedReturnValue();
      FUN_1054680f0(param_5,param_4);
      puVar11 = puVar10;
      func_0x00010c2b74c0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar10);
      puVar15 = puVar11;
    }
    _objc_release(uVar14);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1054603b0; end: 1054605df; +[SCAdTrackAppInstallEventParser appInstallParseResultWithTrackEvents:] */

undefined1 * FUN_1054603b0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  puVar8 = param_3;
  func_0x00010bf529e0();
  if (puVar8 == (undefined1 *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b9350;
    func_0x00010bfe6000(PTR_PTR_1126b9350);
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
    puVar8 = param_3;
    func_0x00010bf52a60();
    if (puVar8 != (undefined1 *)0x0) {
      lVar10 = *plStack_120;
      do {
        puVar7 = (undefined1 *)0x0;
        puVar11 = puVar12;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          lVar9 = *(long *)(lStack_128 + (long)puVar7 * 8);
          lVar1 = lVar9;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf055a0();
          _objc_release(lVar1);
          puVar12 = puVar11;
          if (lVar2 == 3) {
            lVar1 = lVar9;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f1720();
            puVar3 = puVar11;
            func_0x00010c2b2f40(puVar11);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar9;
            func_0x00010c098ba0(lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f1740();
            puVar4 = puVar3;
            func_0x00010c2b2f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c098ba0(lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f2320();
            puVar12 = puVar4;
            func_0x00010c2bcb20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            _objc_release(lVar9);
            _objc_release(puVar4);
            _objc_release(lVar2);
            _objc_release(puVar3);
            _objc_release(lVar1);
          }
          puVar7 = puVar7 + 1;
          puVar11 = puVar12;
        } while (puVar8 != puVar7);
        puVar8 = param_3;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar7 = (undefined1 *)puVar6;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar8 = puVar7;
  func_0x00010bf529e0();
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puVar5 = puVar7;
    func_0x0001006372a4(puVar7,&PTR___NSConcreteGlobalBlock_11088a900);
    puVar8 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
  }
  _objc_release(puVar7);
  return puVar8;
}



/* Entry: 1054605e0; end: 10546064f; +[SCAdTrackAppInstallEventParser swipeCountWithTrackEvents:] */

long FUN_1054605e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11088a900);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 105460650; end: 105460693;  */

bool FUN_105460650(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c098ba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf055a0();
  _objc_release(param_2);
  return lVar1 == 1;
}



/* Entry: 105460694; end: 10546086f;  */

undefined * FUN_105460694(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)0x0;
    do {
      lVar10 = 0;
      puVar5 = puVar8;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar3 = lVar9;
        func_0x00010bf684c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf68580();
        if (lVar4 == 0) {
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar9;
          func_0x00010bf68580();
          _objc_release(lVar9);
        }
        _objc_release(lVar3);
        puVar8 = puVar5;
        if (lVar4 == 1) {
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          func_0x00010befa120(puVar1);
        }
        func_0x00010befa120(puVar8);
        lVar10 = lVar10 + 1;
        puVar5 = puVar8;
      } while (lVar2 != lVar10);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c098ba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c25e900();
    _objc_release(param_2);
    return (undefined *)(ulong)(lVar6 == 3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 105460870; end: 1054608b3;  */

bool FUN_105460870(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c098ba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c25e900();
  _objc_release(param_2);
  return lVar1 == 3;
}



/* Entry: 1054608b4; end: 105460a87;  */

bool FUN_1054608b4(double param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2a4740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25e900();
  if (lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a47e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      bVar1 = false;
      goto LAB_105460990;
    }
  }
  else {
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bf428e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  if (*(double *)(param_2 + 0x20) <= param_1) {
    lVar3 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    bVar1 = param_1 < *(double *)(param_2 + 0x28);
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
LAB_105460990:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105460a88; end: 105460c7f; +[SCAdTrackCollectionEventParser parseResultForTrackCollectionEvents:preferredAttachmentType:adConfigProvider:adConfigProviderV2:] */

void FUN_105460a88(undefined8 param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  long lStack_458;
  long *plStack_450;
  undefined *puStack_448;
  double dStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  double dStack_400;
  double dStack_3f8;
  long lStack_3a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *apuStack_230 [16];
  long lStack_1b0;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  ppuVar17 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  ppuVar23 = param_4;
  ppuVar9 = param_5;
  ppuVar18 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar14 = param_3;
  func_0x00010bf529e0();
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar7 = param_3;
    FUN_105460694();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(ppuVar7);
    ppuVar23 = apuStack_f0;
    ppuVar9 = (undefined **)0x10;
    ppuVar14 = ppuVar7;
    func_0x00010bf52a60();
    if (ppuVar14 != (undefined **)0x0) {
      lVar21 = *plStack_120;
      do {
        ppuVar23 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar21) {
            _objc_enumerationMutation(ppuVar7);
          }
          param_2 = *(undefined ***)(lStack_128 + (long)ppuVar23 * 8);
          lVar1 = 0;
          ppuVar18 = param_5;
          param_7 = param_6;
          FUN_105460c80(0,param_2,0,0,param_4);
          _objc_retainAutoreleasedReturnValue();
          if (lVar1 != 0) {
            func_0x00010befa120(ppuVar22);
          }
          _objc_release(lVar1);
          ppuVar23 = (undefined **)((long)ppuVar23 + 1);
        } while (ppuVar14 != ppuVar23);
        ppuVar23 = apuStack_f0;
        ppuVar9 = (undefined **)0x10;
        ppuVar14 = ppuVar7;
        ppuVar17 = &puStack_130;
        func_0x00010bf52a60();
      } while (ppuVar14 != (undefined **)0x0);
    }
    _objc_release(ppuVar7);
    ppuVar14 = ppuVar22;
    func_0x00010bf529e0();
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
      ppuVar6 = ppuVar17;
    }
    else {
      ppuVar14 = (undefined **)PTR_PTR_1126b9358;
      _objc_alloc();
      ppuVar6 = ppuVar22;
      func_0x00010bfff7e0();
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar7);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = ppuVar6;
  ppuVar7 = ppuVar23;
  ppuVar14 = ppuVar9;
  ppuVar10 = ppuVar18;
  ppuVar11 = param_7;
  _objc_retain();
  uVar8 = (uint)ppuVar14;
  _objc_retain(param_2);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar18);
  _objc_retain(param_7);
  _objc_retain(param_3);
  ppuVar14 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar14;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar22;
  func_0x00010bf3fe80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar22);
  _objc_release(ppuVar14);
  if (ppuVar19 == (undefined **)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    puStack_270 = (undefined *)0x0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(param_3);
    ppuVar17 = &puStack_270;
    ppuVar7 = apuStack_230;
    uVar24 = 0x10;
    ppuVar14 = param_3;
    func_0x00010bf52a60();
    uVar8 = (uint)uVar24;
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar19 = (undefined **)0x0;
    }
    else {
      ppuVar19 = (undefined **)0x0;
      lVar21 = *plStack_260;
      do {
        ppuVar22 = (undefined **)0x0;
        ppuVar17 = ppuVar19;
        do {
          if (*plStack_260 != lVar21) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar12 = *(undefined ***)(lStack_268 + (long)ppuVar22 * 8);
          ppuVar16 = ppuVar12;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar16;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010bf3fe80();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar3 == (undefined **)0x0) {
            ppuVar4 = ppuVar12;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar4;
            func_0x00010bf3fe80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar17);
          }
          else {
            _objc_retain(ppuVar3);
            ppuVar19 = ppuVar3;
            ppuVar4 = ppuVar17;
          }
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
          _objc_release(ppuVar16);
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c098ba0(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25e900();
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar20;
          ppuVar17 = ppuVar16;
          func_0x00010bf4b900();
          _objc_release(ppuVar16);
          _objc_release(ppuVar12);
          uVar8 = (uint)uVar24;
          if ((int)puVar5 != 0 && ppuVar19 != (undefined **)0x0) {
            _objc_retain(ppuVar19);
            _objc_release(param_3);
            goto LAB_105460f7c;
          }
          ppuVar22 = (undefined **)((long)ppuVar22 + 1);
          ppuVar17 = ppuVar19;
        } while (ppuVar14 != ppuVar22);
        ppuVar17 = &puStack_270;
        ppuVar7 = apuStack_230;
        uVar24 = 0x10;
        ppuVar14 = param_3;
        func_0x00010bf52a60();
        uVar8 = (uint)uVar24;
      } while (ppuVar14 != (undefined **)0x0);
    }
    _objc_release(param_3);
    _objc_retain(ppuVar19);
LAB_105460f7c:
    _objc_release(puVar20);
  }
  else {
    _objc_retain(ppuVar19);
  }
  _objc_release(ppuVar19);
  _objc_release(param_3);
  puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
  uVar24 = 0xc2000000;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_10546211c;
  puStack_280 = &UNK_11088a9a0;
  _objc_retain(ppuVar19);
  ppuVar22 = &puStack_298;
  ppuVar16 = ppuVar6;
  ppuStack_278 = ppuVar19;
  func_0x000100504554();
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(ppuVar16);
  _objc_retain(ppuVar18);
  _objc_retain(param_7);
  ppuVar14 = param_3;
  func_0x00010bf529e0();
  if (((ppuVar14 == (undefined **)0x0) &&
      (ppuVar14 = param_2, func_0x00010bf529e0(), ppuVar14 == (undefined **)0x0)) &&
     (ppuVar14 = ppuVar16, func_0x00010bf529e0(), ppuVar14 == (undefined **)0x0)) {
LAB_10546108c:
    puVar20 = (undefined *)0x0;
  }
  else if (ppuVar9 == (undefined **)0x4) {
    puVar20 = PTR_PTR_1126b9370;
    ppuVar17 = param_3;
    func_0x00010c264720();
  }
  else if (ppuVar9 == (undefined **)0x5) {
    puVar20 = PTR_PTR_1126b9360;
    ppuVar17 = param_2;
    ppuVar7 = param_3;
    ppuVar14 = ppuVar18;
    ppuVar10 = param_7;
    func_0x00010c264680();
    uVar8 = (uint)ppuVar14;
  }
  else {
    if ((((ulong)ppuVar23 & 1) == 0) && (ppuVar9 != (undefined **)0x3)) goto LAB_10546108c;
    ppuVar14 = ppuVar16;
    func_0x00010bf529e0();
    if (ppuVar14 == (undefined **)0x0) {
      puVar20 = PTR_PTR_1126b9368;
      ppuVar17 = param_2;
      ppuVar7 = param_3;
      func_0x00010c264700();
      puVar20 = (undefined *)(ulong)(puVar20 != (undefined *)0x0);
    }
    else {
      puVar20 = (undefined *)0x1;
    }
  }
  _objc_release(param_7);
  _objc_release(ppuVar18);
  _objc_release(ppuVar16);
  _objc_release(param_2);
  _objc_release(param_3);
  if (puVar20 == (undefined *)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    if ((((ulong)ppuVar23 & 1) == 0) && (ppuVar9 != (undefined **)0x3)) {
      FUN_105466b50(param_3);
      ppuVar17 = ppuVar9;
      if (ppuVar9 == (undefined **)0x4) {
        ppuVar9 = (undefined **)PTR_PTR_1126b9370;
        func_0x00010bf056a0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = (undefined *)0x0;
        ppuVar23 = (undefined **)0x0;
      }
      else {
        if (ppuVar9 == (undefined **)0x5) goto LAB_105461154;
        puVar20 = (undefined *)0x0;
        ppuVar23 = (undefined **)0x0;
        ppuVar9 = (undefined **)0x0;
      }
    }
    else {
      ppuVar22 = ppuVar16;
      FUN_105466d78(param_3);
      if (ppuVar9 == (undefined **)0x5) {
LAB_105461154:
        puVar20 = PTR_PTR_1126b9360;
        func_0x00010c0f44a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar23 = (undefined **)0x0;
        ppuVar9 = (undefined **)0x0;
        ppuVar17 = (undefined **)0x5;
      }
      else {
        ppuVar23 = (undefined **)PTR_PTR_1126b9368;
        func_0x00010c0f4520();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = (undefined *)0x0;
        ppuVar9 = (undefined **)0x0;
        ppuVar17 = (undefined **)0x3;
      }
    }
    ppuVar14 = (undefined **)PTR_PTR_1126b9378;
    _objc_alloc();
    ppuVar7 = ppuVar19;
    func_0x00010c067ec0();
    ppuVar7 = (undefined **)(long)(int)ppuVar7;
    puVar5 = puVar20;
    ppuVar10 = ppuVar23;
    ppuVar11 = ppuVar9;
    func_0x00010bff4c60(uVar24);
    uVar8 = (uint)puVar5;
    _objc_release(ppuVar9);
    _objc_release(ppuVar23);
    _objc_release(puVar20);
  }
  _objc_release(ppuVar16);
  _objc_release(ppuStack_278);
  _objc_release(ppuVar19);
  _objc_release(param_7);
  _objc_release(ppuVar18);
  _objc_release(ppuVar6);
  _objc_release(param_2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    lStack_3a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar17);
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar11);
    _objc_retain(param_8);
    ppuVar23 = ppuVar17;
    func_0x00010bf529e0();
    if (ppuVar23 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
    }
    else {
      ppuVar23 = ppuVar17;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_458 = 0;
      puStack_460 = (undefined *)0x0;
      puStack_448 = (undefined *)0x0;
      plStack_450 = (long *)0x0;
      uStack_438 = 0;
      dStack_440 = 0.0;
      uStack_428 = 0;
      uStack_430 = 0;
      _objc_retain(ppuVar23);
      ppuVar6 = ppuVar23;
      func_0x00010bf52a60();
      if (ppuVar6 != (undefined **)0x0) {
        lVar21 = *plStack_450;
        do {
          ppuVar9 = (undefined **)0x0;
          do {
            if (*plStack_450 != lVar21) {
              _objc_enumerationMutation(ppuVar23);
            }
            ppuVar16 = *(undefined ***)(lStack_458 + (long)ppuVar9 * 8);
            ppuVar18 = ppuVar16;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar18;
            func_0x00010c25e900();
            if (ppuVar19 == (undefined **)0xb) {
LAB_105461440:
              _objc_release(ppuVar18);
LAB_105461448:
              func_0x00010befa120(ppuVar14);
            }
            else {
              ppuVar19 = ppuVar16;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar19;
              func_0x00010c25e900();
              if (ppuVar2 == (undefined **)0xc) {
                _objc_release(ppuVar19);
                goto LAB_105461440;
              }
              ppuVar2 = ppuVar16;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              func_0x00010c25e900();
              _objc_release(ppuVar2);
              _objc_release(ppuVar19);
              _objc_release(ppuVar18);
              if (ppuVar3 == (undefined **)0xd) goto LAB_105461448;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar16;
              func_0x00010c25e900();
              ppuVar19 = ppuVar14;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar19;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              func_0x00010c25e900();
              _objc_release(ppuVar2);
              _objc_release(ppuVar19);
              _objc_release(ppuVar16);
              if (ppuVar18 != ppuVar3) goto LAB_105461448;
            }
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar6 != ppuVar9);
          ppuVar6 = ppuVar23;
          func_0x00010bf52a60();
        } while (ppuVar6 != (undefined **)0x0);
      }
      _objc_release(ppuVar23);
      ppuVar6 = ppuVar14;
      func_0x00010bf51e00();
      _objc_release(ppuVar14);
      _objc_release(ppuVar23);
      _objc_release(ppuVar23);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar10 == (undefined **)0x4) {
        _objc_retain(ppuVar6);
        ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_458 = 0;
        puStack_460 = (undefined *)0x0;
        puStack_448 = (undefined *)0x0;
        plStack_450 = (long *)0x0;
        uStack_438 = 0;
        dStack_440 = 0.0;
        uStack_428 = 0;
        uStack_430 = 0;
        _objc_retain(ppuVar6);
        ppuVar14 = ppuVar6;
        func_0x00010bf52a60();
        if (ppuVar14 == (undefined **)0x0) {
          puVar20 = (undefined *)0x0;
        }
        else {
          puVar20 = (undefined *)0x0;
          lVar21 = *plStack_450;
          do {
            ppuVar9 = (undefined **)0x0;
            puVar5 = puVar20;
            do {
              if (*plStack_450 != lVar21) {
                _objc_enumerationMutation(ppuVar6);
              }
              lVar15 = *(long *)(lStack_458 + (long)ppuVar9 * 8);
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              lVar1 = lVar15;
              func_0x00010bf055a0();
              _objc_release(lVar15);
              puVar20 = puVar5;
              if (lVar1 == 4) {
                puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                func_0x00010befa120(ppuVar23);
              }
              func_0x00010befa120(puVar20);
              ppuVar9 = (undefined **)((long)ppuVar9 + 1);
              puVar5 = puVar20;
            } while (ppuVar14 != ppuVar9);
            ppuVar14 = ppuVar6;
            func_0x00010bf52a60();
          } while (ppuVar14 != (undefined **)0x0);
        }
        _objc_release(ppuVar6);
        ppuVar14 = ppuVar23;
        func_0x00010bf51e00();
        _objc_release(puVar20);
        _objc_release(ppuVar23);
        _objc_release(ppuVar6);
        ppuVar23 = (undefined **)0x0;
      }
      else if (ppuVar10 == (undefined **)0x5) {
        ppuVar14 = ppuVar6;
        FUN_105460694();
        _objc_retainAutoreleasedReturnValue();
        ppuVar23 = ppuVar17;
        FUN_105460694();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (((uVar8 & 1) == 0) && (ppuVar10 != (undefined **)0x3)) {
        ppuVar23 = (undefined **)0x0;
        ppuVar14 = (undefined **)0x0;
      }
      else {
        _objc_retain(ppuVar6);
        ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_458 = 0;
        puStack_460 = (undefined *)0x0;
        puStack_448 = (undefined *)0x0;
        plStack_450 = (long *)0x0;
        uStack_438 = 0;
        dStack_440 = 0.0;
        uStack_428 = 0;
        uStack_430 = 0;
        _objc_retain(ppuVar6);
        ppuVar14 = ppuVar6;
        func_0x00010bf52a60();
        if (ppuVar14 == (undefined **)0x0) {
          puVar20 = (undefined *)0x0;
        }
        else {
          puVar20 = (undefined *)0x0;
          lVar21 = *plStack_450;
          do {
            ppuVar9 = (undefined **)0x0;
            puVar5 = puVar20;
            do {
              if (*plStack_450 != lVar21) {
                _objc_enumerationMutation(ppuVar6);
              }
              lVar15 = *(long *)(lStack_458 + (long)ppuVar9 * 8);
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              lVar1 = lVar15;
              func_0x00010c25e900();
              _objc_release(lVar15);
              puVar20 = puVar5;
              if (lVar1 == 4) {
                puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                func_0x00010befa120(ppuVar23);
              }
              func_0x00010befa120(puVar20);
              ppuVar9 = (undefined **)((long)ppuVar9 + 1);
              puVar5 = puVar20;
            } while (ppuVar14 != ppuVar9);
            ppuVar14 = ppuVar6;
            func_0x00010bf52a60();
          } while (ppuVar14 != (undefined **)0x0);
        }
        _objc_release(ppuVar6);
        ppuVar9 = ppuVar23;
        func_0x00010bf51e00();
        _objc_release(puVar20);
        _objc_release(ppuVar23);
        _objc_release(ppuVar6);
        ppuVar23 = ppuVar9;
        func_0x00010bf529e0();
        if (ppuVar23 == (undefined **)0x0) {
          _objc_retain(ppuVar6);
          ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_458 = 0;
          puStack_460 = (undefined *)0x0;
          puStack_448 = (undefined *)0x0;
          plStack_450 = (long *)0x0;
          uStack_438 = 0;
          dStack_440 = 0.0;
          uStack_428 = 0;
          uStack_430 = 0;
          _objc_retain(ppuVar6);
          ppuVar14 = ppuVar6;
          func_0x00010bf52a60();
          if (ppuVar14 == (undefined **)0x0) {
            puVar20 = (undefined *)0x0;
          }
          else {
            puVar20 = (undefined *)0x0;
            lVar21 = *plStack_450;
            do {
              ppuVar18 = (undefined **)0x0;
              puVar5 = puVar20;
              do {
                if (*plStack_450 != lVar21) {
                  _objc_enumerationMutation(ppuVar6);
                }
                lVar15 = *(long *)(lStack_458 + (long)ppuVar18 * 8);
                func_0x00010c098ba0();
                _objc_retainAutoreleasedReturnValue();
                lVar1 = lVar15;
                func_0x00010c25e900();
                _objc_release(lVar15);
                puVar20 = puVar5;
                if (lVar1 == 3) {
                  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar5);
                  func_0x00010befa120(ppuVar23);
                }
                func_0x00010befa120(puVar20);
                ppuVar18 = (undefined **)((long)ppuVar18 + 1);
                puVar5 = puVar20;
              } while (ppuVar14 != ppuVar18);
              ppuVar14 = ppuVar6;
              func_0x00010bf52a60();
            } while (ppuVar14 != (undefined **)0x0);
          }
          _objc_release(ppuVar6);
          ppuVar14 = ppuVar23;
          func_0x00010bf51e00();
          _objc_release(puVar20);
          _objc_release(ppuVar23);
          _objc_release(ppuVar6);
        }
        else {
          _objc_retain(ppuVar9);
          ppuVar14 = ppuVar9;
        }
        _objc_retain(ppuVar17);
        ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        dVar25 = 0.0;
        lStack_458 = 0;
        puStack_460 = (undefined *)0x0;
        puStack_448 = (undefined *)0x0;
        plStack_450 = (long *)0x0;
        uStack_438 = 0;
        dStack_440 = 0.0;
        uStack_428 = 0;
        uStack_430 = 0;
        _objc_retain(ppuVar17);
        ppuVar18 = ppuVar17;
        func_0x00010bf52a60();
        if (ppuVar18 == (undefined **)0x0) {
          puVar20 = (undefined *)0x0;
        }
        else {
          puVar20 = (undefined *)0x0;
          lVar21 = *plStack_450;
          do {
            ppuVar19 = (undefined **)0x0;
            puVar5 = puVar20;
            do {
              if (*plStack_450 != lVar21) {
                _objc_enumerationMutation(ppuVar17);
              }
              lVar13 = *(long *)(lStack_458 + (long)ppuVar19 * 8);
              lVar1 = lVar13;
              func_0x00010c2a4740();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar1;
              func_0x00010c25e900();
              if (lVar15 == 0) {
                func_0x00010c098ba0();
                _objc_retainAutoreleasedReturnValue();
                lVar15 = lVar13;
                func_0x00010c2a47e0();
                _objc_release(lVar13);
              }
              _objc_release(lVar1);
              puVar20 = puVar5;
              if (lVar15 == 1) {
                puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                func_0x00010befa120(ppuVar23);
              }
              func_0x00010befa120(puVar20);
              ppuVar19 = (undefined **)((long)ppuVar19 + 1);
              puVar5 = puVar20;
            } while (ppuVar18 != ppuVar19);
            ppuVar18 = ppuVar17;
            func_0x00010bf52a60();
          } while (ppuVar18 != (undefined **)0x0);
        }
        _objc_release(ppuVar17);
        ppuVar18 = ppuVar23;
        func_0x00010bf51e00();
        _objc_release(puVar20);
        _objc_release(ppuVar23);
        _objc_release(ppuVar17);
        ppuVar23 = ppuVar18;
        func_0x00010bf529e0();
        if (ppuVar23 == (undefined **)0x0) {
          _objc_retain(ppuVar17);
          ppuVar22 = &PTR___NSConcreteGlobalBlock_11088a940;
          ppuVar19 = ppuVar6;
          func_0x0001006372a4();
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar23 = ppuVar19;
          func_0x00010bf529e0();
          puVar20 = PTR___NSConcreteStackBlock_11034bd00;
          if ((undefined **)0x1 < ppuVar23) {
            ppuVar23 = (undefined **)0x1;
            dVar26 = dVar25;
            do {
              ppuVar22 = ppuVar19;
              func_0x00010c0dfd40(ppuVar19);
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar22;
              func_0x00010bf428e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2709c0();
              dVar27 = dVar26;
              _objc_release(ppuVar2);
              _objc_release(ppuVar22);
              ppuVar22 = ppuVar19;
              func_0x00010c0dfd40(ppuVar19);
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar22;
              func_0x00010bf428e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2709c0();
              dVar25 = dVar27;
              _objc_release(ppuVar2);
              _objc_release(ppuVar22);
              puStack_420 = puVar20;
              uStack_418 = 0xc0000000;
              pcStack_410 = FUN_1054608b4;
              puStack_408 = &UNK_11088a960;
              ppuVar22 = &puStack_420;
              ppuVar2 = ppuVar17;
              dStack_400 = dVar26;
              dStack_3f8 = dVar27;
              func_0x0001006372a4(ppuVar17);
              func_0x00010befa120(ppuVar16);
              _objc_release(ppuVar2);
              ppuVar23 = (undefined **)((long)ppuVar23 + 1);
              ppuVar2 = ppuVar19;
              func_0x00010bf529e0();
              dVar26 = dVar25;
            } while (ppuVar23 < ppuVar2);
          }
          ppuVar23 = ppuVar19;
          func_0x00010c089820(ppuVar19);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar23;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          _objc_release(ppuVar2);
          _objc_release(ppuVar23);
          if (dVar25 != 0.0) {
            puStack_460 = puVar20;
            lStack_458 = 0xc0000000;
            plStack_450 = (long *)0x1054609b8;
            puStack_448 = &UNK_11088a980;
            ppuVar22 = &puStack_460;
            ppuVar23 = ppuVar17;
            dStack_440 = dVar25;
            func_0x0001006372a4(ppuVar17);
            func_0x00010befa120(ppuVar16);
            _objc_release(ppuVar23);
          }
          ppuVar23 = ppuVar16;
          func_0x00010bf51e00();
          _objc_release(ppuVar16);
          _objc_release(ppuVar19);
          _objc_release(ppuVar17);
        }
        else {
          _objc_retain(ppuVar18);
          ppuVar23 = ppuVar18;
        }
        _objc_release(ppuVar18);
        _objc_release(ppuVar9);
      }
      ppuVar9 = ppuVar23;
      func_0x00010bf529e0();
      ppuVar18 = ppuVar7;
      func_0x00010bf529e0();
      _objc_retain(ppuVar14);
      if ((ppuVar9 == (undefined **)0x0) ||
         (ppuVar19 = ppuVar14, func_0x00010bf529e0(), ppuVar19 <= ppuVar9)) {
        _objc_retain(ppuVar14);
        ppuVar9 = ppuVar14;
      }
      else {
        ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar20 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c226900();
        _objc_retainAutoreleasedReturnValue();
        lStack_458 = 0;
        puStack_460 = (undefined *)0x0;
        puStack_448 = (undefined *)0x0;
        plStack_450 = (long *)0x0;
        uStack_438 = 0;
        dStack_440 = 0.0;
        uStack_428 = 0;
        uStack_430 = 0;
        _objc_retain(ppuVar14);
        ppuVar9 = ppuVar14;
        func_0x00010bf52a60();
        if (ppuVar9 != (undefined **)0x0) {
          lVar21 = *plStack_450;
          do {
            ppuVar16 = (undefined **)0x0;
            do {
              if (*plStack_450 != lVar21) {
                _objc_enumerationMutation(ppuVar14);
              }
              lVar15 = *(long *)(lStack_458 + (long)ppuVar16 * 8);
              puStack_488 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_480 = 0xc2000000;
              uStack_478 = 0x1054621bc;
              puStack_470 = &UNK_11088a9d0;
              _objc_retain(puVar20);
              ppuVar22 = &puStack_488;
              puStack_468 = puVar20;
              func_0x0001006372a4();
              lVar1 = lVar15;
              func_0x00010bf529e0();
              _objc_release(lVar15);
              if (lVar1 != 0 || ppuVar18 != (undefined **)0x0) {
                func_0x00010befa120(ppuVar19);
              }
              _objc_release(puStack_468);
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
            } while (ppuVar9 != ppuVar16);
            ppuVar9 = ppuVar14;
            func_0x00010bf52a60();
          } while (ppuVar9 != (undefined **)0x0);
        }
        _objc_release(ppuVar14);
        ppuVar9 = ppuVar19;
        func_0x00010bf51e00();
        _objc_release(puVar20);
        _objc_release(ppuVar19);
      }
      _objc_release(ppuVar14);
      _objc_release(ppuVar14);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar9;
      func_0x00010bf529e0();
      puVar20 = PTR____NSArray0__struct_11034ab48;
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar14 = (undefined **)0x0;
        do {
          ppuVar18 = ppuVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar23;
          func_0x00010bf529e0();
          ppuVar19 = (undefined **)puVar20;
          if (ppuVar14 < ppuVar22) {
            ppuVar19 = ppuVar23;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
          }
          ppuVar16 = ppuVar18;
          ppuVar22 = ppuVar19;
          FUN_105460c80(ppuVar18,ppuVar19,ppuVar7,uVar8,ppuVar10,ppuVar11,param_8);
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar16 != (undefined **)0x0) {
            func_0x00010befa120(puVar5);
          }
          _objc_release(ppuVar16);
          _objc_release(ppuVar19);
          _objc_release(ppuVar18);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          ppuVar18 = ppuVar9;
          func_0x00010bf529e0();
        } while (ppuVar14 < ppuVar18);
      }
      puVar20 = puVar5;
      func_0x00010bf529e0();
      if (puVar20 == (undefined *)0x0) {
        ppuVar14 = (undefined **)0x0;
      }
      else {
        ppuVar14 = (undefined **)PTR_PTR_1126b9358;
        _objc_alloc();
        func_0x00010bfff7e0();
      }
      _objc_release(puVar5);
      _objc_release(ppuVar23);
      _objc_release(ppuVar9);
      _objc_release(ppuVar17);
      _objc_release(ppuVar6);
    }
    _objc_release(param_8);
    _objc_release(ppuVar11);
    _objc_release(ppuVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a0) {
      ___stack_chk_fail();
      _objc_retain(ppuVar22);
      ppuVar23 = ppuVar22;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar23 == (undefined **)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar20 = ppuVar23[9];
      }
      _objc_retain(puVar20);
      puVar5 = puVar20;
      func_0x00010c071f40();
      _objc_release(puVar20);
      _objc_release(ppuVar23);
      if ((int)puVar5 == 0) {
        ppuVar14 = (undefined **)0x0;
      }
      else {
        _objc_retain(ppuVar22);
        ppuVar14 = ppuVar22;
      }
      _objc_release(ppuVar22);
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return;
}



/* Entry: 105460c80; end: 1054612e7;  */

void FUN_105460c80(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined *param_6,undefined *param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long lStack_328;
  long *plStack_320;
  undefined *puStack_318;
  double dStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  long lStack_270;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = param_3;
  ppuVar6 = param_4;
  ppuVar1 = param_5;
  puVar16 = param_6;
  puVar5 = param_7;
  _objc_retain();
  uVar7 = (uint)ppuVar1;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_1);
  ppuVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar14;
  func_0x00010bf3fe80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  _objc_release(ppuVar1);
  if (ppuVar13 == (undefined **)0x0) {
    puVar23 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    puStack_140 = (undefined *)0x0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_1);
    ppuVar18 = &puStack_140;
    ppuVar6 = apuStack_100;
    uVar24 = 0x10;
    ppuVar1 = param_1;
    func_0x00010bf52a60();
    uVar7 = (uint)uVar24;
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      ppuVar13 = (undefined **)0x0;
      lVar9 = *plStack_130;
      do {
        ppuVar14 = (undefined **)0x0;
        ppuVar18 = ppuVar13;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(param_1);
          }
          ppuVar20 = *(undefined ***)(lStack_138 + (long)ppuVar14 * 8);
          ppuVar10 = ppuVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar10;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar22;
          func_0x00010bf3fe80();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar19 == (undefined **)0x0) {
            ppuVar17 = ppuVar20;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar17;
            func_0x00010bf3fe80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar18);
          }
          else {
            _objc_retain(ppuVar19);
            ppuVar13 = ppuVar19;
            ppuVar17 = ppuVar18;
          }
          _objc_release(ppuVar17);
          _objc_release(ppuVar19);
          _objc_release(ppuVar22);
          _objc_release(ppuVar10);
          ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c098ba0(ppuVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25e900();
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar23;
          ppuVar18 = ppuVar10;
          func_0x00010bf4b900();
          _objc_release(ppuVar10);
          _objc_release(ppuVar20);
          uVar7 = (uint)uVar24;
          if ((int)puVar11 != 0 && ppuVar13 != (undefined **)0x0) {
            _objc_retain(ppuVar13);
            _objc_release(param_1);
            goto LAB_105460f7c;
          }
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          ppuVar18 = ppuVar13;
        } while (ppuVar1 != ppuVar14);
        ppuVar18 = &puStack_140;
        ppuVar6 = apuStack_100;
        uVar24 = 0x10;
        ppuVar1 = param_1;
        func_0x00010bf52a60();
        uVar7 = (uint)uVar24;
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(param_1);
    _objc_retain(ppuVar13);
LAB_105460f7c:
    _objc_release(puVar23);
  }
  else {
    _objc_retain(ppuVar13);
  }
  _objc_release(ppuVar13);
  _objc_release(param_1);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uVar24 = 0xc2000000;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_10546211c;
  puStack_150 = &UNK_11088a9a0;
  _objc_retain(ppuVar13);
  ppuVar1 = &puStack_168;
  ppuVar14 = param_3;
  ppuStack_148 = ppuVar13;
  func_0x000100504554();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(ppuVar14);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar10 = param_1;
  func_0x00010bf529e0();
  if (((ppuVar10 == (undefined **)0x0) &&
      (ppuVar10 = param_2, func_0x00010bf529e0(), ppuVar10 == (undefined **)0x0)) &&
     (ppuVar10 = ppuVar14, func_0x00010bf529e0(), ppuVar10 == (undefined **)0x0)) {
LAB_10546108c:
    puVar23 = (undefined *)0x0;
  }
  else if (param_5 == (undefined **)0x4) {
    puVar23 = PTR_PTR_1126b9370;
    ppuVar18 = param_1;
    func_0x00010c264720();
  }
  else if (param_5 == (undefined **)0x5) {
    puVar23 = PTR_PTR_1126b9360;
    ppuVar18 = param_2;
    ppuVar6 = param_1;
    puVar11 = param_6;
    puVar16 = param_7;
    func_0x00010c264680();
    uVar7 = (uint)puVar11;
  }
  else {
    if ((((ulong)param_4 & 1) == 0) && (param_5 != (undefined **)0x3)) goto LAB_10546108c;
    ppuVar10 = ppuVar14;
    func_0x00010bf529e0();
    if (ppuVar10 == (undefined **)0x0) {
      puVar23 = PTR_PTR_1126b9368;
      ppuVar18 = param_2;
      ppuVar6 = param_1;
      func_0x00010c264700();
      puVar23 = (undefined *)(ulong)(puVar23 != (undefined *)0x0);
    }
    else {
      puVar23 = (undefined *)0x1;
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar14);
  _objc_release(param_2);
  _objc_release(param_1);
  if (puVar23 == (undefined *)0x0) {
    ppuVar10 = (undefined **)0x0;
    goto LAB_105461264;
  }
  if ((((ulong)param_4 & 1) == 0) && (param_5 != (undefined **)0x3)) {
    FUN_105466b50(param_1);
    ppuVar18 = param_5;
    if (param_5 == (undefined **)0x4) {
      puVar11 = PTR_PTR_1126b9370;
      func_0x00010bf056a0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
    }
    else {
      if (param_5 == (undefined **)0x5) goto LAB_105461154;
      puVar21 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
    }
  }
  else {
    ppuVar1 = ppuVar14;
    FUN_105466d78(param_1);
    if (param_5 == (undefined **)0x5) {
LAB_105461154:
      puVar21 = PTR_PTR_1126b9360;
      func_0x00010c0f44a0();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      ppuVar18 = (undefined **)0x5;
    }
    else {
      puVar23 = PTR_PTR_1126b9368;
      func_0x00010c0f4520();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      ppuVar18 = (undefined **)0x3;
    }
  }
  ppuVar10 = (undefined **)PTR_PTR_1126b9378;
  _objc_alloc();
  ppuVar6 = ppuVar13;
  func_0x00010c067ec0();
  ppuVar6 = (undefined **)(long)(int)ppuVar6;
  puVar8 = puVar21;
  puVar16 = puVar23;
  puVar5 = puVar11;
  func_0x00010bff4c60(uVar24);
  uVar7 = (uint)puVar8;
  _objc_release(puVar11);
  _objc_release(puVar23);
  _objc_release(puVar21);
LAB_105461264:
  _objc_release(ppuVar14);
  _objc_release(ppuStack_148);
  _objc_release(ppuVar13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar18);
    _objc_retain(ppuVar6);
    _objc_retain(puVar5);
    _objc_retain(param_8);
    ppuVar14 = ppuVar18;
    func_0x00010bf529e0();
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      ppuVar14 = ppuVar18;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_328 = 0;
      puStack_330 = (undefined *)0x0;
      puStack_318 = (undefined *)0x0;
      plStack_320 = (long *)0x0;
      uStack_308 = 0;
      dStack_310 = 0.0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      _objc_retain(ppuVar14);
      ppuVar10 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar10 != (undefined **)0x0) {
        lVar9 = *plStack_320;
        do {
          ppuVar22 = (undefined **)0x0;
          do {
            if (*plStack_320 != lVar9) {
              _objc_enumerationMutation(ppuVar14);
            }
            ppuVar17 = *(undefined ***)(lStack_328 + (long)ppuVar22 * 8);
            ppuVar19 = ppuVar17;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = ppuVar19;
            func_0x00010c25e900();
            if (ppuVar20 == (undefined **)0xb) {
LAB_105461440:
              _objc_release(ppuVar19);
LAB_105461448:
              func_0x00010befa120(ppuVar13);
            }
            else {
              ppuVar20 = ppuVar17;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar20;
              func_0x00010c25e900();
              if (ppuVar2 == (undefined **)0xc) {
                _objc_release(ppuVar20);
                goto LAB_105461440;
              }
              ppuVar2 = ppuVar17;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              func_0x00010c25e900();
              _objc_release(ppuVar2);
              _objc_release(ppuVar20);
              _objc_release(ppuVar19);
              if (ppuVar3 == (undefined **)0xd) goto LAB_105461448;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar19 = ppuVar17;
              func_0x00010c25e900();
              ppuVar20 = ppuVar13;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar20;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              func_0x00010c25e900();
              _objc_release(ppuVar2);
              _objc_release(ppuVar20);
              _objc_release(ppuVar17);
              if (ppuVar19 != ppuVar3) goto LAB_105461448;
            }
            ppuVar22 = (undefined **)((long)ppuVar22 + 1);
          } while (ppuVar10 != ppuVar22);
          ppuVar10 = ppuVar14;
          func_0x00010bf52a60();
        } while (ppuVar10 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      ppuVar22 = ppuVar13;
      func_0x00010bf51e00();
      _objc_release(ppuVar13);
      _objc_release(ppuVar14);
      _objc_release(ppuVar14);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      if (puVar16 == (undefined *)0x4) {
        _objc_retain(ppuVar22);
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_328 = 0;
        puStack_330 = (undefined *)0x0;
        puStack_318 = (undefined *)0x0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        dStack_310 = 0.0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        _objc_retain(ppuVar22);
        ppuVar13 = ppuVar22;
        func_0x00010bf52a60();
        if (ppuVar13 == (undefined **)0x0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar23 = (undefined *)0x0;
          lVar9 = *plStack_320;
          do {
            ppuVar10 = (undefined **)0x0;
            puVar11 = puVar23;
            do {
              if (*plStack_320 != lVar9) {
                _objc_enumerationMutation(ppuVar22);
              }
              lVar15 = *(long *)(lStack_328 + (long)ppuVar10 * 8);
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar15;
              func_0x00010bf055a0();
              _objc_release(lVar15);
              puVar23 = puVar11;
              if (lVar4 == 4) {
                puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                func_0x00010befa120(ppuVar14);
              }
              func_0x00010befa120(puVar23);
              ppuVar10 = (undefined **)((long)ppuVar10 + 1);
              puVar11 = puVar23;
            } while (ppuVar13 != ppuVar10);
            ppuVar13 = ppuVar22;
            func_0x00010bf52a60();
          } while (ppuVar13 != (undefined **)0x0);
        }
        _objc_release(ppuVar22);
        ppuVar13 = ppuVar14;
        func_0x00010bf51e00();
        _objc_release(puVar23);
        _objc_release(ppuVar14);
        _objc_release(ppuVar22);
        ppuVar14 = (undefined **)0x0;
      }
      else if (puVar16 == (undefined *)0x5) {
        ppuVar13 = ppuVar22;
        FUN_105460694();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar18;
        FUN_105460694();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (((uVar7 & 1) == 0) && (puVar16 != (undefined *)0x3)) {
        ppuVar14 = (undefined **)0x0;
        ppuVar13 = (undefined **)0x0;
      }
      else {
        _objc_retain(ppuVar22);
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_328 = 0;
        puStack_330 = (undefined *)0x0;
        puStack_318 = (undefined *)0x0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        dStack_310 = 0.0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        _objc_retain(ppuVar22);
        ppuVar13 = ppuVar22;
        func_0x00010bf52a60();
        if (ppuVar13 == (undefined **)0x0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar23 = (undefined *)0x0;
          lVar9 = *plStack_320;
          do {
            ppuVar10 = (undefined **)0x0;
            puVar11 = puVar23;
            do {
              if (*plStack_320 != lVar9) {
                _objc_enumerationMutation(ppuVar22);
              }
              lVar15 = *(long *)(lStack_328 + (long)ppuVar10 * 8);
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar15;
              func_0x00010c25e900();
              _objc_release(lVar15);
              puVar23 = puVar11;
              if (lVar4 == 4) {
                puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                func_0x00010befa120(ppuVar14);
              }
              func_0x00010befa120(puVar23);
              ppuVar10 = (undefined **)((long)ppuVar10 + 1);
              puVar11 = puVar23;
            } while (ppuVar13 != ppuVar10);
            ppuVar13 = ppuVar22;
            func_0x00010bf52a60();
          } while (ppuVar13 != (undefined **)0x0);
        }
        _objc_release(ppuVar22);
        ppuVar10 = ppuVar14;
        func_0x00010bf51e00();
        _objc_release(puVar23);
        _objc_release(ppuVar14);
        _objc_release(ppuVar22);
        ppuVar14 = ppuVar10;
        func_0x00010bf529e0();
        if (ppuVar14 == (undefined **)0x0) {
          _objc_retain(ppuVar22);
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_328 = 0;
          puStack_330 = (undefined *)0x0;
          puStack_318 = (undefined *)0x0;
          plStack_320 = (long *)0x0;
          uStack_308 = 0;
          dStack_310 = 0.0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          _objc_retain(ppuVar22);
          ppuVar13 = ppuVar22;
          func_0x00010bf52a60();
          if (ppuVar13 == (undefined **)0x0) {
            puVar23 = (undefined *)0x0;
          }
          else {
            puVar23 = (undefined *)0x0;
            lVar9 = *plStack_320;
            do {
              ppuVar19 = (undefined **)0x0;
              puVar11 = puVar23;
              do {
                if (*plStack_320 != lVar9) {
                  _objc_enumerationMutation(ppuVar22);
                }
                lVar15 = *(long *)(lStack_328 + (long)ppuVar19 * 8);
                func_0x00010c098ba0();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar15;
                func_0x00010c25e900();
                _objc_release(lVar15);
                puVar23 = puVar11;
                if (lVar4 == 3) {
                  puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar11);
                  func_0x00010befa120(ppuVar14);
                }
                func_0x00010befa120(puVar23);
                ppuVar19 = (undefined **)((long)ppuVar19 + 1);
                puVar11 = puVar23;
              } while (ppuVar13 != ppuVar19);
              ppuVar13 = ppuVar22;
              func_0x00010bf52a60();
            } while (ppuVar13 != (undefined **)0x0);
          }
          _objc_release(ppuVar22);
          ppuVar13 = ppuVar14;
          func_0x00010bf51e00();
          _objc_release(puVar23);
          _objc_release(ppuVar14);
          _objc_release(ppuVar22);
        }
        else {
          _objc_retain(ppuVar10);
          ppuVar13 = ppuVar10;
        }
        _objc_retain(ppuVar18);
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        dVar25 = 0.0;
        lStack_328 = 0;
        puStack_330 = (undefined *)0x0;
        puStack_318 = (undefined *)0x0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        dStack_310 = 0.0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        _objc_retain(ppuVar18);
        ppuVar19 = ppuVar18;
        func_0x00010bf52a60();
        if (ppuVar19 == (undefined **)0x0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar23 = (undefined *)0x0;
          lVar9 = *plStack_320;
          do {
            ppuVar20 = (undefined **)0x0;
            puVar11 = puVar23;
            do {
              if (*plStack_320 != lVar9) {
                _objc_enumerationMutation(ppuVar18);
              }
              lVar12 = *(long *)(lStack_328 + (long)ppuVar20 * 8);
              lVar4 = lVar12;
              func_0x00010c2a4740();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar4;
              func_0x00010c25e900();
              if (lVar15 == 0) {
                func_0x00010c098ba0();
                _objc_retainAutoreleasedReturnValue();
                lVar15 = lVar12;
                func_0x00010c2a47e0();
                _objc_release(lVar12);
              }
              _objc_release(lVar4);
              puVar23 = puVar11;
              if (lVar15 == 1) {
                puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                func_0x00010befa120(ppuVar14);
              }
              func_0x00010befa120(puVar23);
              ppuVar20 = (undefined **)((long)ppuVar20 + 1);
              puVar11 = puVar23;
            } while (ppuVar19 != ppuVar20);
            ppuVar19 = ppuVar18;
            func_0x00010bf52a60();
          } while (ppuVar19 != (undefined **)0x0);
        }
        _objc_release(ppuVar18);
        ppuVar19 = ppuVar14;
        func_0x00010bf51e00();
        _objc_release(puVar23);
        _objc_release(ppuVar14);
        _objc_release(ppuVar18);
        ppuVar14 = ppuVar19;
        func_0x00010bf529e0();
        if (ppuVar14 == (undefined **)0x0) {
          _objc_retain(ppuVar18);
          ppuVar1 = &PTR___NSConcreteGlobalBlock_11088a940;
          ppuVar20 = ppuVar22;
          func_0x0001006372a4();
          ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar20;
          func_0x00010bf529e0();
          puVar23 = PTR___NSConcreteStackBlock_11034bd00;
          if ((undefined **)0x1 < ppuVar14) {
            ppuVar14 = (undefined **)0x1;
            dVar26 = dVar25;
            do {
              ppuVar1 = ppuVar20;
              func_0x00010c0dfd40(ppuVar20);
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar1;
              func_0x00010bf428e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2709c0();
              dVar27 = dVar26;
              _objc_release(ppuVar2);
              _objc_release(ppuVar1);
              ppuVar1 = ppuVar20;
              func_0x00010c0dfd40(ppuVar20);
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar1;
              func_0x00010bf428e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2709c0();
              dVar25 = dVar27;
              _objc_release(ppuVar2);
              _objc_release(ppuVar1);
              puStack_2f0 = puVar23;
              uStack_2e8 = 0xc0000000;
              pcStack_2e0 = FUN_1054608b4;
              puStack_2d8 = &UNK_11088a960;
              ppuVar1 = &puStack_2f0;
              ppuVar2 = ppuVar18;
              dStack_2d0 = dVar26;
              dStack_2c8 = dVar27;
              func_0x0001006372a4(ppuVar18);
              func_0x00010befa120(ppuVar17);
              _objc_release(ppuVar2);
              ppuVar14 = (undefined **)((long)ppuVar14 + 1);
              ppuVar2 = ppuVar20;
              func_0x00010bf529e0();
              dVar26 = dVar25;
            } while (ppuVar14 < ppuVar2);
          }
          ppuVar14 = ppuVar20;
          func_0x00010c089820(ppuVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar14;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          _objc_release(ppuVar2);
          _objc_release(ppuVar14);
          if (dVar25 != 0.0) {
            puStack_330 = puVar23;
            lStack_328 = 0xc0000000;
            plStack_320 = (long *)0x1054609b8;
            puStack_318 = &UNK_11088a980;
            ppuVar1 = &puStack_330;
            ppuVar14 = ppuVar18;
            dStack_310 = dVar25;
            func_0x0001006372a4(ppuVar18);
            func_0x00010befa120(ppuVar17);
            _objc_release(ppuVar14);
          }
          ppuVar14 = ppuVar17;
          func_0x00010bf51e00();
          _objc_release(ppuVar17);
          _objc_release(ppuVar20);
          _objc_release(ppuVar18);
        }
        else {
          _objc_retain(ppuVar19);
          ppuVar14 = ppuVar19;
        }
        _objc_release(ppuVar19);
        _objc_release(ppuVar10);
      }
      ppuVar10 = ppuVar14;
      func_0x00010bf529e0();
      ppuVar19 = ppuVar6;
      func_0x00010bf529e0();
      _objc_retain(ppuVar13);
      if ((ppuVar10 == (undefined **)0x0) ||
         (ppuVar20 = ppuVar13, func_0x00010bf529e0(), ppuVar20 <= ppuVar10)) {
        _objc_retain(ppuVar13);
        ppuVar19 = ppuVar13;
      }
      else {
        ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar23 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c226900();
        _objc_retainAutoreleasedReturnValue();
        lStack_328 = 0;
        puStack_330 = (undefined *)0x0;
        puStack_318 = (undefined *)0x0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        dStack_310 = 0.0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        _objc_retain(ppuVar13);
        ppuVar20 = ppuVar13;
        func_0x00010bf52a60();
        if (ppuVar20 != (undefined **)0x0) {
          lVar9 = *plStack_320;
          do {
            ppuVar17 = (undefined **)0x0;
            do {
              if (*plStack_320 != lVar9) {
                _objc_enumerationMutation(ppuVar13);
              }
              lVar15 = *(long *)(lStack_328 + (long)ppuVar17 * 8);
              puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_350 = 0xc2000000;
              uStack_348 = 0x1054621bc;
              puStack_340 = &UNK_11088a9d0;
              _objc_retain(puVar23);
              ppuVar1 = &puStack_358;
              puStack_338 = puVar23;
              func_0x0001006372a4();
              lVar4 = lVar15;
              func_0x00010bf529e0();
              _objc_release(lVar15);
              if (lVar4 != 0 || ppuVar19 != (undefined **)0x0) {
                func_0x00010befa120(ppuVar10);
              }
              _objc_release(puStack_338);
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (ppuVar20 != ppuVar17);
            ppuVar20 = ppuVar13;
            func_0x00010bf52a60();
          } while (ppuVar20 != (undefined **)0x0);
        }
        _objc_release(ppuVar13);
        ppuVar19 = ppuVar10;
        func_0x00010bf51e00();
        _objc_release(puVar23);
        _objc_release(ppuVar10);
      }
      _objc_release(ppuVar13);
      _objc_release(ppuVar13);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar19;
      func_0x00010bf529e0();
      puVar23 = PTR____NSArray0__struct_11034ab48;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar13 = (undefined **)0x0;
        do {
          ppuVar10 = ppuVar19;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar14;
          func_0x00010bf529e0();
          ppuVar20 = (undefined **)puVar23;
          if (ppuVar13 < ppuVar1) {
            ppuVar20 = ppuVar14;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
          }
          ppuVar17 = ppuVar10;
          ppuVar1 = ppuVar20;
          FUN_105460c80(ppuVar10,ppuVar20,ppuVar6,uVar7,puVar16,puVar5,param_8);
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar17 != (undefined **)0x0) {
            func_0x00010befa120(puVar11);
          }
          _objc_release(ppuVar17);
          _objc_release(ppuVar20);
          _objc_release(ppuVar10);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          ppuVar10 = ppuVar19;
          func_0x00010bf529e0();
        } while (ppuVar13 < ppuVar10);
      }
      puVar16 = puVar11;
      func_0x00010bf529e0();
      if (puVar16 == (undefined *)0x0) {
        ppuVar10 = (undefined **)0x0;
      }
      else {
        ppuVar10 = (undefined **)PTR_PTR_1126b9358;
        _objc_alloc();
        func_0x00010bfff7e0();
      }
      _objc_release(puVar11);
      _objc_release(ppuVar14);
      _objc_release(ppuVar19);
      _objc_release(ppuVar18);
      _objc_release(ppuVar22);
    }
    _objc_release(param_8);
    _objc_release(puVar5);
    _objc_release(ppuVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
      ___stack_chk_fail();
      _objc_retain(ppuVar1);
      ppuVar18 = ppuVar1;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar18 == (undefined **)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar16 = ppuVar18[9];
      }
      _objc_retain(puVar16);
      puVar5 = puVar16;
      func_0x00010c071f40();
      _objc_release(puVar16);
      _objc_release(ppuVar18);
      if ((int)puVar5 == 0) {
        ppuVar10 = (undefined **)0x0;
      }
      else {
        _objc_retain(ppuVar1);
        ppuVar10 = ppuVar1;
      }
      _objc_release(ppuVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 1054612e8; end: 10546211b; +[SCAdTrackCollectionEventParser parseResultForTrackCollectionEventSequences:instantPageEvents:instantPageEnabled:preferredAttachmentType:adConfigProvider:adConfigProviderV2:] */

void FUN_1054612e8(undefined8 param_1,undefined **param_2,undefined **param_3,long param_4,
                  uint param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined *puStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  double dStack_f0;
  double dStack_e8;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar8 = param_3;
  func_0x00010bf529e0();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    ppuVar8 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_148 = 0;
    puStack_150 = (undefined *)0x0;
    puStack_138 = (undefined *)0x0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    dStack_130 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(ppuVar8);
    ppuVar1 = ppuVar8;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      lVar6 = *plStack_140;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_140 != lVar6) {
            _objc_enumerationMutation(ppuVar8);
          }
          ppuVar11 = *(undefined ***)(lStack_148 + (long)ppuVar13 * 8);
          ppuVar2 = ppuVar11;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar2;
          func_0x00010c25e900();
          if (ppuVar12 == (undefined **)0xb) {
LAB_105461440:
            _objc_release(ppuVar2);
LAB_105461448:
            func_0x00010befa120(ppuVar14);
          }
          else {
            ppuVar12 = ppuVar11;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar12;
            func_0x00010c25e900();
            if (ppuVar3 == (undefined **)0xc) {
              _objc_release(ppuVar12);
              goto LAB_105461440;
            }
            ppuVar3 = ppuVar11;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c25e900();
            _objc_release(ppuVar3);
            _objc_release(ppuVar12);
            _objc_release(ppuVar2);
            if (ppuVar4 == (undefined **)0xd) goto LAB_105461448;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar11;
            func_0x00010c25e900();
            ppuVar12 = ppuVar14;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar12;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c25e900();
            _objc_release(ppuVar3);
            _objc_release(ppuVar12);
            _objc_release(ppuVar11);
            if (ppuVar2 != ppuVar4) goto LAB_105461448;
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar1 != ppuVar13);
        ppuVar1 = ppuVar8;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(ppuVar8);
    ppuVar1 = ppuVar14;
    func_0x00010bf51e00();
    _objc_release(ppuVar14);
    _objc_release(ppuVar8);
    _objc_release(ppuVar8);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 4) {
      _objc_retain(ppuVar1);
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      puStack_138 = (undefined *)0x0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      dStack_130 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(ppuVar1);
      ppuVar14 = ppuVar1;
      func_0x00010bf52a60();
      if (ppuVar14 == (undefined **)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = (undefined *)0x0;
        lVar6 = *plStack_140;
        do {
          ppuVar13 = (undefined **)0x0;
          puVar5 = puVar10;
          do {
            if (*plStack_140 != lVar6) {
              _objc_enumerationMutation(ppuVar1);
            }
            lVar7 = *(long *)(lStack_148 + (long)ppuVar13 * 8);
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar7;
            func_0x00010bf055a0();
            _objc_release(lVar7);
            puVar10 = puVar5;
            if (lVar15 == 4) {
              puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              func_0x00010befa120(ppuVar8);
            }
            func_0x00010befa120(puVar10);
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
            puVar5 = puVar10;
          } while (ppuVar14 != ppuVar13);
          ppuVar14 = ppuVar1;
          func_0x00010bf52a60();
        } while (ppuVar14 != (undefined **)0x0);
      }
      _objc_release(ppuVar1);
      ppuVar14 = ppuVar8;
      func_0x00010bf51e00();
      _objc_release(puVar10);
      _objc_release(ppuVar8);
      _objc_release(ppuVar1);
      ppuVar13 = (undefined **)0x0;
    }
    else if (param_6 == 5) {
      ppuVar14 = ppuVar1;
      FUN_105460694();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = param_3;
      FUN_105460694();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (((param_5 & 1) == 0) && (param_6 != 3)) {
      ppuVar13 = (undefined **)0x0;
      ppuVar14 = (undefined **)0x0;
    }
    else {
      _objc_retain(ppuVar1);
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      puStack_138 = (undefined *)0x0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      dStack_130 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(ppuVar1);
      ppuVar14 = ppuVar1;
      func_0x00010bf52a60();
      if (ppuVar14 == (undefined **)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = (undefined *)0x0;
        lVar6 = *plStack_140;
        do {
          ppuVar13 = (undefined **)0x0;
          puVar5 = puVar10;
          do {
            if (*plStack_140 != lVar6) {
              _objc_enumerationMutation(ppuVar1);
            }
            lVar7 = *(long *)(lStack_148 + (long)ppuVar13 * 8);
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar7;
            func_0x00010c25e900();
            _objc_release(lVar7);
            puVar10 = puVar5;
            if (lVar15 == 4) {
              puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              func_0x00010befa120(ppuVar8);
            }
            func_0x00010befa120(puVar10);
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
            puVar5 = puVar10;
          } while (ppuVar14 != ppuVar13);
          ppuVar14 = ppuVar1;
          func_0x00010bf52a60();
        } while (ppuVar14 != (undefined **)0x0);
      }
      _objc_release(ppuVar1);
      ppuVar2 = ppuVar8;
      func_0x00010bf51e00();
      _objc_release(puVar10);
      _objc_release(ppuVar8);
      _objc_release(ppuVar1);
      ppuVar8 = ppuVar2;
      func_0x00010bf529e0();
      if (ppuVar8 == (undefined **)0x0) {
        _objc_retain(ppuVar1);
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_148 = 0;
        puStack_150 = (undefined *)0x0;
        puStack_138 = (undefined *)0x0;
        plStack_140 = (long *)0x0;
        uStack_128 = 0;
        dStack_130 = 0.0;
        uStack_118 = 0;
        uStack_120 = 0;
        _objc_retain(ppuVar1);
        ppuVar14 = ppuVar1;
        func_0x00010bf52a60();
        if (ppuVar14 == (undefined **)0x0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = (undefined *)0x0;
          lVar6 = *plStack_140;
          do {
            ppuVar13 = (undefined **)0x0;
            puVar5 = puVar10;
            do {
              if (*plStack_140 != lVar6) {
                _objc_enumerationMutation(ppuVar1);
              }
              lVar7 = *(long *)(lStack_148 + (long)ppuVar13 * 8);
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar7;
              func_0x00010c25e900();
              _objc_release(lVar7);
              puVar10 = puVar5;
              if (lVar15 == 3) {
                puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                func_0x00010befa120(ppuVar8);
              }
              func_0x00010befa120(puVar10);
              ppuVar13 = (undefined **)((long)ppuVar13 + 1);
              puVar5 = puVar10;
            } while (ppuVar14 != ppuVar13);
            ppuVar14 = ppuVar1;
            func_0x00010bf52a60();
          } while (ppuVar14 != (undefined **)0x0);
        }
        _objc_release(ppuVar1);
        ppuVar14 = ppuVar8;
        func_0x00010bf51e00();
        _objc_release(puVar10);
        _objc_release(ppuVar8);
        _objc_release(ppuVar1);
      }
      else {
        _objc_retain(ppuVar2);
        ppuVar14 = ppuVar2;
      }
      _objc_retain(param_3);
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      dVar16 = 0.0;
      lStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      puStack_138 = (undefined *)0x0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      dStack_130 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(param_3);
      ppuVar13 = param_3;
      func_0x00010bf52a60();
      if (ppuVar13 == (undefined **)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = (undefined *)0x0;
        lVar6 = *plStack_140;
        do {
          ppuVar12 = (undefined **)0x0;
          puVar5 = puVar10;
          do {
            if (*plStack_140 != lVar6) {
              _objc_enumerationMutation(param_3);
            }
            lVar9 = *(long *)(lStack_148 + (long)ppuVar12 * 8);
            lVar15 = lVar9;
            func_0x00010c2a4740();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar15;
            func_0x00010c25e900();
            if (lVar7 == 0) {
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar9;
              func_0x00010c2a47e0();
              _objc_release(lVar9);
            }
            _objc_release(lVar15);
            puVar10 = puVar5;
            if (lVar7 == 1) {
              puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              func_0x00010befa120(ppuVar8);
            }
            func_0x00010befa120(puVar10);
            ppuVar12 = (undefined **)((long)ppuVar12 + 1);
            puVar5 = puVar10;
          } while (ppuVar13 != ppuVar12);
          ppuVar13 = param_3;
          func_0x00010bf52a60();
        } while (ppuVar13 != (undefined **)0x0);
      }
      _objc_release(param_3);
      ppuVar12 = ppuVar8;
      func_0x00010bf51e00();
      _objc_release(puVar10);
      _objc_release(ppuVar8);
      _objc_release(param_3);
      ppuVar8 = ppuVar12;
      func_0x00010bf529e0();
      if (ppuVar8 == (undefined **)0x0) {
        _objc_retain(param_3);
        param_2 = &PTR___NSConcreteGlobalBlock_11088a940;
        ppuVar8 = ppuVar1;
        func_0x0001006372a4();
        ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar8;
        func_0x00010bf529e0();
        puVar10 = PTR___NSConcreteStackBlock_11034bd00;
        if ((undefined **)0x1 < ppuVar13) {
          ppuVar13 = (undefined **)0x1;
          dVar17 = dVar16;
          do {
            ppuVar3 = ppuVar8;
            func_0x00010c0dfd40(ppuVar8);
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            dVar18 = dVar17;
            _objc_release(ppuVar4);
            _objc_release(ppuVar3);
            ppuVar3 = ppuVar8;
            func_0x00010c0dfd40(ppuVar8);
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            dVar16 = dVar18;
            _objc_release(ppuVar4);
            _objc_release(ppuVar3);
            puStack_110 = puVar10;
            uStack_108 = 0xc0000000;
            pcStack_100 = FUN_1054608b4;
            puStack_f8 = &UNK_11088a960;
            param_2 = &puStack_110;
            ppuVar3 = param_3;
            dStack_f0 = dVar17;
            dStack_e8 = dVar18;
            func_0x0001006372a4(param_3);
            func_0x00010befa120(ppuVar11);
            _objc_release(ppuVar3);
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
            ppuVar3 = ppuVar8;
            func_0x00010bf529e0();
            dVar17 = dVar16;
          } while (ppuVar13 < ppuVar3);
        }
        ppuVar13 = ppuVar8;
        func_0x00010c089820(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar13;
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        _objc_release(ppuVar3);
        _objc_release(ppuVar13);
        if (dVar16 != 0.0) {
          puStack_150 = puVar10;
          lStack_148 = 0xc0000000;
          plStack_140 = (long *)0x1054609b8;
          puStack_138 = &UNK_11088a980;
          param_2 = &puStack_150;
          ppuVar13 = param_3;
          dStack_130 = dVar16;
          func_0x0001006372a4(param_3);
          func_0x00010befa120(ppuVar11);
          _objc_release(ppuVar13);
        }
        ppuVar13 = ppuVar11;
        func_0x00010bf51e00();
        _objc_release(ppuVar11);
        _objc_release(ppuVar8);
        _objc_release(param_3);
      }
      else {
        _objc_retain(ppuVar12);
        ppuVar13 = ppuVar12;
      }
      _objc_release(ppuVar12);
      _objc_release(ppuVar2);
    }
    ppuVar8 = ppuVar13;
    func_0x00010bf529e0();
    lVar6 = param_4;
    func_0x00010bf529e0();
    _objc_retain(ppuVar14);
    if ((ppuVar8 == (undefined **)0x0) ||
       (ppuVar2 = ppuVar14, func_0x00010bf529e0(), ppuVar2 <= ppuVar8)) {
      _objc_retain(ppuVar14);
      ppuVar2 = ppuVar14;
    }
    else {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c226900();
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      puStack_138 = (undefined *)0x0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      dStack_130 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(ppuVar14);
      ppuVar2 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        lVar15 = *plStack_140;
        do {
          ppuVar12 = (undefined **)0x0;
          do {
            if (*plStack_140 != lVar15) {
              _objc_enumerationMutation(ppuVar14);
            }
            lVar9 = *(long *)(lStack_148 + (long)ppuVar12 * 8);
            puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_170 = 0xc2000000;
            uStack_168 = 0x1054621bc;
            puStack_160 = &UNK_11088a9d0;
            _objc_retain(puVar10);
            param_2 = &puStack_178;
            puStack_158 = puVar10;
            func_0x0001006372a4();
            lVar7 = lVar9;
            func_0x00010bf529e0();
            _objc_release(lVar9);
            if (lVar7 != 0 || lVar6 != 0) {
              func_0x00010befa120(ppuVar8);
            }
            _objc_release(puStack_158);
            ppuVar12 = (undefined **)((long)ppuVar12 + 1);
          } while (ppuVar2 != ppuVar12);
          ppuVar2 = ppuVar14;
          func_0x00010bf52a60();
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      ppuVar2 = ppuVar8;
      func_0x00010bf51e00();
      _objc_release(puVar10);
      _objc_release(ppuVar8);
    }
    _objc_release(ppuVar14);
    _objc_release(ppuVar14);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar2;
    func_0x00010bf529e0();
    puVar10 = PTR____NSArray0__struct_11034ab48;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
      do {
        ppuVar14 = ppuVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar13;
        func_0x00010bf529e0();
        ppuVar11 = (undefined **)puVar10;
        if (ppuVar8 < ppuVar12) {
          ppuVar11 = ppuVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar12 = ppuVar14;
        param_2 = ppuVar11;
        FUN_105460c80(ppuVar14,ppuVar11,param_4,param_5,param_6,param_7,param_8);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar12 != (undefined **)0x0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        _objc_release(ppuVar14);
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        ppuVar14 = ppuVar2;
        func_0x00010bf529e0();
      } while (ppuVar8 < ppuVar14);
    }
    puVar10 = puVar5;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = (undefined **)PTR_PTR_1126b9358;
      _objc_alloc();
      func_0x00010bfff7e0();
    }
    _objc_release(puVar5);
    _objc_release(ppuVar13);
    _objc_release(ppuVar2);
    _objc_release(param_3);
    _objc_release(ppuVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    ppuVar8 = param_2;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 == (undefined **)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = ppuVar8[9];
    }
    _objc_retain(puVar10);
    puVar5 = puVar10;
    func_0x00010c071f40();
    _objc_release(puVar10);
    _objc_release(ppuVar8);
    if ((int)puVar5 == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      _objc_retain(param_2);
      ppuVar8 = param_2;
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 10546211c; end: 10546223b;  */

void FUN_10546211c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
  }
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c071f40();
  _objc_release(uVar3);
  _objc_release(lVar2);
  if ((int)uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    lVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10546223c; end: 1054624a7; +[SCAdTrackDeeplinkEventParser parseResultForAdTrackUiEvents:prevAdViewtrackEvents:metricEvents:adConfigProvider:adConfigProviderV2:] */

void FUN_10546223c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    FUN_105466d78(param_4,PTR____NSArray0__struct_11034ab48);
    func_0x00010c264660(PTR_PTR_1126b9360);
    puVar9 = PTR_PTR_1126b9348;
    func_0x00010bfe6000(PTR_PTR_1126b9348);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c2bab40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2a9840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a89a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2b0240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
    uVar6 = param_6;
    func_0x00010bf09f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b9360;
    func_0x00010c0f44c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c2ac0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    uVar7 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf8f2a0();
    _objc_release(uVar7);
    puVar9 = puVar3;
    if ((int)uVar8 != 0) {
      FUN_105467e6c(param_4);
      puVar4 = puVar3;
      func_0x00010c2bb760(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_1054680f0(param_5,param_4);
      puVar9 = puVar4;
      func_0x00010c2b74c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(uVar6);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1054624a8; end: 105462797; +[SCAdTrackDeeplinkEventParser parseResultForTrackDeeplinkMetricEvents:adConfigProvider:] */

void FUN_1054624a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_105462798;
    uStack_110 = 0x1054627a8;
    puVar2 = PTR_PTR_1126b9380;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar2;
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar5 * 8);
        lVar3 = lVar7;
        func_0x00010bf684c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010bf684c0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bc960();
          _objc_release(lVar3);
          _objc_release(lVar7);
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar6 = puStack_128[5];
    _objc_retain(uVar6);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 105462798; end: 1054627af;  */

void FUN_105462798(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054627b0; end: 1054628df;  */

void FUN_1054627b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c2ac060(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054628e0; end: 105462953;  */

void FUN_1054628e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c2ac020(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2abac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105462954; end: 10546299f;  */

void FUN_105462954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c2abf00(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054629a0; end: 105462d97; +[SCAdTrackDeeplinkEventParser parseResultForDeeplinkTrackEvents:adConfigProvider:] */

void FUN_1054629a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  puVar9 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = param_3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined8 *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b9380;
    func_0x00010bfe6000();
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
    puVar10 = &uStack_130;
    puVar9 = auStack_f0;
    param_5 = 0x10;
    puVar4 = param_3;
    func_0x00010bf52a60(param_3,param_2,puVar10,puVar9,0x10);
    if (puVar4 == (undefined8 *)0x0) {
      _objc_release(param_3);
      puVar11 = (undefined *)0x0;
    }
    else {
      uVar15 = 0;
      bVar3 = 0;
      bVar2 = 0;
      bVar1 = 0;
      lVar13 = *plStack_120;
      do {
        puVar10 = (undefined8 *)0x0;
        uVar12 = uVar15;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(param_3);
          }
          puVar14 = *(undefined **)(lStack_128 + (long)puVar10 * 8);
          puVar11 = puVar14;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar11;
          func_0x00010bf68580();
          if (puVar6 == (undefined *)0x0) {
            puVar7 = puVar14;
            func_0x00010bf684c0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar7;
            func_0x00010bf68580();
            _objc_release(puVar7);
          }
          _objc_release(puVar11);
          puVar11 = puVar14;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar11;
          func_0x00010bf61aa0();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = puVar14;
            func_0x00010bf684c0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf61aa0();
            uVar15 = (uint)puVar8;
            _objc_release(puVar7);
          }
          else {
            uVar15 = 1;
          }
          _objc_release(puVar11);
          if ((uVar15 & (uVar12 ^ 0xffffffff) & 1) == 0) {
            uVar15 = uVar12;
          }
          puVar11 = puVar5;
          if ((long)puVar6 < 3) {
            if (puVar6 == (undefined *)0x1) {
              puVar6 = puVar14;
              func_0x00010bf684c0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010bf68980();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              if (puVar7 == (undefined *)0x0) {
                func_0x00010c098ba0(puVar14,param_2,0);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar14;
                func_0x00010bf68980();
                _objc_retainAutoreleasedReturnValue();
                puStack_160 = puVar8;
                puStack_158 = puVar14;
              }
              func_0x00010c2ac060(puVar5,param_2,puVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              if (puVar7 == (undefined *)0x0) {
                _objc_release(puStack_160);
                _objc_release(puStack_158);
              }
              _objc_release(puVar7);
              bVar3 = 1;
              puVar5 = puVar6;
              goto LAB_105462c00;
            }
            if (puVar6 == (undefined *)0x2) {
              bVar2 = 1;
              func_0x00010c2ac000(puVar5,param_2,1);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_105462c00;
            }
          }
          else {
            if (puVar6 == (undefined *)0x3) {
              bVar1 = 1;
              func_0x00010c2abf20(puVar5,param_2,1);
              _objc_retainAutoreleasedReturnValue();
            }
            else if (puVar6 == (undefined *)0x4) {
              bVar1 = 1;
              func_0x00010c2abf00(puVar5,param_2,1);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              if (puVar6 != (undefined *)0x5) goto LAB_105462c0c;
              bVar1 = 1;
              func_0x00010c2ac020(puVar5,param_2,1);
              _objc_retainAutoreleasedReturnValue();
            }
LAB_105462c00:
            _objc_release(puVar5);
            puVar5 = puVar11;
          }
LAB_105462c0c:
          puVar10 = (undefined8 *)((long)puVar10 + 1);
          uVar12 = uVar15;
        } while (puVar4 != puVar10);
        puVar10 = &uStack_130;
        puVar9 = auStack_f0;
        param_5 = 0x10;
        puVar4 = param_3;
        func_0x00010bf52a60(param_3,param_2,puVar10,puVar9,0x10);
      } while (puVar4 != (undefined8 *)0x0);
      _objc_release(param_3);
      if ((bool)(bVar3 | bVar2 | bVar1)) {
        puVar10 = (undefined8 *)(ulong)(uVar15 & 1);
        puVar11 = puVar5;
        func_0x00010c2abac0(puVar5,param_2,puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_retain(puVar11);
        puVar5 = puVar11;
      }
      else {
        puVar11 = (undefined *)0x0;
      }
    }
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    _objc_retain(param_5);
    puVar5 = PTR_PTR_1126b9360;
    func_0x00010c0f44c0(PTR_PTR_1126b9360,param_2,puVar10,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar11 = PTR_PTR_1126b9360;
      func_0x00010c0f44c0(PTR_PTR_1126b9360,param_2,puVar9,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar5);
      puVar11 = puVar5;
    }
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105462d98; end: 105462e3f; +[SCAdTrackDeeplinkEventParser parseResultForDeeplinkMetricTrackEvents:uiTrackEvents:adConfigProvider:] */

void FUN_105462d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b9360;
  func_0x00010c0f44c0(PTR_PTR_1126b9360,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b9360;
    func_0x00010c0f44c0(PTR_PTR_1126b9360,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105462e40; end: 105463293; +[SCAdTrackDeeplinkEventParser swipeCountForDeeplinkEvents:attachmentTriggerType:adConfigProvider:adConfigProviderV2:] */

ulong * FUN_105462e40(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong *puVar11;
  ulong *unaff_x22;
  ulong *unaff_x24;
  ulong *puVar12;
  ulong *unaff_x25;
  int iVar13;
  undefined8 unaff_x26;
  ulong *puVar14;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  ulong *puStack_1e8;
  ulong *puStack_1e0;
  undefined8 uStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  ulong *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  int iStack_15c;
  ulong *puStack_158;
  int iStack_14c;
  ulong *puStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  uVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar14 = param_3;
  func_0x00010bf529e0();
  if (puVar14 == (ulong *)0x0) {
    puVar14 = (ulong *)0x0;
    goto LAB_10546323c;
  }
  uVar9 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  unaff_x26 = uVar9;
  func_0x00010bf1f480();
  _objc_release(uVar9);
  uVar9 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf1f480();
  iStack_14c = (int)uVar1;
  _objc_release(uVar9);
  uVar9 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf1f480();
  iStack_15c = (int)uVar1;
  _objc_release(uVar9);
  ppuStack_198 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfc98;
  uStack_190 = 0;
  ppuStack_1a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfc80;
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_168 = puVar2;
  _objc_retain(param_3);
  puVar12 = &uStack_130;
  uVar9 = 0x10;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 == (ulong *)0x0) {
    unaff_x25 = (ulong *)0x0;
    unaff_x24 = (ulong *)0x0;
    puVar14 = (ulong *)0x0;
    param_4 = param_3;
LAB_105463208:
    _objc_release(param_4);
  }
  else {
    puStack_158 = (ulong *)0x0;
    puStack_148 = (ulong *)0x0;
    puStack_140 = (ulong *)0x0;
    puVar14 = (ulong *)0x0;
    unaff_x25 = (ulong *)0x0;
    lVar10 = *plStack_120;
    puStack_180 = param_4;
    uStack_178 = param_6;
    uStack_170 = param_5;
    do {
      puVar12 = (ulong *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar11 = *(ulong **)(lStack_128 + (long)puVar12 * 8);
        puVar4 = puVar11;
        func_0x00010bf684c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf68580();
        if (puVar5 == (ulong *)0x0) {
          puVar6 = puVar11;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          puStack_138 = unaff_x25;
          func_0x00010bf68580();
          unaff_x25 = puStack_138;
          _objc_release(puVar6);
        }
        _objc_release(puVar4);
        iVar13 = 0;
        if (puVar5 == (ulong *)0x1) {
          iVar13 = (int)unaff_x26;
        }
        if (iVar13 == 1) {
          puVar14 = (ulong *)((long)puVar14 + 1);
        }
        else {
          iVar13 = 0;
          if (puVar5 == (ulong *)0x2) {
            iVar13 = iStack_14c;
          }
          if (iVar13 == 1) {
            puStack_148 = (ulong *)((long)puStack_148 + 1);
          }
          else if (iStack_15c != 0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puStack_168;
            func_0x00010bf4b900();
            _objc_release(puVar2);
            puStack_158 = (ulong *)((long)puStack_158 + ((ulong)puVar7 & 1));
          }
        }
        param_4 = puVar11;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_4;
        func_0x00010c25e900();
        _objc_release(param_4);
        puVar5 = unaff_x25;
        if (puVar4 == (ulong *)0x3) {
          puVar4 = unaff_x25;
          puVar5 = puVar11;
          puVar11 = puStack_140;
          if (unaff_x25 != (ulong *)0x0) {
            puVar5 = unaff_x25;
          }
LAB_105463158:
          puStack_140 = puVar11;
          _objc_retain();
          _objc_release(puVar4);
          unaff_x25 = puVar5;
        }
        else {
          param_4 = puVar11;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_4;
          func_0x00010c25e900();
          _objc_release(param_4);
          if (puVar4 == (ulong *)0x4) {
            puVar4 = puStack_140;
            if (puStack_140 != (ulong *)0x0) {
              puVar11 = puStack_140;
            }
            goto LAB_105463158;
          }
        }
        puVar12 = (ulong *)((long)puVar12 + 1);
      } while (puVar3 != puVar12);
      puVar12 = &uStack_130;
      uVar9 = 0x10;
      puVar3 = param_3;
      func_0x00010bf52a60();
    } while (puVar3 != (ulong *)0x0);
    if (puVar14 <= puStack_148) {
      puVar14 = puStack_148;
    }
    if (puVar14 <= puStack_158) {
      puVar14 = puStack_158;
    }
    _objc_release(param_3);
    unaff_x24 = puStack_140;
    param_5 = uStack_170;
    unaff_x22 = puStack_180;
    param_6 = uStack_178;
    if (puVar14 == (ulong *)0x0) {
      unaff_x22 = (ulong *)0x0;
    }
    else if ((*puStack_180 & 0xfffffffffffffffb) == 0) {
      param_4 = unaff_x25;
      if (puStack_140 != (ulong *)0x0) {
        param_4 = puStack_140;
      }
      func_0x00010c098ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_4;
      func_0x00010bf0d4e0();
      *unaff_x22 = (ulong)puVar3;
      param_6 = uStack_178;
      goto LAB_105463208;
    }
  }
  _objc_release(puStack_168);
  _objc_release(unaff_x24);
  _objc_release(unaff_x25);
LAB_10546323c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_105463294;
  uStack_1f0 = unaff_x26;
  puStack_1e8 = unaff_x25;
  puStack_1e0 = unaff_x24;
  uStack_1d8 = param_6;
  puStack_1d0 = unaff_x22;
  puStack_1c8 = param_4;
  puStack_1c0 = puVar14;
  uStack_1b8 = param_5;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar9);
  _objc_retain(puVar12);
  uVar1 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  uVar1 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x0001006372a4(puVar12,&PTR___NSConcreteGlobalBlock_11088aa00);
  puVar3 = puVar14;
  func_0x00010bf529e0();
  _objc_release(puVar14);
  puVar14 = puVar12;
  func_0x0001006372a4(puVar12,&PTR___NSConcreteGlobalBlock_11088aa20);
  puVar4 = puVar14;
  func_0x00010bf529e0();
  _objc_release(puVar14);
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  uStack_208 = 0x10546352c;
  puStack_200 = &UNK_11088a9d0;
  puStack_1f8 = puVar2;
  _objc_retain(puVar2);
  puVar5 = puVar12;
  func_0x0001006372a4(puVar12,&puStack_218);
  _objc_release(puVar12);
  puVar14 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  puVar12 = puVar3;
  if (puVar3 <= puVar14) {
    puVar12 = puVar14;
  }
  if ((int)uVar9 == 0) {
    puVar12 = puVar3;
    puVar14 = puVar4;
  }
  if ((int)uVar8 == 0) {
    puVar12 = puVar14;
  }
  _objc_release(puStack_1f8);
  _objc_release(puVar2);
  return puVar12;
}



/* Entry: 105463294; end: 10546345b; +[SCAdTrackDeeplinkEventParser swipeCountForDeeplinkEvents:adConfigProvider:adConfigProviderV2:] */

ulong FUN_105463294(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11088aa00);
  uVar6 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11088aa20);
  uVar7 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x10546352c;
  puStack_60 = &UNK_11088a9d0;
  puStack_58 = puVar4;
  _objc_retain(puVar4);
  uVar5 = param_3;
  func_0x0001006372a4(param_3,&puStack_78);
  _objc_release(param_3);
  uVar8 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  uVar5 = uVar6;
  if (uVar6 <= uVar8) {
    uVar5 = uVar8;
  }
  if ((int)uVar3 == 0) {
    uVar5 = uVar6;
    uVar8 = uVar7;
  }
  if ((int)uVar2 == 0) {
    uVar5 = uVar8;
  }
  _objc_release(puStack_58);
  _objc_release(puVar4);
  return uVar5;
}



/* Entry: 10546345c; end: 105463597;  */

undefined8 FUN_10546345c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf684c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0f4880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105463598; end: 10546389f; +[SCAdTrackDeeplinkEventParser swipeCountForDeeplinkTrackEvents:adConfigProvider:adConfigProviderV2:] */

undefined *
FUN_105463598(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  uVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined8 *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar10 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010bf1f480();
    _objc_release(uVar10);
    uVar10 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bf1f480();
    _objc_release(uVar10);
    uVar10 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf1f480();
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfc68);
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
    puVar11 = &uStack_130;
    param_4 = auStack_f0;
    uVar10 = 0x10;
    puVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,puVar11,param_4,0x10);
    if (puVar1 == (undefined8 *)0x0) {
      puStack_140 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      puStack_140 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
      lVar12 = *plStack_120;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          lVar16 = *(long *)(lStack_128 + (long)puVar11 * 8);
          lVar6 = lVar16;
          func_0x00010bf684c0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf68580();
          if (lVar7 == 0) {
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar16;
            func_0x00010bf68580();
            _objc_release(lVar16);
          }
          _objc_release(lVar6);
          iVar13 = 0;
          if (lVar7 == 1) {
            iVar13 = (int)uVar2;
          }
          if (iVar13 == 1) {
            puVar14 = puVar14 + 1;
          }
          else {
            iVar13 = 0;
            if (lVar7 == 2) {
              iVar13 = (int)uVar3;
            }
            if (iVar13 == 1) {
              puVar15 = puVar15 + 1;
            }
            else if ((int)uVar4 != 0) {
              puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar5;
              func_0x00010bf4b900(puVar5,param_2,puVar8);
              _objc_release(puVar8);
              puStack_140 = puStack_140 + ((ulong)puVar9 & 1);
            }
          }
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar1 != puVar11);
        puVar11 = &uStack_130;
        param_4 = auStack_f0;
        uVar10 = 0x10;
        puVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,puVar11,param_4,0x10);
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    if (puVar14 <= puVar15) {
      puVar14 = puVar15;
    }
    if (puVar14 <= puStack_140) {
      puVar14 = puStack_140;
    }
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    _objc_retain(uVar10);
    _objc_retain(param_6);
    puVar14 = PTR_PTR_1126b9360;
    func_0x00010c2646a0(PTR_PTR_1126b9360,param_2,puVar11,uVar10,param_6);
    if (puVar14 == (undefined *)0x0) {
      puVar14 = PTR_PTR_1126b9360;
      func_0x00010c2646a0(PTR_PTR_1126b9360,param_2,param_4,uVar10,param_6);
    }
    _objc_release(param_6);
    _objc_release(uVar10);
    _objc_release(param_4);
    return puVar14;
  }
  return puVar14;
}



/* Entry: 1054638a0; end: 105463943; +[SCAdTrackDeeplinkEventParser swipeCountForDeeplinkMetricTrackEvents:uiTrackEvents:adConfigProvider:adConfigProviderV2:] */

undefined *
FUN_1054638a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b9360;
  func_0x00010c2646a0(PTR_PTR_1126b9360,param_2,param_3,param_5,param_6);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b9360;
    func_0x00010c2646a0(PTR_PTR_1126b9360,param_2,param_4,param_5,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105463944; end: 1054639e7; -[SCAdTrackEventParser initWithConfigProvider:adConfigProviderV2:] */

undefined1 *
FUN_105463944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8560;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b9388;
    _objc_alloc();
    func_0x00010c001240();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054639e8; end: 1054639ef; -[SCAdTrackEventParser parseResultsForAdTrackEvents:] */

void FUN_1054639e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f4470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_parseResultForAdTrackEvents__11261ab30);
  return;
}



/* Entry: 1054639f0; end: 1054639f7; -[SCAdTrackEventParser parseResultsForTrackEventSequences:instantPageEvents:adType:isCollectionInstantPageAd:preferredAttachmentType:actualAttachmentType:] */

void FUN_1054639f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f4510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_parseResultForTrackEventSequence_11261ab58);
  return;
}



/* Entry: 1054639f8; end: 105463a03; -[SCAdTrackEventParser .cxx_destruct] */

void FUN_1054639f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105463a04; end: 105463aa7; -[SCAdTrackEventParserAlgorithmV1 initWithConfigProvider:adConfigProviderV2:] */

undefined1 *
FUN_105463a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8568;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105463aa8; end: 105463abf; -[SCAdTrackEventParserAlgorithmV1 parseResultForAdTrackEvents:] */

/* WARNING: Removing unreachable block (ram,0x000105463b50) */

void FUN_105463aa8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain();
  _objc_retain(0);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b9368;
    func_0x00010c0f4540(PTR_PTR_1126b9368);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105463ac0; end: 105463baf;  */

void FUN_105463ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    if (param_5 == 1) {
      puVar2 = PTR_PTR_1126b9370;
      func_0x00010c0f4440(PTR_PTR_1126b9370);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105463b78;
    }
    if (param_5 == 3) {
      puVar2 = PTR_PTR_1126b9368;
      func_0x00010c0f4540(PTR_PTR_1126b9368);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105463b78;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_105463b78:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105463bb0; end: 10546424f; -[SCAdTrackEventParserAlgorithmV1 parseResultForTrackEventSequences:instantPageEvents:adType:isCollectionInstantPageAd:preferredAttachmentType:actualAttachmentType:] */

void FUN_105463bb0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,uint param_6,ulong param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf8f280();
  _objc_release(uVar4);
  if ((param_7 & 0xfffffffffffffffe) == 4) {
    param_6 = 1;
  }
  uVar1 = 0;
  if (param_5 == 10) {
    uVar1 = param_6;
  }
  if (((((uVar1 & 1) == 0) && ((uVar5 & 1) == 0)) && (param_5 != 6)) && (param_5 != 3)) {
    if (param_5 != 1) {
      puVar16 = PTR_PTR_1126b9348;
      func_0x00010bfe6000(PTR_PTR_1126b9348);
      _objc_retainAutoreleasedReturnValue();
      goto joined_r0x0001054641bc;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f480();
    _objc_release(uVar6);
    if ((int)uVar2 != 0) goto LAB_105463cb4;
    puVar7 = *(undefined **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(puVar7);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    puVar18 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_3;
    func_0x00010c089820(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar16 = puVar18;
    FUN_105463ac0(puVar18,puVar19,puVar7,uVar2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(puVar16);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(uVar2);
  }
  else {
LAB_105463cb4:
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar2);
    _objc_retain(uVar6);
    puVar7 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined *)0x0;
    if (param_5 < 6) {
      if (param_5 == 1) {
        puVar16 = PTR_PTR_1126b9370;
        func_0x00010c0f4440(PTR_PTR_1126b9370);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_5 == 3) {
        puVar17 = PTR_PTR_1126b9368;
        func_0x00010c0f4560(PTR_PTR_1126b9368);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126b9368;
        func_0x00010c0f4520();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        if (puVar19 != (undefined *)0x0) {
          func_0x00010c2bcde0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105464170;
        }
      }
    }
    else if (param_5 == 6) {
      uVar14 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bf1f480();
      _objc_release(uVar14);
      if ((int)uVar15 == 0) {
        func_0x00010bf09f80(puVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR_PTR_1126b9370;
        func_0x00010c0f4440();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR_PTR_1126b9360;
        func_0x00010c2646a0();
        puVar17 = puVar20;
        func_0x00010c264640();
        if (puVar17 < puVar16) {
          puVar16 = puVar20;
          func_0x00010c2bab40(puVar20);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          puVar20 = puVar16;
        }
        puVar17 = PTR_PTR_1126b9360;
        func_0x00010c0f44c0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar20;
        if (puVar17 != (undefined *)0x0) {
          func_0x00010c2ac0e0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
        }
        goto LAB_105464170;
      }
      puVar16 = PTR_PTR_1126b9360;
      func_0x00010c0f4480(PTR_PTR_1126b9360);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_5 == 10) {
      puVar19 = PTR_PTR_1126b9390;
      func_0x00010c0f44e0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126b9348;
      func_0x00010bfe6000();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar17;
      func_0x00010c2aa900();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar19;
      func_0x00010bf3fea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      puVar9 = puVar20;
      func_0x00010c2bab40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar19;
      func_0x00010bf3fea0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1fe40();
      puVar12 = puVar9;
      func_0x00010c2a9840(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000105464d14();
      puVar16 = puVar12;
      func_0x00010c2a89a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar20);
LAB_105464170:
      _objc_release(puVar17);
      _objc_release(puVar19);
    }
    _objc_release();
    _objc_release(puVar18);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(param_4);
    puVar7 = param_3;
  }
  _objc_release(puVar7);
joined_r0x0001054641bc:
  puVar7 = puVar16;
  if ((int)uVar3 != 0) {
    puVar18 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    FUN_105467574();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2e20(puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar19);
    _objc_release(puVar18);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105464250; end: 10546427f; -[SCAdTrackEventParserAlgorithmV1 .cxx_destruct] */

void FUN_105464250(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105464280; end: 105464297;  */

void FUN_105464280(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105464298; end: 10546442b;  */

void FUN_105464298(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0f4880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546442c; end: 10546443b;  */

void FUN_10546442c(void)

{
  return;
}



/* Entry: 10546443c; end: 10546473f;  */

undefined ** FUN_10546443c(undefined **param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **unaff_x20;
  long lVar7;
  undefined **ppuVar8;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *puVar9;
  undefined **unaff_x27;
  int iVar10;
  undefined **unaff_x28;
  undefined **ppuVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined **ppuStack_680;
  undefined8 uStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_570;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined1 ***pppuStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_430;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined1 **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_300;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = param_1;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_1);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined8 *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    ppuStack_268 = ppuVar2;
    _objc_retain(param_1);
    ppuStack_270 = param_1;
    func_0x00010bf52a60();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if (param_1 != (undefined **)0x0) {
      unaff_x23 = &puStack_170;
      unaff_x26 = (undefined **)*puStack_130;
      unaff_d8 = 0x3032000000;
      unaff_d9 = 0xc2000000;
      unaff_x24 = (undefined **)&UNK_110887630;
      unaff_x27 = &PTR___NSConcreteGlobalBlock_11088aad0;
      unaff_x28 = &PTR___NSConcreteGlobalBlock_11088aab0;
      unaff_x20 = &PTR___NSConcreteGlobalBlock_11088aa70;
      do {
        unaff_x22 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_130 != unaff_x26) {
            _objc_enumerationMutation(ppuStack_270);
          }
          puStack_170 = (undefined *)0x0;
          uStack_160 = 0x3032000000;
          pcStack_158 = FUN_105464280;
          uStack_150 = 0x105464290;
          uStack_148 = 0;
          puStack_198 = puVar9;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_105464298;
          puStack_180 = &UNK_11088aa40;
          puStack_1c0 = puVar9;
          uStack_1b8 = 0xc2000000;
          uStack_1b0 = 0x1054642d8;
          puStack_1a8 = &UNK_110887570;
          puStack_1e8 = puVar9;
          uStack_1e0 = 0xc2000000;
          uStack_1d8 = 0x10546432c;
          puStack_1d0 = &UNK_1108875a0;
          puStack_210 = puVar9;
          uStack_208 = 0xc2000000;
          uStack_200 = 0x10546436c;
          puStack_1f8 = &UNK_1108875d0;
          puStack_238 = puVar9;
          uStack_230 = 0xc2000000;
          uStack_228 = 0x1054643ac;
          puStack_220 = &UNK_110887600;
          puStack_260 = puVar9;
          uStack_258 = 0xc2000000;
          uStack_250 = 0x1054643ec;
          puStack_248 = &UNK_110887630;
          ppuStack_280 = &PTR___NSConcreteGlobalBlock_11088aab0;
          ppuStack_278 = &PTR___NSConcreteGlobalBlock_11088aad0;
          ppuStack_290 = &PTR___NSConcreteGlobalBlock_11088aa70;
          ppuStack_288 = &PTR___NSConcreteGlobalBlock_11088aa90;
          ppuStack_240 = unaff_x23;
          ppuStack_218 = unaff_x23;
          ppuStack_1f0 = unaff_x23;
          ppuStack_1c8 = unaff_x23;
          ppuStack_1a0 = unaff_x23;
          ppuStack_178 = unaff_x23;
          ppuStack_168 = unaff_x23;
          func_0x00010c0be9e0(*(undefined8 *)(lStack_138 + (long)unaff_x22 * 8));
          puVar3 = ppuStack_168[5];
          func_0x00010c08fa60();
          if (puVar3 != (undefined *)0x0) {
            func_0x00010befa120(ppuStack_268);
          }
          __Block_object_dispose(&puStack_170,8);
          _objc_release(uStack_148);
          unaff_x22 = (undefined **)((long)unaff_x22 + 1);
        } while (param_1 != unaff_x22);
        param_1 = ppuStack_270;
        func_0x00010bf52a60();
        unaff_x25 = (undefined **)puVar9;
      } while (param_1 != (undefined **)0x0);
    }
    _objc_release(ppuStack_270);
    _objc_release(ppuStack_270);
    ppuVar4 = ppuStack_268;
    ppuVar2 = ppuStack_268;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    param_1 = ppuStack_270;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = param_1;
  __Unwind_Resume();
  pcStack_298 = FUN_105464740;
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2f0 = unaff_x28;
  ppuStack_2e8 = unaff_x27;
  ppuStack_2e0 = unaff_x26;
  ppuStack_2d8 = unaff_x25;
  ppuStack_2d0 = unaff_x24;
  ppuStack_2c8 = unaff_x23;
  ppuStack_2c0 = unaff_x22;
  ppuStack_2b8 = ppuVar2;
  ppuStack_2b0 = unaff_x20;
  ppuStack_2a8 = param_1;
  puStack_2a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  ppuVar2 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    puStack_3b0 = (undefined8 *)0x0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    _objc_retain(ppuVar4);
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x23 = (undefined **)*puStack_3b0;
      unaff_x24 = (undefined **)&UNK_10ddaf25c;
      do {
        param_1 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_3b0 != unaff_x23) {
            _objc_enumerationMutation(ppuVar4);
          }
          unaff_x25 = *(undefined ***)(lStack_3b8 + (long)param_1 * 8);
          _objc_retain(unaff_x25);
          ppuVar11 = unaff_x25;
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar11 == (undefined **)0x0) {
            puVar9 = (undefined *)0x0;
          }
          else {
            puVar9 = ppuVar11[3];
          }
          _objc_release();
          ppuVar11 = unaff_x25;
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar11 == (undefined **)0x0) {
            unaff_x27 = (undefined **)0x0;
          }
          else {
            unaff_x27 = (undefined **)ppuVar11[5];
          }
          _objc_release();
          unaff_x26 = &PTR____CFConstantStringClassReference_110ddf318;
          switch(puVar9) {
          case (undefined *)0x1:
            break;
          case (undefined *)0x2:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf338;
            break;
          case (undefined *)0x3:
            ppuVar11 = unaff_x25;
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar11 == (undefined **)0x0) {
              unaff_x27 = (undefined **)0x0;
            }
            else {
              unaff_x27 = (undefined **)ppuVar11[0x10];
            }
            _objc_retain(unaff_x27);
            unaff_x28 = unaff_x27;
            func_0x00010c0720c0();
            _objc_release(unaff_x27);
            _objc_release(ppuVar11);
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf378;
            if (((ulong)unaff_x28 & 1) == 0) {
              ppuVar11 = unaff_x25;
              func_0x00010bf428e0();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar11 == (undefined **)0x0) {
                unaff_x27 = (undefined **)0x0;
              }
              else {
                unaff_x27 = (undefined **)ppuVar11[0x10];
              }
              _objc_retain(unaff_x27);
              unaff_x28 = unaff_x27;
              func_0x00010c0720c0();
              _objc_release(unaff_x27);
              _objc_release(ppuVar11);
              iVar10 = (int)unaff_x28;
              ppuVar11 = &PTR____CFConstantStringClassReference_110ddd7d8;
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf3b8;
code_r0x000105464a50:
              if (iVar10 == 0) {
                unaff_x26 = ppuVar11;
              }
            }
            break;
          case (undefined *)0x4:
            ppuVar11 = unaff_x25;
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar11 == (undefined **)0x0) {
              unaff_x27 = (undefined **)0x0;
            }
            else {
              unaff_x27 = (undefined **)ppuVar11[0x10];
            }
            _objc_retain(unaff_x27);
            unaff_x28 = unaff_x27;
            func_0x00010c0720c0();
            _objc_release(unaff_x27);
            _objc_release(ppuVar11);
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf3f8;
            if (((ulong)unaff_x28 & 1) == 0) {
              ppuVar11 = unaff_x25;
              func_0x00010bf428e0();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar11 == (undefined **)0x0) {
                unaff_x27 = (undefined **)0x0;
              }
              else {
                unaff_x27 = (undefined **)ppuVar11[0x10];
              }
              _objc_retain(unaff_x27);
              unaff_x28 = unaff_x27;
              func_0x00010c0720c0();
              _objc_release(unaff_x27);
              _objc_release(ppuVar11);
              iVar10 = (int)unaff_x28;
              ppuVar11 = &PTR____CFConstantStringClassReference_110ddf438;
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf418;
              goto code_r0x000105464a50;
            }
            break;
          case (undefined *)0x5:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf458;
            break;
          case (undefined *)0x6:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf478;
            break;
          case (undefined *)0x7:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf498;
            break;
          case (undefined *)0x8:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf4b8;
            break;
          case (undefined *)0x9:
            unaff_x27 = unaff_x25;
            func_0x00010bf99b20();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 == (undefined **)0x0) {
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf4f8;
            }
            else {
              bVar1 = *(char *)(unaff_x27 + 1) == '\0';
              ppuVar11 = &PTR____CFConstantStringClassReference_110ddf4f8;
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf4d8;
code_r0x000105464aec:
              if (bVar1) {
                unaff_x26 = ppuVar11;
              }
            }
            goto code_r0x000105464af0;
          case (undefined *)0xa:
            unaff_x27 = unaff_x25;
            func_0x00010bf99b20();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 != (undefined **)0x0) {
              bVar1 = *(char *)(unaff_x27 + 1) == '\0';
              ppuVar11 = &PTR____CFConstantStringClassReference_110ddf538;
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf518;
              goto code_r0x000105464aec;
            }
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf538;
            goto code_r0x000105464af0;
          case (undefined *)0xb:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf558;
            break;
          case (undefined *)0xc:
            unaff_x27 = unaff_x25;
            func_0x00010bf99b20();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 != (undefined **)0x0) {
              bVar1 = *(char *)((long)unaff_x27 + 0xb) == '\0';
              ppuVar11 = &PTR____CFConstantStringClassReference_110ddf598;
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf578;
              goto code_r0x000105464aec;
            }
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf598;
code_r0x000105464af0:
            _objc_retain(unaff_x26);
            _objc_release(unaff_x27);
            break;
          case (undefined *)0xd:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf5b8;
            break;
          case (undefined *)0xe:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf5d8;
            break;
          case (undefined *)0xf:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf5f8;
            break;
          case (undefined *)0x10:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf618;
            break;
          case (undefined *)0x11:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf638;
            break;
          case (undefined *)0x12:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf658;
            break;
          default:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf698;
            switch(unaff_x27) {
            case (undefined **)0x0:
              break;
            case (undefined **)0x1:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf6b8;
              break;
            case (undefined **)0x2:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf6d8;
              break;
            case (undefined **)0x3:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf6f8;
              break;
            case (undefined **)0x4:
              unaff_x27 = unaff_x25;
              func_0x00010bf99b20();
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x27 != (undefined **)0x0) {
                bVar1 = *(char *)(unaff_x27 + 1) == '\0';
                ppuVar11 = &PTR____CFConstantStringClassReference_110ddf738;
                unaff_x26 = &PTR____CFConstantStringClassReference_110ddf718;
                goto code_r0x000105464aec;
              }
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf738;
              goto code_r0x000105464af0;
            case (undefined **)0x5:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf758;
              break;
            case (undefined **)0x6:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf778;
              break;
            case (undefined **)0x7:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf798;
              break;
            case (undefined **)0x8:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf7b8;
              break;
            case (undefined **)0x9:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf7d8;
              break;
            case (undefined **)0xa:
              unaff_x26 = &PTR____CFConstantStringClassReference_110ddf7f8;
              break;
            default:
              unaff_x26 = &PTR____CFConstantStringClassReference_110db6c78;
            }
            break;
          case (undefined *)0x15:
            unaff_x26 = &PTR____CFConstantStringClassReference_110ddf678;
          }
          _objc_release(unaff_x25);
          func_0x00010befa120(unaff_x20);
          _objc_release(unaff_x26);
          param_1 = (undefined **)((long)param_1 + 1);
        } while (ppuVar2 != param_1);
        ppuVar2 = ppuVar4;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    ppuVar2 = unaff_x20;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
  }
  ppuVar11 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_3c8 = 0x105464d14;
  lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_420 = unaff_x28;
  ppuStack_418 = unaff_x27;
  ppuStack_410 = unaff_x26;
  ppuStack_408 = unaff_x25;
  ppuStack_400 = unaff_x24;
  ppuStack_3f8 = unaff_x23;
  ppuStack_3f0 = ppuVar4;
  ppuStack_3e8 = ppuVar2;
  ppuStack_3e0 = unaff_x20;
  ppuStack_3d8 = param_1;
  ppuStack_3d0 = &puStack_2a0;
  _objc_retain();
  lStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  puStack_4e0 = (undefined8 *)0x0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  ppuVar2 = ppuVar11;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar5 == (undefined **)0x0) {
    _objc_release(ppuVar2);
  }
  else {
    ppuVar8 = (undefined **)0x0;
    unaff_x27 = (undefined **)*puStack_4e0;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4e0 != unaff_x27) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x23 = *(undefined ***)(lStack_4e8 + (long)unaff_x28 * 8);
        ppuVar4 = unaff_x23;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        unaff_x24 = (undefined **)0x0;
        if (ppuVar4 != (undefined **)0x0) {
          unaff_x24 = unaff_x23;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = unaff_x24;
          func_0x00010c25e900();
          if (ppuVar4 == (undefined **)0x3) {
            _objc_release(unaff_x24);
LAB_105464e30:
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = unaff_x23;
            func_0x00010bf0d4e0();
            _objc_release(unaff_x23);
          }
          else {
            unaff_x25 = unaff_x23;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c25e900();
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            if (unaff_x26 == (undefined **)0x4) goto LAB_105464e30;
          }
          if (((ulong)ppuVar8 & 0xfffffffffffffffb) != 0) {
            _objc_release(ppuVar2);
            goto LAB_105464eb8;
          }
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar5 != unaff_x28);
      ppuVar5 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar5 != (undefined **)0x0);
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar5;
    if (((ulong)ppuVar8 & 0xfffffffffffffffb) != 0) goto LAB_105464eb8;
  }
  ppuVar8 = ppuVar11;
  FUN_105464f00();
  ppuVar5 = ppuVar4;
LAB_105464eb8:
  ppuVar4 = ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_430) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  pcStack_4f8 = FUN_105464f00;
  lStack_570 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_560 = unaff_d9;
  uStack_558 = unaff_d8;
  ppuStack_550 = unaff_x28;
  ppuStack_548 = unaff_x27;
  ppuStack_540 = unaff_x26;
  ppuStack_538 = unaff_x25;
  ppuStack_530 = unaff_x24;
  ppuStack_528 = unaff_x23;
  ppuStack_520 = ppuVar5;
  ppuStack_518 = ppuVar8;
  ppuStack_510 = ppuVar2;
  ppuStack_508 = ppuVar11;
  pppuStack_500 = &ppuStack_3d0;
  _objc_retain();
  lStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  plStack_620 = (long *)0x0;
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  _objc_retain(ppuVar4);
  ppuVar2 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuStack_680 = (undefined **)0x0;
  }
  else {
    ppuStack_680 = (undefined **)0x0;
    lVar7 = *plStack_620;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_620 != lVar7) {
          _objc_enumerationMutation(ppuVar4);
        }
        uStack_650 = 0;
        uStack_640 = 0x2020000000;
        uStack_638 = 0;
        puStack_648 = &uStack_650;
        func_0x00010c0be9e0(*(undefined8 *)(lStack_628 + (long)ppuVar11 * 8));
        lVar6 = puStack_648[3];
        if (lVar6 != 2) {
          if (lVar6 == 3) {
            ppuStack_680 = (undefined **)0x2;
          }
          else {
            if (lVar6 != 9) goto LAB_10546507c;
            ppuStack_680 = (undefined **)0x1;
          }
          __Block_object_dispose(&uStack_650,8);
          goto LAB_1054650d8;
        }
        ppuStack_680 = (undefined **)0x1;
LAB_10546507c:
        __Block_object_dispose(&uStack_650,8);
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar2 != ppuVar11);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
LAB_1054650d8:
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_570) {
    return ppuStack_680;
  }
  ___stack_chk_fail();
  __Unwind_Resume(ppuVar4);
  return ppuVar4;
}



/* Entry: 105464740; end: 105464eff;  */

undefined ** FUN_105464740(undefined **param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuStack_3f0;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_2e0;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = param_1;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    ppuVar2 = param_1;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar10 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        lVar12 = *(long *)((long)ppuVar10 * 8);
        _objc_retain(lVar12);
        lVar3 = lVar12;
        func_0x00010bf99b20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(lVar3 + 0x18);
        }
        _objc_release();
        lVar3 = lVar12;
        func_0x00010bf99b20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(lVar3 + 0x28);
        }
        _objc_release();
        ppuVar17 = &PTR____CFConstantStringClassReference_110ddf318;
        lVar3 = lVar12;
        switch(uVar13) {
        case 1:
          break;
        case 2:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf338;
          break;
        case 3:
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(ulong *)(lVar3 + 0x80);
          }
          _objc_retain(uVar15);
          uVar4 = uVar15;
          func_0x00010c0720c0();
          _objc_release(uVar15);
          _objc_release(lVar3);
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf378;
          if ((uVar4 & 1) == 0) {
            lVar3 = lVar12;
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar3 + 0x80);
            }
            _objc_retain(uVar13);
            uVar14 = uVar13;
            func_0x00010c0720c0();
            _objc_release(uVar13);
            _objc_release(lVar3);
            iVar16 = (int)uVar14;
            ppuVar8 = &PTR____CFConstantStringClassReference_110ddd7d8;
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf3b8;
code_r0x000105464a50:
            if (iVar16 == 0) {
              ppuVar17 = ppuVar8;
            }
          }
          break;
        case 4:
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(ulong *)(lVar3 + 0x80);
          }
          _objc_retain(uVar15);
          uVar4 = uVar15;
          func_0x00010c0720c0();
          _objc_release(uVar15);
          _objc_release(lVar3);
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf3f8;
          if ((uVar4 & 1) == 0) {
            lVar3 = lVar12;
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar3 + 0x80);
            }
            _objc_retain(uVar13);
            uVar14 = uVar13;
            func_0x00010c0720c0();
            _objc_release(uVar13);
            _objc_release(lVar3);
            iVar16 = (int)uVar14;
            ppuVar8 = &PTR____CFConstantStringClassReference_110ddf438;
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf418;
            goto code_r0x000105464a50;
          }
          break;
        case 5:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf458;
          break;
        case 6:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf478;
          break;
        case 7:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf498;
          break;
        case 8:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf4b8;
          break;
        case 9:
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf4f8;
          }
          else {
            bVar1 = *(char *)(lVar3 + 8) == '\0';
            ppuVar8 = &PTR____CFConstantStringClassReference_110ddf4f8;
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf4d8;
code_r0x000105464aec:
            if (bVar1) {
              ppuVar17 = ppuVar8;
            }
          }
          goto code_r0x000105464af0;
        case 10:
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            bVar1 = *(char *)(lVar3 + 8) == '\0';
            ppuVar8 = &PTR____CFConstantStringClassReference_110ddf538;
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf518;
            goto code_r0x000105464aec;
          }
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf538;
          goto code_r0x000105464af0;
        case 0xb:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf558;
          break;
        case 0xc:
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            bVar1 = *(char *)(lVar3 + 0xb) == '\0';
            ppuVar8 = &PTR____CFConstantStringClassReference_110ddf598;
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf578;
            goto code_r0x000105464aec;
          }
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf598;
code_r0x000105464af0:
          _objc_retain(ppuVar17);
          _objc_release(lVar3);
          break;
        case 0xd:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf5b8;
          break;
        case 0xe:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf5d8;
          break;
        case 0xf:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf5f8;
          break;
        case 0x10:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf618;
          break;
        case 0x11:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf638;
          break;
        case 0x12:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf658;
          break;
        default:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf698;
          switch(uVar14) {
          case 0:
            break;
          case 1:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf6b8;
            break;
          case 2:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf6d8;
            break;
          case 3:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf6f8;
            break;
          case 4:
            func_0x00010bf99b20();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 != 0) {
              bVar1 = *(char *)(lVar3 + 8) == '\0';
              ppuVar8 = &PTR____CFConstantStringClassReference_110ddf738;
              ppuVar17 = &PTR____CFConstantStringClassReference_110ddf718;
              goto code_r0x000105464aec;
            }
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf738;
            goto code_r0x000105464af0;
          case 5:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf758;
            break;
          case 6:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf778;
            break;
          case 7:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf798;
            break;
          case 8:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf7b8;
            break;
          case 9:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf7d8;
            break;
          case 10:
            ppuVar17 = &PTR____CFConstantStringClassReference_110ddf7f8;
            break;
          default:
            ppuVar17 = &PTR____CFConstantStringClassReference_110db6c78;
          }
          break;
        case 0x15:
          ppuVar17 = &PTR____CFConstantStringClassReference_110ddf678;
        }
        _objc_release(lVar12);
        func_0x00010befa120(ppuVar18);
        _objc_release(ppuVar17);
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar2 != ppuVar10);
      ppuVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    ppuVar2 = ppuVar18;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (ppuVar18 == (undefined **)0x0) {
    _objc_release(ppuVar2);
  }
  else {
    ppuVar10 = (undefined **)0x0;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(ppuVar2);
        }
        ppuVar11 = *(undefined ***)((long)ppuVar17 * 8);
        ppuVar8 = ppuVar11;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar8 = ppuVar11;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar8;
          func_0x00010c25e900();
          if (ppuVar5 == (undefined **)0x3) {
            _objc_release(ppuVar8);
LAB_105464e30:
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar11;
            func_0x00010bf0d4e0();
            _objc_release(ppuVar11);
          }
          else {
            ppuVar5 = ppuVar11;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar5;
            func_0x00010c25e900();
            _objc_release(ppuVar5);
            _objc_release(ppuVar8);
            if (ppuVar6 == (undefined **)0x4) goto LAB_105464e30;
          }
          if (((ulong)ppuVar10 & 0xfffffffffffffffb) != 0) {
            _objc_release(ppuVar2);
            goto LAB_105464eb8;
          }
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar18 != ppuVar17);
      ppuVar18 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar18 != (undefined **)0x0);
    _objc_release(ppuVar2);
    if (((ulong)ppuVar10 & 0xfffffffffffffffb) != 0) goto LAB_105464eb8;
  }
  ppuVar10 = param_1;
  FUN_105464f00();
LAB_105464eb8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  plStack_390 = (long *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  _objc_retain(param_1);
  ppuVar2 = param_1;
  func_0x00010bf52a60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuStack_3f0 = (undefined **)0x0;
  }
  else {
    ppuStack_3f0 = (undefined **)0x0;
    lVar7 = *plStack_390;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if (*plStack_390 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        uStack_3c0 = 0;
        uStack_3b0 = 0x2020000000;
        uStack_3a8 = 0;
        puStack_3b8 = &uStack_3c0;
        func_0x00010c0be9e0(*(undefined8 *)(lStack_398 + (long)ppuVar18 * 8));
        lVar9 = puStack_3b8[3];
        if (lVar9 != 2) {
          if (lVar9 == 3) {
            ppuStack_3f0 = (undefined **)0x2;
          }
          else {
            if (lVar9 != 9) goto LAB_10546507c;
            ppuStack_3f0 = (undefined **)0x1;
          }
          __Block_object_dispose(&uStack_3c0,8);
          goto LAB_1054650d8;
        }
        ppuStack_3f0 = (undefined **)0x1;
LAB_10546507c:
        __Block_object_dispose(&uStack_3c0,8);
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar2 != ppuVar18);
      ppuVar2 = param_1;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
LAB_1054650d8:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
    return ppuStack_3f0;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
  return param_1;
}



/* Entry: 105464f00; end: 10546514b;  */

long FUN_105464f00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_190;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    lStack_190 = 0;
  }
  else {
    lStack_190 = 0;
    lVar3 = *plStack_130;
    do {
      lVar4 = 0;
      do {
        if (*plStack_130 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uStack_160 = 0;
        uStack_150 = 0x2020000000;
        uStack_148 = 0;
        puStack_158 = &uStack_160;
        func_0x00010c0be9e0(*(undefined8 *)(lStack_138 + lVar4 * 8));
        lVar2 = puStack_158[3];
        if (lVar2 != 2) {
          if (lVar2 == 3) {
            lStack_190 = 2;
          }
          else {
            if (lVar2 != 9) goto LAB_10546507c;
            lStack_190 = 1;
          }
          __Block_object_dispose(&uStack_160,8);
          goto LAB_1054650d8;
        }
        lStack_190 = 1;
LAB_10546507c:
        __Block_object_dispose(&uStack_160,8);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_1054650d8:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Unwind_Resume(param_1);
    return param_1;
  }
  return lStack_190;
}



/* Entry: 10546514c; end: 10546514f;  */

void FUN_10546514c(void)

{
  return;
}



/* Entry: 105465150; end: 10546517f;  */

void FUN_105465150(long param_1,undefined8 param_2)

{
  func_0x00010c068280();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105465180; end: 10546519f;  */

void FUN_105465180(void)

{
  return;
}



/* Entry: 1054651a0; end: 10546535b;  */

undefined * FUN_1054651a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      puVar4 = puVar1;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar6 = *(long *)(lStack_128 + lVar8 * 8);
        func_0x00010befa120(puVar4);
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010c25e900();
        _objc_release(lVar6);
        puVar1 = puVar4;
        if (lVar3 == 2) {
          func_0x00010befa120(puVar5);
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
        }
        lVar8 = lVar8 + 1;
        puVar4 = puVar1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010befa120(puVar5);
  }
  _objc_release(puVar1);
  lVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10546535c;
  uStack_160 = unaff_x22;
  puStack_158 = puVar1;
  puStack_150 = puVar5;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0xffffffffffffffff;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 0xffffffffffffffff;
  func_0x00010bf97f00(lVar2);
  puVar5 = (undefined *)puStack_178[3];
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 10546535c; end: 10546547f;  */

undefined8 FUN_10546535c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  func_0x00010bf97f00(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105465480; end: 105465613;  */

void FUN_105465480(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0be9e0(param_2);
  if ((*(byte *)(puStack_48 + 3) & 1) == 0) {
    if ((*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < 0) ||
       (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) < 0)) goto LAB_1054655d4;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
  *param_4 = 1;
LAB_1054655d4:
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return;
}



/* Entry: 105465614; end: 105465707;  */

void FUN_105465614(long param_1,long param_2)

{
  func_0x00010c25e900();
  if (param_2 == 3) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



/* Entry: 105465708; end: 105465727;  */

void FUN_105465708(void)

{
  return;
}



/* Entry: 105465728; end: 10546584b;  */

undefined8 FUN_105465728(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  func_0x00010bf97f00(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10546584c; end: 105465987;  */

void FUN_10546584c(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c068380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c068280();
  _objc_release(param_2);
  uVar2 = 0;
  if (lVar3 < 5) {
    if (lVar3 < 3) {
      if ((lVar3 == -1) || (lVar3 == 1)) goto LAB_10546594c;
    }
    else {
      if (lVar3 == 3) {
        lVar3 = *(long *)(param_1 + 0x28);
        goto LAB_105465920;
      }
      if (lVar3 == 4) {
        if ((*(char *)(param_1 + 0x40) == '\x01') &&
           (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) < 0)) {
          bVar1 = (byte)((ulong)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) >>
                        0x3f);
        }
        else {
          bVar1 = 0;
        }
        **(byte **)(param_1 + 0x38) = bVar1;
      }
    }
  }
  else {
    if (lVar3 - 5U < 3) goto LAB_10546594c;
    if (lVar3 == 9) {
      lVar3 = *(long *)(param_1 + 0x20);
LAB_105465920:
      *(undefined8 *)(*(long *)(lVar3 + 8) + 0x18) = param_3;
    }
    else if (lVar3 == 10) goto LAB_10546594c;
  }
  if ((*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) < 0) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < 0)) {
    return;
  }
  uVar2 = 1;
LAB_10546594c:
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  *param_4 = 1;
  return;
}



/* Entry: 105465988; end: 105465b53;  */

undefined8 FUN_105465988(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0xffffffffffffffff;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0xffffffffffffffff;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  func_0x00010bf97f00(param_1);
  if (((*(char *)(puStack_e8 + 3) == '\x01') && (puStack_a8[3] == -1)) && (puStack_c8[3] == -1)) {
    puStack_48[3] = 0;
  }
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105465b54; end: 105465d7b;  */

void FUN_105465b54(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105465c8c;
  puStack_48 = &UNK_11088ade0;
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105465d0c;
  puStack_80 = &UNK_11088ae10;
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = param_3;
  uStack_28 = param_3;
  func_0x00010c0be9e0(param_2,param_2,&puStack_60,&puStack_98,&PTR___NSConcreteGlobalBlock_11088ae40
                      ,&PTR___NSConcreteGlobalBlock_11088ae60,&PTR___NSConcreteGlobalBlock_11088ae80
                      ,&PTR___NSConcreteGlobalBlock_11088aea0,&PTR___NSConcreteGlobalBlock_11088aec0
                      ,&PTR___NSConcreteGlobalBlock_11088aee0,&PTR___NSConcreteGlobalBlock_11088af00
                      ,&PTR___NSConcreteGlobalBlock_11088af20);
  if ((-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18)) &&
     (((-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) ||
       (-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))) ||
      (-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18))))) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 105465d7c; end: 105465d9b;  */

void FUN_105465d7c(void)

{
  return;
}



/* Entry: 105465d9c; end: 105465f93;  */

undefined8 FUN_105465d9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0xffffffffffffffff;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0xffffffffffffffff;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0xffffffffffffffff;
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x2020000000;
  uStack_f8 = 0xffffffffffffffff;
  func_0x00010bf97f00(param_1);
  if (((*(char *)(puStack_68 + 3) == '\x01') && (puStack_e8[3] == -1)) && (puStack_108[3] == -1)) {
    puStack_48[3] = 0;
  }
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_110,8);
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105465f94; end: 105466157;  */

void FUN_105465f94(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c098ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c25e900();
  _objc_release(lVar3);
  if (lVar2 == 3) {
    lVar3 = 0x20;
LAB_105466058:
    *(undefined8 *)(*(long *)(*(long *)(param_1 + lVar3) + 8) + 0x18) = param_3;
  }
  else {
    lVar3 = param_2;
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c25e900();
    _objc_release(lVar3);
    if (lVar2 == 7) {
      lVar3 = 0x28;
      goto LAB_105466058;
    }
    lVar3 = param_2;
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c25e900();
    _objc_release(lVar3);
    if (lVar2 == 0xc) {
      lVar3 = 0x30;
      goto LAB_105466058;
    }
  }
  lVar3 = param_2;
  func_0x00010c068380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c068280();
  _objc_release(lVar3);
  uVar1 = lVar2 + 1;
  if (uVar1 < 0xc) {
    if ((1L << (uVar1 & 0x3f) & 0x9c5U) == 0) {
      if (uVar1 == 4) {
        lVar3 = *(long *)(param_1 + 0x48);
      }
      else {
        if (uVar1 != 10) goto LAB_1054660dc;
        lVar3 = *(long *)(param_1 + 0x40);
      }
      *(undefined8 *)(*(long *)(lVar3 + 8) + 0x18) = param_3;
    }
    else {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    }
  }
LAB_1054660dc:
  if ((-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18)) &&
     ((((-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) ||
        (-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18))) ||
       (-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))) ||
      (-1 < *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18))))) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105466158; end: 10546624f;  */

void FUN_105466158(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 105466250; end: 10546684f;  */

ulong FUN_105466250(ulong param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
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
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_148;
  ulong uStack_138;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  uStack_148 = param_1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (uStack_148 == 0) {
    _objc_release(param_1);
    uVar11 = 0;
    uVar16 = 0;
LAB_105466784:
    uVar13 = param_1;
    FUN_105466850();
LAB_105466790:
    if ((long)uVar13 < 1) {
      *param_3 = 0;
      goto LAB_1054667d4;
    }
  }
  else {
    uVar11 = 0;
    uVar16 = 0;
    uVar13 = 0;
    do {
      uVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uVar14 = *(ulong *)(uVar15 * 8);
        uVar7 = uVar14;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c25e900();
        _objc_release(uVar7);
        uVar7 = uVar11;
        uVar9 = uVar16;
        if (uVar8 == 3) {
          uVar16 = uVar11;
          uVar7 = uVar14;
          if (uVar11 != 0) {
            uVar7 = uVar11;
          }
LAB_105466388:
          _objc_retain();
          _objc_release(uVar16);
          uVar11 = uVar7;
          uVar16 = uVar9;
        }
        else {
          uVar8 = uVar14;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c25e900();
          _objc_release(uVar8);
          if (uVar9 == 4) {
            uVar9 = uVar14;
            if (uVar16 != 0) {
              uVar9 = uVar16;
            }
            goto LAB_105466388;
          }
        }
        if (uVar16 != 0) {
          uVar7 = uVar14;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf68580();
          if (uVar8 == 0) {
            uVar9 = uVar14;
            func_0x00010bf684c0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar9;
            func_0x00010bf68580();
            _objc_release(uVar9);
          }
          _objc_release(uVar7);
          if (uVar8 == 7) {
            _objc_retain(uVar14);
            uStack_138 = uVar14;
          }
          else {
            if ((uVar8 == 4) || (uVar8 == 8)) {
              _objc_release(param_1);
              uVar13 = 1;
              goto LAB_1054667d4;
            }
            uStack_138 = 0;
          }
          uVar7 = uVar14;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c25e900();
          _objc_release(uVar7);
          if (uVar8 == 7) {
            _objc_retain();
            uVar7 = 0;
            uVar8 = 0;
            uVar9 = 0;
            uVar10 = uVar14;
            uVar12 = 0;
LAB_10546663c:
            uVar14 = 0;
LAB_105466644:
            if (((((uVar8 == 0) && (uStack_138 == 0)) && (uVar9 == 0)) &&
                ((uVar10 == 0 && (uVar12 == 0)))) && (uVar7 == 0)) goto LAB_105466720;
          }
          else {
            uVar7 = uVar14;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c25e900();
            _objc_release(uVar7);
            if (uVar8 == 6) {
              _objc_retain();
              uVar10 = 0;
              uVar7 = 0;
              uVar8 = 0;
              uVar9 = uVar14;
              uVar12 = 0;
              goto LAB_10546663c;
            }
            uVar7 = uVar14;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c25e900();
            _objc_release(uVar7);
            if (uVar8 == 8) {
              _objc_retain();
              uVar9 = 0;
              uVar10 = 0;
              uVar7 = 0;
              uVar8 = 0;
              uVar12 = uVar14;
              goto LAB_10546663c;
            }
            uVar7 = uVar14;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c25e900();
            if (uVar8 != 10) {
              _objc_release(uVar7);
LAB_105466568:
              uVar7 = uVar14;
              func_0x00010c068380();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c068280();
              _objc_release(uVar7);
              if (uVar8 == 5) {
                _objc_retain();
                uVar9 = 0;
                uVar10 = 0;
                uVar12 = 0;
                uVar7 = uVar14;
                uVar8 = 0;
              }
              else {
                uVar7 = uVar14;
                func_0x00010c098ba0();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x00010c2a47e0();
                if (uVar8 == 0) {
                  _objc_release(uVar7);
                }
                else {
                  uVar8 = uVar14;
                  func_0x00010c098ba0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = uVar8;
                  func_0x00010c2a47e0();
                  _objc_release(uVar8);
                  _objc_release(uVar7);
                  if (uVar9 != 8) {
                    _objc_retain(uVar14);
                    uVar9 = 0;
                    uVar10 = 0;
                    uVar12 = 0;
                    uVar7 = 0;
                    uVar8 = uVar14;
                    goto LAB_10546663c;
                  }
                }
                uVar9 = 0;
                uVar10 = 0;
                uVar12 = 0;
                uVar7 = 0;
                uVar8 = 0;
              }
              goto LAB_10546663c;
            }
            uVar8 = uVar14;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c079060();
            _objc_release(uVar8);
            _objc_release(uVar7);
            if ((int)uVar9 == 0) goto LAB_105466568;
            _objc_retain(uVar14);
            uVar9 = 0;
            uVar10 = 0;
            uVar12 = 0;
            uVar7 = 0;
            uVar8 = 0;
            if (uVar14 == 0) goto LAB_105466644;
          }
          if ((*param_3 & 0xfffffffffffffffb) == 0) {
            uVar1 = uVar16;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010bf0d4e0();
            *param_3 = uVar2;
            _objc_release(uVar1);
          }
          uVar13 = uVar13 + 1;
          _objc_release(uVar11);
          _objc_release(uVar16);
          _objc_release(uVar9);
          _objc_release(uVar10);
          _objc_release(uVar12);
          _objc_release(uVar7);
          _objc_release(uStack_138);
          _objc_release(uVar8);
          _objc_release(uVar14);
          uVar11 = 0;
          uVar16 = 0;
        }
LAB_105466720:
        uVar15 = uVar15 + 1;
      } while (uStack_148 != uVar15);
      uStack_148 = param_1;
      func_0x00010bf52a60();
    } while (uStack_148 != 0);
    _objc_release(param_1);
    if (uVar13 != 0) goto LAB_105466790;
    if ((uVar11 == 0) || (lVar3 = param_2, func_0x00010bf529e0(), lVar3 == 0)) goto LAB_105466784;
    uVar13 = 1;
  }
  if ((*param_3 & 0xfffffffffffffffb) == 0) {
    uVar15 = uVar11;
    if (uVar16 != 0) {
      uVar15 = uVar16;
    }
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar15;
    func_0x00010bf0d4e0();
    *param_3 = uVar7;
    _objc_release(uVar15);
  }
LAB_1054667d4:
  _objc_release(uVar16);
  _objc_release(uVar11);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain();
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x3032000000;
    pcStack_1c8 = FUN_105464280;
    uStack_1c0 = 0x105464290;
    uStack_1b8 = 0;
    puStack_208 = &uStack_210;
    uStack_210 = 0;
    uStack_200 = 0x3032000000;
    pcStack_1f8 = FUN_105464280;
    uStack_1f0 = 0x105464290;
    uStack_1e8 = 0;
    dVar17 = 1.60807493534087e-314;
    func_0x00010bf97f00(param_1);
    if ((puStack_1d8[5] == 0) || (lVar3 = puStack_208[5], lVar3 == 0)) {
      uVar16 = 0;
    }
    else {
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      uVar4 = puStack_1d8[5];
      dVar18 = dVar17;
      func_0x00010bf428e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      _objc_release(uVar4);
      _objc_release(lVar3);
      dVar19 = 0.0;
      if (0.0 <= dVar17 - dVar18) {
        dVar19 = dVar17 - dVar18;
      }
      uVar5 = 0;
      if (dVar19 < 400.0) {
        uVar5 = (uint)(0.0 < dVar19);
      }
      uVar16 = (ulong)uVar5;
    }
    __Block_object_dispose(&uStack_210,8);
    _objc_release(uStack_1e8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(uStack_1b8);
    _objc_release(param_1);
    return uVar16;
  }
  return uVar13;
}



/* Entry: 105466850; end: 1054669ef;  */

bool FUN_105466850(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105464280;
  uStack_50 = 0x105464290;
  uStack_48 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105464280;
  uStack_80 = 0x105464290;
  uStack_78 = 0;
  dVar4 = 1.60807493534087e-314;
  func_0x00010bf97f00(param_1);
  if ((puStack_68[5] == 0) || (lVar1 = puStack_98[5], lVar1 == 0)) {
    bVar3 = false;
  }
  else {
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar2 = puStack_68[5];
    dVar5 = dVar4;
    func_0x00010bf428e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    dVar6 = 0.0;
    if (0.0 <= dVar4 - dVar5) {
      dVar6 = dVar4 - dVar5;
    }
    bVar3 = false;
    if (dVar6 < 400.0) {
      bVar3 = 0.0 < dVar6;
    }
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_1);
  return bVar3;
}



/* Entry: 1054669f0; end: 105466b4f;  */

void FUN_1054669f0(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c098ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c25e900();
  if (lVar1 == 3) {
    _objc_release(lVar4);
LAB_105466a78:
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = param_2;
    _objc_release(uVar3);
  }
  else {
    lVar1 = param_2;
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25e900();
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar2 == 4) goto LAB_105466a78;
  }
  lVar4 = param_2;
  func_0x00010c098ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c25e900();
  if (lVar1 == 10) {
    _objc_release(lVar4);
  }
  else {
    lVar1 = param_2;
    func_0x00010c068380();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c068280();
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar2 != 4) goto LAB_105466b10;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = param_2;
  _objc_release(uVar3);
LAB_105466b10:
  if ((*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0)) {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105466b50; end: 105466d77;  */

double FUN_105466b50(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *unaff_x25;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined *puStack_4a8;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_428;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  dVar31 = 0.0;
  puVar3 = param_1;
  func_0x00010bf52a60();
  puVar22 = puRam0000000000000000;
  if (puVar3 == (undefined *)0x0) {
    dVar28 = 0.0;
    puVar22 = unaff_x25;
  }
  else {
    dVar28 = 0.0;
    dVar30 = -1.0;
    do {
      puVar23 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar22) {
          _objc_enumerationMutation(param_1);
        }
        lVar18 = *(long *)((long)puVar23 * 8);
        lVar4 = lVar18;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c25e900();
        if (lVar5 == 2) {
          _objc_release(lVar4);
LAB_105466c44:
          if (dVar30 <= 0.0) {
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            dVar30 = dVar31;
LAB_105466cf4:
            _objc_release(lVar18);
          }
        }
        else {
          lVar5 = lVar18;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c073520();
          _objc_release(lVar5);
          _objc_release(lVar4);
          if ((int)lVar6 != 0) goto LAB_105466c44;
          lVar4 = lVar18;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c25e900();
          if (lVar5 == 8) {
            bVar2 = true;
          }
          else {
            lVar5 = lVar18;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c25e900();
            bVar2 = lVar6 == 10;
            _objc_release(lVar5);
          }
          _objc_release(lVar4);
          if ((bVar2) && (0.0 < dVar30)) {
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            dVar31 = dVar31 - dVar30;
            dVar28 = dVar28 + dVar31;
            dVar30 = -1.0;
            goto LAB_105466cf4;
          }
        }
        puVar23 = puVar23 + 1;
      } while (puVar3 != puVar23);
      puVar3 = param_1;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return dVar28;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar23 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  dVar31 = 0.0;
  _objc_retain(param_1);
  puStack_2d0 = param_1;
  func_0x00010bf52a60();
  puVar3 = puRam0000000000000000;
  if (puStack_2d0 == (undefined *)0x0) {
    _objc_release(param_1);
    puStack_2a0 = (undefined *)0x0;
    puStack_298 = (undefined *)0x0;
    puStack_2c8 = (undefined *)0x0;
    puStack_2c0 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    puVar27 = (undefined *)0x0;
    puStack_2b0 = (undefined *)0x0;
    puStack_2a8 = (undefined *)0x0;
    puStack_2b8 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
    puVar24 = (undefined *)0x0;
    puVar26 = (undefined *)0x0;
    dVar28 = 0.0;
    puVar16 = param_2;
LAB_10546733c:
    if (puStack_298 == (undefined *)0x0 && puStack_2a0 == (undefined *)0x0) {
      puStack_2a0 = (undefined *)0x0;
      puStack_298 = (undefined *)0x0;
      goto LAB_10546739c;
    }
    if (puStack_2c8 == (undefined *)0x0 && puStack_2c0 == (undefined *)0x0) {
      puStack_2c8 = (undefined *)0x0;
      puStack_2c0 = (undefined *)0x0;
      goto LAB_10546739c;
    }
    if (puVar26 == (undefined *)0x0 && puVar24 == (undefined *)0x0) {
      puVar24 = (undefined *)0x0;
      puVar26 = (undefined *)0x0;
      goto LAB_10546739c;
    }
    puVar3 = puStack_2a0;
    if (puStack_2a0 == (undefined *)0x0) {
      puVar3 = puStack_298;
    }
    func_0x00010bf428e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar30 = dVar31;
    _objc_release(puVar3);
    puVar3 = puVar26;
    if (puVar24 != (undefined *)0x0) {
      puVar3 = puVar24;
    }
    func_0x00010bf428e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar28 = dVar30 - dVar31;
    _objc_release(puVar3);
    dVar29 = 0.0;
    dVar31 = dVar30;
    if (0.0 <= dVar28) goto LAB_10546739c;
LAB_1054673a8:
    if (puStack_2a0 == (undefined *)0x0 && puStack_298 == (undefined *)0x0) {
      puStack_2a0 = (undefined *)0x0;
      puStack_298 = (undefined *)0x0;
      puVar7 = param_2;
    }
    else {
      puVar3 = param_2;
      func_0x00010bf529e0();
      puVar7 = param_2;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = param_2;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        dVar31 = 0.0;
        if (puVar7 != (undefined *)0x0) {
          dVar31 = *(double *)(puVar7 + 0x78);
        }
        puVar17 = puStack_2a0;
        if (puStack_2a0 == (undefined *)0x0) {
          puVar17 = puStack_298;
        }
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        _objc_release(puVar17);
        _objc_release(puVar7);
        dVar29 = 0.0;
        if (0.0 <= dVar31 - dVar30) {
          dVar29 = dVar31 - dVar30;
        }
        _objc_release(puVar3);
      }
    }
  }
  else {
    puVar26 = (undefined *)0x0;
    puVar24 = (undefined *)0x0;
    puStack_2b8 = (undefined *)0x0;
    puStack_2b0 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
    puStack_2a8 = (undefined *)0x0;
    puStack_2a0 = (undefined *)0x0;
    puVar27 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    puStack_2c8 = (undefined *)0x0;
    puStack_2c0 = (undefined *)0x0;
    puStack_298 = (undefined *)0x0;
    dVar28 = 0.0;
    do {
      puVar17 = (undefined *)0x0;
      do {
        puVar22 = puVar27;
        puVar16 = puVar26;
        if (puRam0000000000000000 != puVar3) {
          _objc_enumerationMutation(param_1);
        }
        puVar26 = *(undefined **)((long)puVar17 * 8);
        puVar7 = puVar26;
        func_0x00010bf684c0();
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar7;
        func_0x00010bf68580();
        if (puVar27 == (undefined *)0x0) {
          puVar8 = puVar26;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar8;
          func_0x00010bf68580();
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
        puVar8 = puVar21;
        dVar30 = dVar31;
        if (3 < (long)puVar27) {
          puVar11 = puStack_2b0;
          puVar25 = puStack_2b8;
          puVar10 = puVar26;
          if (puVar27 == (undefined *)0x8) goto LAB_105466ef8;
          if (puVar27 != (undefined *)0x4) goto LAB_105466f0c;
LAB_10546737c:
          _objc_release(param_1);
          dVar28 = 0.0;
          puVar26 = puVar16;
          puVar27 = puVar22;
          goto LAB_105467450;
        }
        puVar11 = puStack_2b8;
        puVar25 = puVar26;
        puVar10 = puStack_2b0;
        if ((puVar27 == (undefined *)0x1) ||
           (puVar11 = puVar21, puVar8 = puVar26, puVar25 = puStack_2b8, puVar27 == (undefined *)0x2)
           ) {
LAB_105466ef8:
          puStack_2b0 = puVar10;
          puStack_2b8 = puVar25;
          _objc_retain(puVar26);
          _objc_release(puVar11);
          puVar21 = puVar8;
          dVar30 = dVar31;
        }
LAB_105466f0c:
        puVar27 = puVar26;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar27;
        func_0x00010c25e900();
        _objc_release(puVar27);
        puVar27 = puVar16;
        puVar8 = puVar20;
        puVar11 = puVar22;
        puVar25 = puVar24;
        puVar10 = puStack_2c8;
        puVar12 = puStack_2c0;
        puVar13 = puStack_2a8;
        puVar14 = puStack_2a0;
        puVar1 = puStack_298;
        if (puVar7 == (undefined *)0x3) {
          puVar7 = puStack_298;
          puVar1 = puVar26;
          if (puStack_298 != (undefined *)0x0) {
            puVar26 = puStack_298;
            puVar1 = puStack_298;
          }
LAB_1054670e0:
          puStack_298 = puVar1;
          puStack_2a0 = puVar14;
          puStack_2a8 = puVar13;
          puStack_2c0 = puVar12;
          puStack_2c8 = puVar10;
          _objc_retain(puVar26);
          puVar16 = puVar27;
          puVar20 = puVar8;
          puVar22 = puVar11;
          puVar24 = puVar25;
LAB_1054670e8:
          _objc_release(puVar7);
        }
        else {
          puVar7 = puVar26;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c25e900();
          _objc_release(puVar7);
          if (puVar9 == (undefined *)0x4) {
            puVar7 = puStack_2a0;
            puVar14 = puVar26;
            if (puStack_2a0 != (undefined *)0x0) {
              puVar26 = puStack_2a0;
              puVar14 = puStack_2a0;
            }
            goto LAB_1054670e0;
          }
          puVar7 = puVar26;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c25e900();
          _objc_release(puVar7);
          puVar7 = puStack_2c8;
          puVar10 = puVar26;
          if (puVar9 == (undefined *)0x6) goto LAB_1054670e0;
          puVar7 = puVar26;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c25e900();
          _objc_release(puVar7);
          puVar7 = puStack_2c0;
          puVar10 = puStack_2c8;
          puVar12 = puVar26;
          if (puVar9 == (undefined *)0x7) goto LAB_1054670e0;
          puVar7 = puVar26;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c25e900();
          _objc_release(puVar7);
          puVar8 = puVar26;
          puVar7 = puVar20;
          puVar12 = puStack_2c0;
          if (puVar9 == (undefined *)0x8) goto LAB_1054670e0;
          puVar7 = puVar26;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c25e900();
          _objc_release(puVar7);
          puVar8 = puVar20;
          puVar7 = puStack_2a8;
          puVar13 = puVar26;
          if (puVar9 == (undefined *)0xa) goto LAB_1054670e0;
          puVar7 = puVar26;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c073520();
          _objc_release(puVar7);
          puVar11 = puVar26;
          puVar7 = puVar22;
          puVar13 = puStack_2a8;
          if (((ulong)puVar9 & 1) != 0) goto LAB_1054670e0;
          puVar7 = puVar26;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c068280();
          _objc_release(puVar7);
          puVar11 = puVar22;
          puVar25 = puVar26;
          puVar7 = puVar24;
          if (puVar9 == (undefined *)0x4) goto LAB_1054670e0;
          puVar7 = puVar26;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar7;
          func_0x00010c068280();
          if (puVar27 != (undefined *)0x5) goto LAB_1054670e8;
          _objc_release(puVar7);
          if (puStack_2c0 != (undefined *)0x0 || puStack_2c8 != (undefined *)0x0) {
            puVar27 = puVar26;
            puVar25 = puVar24;
            puVar7 = puVar16;
            if (puVar16 != (undefined *)0x0) {
              puVar27 = puVar16;
              puVar26 = puVar16;
            }
            goto LAB_1054670e0;
          }
          puStack_2c8 = (undefined *)0x0;
          puStack_2c0 = (undefined *)0x0;
        }
        puVar27 = puStack_2a8;
        if (puVar21 != (undefined *)0x0) {
          puVar27 = puVar21;
        }
        puVar26 = puVar20;
        if (puVar20 == (undefined *)0x0) {
          puVar26 = puVar27;
        }
        func_0x00010bf428e0(puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        dVar29 = dVar30;
        _objc_release(puVar26);
        puVar7 = puVar22;
        puVar26 = puVar16;
        if (puVar22 == (undefined *)0x0) {
          if (puStack_298 == (undefined *)0x0 && puStack_2a0 == (undefined *)0x0)
          goto LAB_105467250;
          if (((puStack_2c0 != (undefined *)0x0) || (puStack_2c8 != (undefined *)0x0)) ||
             (puStack_2b8 != (undefined *)0x0)) {
            puVar7 = puStack_2a0;
            if (puStack_2a0 == (undefined *)0x0) {
              puVar7 = puStack_298;
            }
            goto LAB_105467134;
          }
          puStack_2c0 = (undefined *)0x0;
          puStack_2b8 = (undefined *)0x0;
          puVar27 = (undefined *)0x0;
          puStack_2c8 = (undefined *)0x0;
          dVar31 = dVar29;
        }
        else {
LAB_105467134:
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          dVar31 = dVar29;
          _objc_release(puVar7);
          puVar27 = puVar22;
          if ((dVar29 != 0.0) && (dVar30 != 0.0)) {
            if ((puVar20 == (undefined *)0x0) &&
               ((puVar21 != (undefined *)0x0 || puStack_2b0 != (undefined *)0x0 &&
                (puStack_2c0 == (undefined *)0x0)))) {
              puVar20 = (undefined *)0x0;
              puStack_2c0 = (undefined *)0x0;
              goto LAB_10546737c;
            }
            dVar30 = dVar30 - dVar29;
            dVar29 = 0.0;
            if (0.0 <= dVar30) {
              dVar29 = dVar30;
            }
            dVar28 = dVar28 + dVar29;
            _objc_release(puStack_298);
            _objc_release(puStack_2a0);
            _objc_release(puStack_2c8);
            _objc_release(puStack_2c0);
            _objc_release(puVar20);
            _objc_release(puStack_2a8);
            _objc_release(puVar22);
            _objc_release(puVar24);
            _objc_release(puVar16);
            _objc_release(puStack_2b8);
            _objc_release(puVar21);
            _objc_release(puStack_2b0);
            puVar24 = (undefined *)0x0;
            puStack_2b8 = (undefined *)0x0;
            puStack_2b0 = (undefined *)0x0;
            puVar21 = (undefined *)0x0;
            puStack_2a8 = (undefined *)0x0;
            puVar20 = (undefined *)0x0;
            puStack_2c8 = (undefined *)0x0;
            puStack_2c0 = (undefined *)0x0;
            puVar26 = (undefined *)0x0;
LAB_105467250:
            puVar27 = (undefined *)0x0;
            puStack_2a0 = (undefined *)0x0;
            puStack_298 = (undefined *)0x0;
            dVar31 = dVar29;
          }
        }
        puVar17 = puVar17 + 1;
      } while (puStack_2d0 != puVar17);
      puStack_2d0 = param_1;
      func_0x00010bf52a60();
    } while (puStack_2d0 != (undefined *)0x0);
    _objc_release(param_1);
    if (dVar28 == 0.0) goto LAB_10546733c;
LAB_10546739c:
    dVar29 = dVar28;
    puVar7 = param_2;
    dVar30 = dVar31;
    if (dVar29 == 0.0) goto LAB_1054673a8;
  }
  dVar31 = 0.0;
  dVar28 = 0.0;
  if (0.0 <= dVar29) {
    dVar28 = dVar29;
  }
LAB_105467450:
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(puStack_2b0);
  _objc_release(puVar21);
  _objc_release(puStack_2b8);
  _objc_release(puStack_2a8);
  _objc_release(puVar27);
  _objc_release(puVar20);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2a0);
  _objc_release(puStack_298);
  _objc_release(param_2);
  puVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return dVar28;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar23);
  if (puVar3 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    goto LAB_105467dd4;
  }
  puVar21 = PTR_PTR_1126b9398;
  func_0x00010bfe6000();
  _objc_retainAutoreleasedReturnValue();
  dVar31 = 0.0;
  _objc_retain(puVar3);
  puVar20 = puVar3;
  func_0x00010bf52a60();
  puVar27 = puRam0000000000000000;
  if (puVar20 == (undefined *)0x0) {
    _objc_release(puVar3);
    puStack_448 = (undefined *)0x0;
    puStack_440 = (undefined *)0x0;
    puStack_478 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    puStack_470 = (undefined *)0x0;
    puStack_468 = (undefined *)0x0;
    puStack_438 = (undefined *)0x0;
    puStack_460 = (undefined *)0x0;
    puStack_458 = (undefined *)0x0;
    puStack_450 = (undefined *)0x0;
    puVar26 = (undefined *)0x0;
    puStack_488 = (undefined *)0x0;
    puStack_428 = (undefined *)0x0;
LAB_105467a5c:
    if (((puStack_460 == (undefined *)0x0) && (puStack_438 == (undefined *)0x0)) &&
       (puStack_468 == (undefined *)0x0)) {
      puStack_468 = (undefined *)0x0;
      puStack_460 = (undefined *)0x0;
      puStack_438 = (undefined *)0x0;
      puStack_480 = (undefined *)0x0;
      puStack_490 = (undefined *)0x0;
      puVar22 = (undefined *)0x0;
      puVar24 = (undefined *)0x0;
    }
    else {
      puStack_480 = (undefined *)0x0;
      puStack_490 = (undefined *)0x0;
      puVar22 = (undefined *)0x0;
      puVar24 = puStack_478;
      if (puStack_448 != (undefined *)0x0) {
        puVar24 = puStack_448;
      }
    }
  }
  else {
    puStack_428 = (undefined *)0x0;
    puVar22 = (undefined *)0x0;
    puStack_490 = (undefined *)0x0;
    puStack_488 = (undefined *)0x0;
    puStack_480 = (undefined *)0x0;
    puStack_478 = (undefined *)0x0;
    puVar26 = (undefined *)0x0;
    puStack_458 = (undefined *)0x0;
    puStack_450 = (undefined *)0x0;
    puStack_468 = (undefined *)0x0;
    puStack_460 = (undefined *)0x0;
    puStack_440 = (undefined *)0x0;
    puStack_438 = (undefined *)0x0;
    puStack_470 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    puStack_448 = (undefined *)0x0;
    do {
      puVar24 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar27) {
          _objc_enumerationMutation(puVar3);
        }
        puVar25 = *(undefined **)((long)puVar24 * 8);
        puVar17 = puVar25;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar17;
        func_0x00010c25e900();
        _objc_release(puVar17);
        puVar17 = puVar25;
        puVar7 = puStack_440;
        puVar11 = puVar22;
        puVar10 = puVar26;
        puVar12 = puStack_490;
        puVar13 = puStack_488;
        puVar14 = puStack_478;
        puVar1 = puStack_448;
        puVar9 = puStack_428;
        if ((long)puVar8 < 6) {
          if (2 < (long)puVar8) {
            if (puVar8 == (undefined *)0x3) {
              puVar19 = puStack_478;
              puVar14 = puVar25;
              if (puStack_478 != (undefined *)0x0) {
                puVar17 = puStack_478;
                puVar19 = puStack_478;
                puVar14 = puStack_478;
              }
            }
            else {
              if (puVar8 != (undefined *)0x4) goto LAB_1054677bc;
              puVar19 = puStack_448;
              puVar1 = puVar25;
              if (puStack_448 != (undefined *)0x0) {
                puVar17 = puStack_448;
                puVar19 = puStack_448;
                puVar1 = puStack_448;
              }
            }
            goto LAB_105467810;
          }
          if (puVar8 == (undefined *)0x1) {
            puVar19 = puStack_440;
            puVar7 = puVar25;
            if (puStack_440 != (undefined *)0x0) {
              puVar17 = puStack_440;
              puVar19 = puStack_440;
              puVar7 = puStack_440;
            }
            goto LAB_105467810;
          }
          puVar19 = puVar26;
          puVar10 = puVar25;
          if (puVar8 == (undefined *)0x2) goto LAB_105467810;
LAB_1054677bc:
          puVar7 = puVar25;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c073520();
          _objc_release(puVar7);
          if ((int)puVar8 != 0) {
            puVar7 = puVar25;
            if (puStack_440 != (undefined *)0x0) {
              puVar7 = puStack_440;
            }
            _objc_retain(puVar7);
            _objc_release(puStack_440);
            puVar19 = puStack_448;
            puVar10 = puVar26;
            puVar1 = puVar25;
            if (puStack_448 != (undefined *)0x0) {
              puVar17 = puStack_448;
              puVar1 = puStack_448;
            }
            goto LAB_105467810;
          }
        }
        else {
          if ((long)puVar8 < 8) {
            if (puVar8 == (undefined *)0x6) {
              puVar19 = puStack_428;
              puVar9 = puVar25;
              if (puStack_428 != (undefined *)0x0) {
                puVar17 = puStack_428;
                puVar19 = puStack_428;
                puVar9 = puStack_428;
              }
            }
            else {
              if (puVar8 != (undefined *)0x7) goto LAB_1054677bc;
              puVar19 = puVar22;
              puVar11 = puVar25;
              if (puVar22 != (undefined *)0x0) {
                puVar17 = puVar22;
                puVar11 = puVar22;
              }
            }
          }
          else if (puVar8 == (undefined *)0x8) {
            puVar19 = puStack_490;
            puVar12 = puVar25;
            if (puStack_490 != (undefined *)0x0) {
              puVar17 = puStack_490;
              puVar12 = puStack_490;
            }
          }
          else {
            if (puVar8 != (undefined *)0xa) goto LAB_1054677bc;
            puVar22 = puVar25;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = puVar22;
            func_0x00010c079060();
            _objc_release(puVar22);
            if (puStack_488 != (undefined *)0x0) {
              puVar17 = puStack_488;
            }
            puVar22 = puVar25;
            if (puStack_480 != (undefined *)0x0) {
              puVar22 = puStack_480;
            }
            puVar19 = puStack_488;
            puVar13 = puVar17;
            if ((int)puVar26 != 0) {
              puVar17 = puVar22;
              puVar19 = puStack_480;
              puVar13 = puStack_488;
              puStack_480 = puVar22;
            }
          }
LAB_105467810:
          puStack_428 = puVar9;
          puStack_440 = puVar7;
          puStack_448 = puVar1;
          puStack_478 = puVar14;
          puStack_488 = puVar13;
          puStack_490 = puVar12;
          _objc_retain(puVar17);
          _objc_release(puVar19);
          puVar22 = puVar11;
          puVar26 = puVar10;
        }
        puVar17 = puVar25;
        func_0x00010c068380();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar17;
        func_0x00010c068280();
        _objc_release(puVar17);
        puVar17 = puVar16;
        puVar8 = puVar26;
        puVar11 = puStack_470;
        if (puVar7 == (undefined *)0x4) {
          puVar17 = puVar25;
          puVar26 = puVar16;
          if (puVar16 != (undefined *)0x0) {
            puVar17 = puVar16;
          }
LAB_1054678e8:
          puStack_470 = puVar11;
          _objc_retain();
          _objc_release(puVar26);
          puVar16 = puVar17;
          puVar26 = puVar8;
        }
        else {
          puVar7 = puVar25;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          func_0x00010c068280();
          if (puVar10 == (undefined *)0x5) {
            _objc_release(puVar7);
            if (puVar22 != (undefined *)0x0 || puStack_428 != (undefined *)0x0) {
              puVar26 = puStack_470;
              puVar11 = puVar25;
              if (puStack_470 != (undefined *)0x0) {
                puVar11 = puStack_470;
              }
              goto LAB_1054678e8;
            }
          }
          else {
            _objc_release(puVar7);
          }
          puVar7 = puVar25;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c068280();
          _objc_release(puVar7);
          if (puVar8 == (undefined *)0x6) {
            puVar8 = puVar25;
            if (puVar26 != (undefined *)0x0) {
              puVar8 = puVar26;
            }
            goto LAB_1054678e8;
          }
        }
        puVar17 = puVar25;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar17;
        func_0x00010bf68580();
        if (puVar7 == (undefined *)0x0) {
          puVar8 = puVar25;
          func_0x00010bf684c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar8;
          func_0x00010bf68580();
          _objc_release(puVar8);
        }
        _objc_release(puVar17);
        puVar17 = puStack_468;
        puVar8 = puStack_460;
        puVar11 = puStack_458;
        puVar10 = puStack_450;
        puVar12 = puStack_438;
        if ((long)puVar7 < 4) {
          if (puVar7 == (undefined *)0x1) {
            puVar13 = puStack_458;
            puVar11 = puVar25;
            if (puStack_458 != (undefined *)0x0) {
              puVar25 = puStack_458;
              puVar11 = puStack_458;
            }
            goto LAB_1054679cc;
          }
          if (puVar7 == (undefined *)0x2) {
            puVar13 = puStack_438;
            puVar12 = puVar25;
            if (puStack_438 != (undefined *)0x0) {
              puVar25 = puStack_438;
              puVar12 = puStack_438;
            }
            goto LAB_1054679cc;
          }
        }
        else {
          if (puVar7 == (undefined *)0x4) {
            puVar13 = puStack_468;
            puVar17 = puVar25;
            if (puStack_468 != (undefined *)0x0) {
              puVar25 = puStack_468;
              puVar17 = puStack_468;
            }
          }
          else {
            puVar13 = puStack_450;
            puVar10 = puVar25;
            if (puVar7 != (undefined *)0x7) {
              if (puVar7 != (undefined *)0x8) goto LAB_1054679dc;
              puVar13 = puStack_460;
              puVar8 = puVar25;
              puVar10 = puStack_450;
              if (puStack_460 != (undefined *)0x0) {
                puVar25 = puStack_460;
                puVar8 = puStack_460;
              }
            }
          }
LAB_1054679cc:
          puStack_438 = puVar12;
          puStack_450 = puVar10;
          puStack_458 = puVar11;
          puStack_460 = puVar8;
          puStack_468 = puVar17;
          _objc_retain(puVar25);
          _objc_release(puVar13);
        }
LAB_1054679dc:
        puVar24 = puVar24 + 1;
      } while (puVar20 != puVar24);
      puVar20 = puVar3;
      func_0x00010bf52a60();
    } while (puVar20 != (undefined *)0x0);
    _objc_release(puVar3);
    puVar24 = puStack_480;
    if (puStack_480 == (undefined *)0x0) {
      if (puStack_490 == (undefined *)0x0) {
        if (puVar22 == (undefined *)0x0) goto LAB_105467a5c;
        if (puStack_488 == (undefined *)0x0) {
          puStack_480 = (undefined *)0x0;
          puStack_490 = (undefined *)0x0;
          puStack_488 = (undefined *)0x0;
          puVar24 = puStack_470;
          if (puVar16 != (undefined *)0x0) {
            puVar24 = puVar16;
          }
        }
        else {
          puStack_480 = (undefined *)0x0;
          puStack_490 = (undefined *)0x0;
          puVar24 = puStack_488;
        }
      }
      else {
        puStack_480 = (undefined *)0x0;
        puVar24 = puStack_490;
      }
    }
  }
  _objc_retain(puVar24);
  if (((((puVar22 == (undefined *)0x0) && (puStack_428 == (undefined *)0x0)) &&
       ((puStack_450 == (undefined *)0x0 &&
        ((puStack_458 == (undefined *)0x0 &&
         (puVar27 = puVar23, func_0x00010bf529e0(), puVar27 == (undefined *)0x0)))))) &&
      (puVar24 == (undefined *)0x0)) && (puVar26 == (undefined *)0x0)) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = puStack_478;
    if (puStack_448 != (undefined *)0x0) {
      puVar27 = puStack_448;
    }
    _objc_retain(puVar27);
    puStack_4a8 = puVar26;
    if (puVar26 != (undefined *)0x0) goto LAB_105467b40;
  }
  puVar20 = puVar16;
  if (puStack_460 != (undefined *)0x0) {
    puVar20 = puStack_460;
  }
  puVar17 = puStack_438;
  if (puStack_438 == (undefined *)0x0) {
    puVar17 = puVar20;
  }
  puStack_4a8 = puStack_488;
  if (puStack_488 == (undefined *)0x0) {
    puStack_4a8 = puVar17;
  }
LAB_105467b40:
  _objc_retain(puStack_4a8);
  puVar17 = puStack_440;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar8 = puVar21;
  func_0x00010c2bb720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar27;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar25 = puVar8;
  func_0x00010c2a8a00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar22;
  func_0x00010bf428e0(puVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar10 = puVar25;
  func_0x00010c2a8960();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar24;
  func_0x00010bf428e0(puVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar13 = puVar10;
  func_0x00010c2a88c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puStack_4a8;
  func_0x00010bf428e0(puStack_4a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar20 = puVar13;
  func_0x00010c2bb700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar25);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar17);
  if (((puVar24 == (undefined *)0x0) && (puVar27 != (undefined *)0x0)) &&
     (puVar17 = puVar23, func_0x00010bf529e0(), puVar17 != (undefined *)0x0)) {
    puVar7 = puVar23;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar7;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) goto LAB_105467e64;
    dVar31 = *(double *)(param_1 + 0x78);
    puVar21 = puVar20;
    goto LAB_105467ce4;
  }
  while( true ) {
    _objc_retain(puVar20);
    _objc_release(puStack_4a8);
    _objc_release(puVar27);
    _objc_release(puVar24);
    _objc_release(puVar16);
    _objc_release(puStack_470);
    _objc_release(puStack_468);
    _objc_release(puStack_438);
    _objc_release(puStack_460);
    _objc_release(puStack_450);
    _objc_release(puStack_458);
    _objc_release(puVar26);
    _objc_release(puStack_480);
    _objc_release(puStack_488);
    _objc_release(puStack_490);
    _objc_release(puVar22);
    _objc_release(puStack_428);
    _objc_release(puStack_448);
    _objc_release(puStack_478);
    _objc_release(puStack_440);
    _objc_release(puVar20);
    param_1 = puVar27;
    puVar27 = puVar21;
LAB_105467dd4:
    _objc_release(puVar23);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) break;
    ___stack_chk_fail();
LAB_105467e64:
    dVar31 = 0.0;
    puVar21 = puVar20;
LAB_105467ce4:
    puVar20 = puVar21;
    func_0x00010c2a88c0(dVar31,puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(param_1);
    _objc_release(puVar7);
    puVar21 = puVar27;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return dVar31;
}



/* Entry: 105466d78; end: 105467573;  */

double FUN_105466d78(undefined *param_1,undefined *param_2)

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
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *unaff_x25;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined *puStack_368;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2e8;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  dVar24 = 0.0;
  _objc_retain(param_1);
  puStack_190 = param_1;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  if (puStack_190 == (undefined *)0x0) {
    _objc_release(param_1);
    puStack_160 = (undefined *)0x0;
    puStack_158 = (undefined *)0x0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    puStack_168 = (undefined *)0x0;
    puStack_178 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    puVar18 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    dVar25 = 0.0;
    puVar13 = param_2;
LAB_10546733c:
    if (puStack_158 == (undefined *)0x0 && puStack_160 == (undefined *)0x0) {
      puStack_160 = (undefined *)0x0;
      puStack_158 = (undefined *)0x0;
      goto LAB_10546739c;
    }
    if (puStack_188 == (undefined *)0x0 && puStack_180 == (undefined *)0x0) {
      puStack_188 = (undefined *)0x0;
      puStack_180 = (undefined *)0x0;
      goto LAB_10546739c;
    }
    if (puVar20 == (undefined *)0x0 && puVar18 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      puVar20 = (undefined *)0x0;
      goto LAB_10546739c;
    }
    puVar14 = puStack_160;
    if (puStack_160 == (undefined *)0x0) {
      puVar14 = puStack_158;
    }
    func_0x00010bf428e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar22 = dVar24;
    _objc_release(puVar14);
    puVar14 = puVar20;
    if (puVar18 != (undefined *)0x0) {
      puVar14 = puVar18;
    }
    func_0x00010bf428e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar25 = dVar22 - dVar24;
    _objc_release(puVar14);
    dVar23 = 0.0;
    dVar24 = dVar22;
    if (0.0 <= dVar25) goto LAB_10546739c;
LAB_1054673a8:
    if (puStack_160 == (undefined *)0x0 && puStack_158 == (undefined *)0x0) {
      puStack_160 = (undefined *)0x0;
      puStack_158 = (undefined *)0x0;
      puVar1 = param_2;
    }
    else {
      puVar14 = param_2;
      func_0x00010bf529e0();
      puVar1 = param_2;
      if (puVar14 != (undefined *)0x0) {
        puVar14 = param_2;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar14;
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        dVar24 = 0.0;
        if (puVar1 != (undefined *)0x0) {
          dVar24 = *(double *)(puVar1 + 0x78);
        }
        puVar2 = puStack_160;
        if (puStack_160 == (undefined *)0x0) {
          puVar2 = puStack_158;
        }
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        _objc_release(puVar2);
        _objc_release(puVar1);
        dVar23 = 0.0;
        if (0.0 <= dVar24 - dVar22) {
          dVar23 = dVar24 - dVar22;
        }
        _objc_release(puVar14);
      }
    }
  }
  else {
    puVar20 = (undefined *)0x0;
    puVar18 = (undefined *)0x0;
    puStack_178 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    puStack_168 = (undefined *)0x0;
    puStack_160 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_158 = (undefined *)0x0;
    dVar25 = 0.0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        unaff_x25 = puVar21;
        puVar13 = puVar20;
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        puVar20 = *(undefined **)((long)puVar14 * 8);
        puVar1 = puVar20;
        func_0x00010bf684c0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar1;
        func_0x00010bf68580();
        if (puVar21 == (undefined *)0x0) {
          puVar2 = puVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar2;
          func_0x00010bf68580();
          _objc_release(puVar2);
        }
        _objc_release(puVar1);
        puVar2 = puVar17;
        dVar22 = dVar24;
        if (3 < (long)puVar21) {
          puVar5 = puStack_170;
          puVar19 = puStack_178;
          puVar4 = puVar20;
          if (puVar21 == (undefined *)0x8) goto LAB_105466ef8;
          if (puVar21 != (undefined *)0x4) goto LAB_105466f0c;
LAB_10546737c:
          _objc_release(param_1);
          dVar25 = 0.0;
          puVar20 = puVar13;
          puVar21 = unaff_x25;
          goto LAB_105467450;
        }
        puVar5 = puStack_178;
        puVar19 = puVar20;
        puVar4 = puStack_170;
        if ((puVar21 == (undefined *)0x1) ||
           (puVar5 = puVar17, puVar2 = puVar20, puVar19 = puStack_178, puVar21 == (undefined *)0x2))
        {
LAB_105466ef8:
          puStack_170 = puVar4;
          puStack_178 = puVar19;
          _objc_retain(puVar20);
          _objc_release(puVar5);
          puVar17 = puVar2;
          dVar22 = dVar24;
        }
LAB_105466f0c:
        puVar21 = puVar20;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar21;
        func_0x00010c25e900();
        _objc_release(puVar21);
        puVar21 = puVar13;
        puVar2 = puVar16;
        puVar5 = unaff_x25;
        puVar19 = puVar18;
        puVar4 = puStack_188;
        puVar6 = puStack_180;
        puVar7 = puStack_168;
        puVar8 = puStack_160;
        puVar9 = puStack_158;
        if (puVar1 == (undefined *)0x3) {
          puVar1 = puStack_158;
          puVar9 = puVar20;
          if (puStack_158 != (undefined *)0x0) {
            puVar20 = puStack_158;
            puVar9 = puStack_158;
          }
LAB_1054670e0:
          puStack_158 = puVar9;
          puStack_160 = puVar8;
          puStack_168 = puVar7;
          puStack_180 = puVar6;
          puStack_188 = puVar4;
          _objc_retain(puVar20);
          puVar13 = puVar21;
          puVar16 = puVar2;
          unaff_x25 = puVar5;
          puVar18 = puVar19;
LAB_1054670e8:
          _objc_release(puVar1);
        }
        else {
          puVar1 = puVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c25e900();
          _objc_release(puVar1);
          if (puVar3 == (undefined *)0x4) {
            puVar1 = puStack_160;
            puVar8 = puVar20;
            if (puStack_160 != (undefined *)0x0) {
              puVar20 = puStack_160;
              puVar8 = puStack_160;
            }
            goto LAB_1054670e0;
          }
          puVar1 = puVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c25e900();
          _objc_release(puVar1);
          puVar1 = puStack_188;
          puVar4 = puVar20;
          if (puVar3 == (undefined *)0x6) goto LAB_1054670e0;
          puVar1 = puVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c25e900();
          _objc_release(puVar1);
          puVar1 = puStack_180;
          puVar4 = puStack_188;
          puVar6 = puVar20;
          if (puVar3 == (undefined *)0x7) goto LAB_1054670e0;
          puVar1 = puVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c25e900();
          _objc_release(puVar1);
          puVar2 = puVar20;
          puVar1 = puVar16;
          puVar6 = puStack_180;
          if (puVar3 == (undefined *)0x8) goto LAB_1054670e0;
          puVar1 = puVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c25e900();
          _objc_release(puVar1);
          puVar2 = puVar16;
          puVar1 = puStack_168;
          puVar7 = puVar20;
          if (puVar3 == (undefined *)0xa) goto LAB_1054670e0;
          puVar1 = puVar20;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c073520();
          _objc_release(puVar1);
          puVar5 = puVar20;
          puVar1 = unaff_x25;
          puVar7 = puStack_168;
          if (((ulong)puVar3 & 1) != 0) goto LAB_1054670e0;
          puVar1 = puVar20;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c068280();
          _objc_release(puVar1);
          puVar5 = unaff_x25;
          puVar19 = puVar20;
          puVar1 = puVar18;
          if (puVar3 == (undefined *)0x4) goto LAB_1054670e0;
          puVar1 = puVar20;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar1;
          func_0x00010c068280();
          if (puVar21 != (undefined *)0x5) goto LAB_1054670e8;
          _objc_release(puVar1);
          if (puStack_180 != (undefined *)0x0 || puStack_188 != (undefined *)0x0) {
            puVar21 = puVar20;
            puVar19 = puVar18;
            puVar1 = puVar13;
            if (puVar13 != (undefined *)0x0) {
              puVar21 = puVar13;
              puVar20 = puVar13;
            }
            goto LAB_1054670e0;
          }
          puStack_188 = (undefined *)0x0;
          puStack_180 = (undefined *)0x0;
        }
        puVar21 = puStack_168;
        if (puVar17 != (undefined *)0x0) {
          puVar21 = puVar17;
        }
        puVar20 = puVar16;
        if (puVar16 == (undefined *)0x0) {
          puVar20 = puVar21;
        }
        func_0x00010bf428e0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        dVar23 = dVar22;
        _objc_release(puVar20);
        puVar1 = unaff_x25;
        puVar20 = puVar13;
        if (unaff_x25 == (undefined *)0x0) {
          if (puStack_158 == (undefined *)0x0 && puStack_160 == (undefined *)0x0)
          goto LAB_105467250;
          if (((puStack_180 != (undefined *)0x0) || (puStack_188 != (undefined *)0x0)) ||
             (puStack_178 != (undefined *)0x0)) {
            puVar1 = puStack_160;
            if (puStack_160 == (undefined *)0x0) {
              puVar1 = puStack_158;
            }
            goto LAB_105467134;
          }
          puStack_180 = (undefined *)0x0;
          puStack_178 = (undefined *)0x0;
          puVar21 = (undefined *)0x0;
          puStack_188 = (undefined *)0x0;
          dVar24 = dVar23;
        }
        else {
LAB_105467134:
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          dVar24 = dVar23;
          _objc_release(puVar1);
          puVar21 = unaff_x25;
          if ((dVar23 != 0.0) && (dVar22 != 0.0)) {
            if ((puVar16 == (undefined *)0x0) &&
               ((puVar17 != (undefined *)0x0 || puStack_170 != (undefined *)0x0 &&
                (puStack_180 == (undefined *)0x0)))) {
              puVar16 = (undefined *)0x0;
              puStack_180 = (undefined *)0x0;
              goto LAB_10546737c;
            }
            dVar22 = dVar22 - dVar23;
            dVar23 = 0.0;
            if (0.0 <= dVar22) {
              dVar23 = dVar22;
            }
            dVar25 = dVar25 + dVar23;
            _objc_release(puStack_158);
            _objc_release(puStack_160);
            _objc_release(puStack_188);
            _objc_release(puStack_180);
            _objc_release(puVar16);
            _objc_release(puStack_168);
            _objc_release(unaff_x25);
            _objc_release(puVar18);
            _objc_release(puVar13);
            _objc_release(puStack_178);
            _objc_release(puVar17);
            _objc_release(puStack_170);
            puVar18 = (undefined *)0x0;
            puStack_178 = (undefined *)0x0;
            puStack_170 = (undefined *)0x0;
            puVar17 = (undefined *)0x0;
            puStack_168 = (undefined *)0x0;
            puVar16 = (undefined *)0x0;
            puStack_188 = (undefined *)0x0;
            puStack_180 = (undefined *)0x0;
            puVar20 = (undefined *)0x0;
LAB_105467250:
            puVar21 = (undefined *)0x0;
            puStack_160 = (undefined *)0x0;
            puStack_158 = (undefined *)0x0;
            dVar24 = dVar23;
          }
        }
        puVar14 = puVar14 + 1;
      } while (puStack_190 != puVar14);
      puStack_190 = param_1;
      func_0x00010bf52a60();
    } while (puStack_190 != (undefined *)0x0);
    _objc_release(param_1);
    if (dVar25 == 0.0) goto LAB_10546733c;
LAB_10546739c:
    dVar23 = dVar25;
    puVar1 = param_2;
    dVar22 = dVar24;
    if (dVar23 == 0.0) goto LAB_1054673a8;
  }
  dVar24 = 0.0;
  dVar25 = 0.0;
  if (0.0 <= dVar23) {
    dVar25 = dVar23;
  }
LAB_105467450:
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(puStack_170);
  _objc_release(puVar17);
  _objc_release(puStack_178);
  _objc_release(puStack_168);
  _objc_release(puVar21);
  _objc_release(puVar16);
  _objc_release(puStack_188);
  _objc_release(puStack_180);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(param_2);
  puVar16 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return dVar25;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar10);
  if (puVar16 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    goto LAB_105467dd4;
  }
  puVar14 = PTR_PTR_1126b9398;
  func_0x00010bfe6000();
  _objc_retainAutoreleasedReturnValue();
  dVar24 = 0.0;
  _objc_retain(puVar16);
  puVar21 = puVar16;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (puVar21 == (undefined *)0x0) {
    _objc_release(puVar16);
    puStack_308 = (undefined *)0x0;
    puStack_300 = (undefined *)0x0;
    puStack_338 = (undefined *)0x0;
    puVar13 = (undefined *)0x0;
    puStack_330 = (undefined *)0x0;
    puStack_328 = (undefined *)0x0;
    puStack_2f8 = (undefined *)0x0;
    puStack_320 = (undefined *)0x0;
    puStack_318 = (undefined *)0x0;
    puStack_310 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    puStack_348 = (undefined *)0x0;
    puStack_2e8 = (undefined *)0x0;
LAB_105467a5c:
    if (((puStack_320 == (undefined *)0x0) && (puStack_2f8 == (undefined *)0x0)) &&
       (puStack_328 == (undefined *)0x0)) {
      puStack_328 = (undefined *)0x0;
      puStack_320 = (undefined *)0x0;
      puStack_2f8 = (undefined *)0x0;
      puStack_340 = (undefined *)0x0;
      puStack_350 = (undefined *)0x0;
      unaff_x25 = (undefined *)0x0;
      puVar18 = (undefined *)0x0;
    }
    else {
      puStack_340 = (undefined *)0x0;
      puStack_350 = (undefined *)0x0;
      unaff_x25 = (undefined *)0x0;
      puVar18 = puStack_338;
      if (puStack_308 != (undefined *)0x0) {
        puVar18 = puStack_308;
      }
    }
  }
  else {
    puStack_2e8 = (undefined *)0x0;
    unaff_x25 = (undefined *)0x0;
    puStack_350 = (undefined *)0x0;
    puStack_348 = (undefined *)0x0;
    puStack_340 = (undefined *)0x0;
    puStack_338 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    puStack_318 = (undefined *)0x0;
    puStack_310 = (undefined *)0x0;
    puStack_328 = (undefined *)0x0;
    puStack_320 = (undefined *)0x0;
    puStack_300 = (undefined *)0x0;
    puStack_2f8 = (undefined *)0x0;
    puStack_330 = (undefined *)0x0;
    puVar13 = (undefined *)0x0;
    puStack_308 = (undefined *)0x0;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar16);
        }
        puVar19 = *(undefined **)((long)puVar17 * 8);
        puVar18 = puVar19;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar18;
        func_0x00010c25e900();
        _objc_release(puVar18);
        puVar18 = puVar19;
        puVar1 = puStack_300;
        puVar5 = unaff_x25;
        puVar4 = puVar20;
        puVar6 = puStack_350;
        puVar7 = puStack_348;
        puVar8 = puStack_338;
        puVar9 = puStack_308;
        puVar3 = puStack_2e8;
        if ((long)puVar2 < 6) {
          if (2 < (long)puVar2) {
            if (puVar2 == (undefined *)0x3) {
              puVar15 = puStack_338;
              puVar8 = puVar19;
              if (puStack_338 != (undefined *)0x0) {
                puVar18 = puStack_338;
                puVar15 = puStack_338;
                puVar8 = puStack_338;
              }
            }
            else {
              if (puVar2 != (undefined *)0x4) goto LAB_1054677bc;
              puVar15 = puStack_308;
              puVar9 = puVar19;
              if (puStack_308 != (undefined *)0x0) {
                puVar18 = puStack_308;
                puVar15 = puStack_308;
                puVar9 = puStack_308;
              }
            }
            goto LAB_105467810;
          }
          if (puVar2 == (undefined *)0x1) {
            puVar15 = puStack_300;
            puVar1 = puVar19;
            if (puStack_300 != (undefined *)0x0) {
              puVar18 = puStack_300;
              puVar15 = puStack_300;
              puVar1 = puStack_300;
            }
            goto LAB_105467810;
          }
          puVar15 = puVar20;
          puVar4 = puVar19;
          if (puVar2 == (undefined *)0x2) goto LAB_105467810;
LAB_1054677bc:
          puVar1 = puVar19;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c073520();
          _objc_release(puVar1);
          if ((int)puVar2 != 0) {
            puVar1 = puVar19;
            if (puStack_300 != (undefined *)0x0) {
              puVar1 = puStack_300;
            }
            _objc_retain(puVar1);
            _objc_release(puStack_300);
            puVar15 = puStack_308;
            puVar4 = puVar20;
            puVar9 = puVar19;
            if (puStack_308 != (undefined *)0x0) {
              puVar18 = puStack_308;
              puVar9 = puStack_308;
            }
            goto LAB_105467810;
          }
        }
        else {
          if ((long)puVar2 < 8) {
            if (puVar2 == (undefined *)0x6) {
              puVar15 = puStack_2e8;
              puVar3 = puVar19;
              if (puStack_2e8 != (undefined *)0x0) {
                puVar18 = puStack_2e8;
                puVar15 = puStack_2e8;
                puVar3 = puStack_2e8;
              }
            }
            else {
              if (puVar2 != (undefined *)0x7) goto LAB_1054677bc;
              puVar15 = unaff_x25;
              puVar5 = puVar19;
              if (unaff_x25 != (undefined *)0x0) {
                puVar18 = unaff_x25;
                puVar5 = unaff_x25;
              }
            }
          }
          else if (puVar2 == (undefined *)0x8) {
            puVar15 = puStack_350;
            puVar6 = puVar19;
            if (puStack_350 != (undefined *)0x0) {
              puVar18 = puStack_350;
              puVar6 = puStack_350;
            }
          }
          else {
            if (puVar2 != (undefined *)0xa) goto LAB_1054677bc;
            puVar20 = puVar19;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar20;
            func_0x00010c079060();
            _objc_release(puVar20);
            if (puStack_348 != (undefined *)0x0) {
              puVar18 = puStack_348;
            }
            puVar20 = puVar19;
            if (puStack_340 != (undefined *)0x0) {
              puVar20 = puStack_340;
            }
            puVar15 = puStack_348;
            puVar7 = puVar18;
            if ((int)puVar2 != 0) {
              puVar18 = puVar20;
              puVar15 = puStack_340;
              puVar7 = puStack_348;
              puStack_340 = puVar20;
            }
          }
LAB_105467810:
          puStack_2e8 = puVar3;
          puStack_300 = puVar1;
          puStack_308 = puVar9;
          puStack_338 = puVar8;
          puStack_348 = puVar7;
          puStack_350 = puVar6;
          _objc_retain(puVar18);
          _objc_release(puVar15);
          unaff_x25 = puVar5;
          puVar20 = puVar4;
        }
        puVar18 = puVar19;
        func_0x00010c068380();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar18;
        func_0x00010c068280();
        _objc_release(puVar18);
        puVar18 = puVar13;
        puVar2 = puVar20;
        puVar5 = puStack_330;
        if (puVar1 == (undefined *)0x4) {
          puVar18 = puVar19;
          puVar20 = puVar13;
          if (puVar13 != (undefined *)0x0) {
            puVar18 = puVar13;
          }
LAB_1054678e8:
          puStack_330 = puVar5;
          _objc_retain();
          _objc_release(puVar20);
          puVar13 = puVar18;
          puVar20 = puVar2;
        }
        else {
          puVar1 = puVar19;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c068280();
          if (puVar4 == (undefined *)0x5) {
            _objc_release(puVar1);
            if (unaff_x25 != (undefined *)0x0 || puStack_2e8 != (undefined *)0x0) {
              puVar20 = puStack_330;
              puVar5 = puVar19;
              if (puStack_330 != (undefined *)0x0) {
                puVar5 = puStack_330;
              }
              goto LAB_1054678e8;
            }
          }
          else {
            _objc_release(puVar1);
          }
          puVar1 = puVar19;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c068280();
          _objc_release(puVar1);
          if (puVar2 == (undefined *)0x6) {
            puVar2 = puVar19;
            if (puVar20 != (undefined *)0x0) {
              puVar2 = puVar20;
            }
            goto LAB_1054678e8;
          }
        }
        puVar18 = puVar19;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar18;
        func_0x00010bf68580();
        if (puVar1 == (undefined *)0x0) {
          puVar2 = puVar19;
          func_0x00010bf684c0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          func_0x00010bf68580();
          _objc_release(puVar2);
        }
        _objc_release(puVar18);
        puVar18 = puStack_328;
        puVar2 = puStack_320;
        puVar5 = puStack_318;
        puVar4 = puStack_310;
        puVar6 = puStack_2f8;
        if ((long)puVar1 < 4) {
          if (puVar1 == (undefined *)0x1) {
            puVar7 = puStack_318;
            puVar5 = puVar19;
            if (puStack_318 != (undefined *)0x0) {
              puVar19 = puStack_318;
              puVar5 = puStack_318;
            }
            goto LAB_1054679cc;
          }
          if (puVar1 == (undefined *)0x2) {
            puVar7 = puStack_2f8;
            puVar6 = puVar19;
            if (puStack_2f8 != (undefined *)0x0) {
              puVar19 = puStack_2f8;
              puVar6 = puStack_2f8;
            }
            goto LAB_1054679cc;
          }
        }
        else {
          if (puVar1 == (undefined *)0x4) {
            puVar7 = puStack_328;
            puVar18 = puVar19;
            if (puStack_328 != (undefined *)0x0) {
              puVar19 = puStack_328;
              puVar18 = puStack_328;
            }
          }
          else {
            puVar7 = puStack_310;
            puVar4 = puVar19;
            if (puVar1 != (undefined *)0x7) {
              if (puVar1 != (undefined *)0x8) goto LAB_1054679dc;
              puVar7 = puStack_320;
              puVar2 = puVar19;
              puVar4 = puStack_310;
              if (puStack_320 != (undefined *)0x0) {
                puVar19 = puStack_320;
                puVar2 = puStack_320;
              }
            }
          }
LAB_1054679cc:
          puStack_2f8 = puVar6;
          puStack_310 = puVar4;
          puStack_318 = puVar5;
          puStack_320 = puVar2;
          puStack_328 = puVar18;
          _objc_retain(puVar19);
          _objc_release(puVar7);
        }
LAB_1054679dc:
        puVar17 = puVar17 + 1;
      } while (puVar21 != puVar17);
      puVar21 = puVar16;
      func_0x00010bf52a60();
    } while (puVar21 != (undefined *)0x0);
    _objc_release(puVar16);
    puVar18 = puStack_340;
    if (puStack_340 == (undefined *)0x0) {
      if (puStack_350 == (undefined *)0x0) {
        if (unaff_x25 == (undefined *)0x0) goto LAB_105467a5c;
        if (puStack_348 == (undefined *)0x0) {
          puStack_340 = (undefined *)0x0;
          puStack_350 = (undefined *)0x0;
          puStack_348 = (undefined *)0x0;
          puVar18 = puStack_330;
          if (puVar13 != (undefined *)0x0) {
            puVar18 = puVar13;
          }
        }
        else {
          puStack_340 = (undefined *)0x0;
          puStack_350 = (undefined *)0x0;
          puVar18 = puStack_348;
        }
      }
      else {
        puStack_340 = (undefined *)0x0;
        puVar18 = puStack_350;
      }
    }
  }
  _objc_retain(puVar18);
  if (((((unaff_x25 == (undefined *)0x0) && (puStack_2e8 == (undefined *)0x0)) &&
       ((puStack_310 == (undefined *)0x0 &&
        ((puStack_318 == (undefined *)0x0 &&
         (puVar21 = puVar10, func_0x00010bf529e0(), puVar21 == (undefined *)0x0)))))) &&
      (puVar18 == (undefined *)0x0)) && (puVar20 == (undefined *)0x0)) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = puStack_338;
    if (puStack_308 != (undefined *)0x0) {
      puVar21 = puStack_308;
    }
    _objc_retain(puVar21);
    puStack_368 = puVar20;
    if (puVar20 != (undefined *)0x0) goto LAB_105467b40;
  }
  puVar17 = puVar13;
  if (puStack_320 != (undefined *)0x0) {
    puVar17 = puStack_320;
  }
  puVar1 = puStack_2f8;
  if (puStack_2f8 == (undefined *)0x0) {
    puVar1 = puVar17;
  }
  puStack_368 = puStack_348;
  if (puStack_348 == (undefined *)0x0) {
    puStack_368 = puVar1;
  }
LAB_105467b40:
  _objc_retain(puStack_368);
  puVar2 = puStack_300;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar5 = puVar14;
  func_0x00010c2bb720();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar21;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar4 = puVar5;
  func_0x00010c2a8a00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = unaff_x25;
  func_0x00010bf428e0(unaff_x25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar6 = puVar4;
  func_0x00010c2a8960();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar18;
  func_0x00010bf428e0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar8 = puVar6;
  func_0x00010c2a88c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puStack_368;
  func_0x00010bf428e0(puStack_368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar17 = puVar8;
  func_0x00010c2bb700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar19);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (((puVar18 == (undefined *)0x0) && (puVar21 != (undefined *)0x0)) &&
     (puVar2 = puVar10, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
    puVar1 = puVar10;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) goto LAB_105467e64;
    dVar24 = *(double *)(param_1 + 0x78);
    puVar14 = puVar17;
    goto LAB_105467ce4;
  }
  while( true ) {
    _objc_retain(puVar17);
    _objc_release(puStack_368);
    _objc_release(puVar21);
    _objc_release(puVar18);
    _objc_release(puVar13);
    _objc_release(puStack_330);
    _objc_release(puStack_328);
    _objc_release(puStack_2f8);
    _objc_release(puStack_320);
    _objc_release(puStack_310);
    _objc_release(puStack_318);
    _objc_release(puVar20);
    _objc_release(puStack_340);
    _objc_release(puStack_348);
    _objc_release(puStack_350);
    _objc_release(unaff_x25);
    _objc_release(puStack_2e8);
    _objc_release(puStack_308);
    _objc_release(puStack_338);
    _objc_release(puStack_300);
    _objc_release(puVar17);
    param_1 = puVar21;
    puVar21 = puVar14;
LAB_105467dd4:
    _objc_release(puVar10);
    _objc_release(puVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) break;
    ___stack_chk_fail();
LAB_105467e64:
    dVar24 = 0.0;
    puVar14 = puVar17;
LAB_105467ce4:
    puVar17 = puVar14;
    func_0x00010c2a88c0(dVar24,puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(param_1);
    _objc_release(puVar1);
    puVar14 = puVar21;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return dVar24;
}



/* Entry: 105467574; end: 105467e6b;  */

void FUN_105467574(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar15;
  undefined *puVar16;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar17;
  undefined *unaff_x27;
  undefined *unaff_x28;
  long lVar18;
  undefined8 uVar19;
  undefined *puStack_1b8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_138;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar16 = (undefined *)0x0;
    goto LAB_105467dd4;
  }
  puVar4 = PTR_PTR_1126b9398;
  func_0x00010bfe6000();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar5 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 == 0) {
    _objc_release(param_1);
    puStack_158 = (undefined *)0x0;
    puStack_150 = (undefined *)0x0;
    puStack_188 = (undefined *)0x0;
    unaff_x19 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_178 = (undefined *)0x0;
    puStack_148 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    puStack_168 = (undefined *)0x0;
    puStack_160 = (undefined *)0x0;
    unaff_x27 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    puStack_138 = (undefined *)0x0;
LAB_105467a5c:
    if (((puStack_170 == (undefined *)0x0) && (puStack_148 == (undefined *)0x0)) &&
       (puStack_178 == (undefined *)0x0)) {
      puStack_178 = (undefined *)0x0;
      puStack_170 = (undefined *)0x0;
      puStack_148 = (undefined *)0x0;
      puStack_190 = (undefined *)0x0;
      puStack_1a0 = (undefined *)0x0;
      unaff_x25 = (undefined *)0x0;
      unaff_x26 = (undefined *)0x0;
    }
    else {
      puStack_190 = (undefined *)0x0;
      puStack_1a0 = (undefined *)0x0;
      unaff_x25 = (undefined *)0x0;
      unaff_x26 = puStack_188;
      if (puStack_158 != (undefined *)0x0) {
        unaff_x26 = puStack_158;
      }
    }
  }
  else {
    puStack_138 = (undefined *)0x0;
    unaff_x25 = (undefined *)0x0;
    puStack_1a0 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    puStack_190 = (undefined *)0x0;
    puStack_188 = (undefined *)0x0;
    unaff_x27 = (undefined *)0x0;
    puStack_168 = (undefined *)0x0;
    puStack_160 = (undefined *)0x0;
    puStack_178 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    puStack_150 = (undefined *)0x0;
    puStack_148 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    unaff_x19 = (undefined *)0x0;
    puStack_158 = (undefined *)0x0;
    do {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar17 = *(undefined **)(lVar18 * 8);
        puVar16 = puVar17;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar16;
        func_0x00010c25e900();
        _objc_release(puVar16);
        puVar16 = puVar17;
        puVar8 = puStack_150;
        puVar10 = unaff_x25;
        puVar9 = unaff_x27;
        puVar11 = puStack_1a0;
        puVar12 = puStack_198;
        puVar13 = puStack_188;
        puVar2 = puStack_158;
        puVar3 = puStack_138;
        if ((long)puVar6 < 6) {
          if (2 < (long)puVar6) {
            if (puVar6 == (undefined *)0x3) {
              puVar15 = puStack_188;
              puVar13 = puVar17;
              if (puStack_188 != (undefined *)0x0) {
                puVar16 = puStack_188;
                puVar15 = puStack_188;
                puVar13 = puStack_188;
              }
            }
            else {
              if (puVar6 != (undefined *)0x4) goto LAB_1054677bc;
              puVar15 = puStack_158;
              puVar2 = puVar17;
              if (puStack_158 != (undefined *)0x0) {
                puVar16 = puStack_158;
                puVar15 = puStack_158;
                puVar2 = puStack_158;
              }
            }
            goto LAB_105467810;
          }
          if (puVar6 == (undefined *)0x1) {
            puVar15 = puStack_150;
            puVar8 = puVar17;
            if (puStack_150 != (undefined *)0x0) {
              puVar16 = puStack_150;
              puVar15 = puStack_150;
              puVar8 = puStack_150;
            }
            goto LAB_105467810;
          }
          puVar15 = unaff_x27;
          puVar9 = puVar17;
          if (puVar6 == (undefined *)0x2) goto LAB_105467810;
LAB_1054677bc:
          puVar8 = puVar17;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c073520();
          _objc_release(puVar8);
          if ((int)puVar6 != 0) {
            puVar8 = puVar17;
            if (puStack_150 != (undefined *)0x0) {
              puVar8 = puStack_150;
            }
            _objc_retain(puVar8);
            _objc_release(puStack_150);
            puVar15 = puStack_158;
            puVar9 = unaff_x27;
            puVar2 = puVar17;
            if (puStack_158 != (undefined *)0x0) {
              puVar16 = puStack_158;
              puVar2 = puStack_158;
            }
            goto LAB_105467810;
          }
        }
        else {
          if ((long)puVar6 < 8) {
            if (puVar6 == (undefined *)0x6) {
              puVar15 = puStack_138;
              puVar3 = puVar17;
              if (puStack_138 != (undefined *)0x0) {
                puVar16 = puStack_138;
                puVar15 = puStack_138;
                puVar3 = puStack_138;
              }
            }
            else {
              if (puVar6 != (undefined *)0x7) goto LAB_1054677bc;
              puVar15 = unaff_x25;
              puVar10 = puVar17;
              if (unaff_x25 != (undefined *)0x0) {
                puVar16 = unaff_x25;
                puVar10 = unaff_x25;
              }
            }
          }
          else if (puVar6 == (undefined *)0x8) {
            puVar15 = puStack_1a0;
            puVar11 = puVar17;
            if (puStack_1a0 != (undefined *)0x0) {
              puVar16 = puStack_1a0;
              puVar11 = puStack_1a0;
            }
          }
          else {
            if (puVar6 != (undefined *)0xa) goto LAB_1054677bc;
            puVar6 = puVar17;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c079060();
            _objc_release(puVar6);
            if (puStack_198 != (undefined *)0x0) {
              puVar16 = puStack_198;
            }
            puVar6 = puVar17;
            if (puStack_190 != (undefined *)0x0) {
              puVar6 = puStack_190;
            }
            puVar15 = puStack_198;
            puVar12 = puVar16;
            if ((int)puVar7 != 0) {
              puVar16 = puVar6;
              puVar15 = puStack_190;
              puVar12 = puStack_198;
              puStack_190 = puVar6;
            }
          }
LAB_105467810:
          puStack_138 = puVar3;
          puStack_150 = puVar8;
          puStack_158 = puVar2;
          puStack_188 = puVar13;
          puStack_198 = puVar12;
          puStack_1a0 = puVar11;
          _objc_retain(puVar16);
          _objc_release(puVar15);
          unaff_x25 = puVar10;
          unaff_x27 = puVar9;
        }
        puVar16 = puVar17;
        func_0x00010c068380();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar16;
        func_0x00010c068280();
        _objc_release(puVar16);
        puVar16 = unaff_x19;
        puVar6 = unaff_x27;
        puVar10 = puStack_180;
        if (puVar8 == (undefined *)0x4) {
          puVar16 = puVar17;
          puVar8 = unaff_x19;
          if (unaff_x19 != (undefined *)0x0) {
            puVar16 = unaff_x19;
          }
LAB_1054678e8:
          puStack_180 = puVar10;
          _objc_retain();
          _objc_release(puVar8);
          unaff_x19 = puVar16;
          unaff_x27 = puVar6;
        }
        else {
          puVar8 = puVar17;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c068280();
          if (puVar9 == (undefined *)0x5) {
            _objc_release(puVar8);
            if (unaff_x25 != (undefined *)0x0 || puStack_138 != (undefined *)0x0) {
              puVar8 = puStack_180;
              puVar10 = puVar17;
              if (puStack_180 != (undefined *)0x0) {
                puVar10 = puStack_180;
              }
              goto LAB_1054678e8;
            }
          }
          else {
            _objc_release(puVar8);
          }
          puVar8 = puVar17;
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c068280();
          _objc_release(puVar8);
          if (puVar6 == (undefined *)0x6) {
            puVar8 = unaff_x27;
            puVar6 = puVar17;
            if (unaff_x27 != (undefined *)0x0) {
              puVar6 = unaff_x27;
            }
            goto LAB_1054678e8;
          }
        }
        puVar16 = puVar17;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar16;
        func_0x00010bf68580();
        if (puVar8 == (undefined *)0x0) {
          puVar6 = puVar17;
          func_0x00010bf684c0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010bf68580();
          _objc_release(puVar6);
        }
        _objc_release(puVar16);
        puVar16 = puStack_178;
        puVar6 = puStack_170;
        puVar10 = puStack_168;
        puVar9 = puStack_160;
        puVar11 = puStack_148;
        if ((long)puVar8 < 4) {
          if (puVar8 == (undefined *)0x1) {
            puVar12 = puStack_168;
            puVar10 = puVar17;
            if (puStack_168 != (undefined *)0x0) {
              puVar17 = puStack_168;
              puVar10 = puStack_168;
            }
            goto LAB_1054679cc;
          }
          if (puVar8 == (undefined *)0x2) {
            puVar12 = puStack_148;
            puVar11 = puVar17;
            if (puStack_148 != (undefined *)0x0) {
              puVar17 = puStack_148;
              puVar11 = puStack_148;
            }
            goto LAB_1054679cc;
          }
        }
        else {
          if (puVar8 == (undefined *)0x4) {
            puVar12 = puStack_178;
            puVar16 = puVar17;
            if (puStack_178 != (undefined *)0x0) {
              puVar17 = puStack_178;
              puVar16 = puStack_178;
            }
          }
          else {
            puVar12 = puStack_160;
            puVar9 = puVar17;
            if (puVar8 != (undefined *)0x7) {
              if (puVar8 != (undefined *)0x8) goto LAB_1054679dc;
              puVar12 = puStack_170;
              puVar6 = puVar17;
              puVar9 = puStack_160;
              if (puStack_170 != (undefined *)0x0) {
                puVar17 = puStack_170;
                puVar6 = puStack_170;
              }
            }
          }
LAB_1054679cc:
          puStack_148 = puVar11;
          puStack_160 = puVar9;
          puStack_168 = puVar10;
          puStack_170 = puVar6;
          puStack_178 = puVar16;
          _objc_retain(puVar17);
          _objc_release(puVar12);
        }
LAB_1054679dc:
        lVar18 = lVar18 + 1;
      } while (lVar5 != lVar18);
      lVar5 = param_1;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    _objc_release(param_1);
    unaff_x26 = puStack_190;
    if (puStack_190 == (undefined *)0x0) {
      if (puStack_1a0 == (undefined *)0x0) {
        if (unaff_x25 == (undefined *)0x0) goto LAB_105467a5c;
        if (puStack_198 == (undefined *)0x0) {
          puStack_190 = (undefined *)0x0;
          puStack_1a0 = (undefined *)0x0;
          puStack_198 = (undefined *)0x0;
          unaff_x26 = puStack_180;
          if (unaff_x19 != (undefined *)0x0) {
            unaff_x26 = unaff_x19;
          }
        }
        else {
          puStack_190 = (undefined *)0x0;
          puStack_1a0 = (undefined *)0x0;
          unaff_x26 = puStack_198;
        }
      }
      else {
        puStack_190 = (undefined *)0x0;
        unaff_x26 = puStack_1a0;
      }
    }
  }
  _objc_retain(unaff_x26);
  if (((((unaff_x25 == (undefined *)0x0) && (puStack_138 == (undefined *)0x0)) &&
       ((puStack_160 == (undefined *)0x0 &&
        ((puStack_168 == (undefined *)0x0 &&
         (puVar16 = param_2, func_0x00010bf529e0(), puVar16 == (undefined *)0x0)))))) &&
      (unaff_x26 == (undefined *)0x0)) && (unaff_x27 == (undefined *)0x0)) {
    unaff_x28 = (undefined *)0x0;
  }
  else {
    unaff_x28 = puStack_188;
    if (puStack_158 != (undefined *)0x0) {
      unaff_x28 = puStack_158;
    }
    _objc_retain(unaff_x28);
    puStack_1b8 = unaff_x27;
    if (unaff_x27 != (undefined *)0x0) goto LAB_105467b40;
  }
  puVar16 = unaff_x19;
  if (puStack_170 != (undefined *)0x0) {
    puVar16 = puStack_170;
  }
  puVar8 = puStack_148;
  if (puStack_148 == (undefined *)0x0) {
    puVar8 = puVar16;
  }
  puStack_1b8 = puStack_198;
  if (puStack_198 == (undefined *)0x0) {
    puStack_1b8 = puVar8;
  }
LAB_105467b40:
  _objc_retain(puStack_1b8);
  puVar8 = puStack_150;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar6 = puVar4;
  func_0x00010c2bb720();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = unaff_x28;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar17 = puVar6;
  func_0x00010c2a8a00();
  _objc_retainAutoreleasedReturnValue();
  unaff_x21 = unaff_x25;
  func_0x00010bf428e0(unaff_x25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar9 = puVar17;
  func_0x00010c2a8960();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = unaff_x26;
  func_0x00010bf428e0(unaff_x26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar12 = puVar9;
  func_0x00010c2a88c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puStack_1b8;
  func_0x00010bf428e0(puStack_1b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  puVar16 = puVar12;
  func_0x00010c2bb700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(unaff_x21);
  _objc_release(puVar17);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar8);
  if (((unaff_x26 == (undefined *)0x0) && (unaff_x28 != (undefined *)0x0)) &&
     (puVar8 = param_2, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
    unaff_x21 = param_2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = unaff_x21;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x20 == (undefined *)0x0) goto LAB_105467e64;
    uVar19 = *(undefined8 *)(unaff_x20 + 0x78);
    puVar4 = puVar16;
    goto LAB_105467ce4;
  }
  while( true ) {
    _objc_retain(puVar16);
    _objc_release(puStack_1b8);
    _objc_release(unaff_x28);
    _objc_release(unaff_x26);
    _objc_release(unaff_x19);
    _objc_release(puStack_180);
    _objc_release(puStack_178);
    _objc_release(puStack_148);
    _objc_release(puStack_170);
    _objc_release(puStack_160);
    _objc_release(puStack_168);
    _objc_release(unaff_x27);
    _objc_release(puStack_190);
    _objc_release(puStack_198);
    _objc_release(puStack_1a0);
    _objc_release(unaff_x25);
    _objc_release(puStack_138);
    _objc_release(puStack_158);
    _objc_release(puStack_188);
    _objc_release(puStack_150);
    _objc_release(puVar16);
    unaff_x20 = unaff_x28;
    unaff_x28 = puVar4;
LAB_105467dd4:
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) break;
    ___stack_chk_fail();
LAB_105467e64:
    uVar19 = 0;
    puVar4 = puVar16;
LAB_105467ce4:
    puVar16 = puVar4;
    func_0x00010c2a88c0(uVar19,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(unaff_x20);
    _objc_release(unaff_x21);
    puVar4 = unaff_x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 105467e6c; end: 1054680ef;  */

/* WARNING: Removing unreachable block (ram,0x000105467ff8) */
/* WARNING: Removing unreachable block (ram,0x000105467fb4) */

double FUN_105467e6c(double param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  uint uVar10;
  undefined8 unaff_x25;
  long unaff_x26;
  bool bVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double unaff_d9;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  dVar14 = 0.0;
  if (param_2 != 0) {
    param_1 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    lVar3 = param_2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      unaff_x25 = 0;
      bVar11 = false;
      unaff_x24 = 0;
      unaff_x26 = *plStack_150;
      dVar15 = 0.0;
      dVar18 = 0.0;
      dVar17 = 0.0;
      do {
        lVar12 = 0;
        dVar16 = dVar15;
        do {
          dVar13 = param_1;
          if (*plStack_150 != unaff_x26) {
            _objc_enumerationMutation(param_2);
            dVar13 = param_1;
          }
          unaff_x21 = *(ulong *)(lStack_158 + lVar12 * 8);
          uVar4 = unaff_x21;
          func_0x00010c098ba0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x22 = 0;
          param_1 = dVar13;
          dVar15 = dVar16;
          if (uVar4 != 0) {
            uVar4 = unaff_x21;
            func_0x00010c098ba0(unaff_x21);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            param_1 = dVar13;
            _objc_release(uVar5);
            _objc_release(uVar4);
            unaff_x22 = unaff_x21;
            func_0x00010c098ba0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = unaff_x22;
            func_0x00010c25e900();
            _objc_release(unaff_x22);
            unaff_d9 = dVar13;
            if (uVar4 == 1) {
              unaff_x25 = 1;
              unaff_x23 = 1;
              dVar18 = dVar13;
LAB_105468034:
              if (bVar11) {
                unaff_x25 = 0;
                bVar11 = false;
                param_1 = dVar17 - dVar18;
                dVar14 = dVar14 + param_1;
                dVar18 = 0.0;
                dVar17 = 0.0;
                goto LAB_105468074;
              }
            }
            else {
              unaff_x22 = unaff_x21;
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = unaff_x22;
              func_0x00010c25e900();
              uVar10 = (uint)unaff_x25;
              uVar1 = uVar4 == 4 & uVar10;
              unaff_x23 = (ulong)uVar1;
              _objc_release(unaff_x22);
              if (uVar1 != 0) {
                unaff_x25 = 1;
                bVar11 = true;
                dVar17 = dVar13;
                goto LAB_105468034;
              }
              func_0x00010c098ba0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = unaff_x21;
              func_0x00010c25e900();
              unaff_x22 = (ulong)(uVar4 == 2);
              _objc_release(unaff_x21);
              uVar1 = uVar4 == 2 & uVar10;
              dVar15 = dVar13;
              if (uVar1 == 0) {
                dVar15 = dVar16;
              }
              unaff_x24 = (ulong)(uVar1 | (uint)unaff_x24);
              if (uVar10 != 0) goto LAB_105468034;
            }
            if (((uint)unaff_x25 & (uint)unaff_x24) != 0) {
              unaff_x25 = 0;
              unaff_x24 = 0;
              param_1 = dVar15 - dVar18;
              dVar14 = dVar14 + param_1;
              dVar15 = 0.0;
              dVar18 = 0.0;
            }
          }
LAB_105468074:
          lVar12 = lVar12 + 1;
          dVar16 = dVar15;
        } while (lVar3 != lVar12);
        lVar3 = param_2;
        func_0x00010bf52a60();
        unaff_x20 = 0;
      } while (lVar3 != 0);
    }
  }
  lVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    pcStack_168 = FUN_1054680f0;
    dStack_1c0 = unaff_d9;
    dStack_1b8 = dVar14;
    lStack_1b0 = unaff_x26;
    uStack_1a8 = unaff_x25;
    uStack_1a0 = unaff_x24;
    uStack_198 = unaff_x23;
    uStack_190 = unaff_x22;
    uStack_188 = unaff_x21;
    uStack_180 = unaff_x20;
    lStack_178 = param_2;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(param_3);
    lVar12 = lVar3;
    func_0x00010bf529e0();
    dVar14 = 0.0;
    if ((lVar12 != 0) && (lVar12 = param_3, func_0x00010bf529e0(), lVar12 != 0)) {
      puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c226900();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c226900();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1e0 = 0xc2000000;
      pcStack_1d8 = FUN_105468328;
      puStack_1d0 = &UNK_11088a9d0;
      puStack_1c8 = puVar6;
      _objc_retain(puVar6);
      lVar12 = lVar3;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
        lVar12 = lVar3;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_210 = puVar2;
      uStack_208 = 0xc2000000;
      pcStack_200 = FUN_1054683d8;
      puStack_1f8 = &UNK_11088a9d0;
      puStack_1f0 = puVar7;
      _objc_retain(puVar7);
      lVar8 = param_3;
      func_0x0001006372a4(param_3,&puStack_210);
      lVar9 = lVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      dVar14 = 0.0;
      if ((lVar12 != 0) && (lVar9 != 0)) {
        lVar8 = lVar12;
        func_0x00010bf428e0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        dVar15 = param_1;
        _objc_release(lVar8);
        lVar8 = lVar9;
        func_0x00010bf428e0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        _objc_release(lVar8);
        dVar14 = 0.0;
        if (0.0 <= dVar15 - param_1) {
          dVar14 = dVar15 - param_1;
        }
      }
      _objc_release(lVar9);
      _objc_release(puStack_1f0);
      _objc_release(lVar12);
      _objc_release(puStack_1c8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(param_3);
    _objc_release(lVar3);
    return dVar14;
  }
  return dVar14;
}



/* Entry: 1054680f0; end: 105468327;  */

double FUN_1054680f0(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010bf529e0();
  dVar8 = 0.0;
  if ((lVar2 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105468328;
    puStack_70 = &UNK_11088a9d0;
    puStack_68 = puVar3;
    _objc_retain(puVar3);
    lVar2 = param_2;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = param_2;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1054683d8;
    puStack_98 = &UNK_11088a9d0;
    puStack_90 = puVar4;
    _objc_retain(puVar4);
    lVar5 = param_3;
    func_0x0001006372a4(param_3,&puStack_b0);
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    dVar8 = 0.0;
    if ((lVar2 != 0) && (lVar6 != 0)) {
      lVar5 = lVar2;
      func_0x00010bf428e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      dVar7 = param_1;
      _objc_release(lVar5);
      lVar5 = lVar6;
      func_0x00010bf428e0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      _objc_release(lVar5);
      dVar8 = 0.0;
      if (0.0 <= dVar7 - param_1) {
        dVar8 = dVar7 - param_1;
      }
    }
    _objc_release(lVar6);
    _objc_release(puStack_90);
    _objc_release(lVar2);
    _objc_release(puStack_68);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return dVar8;
}



/* Entry: 105468328; end: 105468393;  */

undefined8 FUN_105468328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c098ba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0f4880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105468394; end: 1054683d7;  */

bool FUN_105468394(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c068380(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c068280();
  _objc_release(param_2);
  return lVar1 == 4;
}



/* Entry: 1054683d8; end: 105468443;  */

undefined8 FUN_1054683d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c098ba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0f4880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105468444; end: 1054685bb;  */

undefined8 FUN_105468444(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  ulong unaff_x22;
  long lVar5;
  long lVar6;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x21 = *(ulong *)(lStack_128 + lVar6 * 8);
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x21;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b93a0;
        func_0x00010c277ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = unaff_x22;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_10546856c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar4 = 0;
  }
LAB_10546856c:
  _objc_release(param_1);
  lVar1 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1054685bc;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  uStack_150 = uVar4;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 0xffffffffffffffff;
  func_0x00010bf97e80(lVar1);
  uVar4 = puStack_178[3];
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 1054685bc; end: 1054686db;  */

undefined8 FUN_1054685bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  func_0x00010bf97e80(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1054686dc; end: 105468817;  */

void FUN_1054686dc(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c098ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25e900();
  _objc_release(lVar1);
  if (lVar2 < 10) {
    if (lVar2 == 4) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    }
    else if ((lVar2 == 5) && (*(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < param_3)
            ) {
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    }
  }
  else if (lVar2 == 10) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      bVar3 = *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) ^ 1;
    }
    else {
      bVar3 = 0;
    }
    **(byte **)(param_1 + 0x38) = bVar3 & 1;
  }
  else if (lVar2 == 0xc) {
    lVar1 = param_2;
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0725e0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
      *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105468818; end: 105468d7b; +[SCAdTrackWebViewEventParser parseResultForTrackWebViewUiEvents:prevAdViewtrackEvents:adConfigProvider:adConfigProviderV2:] */

void FUN_105468818(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined1 *param_5,undefined *param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong unaff_x27;
  ulong unaff_x28;
  double dVar21;
  double dVar22;
  double unaff_d8;
  double unaff_d9;
  ulong uStack_228;
  double dStack_220;
  double dStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined *puStack_200;
  undefined1 *puStack_1f8;
  ulong uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  uint uStack_188;
  uint uStack_184;
  long lStack_180;
  ulong uStack_178;
  undefined4 uStack_16c;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte bStack_111;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_4;
  puVar13 = param_5;
  puVar14 = param_6;
  uVar15 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = param_6;
    uStack_1b0 = param_7;
    puStack_1a0 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar17;
    func_0x00010bf8f560();
    uStack_188 = (uint)puVar2;
    _objc_release(puVar17);
    puStack_1a8 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_6;
    func_0x00010bf90200();
    uStack_16c = SUB84(puVar17,0);
    _objc_release(param_6);
    uStack_198 = param_4;
    FUN_1054651a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010bf529e0();
    uStack_190 = param_4;
    if (uVar1 == 0) {
      uStack_184 = 0;
      unaff_x27 = 0;
      unaff_d8 = 0.0;
    }
    else {
      lVar19 = 0;
      unaff_x27 = 0;
      uStack_184 = 0;
      unaff_x28 = 0;
      unaff_d9 = -1.0;
      unaff_d8 = 0.0;
      do {
        uVar1 = param_4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        bStack_111 = 0;
        uVar12 = uVar1;
        FUN_105468444();
        uVar3 = uVar1;
        if ((int)uVar12 == 0) {
          if (uStack_188 == 0) {
            FUN_10546535c(uVar1,&bStack_111,uStack_16c);
          }
          else {
            FUN_105465728(uVar1,&bStack_111,uStack_16c);
          }
        }
        else {
          FUN_1054685bc(uVar1,&bStack_111,uStack_16c);
        }
        uStack_168 = uVar3;
        if ((unaff_x27 == 0) && (0 < (long)uVar3)) {
          _objc_retain(uVar1);
          uStack_184 = (uint)bStack_111;
          unaff_x27 = uVar1;
        }
        uVar12 = uVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar12;
        func_0x00010c098ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar3;
        func_0x00010c073520();
        _objc_release(uVar3);
        dVar21 = param_1;
        if ((int)uVar20 != 0) {
          uVar3 = uVar12;
          func_0x00010bf428e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          dVar21 = param_1;
          _objc_release(uVar3);
          unaff_d9 = param_1;
        }
        if (0.0 < unaff_d9) {
          dVar21 = 0.0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          lStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          plStack_150 = (long *)0x0;
          _objc_retain(uVar1);
          puVar13 = auStack_110;
          puVar14 = (undefined *)0x10;
          uVar3 = uVar1;
          func_0x00010bf52a60();
          if (uVar3 != 0) {
            lVar16 = *plStack_150;
            lStack_180 = lVar19;
            uStack_178 = unaff_x27;
            do {
              uVar20 = 0;
              do {
                if (*plStack_150 != lVar16) {
                  _objc_enumerationMutation(uVar1);
                }
                lVar18 = *(long *)(lStack_158 + uVar20 * 8);
                lVar19 = lVar18;
                func_0x00010c098ba0();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar19;
                func_0x00010c25e900();
                if (lVar4 == 8) {
                  _objc_release(lVar19);
LAB_105468af4:
                  func_0x00010bf428e0(lVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2709c0();
                  _objc_release(lVar18);
                  dVar22 = dVar21 - unaff_d9;
                  dVar21 = 0.0;
                  if (0.0 <= dVar22) {
                    dVar21 = dVar22;
                  }
                  unaff_d8 = unaff_d8 + dVar21;
                  param_4 = uStack_190;
                  unaff_x27 = uStack_178;
                  lVar19 = lStack_180;
                  goto LAB_105468b30;
                }
                lVar4 = lVar18;
                func_0x00010c098ba0();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar4;
                func_0x00010c25e900();
                _objc_release(lVar4);
                _objc_release(lVar19);
                if (lVar5 == 10) goto LAB_105468af4;
                uVar20 = uVar20 + 1;
              } while (uVar3 != uVar20);
              puVar13 = auStack_110;
              puVar14 = (undefined *)0x10;
              uVar3 = uVar1;
              func_0x00010bf52a60();
              param_4 = uStack_190;
              unaff_x27 = uStack_178;
              lVar19 = lStack_180;
            } while (uVar3 != 0);
          }
LAB_105468b30:
          _objc_release(uVar1);
          unaff_d9 = -1.0;
        }
        uVar3 = uStack_168;
        param_1 = dVar21;
        if (0 < (long)uStack_168) {
          uVar20 = uVar1;
          func_0x00010c089820(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar20;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          param_1 = dVar21;
          _objc_release(uVar6);
          _objc_release(uVar20);
          unaff_d9 = dVar21;
        }
        lVar19 = uVar3 + lVar19;
        _objc_release(uVar12);
        _objc_release(uVar1);
        unaff_x28 = unaff_x28 + 1;
        uVar1 = param_4;
        func_0x00010bf529e0();
      } while (unaff_x28 < uVar1);
    }
    if ((uStack_188 & 1) == 0) {
      func_0x000105464d14(unaff_x27);
    }
    else {
      FUN_105464f00(unaff_x27);
    }
    param_4 = uStack_198;
    param_5 = puStack_1a0;
    param_6 = puStack_1a8;
    puVar17 = PTR_PTR_1126b9348;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar17;
    func_0x00010c2bab40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    param_1 = unaff_d8;
    func_0x00010c2a9840(unaff_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x23;
    func_0x00010c2a89a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = (ulong)(uStack_184 & 1);
    puVar7 = puVar2;
    func_0x00010c2b0240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar17);
    puVar17 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar17;
    func_0x00010bf8f2a0();
    _objc_release(puVar17);
    puVar17 = puVar7;
    if ((int)unaff_x21 != 0) {
      FUN_105467e6c(param_4);
      puVar2 = puVar7;
      func_0x00010c2bb760();
      _objc_retainAutoreleasedReturnValue();
      FUN_1054680f0(param_5,param_4);
      puVar17 = puVar2;
      func_0x00010c2b74c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar2);
      unaff_x21 = puVar17;
    }
    param_7 = uStack_1b0;
    _objc_release(unaff_x27);
    _objc_release(uStack_190);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    pcStack_1b8 = FUN_105468d7c;
    dStack_220 = unaff_d9;
    dStack_218 = unaff_d8;
    uStack_210 = unaff_x28;
    uStack_208 = unaff_x27;
    puStack_200 = param_6;
    puStack_1f8 = param_5;
    uStack_1f0 = param_4;
    puStack_1e8 = unaff_x23;
    puStack_1e0 = unaff_x22;
    puStack_1d8 = unaff_x21;
    puStack_1d0 = puVar17;
    uStack_1c8 = param_7;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar12);
    _objc_retain(puVar13);
    _objc_retain(puVar14);
    _objc_retain(uVar15);
    uVar1 = uVar12;
    func_0x00010bf529e0();
    if (uVar1 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      uVar1 = uVar12;
      func_0x000105464d14();
      uStack_228 = uVar1;
      if (uVar1 - 1 < 2) {
        FUN_105466250(uVar12,puVar14,&uStack_228);
        FUN_105466d78(uVar12,puVar14);
        puVar17 = PTR_PTR_1126b9348;
        func_0x00010bfe6000(PTR_PTR_1126b9348);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar17;
        func_0x00010c2bab40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c2a9840(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c2a89a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c2b0240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar17);
        uVar10 = uVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf8f2a0();
        _objc_release(uVar10);
        puVar17 = puVar9;
        if ((int)uVar11 != 0) {
          FUN_105467e6c(uVar12);
          puVar2 = puVar9;
          func_0x00010c2bb760(puVar9);
          _objc_retainAutoreleasedReturnValue();
          FUN_1054680f0(puVar13,uVar12);
          puVar17 = puVar2;
          func_0x00010c2b74c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(puVar2);
        }
      }
      else {
        puVar17 = PTR_PTR_1126b9348;
        func_0x00010bfe6000(PTR_PTR_1126b9348);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105468d7c; end: 105468f83; +[SCAdTrackWebViewEventParser parseResultForTrackWebViewUiEventsV2:prevAdViewtrackEvents:instantPageEvents:adConfigProvider:adConfigProviderV2:] */

void FUN_105468d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x000105464d14();
    lStack_78 = lVar1;
    if (lVar1 - 1U < 2) {
      FUN_105466250(param_4,param_6,&lStack_78);
      FUN_105466d78(param_4,param_6);
      puVar8 = PTR_PTR_1126b9348;
      func_0x00010bfe6000(PTR_PTR_1126b9348);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010c2bab40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a9840(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a89a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2b0240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar8);
      uVar6 = param_7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf8f2a0();
      _objc_release(uVar6);
      puVar8 = puVar5;
      if ((int)uVar7 != 0) {
        FUN_105467e6c(param_4);
        puVar2 = puVar5;
        func_0x00010c2bb760(puVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_1054680f0(param_5,param_4);
        puVar8 = puVar2;
        func_0x00010c2b74c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar2);
      }
    }
    else {
      puVar8 = PTR_PTR_1126b9348;
      func_0x00010bfe6000(PTR_PTR_1126b9348);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105468f84; end: 1054698ef; +[SCAdTrackWebViewEventParser parseResultForTrackWebViewMetricEvents:instantPageEvents:instantPageEnabled:adConfigProvider:adConfigProviderV2:] */

void FUN_105468f84(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar7 = param_3;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_1054698f0;
    uStack_110 = 0x105469900;
    uStack_108 = 0;
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_1054698f0;
    uStack_140 = 0x105469900;
    uStack_138 = 0;
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_1054698f0;
    uStack_170 = 0x105469900;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x2020000000;
    uStack_198 = 0;
    puStack_1c8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x2020000000;
    uStack_1b8 = 0;
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x2020000000;
    uStack_1d8 = 0;
    puStack_218 = &uStack_220;
    uStack_220 = 0;
    uStack_210 = 0x3032000000;
    pcStack_208 = FUN_1054698f0;
    uStack_200 = 0x105469900;
    uStack_1f8 = 0;
    puStack_238 = &uStack_240;
    uStack_240 = 0;
    uStack_230 = 0x2020000000;
    uStack_228 = 0;
    puStack_258 = &uStack_260;
    uStack_260 = 0;
    uStack_250 = 0x2020000000;
    uStack_248 = 0;
    puStack_288 = &uStack_290;
    uStack_290 = 0;
    uStack_280 = 0x3032000000;
    pcStack_278 = FUN_1054698f0;
    uStack_270 = 0x105469900;
    uStack_268 = 0;
    puStack_2b8 = &uStack_2c0;
    uStack_2c0 = 0;
    uStack_2b0 = 0x3032000000;
    pcStack_2a8 = FUN_1054698f0;
    uStack_2a0 = 0x105469900;
    uStack_298 = 0;
    puStack_2e8 = &uStack_2f0;
    uStack_2f0 = 0;
    uStack_2e0 = 0x3032000000;
    pcStack_2d8 = FUN_1054698f0;
    uStack_2d0 = 0x105469900;
    uStack_2c8 = 0;
    puStack_308 = &uStack_310;
    uStack_310 = 0;
    uStack_300 = 0x2020000000;
    uStack_2f8 = 0;
    dVar9 = 0.0;
    puStack_168 = puVar6;
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lVar5 * 8);
        lVar1 = lVar8;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          func_0x00010c2a4740(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar8;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_6);
          func_0x00010c0c1780(lVar1);
          _objc_release(lVar1);
          _objc_release(lVar8);
          _objc_release(param_6);
        }
        lVar5 = lVar5 + 1;
      } while (lVar7 != lVar5);
      lVar7 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar2 = puStack_158[5];
    func_0x00010c2aea40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_158[5];
    puStack_158[5] = uVar2;
    _objc_release(uVar4);
    uVar2 = puStack_158[5];
    func_0x00010c2af260();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_158[5];
    puStack_158[5] = uVar2;
    _objc_release(uVar4);
    uVar2 = puStack_158[5];
    func_0x00010c2af280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_158[5];
    puStack_158[5] = uVar2;
    _objc_release(uVar4);
    func_0x00010bf885a0(puStack_288[5]);
    uVar2 = puStack_128[5];
    dVar10 = dVar9;
    func_0x00010c09bfa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    lVar7 = puStack_128[5];
    if ((((lVar7 != 0) || (puStack_158[5] != 0)) || ((*(byte *)(puStack_238 + 3) & 1) != 0)) ||
       ((((param_5 & 1) != 0 || ((*(byte *)(puStack_258 + 3) & 1) != 0)) || (dVar10 < dVar9)))) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puStack_128[5];
      puStack_128[5] = lVar7;
      _objc_release(uVar2);
      _objc_release(puVar6);
      if (puStack_2b8[5] != 0) {
        uVar2 = puStack_128[5];
        func_0x00010c2a9980();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puStack_128[5];
        puStack_128[5] = uVar2;
        _objc_release(uVar4);
      }
      if (puStack_2e8[5] != 0) {
        uVar2 = puStack_128[5];
        func_0x00010c2a9960();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puStack_128[5];
        puStack_128[5] = uVar2;
        _objc_release(uVar4);
      }
      uVar2 = param_7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf1f480();
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        uVar2 = puStack_128[5];
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2af540();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puStack_128[5];
        puStack_128[5] = uVar2;
        _objc_release(uVar4);
        _objc_release(puVar6);
      }
      if (dVar10 < dVar9) {
        uVar2 = puStack_128[5];
        func_0x00010c2b2f00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puStack_128[5];
        puStack_128[5] = uVar2;
        _objc_release(uVar4);
      }
      lVar7 = param_4;
      func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_11088b178);
      if (puStack_308[3] == 0) {
        lVar3 = lVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          puStack_308[3] = 3;
        }
      }
      puVar6 = PTR_PTR_1126b93b0;
      _objc_alloc(PTR_PTR_1126b93b0);
      func_0x00010c062f80();
      _objc_release(lVar7);
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    __Block_object_dispose(&uStack_310,8);
    __Block_object_dispose(&uStack_2f0,8);
    _objc_release(uStack_2c8);
    __Block_object_dispose(&uStack_2c0,8);
    _objc_release(uStack_298);
    __Block_object_dispose(&uStack_290,8);
    _objc_release(uStack_268);
    __Block_object_dispose(&uStack_260,8);
    __Block_object_dispose(&uStack_240,8);
    __Block_object_dispose(&uStack_220,8);
    _objc_release(uStack_1f8);
    __Block_object_dispose(&uStack_1f0,8);
    __Block_object_dispose(&uStack_1d0,8);
    __Block_object_dispose(&uStack_1b0,8);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(puStack_168);
    __Block_object_dispose(&uStack_160,8);
    _objc_release(uStack_138);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_310,8);
  __Block_object_dispose(&uStack_2f0,8);
  __Block_object_dispose(&uStack_2c0,8);
  __Block_object_dispose(&uStack_290,8);
  __Block_object_dispose(&uStack_260,8);
  __Block_object_dispose(&uStack_240,8);
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_1f0,8);
  __Block_object_dispose(&uStack_1d0,8);
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_190,8);
  __Block_object_dispose(&uStack_160,8);
  lVar7 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 1054698f0; end: 105469907;  */

void FUN_1054698f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105469908; end: 10546993f;  */

void FUN_105469908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105469940; end: 105469a87;  */

void FUN_105469940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
    puVar1 = PTR_PTR_1126b93a8;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c2ae2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c2ae300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  if ((param_5 != 0) &&
     (*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1, param_6 != 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105469a88; end: 105469a8f;  */

void FUN_105469a88(void)

{
  return;
}



/* Entry: 105469a90; end: 105469b43;  */

void FUN_105469a90(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  lVar1 = param_2;
  if (*(long *)(lVar3 + 0x28) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
  }
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar1 = param_3;
  if (*(long *)(lVar3 + 0x28) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
  }
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105469b44; end: 105469bbf;  */

void FUN_105469b44(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
  if (dVar4 < param_1) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105469bc0; end: 105469bc7;  */

void FUN_105469bc0(void)

{
  return;
}



/* Entry: 105469bc8; end: 105469dd7;  */

/* WARNING: Removing unreachable block (ram,0x000105469c7c) */

void FUN_105469bc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf8f020();
  if ((int)puVar2 != 0) {
    bVar7 = *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if ((bVar7 & 1) != 0) goto LAB_105469db8;
    uVar6 = param_2;
    func_0x00010bf64920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_retain(puVar1);
    _objc_release(puVar1);
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf8f040();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)puVar3;
    }
    else {
      puVar2 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      if (((*(byte *)(lVar8 + 0x18) & 1) == 0) && ((int)puVar3 != 0)) {
        *(char *)(lVar8 + 0x18) = (char)puVar3;
        lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        _objc_retain(puVar2);
        uVar6 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined **)(lVar8 + 0x28) = puVar2;
        _objc_release(uVar6);
      }
      else {
        lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        func_0x00010c08fa60();
        if (lVar8 == 0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
          func_0x00010c0720c0();
          bVar7 = bVar7 ^ 1;
        }
        *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
             *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & bVar7;
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar1);
LAB_105469db8:
  _objc_release(param_2);
  return;
}



/* Entry: 105469dd8; end: 105469de7;  */

void FUN_105469dd8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105469de8; end: 105469e7b;  */

void FUN_105469de8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release();
    _objc_release(lVar1);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x10);
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0x15) {
      _objc_retain(param_2);
      lVar1 = param_2;
      goto LAB_105469e60;
    }
  }
  lVar1 = 0;
LAB_105469e60:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105469e7c; end: 105469eff; +[SCAdTrackWebViewEventParser swipeCountForWebViewUserEvents:] */

undefined8 FUN_105469e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11088b198);
  uVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105469f00; end: 105469fff; +[SCAdTrackWebViewEventParser swipeCountForWebViewEvents:] */

undefined8 FUN_105469f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_3);
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10546a000;
  puStack_40 = &UNK_11088a9d0;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf529e0(uVar2);
  _objc_release(uVar2);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10546a000; end: 10546a0c7;  */

undefined8 FUN_10546a000(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a4740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25e900();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c098ba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a47e0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10546a0c8; end: 10546a1ef; +[SCAdTrackWebViewEventParser swipeCountForLifecycleEvents:] */

long FUN_10546a0c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10546a1f0;
  puStack_58 = &UNK_11088b1b8;
  puStack_50 = puVar1;
  puStack_48 = puVar2;
  _objc_retain();
  _objc_retain(puVar1);
  lVar3 = param_3;
  func_0x0001006372a4(param_3,&puStack_70);
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar4 = param_3;
    FUN_105466850(param_3);
  }
  _objc_release(puStack_48);
  _objc_release(puStack_50);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10546a1f0; end: 10546a327;  */

bool FUN_10546a1f0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar8 = *(ulong *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c098ba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25e900();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar8 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + 0x28);
    lVar4 = param_2;
    func_0x00010c098ba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf68580();
    func_0x00010c0df780(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if ((uVar8 & 1) == 0) {
      lVar6 = param_2;
      func_0x00010c068380(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c068280();
      bVar1 = lVar7 == 5;
      _objc_release(lVar6);
    }
    else {
      bVar1 = true;
    }
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10546a328; end: 10546a38b; +[SCAdTrackWebViewEventParser swipeCountForWebViewEvents:uiTrackEvents:] */

undefined *
FUN_10546a328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b9368;
  func_0x00010c2646e0(PTR_PTR_1126b9368,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b9368;
    func_0x00010c2646c0(PTR_PTR_1126b9368,param_2,param_4);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10546a38c; end: 10546a3af; -[SCAdTrackParserSymbolicModel copyWithZone:] */

undefined8 FUN_10546a38c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10546a3b0; end: 10546a423; -[SCAdTrackParserSymbolicModel hash] */

undefined8 * FUN_10546a3b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10546a4a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10546a4b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10546a4b0;
        }
        goto LAB_10546a4a4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10546a4b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10546a424; end: 10546a4cb; -[SCAdTrackParserSymbolicModel isEqual:] */

long FUN_10546a424(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10546a4a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10546a4b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10546a4b0;
        }
        goto LAB_10546a4a4;
      }
    }
    lVar3 = 0;
  }
LAB_10546a4b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10546a4cc; end: 10546a58f; -[SCAdTrackParserSymbolicModel .cxx_destruct] */

void FUN_10546a4cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10546a590; end: 10546a597;  */

void FUN_10546a590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 10546a598; end: 10546a7a7; -[SCUnlockableAdTracker _submitAdLifecycleAdTrackEvent:requestStartTime:] */

void FUN_10546a598(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = param_1;
  _objc_retain(param_4);
  ppuVar1 = param_4;
  func_0x00010c264ca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar2);
    ppuVar2 = param_4;
    func_0x00010bf5ab60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar11 = uVar10;
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    puVar7 = PTR_PTR_1126b8ca0;
    ppuVar4 = param_4;
    func_0x00010bef60a0(param_4);
    func_0x00010c25d240(puVar7,param_3,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010be1cbe0(param_2,param_3,puVar7);
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0a0700(uVar10,param_1,uVar11,uVar9,param_3,ppuVar1,ppuVar2,puVar7,lVar8,0,1,1);
    _objc_release(ppuVar2);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10546a7a8; end: 10546aea3; -[SCUnlockableAdTracker trackUnlockableAd:] */

void FUN_10546a7a8(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong in_stack_fffffffffffffe90;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    puVar17 = param_4;
    func_0x00010c278ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b8c98;
    func_0x00010c290ae0();
    puVar7 = puVar17;
    if ((int)puVar6 != 0) {
      puVar7 = PTR_PTR_1126b8cc8;
      func_0x00010c24d500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    puVar17 = param_4;
    func_0x00010c120400(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar17);
    func_0x00010be5a140(param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c292860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfcbcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar17 = PTR_PTR_1126b93c8;
    lVar8 = *(long *)(param_2 + 0x50);
    if (lVar8 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13aee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
    }
    uVar18 = *(undefined8 *)(param_2 + 0x20);
    puVar6 = param_4;
    func_0x00010c15e680(param_4);
    uVar19 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_4;
    func_0x000106bc22e4(param_4,uVar18,uVar5,puVar6,uVar19,uVar4,uVar9,puVar17,uVar10,
                        *(undefined8 *)(param_2 + 0x60),
                        in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar4);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    puVar6 = param_4;
    func_0x00010c15e680(param_4);
    uVar18 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_4;
    func_0x000106bc22e4(param_4,uVar10,uVar5,puVar6,uVar18,uVar4,uVar9,puVar17,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar4);
    func_0x00010c06a4a0(param_4);
    lVar8 = param_2;
    func_0x00010be41420();
    puVar6 = param_4;
    func_0x00010c278a40();
    iVar2 = (int)*(undefined8 *)(param_2 + 0x38);
    func_0x00010c06b980();
    if (((iVar2 != 0) && (puVar6 == (undefined *)0x2)) && ((uint)lVar8 != 0)) {
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ee80();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a08e0();
      _objc_release(uVar4);
    }
    iVar2 = (int)*(undefined8 *)(param_2 + 0x38);
    func_0x00010c06b9a0();
    if ((iVar2 != 0) && (puVar6 == (undefined *)0x2)) {
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ee80();
      _objc_release(uVar4);
    }
    func_0x00010bec5d80(param_1,param_2);
    uVar3 = (uint)*(undefined8 *)(param_2 + 0x38);
    func_0x00010c06b9c0();
    uVar1 = 0;
    if (puVar6 == (undefined *)0x2) {
      uVar1 = uVar3;
    }
    if ((uVar1 & (uint)lVar8 & 1) == 0) {
      uVar9 = 1;
      func_0x00010848cca0(1,0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c0d3c80();
      _objc_release(uVar9);
      puVar13 = param_4;
      func_0x00010c278600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar13 != (undefined *)0x0) {
        puVar13 = param_4;
        func_0x00010c278600(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar4);
        _objc_release(puVar13);
      }
      puVar13 = PTR_PTR_1126b8ca0;
      func_0x00010bef60a0(param_4);
      func_0x00010c25d240();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126b8df0;
      _objc_alloc();
      uVar10 = *(undefined8 *)(param_2 + 8);
      func_0x00010c291200(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf51e00(uVar4);
      puVar15 = puVar11;
      func_0x00010bf63640(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = param_4;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c05a380();
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(uVar9);
      _objc_release(uVar10);
      puVar15 = param_4;
      func_0x00010c278a40();
      uVar9 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0900();
      _objc_release(uVar9);
      if (puVar6 == (undefined *)0x2) {
        uVar9 = *(undefined8 *)(param_2 + 0x40);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a08e0();
        _objc_release(uVar9);
      }
      _objc_initWeak(auStack_80,param_2);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10546aea4;
      puStack_a0 = &UNK_11088b248;
      _objc_copyWeak(auStack_90,auStack_80);
      _objc_retain(puVar14);
      puStack_98 = puVar14;
      puStack_88 = puVar15;
      _objc_copyWeak(auStack_c8,auStack_80);
      _objc_retain(puVar14);
      puStack_c0 = puVar15;
      func_0x00010bec67a0(param_2);
      _objc_release(puVar14);
      _objc_destroyWeak(auStack_c8);
      _objc_release(puStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(uVar4);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar17);
    _objc_release(uVar5);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c278ac0(*(undefined8 *)(param_2 + 0x70));
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10546aea4; end: 10546af7f;  */

void FUN_10546aea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2ccc0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


