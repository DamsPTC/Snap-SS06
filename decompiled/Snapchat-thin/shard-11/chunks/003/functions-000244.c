/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108473994; end: 108473be3;  */

void FUN_108473994(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = param_1;
    func_0x00010bf21120();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        uVar1 = param_1;
        func_0x00010bf21120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296de0();
        _objc_release(uVar1);
        uVar5 = uVar5 + 1;
        uVar1 = param_1;
        func_0x00010bf21120();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
      } while (uVar5 < uVar2);
    }
    func_0x00010bdc33c0();
    puVar4 = PTR_PTR_1126cc750;
    uVar5 = param_1;
    func_0x00010bdc2b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfe5ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1d300();
    func_0x00010bf016c0();
    uVar2 = param_1;
    func_0x00010bf01920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22c640();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3aa0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108473be4; end: 108473d8b;  */

undefined * FUN_108473be4(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar12 = param_1;
  if (param_2 == 0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    dVar16 = 0.0;
    _objc_retain(param_1);
    puVar2 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar11 = (undefined *)0x0;
      do {
        puVar13 = (undefined *)0x0;
        puVar4 = puVar11;
        do {
          dVar15 = dVar16;
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_1);
            dVar15 = dVar16;
          }
          puVar11 = *(undefined **)((long)puVar13 * 8);
          func_0x00010c2520c0(puVar11);
          lVar3 = param_2;
          func_0x00010c29ae20();
          dVar16 = (double)lVar3;
          if (dVar16 < dVar15) goto LAB_108473d38;
          func_0x00010c26e920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar13 = puVar13 + 1;
          puVar4 = puVar11;
        } while (puVar2 != puVar13);
        puVar2 = param_1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
  }
LAB_108473d38:
  _objc_release(puVar12);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(lVar9);
    if (lVar9 == 0) {
      _objc_retain(param_1);
      puVar4 = param_1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar2 = param_1;
      FUN_108473be4(param_1,lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_1);
      puVar12 = param_1;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar12 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_1);
          }
          uVar14 = *(undefined8 *)((long)puVar11 * 8);
          uVar5 = uVar14;
          func_0x00010c26e920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c071ae0();
          _objc_release(uVar5);
          if ((int)uVar6 == 0) {
            func_0x00010befa120(puVar4);
          }
          else {
            puVar13 = PTR_PTR_1126d9768;
            func_0x00010c108e40(PTR_PTR_1126d9768);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b8f20();
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126d9770;
            _objc_alloc(PTR_PTR_1126d9770);
            puVar8 = puVar13;
            func_0x00010bf21f60(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2520c0(uVar14);
            func_0x00010c0521a0(puVar7);
            func_0x00010befa120(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar8);
            _objc_release(puVar13);
          }
          puVar11 = puVar11 + 1;
        } while (puVar12 != puVar11);
        puVar12 = param_1;
        func_0x00010bf52a60();
      }
      _objc_release(param_1);
      _objc_release(puVar2);
    }
    _objc_release(lVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      _objc_retain();
      puVar12 = param_1;
      func_0x00010bf31ee0();
      if ((int)puVar12 == 3) {
        puVar4 = param_1;
        func_0x00010c11b540();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar4;
        func_0x00010bfde4e0();
        if ((int)puVar12 == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar2 = param_1;
          func_0x00010c11b540(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar2;
          func_0x00010c29ba40();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar11;
          func_0x00010c29ba60();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar13;
          func_0x00010bf529e0();
          puVar12 = (undefined *)(ulong)(puVar12 != (undefined *)0x0);
          _objc_release(puVar13);
          _objc_release(puVar11);
          _objc_release(puVar2);
        }
        _objc_release(puVar4);
      }
      else {
        puVar12 = (undefined *)0x0;
      }
      _objc_release(param_1);
      return puVar12;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 108473d8c; end: 108473fc3;  */

undefined * FUN_108473d8c(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(param_1);
    puVar11 = param_1;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = param_1;
    FUN_108473be4(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    puVar3 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar12 = *(undefined8 *)((long)puVar10 * 8);
        uVar4 = uVar12;
        func_0x00010c26e920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c071ae0();
        _objc_release(uVar4);
        if ((int)uVar5 == 0) {
          func_0x00010befa120(puVar11);
        }
        else {
          puVar6 = PTR_PTR_1126d9768;
          func_0x00010c108e40(PTR_PTR_1126d9768);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b8f20();
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126d9770;
          _objc_alloc(PTR_PTR_1126d9770);
          puVar8 = puVar6;
          func_0x00010bf21f60(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2520c0(uVar12);
          func_0x00010c0521a0(puVar7);
          func_0x00010befa120(puVar11);
          _objc_release(puVar7);
          _objc_release(puVar8);
          _objc_release(puVar6);
        }
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar11 = param_1;
  func_0x00010bf31ee0();
  if ((int)puVar11 == 3) {
    puVar3 = param_1;
    func_0x00010c11b540();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bfde4e0();
    if ((int)puVar11 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = param_1;
      func_0x00010c11b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c29ba40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar10;
      func_0x00010c29ba60();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010bf529e0();
      puVar11 = (undefined *)(ulong)(puVar11 != (undefined *)0x0);
      _objc_release(puVar6);
      _objc_release(puVar10);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(param_1);
  return puVar11;
}



/* Entry: 108473fc4; end: 10847409b;  */

bool FUN_108473fc4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf31ee0();
  if ((int)lVar2 == 3) {
    lVar2 = param_1;
    func_0x00010c11b540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfde4e0();
    if ((int)lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = param_1;
      func_0x00010c11b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29ba40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c29ba60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf529e0();
      bVar1 = lVar6 != 0;
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10847409c; end: 1084768f7;  */

void FUN_10847409c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  long lVar41;
  undefined **ppuVar42;
  undefined8 uVar43;
  undefined **ppuVar44;
  undefined **ppuVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  long lVar51;
  undefined *puVar52;
  undefined **ppuVar53;
  float fVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined8 *puStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined **ppuStack_378;
  undefined *puStack_348;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  long *plStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = param_1;
  func_0x00010c11b540();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = puVar3;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar48 = puVar5;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar48;
      func_0x00010c08fa60();
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = puVar3;
        func_0x00010c11af80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c11b180();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c08fa60();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar48);
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar49 = (undefined *)0x0;
        if (puVar8 == (undefined8 *)0x0) goto LAB_10847675c;
      }
      else {
        _objc_release(puVar48);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      puVar4 = param_1;
      FUN_10847c144();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf8c980();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c2a2920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined8 *)0x0) {
        puVar48 = (undefined8 *)0x0;
      }
      else {
        puVar6 = param_2;
        func_0x00010c2a2920();
        _objc_retainAutoreleasedReturnValue();
        puVar48 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      func_0x00010c259740();
      puVar5 = param_1;
      func_0x00010c080120();
      _objc_retain(param_1);
      _objc_retain(puVar3);
      _objc_retain(puVar48);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      puVar6 = puVar3;
      func_0x00010bfdc5c0();
      if ((int)puVar6 == 0) {
LAB_1084744e8:
        puStack_348 = PTR____NSArray0__struct_11034ab48;
      }
      else {
        puVar6 = puVar3;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c2456a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar6);
        if (puVar7 == (undefined8 *)0x0) goto LAB_1084744e8;
        puStack_1a8 = &uStack_1b0;
        uStack_1b0 = 0;
        uStack_1a0 = 0x2020000000;
        lStack_198 = 0;
        puVar6 = puVar3;
        func_0x00010c29ba40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c29ba60();
        _objc_retainAutoreleasedReturnValue();
        puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_270 = 0xc2000000;
        pcStack_268 = FUN_108477170;
        puStack_260 = &UNK_110a4a2d8;
        puStack_258 = (undefined8 *)0x0;
        _objc_retain(param_5);
        puStack_250 = param_5;
        _objc_retain(puVar3);
        puStack_248 = puVar3;
        _objc_retain(param_4);
        puStack_238 = &uStack_1b0;
        puVar8 = puVar7;
        puStack_240 = param_4;
        func_0x000100504554(puVar7,&puStack_278);
        puVar10 = puVar8;
        func_0x00010c0d3c80();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar49 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar6 = puVar3;
        func_0x00010bef3ba0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0ec660();
        _objc_retainAutoreleasedReturnValue();
        puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_2e8 = (undefined **)0xc2000000;
        pcStack_2e0 = FUN_108477394;
        pcStack_2d8 = (code *)&UNK_110a4a368;
        _objc_retain(puVar10);
        puStack_2d0 = puVar10;
        func_0x00010bf97ce0(puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        dVar57 = (double)puStack_1a8[3];
        _objc_retain(puVar48);
        if (puVar48 == (undefined8 *)0x0) {
          dVar57 = 0.0;
        }
        else {
          puVar6 = puVar48;
          func_0x00010bf08ca0();
          if ((int)puVar6 < 100) {
            puVar6 = puVar48;
            func_0x00010bf08ca0();
            dVar57 = (dVar57 * (double)(int)puVar6) / 100.0;
          }
        }
        _objc_release(puVar48);
        puVar50 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        dVar55 = 0.0;
        puStack_298 = (undefined8 *)0x0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        puStack_2b8 = (undefined8 *)0x0;
        uStack_2c0 = 0;
        pcStack_2a8 = (code *)0x0;
        plStack_2b0 = (long *)0x0;
        puVar6 = puVar3;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c2456a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puStack_3e8 = puVar7;
        func_0x00010bf52a60();
        if (puStack_3e8 == (undefined8 *)0x0) {
          _objc_release(puVar7);
          ppuStack_3c8 = (undefined **)0x0;
        }
        else {
          ppuStack_3c8 = (undefined **)0x0;
          puStack_380 = (undefined8 *)0x0;
          lVar41 = *plStack_2b0;
          puStack_390 = (undefined8 *)0xffffffffffffffff;
          do {
            puStack_388 = (undefined8 *)0x0;
            do {
              if (*plStack_2b0 != lVar41) {
                _objc_enumerationMutation(puVar7);
              }
              ppuVar42 = (undefined **)puStack_2b8[(long)puStack_388];
              puVar6 = puVar3;
              func_0x00010c245680(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar6;
              func_0x00010bf16280();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar42;
              func_0x00010847ab0c(ppuVar42,puVar8,puVar48);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              _objc_release(puVar6);
              if (ppuVar11 != (undefined **)0x0) {
                _objc_retain(ppuVar42);
                ppuVar12 = ppuVar42;
                func_0x00010bf35840();
                _objc_retainAutoreleasedReturnValue();
                dVar56 = 0.0;
                if (ppuVar12 != (undefined **)0x0) {
                  ppuVar44 = ppuVar42;
                  func_0x00010bf35840();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = ppuVar44;
                  func_0x00010bfde480();
                  if (((ulong)ppuVar13 & 1) == 0) {
                    _objc_release(ppuVar44);
                  }
                  else {
                    ppuVar13 = ppuVar42;
                    func_0x00010bf35840();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar53 = ppuVar13;
                    func_0x00010c29a500();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar14 = ppuVar53;
                    func_0x00010c250f20();
                    _objc_release(ppuVar53);
                    _objc_release(ppuVar13);
                    _objc_release(ppuVar44);
                    _objc_release(ppuVar12);
                    if (ppuVar14 == (undefined **)0x0) goto LAB_108474714;
                    ppuVar44 = ppuVar42;
                    func_0x00010bf35840();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar12 = ppuVar44;
                    func_0x00010c29a500();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar44);
                    ppuVar44 = ppuVar12;
                    func_0x00010c250f20();
                    ppuVar13 = ppuVar12;
                    func_0x00010c26f700();
                    dVar56 = ((double)(long)ppuVar44 * 1000.0) / (double)(int)ppuVar13;
                  }
                  _objc_release(ppuVar12);
                }
LAB_108474714:
                _objc_release(ppuVar42);
                puVar15 = PTR_PTR_1126d9770;
                _objc_alloc(PTR_PTR_1126d9770);
                dVar55 = dVar56;
                func_0x00010c0521a0(dVar56);
                func_0x00010befa120(puVar50);
                _objc_release(puVar15);
                if ((ppuStack_3c8 == (undefined **)0x0) || (dVar56 <= dVar57)) {
                  _objc_retain(ppuVar11);
                  _objc_release(ppuStack_3c8);
                  ppuStack_3c8 = ppuVar11;
                }
              }
              ppuVar12 = ppuVar42;
              func_0x00010c242320();
              puStack_398 = puVar10;
              if ((int)ppuVar12 == 10) {
                ppuVar12 = ppuVar42;
                func_0x00010bf35840();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_378 = ppuVar12;
                func_0x00010c29a500();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar12);
                if (ppuStack_378 != (undefined **)0x0) {
                  ppuVar12 = ppuStack_378;
                  func_0x00010c278380();
                  puVar6 = puVar10;
                  func_0x00010bf529e0();
                  puStack_390 = (undefined8 *)(long)(int)ppuVar12;
                  if (puStack_390 < puVar6) {
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_retain(ppuVar42);
                    ppuVar12 = ppuVar42;
                    func_0x00010bf283c0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar44 = ppuVar12;
                    func_0x00010c26b700();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar44;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar44);
                    _objc_release(ppuVar12);
                    if (ppuVar13 == (undefined **)0x0) {
                      ppuStack_3e0 = (undefined **)0x0;
                    }
                    else {
                      ppuVar12 = ppuVar42;
                      func_0x00010bf283c0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuStack_3e0 = ppuVar12;
                      func_0x00010c26b700();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar12);
                    }
                    ppuVar12 = ppuVar42;
                    func_0x00010bfd5740();
                    if ((int)ppuVar12 == 0) {
                      ppuVar12 = ppuVar42;
                      func_0x00010bfde720();
                      ppuVar44 = ppuVar42;
                      if ((int)ppuVar12 != 0) {
                        func_0x00010c2a45e0();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_3a0 = ppuVar44;
                        FUN_108473994();
                        _objc_retainAutoreleasedReturnValue();
                        goto LAB_108474e1c;
                      }
                      ppuVar12 = ppuVar42;
                      func_0x00010bfd50c0();
                      ppuStack_3a0 = (undefined **)PTR_PTR_1126cc750;
                      if ((int)ppuVar12 != 0) {
                        puVar15 = PTR_PTR_1126cc758;
                        _objc_alloc(PTR_PTR_1126cc758);
                        func_0x00010bf28f40(ppuVar42);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bffafe0(puVar15);
                        func_0x00010bf28f60();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(puVar15);
                        goto LAB_108474e1c;
                      }
                      ppuVar12 = ppuVar42;
                      func_0x00010bfd8c00();
                      ppuStack_3a0 = (undefined **)PTR_PTR_1126cc750;
                      if ((int)ppuVar12 != 0) {
                        func_0x00010c0b5200(ppuVar42);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0b5220();
                        _objc_retainAutoreleasedReturnValue();
                        goto LAB_108474e1c;
                      }
                      ppuStack_3a0 = (undefined **)0x0;
                    }
                    else {
                      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                      uStack_208 = 0;
                      puStack_210 = (undefined8 *)0x0;
                      uStack_1f8 = 0;
                      uStack_200 = 0;
                      lStack_228 = 0;
                      puStack_230 = (undefined *)0x0;
                      puStack_218 = (undefined *)0x0;
                      pcStack_220 = (code *)0x0;
                      ppuVar12 = ppuVar42;
                      func_0x00010bf42200();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar13 = ppuVar12;
                      func_0x00010c084fe0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar12);
                      ppuVar12 = ppuVar13;
                      func_0x00010bf52a60();
                      ppuVar44 = (undefined **)0x0;
                      if (ppuVar12 != (undefined **)0x0) {
                        lVar51 = *(long *)pcStack_220;
                        do {
                          ppuVar53 = (undefined **)0x0;
                          do {
                            if (*(long *)pcStack_220 != lVar51) {
                              _objc_enumerationMutation(ppuVar13);
                            }
                            ppuVar45 = *(undefined ***)(lStack_228 + (long)ppuVar53 * 8);
                            ppuVar14 = ppuVar45;
                            func_0x00010c0848c0();
                            if ((int)ppuVar14 == 3) {
                              ppuVar14 = ppuVar45;
                              func_0x00010c2573e0();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar18 = ppuVar14;
                              func_0x00010bfe5ea0();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar19 = ppuVar18;
                              func_0x00010c08fa60();
                              _objc_release(ppuVar18);
                              _objc_release(ppuVar14);
                              if (ppuVar19 != (undefined **)0x0) {
                                func_0x00010c2573e0(ppuVar45);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar14 = ppuVar45;
                                func_0x00010bfe5ea0();
                                _objc_retainAutoreleasedReturnValue();
LAB_108474c94:
                                _objc_release(ppuVar44);
                                _objc_release(ppuVar45);
                                ppuVar44 = ppuVar14;
                              }
                            }
                            else if ((int)ppuVar14 == 2) {
                              ppuVar14 = ppuVar45;
                              func_0x00010c115c20();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar18 = ppuVar14;
                              func_0x00010bfe5ea0();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar19 = ppuVar18;
                              func_0x00010c08fa60();
                              _objc_release(ppuVar18);
                              _objc_release(ppuVar14);
                              if (ppuVar19 != (undefined **)0x0) {
                                func_0x00010c115c20(ppuVar45);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar18 = ppuVar45;
                                func_0x00010bfe5ea0();
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010befa120(puVar15);
                                ppuVar14 = ppuVar44;
                                ppuVar44 = ppuVar18;
                                goto LAB_108474c94;
                              }
                            }
                            ppuVar53 = (undefined **)((long)ppuVar53 + 1);
                          } while (ppuVar12 != ppuVar53);
                          ppuVar12 = ppuVar13;
                          func_0x00010bf52a60();
                        } while (ppuVar12 != (undefined **)0x0);
                      }
                      _objc_release(ppuVar13);
                      ppuStack_3a0 = (undefined **)PTR_PTR_1126cc750;
                      ppuVar12 = ppuVar44;
                      func_0x00010bf51e00(ppuVar44);
                      puVar20 = puVar15;
                      func_0x00010bf51e00(puVar15);
                      func_0x00010bf422a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar20);
                      _objc_release(ppuVar12);
                      _objc_release(puVar15);
LAB_108474e1c:
                      _objc_release(ppuVar44);
                    }
                    _objc_release(ppuStack_3e0);
                    _objc_release(ppuVar42);
                    ppuVar12 = (undefined **)PTR_PTR_1126cc728;
                    _objc_alloc(PTR_PTR_1126cc728);
                    ppuVar44 = ppuStack_378;
                    func_0x00010c250f20();
                    ppuVar13 = ppuStack_378;
                    func_0x00010c26f700();
                    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c241220();
                    func_0x00010c14de00(puVar15);
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = puVar3;
                    func_0x00010bf1f720(puVar3);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = param_1;
                    func_0x00010bf454e0(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar22 = puVar8;
                    func_0x000108f521b4();
                    _objc_retainAutoreleasedReturnValue();
                    puVar23 = puVar6;
                    func_0x000108f4fbd8(puVar6,puVar22);
                    ppuVar53 = ppuVar42;
                    func_0x00010bfb1200(ppuVar42);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar14 = ppuVar42;
                    func_0x00010c0ef980(ppuVar42);
                    _objc_retainAutoreleasedReturnValue();
                    dVar55 = (double)((float)(long)ppuVar44 / (float)(int)ppuVar13);
                    func_0x00010c04bb80(ppuVar12);
                    _objc_release(ppuVar14);
                    _objc_release(ppuVar53);
                    _objc_release(puVar23);
                    _objc_release(puVar22);
                    _objc_release(puVar8);
                    _objc_release(puVar6);
                    _objc_release(puVar15);
                    ppuVar44 = ppuVar42;
                    func_0x00010bfe4640(ppuVar42);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar44;
                    func_0x00010bfe2ee0();
                    func_0x00010bfe4640(ppuVar42);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar53 = ppuVar42;
                    func_0x00010c0b5940();
                    func_0x000100c4a928(ppuVar13,ppuVar53);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar53 = ppuVar12;
                    func_0x0001084736e4(ppuVar12,ppuVar13,puStack_398);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d04c0(puVar10);
                    _objc_release(ppuVar53);
                    _objc_release(ppuVar13);
                    _objc_release(ppuVar42);
                    _objc_release(ppuVar44);
                    func_0x00010bfbe4e0();
                    puVar6 = puVar10;
                    func_0x00010c0dfd40(puVar10);
                    _objc_retainAutoreleasedReturnValue();
                    puVar15 = PTR_PTR_1126cc718;
                    _objc_retain();
                    _objc_alloc(puVar15);
                    puVar8 = puVar6;
                    func_0x00010c29a460(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar22 = puVar6;
                    func_0x00010c29bbe0(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar23 = puVar6;
                    func_0x00010bf358a0(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar24 = puVar6;
                    func_0x00010bef3160(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar16 = puVar6;
                    func_0x00010c0ec600(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf8b340(puVar6);
                    puVar17 = puVar6;
                    func_0x00010bfe4640(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar6);
                    func_0x00010c060e80(puVar15);
                    _objc_release(puVar17);
                    _objc_release(puVar16);
                    _objc_release(puVar24);
                    _objc_release(puVar23);
                    _objc_release(puVar22);
                    _objc_release(puVar8);
                    func_0x00010c1d04c0(puVar10);
                    _objc_release(puVar15);
                    _objc_release(puVar6);
LAB_108475148:
                    _objc_release(ppuVar12);
LAB_108475150:
                    _objc_release(ppuStack_3a0);
                    _objc_release(puStack_398);
                    _objc_release(ppuStack_378);
                    goto LAB_108475168;
                  }
                }
LAB_108475708:
                _objc_release(ppuStack_378);
                _objc_release(ppuVar11);
                _objc_release(puVar7);
                puStack_348 = (undefined *)0x0;
                goto LAB_108475720;
              }
              ppuVar12 = ppuVar42;
              func_0x00010c242320();
              fVar54 = SUB84(dVar55,0);
              if ((int)ppuVar12 == 0xb) {
                ppuVar12 = ppuVar42;
                func_0x00010bef1ae0();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_378 = ppuVar12;
                func_0x00010c29a500();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar12);
                if (ppuStack_378 != (undefined **)0x0) {
                  ppuVar12 = ppuStack_378;
                  func_0x00010c278380();
                  puVar6 = puVar10;
                  func_0x00010bf529e0();
                  puStack_390 = (undefined8 *)(long)(int)ppuVar12;
                  if (puStack_390 < puVar6) {
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    ppuStack_3a0 = (undefined **)PTR_PTR_1126ca548;
                    _objc_alloc();
                    ppuVar12 = ppuStack_378;
                    func_0x00010c250f20(ppuStack_378);
                    ppuVar44 = ppuStack_378;
                    func_0x00010c26f700(ppuStack_378);
                    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c241220();
                    func_0x00010c14de00(puVar15);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar42;
                    func_0x00010bef1ae0(ppuVar42);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar53 = ppuVar13;
                    func_0x00010bef3ba0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar14 = ppuVar42;
                    func_0x00010bef1ae0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar45 = ppuVar14;
                    func_0x00010bfdb780();
                    dVar56 = 1.0;
                    if ((int)ppuVar45 != 0) {
                      func_0x00010bef1ae0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuStack_428 = ppuVar42;
                      func_0x00010c150d00();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c296d80(ppuStack_428);
                      dVar56 = (double)fVar54;
                      ppuStack_420 = ppuVar42;
                    }
                    dVar55 = (double)((float)(long)ppuVar12 / (float)(int)ppuVar44);
                    func_0x00010c04bb60(dVar55,dVar56);
                    if ((int)ppuVar45 != 0) {
                      _objc_release(ppuStack_428);
                      _objc_release(ppuStack_420);
                    }
                    _objc_release(ppuVar14);
                    _objc_release(ppuVar53);
                    _objc_release(ppuVar13);
                    _objc_release(puVar15);
                    ppuVar12 = ppuStack_3a0;
                    func_0x0001084733c4(ppuStack_3a0,puStack_398);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d04c0(puVar10);
                    goto LAB_108475148;
                  }
                }
                goto LAB_108475708;
              }
              if ((param_7 == 0x107) || (param_7 == 0x102)) {
                ppuVar12 = ppuVar42;
                func_0x00010c2439e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar44 = ppuVar12;
                func_0x00010c0720c0();
                _objc_release(ppuVar12);
                if (((ulong)ppuVar44 & 1) == 0) goto LAB_108474a80;
              }
              else {
LAB_108474a80:
                ppuVar12 = ppuVar42;
                func_0x00010c2439e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar44 = ppuVar12;
                func_0x00010c0720c0();
                _objc_release(ppuVar12);
                if (((uint)puVar5 & (uint)ppuVar44 & 1) == 0) {
                  ppuVar12 = ppuVar42;
                  func_0x00010bef60a0();
                  ppuStack_378 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                  if ((int)ppuVar12 == 0) {
                    func_0x00010c241220();
                    func_0x00010c14de00();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    func_0x000107c31920();
                    _objc_retainAutoreleasedReturnValue();
                    ppuStack_378 = &PTR____CFConstantStringClassReference_110edd738;
                    func_0x00010c25ce40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar12);
                  }
                  puStack_398 = (undefined8 *)PTR_PTR_1126cc730;
                  _objc_alloc();
                  ppuVar12 = ppuVar42;
                  func_0x00010c242b00(ppuVar42);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar44 = ppuVar42;
                  func_0x00010bfdeb80();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = ppuVar42;
                  func_0x00010c2439e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bef60a0();
                  ppuVar53 = ppuVar42;
                  func_0x00010bef3ba0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = ppuVar42;
                  func_0x00010bfb68a0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c15e560();
                  func_0x00010c0c6c20();
                  func_0x00010c082620();
                  ppuVar45 = ppuVar42;
                  func_0x00010c0ed940();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0c6c20();
                  puVar15 = PTR_PTR_1126cc6f8;
                  _objc_alloc();
                  ppuVar18 = ppuVar42;
                  func_0x00010c23fe00();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar19 = ppuVar18;
                  func_0x000108f55418();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0473c0();
                  puVar20 = PTR_PTR_1126d9778;
                  _objc_alloc();
                  ppuVar21 = ppuVar42;
                  func_0x00010bf4e840();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0045a0();
                  puVar6 = puVar3;
                  func_0x00010bf1f720();
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = param_1;
                  func_0x00010bf454e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar22 = puVar8;
                  func_0x000108f521b4(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar23 = puVar6;
                  func_0x000108f4fbd8(puVar6,puVar22);
                  puVar24 = puVar3;
                  func_0x00010bfd6b20();
                  if ((int)puVar24 != 0) {
                    puStack_4b0 = puVar3;
                    func_0x00010bf96020();
                    _objc_retainAutoreleasedReturnValue();
                    puStack_4b8 = puStack_4b0;
                    func_0x000108f50ec4(puStack_4b0,0,0);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  ppuVar25 = ppuVar42;
                  func_0x00010bfe4640();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar26 = ppuVar25;
                  func_0x00010bfe2ee0();
                  ppuVar27 = ppuVar42;
                  func_0x00010bfe4640(ppuVar42);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar28 = ppuVar27;
                  func_0x00010c0b5940();
                  func_0x000100c4a928(ppuVar26,ppuVar28);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfb1200();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfbe4e0();
                  func_0x00010c048a80();
                  _objc_release(ppuVar42);
                  _objc_release(ppuVar26);
                  _objc_release(ppuVar27);
                  _objc_release(ppuVar25);
                  if ((int)puVar24 != 0) {
                    _objc_release(puStack_4b8);
                    _objc_release(puStack_4b0);
                  }
                  _objc_release(puVar23);
                  _objc_release(puVar22);
                  _objc_release(puVar8);
                  _objc_release(puVar6);
                  _objc_release(puVar20);
                  _objc_release(ppuVar21);
                  _objc_release(puVar15);
                  _objc_release(ppuVar19);
                  _objc_release(ppuVar18);
                  _objc_release(ppuVar45);
                  _objc_release(ppuVar14);
                  _objc_release(ppuVar53);
                  _objc_release(ppuVar13);
                  _objc_release(ppuVar44);
                  _objc_release(ppuVar12);
                  if ((long)puStack_380 <= (long)puStack_390) {
                    do {
                      puVar6 = puVar10;
                      func_0x00010bf529e0();
                      if (puStack_380 < puVar6) {
                        puVar6 = puVar10;
                        func_0x00010c0dfd40(puVar10);
                        _objc_retainAutoreleasedReturnValue();
                        puVar15 = PTR_PTR_1126ced58;
                        func_0x00010c0b5360(PTR_PTR_1126ced58);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puVar49);
                        _objc_release(puVar15);
                        _objc_release(puVar6);
                      }
                      puStack_380 = (undefined8 *)((long)puStack_380 + 1);
                    } while ((undefined8 *)((long)puStack_390 + 1) != puStack_380);
                  }
                  ppuStack_3a0 = (undefined **)PTR_PTR_1126ced58;
                  func_0x00010c11b500();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar49);
                  puStack_390 = (undefined8 *)((long)puStack_390 + 1);
                  puStack_380 = puStack_390;
                  goto LAB_108475150;
                }
              }
LAB_108475168:
              _objc_release(ppuVar11);
              puStack_388 = (undefined8 *)((long)puStack_388 + 1);
            } while (puStack_388 != puStack_3e8);
            puStack_3e8 = puVar7;
            func_0x00010bf52a60();
          } while (puStack_3e8 != (undefined8 *)0x0);
          _objc_release(puVar7);
          if ((long)puStack_380 <= (long)puStack_390) {
            do {
              puVar5 = puVar10;
              func_0x00010bf529e0();
              if (puStack_380 < puVar5) {
                puVar5 = puVar10;
                func_0x00010c0dfd40(puVar10);
                _objc_retainAutoreleasedReturnValue();
                puVar15 = PTR_PTR_1126ced58;
                func_0x00010c0b5360(PTR_PTR_1126ced58);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar49);
                _objc_release(puVar15);
                _objc_release(puVar5);
              }
              puStack_380 = (undefined8 *)((long)puStack_380 + 1);
            } while ((undefined8 *)((long)puStack_390 + 1) != puStack_380);
          }
        }
        puStack_348 = puVar49;
        func_0x00010bf51e00();
LAB_108475720:
        _objc_release(ppuStack_3c8);
        _objc_release(puVar50);
        _objc_release(puStack_2d0);
        _objc_release(puVar49);
        _objc_release(puVar10);
        _objc_release(puStack_240);
        _objc_release(puStack_248);
        _objc_release(puStack_250);
        _objc_release(puStack_258);
        __Block_object_dispose(&uStack_1b0,8);
      }
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar48);
      _objc_release(puVar3);
      _objc_release(param_1);
      _objc_retain(puStack_348);
      puStack_2b8 = &uStack_2c0;
      uStack_2c0 = 0;
      plStack_2b0 = (long *)0x2020000000;
      pcStack_2a8 = (code *)0x0;
      lStack_188 = 0;
      puStack_190 = (undefined *)0x0;
      puStack_178 = (undefined *)0x0;
      pcStack_180 = (code *)0x0;
      puStack_168 = (undefined8 *)0x0;
      puStack_170 = (undefined8 *)0x0;
      puStack_158 = (undefined8 *)0x0;
      puStack_160 = (undefined8 *)0x0;
      _objc_retain(puStack_348);
      puVar49 = puStack_348;
      func_0x00010bf52a60();
      if (puVar49 != (undefined *)0x0) {
        lVar41 = *(long *)pcStack_180;
        do {
          puVar50 = (undefined *)0x0;
          do {
            if (*(long *)pcStack_180 != lVar41) {
              _objc_enumerationMutation(puStack_348);
            }
            puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_270 = 0xc2000000;
            pcStack_268 = FUN_1084775e4;
            puStack_260 = &UNK_110947178;
            puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
            lStack_228 = 0xc2000000;
            pcStack_220 = FUN_108477630;
            puStack_218 = &UNK_1108705e0;
            puStack_258 = &uStack_2c0;
            puStack_210 = &uStack_2c0;
            func_0x00010c0bebc0(*(undefined8 *)(lStack_188 + (long)puVar50 * 8));
            puVar50 = puVar50 + 1;
          } while (puVar49 != puVar50);
          puVar49 = puStack_348;
          func_0x00010bf52a60();
        } while (puVar49 != (undefined *)0x0);
      }
      _objc_release(puStack_348);
      uVar43 = puStack_2b8[3];
      __Block_object_dispose(&uStack_2c0,8);
      _objc_release(puStack_348);
      ppuStack_2e8 = &puStack_2f0;
      puStack_2f0 = (undefined *)0x0;
      pcStack_2e0 = (code *)0x3032000000;
      pcStack_2d8 = FUN_1084768f8;
      puStack_2d0 = (undefined8 *)0x108476908;
      uStack_2c8 = 0;
      puVar49 = puStack_348;
      func_0x00010bfb1920(puStack_348);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bebc0();
      _objc_release(puVar49);
      puVar5 = puVar3;
      func_0x00010c2a2900();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25e5c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08fa60();
      puVar8 = puVar3;
      if (puVar7 == (undefined8 *)0x0) {
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puStack_380 = puVar8;
        func_0x00010c08ac00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puStack_380 = puVar8;
        func_0x00010c25e5c0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010c2a2900();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25e600();
      puVar7 = puVar3;
      if ((int)puVar6 == 0) {
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010c29ae20();
        iVar2 = (int)puVar6;
      }
      else {
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010c25e600();
        iVar2 = (int)puVar6;
      }
      _objc_release(puVar7);
      _objc_release(puVar5);
      if ((puVar48 == (undefined8 *)0x0) ||
         (puVar5 = puVar4, func_0x00010c1414c0(), ((ulong)puVar5 & 1) != 0)) {
        if ((puStack_380 == (undefined8 *)0x0) && (iVar2 < 1)) {
          puVar5 = puVar3;
          func_0x00010c2a2900();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf08ca0();
          _objc_release(puVar5);
          if ((int)puVar6 < 1) {
            bVar1 = false;
            ppuStack_378 = (undefined **)0x0;
            goto LAB_108475e98;
          }
        }
        ppuStack_378 = (undefined **)PTR_PTR_1126cc6d0;
        _objc_alloc();
        puVar5 = puVar3;
        func_0x00010c2a2900(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf08ca0();
        func_0x00010c021980();
        _objc_release(puVar5);
        bVar1 = false;
      }
      else {
        puVar5 = puVar48;
        func_0x00010bf08ca0();
        _objc_retain(puVar48);
        _objc_retain(puVar3);
        _objc_retain(puStack_348);
        puStack_2b8 = &uStack_2c0;
        uStack_2c0 = 0;
        plStack_2b0 = (long *)0x3032000000;
        pcStack_2a8 = FUN_1084768f8;
        uStack_2a0 = 0x108476908;
        puVar6 = puVar3;
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c25e5c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c08fa60();
        puVar10 = puVar3;
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar10;
        if (puVar8 == (undefined8 *)0x0) {
          func_0x00010c08ac00();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c25e5c0();
          _objc_retainAutoreleasedReturnValue();
        }
        puStack_298 = puVar22;
        _objc_release(puVar10);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puStack_1a8 = &uStack_1b0;
        uStack_1b0 = 0;
        uStack_1a0 = 0x2020000000;
        puVar6 = puVar3;
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c25e600();
        puVar8 = puVar3;
        if ((int)puVar7 == 0) {
          func_0x00010c2a2900();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar8;
          func_0x00010c29ae20();
          iVar2 = (int)puVar7;
        }
        else {
          func_0x00010c2a2900();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar8;
          func_0x00010c25e600();
          iVar2 = (int)puVar7;
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        lStack_198 = (long)iVar2;
        puStack_1c8 = &uStack_1d0;
        uStack_1d0 = 0;
        uStack_1c0 = 0x2020000000;
        puVar6 = puVar3;
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf08ca0();
        _objc_release(puVar6);
        lStack_1b8 = (long)(int)puVar7;
        puStack_1e8 = &uStack_1f0;
        uStack_1f0 = 0;
        uStack_1e0 = 0x2020000000;
        uStack_1d8 = 0;
        lStack_228 = 0;
        puStack_230 = (undefined *)0x0;
        puStack_218 = (undefined *)0x0;
        pcStack_220 = (code *)0x0;
        uStack_208 = 0;
        puStack_210 = (undefined8 *)0x0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        _objc_retain(puStack_348);
        puVar49 = puStack_348;
        func_0x00010bf52a60();
        if (puVar49 != (undefined *)0x0) {
          lVar41 = *(long *)pcStack_220;
          do {
            puVar50 = (undefined *)0x0;
            do {
              if (*(long *)pcStack_220 != lVar41) {
                _objc_enumerationMutation(puStack_348);
              }
              puVar15 = PTR___NSConcreteStackBlock_11034bd00;
              uVar46 = *(undefined8 *)(lStack_228 + (long)puVar50 * 8);
              puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
              lStack_188 = 0xc2000000;
              pcStack_180 = FUN_108477698;
              puStack_178 = &UNK_110a4a308;
              _objc_retain(puVar48);
              puStack_278 = puVar15;
              uStack_270 = 0xc2000000;
              pcStack_268 = FUN_108477894;
              puStack_260 = &UNK_110a4a338;
              puStack_170 = puVar48;
              puStack_168 = &uStack_2c0;
              puStack_160 = &uStack_1f0;
              puStack_158 = &uStack_1d0;
              puStack_150 = &uStack_1b0;
              _objc_retain(puVar48);
              puStack_258 = puVar48;
              puStack_250 = &uStack_2c0;
              puStack_248 = &uStack_1f0;
              puStack_240 = &uStack_1d0;
              puStack_238 = &uStack_1b0;
              func_0x00010c0bebc0(uVar46);
              _objc_release(puStack_258);
              _objc_release(puStack_170);
              puVar50 = puVar50 + 1;
            } while (puVar49 != puVar50);
            puVar49 = puStack_348;
            func_0x00010bf52a60();
          } while (puVar49 != (undefined *)0x0);
        }
        _objc_release(puStack_348);
        ppuStack_378 = (undefined **)PTR_PTR_1126cc6d0;
        _objc_alloc();
        func_0x00010c021980();
        __Block_object_dispose(&uStack_1f0,8);
        __Block_object_dispose(&uStack_1d0,8);
        __Block_object_dispose(&uStack_1b0,8);
        __Block_object_dispose(&uStack_2c0,8);
        _objc_release(puStack_298);
        _objc_release(puStack_348);
        _objc_release(puVar3);
        _objc_release(puVar48);
        bVar1 = 99 < (int)puVar5;
      }
LAB_108475e98:
      puVar50 = puStack_348;
      FUN_10847dea8(puStack_348,ppuStack_378);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126ced50;
      func_0x00010bf819e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bfd6b20();
      if ((int)puVar5 == 0) {
        puStack_390 = (undefined8 *)0x0;
      }
      else {
        puVar5 = puVar3;
        func_0x00010bf96020();
        _objc_retainAutoreleasedReturnValue();
        puStack_390 = puVar5;
        func_0x000108f50ec4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      func_0x00010c2b6480(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bf8c980(puVar3);
      func_0x00010c2acc80(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar49 = puVar50;
      func_0x00010bfe0440(puVar50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af6c0(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar49);
      puVar49 = puVar50;
      func_0x00010c0b4680(puVar50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af940(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar49);
      func_0x00010c11ae80(puVar3);
      func_0x00010c2b6580(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b9a60(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2bcc20(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010847a90c(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b8e20(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c2bb900(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c29c5c0(puVar3);
      func_0x00010c2ba760(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bfed580(puVar3);
      func_0x00010c2afc40(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf1f720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bf454e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x000108f521b4();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x000108f4fbd8(puVar5,puVar7);
      func_0x00010c2a9720(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010c2b9d60(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bf4d8e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aaf40(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_retain(puStack_348);
      puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar46 = 0;
      puStack_168 = (undefined8 *)0x0;
      puStack_170 = (undefined8 *)0x0;
      puStack_158 = (undefined8 *)0x0;
      puStack_160 = (undefined8 *)0x0;
      lStack_188 = 0;
      puStack_190 = (undefined *)0x0;
      puStack_178 = (undefined *)0x0;
      pcStack_180 = (code *)0x0;
      _objc_retain(puStack_348);
      puVar20 = puStack_348;
      func_0x00010bf52a60();
      puVar49 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar20 != (undefined *)0x0) {
        lVar41 = *(long *)pcStack_180;
        do {
          puVar52 = (undefined *)0x0;
          do {
            if (*(long *)pcStack_180 != lVar41) {
              _objc_enumerationMutation(puStack_348);
            }
            uVar47 = *(undefined8 *)(lStack_188 + (long)puVar52 * 8);
            puStack_278 = puVar49;
            uStack_270 = 0xc2000000;
            pcStack_268 = FUN_108477990;
            puStack_260 = &UNK_11094a450;
            _objc_retain(puVar5);
            puStack_230 = puVar49;
            lStack_228 = 0xc2000000;
            pcStack_220 = FUN_108477af0;
            puStack_218 = &UNK_11094a480;
            puStack_258 = puVar5;
            _objc_retain(puVar5);
            puStack_210 = puVar5;
            func_0x00010c0bebc0(uVar47);
            _objc_release(puStack_210);
            _objc_release(puStack_258);
            puVar52 = puVar52 + 1;
          } while (puVar20 != puVar52);
          puVar20 = puStack_348;
          func_0x00010bf52a60();
        } while (puVar20 != (undefined *)0x0);
      }
      _objc_release(puStack_348);
      puVar6 = puVar5;
      func_0x00010bf51e00(puVar5);
      _objc_release(puVar5);
      _objc_release(puStack_348);
      puVar49 = puVar50;
      func_0x00010bfbe4e0();
      puVar5 = param_1;
      func_0x000108f52c50(param_1,param_2,puVar6,uVar43,bVar1,0,param_7,0,0,puVar49);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000108f521b4();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar49 = PTR_PTR_1126c2098;
      _objc_alloc();
      puVar7 = param_1;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000108f521b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c259740();
      func_0x00010c26e960(param_1);
      uVar43 = uVar46;
      func_0x00010c080120();
      func_0x00010c078e00();
      func_0x00010c072c20();
      puVar22 = param_1;
      func_0x00010bfa31e0();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = param_1;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      func_0x000108f516b8();
      _objc_retainAutoreleasedReturnValue();
      puVar52 = PTR_PTR_1126c6d88;
      puVar29 = puVar15;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b5340();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = param_2;
      func_0x00010c13bd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c150c20(param_1);
      puVar17 = param_1;
      uVar47 = uVar43;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f680();
      puVar30 = param_1;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d8e0();
      puVar31 = param_1;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0820e0();
      puVar32 = param_1;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ce20();
      puVar33 = PTR_PTR_1126d58d0;
      _objc_alloc();
      puVar34 = param_1;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe2bc0(puVar34);
      puVar35 = param_1;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c236ac0(puVar35);
      puVar36 = param_1;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c231940(puVar36);
      func_0x00010c01a720();
      puVar37 = param_1;
      func_0x00010c08b2e0(param_1);
      func_0x00010bfddfe0();
      func_0x00010c080120();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259c60(param_1);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar38 = param_1;
      func_0x000108f518a0();
      _objc_retainAutoreleasedReturnValue();
      puVar39 = param_1;
      func_0x000108f52990();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e240(param_1);
      puVar40 = param_1;
      func_0x000108f508a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000c60(uVar46,uVar43,(double)(long)puVar37,uVar47,puVar49);
      _objc_release(puVar40);
      _objc_release(puVar39);
      _objc_release(puVar38);
      _objc_release(puVar20);
      _objc_release(puVar33);
      _objc_release(puVar36);
      _objc_release(puVar35);
      _objc_release(puVar34);
      _objc_release(puVar32);
      _objc_release(puVar31);
      _objc_release(puVar30);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar52);
      _objc_release(puVar29);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar10);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puStack_390);
      _objc_release(puVar15);
      _objc_release(puVar50);
      _objc_release(puStack_380);
      _objc_release(ppuStack_378);
      __Block_object_dispose(&puStack_2f0,8);
      _objc_release(uStack_2c8);
      _objc_release(puStack_348);
      _objc_release(puVar48);
      _objc_release(puVar9);
      _objc_release(puVar4);
      goto LAB_10847675c;
    }
  }
  puVar49 = (undefined *)0x0;
LAB_10847675c:
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    lVar41 = 8;
    __Block_object_dispose(&uStack_1b0);
    __Unwind_Resume();
    param_1[5] = *(undefined8 *)(lVar41 + 0x28);
    *(undefined8 *)(lVar41 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar49);
  return;
}



/* Entry: 1084768f8; end: 10847690f;  */

void FUN_1084768f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108476910; end: 1084769f3;  */

void FUN_108476910(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084769f4; end: 108476a6b;  */

void FUN_1084769f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010c29bbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108476a6c; end: 108476d87;  */

void FUN_108476a6c(undefined8 param_1,long param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  float fVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c29bbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c29bbe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c29bbe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c29a460(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c13a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar5;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      _objc_retain(puVar3);
      puVar6 = puVar3;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    puVar12 = PTR_PTR_1126b19f8;
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar12);
    puVar8 = PTR_PTR_1126b1378;
    func_0x00010c2add40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    FUN_1084769f4(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126bffb0;
    _objc_alloc();
    puVar9 = puVar7;
    func_0x00010c0f1260(puVar7);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar6;
    param_5 = lVar1;
    func_0x00010c02a0e0();
    _objc_release(puVar9);
    _objc_release(lVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      _objc_retain(param_5);
      _objc_retain(param_2);
      FUN_108476e48(lVar10,param_4,0,param_5);
      fVar13 = 3.0;
      func_0x00010bfb2cc0(0x40400000,param_5);
      _objc_release(param_5);
      puVar12 = PTR_PTR_1126ceac8;
      func_0x00010c0c6360(param_1,(double)fVar13,PTR_PTR_1126ceac8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108476d88; end: 108476e47;  */

void FUN_108476d88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  float fVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_2);
    FUN_108476e48(param_3,param_4,0,param_5);
    fVar2 = 3.0;
    func_0x00010bfb2cc0(0x40400000,param_5);
    _objc_release(param_5);
    puVar1 = PTR_PTR_1126ceac8;
    func_0x00010c0c6360(param_1,(double)fVar2,PTR_PTR_1126ceac8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108476e48; end: 10847716f;  */

double FUN_108476e48(ulong param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c25e5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      dVar14 = 0.0;
      puVar3 = param_2;
      func_0x00010bf358a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar3);
          }
          uVar11 = *(ulong *)((long)puVar9 * 8);
          uVar4 = uVar11;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010c25e5c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0720c0();
          _objc_release(lVar2);
          _objc_release(uVar4);
          if ((uVar5 & 1) != 0) {
            func_0x00010c250f20(uVar11);
            lVar1 = param_3;
            func_0x00010c25e5e0();
            dVar14 = dVar14 + (double)((int)lVar1 / 1000);
            _objc_release(puVar3);
            goto LAB_108477108;
          }
          puVar9 = puVar9 + 1;
        } while (puVar10 != puVar9);
        puVar10 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
    }
  }
  uVar4 = param_1;
  func_0x00010c29ae20();
  dVar14 = 0.0;
  if (2000 < uVar4) {
    uVar4 = param_1;
    func_0x00010c29ae20();
    dVar14 = (double)(uVar4 - 2000) / 1000.0;
  }
  if (param_2 != (undefined *)0x0) {
    dVar13 = 0.0;
    puVar3 = param_2;
    func_0x00010bef3160();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar10 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar12 = *(undefined8 *)((long)puVar9 * 8);
        func_0x00010c250f20(uVar12);
        if (dVar14 < dVar13) {
          func_0x00010c250f20(uVar12);
          dVar13 = dVar13 - dVar14;
          if (dVar13 < 10.0) {
            func_0x00010c250f20(uVar12);
            dVar14 = dVar13 + -10.0;
          }
        }
        puVar9 = puVar9 + 1;
      } while (puVar10 != puVar9);
      puVar10 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
  }
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
LAB_108477108:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return dVar14;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar8 == 0) {
    puVar10 = puVar7;
    func_0x00010bfe3b00(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar10 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar10);
  }
  puVar3 = puVar7;
  func_0x00010bf8bc40();
  puVar9 = puVar10;
  if ((int)puVar3 == 1) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf8c980(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bfb7c00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126cc710;
    func_0x00010bf1bfa0(PTR_PTR_1126cc710);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(uVar12);
  }
  puVar10 = puVar7;
  func_0x00010c26f700();
  if ((int)puVar10 == 0) {
    dVar14 = 0.0;
  }
  else {
    puVar10 = puVar7;
    func_0x00010bf8b160();
    puVar3 = puVar7;
    func_0x00010c26f700();
    dVar14 = (double)(((float)(long)puVar10 * 1000.0) / (float)(int)puVar3);
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(double *)(lVar8 + 0x18) = dVar14 + *(double *)(lVar8 + 0x18);
  puVar10 = PTR_PTR_1126cc718;
  _objc_alloc(PTR_PTR_1126cc718);
  puVar3 = puVar7;
  func_0x00010c29a460(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060e80(dVar14,puVar10);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return dVar14;
}



/* Entry: 108477170; end: 108477393;  */

void FUN_108477170(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double dVar7;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = param_2;
    func_0x00010bfe3b00(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar6);
  }
  puVar2 = param_2;
  func_0x00010bf8bc40();
  puVar4 = puVar6;
  if ((int)puVar2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf8c980(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfb7c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126cc710;
    func_0x00010bf1bfa0(PTR_PTR_1126cc710);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  puVar6 = param_2;
  func_0x00010c26f700();
  if ((int)puVar6 == 0) {
    dVar7 = 0.0;
  }
  else {
    puVar6 = param_2;
    func_0x00010bf8b160();
    puVar2 = param_2;
    func_0x00010c26f700();
    dVar7 = (double)(((float)(long)puVar6 * 1000.0) / (float)(int)puVar2);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(double *)(lVar1 + 0x18) = dVar7 + *(double *)(lVar1 + 0x18);
  puVar6 = PTR_PTR_1126cc718;
  _objc_alloc(PTR_PTR_1126cc718);
  puVar2 = param_2;
  func_0x00010c29a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060e80(dVar7,puVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108477394; end: 1084775e3;  */

void FUN_108477394(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef1ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x00010c278380();
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if ((ulong)(long)(int)uVar1 < uVar3) {
      puVar4 = PTR_PTR_1126ca548;
      _objc_alloc(PTR_PTR_1126ca548);
      uVar1 = uVar2;
      func_0x00010c250f20(uVar2);
      uVar3 = uVar2;
      func_0x00010c26f700(uVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      fVar10 = (float)(long)uVar1 / (float)(int)uVar3;
      dVar11 = (double)fVar10;
      func_0x00010c241220();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bef1ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bef3ba0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010bef1ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfdb780();
      if ((uVar7 & 1) == 0) {
        func_0x00010c04bb60(dVar11,0x3ff0000000000000,puVar4);
      }
      else {
        uVar7 = param_3;
        func_0x00010bef1ae0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c150d00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c04bb60(dVar11,(double)fVar10,puVar4);
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(puVar5);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000108473554(puVar4,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar5);
      _objc_release(uVar9);
      _objc_release(puVar4);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084775e4; end: 10847762f;  */

void FUN_1084775e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108477630; end: 108477697;  */

void FUN_108477630(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  func_0x00010c2439e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  }
  return;
}



/* Entry: 108477698; end: 108477893;  */

void FUN_108477698(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  dVar14 = 0.0;
  lVar2 = param_2;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar2);
      }
      uVar12 = *(undefined8 *)(lVar13 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c08abc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar12;
      func_0x00010c241220(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar9);
      _objc_release(uVar4);
      if ((int)uVar6 != 0) {
        lVar5 = param_2;
        func_0x00010c29a460();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        uVar9 = *(undefined8 *)(lVar10 + 0x28);
        *(long *)(lVar10 + 0x28) = lVar5;
        _objc_release(uVar9);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010bf08ca0();
        *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 99 < iVar1;
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010bf08ca0();
        *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (long)iVar1;
        func_0x00010c250f20(uVar12);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c08abe0();
        dVar14 = (double)iVar1 + dVar14 * 1000.0;
        *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = (long)dVar14;
      }
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c08abc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c241220(lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c0720c0();
  _objc_release(lVar3);
  _objc_release(uVar6);
  if ((int)uVar9 != 0) {
    lVar3 = lVar7;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    uVar9 = *(undefined8 *)(lVar11 + 0x28);
    *(long *)(lVar11 + 0x28) = lVar3;
    _objc_release(uVar9);
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bf08ca0();
    *(bool *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) = 99 < iVar1;
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bf08ca0();
    *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18) = (long)iVar1;
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010c08abe0();
    *(long *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x18) = (long)iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 108477894; end: 10847798f;  */

void FUN_108477894(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08abc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    uVar3 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    _objc_release(uVar4);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf08ca0();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 99 < iVar1;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf08ca0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (long)iVar1;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c08abe0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = (long)iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108477990; end: 108477aef;  */

void FUN_108477990(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_2;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)(uVar7 * 8);
      puVar3 = PTR_PTR_1126d50b8;
      _objc_alloc(PTR_PTR_1126d50b8);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047c20(0xbff0000000000000,puVar3);
      _objc_release(uVar6);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar3);
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
    uVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010c2439e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar7 & 1) == 0) {
    puVar3 = PTR_PTR_1126d50b8;
    _objc_alloc(PTR_PTR_1126d50b8);
    uVar2 = uVar4;
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047c20(0xbff0000000000000,puVar3);
    _objc_release(uVar2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108477af0; end: 108477baf;  */

void FUN_108477af0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2439e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126d50b8;
    _objc_alloc(PTR_PTR_1126d50b8);
    uVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047c20(0xbff0000000000000,puVar3);
    _objc_release(uVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108477bb0; end: 108477bbb;  */

void FUN_108477bb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_hasPrefix__1125d43b0,&PTR____CFConstantStringClassReference_110edd758);
  return;
}



/* Entry: 108477bbc; end: 1084797cf;  */

/* WARNING: Possible PIC construction at 0x0001084783c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001084783c4) */
/* WARNING: Removing unreachable block (ram,0x000108478418) */
/* WARNING: Removing unreachable block (ram,0x00010847843c) */
/* WARNING: Removing unreachable block (ram,0x000108478440) */
/* WARNING: Removing unreachable block (ram,0x00010847844c) */
/* WARNING: Removing unreachable block (ram,0x0001084788a0) */
/* WARNING: Removing unreachable block (ram,0x000108478458) */
/* WARNING: Removing unreachable block (ram,0x0001084784a0) */
/* WARNING: Removing unreachable block (ram,0x0001084784a4) */
/* WARNING: Removing unreachable block (ram,0x0001084784f4) */
/* WARNING: Removing unreachable block (ram,0x000108478558) */
/* WARNING: Removing unreachable block (ram,0x00010847856c) */
/* WARNING: Removing unreachable block (ram,0x000108478570) */
/* WARNING: Removing unreachable block (ram,0x000108478580) */
/* WARNING: Removing unreachable block (ram,0x000108478588) */
/* WARNING: Removing unreachable block (ram,0x0001084785ec) */
/* WARNING: Removing unreachable block (ram,0x000108478608) */
/* WARNING: Removing unreachable block (ram,0x00010847865c) */
/* WARNING: Removing unreachable block (ram,0x00010847866c) */
/* WARNING: Removing unreachable block (ram,0x0001084786ec) */
/* WARNING: Removing unreachable block (ram,0x000108478704) */
/* WARNING: Removing unreachable block (ram,0x000108478784) */
/* WARNING: Removing unreachable block (ram,0x0001084787cc) */
/* WARNING: Removing unreachable block (ram,0x0001084783d4) */
/* WARNING: Removing unreachable block (ram,0x0001084783e0) */
/* WARNING: Removing unreachable block (ram,0x000108478978) */
/* WARNING: Removing unreachable block (ram,0x00010847897c) */
/* WARNING: Removing unreachable block (ram,0x000108478a00) */
/* WARNING: Removing unreachable block (ram,0x000108478a10) */
/* WARNING: Removing unreachable block (ram,0x000108478a14) */
/* WARNING: Removing unreachable block (ram,0x000108478a24) */
/* WARNING: Removing unreachable block (ram,0x000108478a2c) */
/* WARNING: Removing unreachable block (ram,0x000108478a74) */
/* WARNING: Removing unreachable block (ram,0x000108478a80) */
/* WARNING: Removing unreachable block (ram,0x000108478aac) */
/* WARNING: Removing unreachable block (ram,0x000108478ac0) */
/* WARNING: Removing unreachable block (ram,0x000108478adc) */
/* WARNING: Removing unreachable block (ram,0x000108478b50) */
/* WARNING: Removing unreachable block (ram,0x000108478b54) */
/* WARNING: Removing unreachable block (ram,0x000108478b88) */
/* WARNING: Removing unreachable block (ram,0x000108478c04) */

void FUN_108477bbc(undefined8 param_1,undefined **param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined *puVar37;
  undefined8 uVar38;
  long lVar39;
  undefined **ppuVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 unaff_x27;
  undefined8 uVar45;
  long in_stack_fffffffffffffa68;
  undefined *puStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined8 uStack_410;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined1 uStack_387;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  ppuVar1 = param_2;
  func_0x00010bfd7420();
  if (((ulong)ppuVar1 & 1) != 0) {
    ppuVar1 = param_2;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c15e580();
    ppuVar40 = param_2;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar40;
    func_0x00010c15e660();
    _objc_release(ppuVar40);
    _objc_release(ppuVar1);
    func_0x00010c0a47c0(param_4);
    if ((long)ppuVar2 <= (long)ppuVar3) goto LAB_108477e50;
    ppuVar1 = param_2;
    func_0x00010c0cc0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = param_3;
    func_0x00010c25bc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    if (lVar39 != 0) {
      lVar4 = lVar39;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar42 = lVar4;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar42;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar42);
      _objc_release(lVar4);
      ppuStack_3d8 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(lVar5);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0;
      lStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      plStack_2f0 = (long *)0x0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      _objc_retain(lVar5);
      lVar4 = lVar5;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar42 = *plStack_2f0;
        do {
          lVar43 = 0;
          do {
            if (*plStack_2f0 != lVar42) {
              _objc_enumerationMutation(lVar5);
            }
            uVar38 = *(undefined8 *)(lStack_2f8 + lVar43 * 8);
            func_0x00010c241220(uVar38);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuStack_3d8);
            _objc_release(uVar38);
            lVar43 = lVar43 + 1;
          } while (lVar4 != lVar43);
          lVar4 = lVar5;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar5);
      _objc_release(lVar5);
      _objc_release(lVar39);
      goto LAB_108477e60;
    }
    puVar37 = (undefined *)0x0;
    goto LAB_10847975c;
  }
  func_0x00010c0a47c0(param_4);
LAB_108477e50:
  ppuStack_3d8 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
LAB_108477e60:
  puVar37 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar37);
  ppuVar1 = param_2;
  func_0x00010c2456a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR___NSConcreteGlobalBlock_110acae30);
  func_0x00010c246ba0(ppuVar1);
  _objc_release(&PTR___NSConcreteGlobalBlock_110acae30);
  _objc_release(ppuVar1);
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  ppuVar1 = param_2;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar39 = *plStack_330;
    do {
      ppuVar40 = (undefined **)0x0;
      do {
        if (*plStack_330 != lVar39) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar41 = *(undefined8 *)(lStack_338 + (long)ppuVar40 * 8);
        uVar38 = uVar41;
        func_0x00010bfd7420();
        uVar6 = uVar41;
        if ((int)uVar38 == 0) {
          func_0x00010bf1f720(uVar41);
          _objc_retainAutoreleasedReturnValue();
          uVar38 = uVar41;
          func_0x00010bfd6b20();
          if ((int)uVar38 == 0) {
            uVar44 = 0;
          }
          else {
            uVar44 = uVar41;
            func_0x00010bf96020(uVar41);
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = uVar44;
          }
          ppuVar3 = param_2;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar3;
          func_0x00010c07dce0();
          in_stack_fffffffffffffa68 =
               (ulong)CONCAT41(CONCAT31((int3)((ulong)in_stack_fffffffffffffa68 >> 0x28),param_7),
                               param_8) << 0x18;
          uVar45 = uVar41;
          FUN_108484724(param_1,uVar41,1,0,1,uVar6,param_5,uVar44,0,param_6,
                        in_stack_fffffffffffffa68,0,0,0,0,0,0,0,(ulong)ppuVar7 & 0xff);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c120340(uVar41);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuStack_3d8);
          _objc_release(uVar41);
          _objc_release(uVar45);
          _objc_release(ppuVar3);
          if ((int)uVar38 != 0) {
            _objc_release(unaff_x27);
          }
LAB_1084781c8:
          _objc_release(uVar6);
        }
        else {
          uVar38 = uVar41;
          func_0x00010bfb68a0();
          _objc_retainAutoreleasedReturnValue();
          uVar44 = uVar38;
          func_0x00010c27dd80();
          _objc_release(uVar38);
          if ((int)uVar44 == 2) {
            func_0x00010c120340(uVar41);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(ppuStack_3d8);
            uVar6 = uVar41;
            goto LAB_1084781c8;
          }
          if ((int)uVar44 == 1) {
            uVar38 = uVar41;
            func_0x00010bfb68a0(uVar41);
            _objc_retainAutoreleasedReturnValue();
            uVar44 = uVar38;
            func_0x00010c15e560();
            _objc_release(uVar38);
            func_0x00010bf1f720(uVar41);
            _objc_retainAutoreleasedReturnValue();
            uVar38 = uVar41;
            func_0x00010bfd6b20();
            if ((int)uVar38 == 0) {
              uVar45 = 0;
            }
            else {
              uVar45 = uVar41;
              func_0x00010bf96020();
              _objc_retainAutoreleasedReturnValue();
              uStack_410 = uVar45;
            }
            ppuVar3 = param_2;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar3;
            func_0x00010c07dce0();
            in_stack_fffffffffffffa68 =
                 (ulong)CONCAT41(CONCAT31((int3)((ulong)in_stack_fffffffffffffa68 >> 0x28),param_7),
                                 param_8) << 0x18;
            uVar8 = uVar41;
            FUN_108484724(param_1,uVar41,1,uVar44,1,uVar6,param_5,uVar45,0,param_6,
                          in_stack_fffffffffffffa68,0,0,0,0,0,0,0,(ulong)ppuVar7 & 0xff);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c120340(uVar41);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuStack_3d8);
            _objc_release(uVar41);
            _objc_release(uVar8);
            _objc_release(ppuVar3);
            if ((int)uVar38 != 0) {
              _objc_release(uStack_410);
            }
            goto LAB_1084781c8;
          }
        }
        ppuVar40 = (undefined **)((long)ppuVar40 + 1);
      } while (ppuVar2 != ppuVar40);
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar1 = ppuStack_3d8;
  func_0x00010c086e80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d4a0(ppuStack_3d8);
  _objc_release(ppuVar2);
  ppuVar2 = ppuStack_3d8;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar40 = ppuVar2;
  func_0x00010bf529e0();
  if ((undefined **)0x1 < ppuVar40) {
    ppuVar40 = (undefined **)0x1;
    do {
      ppuVar3 = ppuVar2;
      func_0x00010c0dfd40(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar7;
      FUN_10847a830();
      _objc_release(ppuVar7);
      _objc_release(ppuVar3);
      if (ppuVar9 == (undefined **)0x1) {
        func_0x00010c0abaa0(param_4);
      }
      ppuVar40 = (undefined **)((long)ppuVar40 + 1);
      ppuVar3 = ppuVar2;
      func_0x00010bf529e0();
    } while (ppuVar40 < ppuVar3);
  }
  ppuVar40 = ppuVar2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar3;
  func_0x00010bfaea80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_retain(ppuVar40);
  puStack_2b8 = (undefined8 *)0x0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  _objc_retain(ppuVar40);
  ppuVar3 = ppuVar40;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    if (*plStack_2b0 != *plStack_2b0) {
      _objc_enumerationMutation(ppuVar40);
    }
    func_0x00010c241220(*puStack_2b8);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010bfda7c0;
  }
  _objc_release(ppuVar40);
  ppuVar3 = ppuVar40;
  _objc_release();
  func_0x000108f49cb8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x000108f49cc4();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar37);
  _objc_release(ppuVar9);
  ppuVar9 = ppuVar10;
  func_0x00010c08fa60();
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar9 = param_2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
  }
  func_0x00010c08fa60();
  _objc_release(ppuVar10);
  _objc_release(ppuVar3);
  ppuVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010c105400();
  _objc_retainAutoreleasedReturnValue();
  puStack_3d0 = PTR___NSConcreteStackBlock_11034bd00;
  uVar38 = 0xc2000000;
  uStack_3c8 = 0xc2000000;
  pcStack_3c0 = FUN_10847998c;
  puStack_3b8 = &UNK_110a4a3d8;
  _objc_retain(param_3);
  lStack_3b0 = param_3;
  _objc_retain(param_4);
  uStack_3a8 = param_4;
  _objc_retain(param_5);
  uStack_3a0 = param_5;
  _objc_retain(param_6);
  uStack_398 = param_6;
  uStack_388 = param_7;
  uStack_387 = param_8;
  _objc_retain(param_9);
  ppuVar10 = ppuVar9;
  uStack_390 = param_9;
  func_0x000100504554(ppuVar9,&puStack_3d0);
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
  ppuVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar9;
  func_0x00010c08fa60();
  ppuVar12 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3f8 = ppuVar12;
  if (ppuVar11 == (undefined **)0x0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
  ppuVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010c078f60();
  if (((ulong)ppuVar9 & 1) == 0) {
    ppuVar9 = param_2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar9;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar3);
  ppuVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010bfd7e00();
  _objc_release(ppuVar3);
  if ((int)ppuVar9 == 0) {
    ppuStack_438 = (undefined **)0x0;
    ppuStack_430 = (undefined **)0x0;
    ppuStack_440 = (undefined **)0x0;
  }
  else {
    ppuVar3 = param_2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar3;
    func_0x00010bfea260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar9;
    func_0x00010bf24fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar3 = ppuVar9;
      func_0x00010bf24fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_3f8);
      ppuStack_3f8 = ppuVar3;
    }
    ppuStack_430 = ppuVar9;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_438 = ppuVar9;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar9;
    func_0x00010bf25160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar3;
    func_0x00010bf0aa60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_440 = ppuVar11;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(ppuVar3);
    func_0x00010bf25040(ppuVar9);
    func_0x00010c11a980();
    _objc_release(ppuVar9);
  }
  ppuVar3 = param_2;
  func_0x00010bfd7420();
  if ((int)ppuVar3 == 0) {
    puStack_448 = (undefined *)0x0;
  }
  else {
    ppuVar3 = param_2;
    func_0x00010bfb68a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_448 = PTR_PTR_1126d9780;
    _objc_alloc();
    func_0x00010c15e640(ppuVar3);
    func_0x00010c021a40();
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010bfea260();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar9;
  func_0x00010bf25320();
  ppuStack_3f0 = (undefined **)0x0;
  switch((int)ppuVar11) {
  case 200:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc538;
    break;
  case 0xc9:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc578;
    break;
  case 0xca:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc5b8;
    break;
  case 0xcb:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc5f8;
    break;
  case 0xcc:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc638;
    break;
  case 0xcd:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc698;
    break;
  case 0xce:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc6d8;
    break;
  case 0xcf:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc718;
    break;
  case 0xd0:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc758;
    break;
  case 0xd1:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc798;
    break;
  case 0xd2:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc7d8;
    break;
  case 0xd3:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc818;
    break;
  case 0xd4:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc858;
    break;
  case 0xd5:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc898;
    break;
  case 0xd6:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc918;
    break;
  case 0xd7:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc958;
    break;
  case 0xd8:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc998;
    break;
  case 0xd9:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc9d8;
    break;
  case 0xda:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebca18;
    break;
  case 0xdb:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebca58;
    break;
  case 0xdc:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebca98;
    break;
  case 0xdd:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcad8;
    break;
  case 0xde:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcb18;
    break;
  case 0xdf:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcb58;
    break;
  case 0xe0:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcb98;
    break;
  case 0xe1:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcbd8;
    break;
  case 0xe2:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcc18;
    break;
  case 0xe3:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcc58;
    break;
  case 0xe4:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebccd8;
    break;
  case 0xe5:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcc98;
    break;
  case 0xe6:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcd18;
    break;
  case 0xe7:
    func_0x00010b0af1f4();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_3f0 = ppuVar11;
    goto LAB_108479314;
  case 0xe8:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110edd7d8;
    break;
  case 0xe9:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc8d8;
    break;
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
    goto LAB_108479314;
  case 300:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcd58;
    break;
  case 0x12d:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcd98;
    break;
  case 0x12e:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebce58;
    break;
  case 0x12f:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebcdd8;
    break;
  case 0x130:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebce18;
    break;
  case 0x131:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110edd7f8;
    goto code_r0x000108479230;
  case 0x132:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebce98;
    break;
  case 0x133:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110edd838;
code_r0x000108479230:
    ppuVar11 = &PTR____CFConstantStringClassReference_110edd818;
    goto code_r0x000108479300;
  case 0x134:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebced8;
    break;
  case 0x135:
    ppuStack_3f0 = &PTR____CFConstantStringClassReference_110edd858;
    break;
  default:
    switch((int)ppuVar11) {
    case 100:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc1b8;
      break;
    case 0x65:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc1f8;
      break;
    case 0x66:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc238;
      break;
    case 0x67:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc278;
      break;
    case 0x68:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc2b8;
      break;
    case 0x69:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc2f8;
      break;
    case 0x6a:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc338;
      break;
    case 0x6b:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc378;
      break;
    case 0x6c:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc3b8;
      break;
    case 0x6d:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc3f8;
      break;
    case 0x6e:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc438;
      break;
    case 0x6f:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc478;
      break;
    case 0x70:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc4b8;
      break;
    case 0x71:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc4f8;
      break;
    case 0x72:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110ebc158;
      break;
    case 0x73:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110edd798;
      break;
    case 0x74:
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110edd7b8;
      break;
    default:
      goto LAB_108479314;
    }
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110ebc178;
code_r0x000108479300:
  func_0x000107c312f8(ppuStack_3f0,ppuVar11,0);
  _objc_retainAutoreleasedReturnValue();
LAB_108479314:
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
  puVar37 = PTR_PTR_1126d5b88;
  _objc_alloc();
  ppuVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c25b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x000108f523a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010c25b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x000108f52510();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar17;
  func_0x00010c25b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar18;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar20;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0();
  ppuVar23 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078f60();
  ppuVar24 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073320();
  ppuVar25 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar25;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar27 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2768e0();
  ppuVar28 = param_2;
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2764a0();
  ppuVar29 = param_2;
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar30 = ppuVar29;
  func_0x00010bf866c0();
  ppuVar31 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar31;
  func_0x00010bf1ade0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar33 = ppuVar32;
  func_0x00010c08fa60();
  if (ppuVar33 == (undefined **)0x0) {
    ppuVar35 = &PTR____CFConstantStringClassReference_110edd778;
    ppuVar34 = ppuVar40;
  }
  else {
    ppuVar34 = param_2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar35 = ppuVar34;
    func_0x00010bf1ade0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar36 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ec0();
  func_0x00010c04a200(uVar38,(double)(long)ppuVar30);
  _objc_release(ppuVar36);
  if (ppuVar33 != (undefined **)0x0) {
    _objc_release(ppuVar35);
    _objc_release(ppuVar34);
  }
  _objc_release(ppuVar32);
  _objc_release(ppuVar31);
  _objc_release(ppuVar29);
  _objc_release(ppuVar28);
  _objc_release(ppuVar27);
  _objc_release(ppuVar26);
  _objc_release(ppuVar25);
  _objc_release(ppuVar24);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
  _objc_release(ppuStack_3f0);
  _objc_release(puStack_448);
  _objc_release(ppuStack_440);
  _objc_release(ppuStack_438);
  _objc_release(ppuStack_430);
  _objc_release(ppuStack_3f8);
  _objc_release(ppuVar10);
  _objc_release(uStack_390);
  _objc_release(uStack_398);
  _objc_release(uStack_3a0);
  _objc_release(uStack_3a8);
  _objc_release(lStack_3b0);
  _objc_release(ppuVar7);
  _objc_release(ppuVar40);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuStack_3d8);
LAB_10847975c:
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar37);
    return;
  }
  ___stack_chk_fail();
code_r0x00010bfda7c0:
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1084797d0; end: 1084797df;  */

void FUN_1084797d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_hasPrefix__1125d43b0,&PTR____CFConstantStringClassReference_110edd758);
  return;
}



/* Entry: 1084797e0; end: 10847998b;  */

void FUN_1084797e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  func_0x00010c052380((double)param_1 / 1000.0);
  puVar3 = PTR_PTR_1126cbc90;
  _objc_alloc(PTR_PTR_1126cbc90);
  func_0x00010c047dc0(0x4014000000000000,0);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10847998c; end: 108479a33;  */

void FUN_10847998c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c11ab00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_108477bbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108479a34; end: 10847a773;  */

void FUN_108479a34(long param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined4 param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_e0;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = param_1;
  func_0x00010c11ab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bfd7420();
  if ((int)lVar3 == 0) {
LAB_108479ef4:
    _objc_release(lVar2);
LAB_108479efc:
    uVar6 = param_9;
    func_0x00010bf1f440();
    lVar3 = lVar2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if ((uVar6 & 1) == 0) {
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar29 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((lVar29 == 0) || (uVar6 = param_2, func_0x00010bfebb60(), (uVar6 & 1) != 0)) {
      uVar6 = param_2;
      func_0x00010bfebb60();
      if ((int)uVar6 != 0) goto LAB_108479f84;
    }
    else {
      uVar6 = param_4;
      func_0x00010c06d560();
      if ((uVar6 & 1) == 0) {
        if (param_4 != 0) {
          uVar6 = param_4;
          func_0x00010bfb8280();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c261440();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf0a8a0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar9 == 0) {
            _objc_release(uVar8);
            _objc_release(uVar6);
          }
          else {
            uVar10 = param_4;
            func_0x00010c06d560();
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar6);
            if ((uVar10 & 1) == 0) {
              lVar3 = lVar2;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010bfd7e00();
              _objc_release(lVar3);
              if ((int)lVar4 == 0) {
                puVar27 = (undefined *)0x0;
                goto LAB_10847a67c;
              }
            }
          }
        }
        uVar6 = param_2;
        func_0x00010c077b80();
        lVar3 = lVar2;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c07a6a0();
        if ((int)lVar4 == 0) {
          lVar4 = lVar2;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          lVar29 = lVar4;
          func_0x00010c078f60();
          uVar1 = (uint)lVar29;
          if (param_4 != 0) {
            uVar1 = 1;
          }
          _objc_release(lVar4);
          _objc_release(lVar3);
          if (((uVar1 | (uint)uVar6) & 1) == 0) goto LAB_10847a14c;
        }
        else {
          _objc_release(lVar3);
        }
LAB_108479f84:
        lVar3 = param_1;
        func_0x00010bf454e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x000108f521b4();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_2;
        func_0x00010bfebb60(param_2);
        uVar8 = param_2;
        func_0x00010bfebb60(param_2);
        lVar29 = lVar2;
        FUN_108477bbc(lVar2,param_5,param_7,lVar4,param_8,uVar6,uVar8,param_9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar29 == 0) {
          lVar29 = 0;
          puVar27 = (undefined *)0x0;
        }
        else {
          lVar3 = lVar29;
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x000100504554();
          _objc_release(lVar3);
          lVar3 = lVar29;
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar5;
          func_0x00010bf5b480();
          _objc_retainAutoreleasedReturnValue();
          uStack_e0 = lVar7;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(lVar5);
          _objc_release(lVar3);
          if (uStack_e0 == 0) {
            uStack_e0 = lVar29;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
          }
          lVar3 = lVar29;
          func_0x00010c26e300();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar29;
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar3);
          _objc_retain(lVar5);
          uVar30 = 0xc2000000;
          _objc_retain(lVar3);
          lVar7 = lVar5;
          func_0x00010bfece40();
          if (lVar7 == 0x7fffffffffffffff) {
            lVar28 = 0;
          }
          else {
            lVar7 = lVar5;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            lVar28 = lVar7;
            func_0x00010bfbe4e0();
            _objc_release(lVar7);
          }
          _objc_release(lVar3);
          _objc_release(lVar5);
          _objc_release(lVar3);
          _objc_release(lVar5);
          _objc_release(lVar3);
          lVar3 = lVar29;
          func_0x00010c2768e0(lVar29);
          lVar5 = param_1;
          func_0x000108f52c50(param_1,param_2,lVar4,(long)(int)lVar3,0,uStack_e0,param_6,0,0,lVar28)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar27 = PTR_PTR_1126c2098;
          _objc_alloc();
          lVar3 = param_1;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x000108f521b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c259740();
          func_0x000108f52acc();
          func_0x00010c26e960(param_1);
          uVar31 = uVar30;
          func_0x00010c080120();
          func_0x00010c078e00();
          func_0x00010c072c20();
          lVar28 = param_1;
          func_0x00010bfa31e0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_1;
          func_0x00010bf66200();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x000108f516b8();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126c6d88;
          func_0x00010c11abc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_2;
          func_0x00010c13bd00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c150c20(param_1);
          lVar14 = param_1;
          uVar32 = uVar31;
          func_0x00010bf3d2e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f680();
          lVar15 = param_1;
          func_0x00010bf3d2e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07d8e0();
          lVar16 = param_1;
          func_0x00010bf3d2e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0820e0();
          lVar17 = param_1;
          func_0x00010bf3d2e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11ce20();
          puVar18 = PTR_PTR_1126d58d0;
          _objc_alloc();
          lVar19 = param_1;
          func_0x00010bf3cd00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe2bc0();
          lVar20 = param_1;
          func_0x00010bf3cd00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c236ac0();
          lVar21 = param_1;
          func_0x00010bf3cd00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c231940();
          func_0x00010c01a720();
          lVar22 = param_1;
          func_0x00010c08b2e0(param_1);
          func_0x00010bfddfe0();
          func_0x00010c080120();
          puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c259c60(param_1);
          func_0x00010c0df760();
          _objc_retainAutoreleasedReturnValue();
          lVar24 = param_1;
          func_0x000108f518a0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = param_1;
          func_0x000108f52990();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6e240(param_1);
          lVar26 = param_1;
          func_0x000108f508a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c000c60(uVar30,uVar31,(double)lVar22,uVar32,puVar27);
          _objc_release(lVar26);
          _objc_release(lVar25);
          _objc_release(lVar24);
          _objc_release(puVar23);
          _objc_release(puVar18);
          _objc_release(lVar21);
          _objc_release(lVar20);
          _objc_release(lVar19);
          _objc_release(lVar17);
          _objc_release(lVar16);
          _objc_release(lVar15);
          _objc_release(lVar14);
          _objc_release(uVar6);
          _objc_release(puVar13);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar28);
          _objc_release(lVar7);
          _objc_release(lVar3);
          _objc_release(lVar5);
          _objc_release(uStack_e0);
          _objc_release(lVar4);
        }
        goto LAB_10847a674;
      }
    }
LAB_10847a14c:
    puVar27 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15e580();
    lVar29 = lVar2;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar29;
    func_0x00010c15e660();
    _objc_release(lVar29);
    _objc_release(lVar3);
    if (lVar4 <= lVar5) goto LAB_108479ef4;
    lVar3 = lVar2;
    func_0x00010c2456c0();
    _objc_release(lVar2);
    if ((lVar3 != 0) || (uVar6 = param_9, func_0x00010bf1f440(), (int)uVar6 == 0))
    goto LAB_108479efc;
    lVar3 = lVar2;
    func_0x00010c0cc0c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_5;
    func_0x00010c25bc80(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar13 = PTR_PTR_1126c22b0;
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_retain(lVar29);
    lVar3 = lVar29;
    func_0x00010c25a160(lVar29);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf81ce0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar6 = param_2;
    func_0x00010c135700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba820(puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c080120(param_1);
    func_0x00010c2b17c0(puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126c2140;
    lVar3 = lVar29;
    func_0x00010c25a160(lVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82100(puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2adcc0(puVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar27);
    puVar27 = puVar13;
    func_0x00010bf21f60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b67e0(puVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar27);
    puVar18 = PTR_PTR_1126c6d78;
    func_0x00010bf82080(PTR_PTR_1126c6d78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar29);
    uVar6 = param_2;
    func_0x00010c13bd00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c2b7340(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c2b7320(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf66200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000108f516b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abd20(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c08b2e0(param_1);
    func_0x00010c2b24a0((double)lVar3,puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c150c20(param_1);
    func_0x00010c2b7a80(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf3d2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f680();
    func_0x00010c2b6720(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar27 = puVar23;
    func_0x00010bf21f60(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar27);
    puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259c60(param_1);
    _objc_release(param_1);
    func_0x00010c0df760(puVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba420(puVar18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar27);
    puVar27 = puVar18;
    func_0x00010bf21f60(puVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar23);
    _objc_release(puVar13);
LAB_10847a674:
    _objc_release(lVar29);
  }
LAB_10847a67c:
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 10847a774; end: 10847a82f;  */

void FUN_10847a774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d50b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_3);
  func_0x000108f52250();
  func_0x00010bf8b160(param_3);
  func_0x00010c25b820(param_3);
  _objc_release(param_3);
  func_0x00010c047c20(param_1,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10847a830; end: 10847a8b3;  */

undefined8 FUN_10847a830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf5aac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf5aac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10847a8b4; end: 10847a8c3;  */

void FUN_10847a8b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 10847a8c4; end: 10847a90b;  */

void FUN_10847a8c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10847a90c; end: 10847b677;  */

void FUN_10847a90c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
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
  undefined *puVar15;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bfdc0c0();
  if ((int)uVar4 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar4 = param_1;
    func_0x00010c2387e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126d9790;
    _objc_alloc(PTR_PTR_1126d9790);
    uVar5 = uVar4;
    func_0x00010c237cc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c238a20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c236fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c237b60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c23aa60();
    iVar3 = (int)uVar9;
    uVar1 = 4;
    if (iVar3 != 3) {
      uVar1 = 0;
    }
    uVar2 = 3;
    if (iVar3 != 2) {
      uVar2 = uVar1;
    }
    uVar1 = 2;
    if (iVar3 != -0x4524111) {
      uVar1 = iVar3 == 1;
    }
    if (iVar3 < 2) {
      uVar2 = uVar1;
    }
    uVar9 = uVar4;
    func_0x00010bf984e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010c116fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010c116ce0();
    uVar12 = uVar4;
    func_0x00010bf538c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c154b00();
    uVar14 = uVar4;
    func_0x00010bf984c0();
    func_0x00010c046400(puVar15,param_2,uVar5,uVar6,uVar7,uVar8,uVar2,uVar9,uVar10,(long)(int)uVar11
                        ,uVar12,(int)uVar13,(int)uVar14);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10847b678; end: 10847b727;  */

void FUN_10847b678(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241220();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08abc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)puVar3 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10847b728; end: 10847bc9f;  */

void FUN_10847b728(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
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
  undefined **ppuVar24;
  undefined8 uStack_120;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf16280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010847ab0c(param_2,uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bef60a0();
  ppuStack_70 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar1 == 0) {
    func_0x00010c241220();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110edd738;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010bfd6b20();
  if ((int)uVar1 == 0) {
    uStack_78 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar1;
    func_0x000108f50ec4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126cc730;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010c242b00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfdeb80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2439e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  uVar6 = param_2;
  func_0x00010bef3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bfb68a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e560();
  func_0x00010c0c6c20();
  func_0x00010c082620();
  uVar8 = param_2;
  func_0x00010c0ed940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  puVar9 = PTR_PTR_1126cc6f8;
  _objc_alloc();
  uVar10 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x000108f55418();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0473c0();
  puVar12 = PTR_PTR_1126d9778;
  _objc_alloc();
  uVar13 = param_2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0045a0();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11b540();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bfd4bc0();
  if ((int)uVar15 == 0) {
    uVar16 = param_2;
    func_0x00010bf1f720();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_120 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11b540();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uStack_120;
    func_0x00010bf1f720();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf454e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x000108f521b4();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x000108f4fbd8(uVar16,uVar18);
  uVar20 = param_2;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bfe2ee0();
  uVar22 = param_2;
  func_0x00010bfe4640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c0b5940();
  func_0x000100c4a928(uVar21,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_2;
  func_0x00010bfb1200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe4e0();
  func_0x00010c048a80();
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  if ((int)uVar15 != 0) {
    _objc_release(uVar16);
    uVar16 = uStack_120;
  }
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(puVar12);
  _objc_release(uVar13);
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08abc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuStack_70;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)ppuVar24 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
    }
  }
  _objc_release(uStack_78);
  _objc_release(ppuStack_70);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10847bca0; end: 10847bdd7;  */

void FUN_10847bca0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c2439e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    _objc_retain(uVar2);
    uVar1 = uVar2;
  }
  else {
    uVar1 = param_1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar3 < 2) {
      uVar1 = 0;
    }
    else {
      uVar3 = param_1;
      func_0x00010c245680(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c245680(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      uVar1 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar5 - 2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10847bdd8; end: 10847bfd7;  */

void FUN_10847bdd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  FUN_10847bca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29ea60();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          lVar9 = *(long *)(lVar10 * 8);
          lVar4 = lVar9;
          func_0x00010c26e920();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
LAB_10847bf14:
            lVar4 = lVar9;
            func_0x00010c26e920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar4 != 0) {
              _objc_retain(lVar9);
              _objc_release(lVar2);
              goto LAB_10847bf8c;
            }
          }
          else {
            lVar5 = lVar9;
            func_0x00010c29ea60();
            _objc_release(lVar4);
            if ((int)lVar5 == 0) goto LAB_10847bf14;
            _objc_retain(lVar9);
            _objc_release(lVar8);
            lVar8 = lVar9;
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    _objc_retain(lVar8);
  }
  else {
    lVar8 = param_1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10847bf8c:
  _objc_release(lVar8);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126d97a0;
    _objc_retain(param_2);
    _objc_alloc(puVar6);
    func_0x00010bef5200(param_2);
    func_0x00010c110240(param_2);
    func_0x00010c0d9e60(param_2);
    _objc_release(param_2);
    func_0x00010bff1f40(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10847bfd8; end: 10847c05f;  */

void FUN_10847bfd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d97a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bef5200(param_2);
  func_0x00010c110240(param_2);
  func_0x00010c0d9e60(param_2);
  _objc_release(param_2);
  func_0x00010bff1f40(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10847c060; end: 10847c0d7;  */

void FUN_10847c060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bef3ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10847c0d8; end: 10847c143;  */

void FUN_10847c0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d50b8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c047c20(0xbff0000000000000);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10847c144; end: 10847c983;  */

void FUN_10847c144(undefined *param_1)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_110;
  undefined *puStack_b8;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c11b540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d97a8;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c11b180();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b1e0();
  puVar10 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c112dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c08fa60();
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (puVar14 == (undefined *)0x0) {
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar15;
  }
  else {
    puStack_110 = puVar1;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puStack_110;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf415c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar16 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c154ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c08fa60();
  puStack_b8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (puVar18 == (undefined *)0x0) {
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_218 = puVar1;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puStack_220 = puStack_218;
    func_0x00010c154ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf415c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar21 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar19 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010c11b060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar22 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bfad760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar25 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010bfe4220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116ce0();
  puVar31 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar29 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010bfe0ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar32;
  func_0x00010bfe0e80();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar34 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar34;
  func_0x00010c2a4700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar37;
  func_0x00010c11b080();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b6c0();
  puVar40 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078b00();
  puVar41 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf012c0();
  _objc_retain(param_1);
  puVar42 = param_1;
  func_0x00010c11b540();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar42;
  func_0x00010bef3ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar43;
  func_0x00010bef5260();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar44;
  func_0x000100504554();
  _objc_release(puVar44);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar44 = puVar42;
  func_0x00010bef3ba0(puVar42);
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar44;
  func_0x00010c0ec660();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar43);
  func_0x00010bf97ce0(puVar46);
  _objc_release(puVar46);
  _objc_release(puVar44);
  puVar44 = PTR_PTR_1126cc6b0;
  _objc_alloc();
  puVar46 = puVar42;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4ee0();
  puVar47 = puVar42;
  func_0x00010bef3ba0(puVar42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0698a0();
  puVar48 = param_1;
  func_0x00010bef3aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bff1f20();
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar43);
  _objc_release(puVar43);
  _objc_release(puVar45);
  _objc_release(puVar42);
  _objc_release(param_1);
  puVar42 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1414c0();
  puVar43 = puVar1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ec40();
  func_0x00010c02d9a0();
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar44);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  if (puVar18 != (undefined *)0x0) {
    _objc_release(puStack_b8);
    _objc_release(puStack_220);
    puStack_b8 = puStack_218;
  }
  _objc_release(puStack_b8);
  _objc_release(puVar17);
  _objc_release(puVar16);
  if (puVar14 != (undefined *)0x0) {
    _objc_release(puVar15);
    _objc_release(puStack_210);
  }
  _objc_release(puStack_110);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10847c984; end: 10847d8d3;  */

void FUN_10847c984(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  double dVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puStack_3b0;
  undefined *puStack_1f8;
  undefined *puStack_198;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 uStack_d0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar2 = param_1;
  func_0x00010c11b540();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar34 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puVar34 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar34;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = puVar2;
        func_0x00010c11af80();
        _objc_retainAutoreleasedReturnValue();
        puVar37 = puVar5;
        func_0x00010c11b180();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar37;
        func_0x00010c08fa60();
        _objc_release(puVar37);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar34);
        _objc_release(puVar3);
        if (puVar6 == (undefined *)0x0) {
          puVar34 = (undefined *)0x0;
          goto LAB_10847d840;
        }
      }
      else {
        _objc_release(puVar4);
        _objc_release(puVar34);
        _objc_release(puVar3);
      }
      puVar3 = param_1;
      FUN_10847c144();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b1e0();
      func_0x00010bf8c980();
      _objc_retain(puVar4);
      _objc_retain(param_1);
      _objc_retain(puVar5);
      _objc_retain(param_2);
      _objc_retain(param_4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar35 = param_2;
      func_0x00010c2a2920();
      _objc_retainAutoreleasedReturnValue();
      lVar36 = lVar35;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar35);
      uVar7 = param_4;
      func_0x00010bf1f440();
      puStack_168 = &uStack_170;
      uStack_170 = 0;
      uStack_160 = 0x2020000000;
      uStack_158 = 0;
      lVar35 = lVar36;
      func_0x00010c08abc0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar35;
      func_0x00010c08fa60();
      _objc_release(lVar35);
      puVar34 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar8 != 0) {
        puVar9 = puVar4;
        func_0x00010c2456a0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_150 = puVar34;
        lStack_148 = 0xc2000000;
        pcStack_140 = FUN_10847b678;
        puStack_138 = &UNK_110a4a280;
        _objc_retain(lVar36);
        puStack_128 = &uStack_170;
        lStack_130 = lVar36;
        func_0x00010bf97e80(puVar9);
        _objc_release(puVar9);
        _objc_release(lStack_130);
      }
      puVar9 = puVar4;
      func_0x00010c2456a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = puVar34;
      dVar38 = 1.60807493534087e-314;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_10847b728;
      puStack_f8 = &UNK_110a4a4c8;
      _objc_retain(puVar4);
      puStack_f0 = puVar4;
      _objc_retain(lVar36);
      uStack_d0 = (undefined1)uVar7;
      puStack_d8 = &uStack_170;
      lStack_e8 = lVar36;
      _objc_retain(param_1);
      puVar10 = puVar9;
      puStack_e0 = param_1;
      func_0x000100504554(puVar9,&puStack_110);
      _objc_release(puStack_e0);
      _objc_release(lStack_e8);
      _objc_release(puStack_f0);
      _objc_release(puVar9);
      __Block_object_dispose(&uStack_170,8);
      _objc_release(lVar36);
      _objc_release(puVar6);
      _objc_release(param_4);
      _objc_release(param_2);
      _objc_release(puVar5);
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(puVar37);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar34 = puVar2;
      func_0x00010bfb68a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar34;
      func_0x00010c15e640();
      puVar5 = puVar2;
      if ((long)puVar4 < 1) {
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010c2456a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_198 = puVar4;
        func_0x00010bf529e0();
      }
      else {
        func_0x00010bfb68a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_198 = puVar5;
        func_0x00010c15e640();
        puVar4 = puVar2;
        func_0x00010bfb68a0();
        _objc_retainAutoreleasedReturnValue();
        puVar37 = puVar4;
        func_0x00010c15e660();
        puStack_198 = puStack_198 + (1 - (long)puVar37);
      }
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar34);
      puVar4 = PTR_PTR_1126ced68;
      _objc_alloc();
      func_0x00010bf8c980();
      func_0x00010c158300();
      puVar5 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar5;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar37;
      func_0x00010bfe0440();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ae80();
      func_0x00010c076ae0();
      _objc_retain(puVar2);
      _objc_retain(param_2);
      puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf8c980();
      func_0x00010c14de00(puVar34);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010bfde6c0();
      lVar35 = param_2;
      func_0x00010c2a2920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar35 == 0) {
        bVar1 = false;
      }
      else {
        lVar36 = param_2;
        func_0x00010c2a2920();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar36;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar8 != 0;
        _objc_release();
        _objc_release(lVar36);
      }
      _objc_release(lVar35);
      if (((ulong)puVar13 & 1) == 0 && !bVar1) {
        puStack_1f8 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar2;
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        if (puVar13 == (undefined *)0x0) {
          puVar14 = PTR_PTR_1126b7778;
          _objc_opt_new();
        }
        else {
          puVar14 = puVar2;
          func_0x00010c2a2900();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar13);
        lVar35 = param_2;
        func_0x00010c2a2920(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar36 = lVar35;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar35);
        if (bVar1) {
          puVar13 = puVar14;
          func_0x00010bf3d5a0();
          func_0x00010bf3d580(lVar36);
          if ((double)(long)puVar13 < dVar38) {
            lVar35 = lVar36;
            func_0x00010c08abc0(lVar36);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b90e0(puVar14);
            _objc_release(lVar35);
            func_0x00010c08abe0(lVar36);
            func_0x00010c2051e0(puVar14);
            func_0x00010bf08ca0(lVar36);
            func_0x00010c169d00(puVar14);
            lVar35 = lVar36;
            func_0x00010c08abc0(lVar36);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20ed20(puVar14);
            _objc_release(lVar35);
            func_0x00010c08abe0(lVar36);
            func_0x00010c20ed60(puVar14);
            func_0x00010bf3d580(lVar36);
            func_0x00010c17d220(puVar14);
          }
        }
        puStack_1f8 = PTR_PTR_1126ced60;
        _objc_alloc();
        puVar13 = puVar14;
        func_0x00010c25e5c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25e600(puVar14);
        func_0x00010bf08ca0(puVar14);
        func_0x00010c021960();
        _objc_release(puVar13);
        _objc_release(lVar36);
        _objc_release(puVar14);
      }
      _objc_release(puVar34);
      _objc_release(param_2);
      _objc_release(puVar2);
      puVar34 = puVar2;
      FUN_10847a90c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd5fc0();
      func_0x00010c07dbe0();
      puVar13 = puVar2;
      func_0x00010bfb68a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15e640();
      func_0x00010c29c5c0();
      func_0x00010bfed580();
      puVar14 = param_1;
      func_0x00010bf4d8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ed800();
      func_0x00010c03c020();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar34);
      _objc_release(puStack_1f8);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar37);
      _objc_release(puVar5);
      puVar5 = puVar10;
      func_0x000100504554(puVar10,&PTR___NSConcreteGlobalBlock_110a4a558);
      _objc_retain(puVar10);
      uVar7 = 0;
      lStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      puStack_138 = (undefined *)0x0;
      pcStack_140 = (code *)0x0;
      puStack_128 = (undefined8 *)0x0;
      lStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      puVar34 = puVar10;
      func_0x00010bf52a60();
      lVar35 = 0;
      if (puVar34 != (undefined *)0x0) {
        lVar36 = *(long *)pcStack_140;
        do {
          puVar37 = (undefined *)0x0;
          do {
            if (*(long *)pcStack_140 != lVar36) {
              _objc_enumerationMutation(puVar10);
            }
            lVar33 = *(long *)(lStack_148 + (long)puVar37 * 8);
            lVar8 = lVar33;
            func_0x00010c26e920();
            _objc_retainAutoreleasedReturnValue();
            if (lVar8 != 0) {
              lVar15 = lVar33;
              func_0x00010c26e920();
              _objc_retainAutoreleasedReturnValue();
              lVar16 = lVar15;
              func_0x00010bfbe4e0();
              _objc_release(lVar15);
              _objc_release(lVar8);
              if (lVar35 < lVar16) {
                func_0x00010c26e920();
                _objc_retainAutoreleasedReturnValue();
                lVar35 = lVar33;
                func_0x00010bfbe4e0();
                _objc_release(lVar33);
              }
            }
            puVar37 = puVar37 + 1;
          } while (puVar34 != puVar37);
          puVar34 = puVar10;
          func_0x00010bf52a60();
        } while (puVar34 != (undefined *)0x0);
      }
      _objc_release(puVar10);
      lVar35 = param_2;
      func_0x00010bfa4340(param_2);
      puVar6 = param_1;
      func_0x000108f52c50(param_1,param_2,puVar5,puStack_198,0,0,lVar35,0);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = PTR_PTR_1126c2098;
      _objc_alloc();
      puVar9 = param_1;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x000108f521b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c259740();
      func_0x000108f52acc();
      func_0x00010c26e960(param_1);
      uVar39 = uVar7;
      func_0x00010c080120();
      func_0x00010bfe29e0();
      func_0x00010c078e00();
      func_0x00010c072c20();
      puVar12 = param_1;
      func_0x00010bfa31e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_1;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x000108f516b8();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126c6d88;
      func_0x00010c11b640();
      _objc_retainAutoreleasedReturnValue();
      lVar35 = param_2;
      func_0x00010c13bd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c150c20(param_1);
      puVar18 = param_1;
      uVar40 = uVar39;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f680();
      puVar19 = param_1;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d8e0();
      puVar20 = param_1;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0820e0();
      puVar21 = param_1;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ce20();
      puVar22 = PTR_PTR_1126d58d0;
      _objc_alloc();
      puVar23 = param_1;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe2bc0();
      puVar24 = param_1;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c236ac0();
      puVar25 = param_1;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c231940();
      func_0x00010c01a720();
      puVar26 = param_1;
      func_0x00010c08b2e0(param_1);
      func_0x00010bfddfe0();
      func_0x00010c080120();
      puVar27 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar27;
      func_0x00010bfe4640();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259c60(param_1);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06ec40();
      puVar30 = param_1;
      func_0x000108f518a0();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = param_1;
      func_0x000108f52990();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e240(param_1);
      puVar32 = param_1;
      func_0x000108f508a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000c60(uVar7,uVar39,(double)(long)puVar26,uVar40);
      _objc_release(puVar32);
      _objc_release(puVar31);
      _objc_release(puVar30);
      _objc_release(puVar29);
      _objc_release(puVar37);
      _objc_release(puVar28);
      _objc_release(puVar27);
      _objc_release(puVar22);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(lVar35);
      _objc_release(puVar17);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar10);
      _objc_release(puVar3);
    }
  }
LAB_10847d840:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_170);
    __Unwind_Resume();
    _objc_retain();
    puVar2 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_3b0 = puVar2;
    if (puVar34 != (undefined *)0x0) {
      puStack_3b0 = PTR_PTR_1126d9798;
      _objc_alloc();
      puVar34 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar34;
      func_0x00010c26ebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe0440();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar37;
      func_0x00010bfe8f00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c29b7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c29b6c0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b45a0();
      puVar18 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010c0b4620();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010c23a520();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar22;
      func_0x00010bf1c4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar24;
      func_0x00010c23cf60();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar26;
      func_0x00010bf11b00();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar28;
      func_0x00010bf28ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbe4e0();
      func_0x00010c0521e0();
      _objc_release(puVar2);
      _objc_release(puVar30);
      _objc_release(puVar29);
      _objc_release(puVar28);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar37);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar34);
    }
    puVar34 = PTR_PTR_1126cc730;
    _objc_alloc();
    puVar2 = param_1;
    func_0x00010c243a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bfdeae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c2439e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    puVar37 = param_1;
    func_0x00010bef3ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15e560();
    func_0x00010c0c6ce0();
    func_0x00010c082620();
    puVar6 = param_1;
    func_0x00010c0ed940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    puVar9 = param_1;
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010bf814c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf1f720();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    func_0x00010c24b260();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010bfe4640();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010bf1ef80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbe4e0();
    func_0x00010c048a80();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar37);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_3b0);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar34);
  return;
}



/* Entry: 10847d8d4; end: 10847dea7;  */

void FUN_10847d8d4(undefined *param_1)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uStack_70;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_70 = puVar1;
  if (puVar2 != (undefined *)0x0) {
    uStack_70 = PTR_PTR_1126d9798;
    _objc_alloc();
    puVar2 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe0440();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c29b7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c29b6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b45a0();
    puVar15 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c0b4620();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c23a520();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf1c4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c23cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bf11b00();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf28ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = param_1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbe4e0();
    func_0x00010c0521e0();
    _objc_release(puVar1);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
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
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar1 = PTR_PTR_1126cc730;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010c243a40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bfdeae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c2439e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  puVar6 = param_1;
  func_0x00010bef3ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e560();
  func_0x00010c0c6ce0();
  func_0x00010c082620();
  puVar7 = param_1;
  func_0x00010c0ed940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  puVar8 = param_1;
  func_0x00010c23ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010bf814c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_1;
  func_0x00010bf1ef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe4e0();
  func_0x00010c048a80();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_70);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10847dea8; end: 10847e013;  */

void FUN_10847dea8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10847e014;
  uStack_60 = 0x10847e024;
  uStack_58 = 0;
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c0bebc0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_2);
  }
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10847e014; end: 10847e02b;  */

void FUN_10847e014(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10847e02c; end: 10847e0af;  */

void FUN_10847e02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_108473be4(param_4,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10847e0b0; end: 10847e0b7;  */

void FUN_10847e0b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10847e0b8; end: 10847e0df;  */

void FUN_10847e0b8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10847e0e0; end: 10847e0e7;  */

void FUN_10847e0e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10847e0e8; end: 10847e10f;  */

void FUN_10847e0e8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10847e110; end: 10847e30f;  */

void FUN_10847e110(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10847e014;
    uStack_70 = 0x10847e024;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    puStack_68 = puVar2;
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0bf680(lVar1);
    _objc_release(lVar1);
    puVar2 = (undefined *)puStack_88[5];
    _objc_retain(puVar2);
    _objc_release(param_1);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(puStack_68);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_90,8);
    __Unwind_Resume(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10847e310; end: 10847e31f;  */

void FUN_10847e310(void)

{
  return;
}



/* Entry: 10847e320; end: 10847eb13;  */

void FUN_10847e320(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puVar24;
  ulong uVar25;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c2387e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) goto LAB_10847e4e4;
  lVar23 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar23);
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
LAB_10847e494:
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar25;
    func_0x000108f571b4();
    _objc_release(uVar25);
    _objc_release(uVar2);
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) goto LAB_10847e494;
    uVar2 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar25;
    func_0x000108f56ee8();
    _objc_release(uVar25);
    _objc_release(uVar2);
    _objc_release(uVar4);
    if ((int)uVar5 != 0) goto LAB_10847e494;
    puVar7 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        lVar21 = *(long *)(uVar25 * 8);
        lVar8 = lVar21;
        func_0x00010bf1f720();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 != 0) {
          func_0x00010bef60a0();
          _objc_release(lVar8);
          if ((int)lVar21 == 0) {
            puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR_PTR_1126ced68;
            _objc_retain();
            _objc_retain(param_2);
            _objc_alloc();
            uVar5 = param_2;
            func_0x00010c11af80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf8c980();
            func_0x00010c158300();
            uVar11 = param_2;
            func_0x00010bfe0440();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = param_2;
            func_0x00010bfe5b40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11b6a0();
            func_0x00010c076ae0();
            uVar13 = param_2;
            func_0x00010c2a2900();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = param_2;
            func_0x00010c2387e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfd5fc0();
            func_0x00010c07dbe0();
            func_0x00010bf529e0();
            func_0x00010c0c2d60();
            func_0x00010c25b900();
            func_0x00010bfed580();
            uVar15 = param_2;
            func_0x00010bf4d8e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ed800();
            _objc_release(param_2);
            func_0x00010c03c020();
            _objc_release(puVar9);
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar5);
            _objc_release(puVar9);
            puVar9 = PTR_PTR_1126c6d88;
            func_0x00010c11b640(PTR_PTR_1126c6d88);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ba3c0(puVar7);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar9);
            puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(lVar23);
            _objc_retain(puVar16);
            puVar17 = PTR_PTR_1126c2140;
            lVar8 = lVar23;
            func_0x00010c25a160(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf82100();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar23;
            func_0x00010c25a160();
            _objc_retainAutoreleasedReturnValue();
            lVar21 = lVar8;
            func_0x00010c241660();
            _objc_retainAutoreleasedReturnValue();
            lVar19 = lVar21;
            func_0x00010050471c();
            _objc_release(lVar21);
            _objc_release(lVar8);
            _objc_retain(puVar16);
            puVar9 = puVar16;
            func_0x00010bf52a60();
            lVar8 = lRam0000000000000000;
            while (puVar9 != (undefined *)0x0) {
              puVar24 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar8) {
                  _objc_enumerationMutation(puVar16);
                }
                uVar22 = *(undefined8 *)((long)puVar24 * 8);
                uVar6 = uVar22;
                func_0x00010c241220(uVar22);
                _objc_retainAutoreleasedReturnValue();
                lVar21 = lVar19;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar6);
                if (lVar21 != 0) {
                  func_0x00010c241220(uVar22);
                  _objc_retainAutoreleasedReturnValue();
                  lVar21 = lVar19;
                  func_0x00010c0e00e0(lVar19);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar18);
                  _objc_release(lVar21);
                  _objc_release(uVar22);
                }
                puVar24 = puVar24 + 1;
              } while (puVar9 != puVar24);
              puVar9 = puVar16;
              func_0x00010bf52a60();
            }
            _objc_release(puVar16);
            func_0x00010c2b9440(puVar17);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar9 = puVar17;
            func_0x00010bf21f60(puVar17);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar19);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(lVar23);
            func_0x00010c2ba4e0(puVar7);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar16);
            func_0x00010c2b0840(puVar7);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010bf21f60(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(puVar9);
            _objc_release(puVar10);
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar2);
      uVar2 = uVar4;
      func_0x00010bf52a60();
    }
    _objc_release(uVar4);
    _objc_retain(puVar3);
    _objc_release(puVar7);
    puVar7 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(lVar23);
  lVar23 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar23 + 0x28);
  *(undefined **)(lVar23 + 0x28) = puVar7;
  _objc_release(uVar6);
LAB_10847e4e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10847eb14; end: 10847eb17;  */

void FUN_10847eb14(void)

{
  return;
}



/* Entry: 10847eb18; end: 10847f38f;  */

void FUN_10847eb18(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar26);
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar23 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar28 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar29 = *(long *)(lVar28 * 8);
        func_0x00010bf1f720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar29 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_retain(param_2);
          puVar6 = puVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c2436c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126d97b0;
          _objc_alloc();
          puVar8 = puVar7;
          func_0x00010c26e3a0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c26df60(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar7;
          func_0x00010c0c54a0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          func_0x00010c0c5180(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar7;
          func_0x00010c241220(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar7;
          func_0x00010c26d980(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar7;
          func_0x00010c26d940();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar7;
          func_0x00010c26d920();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052060();
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar30);
          _objc_release(puVar9);
          _objc_release(puVar8);
          puVar8 = PTR_PTR_1126d97b8;
          _objc_alloc();
          lVar29 = param_2;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar9;
          func_0x00010c241560();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = param_2;
          func_0x00010c24b260();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = param_2;
          func_0x00010c26e300();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = param_2;
          func_0x00010c291e80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078f60();
          func_0x00010c0e1a60();
          func_0x00010c073320();
          func_0x00010bf529e0();
          lVar18 = param_2;
          func_0x00010bf24ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = param_2;
          func_0x00010bf24fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar20 = param_2;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar21 = param_2;
          func_0x00010c25b6c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14bb20();
          lVar22 = param_2;
          func_0x00010bf25300();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          func_0x00010c04a1e0();
          _objc_release(puVar5);
          _objc_release(lVar22);
          _objc_release(lVar21);
          _objc_release(lVar20);
          _objc_release(lVar19);
          _objc_release(lVar18);
          _objc_release(lVar17);
          _objc_release(lVar16);
          _objc_release(lVar15);
          _objc_release(puVar30);
          _objc_release(puVar9);
          _objc_release(lVar29);
          _objc_release(puVar6);
          _objc_release(puVar7);
          _objc_release(puVar5);
          puVar5 = PTR_PTR_1126c6d88;
          func_0x00010c14bdc0(PTR_PTR_1126c6d88);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2ba3c0(puVar23);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar26);
          _objc_retain(puVar7);
          puVar6 = PTR_PTR_1126c2140;
          lVar29 = lVar26;
          func_0x00010c25a160(lVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf82100(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar29);
          puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          lVar29 = lVar26;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar29;
          func_0x00010c241660();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar15;
          func_0x00010050471c();
          _objc_release(lVar15);
          _objc_release(lVar29);
          _objc_retain(puVar7);
          puVar5 = puVar7;
          func_0x00010bf52a60();
          lVar29 = lRam0000000000000000;
          while (puVar5 != (undefined *)0x0) {
            puVar30 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar29) {
                _objc_enumerationMutation(puVar7);
              }
              uVar27 = *(undefined8 *)((long)puVar30 * 8);
              uVar24 = uVar27;
              func_0x00010c241220(uVar27);
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar16;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar24);
              if (lVar15 != 0) {
                func_0x00010c241220(uVar27);
                _objc_retainAutoreleasedReturnValue();
                lVar15 = lVar16;
                func_0x00010c0e00e0(lVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar9);
                _objc_release(lVar15);
                _objc_release(uVar27);
              }
              puVar30 = puVar30 + 1;
            } while (puVar5 != puVar30);
            puVar5 = puVar7;
            func_0x00010bf52a60();
          }
          _objc_release(puVar7);
          func_0x00010c2b9440(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf21f60(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          _objc_release(puVar9);
          _objc_release(puVar6);
          _objc_release(puVar7);
          _objc_release(lVar26);
          func_0x00010c2ba4e0(puVar23);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar7);
          func_0x00010c2b0840(puVar23);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar5 = puVar23;
          func_0x00010bf21f60(puVar23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
          _objc_release(puVar8);
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != lVar4);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_retain(puVar2);
    _objc_release(puVar23);
    puVar23 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(lVar26);
  lVar26 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar24 = *(undefined8 *)(lVar26 + 0x28);
  *(undefined **)(lVar26 + 0x28) = puVar23;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  ___stack_chk_fail(uVar24);
  return;
}



/* Entry: 10847f390; end: 10847f397;  */

void FUN_10847f390(void)

{
  return;
}



/* Entry: 10847f398; end: 10847f4e7;  */

void FUN_10847f398(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar6;
  ulong unaff_x24;
  ulong uVar7;
  byte bStack_281;
  ulong uStack_280;
  long lStack_278;
  ulong uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  ulong *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  uVar7 = param_1;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    unaff_x23 = *plStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(ulong *)(lStack_118 + unaff_x24 * 8);
        FUN_10847e110();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(unaff_x22);
        unaff_x24 = unaff_x24 + 1;
      } while (uVar7 != unaff_x24);
      uVar7 = param_1;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(param_1);
  func_0x00010c246ba0(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10847f4e8;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    puStack_230 = (ulong *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain(param_1);
    uVar7 = param_1;
    func_0x00010bf52a60();
    if (uVar7 != 0) {
      unaff_x24 = *puStack_230;
      unaff_x22 = uVar7;
      do {
        uVar7 = 0;
        do {
          if (*puStack_230 != unaff_x24) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x23 = *(long *)(lStack_238 + uVar7 * 8);
          FUN_10847e110();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1);
          _objc_release(unaff_x23);
          puVar2 = puVar1;
          func_0x00010bf529e0();
          if (param_2 <= puVar2) goto LAB_10847f5f0;
          uVar7 = uVar7 + 1;
        } while (unaff_x22 != uVar7);
        unaff_x22 = param_1;
        func_0x00010bf52a60();
      } while (unaff_x22 != 0);
    }
LAB_10847f5f0:
    _objc_release(param_1);
    func_0x00010c246ba0(puVar1);
    uVar7 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      pcStack_248 = FUN_10847f64c;
      uStack_280 = unaff_x24;
      lStack_278 = unaff_x23;
      uStack_270 = unaff_x22;
      puStack_268 = param_2;
      puStack_260 = puVar1;
      uStack_258 = param_1;
      ppuStack_250 = &puStack_130;
      _objc_retain();
      _objc_retain(puVar5);
      bStack_281 = 0;
      uVar6 = uVar7;
      func_0x00010bf529e0();
      if (uVar6 != 0) {
        uVar6 = 1;
        do {
          uVar3 = uVar7;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          FUN_10847e110();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(puVar5 + 0x10))(puVar5,uVar4,&bStack_281);
          _objc_release(uVar4);
          _objc_release(uVar3);
          uVar3 = uVar7;
          func_0x00010bf529e0();
          if (uVar3 <= uVar6) break;
          uVar6 = uVar6 + 1;
        } while ((bStack_281 & 1) == 0);
      }
      _objc_release(puVar5);
      _objc_release(uVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10847f4e8; end: 10847f64b;  */

void FUN_10847f4e8(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong unaff_x22;
  undefined8 unaff_x23;
  ulong uVar6;
  long unaff_x24;
  ulong uVar7;
  byte bStack_161;
  long lStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  uVar7 = param_1;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    unaff_x24 = *plStack_110;
    unaff_x22 = uVar7;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined8 *)(lStack_118 + uVar7 * 8);
        FUN_10847e110();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(unaff_x23);
        puVar2 = puVar1;
        func_0x00010bf529e0();
        if (param_2 <= puVar2) goto LAB_10847f5f0;
        uVar7 = uVar7 + 1;
      } while (unaff_x22 != uVar7);
      unaff_x22 = param_1;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
LAB_10847f5f0:
  _objc_release(param_1);
  func_0x00010c246ba0(puVar1);
  uVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10847f64c;
  lStack_160 = unaff_x24;
  uStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  puStack_148 = param_2;
  puStack_140 = puVar1;
  uStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar5);
  bStack_161 = 0;
  uVar6 = uVar7;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 1;
    do {
      uVar3 = uVar7;
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_10847e110();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(puVar5 + 0x10))(puVar5,uVar4,&bStack_161);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = uVar7;
      func_0x00010bf529e0();
      if (uVar3 <= uVar6) break;
      uVar6 = uVar6 + 1;
    } while ((bStack_161 & 1) == 0);
  }
  _objc_release(puVar5);
  _objc_release(uVar7);
  return;
}



/* Entry: 10847f64c; end: 10847f71b;  */

void FUN_10847f64c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_2);
  bStack_41 = 0;
  uVar3 = param_1;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    uVar3 = 1;
    do {
      uVar1 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_10847e110();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_2 + 0x10))(param_2,uVar2,&bStack_41);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf529e0();
      if (uVar1 <= uVar3) break;
      uVar3 = uVar3 + 1;
    } while ((bStack_41 & 1) == 0);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 10847f71c; end: 10847f777;  */

ulong FUN_10847f71c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  FUN_108481ebc(param_3);
  dVar2 = param_1;
  FUN_108481ebc(param_4);
  _objc_release(param_4);
  uVar1 = (ulong)(param_1 < dVar2);
  if (dVar2 < param_1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 10847f778; end: 10847f7bf;  */

undefined8 FUN_10847f778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10847f7c0; end: 10847f90f;  */

void FUN_10847f7c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf1f720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f51d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfd6b20();
  if ((int)uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010bf96020(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c14bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07dce0();
  uVar6 = param_2;
  FUN_108484724(0x7ff8000000000000,param_2,1,0,1,uVar2,uVar3,uVar7,0,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if ((int)uVar4 != 0) {
    _objc_release(uVar7);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10847f910; end: 10847f957;  */

undefined8 FUN_10847f910(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10847f958; end: 108480583;  */

void FUN_10847f958(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9
                  ,ulong param_10)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined1 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lStack_128;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = param_2;
  func_0x00010c14bb60();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010bfdb6c0(), (int)lVar3 == 0)) {
    puVar36 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c14bc20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c291e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if ((lVar4 == 0) ||
       ((param_5 != 0 && (uVar5 = param_5, func_0x00010c06d560(), (uVar5 & 1) != 0)))) {
      puVar36 = (undefined *)0x0;
    }
    else {
      uVar6 = param_3;
      func_0x00010bfebb60();
      uVar1 = (undefined1)uVar6;
      uVar34 = uVar1;
      if ((param_7 == 0xef) && (uVar5 = param_10, func_0x000108f4a1f0(), (uVar5 & 1) != 0)) {
        uVar34 = 1;
      }
      lVar3 = param_2;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x000108f52130();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c080120();
      _objc_retain(lVar2);
      _objc_retain(lVar4);
      _objc_retain(param_9);
      lVar7 = lVar2;
      func_0x00010c2456a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_10847f7c0;
      puStack_b0 = &UNK_110a4a738;
      puStack_a8 = (undefined *)lVar4;
      uStack_a0 = param_9;
      uStack_90 = uVar34;
      uStack_8f = uVar1;
      _objc_retain(lVar2);
      lStack_98 = lVar2;
      _objc_retain(param_9);
      _objc_retain(lVar4);
      lVar8 = lVar7;
      func_0x000100504554(lVar7,&puStack_c8);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c245660();
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c14bc20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0682c0();
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_retain(lVar10);
      lVar7 = lVar8;
      func_0x00010bfece40();
      if (lVar7 == 0x7fffffffffffffff) {
        lStack_128 = 0;
      }
      else {
        lVar7 = lVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lStack_128 = lVar7;
        func_0x00010c24b260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
      }
      puVar11 = PTR_PTR_1126d97b8;
      _objc_alloc();
      lVar7 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x000108f523a0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x000108f52510();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2456c0();
      lVar23 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar23;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar25;
      func_0x00010bf24fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      lVar28 = lVar27;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar2;
      func_0x00010c14bc20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14bb20();
      func_0x00010c04a1e0();
      _objc_release(lVar29);
      _objc_release(lVar28);
      _objc_release(lVar27);
      _objc_release(lVar26);
      _objc_release(lVar25);
      _objc_release(lVar24);
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lStack_128);
      _objc_release(lVar10);
      _objc_release(lVar10);
      _objc_release(lVar8);
      _objc_release(lStack_98);
      _objc_release(uStack_a0);
      _objc_release(puStack_a8);
      _objc_release(param_9);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar36 = puVar11;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar36;
      func_0x000100504554();
      _objc_release(puVar36);
      puVar36 = puVar11;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar36;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar31;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = puVar32;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar32);
      _objc_release(puVar31);
      _objc_release(puVar36);
      if (puVar33 == (undefined *)0x0) {
        puVar33 = puVar11;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar36 = puVar11;
      func_0x00010c26e300();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar11;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar36);
      _objc_retain(puVar31);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_10847f778;
      puStack_b0 = &UNK_110a00198;
      _objc_retain(puVar36);
      puVar32 = puVar31;
      puStack_a8 = puVar36;
      func_0x00010bfece40();
      if (puVar32 == (undefined *)0x7fffffffffffffff) {
        puVar35 = (undefined *)0x0;
      }
      else {
        puVar32 = puVar31;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar35 = puVar32;
        func_0x00010bfbe4e0();
        _objc_release(puVar32);
      }
      _objc_release(puStack_a8);
      _objc_release(puVar31);
      _objc_release(puVar36);
      _objc_release(puVar31);
      _objc_release(puVar36);
      puVar36 = puVar11;
      func_0x00010c2768e0(puVar11);
      lVar3 = param_2;
      func_0x000108f52c50(param_2,param_3,puVar30,(long)(int)puVar36,0,puVar33,param_7,0,0,puVar35);
      _objc_retainAutoreleasedReturnValue();
      puVar36 = PTR_PTR_1126c2098;
      _objc_alloc();
      lVar4 = param_2;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x000108f521b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c259740();
      func_0x000108f52acc();
      func_0x00010c26e960(param_2);
      uVar37 = param_1;
      func_0x00010c080120();
      func_0x00010c078e00();
      func_0x00010c072c20();
      lVar8 = param_2;
      func_0x00010bfa31e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x000108f516b8();
      _objc_retainAutoreleasedReturnValue();
      puVar32 = PTR_PTR_1126c6d88;
      func_0x00010c14bdc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c13bd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c150c20(param_2);
      lVar12 = param_2;
      uVar38 = uVar37;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f680();
      lVar13 = param_2;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d8e0();
      lVar14 = param_2;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0820e0();
      lVar15 = param_2;
      func_0x00010bf3d2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ce20();
      puVar35 = PTR_PTR_1126d58d0;
      _objc_alloc();
      lVar16 = param_2;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe2bc0();
      lVar17 = param_2;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c236ac0();
      lVar18 = param_2;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c231940();
      func_0x00010c01a720();
      lVar19 = param_2;
      func_0x00010c08b2e0(param_2);
      func_0x00010bfddfe0();
      func_0x00010c080120();
      puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259c60(param_2);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_2;
      func_0x000108f518a0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_2;
      func_0x000108f52990();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e240(param_2);
      lVar22 = param_2;
      func_0x000108f508a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000c60(param_1,uVar37,(double)lVar19,uVar38,puVar36);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(puVar31);
      _objc_release(puVar35);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(uVar6);
      _objc_release(puVar32);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(puVar33);
      _objc_release(puVar30);
      _objc_release(puVar11);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar36);
  return;
}



/* Entry: 108480584; end: 10848062b;  */

void FUN_108480584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d50b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_3);
  func_0x000108f52250();
  func_0x00010bf8b160(param_3);
  _objc_release(param_3);
  func_0x00010c047c20(param_1,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10848062c; end: 10848095b;  */

void FUN_10848062c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd4bc0();
  uVar10 = param_2;
  if (iVar2 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  func_0x00010bf1f720(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd6b20();
  if (iVar2 == 0) {
    uStack_80 = 0;
  }
  else {
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
  }
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdda40();
  if (iVar3 == 0) {
    uStack_88 = 0;
  }
  else {
    uStack_88 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c27ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1317c0();
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd4fe0();
  if (iVar4 == 0) {
    uStack_90 = 0;
  }
  else {
    uStack_90 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf28980();
    _objc_retainAutoreleasedReturnValue();
  }
  iVar5 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdda00();
  if (iVar5 == 0) {
    uStack_98 = 0;
  }
  else {
    uStack_98 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c27b9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd5720();
  if (iVar6 == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf41f80();
    _objc_retainAutoreleasedReturnValue();
  }
  iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd5bc0();
  if (iVar7 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4d7c0();
    _objc_retainAutoreleasedReturnValue();
  }
  iVar8 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdd9c0();
  if (iVar8 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c27b840();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  iVar9 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd5700();
  if (iVar9 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf41f20();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07dce0();
  uVar15 = param_2;
  FUN_108484724(uVar18,param_2,0,0,1,uVar10,uVar11,uStack_80,uStack_88,uVar16,0,0,uStack_90,
                uStack_98,uStack_a0,uVar12,uVar13,uVar17,uVar14,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (iVar9 != 0) {
    _objc_release(uVar14);
  }
  if (iVar8 != 0) {
    _objc_release(uVar13);
  }
  if (iVar7 != 0) {
    _objc_release(uVar12);
  }
  if (iVar6 != 0) {
    _objc_release(uStack_a0);
  }
  if (iVar5 != 0) {
    _objc_release(uStack_98);
  }
  if (iVar4 != 0) {
    _objc_release(uStack_90);
  }
  if (iVar3 != 0) {
    _objc_release(uStack_88);
  }
  if (iVar2 != 0) {
    _objc_release(uStack_80);
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return;
}



/* Entry: 10848095c; end: 10848182b;  */

void FUN_10848095c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
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
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *puStack_208;
  undefined *puStack_1f8;
  undefined *puStack_198;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar25 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar28 = param_2;
  func_0x00010bf31ee0();
  if ((int)puVar28 != 0x26) {
    puVar28 = (undefined *)0x0;
    goto LAB_1084817b4;
  }
  puVar2 = param_2;
  func_0x00010c23cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar2;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar28);
  puVar28 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar28;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar28);
  puVar28 = param_2;
  func_0x00010c24b500();
  if (puVar28 == (undefined *)0x0) {
    puVar30 = (undefined *)0x0;
    uStack_d0 = param_1;
  }
  else {
    puVar28 = param_2;
    func_0x00010c24b4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar25 = 0;
    puVar4 = puVar28;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar4 == (undefined *)0x0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      do {
        puVar32 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar28);
          }
          uVar29 = *(ulong *)((long)puVar32 * 8);
          uVar5 = uVar29;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((uVar6 & 1) != 0) {
            func_0x00010c150c20(uVar29);
            func_0x00010c0df740();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108480b7c;
          }
          puVar32 = puVar32 + 1;
        } while (puVar4 != puVar32);
        puVar4 = puVar28;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      puVar30 = (undefined *)0x0;
    }
LAB_108480b7c:
    _objc_release(puVar28);
    _objc_release(puVar28);
    uStack_d0 = uVar25;
  }
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(param_6);
  _objc_retain(puVar30);
  puVar28 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  _objc_opt_new(puVar28);
  func_0x00010c26f320();
  _objc_release(puVar28);
  puVar28 = puVar2;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  param_1 = 0xc2000000;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10848062c;
  puStack_f8 = &UNK_110a4a788;
  _objc_retain(puVar2);
  puStack_f0 = puVar2;
  _objc_retain(puVar3);
  puStack_e8 = puVar3;
  _objc_retain(param_6);
  uStack_e0 = param_6;
  _objc_retain(puVar30);
  puVar4 = puVar28;
  puStack_d8 = puVar30;
  func_0x000100504554(puVar28,&puStack_110);
  _objc_release(puVar28);
  puVar28 = puVar2;
  func_0x00010c25b540();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar2;
  func_0x00010c23cde0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x0001005929c0();
  _objc_release(param_5);
  puVar7 = puVar32;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if ((uVar5 & 1) == 0) {
    func_0x00010c08fa60();
    if (puVar8 == (undefined *)0x0) {
      func_0x000108f580b4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar8 = puVar32;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
  }
  puVar7 = puVar2;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar9;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar9;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126d97c8;
  _objc_alloc();
  puVar11 = puVar28;
  func_0x000108f523a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar28;
  func_0x000108f52510();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar28;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar9;
  func_0x00010bfdc2c0();
  if ((int)puVar14 == 0) {
    puStack_1f8 = (undefined *)0x0;
  }
  else {
    puStack_208 = puVar9;
    func_0x00010c23fd60();
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = puStack_208;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar15 = puVar32;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar32;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  puVar18 = puVar17;
  func_0x000108f499b4();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar18;
  func_0x00010c08fa60();
  _objc_release();
  if (puVar26 == (undefined *)0x0) {
    puVar18 = puVar2;
    func_0x00010bfdd5c0();
    puVar26 = puVar17;
    if ((int)puVar18 != 0) {
      puVar18 = puVar2;
      func_0x00010c26fe00();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar18;
      func_0x00010bef3bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar31;
      func_0x00010bf529e0();
      _objc_release(puVar31);
      _objc_release(puVar18);
      if (puVar27 != (undefined *)0x0) {
        puVar18 = PTR_PTR_1126b10e0;
        _objc_opt_new(PTR_PTR_1126b10e0);
        func_0x000108f37c18();
        puVar26 = puVar2;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        puVar31 = puVar26;
        func_0x00010bef3bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar31;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar31);
        _objc_release(puVar26);
        puVar31 = puVar27;
        func_0x00010c26f0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar31;
        func_0x000100504554();
        _objc_release(puVar17);
        _objc_release(puVar31);
        _objc_release(puVar27);
        _objc_release(puVar18);
      }
    }
    puVar18 = puVar26;
    func_0x00010bf51e00();
  }
  else {
    func_0x000108f499b4();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar18;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = puVar26;
    func_0x000100504554(puVar26,&PTR___NSConcreteGlobalBlock_110a4a7d8);
    _objc_release(puVar17);
    _objc_retain(puVar18);
    _objc_release(puVar26);
    puVar26 = puVar18;
  }
  _objc_release(puVar26);
  _objc_release(puVar2);
  puVar17 = puVar2;
  func_0x00010bfd8600();
  if (((ulong)puVar17 & 1) == 0) {
    _objc_retain(0);
    puVar26 = (undefined *)0x0;
LAB_1084810d0:
    puVar31 = (undefined *)0x0;
  }
  else {
    puVar26 = puVar2;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar26 == (undefined *)0x0) goto LAB_1084810d0;
    puVar31 = puVar26;
    func_0x00010bfd7620();
    if ((int)puVar31 == 0) {
      puVar27 = (undefined *)0x0;
      puVar33 = (undefined *)0x0;
    }
    else {
      puVar31 = puVar26;
      func_0x00010bfbe0a0(puVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar31;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar31);
      puVar31 = puVar26;
      func_0x00010bfbe0a0(puVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb8680();
      _objc_release(puVar31);
      puVar31 = puVar26;
      func_0x00010bfbe0a0(puVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar31;
      func_0x00010bfb9180();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = puVar19;
      func_0x00010bf51e00();
      _objc_release(puVar19);
      _objc_release(puVar31);
    }
    puVar31 = PTR_PTR_1126d97c0;
    _objc_alloc();
    func_0x00010c0244a0();
    _objc_release(puVar33);
    _objc_release(puVar27);
  }
  _objc_release(puVar26);
  func_0x00010c04a160();
  _objc_release(puVar31);
  if ((int)puVar17 != 0) {
    _objc_release(puVar26);
  }
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(puVar15);
  if ((int)puVar14 != 0) {
    _objc_release(puStack_1f8);
    _objc_release(puStack_208);
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar32);
  _objc_release(puVar28);
  _objc_release(puVar4);
  _objc_release(puStack_d8);
  _objc_release(uStack_e0);
  _objc_release(puStack_e8);
  _objc_release(puStack_f0);
  _objc_release(puVar30);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar28 = puVar7;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar28;
  func_0x000100504554();
  _objc_release(puVar28);
  puVar28 = puVar7;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar28;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar32;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar32);
  _objc_release(puVar28);
  puVar28 = puVar2;
  func_0x00010c2456c0(puVar2);
  uVar20 = param_3;
  func_0x00010bfa4340(param_3);
  puVar32 = param_2;
  uVar25 = param_3;
  func_0x000108f52c50(param_2,param_3,puVar4,puVar28,0,puVar9,uVar20,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar2;
  func_0x00010bf96020();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar28;
  func_0x00010c24b580();
  _objc_release(puVar28);
  puStack_198 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((long)puVar8 < 1) {
    puStack_198 = (undefined *)0x0;
  }
  else {
    puVar28 = puVar2;
    func_0x00010bf96020(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24b580();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar28);
  }
  puVar28 = PTR_PTR_1126c2098;
  _objc_alloc();
  puVar10 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000108f521b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740();
  func_0x000108f52acc();
  func_0x00010c26e960(param_2);
  uVar34 = param_1;
  func_0x00010c080120();
  func_0x00010c078e00();
  func_0x00010c072c20();
  puVar12 = param_2;
  func_0x00010bfa31e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x000108f516b8();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c6d88;
  func_0x00010c23ce40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c13bd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150c20(param_2);
  puVar16 = param_2;
  uVar35 = uVar34;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f680();
  puVar17 = param_2;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d8e0();
  puVar18 = param_2;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0820e0();
  puVar26 = param_2;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ce20();
  puVar31 = PTR_PTR_1126d58d0;
  _objc_alloc();
  puVar27 = param_2;
  func_0x00010bf3cd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2bc0();
  puVar33 = param_2;
  func_0x00010bf3cd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236ac0();
  puVar19 = param_2;
  func_0x00010bf3cd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c231940();
  func_0x00010c01a720();
  puVar21 = param_2;
  func_0x00010c08b2e0(param_2);
  func_0x00010bfddfe0();
  func_0x00010c080120();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259c60(param_2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1317c0();
  puVar22 = param_2;
  func_0x000108f518a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f940();
  puVar23 = param_2;
  func_0x000108f52990();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e240(param_2);
  puVar24 = param_2;
  func_0x000108f508a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000c60(param_1,uVar34,(double)(long)puVar21,uVar35);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar8);
  _objc_release(puVar31);
  _objc_release(puVar19);
  _objc_release(puVar33);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar20);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puStack_198);
  _objc_release(puVar32);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar30);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_1084817b4:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    puVar28 = PTR_PTR_1126d50b8;
    _objc_retain(uVar25);
    _objc_alloc(puVar28);
    uVar20 = uVar25;
    func_0x00010c241220(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(uVar25);
    func_0x000108f52250();
    func_0x00010bf8b160(uVar25);
    _objc_release(uVar25);
    func_0x00010c047c20(param_1,puVar28);
    _objc_release(uVar20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 10848182c; end: 1084818d3;  */

void FUN_10848182c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d50b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_3);
  func_0x000108f52250();
  func_0x00010bf8b160(param_3);
  _objc_release(param_3);
  func_0x00010c047c20(param_1,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084818d4; end: 10848192b;  */

void FUN_1084818d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb2c80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 10848192c; end: 108481b17;  */

void FUN_10848192c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108481b18;
  uStack_40 = 0x108481b28;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108481b18; end: 108481b2f;  */

void FUN_108481b18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108481b30; end: 108481c97;  */

void FUN_108481b30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108481c98; end: 108481cd7;  */

void FUN_108481c98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108481cd8; end: 108481d4f;  */

void FUN_108481cd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108481d50; end: 108481d53;  */

void FUN_108481d50(void)

{
  return;
}



/* Entry: 108481d54; end: 108481ebb;  */

void FUN_108481d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108481ebc; end: 108481eff;  */

undefined8 FUN_108481ebc(undefined8 param_1,undefined8 param_2)

{
  FUN_10848192c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b611a3c();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108481f00; end: 108481fab;  */

void FUN_108481f00(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cffa0;
    _objc_alloc(PTR_PTR_1126cffa0);
    if (param_2 != 0) {
      func_0x00010bfe28e0(param_2);
    }
    func_0x00010c04aca0(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108481fac; end: 1084821b3;  */

void FUN_108481fac(undefined *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    puVar1 = PTR_PTR_1126c6d78;
    func_0x00010bf82080(PTR_PTR_1126c6d78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2140;
    puVar2 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82100(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126c22b0;
    puVar2 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf81ce0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b67e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (param_3 != 0) {
      lVar6 = param_2;
      func_0x00010c1561c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2adcc0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    puVar2 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c2b4e80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084821b4; end: 10848274b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d1 : 0x0001084826a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1084821b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010bf529e0();
  uVar2 = param_7;
  func_0x00010bf529e0();
  if (uVar1 == uVar2) {
    uVar1 = param_6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f51ed0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_6);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_6;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uVar12 = 0;
      do {
        uVar4 = param_6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126b7678;
        _objc_opt_new(PTR_PTR_1126b7678);
        func_0x00010c1ff260();
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c26f320();
        func_0x00010c185760(puVar11);
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126b7680;
        _objc_opt_new(PTR_PTR_1126b7680);
        func_0x00010c185c80(puVar11);
        _objc_release(puVar6);
        puVar6 = puVar11;
        func_0x00010bf5b480(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620();
        _objc_release(puVar6);
        puVar6 = puVar11;
        func_0x00010bf5b480(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18fca0();
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126b76b0;
        _objc_opt_new(PTR_PTR_1126b76b0);
        uVar7 = param_7;
        func_0x00010c0dfd40(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071ae0();
        func_0x00010c1c5440(puVar6);
        _objc_release(uVar7);
        func_0x00010c1c4880(puVar6);
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c5520(puVar6);
        _objc_release(puVar8);
        func_0x00010c1c4940(puVar11);
        puVar8 = PTR_PTR_1126b76a8;
        _objc_opt_new(PTR_PTR_1126b76a8);
        func_0x00010c212f20();
        func_0x00010c203e40(puVar11);
        puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c26f320();
        puVar10 = puVar11;
        FUN_108484724(puVar11,0,0,0,0,uVar1,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar11);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar12 = uVar12 + 1;
        uVar4 = param_6;
        func_0x00010bf529e0();
      } while (uVar12 < uVar4);
    }
    puVar6 = PTR_PTR_1126d97c8;
    _objc_alloc();
    puVar11 = puVar3;
    func_0x00010bf51e00(puVar3);
    uVar13 = 0;
    func_0x00010c04a160();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126c2098;
    _objc_alloc(PTR_PTR_1126c2098);
    puVar8 = PTR_PTR_1126c6d88;
    func_0x00010c23ce40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    puVar10 = PTR_PTR_1126cffa0;
    _objc_alloc();
    func_0x00010c04aca0();
    func_0x00010c000c60(0,param_2,uVar13,0,puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10848274c; end: 1084828e3;  */

void FUN_10848274c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(param_1);
    uVar1 = param_1;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1084828e4;
    uStack_40 = 0x1084828f4;
    _objc_retain(param_1);
    uVar1 = param_1;
    uStack_38 = param_1;
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(param_2);
    func_0x00010c0bf680(uVar1);
    _objc_release(uVar1);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    _objc_release(param_2);
    _objc_release(param_1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084828e4; end: 1084828ff;  */

void FUN_1084828e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108482900; end: 108482d3b;  */

void FUN_108482900(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d97d0;
  func_0x00010bf81f20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c6d78;
  func_0x00010bf82080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar18 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar19 = *(undefined8 *)(lVar20 * 8);
      puVar6 = PTR_PTR_1126cf330;
      func_0x00010bf821a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9ea0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126cc290;
      _objc_alloc();
      uVar17 = uVar19;
      func_0x00010c0b8260();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar17;
      func_0x00010c241720();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar19;
      func_0x00010c0b8260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d060();
      uVar10 = uVar19;
      func_0x00010c0b8260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6b200();
      uVar11 = uVar19;
      func_0x00010c0b8260(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c14aea0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar19;
      func_0x00010c0b8260(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15a040();
      uVar14 = uVar19;
      func_0x00010c0b8260(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06820();
      func_0x00010c0b8260();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar19;
      func_0x00010bf4cc60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0480e0(puVar7);
      func_0x00010c2b3520(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar15);
      _objc_release(uVar19);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar17);
      puVar7 = puVar6;
      func_0x00010bf21f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      lVar20 = lVar20 + 1;
    } while (lVar18 != lVar20);
    lVar18 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c2b9a60(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c6d88;
  puVar7 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ce40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba3c0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar6 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar17 = *(undefined8 *)(lVar18 + 0x28);
  *(undefined **)(lVar18 + 0x28) = puVar6;
  _objc_release(uVar17);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108482d3c; end: 108482d57;  */

void FUN_108482d3c(void)

{
  return;
}



/* Entry: 108482d58; end: 108482f37;  */

void FUN_108482d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
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
  undefined4 uStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108482f38;
  puStack_c8 = &UNK_110a4a988;
  uStack_98 = param_9;
  uStack_90 = param_10;
  uStack_88 = param_11;
  uStack_80 = param_12;
  uStack_c0 = param_2;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_78 = param_8;
  uStack_70 = param_7;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bd86420(param_1,&puStack_e0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108482f38; end: 108482f83;  */

void FUN_108482f38(long param_1,undefined8 param_2,long param_3)

{
  FUN_108482f84(param_2,*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x68) + param_3,
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined4 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 108482f84; end: 108483613;  */

void FUN_108482f84(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar5 = param_1;
  func_0x00010bfd58a0();
  if (((uVar5 & 1) == 0) && (uVar5 = param_2, func_0x00010bfebb60(), (uVar5 & 1) == 0)) {
    func_0x00010c0a4840(param_9);
    uVar5 = 0;
    goto LAB_1084835a0;
  }
  uVar2 = param_1;
  func_0x00010bf31ee0();
  uVar5 = 0;
  iVar1 = (int)uVar2;
  uVar3 = param_7;
  if (iVar1 < 6) {
    if (iVar1 == 0) {
      uVar5 = param_1;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf52680();
      _objc_release(uVar5);
      if ((int)uVar2 == 0x10) {
        func_0x00010c0a47e0();
        func_0x00010c15ebe0(param_1);
        func_0x00010c0a4820(param_9);
        func_0x00010c259740(param_1);
        uVar5 = param_5;
        func_0x00010c25bb00();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == 0) {
          func_0x00010c0a4800(param_9);
        }
      }
      else {
        func_0x00010c0a4880(param_9);
        uVar5 = 0;
      }
      goto LAB_1084835a0;
    }
    if (iVar1 == 3) {
      func_0x00010c0a47e0(param_9);
      func_0x00010c15ebe0(param_1);
      func_0x00010c0a4820(param_9);
      uVar5 = param_1;
      func_0x00010c15ebe0(param_1);
      func_0x00010afb7960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf979e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4860(param_9);
      _objc_release(uVar2);
      _objc_release(uVar5);
      uVar5 = param_1;
      FUN_108473fc4();
      if ((int)uVar5 == 0) {
        uVar5 = param_1;
        FUN_10847c984(param_1,param_2,param_3,param_11);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar5 = param_1;
        FUN_10847409c(param_1,param_2,param_3,param_4,param_6,param_10,param_8);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1084835a0;
    }
    if (iVar1 != 4) goto LAB_1084835a0;
    uVar5 = param_1;
    func_0x00010c15ebe0(param_1);
    func_0x00010afb7960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf979e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4860(param_9);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010c11ab00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_1;
    FUN_108479a34(param_1,param_2,param_3,uVar3,param_5,param_8,param_9,param_10,param_11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 == 6) {
      uVar5 = param_1;
      func_0x00010c15ebe0(param_1);
      func_0x00010afb7960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf979e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4860(param_9);
      _objc_release(uVar2);
      _objc_release(uVar5);
      uVar5 = param_1;
      func_0x00010bf454e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x000108f521b4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = param_1;
      func_0x00010bf66200(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x000108f516b8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = param_1;
      FUN_108486888(param_1,param_2,param_3,0,uVar2,uVar4,param_10,param_12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar2);
      goto LAB_1084835a0;
    }
    if (iVar1 == 0x26) {
      uVar5 = param_1;
      func_0x00010c15ebe0(param_1);
      func_0x00010afb7960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf979e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4860(param_9);
      _objc_release(uVar2);
      _objc_release(uVar5);
      uVar5 = param_1;
      FUN_10848095c(param_1,param_2,param_3,param_11,param_10,0,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1084835a0;
    }
    if (iVar1 != 0x30) goto LAB_1084835a0;
    uVar5 = param_1;
    func_0x00010c15ebe0(param_1);
    func_0x00010afb7960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf979e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4860(param_9);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010c14bb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c14bc20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_1;
    FUN_10847f958(param_1,param_2,param_3,uVar3,param_5,param_8,param_9,param_10,param_11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
LAB_1084835a0:
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108483614; end: 1084837a3;  */

long FUN_108483614(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar4 = param_1;
  func_0x00010c25b720();
  lVar2 = param_1;
  if (lVar4 == 5) {
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
  }
  else {
    lVar4 = param_1;
    func_0x00010c25b720();
    if (lVar4 == 2) {
      func_0x00010c259560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
LAB_1084836b8:
      lVar4 = lVar3;
      func_0x00010c2768e0();
    }
    else {
      lVar4 = param_1;
      func_0x00010c25b720();
      if (lVar4 == 3) {
        func_0x00010c259560(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar4 = param_1;
        func_0x00010c25b720();
        if (lVar4 == 0xb) {
          func_0x00010c259560(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010afefbe8();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1084836b8;
        }
        lVar4 = param_1;
        func_0x00010c25b720();
        if (lVar4 != 0xe) {
          lVar4 = 1;
          goto LAB_108483714;
        }
        func_0x00010c259560(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar4 = lVar3;
      func_0x00010c2768e0();
      lVar4 = (long)(int)lVar4;
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_108483714:
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 1084837a4; end: 1084837e7;  */

bool FUN_1084837a4(long param_1)

{
  if ((param_1 - 0x2bU < 0x3b) && ((1L << (param_1 - 0x2bU & 0x3f) & 0x4f0912040000007U) != 0)) {
    return true;
  }
  return param_1 == 5;
}



/* Entry: 1084837e8; end: 108483a7b;  */

ulong FUN_1084837e8(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c071800();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
    goto LAB_1084838f0;
  }
  if (param_1 < 0x2b) {
    if (param_1 != 5) {
      if (param_1 != 0x1e) goto LAB_1084838e0;
      uVar4 = uVar2;
      func_0x00010c234b60(uVar2);
      iVar1 = (int)uVar4;
      puVar3 = PTR_PTR_1126d97d8;
      func_0x00010c154ce0(PTR_PTR_1126d97d8);
      goto LAB_1084838d4;
    }
  }
  else {
    if (param_1 == 0x2b) {
      uVar4 = uVar2;
      func_0x00010c234b60(uVar2);
      iVar1 = (int)uVar4;
      puVar3 = PTR_PTR_1126d97d8;
      func_0x00010bfb6580(PTR_PTR_1126d97d8);
LAB_1084838d4:
      uVar4 = (ulong)(((ulong)puVar3 & (long)iVar1) != 0);
      goto LAB_1084838f0;
    }
    if (param_1 != 0x2d) {
      if (param_1 == 0x48) {
        puVar3 = PTR_PTR_1126c11f8;
        func_0x00010bf713a0(PTR_PTR_1126c11f8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_2;
        func_0x00010bf1f320(param_2);
        _objc_release(puVar3);
        goto LAB_1084838f0;
      }
LAB_1084838e0:
      uVar4 = (ulong)(param_1 == 0x53 || param_1 == 0x2c);
      goto LAB_1084838f0;
    }
  }
  uVar4 = uVar2;
  func_0x00010bf92300(uVar2);
LAB_1084838f0:
  _objc_release(uVar2);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 108483a7c; end: 108483ff7;  */

void FUN_108483a7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,param_1,PTR____NSArray0__struct_11034ab48);
  }
  else {
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1084828e4;
    uStack_80 = 0x1084828f4;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_98 = &uStack_a0;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_1084828e4;
    uStack_b0 = 0x1084828f4;
    uStack_a8 = 0;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_1084828e4;
    uStack_e0 = 0x1084828f4;
    uStack_d8 = 0;
    uVar6 = param_1;
    puStack_f8 = &uStack_100;
    puStack_c8 = &uStack_d0;
    puStack_78 = puVar2;
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_108483ff8;
    puStack_130 = &UNK_110a4a9e8;
    _objc_retain(param_2);
    lStack_128 = param_2;
    puStack_118 = &uStack_a0;
    puStack_110 = &uStack_100;
    puStack_108 = &uStack_d0;
    _objc_retain(param_1);
    puStack_188 = puVar2;
    uStack_180 = 0xc2000000;
    uStack_178 = 0x108484138;
    puStack_170 = &UNK_110a4aa18;
    uStack_120 = param_1;
    _objc_retain(param_2);
    lStack_168 = param_2;
    puStack_158 = &uStack_a0;
    puStack_150 = &uStack_d0;
    _objc_retain(param_1);
    puStack_1b8 = puVar2;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_108484224;
    puStack_1a0 = &UNK_110a4aa48;
    puStack_190 = &uStack_d0;
    uStack_160 = param_1;
    _objc_retain(param_1);
    puStack_1e8 = puVar2;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x10848426c;
    puStack_1d0 = &UNK_1108f10a0;
    puStack_1c0 = &uStack_d0;
    uStack_198 = param_1;
    _objc_retain(param_1);
    puStack_218 = puVar2;
    uStack_210 = 0xc2000000;
    uStack_208 = 0x1084842b4;
    puStack_200 = &UNK_1108f10d0;
    puStack_1f0 = &uStack_d0;
    uStack_1c8 = param_1;
    _objc_retain(param_1);
    puStack_248 = puVar2;
    uStack_240 = 0xc2000000;
    uStack_238 = 0x1084842fc;
    puStack_230 = &UNK_1108d4410;
    puStack_220 = &uStack_d0;
    uStack_1f8 = param_1;
    _objc_retain(param_1);
    puStack_290 = puVar2;
    uStack_288 = 0xc2000000;
    pcStack_280 = FUN_108484344;
    puStack_278 = &UNK_110a4aa78;
    uStack_228 = param_1;
    _objc_retain(param_2);
    lStack_270 = param_2;
    puStack_260 = &uStack_a0;
    puStack_258 = &uStack_100;
    puStack_250 = &uStack_d0;
    _objc_retain(param_1);
    puStack_2c0 = puVar2;
    uStack_2b8 = 0xc2000000;
    pcStack_2b0 = FUN_108484484;
    puStack_2a8 = &UNK_110a4aaa8;
    puStack_298 = &uStack_d0;
    uStack_268 = param_1;
    _objc_retain(param_1);
    puStack_300 = puVar2;
    uStack_2f8 = 0xc2000000;
    pcStack_2f0 = FUN_1084844cc;
    puStack_2e8 = &UNK_110a4ab08;
    uStack_2a0 = param_1;
    _objc_retain(param_2);
    lStack_2e0 = param_2;
    puStack_2d0 = &uStack_a0;
    puStack_2c8 = &uStack_d0;
    _objc_retain(param_1);
    uStack_2d8 = param_1;
    func_0x00010c0bf680(uVar6);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c2140;
    uVar6 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82100(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    puStack_328 = puVar2;
    uStack_320 = 0xc2000000;
    uStack_318 = 0x1084846b0;
    puStack_310 = &UNK_110a4ab38;
    _objc_retain(param_2);
    uVar5 = uVar4;
    lStack_308 = param_2;
    func_0x000100504554(uVar4,&puStack_328);
    _objc_release(uVar4);
    _objc_release(uVar6);
    func_0x00010c2b9440(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (puStack_f8[5] != 0) {
      func_0x00010c2ba3c0(puStack_c8[5]);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar6 = puStack_c8[5];
    puVar2 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar6 = puStack_c8[5];
    func_0x00010bf21f60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,uVar6,puStack_98[5]);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lStack_308);
    _objc_release(puVar3);
    _objc_release(uStack_2d8);
    _objc_release(lStack_2e0);
    _objc_release(uStack_2a0);
    _objc_release(uStack_268);
    _objc_release(lStack_270);
    _objc_release(uStack_228);
    _objc_release(uStack_1f8);
    _objc_release(uStack_1c8);
    _objc_release(uStack_198);
    _objc_release(uStack_160);
    _objc_release(lStack_168);
    _objc_release(uStack_120);
    _objc_release(lStack_128);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puStack_78);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108483ff8; end: 108484223;  */

void FUN_108483ff8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x000108483914();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    puVar2 = PTR_PTR_1126c6d80;
    func_0x00010bf81c20(PTR_PTR_1126c6d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9a60();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c6d88;
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11abc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108484224; end: 108484343;  */

void FUN_108484224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108484344; end: 108484483;  */

void FUN_108484344(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x000108483914();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    puVar2 = PTR_PTR_1126d97e0;
    func_0x00010bf81da0(PTR_PTR_1126d97e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9a60();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c6d88;
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14bdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108484484; end: 1084844cb;  */

void FUN_108484484(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084844cc; end: 1084845f7;  */

void FUN_1084844cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1084845f8;
  puStack_58 = &UNK_110a4aad8;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = lVar5;
  uStack_50 = uVar6;
  func_0x000100504554(lVar5,&puStack_70);
  _objc_release(lVar5);
  lVar5 = lVar1;
  func_0x00010bf529e0();
  lVar2 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar5 == lVar3) {
    puVar4 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_50);
  return;
}



/* Entry: 1084845f8; end: 108484723;  */

void FUN_1084845f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  _objc_retain(param_2);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c15f2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if (iVar3 == 0) {
    _objc_retain(param_2);
    uVar1 = param_2;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    uVar1 = param_2;
    func_0x00010c15f2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar1);
    uVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108484724; end: 10848664b;  */

void FUN_108484724(double param_1,undefined *param_2,int param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,uint param_11,byte param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  double dVar59;
  undefined8 uVar60;
  undefined *puStack_420;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  int iStack_374;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  
  dVar59 = param_1;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  if (((param_11 & 1) == 0) && ((param_12 & 1) == 0)) {
    puVar58 = param_2;
    func_0x00010bf9c8a0();
    dVar59 = (double)(long)puVar58;
    if (dVar59 < param_1 * 1000.0) {
      puVar58 = (undefined *)0x0;
      goto LAB_1084865a0;
    }
  }
  puVar58 = param_2;
  func_0x00010bfd5f40();
  if ((int)puVar58 == 0) {
    puStack_280 = (undefined *)0x0;
  }
  else {
    puVar58 = param_2;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    puVar57 = puVar58;
    func_0x00010bfd5f20();
    _objc_release(puVar58);
    if ((int)puVar57 == 0) {
      puVar58 = (undefined *)0x0;
    }
    else {
      puVar58 = param_2;
      func_0x00010bf5b480(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar57 = puVar58;
      func_0x00010bf5b3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071360();
      _objc_release(puVar57);
      _objc_release(puVar58);
      puVar58 = param_2;
      func_0x00010bf5b480(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar57 = puVar58;
      func_0x00010bf5b3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4de40();
      _objc_release(puVar57);
      _objc_release(puVar58);
      puVar58 = PTR_PTR_1126d5190;
      _objc_alloc(PTR_PTR_1126d5190);
      func_0x00010c01ef40();
    }
    puStack_280 = PTR_PTR_1126d97f0;
    _objc_alloc();
    puVar57 = param_2;
    func_0x00010bf5b480(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar56 = puVar57;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010bf5b480(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    puVar54 = param_2;
    func_0x00010bf5b480(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar54;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05be80();
    _objc_release(puVar4);
    _objc_release(puVar54);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar56);
    _objc_release(puVar57);
    _objc_release(puVar58);
  }
  puVar58 = param_2;
  func_0x00010bfdc880();
  if ((int)puVar58 == 0) {
    puStack_288 = (undefined *)0x0;
  }
  else {
    puVar58 = param_2;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar57 = puVar58;
    func_0x00010bfdaa60();
    if ((int)puVar57 == 0) {
      puVar57 = (undefined *)0x0;
    }
    else {
      puVar56 = param_2;
      func_0x00010c24a0a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar56;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      puVar57 = puVar2;
      func_0x00010bfe2ee0();
      puVar3 = param_2;
      func_0x00010c24a0a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar54 = puVar3;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar54;
      func_0x00010c0b5940();
      func_0x000100c4a928(puVar57,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(puVar57);
      _objc_release(puVar54);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar56);
    }
    _objc_release(puVar58);
    puStack_288 = PTR_PTR_1126d97f8;
    _objc_alloc();
    puVar58 = puVar57;
    func_0x00010c0b5ac0(puVar57);
    _objc_retainAutoreleasedReturnValue();
    puVar56 = param_2;
    func_0x00010c24a0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar56;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c24a0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar56);
    _objc_release(puVar58);
    _objc_release(puVar57);
  }
  puVar58 = param_2;
  func_0x00010bfda380();
  if ((int)puVar58 == 0) {
    puVar57 = (undefined *)0x0;
  }
  else {
    puVar57 = PTR_PTR_1126d9800;
    _objc_alloc();
    puVar58 = param_2;
    func_0x00010c0fc8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar56 = puVar58;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010bf0d660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036120();
    _objc_release(puVar2);
    _objc_release(puVar56);
    _objc_release(puVar58);
  }
  puVar58 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar56 = puVar58;
  func_0x00010c0c6c20();
  bVar1 = true;
  switch((ulong)puVar56 & 0xffffffff) {
  case 0:
    bVar1 = false;
    break;
  case 1:
    break;
  case 2:
    break;
  default:
    bVar1 = false;
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    bVar1 = false;
    break;
  case 9:
    break;
  case 10:
    bVar1 = false;
    break;
  case 0xb:
    bVar1 = false;
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    bVar1 = false;
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x15:
    bVar1 = false;
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    bVar1 = false;
    break;
  case 0x19:
    break;
  case 0x1a:
  }
  _objc_release(puVar58);
  puVar56 = (undefined *)0x0;
  if ((param_3 != 0) && (bVar1)) {
    puVar58 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar56 = puVar58;
    func_0x00010bfdcd20();
    _objc_release(puVar58);
    if ((int)puVar56 == 0) {
      puVar56 = (undefined *)0x0;
    }
    else {
      puVar58 = param_2;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar58;
      func_0x00010c25c7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar56 = puVar2;
      FUN_1084d3284();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar58);
    }
  }
  puVar58 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar58;
  func_0x00010c08fa60();
  _objc_release(puVar58);
  if (puVar2 == (undefined *)0x0) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puStack_138 = PTR_PTR_1126d9808;
    _objc_alloc();
    puVar58 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdc5a0(param_2);
    puVar2 = param_2;
    func_0x00010c096600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0244c0();
    _objc_release(puVar2);
    _objc_release(puVar58);
  }
  puVar58 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar58;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0ef6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar58);
  if (puVar54 == (undefined *)0x0) {
    puStack_140 = (undefined *)0x0;
  }
  else {
    puVar58 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar58;
    func_0x00010c23f5c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0ef6e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar3;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar58);
  }
  puVar58 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar58;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c4640();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar58);
  if (puVar54 == (undefined *)0x0) {
    puStack_148 = (undefined *)0x0;
  }
  else {
    puVar58 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar58;
    func_0x00010c23f5c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c4640();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar3;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar58);
  }
  puVar58 = param_2;
  func_0x00010c15ece0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar58;
  func_0x00010c08fa60();
  _objc_release(puVar58);
  if (puVar2 == (undefined *)0x0) {
    puStack_150 = (undefined *)0x0;
  }
  else {
    puVar58 = param_2;
    func_0x00010c15ece0();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar58;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar58);
  }
  puVar58 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar58;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf101c0();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar58);
  puVar58 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar54 == (undefined *)0x0) {
    puVar2 = puVar58;
    func_0x00010c27fa00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf101c0();
    _objc_retainAutoreleasedReturnValue();
    puVar54 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar58);
    puVar58 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar58;
    func_0x00010c27fa00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar54 != (undefined *)0x0) goto LAB_108485160;
    puVar3 = puVar2;
    func_0x00010bf101e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    puStack_158 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar58;
    func_0x00010c23f5c0();
    _objc_retainAutoreleasedReturnValue();
LAB_108485160:
    puVar3 = puVar2;
    func_0x00010bf101c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar3;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar58);
  uVar5 = param_7;
  func_0x00010bfe5ec0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ea60b8();
  _objc_release(uVar5);
  puVar58 = param_2;
  func_0x00010bfd3e40();
  if ((int)puVar58 == 0) {
LAB_108485320:
    puStack_160 = (undefined *)0x0;
  }
  else {
    puVar58 = param_2;
    func_0x00010befe1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar58;
    func_0x00010bfdc1c0();
    _objc_release(puVar58);
    if ((int)puVar2 == 0) goto LAB_108485320;
    puVar58 = param_2;
    func_0x00010befe1a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar58;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_10;
    func_0x00010c23d840(param_10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_10;
    func_0x00010c23d8e0(param_10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_1084c1360(puVar2,uVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar58);
    puStack_160 = PTR_PTR_1126d6240;
    _objc_alloc();
    puVar58 = param_2;
    func_0x00010befe1a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar58;
    func_0x00010c06aee0();
    _objc_retainAutoreleasedReturnValue();
    puVar54 = param_2;
    func_0x00010befe1a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar54;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046be0();
    _objc_release(puVar4);
    _objc_release(puVar54);
    _objc_release(puVar2);
    _objc_release(puVar58);
    _objc_release(puVar3);
  }
  puVar58 = param_2;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar58;
  func_0x00010bfbec40();
  _objc_release(puVar58);
  if (puVar2 == (undefined *)0x0) {
    puStack_168 = (undefined *)0x0;
  }
  else {
    puVar58 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    puVar2 = param_2;
    func_0x00010bf28a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbec40();
    func_0x00010bffc4a0();
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010bf28a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfbec20();
    _objc_retainAutoreleasedReturnValue();
    dVar59 = 1.60807493534087e-314;
    _objc_retain(puVar58);
    func_0x00010bf980c0(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010bf28ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfa0480();
    _objc_retainAutoreleasedReturnValue();
    puVar54 = puVar3;
    func_0x00010c08fa60();
    if (puVar54 == (undefined *)0x0) {
      puVar54 = (undefined *)0x0;
    }
    else {
      puVar4 = param_2;
      func_0x00010bf28ba0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar54 = puVar4;
      func_0x00010bfa0480();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(puVar54);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    puStack_168 = PTR_PTR_1126d6248;
    _objc_alloc();
    func_0x00010c017600();
    _objc_release(puVar54);
    _objc_release(puVar58);
    _objc_release(puVar58);
  }
  puVar58 = param_2;
  func_0x00010bfd94c0();
  if ((int)puVar58 == 0) {
    puStack_170 = (undefined *)0x0;
  }
  else {
    puStack_170 = PTR_PTR_1126d6250;
    _objc_alloc();
    puVar58 = param_2;
    func_0x00010c0d21a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar58;
    func_0x00010c0d20e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c0d21a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d23c0();
    puVar54 = param_2;
    func_0x00010c0d21a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d23a0();
    func_0x00010bff9aa0();
    _objc_release(puVar54);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar58);
  }
  uVar5 = param_13;
  func_0x000108f50b64();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_14;
  func_0x000108f50c10();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_17;
  func_0x000108f53c70();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf3a0;
  func_0x00010c0c5cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar58 = param_2;
  func_0x00010c262080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c262060(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar58;
  func_0x000108f515d0(puVar58,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar58);
  puVar58 = PTR_PTR_1126cbc90;
  _objc_alloc();
  puVar3 = param_2;
  func_0x00010c120340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010c22c3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c08fa60();
  puVar9 = param_2;
  if (puVar8 == (undefined *)0x0) {
    func_0x00010c120340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c22c3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  puVar18 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083e00();
  puVar19 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075780();
  puVar20 = param_2;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c08fa60();
  if (puVar21 == (undefined *)0x0) {
    puStack_240 = (undefined *)0x0;
  }
  else {
    puStack_240 = param_2;
    func_0x00010bf0d660();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar22 = param_2;
  func_0x00010c243400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  puVar23 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = param_2;
  func_0x00010c25e8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = param_2;
  func_0x00010bf85780();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  puVar27 = param_2;
  func_0x00010bf5ab80(param_2);
  func_0x00010c052380((double)(long)puVar27 / 1000.0);
  puVar27 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  puVar28 = param_2;
  func_0x00010bf9c8a0(param_2);
  func_0x00010c052380((double)(long)puVar28 / 1000.0);
  puVar28 = param_2;
  func_0x00010bf10000();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = param_2;
  func_0x00010c0fc8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010bfd5c60();
  if ((int)puVar30 == 0) {
    puStack_248 = (undefined *)0x0;
  }
  else {
    puStack_3a0 = param_2;
    func_0x00010c0fc8c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_3a8 = puStack_3a0;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    puStack_248 = puStack_3a8;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar31 = param_2;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    puStack_250 = (undefined *)0x0;
  }
  else {
    puStack_3b0 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puStack_250 = puStack_3b0;
    func_0x00010bfb1200();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf20ec0();
  func_0x00010bfbe4e0();
  puVar32 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bf4bfa0(param_2);
  func_0x00010bffc4a0();
  puVar33 = param_2;
  func_0x00010bf4bf80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar60 = 0xc2000000;
  _objc_retain(puVar32);
  func_0x00010bf980c0(puVar33);
  _objc_release(puVar33);
  puVar33 = puVar32;
  func_0x00010bf51e00();
  _objc_release(puVar32);
  _objc_release(puVar32);
  uVar34 = param_6;
  func_0x000108f4fbd8(param_6,param_7);
  puVar35 = param_2;
  func_0x00010c262060();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_8;
  func_0x000108f50ec4(param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar5;
  func_0x000108f5123c(uVar5,uVar6,param_15,uVar7,param_19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cca0();
  puVar38 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar39;
  func_0x00010bf1f280();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = puVar41;
  func_0x00010c27f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = param_2;
  func_0x00010c23fd60();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar43;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c14ede0();
  if (param_11._3_1_ == '\0') {
    puStack_258 = (undefined *)0x0;
    iStack_374 = 0;
    bVar1 = false;
    puStack_260 = (undefined *)0x0;
  }
  else {
    puVar55 = param_2;
    func_0x00010bfdc520();
    iStack_374 = (int)puVar55;
    if (iStack_374 == 0) {
      puStack_258 = (undefined *)0x0;
    }
    else {
      puVar32 = param_2;
      func_0x00010c243660();
      _objc_retainAutoreleasedReturnValue();
      puStack_258 = puVar32;
      func_0x000108f523a0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar55 = param_2;
    func_0x00010bfdc520();
    puStack_3b8 = puVar32;
    if ((int)puVar55 == 0) {
      bVar1 = false;
      puStack_260 = (undefined *)0x0;
    }
    else {
      puStack_420 = param_2;
      func_0x00010c243660();
      _objc_retainAutoreleasedReturnValue();
      puStack_260 = PTR_PTR_1126d97e8;
      _objc_retain();
      _objc_alloc();
      puVar32 = puStack_420;
      func_0x00010c26e3a0(puStack_420);
      _objc_retainAutoreleasedReturnValue();
      puVar55 = puStack_420;
      func_0x00010c26df60(puStack_420);
      _objc_retainAutoreleasedReturnValue();
      puVar46 = puStack_420;
      func_0x00010c0c54a0(puStack_420);
      _objc_retainAutoreleasedReturnValue();
      puVar47 = puStack_420;
      func_0x00010c0c5180(puStack_420);
      _objc_retainAutoreleasedReturnValue();
      puVar48 = puStack_420;
      func_0x00010c241220(puStack_420);
      _objc_retainAutoreleasedReturnValue();
      puVar49 = puStack_420;
      func_0x00010c26d980(puStack_420);
      _objc_retainAutoreleasedReturnValue();
      puVar50 = puStack_420;
      func_0x00010c26d940();
      _objc_retainAutoreleasedReturnValue();
      puVar51 = puStack_420;
      func_0x00010c26d920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_420);
      func_0x00010c052040();
      _objc_release(puVar51);
      _objc_release(puVar50);
      _objc_release(puVar49);
      _objc_release(puVar48);
      _objc_release(puVar47);
      _objc_release(puVar46);
      _objc_release(puVar55);
      _objc_release(puVar32);
      bVar1 = true;
    }
  }
  puVar32 = PTR_PTR_1126c2fc8;
  if (param_12 == 0) {
    puVar55 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_alloc();
    func_0x00010c0559e0();
    puVar46 = PTR_PTR_1126c2fd0;
    func_0x00010c293b20();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = param_2;
    func_0x000108f05d54(param_2,puVar46,0,0,0,&PTR____CFConstantStringClassReference_110edd958,0,0,0
                        ,0,0,1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar48 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = PTR_PTR_1126cc288;
    _objc_alloc();
    func_0x00010c29eec0();
    func_0x00010c29eec0();
    func_0x00010c1518c0();
    func_0x00010c1142e0();
    func_0x00010c25e960();
    func_0x00010c0db040();
    func_0x00010c29c5c0();
    func_0x00010c2651a0();
    func_0x00010c2645e0();
    func_0x00010c268fc0();
    func_0x00010c268de0();
    func_0x00010bf1f680();
    func_0x00010c22a980();
    func_0x00010c25e440();
    func_0x00010c0f2a40();
    func_0x00010c0f2a00();
    func_0x00010bf41940();
    func_0x00010bf41900();
    func_0x00010c01e400(puVar49);
    puVar50 = param_2;
    func_0x00010befdc40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar55 = PTR_PTR_1126cc290;
    _objc_alloc();
    func_0x00010bf2d4a0(puVar50);
    func_0x00010bf2c740(puVar50);
    puVar51 = param_2;
    func_0x00010bf4cc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar52 = puVar51;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0480e0();
    _objc_release(puVar52);
    _objc_release(puVar51);
    _objc_release(puVar50);
    _objc_release(puVar49);
    _objc_release(puVar48);
    _objc_release(puVar47);
    _objc_release(puVar46);
    _objc_release(puVar32);
  }
  func_0x00010c25b820();
  uVar53 = param_16;
  func_0x000108f4f740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaac0();
  func_0x00010c2621c0();
  func_0x00010c1029e0();
  puVar32 = param_2;
  func_0x00010bfdc520();
  if (((ulong)puVar32 & 1) == 0) {
    func_0x00010c047dc0(dVar59,uVar60,puVar58);
  }
  else {
    puVar32 = param_2;
    func_0x00010c243660();
    _objc_retainAutoreleasedReturnValue();
    puVar46 = puVar32;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047dc0(dVar59,uVar60,puVar58);
    _objc_release(puVar46);
    _objc_release(puVar32);
  }
  _objc_release(uVar53);
  _objc_release(puVar55);
  if (bVar1) {
    _objc_release(puStack_260);
    _objc_release(puStack_420);
  }
  if (iStack_374 != 0) {
    _objc_release(puStack_258);
    _objc_release(puStack_3b8);
  }
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(puVar33);
  if (param_5 != 0) {
    _objc_release(puStack_250);
    _objc_release(puStack_3b0);
  }
  _objc_release(puVar31);
  if ((int)puVar30 != 0) {
    _objc_release(puStack_248);
    _objc_release(puStack_3a8);
    _objc_release(puStack_3a0);
  }
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  if (puVar21 != (undefined *)0x0) {
    _objc_release(puStack_240);
  }
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
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar54);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puVar56);
  _objc_release(puVar57);
  _objc_release(puStack_288);
  _objc_release(puStack_280);
LAB_1084865a0:
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar58);
  return;
}



/* Entry: 10848664c; end: 1084866db;  */

void FUN_10848664c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084866dc; end: 1084866e3;  */

void FUN_1084866dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain();
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010bf44340();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5a00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084866e4; end: 1084867ab;  */

void FUN_1084866e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain();
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010bf44340();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5a00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084867ac; end: 108486887;  */

void FUN_1084867ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf15da0(param_1,param_2,0x20);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c25cfc0(lVar2,param_2,&PTR____CFConstantStringClassReference_110db9ab8,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108486888; end: 10848765b;  */

void FUN_108486888(undefined *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined **ppuVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_b8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_1;
  func_0x00010c118140();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar1;
  func_0x00010bef26a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar41;
  func_0x00010c08fa60();
  _objc_release(puVar41);
  if (puVar2 == (undefined *)0x0) {
    puVar41 = (undefined *)0x0;
  }
  else {
    puVar41 = puVar1;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar41;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar41);
    puVar41 = puVar1;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar41;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar41);
    _objc_retain(puVar4);
    puVar41 = puVar1;
    func_0x00010bf21060();
    lVar15 = 3;
    if ((int)puVar41 != 3) {
      lVar15 = 1;
    }
    lVar27 = 2;
    if ((int)puVar41 != 2) {
      lVar27 = lVar15;
    }
    puVar2 = PTR_PTR_1126b8dc8;
    _objc_alloc();
    ppuVar40 = &PTR__OBJC_CLASS___NSConstantArray_111182e40;
    func_0x00010bf529e0();
    if (ppuVar40 == (undefined **)0x0) {
      ppuVar40 = (undefined **)0x0;
    }
    else {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_111182e40;
      func_0x000100504554(&PTR__OBJC_CLASS___NSConstantArray_111182e40,
                          &PTR___NSConcreteGlobalBlock_110a4abc8);
      ppuVar40 = ppuVar5;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
    puVar41 = param_7;
    func_0x00010c23d840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_7;
    func_0x000100873628();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = 0;
    func_0x00010bff1b40();
    _objc_release(puVar6);
    _objc_release(puVar41);
    _objc_release(ppuVar40);
    puVar6 = puVar1;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    FUN_1084867ac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010bf939a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    FUN_1084867ac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126afeb0;
    _objc_alloc();
    func_0x00010c04e0a0();
    puVar9 = puVar1;
    func_0x00010c0fcb00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      puStack_b8 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc();
      puVar41 = puVar1;
      func_0x00010c0fcb00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c057e80();
      puStack_b8 = puVar10;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar41);
    }
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126afeb8;
    _objc_alloc();
    puVar10 = puVar1;
    func_0x00010bef26a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c119560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    puVar12 = puVar1;
    func_0x00010c15ef00(puVar1);
    puVar13 = puVar1;
    func_0x00010bfdc1c0();
    if ((int)puVar13 == 0) {
      puVar42 = (undefined *)0x0;
      puVar14 = param_1;
    }
    else {
      puStack_118 = puVar1;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar41 = puVar2;
      func_0x00010c23d840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar2;
      func_0x00010c23d8e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar42 = puStack_118;
      FUN_1084c1360(puStack_118,puVar41,puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar43 = 0;
    func_0x00010bff1c00(0,0,0,(double)(long)puVar12,0,uVar26);
    if ((int)puVar13 != 0) {
      _objc_release(puVar42);
      _objc_release(puVar14);
      _objc_release(puVar41);
      _objc_release(puStack_118);
    }
    _objc_release(puVar11);
    _objc_release(puVar10);
    lVar15 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c0f3e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    if (lVar16 == 0) {
      puVar41 = (undefined *)0x0;
    }
    else {
      lVar15 = lVar16;
      func_0x00010bef60a0();
      if (((param_4 & 1) == 0) && (lVar15 == 7)) {
        puVar41 = (undefined *)0x0;
      }
      else {
        lVar15 = lVar16;
        FUN_1084c1dc0(lVar16,puVar3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar16;
        func_0x00010c258fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar17;
        func_0x00010c26ec00();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar18;
        func_0x00010c08fa60();
        puStack_118 = PTR__OBJC_CLASS___NSURL_1126ae598;
        if (lVar19 == 0) {
          puStack_118 = (undefined *)0x0;
        }
        else {
          lVar19 = lVar16;
          func_0x00010c258fc0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar19;
          func_0x00010c26ec00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar20);
          _objc_release(lVar19);
        }
        _objc_release(lVar18);
        _objc_release(lVar17);
        lVar17 = lVar16;
        func_0x00010c258fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar17;
        func_0x00010c26ece0();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar18;
        func_0x00010c08fa60();
        puStack_120 = PTR__OBJC_CLASS___NSURL_1126ae598;
        if (lVar19 == 0) {
          puStack_120 = (undefined *)0x0;
        }
        else {
          lVar19 = lVar16;
          func_0x00010c258fc0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar19;
          func_0x00010c26ece0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar20);
          _objc_release(lVar19);
        }
        _objc_release(lVar18);
        _objc_release(lVar17);
        lVar17 = lVar16;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar17;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar17);
        func_0x00010bef60a0(lVar18);
        func_0x00010bef4240(lVar18);
        lVar17 = lVar16;
        func_0x00010c258fc0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar17;
        func_0x00010c26eae0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = param_7;
        func_0x00010c118220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar19);
        _objc_release(lVar17);
        puVar12 = PTR_PTR_1126d9810;
        _objc_alloc();
        lVar17 = lVar16;
        func_0x00010c258fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar17;
        func_0x00010c26ebc0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar16;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar20;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar21;
        func_0x00010bf20f80();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = lVar16;
        func_0x00010bef2c20();
        _objc_retainAutoreleasedReturnValue();
        puVar41 = puVar1;
        func_0x00010c278a80();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010c119560();
        _objc_retainAutoreleasedReturnValue();
        lVar24 = lVar16;
        func_0x00010c26d2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar16;
        func_0x00010c26d2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01a340();
        _objc_release(lVar25);
        _objc_release(lVar24);
        _objc_release(puVar10);
        _objc_release(puVar41);
        _objc_release(lVar23);
        _objc_release(lVar22);
        _objc_release(lVar21);
        _objc_release(lVar20);
        _objc_release(lVar19);
        _objc_release(lVar17);
        lVar17 = lVar15;
        func_0x000100504554(lVar15,&PTR___NSConcreteGlobalBlock_110a4ab88);
        lVar19 = lVar17;
        func_0x00010bf529e0();
        uVar26 = param_2;
        func_0x00010bfa4340(param_2);
        puVar13 = param_1;
        func_0x000108f52c50(param_1,param_2,lVar17,lVar19,0,0,uVar26,0,0,4 - lVar27);
        _objc_retainAutoreleasedReturnValue();
        lVar27 = lVar17;
        func_0x00010c140200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar17);
        puVar41 = PTR_PTR_1126c2098;
        _objc_alloc();
        func_0x00010c259740();
        func_0x00010c26e960(param_1);
        uVar44 = uVar43;
        func_0x00010c080120();
        func_0x00010c078e00();
        func_0x00010c072c20();
        puVar14 = param_1;
        func_0x00010bfa31e0();
        _objc_retainAutoreleasedReturnValue();
        puVar42 = PTR_PTR_1126c6d88;
        func_0x00010c118280();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = param_2;
        func_0x00010c13bd00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c150c20(param_1);
        puVar28 = param_1;
        uVar45 = uVar44;
        func_0x00010bf3d2e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11f680();
        puVar29 = param_1;
        func_0x00010bf3d2e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07d8e0();
        puVar30 = param_1;
        func_0x00010bf3d2e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0820e0();
        puVar31 = param_1;
        func_0x00010bf3d2e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11ce20();
        puVar32 = PTR_PTR_1126d58d0;
        _objc_alloc();
        puVar33 = param_1;
        func_0x00010bf3cd00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe2bc0();
        puVar34 = param_1;
        func_0x00010bf3cd00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c236ac0();
        puVar35 = param_1;
        func_0x00010bf3cd00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c231940();
        func_0x00010c01a720();
        puVar36 = param_1;
        func_0x00010c08b2e0(param_1);
        func_0x00010bfddfe0();
        func_0x00010c080120();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259c60(param_1);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar37 = param_1;
        func_0x000108f518a0();
        _objc_retainAutoreleasedReturnValue();
        puVar38 = param_1;
        func_0x000108f52990();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e240(param_1);
        puVar39 = param_1;
        func_0x000108f508a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000c60(uVar43,uVar44,(double)(long)puVar36,uVar45,puVar41);
        _objc_release(puVar39);
        _objc_release(puVar38);
        _objc_release(puVar37);
        _objc_release(puVar10);
        _objc_release(puVar32);
        _objc_release(puVar35);
        _objc_release(puVar34);
        _objc_release(puVar33);
        _objc_release(puVar31);
        _objc_release(puVar30);
        _objc_release(puVar29);
        _objc_release(puVar28);
        _objc_release(uVar26);
        _objc_release(puVar42);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(lVar27);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(lVar18);
        _objc_release(puStack_120);
        _objc_release(puStack_118);
        _objc_release(lVar15);
      }
    }
    _objc_release(lVar16);
    _objc_release(puVar9);
    _objc_release(puStack_b8);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar41);
  return;
}


