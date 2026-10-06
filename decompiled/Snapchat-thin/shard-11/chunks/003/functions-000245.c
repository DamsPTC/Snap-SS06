/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10848765c; end: 108487703;  */

void FUN_10848765c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c0c4c20(param_3);
  _objc_release(param_3);
  func_0x00010c047c20(param_1,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108487704; end: 108487e2b;  */

void FUN_108487704(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d9818;
  _objc_opt_new(PTR_PTR_1126d9818);
  func_0x00010c099080(param_1);
  func_0x00010c1bdaa0(puVar2);
  func_0x00010bf0ece0(param_1);
  func_0x00010c16b9e0(puVar2);
  func_0x00010bf9de60(param_1);
  func_0x00010c199420(puVar2);
  lVar3 = param_1;
  func_0x00010bf65fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c189ee0(puVar2);
  }
  lVar4 = param_1;
  func_0x00010c149400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5260(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf93c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195bc0(puVar2);
  _objc_release(lVar4);
  uVar6 = param_2;
  func_0x00010bf8f8c0();
  if ((int)uVar6 != 0) {
    lVar4 = param_1;
    func_0x00010c151440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      puVar7 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar4 = param_1;
      func_0x00010c151440(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar7);
      func_0x00010c1f75e0(puVar2);
      _objc_release(puVar7);
      _objc_release(lVar4);
    }
    lVar4 = param_1;
    func_0x00010c1510a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      puVar7 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar4 = param_1;
      func_0x00010c1510a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar7);
      func_0x00010c1f7180(puVar2);
      _objc_release(puVar7);
      _objc_release(lVar4);
    }
  }
  puVar7 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b8c98;
  func_0x00010bfb4840();
  if ((int)puVar8 != 0) {
    puVar8 = puVar7;
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b4fc0();
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126b8c98;
  func_0x00010c23e260();
  if ((int)puVar8 != 0) {
    puVar8 = puVar7;
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203020();
    _objc_release(puVar8);
  }
  puVar8 = puVar7;
  func_0x00010c06f880();
  if ((int)puVar8 != 0) {
    puVar8 = PTR_PTR_1126d9828;
    _objc_opt_new(PTR_PTR_1126d9828);
    puVar9 = puVar7;
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189f40(puVar8);
    _objc_release(puVar9);
    func_0x00010c21e180(puVar2);
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126c0278;
  _objc_opt_new(PTR_PTR_1126c0278);
  puVar9 = PTR_PTR_1126ae740;
  _objc_opt_new();
  func_0x00010befc800();
  func_0x00010befc800(puVar9);
  func_0x00010c1e51a0(puVar8);
  uVar6 = param_2;
  FUN_1084c1810();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c37a0(puVar8);
  uVar10 = param_2;
  func_0x0001084c18c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c37c0(puVar8);
  ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111182e40;
  func_0x00010bf529e0();
  if (ppuVar11 == (undefined **)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126ae740;
    func_0x00010bf09f00(PTR_PTR_1126ae740);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111182e40;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (ppuVar11 != (undefined **)0x0) {
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111182e40);
          }
          iVar1 = (int)*(undefined8 *)((long)ppuVar15 * 8);
          func_0x00010c067fc0();
          FUN_10848f45c();
          if (iVar1 != 0) {
            func_0x00010befc800(puVar14);
          }
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar11 != ppuVar15);
        ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111182e40;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
  }
  func_0x00010c1914e0(puVar8);
  _objc_release(puVar14);
  func_0x00010c177e60(puVar8);
  puVar14 = PTR_PTR_1126d9830;
  func_0x00010bf45120(PTR_PTR_1126d9830);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1803c0(puVar8);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c20ff20(puVar8);
  _objc_release(puVar14);
  func_0x00010c07ed80(param_2);
  func_0x00010c1b47e0(puVar8);
  func_0x00010c1afaa0(puVar8);
  func_0x00010bf8f7a0(param_1);
  func_0x00010c194aa0(puVar8);
  uVar12 = 0;
  FUN_1084929a8(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166400(puVar8);
  _objc_release(uVar12);
  uVar12 = 0;
  func_0x000108492c7c(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199a00(puVar8);
  _objc_release(uVar12);
  lVar4 = param_1;
  func_0x00010bf66360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  func_0x000108492f58(0,9,&PTR____CFConstantStringClassReference_110edd978,0,lVar3,lVar4,1,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010c1ae8e0(puVar2);
  lVar4 = param_1;
  func_0x00010bf82ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar14 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar4 = param_1;
    func_0x00010bf82ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar14);
    func_0x00010c18f340(puVar2);
    _objc_release(puVar14);
    _objc_release(lVar4);
  }
  lVar4 = param_1;
  func_0x00010bf82d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar14 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar4 = param_1;
    func_0x00010bf82d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar14);
    func_0x00010c18f2e0(puVar2);
    _objc_release(puVar14);
    _objc_release(lVar4);
  }
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_opt_new(PTR_PTR_1126d9820);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108487e2c; end: 108487e47;  */

void FUN_108487e2c(void)

{
  _objc_opt_new(PTR_PTR_1126d9820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108487e48; end: 108487eb7;  */

void FUN_108487e48(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c067fc0();
  puVar2 = PTR_PTR_1126b8ca0;
  if (lVar1 == 0x17) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c067fc0(param_2);
    func_0x00010c25d240(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108487eb8; end: 1084883a3;  */

void FUN_108487eb8(ulong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    func_0x00010bf3ba20(param_3);
  }
  uVar9 = param_1;
  func_0x00010bf529e0();
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      uVar8 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar8;
      func_0x00010bf31ee0();
      _objc_release(uVar8);
      uVar9 = uVar9 + 1;
      if ((int)uVar1 == 6) {
        uVar8 = param_1;
        func_0x00010bf529e0();
        if (uVar9 < uVar8) {
          uVar1 = param_1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar1;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
        }
        else {
          uVar8 = 0;
        }
        uVar1 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(uVar8);
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        if (uVar8 != 0) {
          uVar2 = uVar1;
          func_0x00010c118140();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bef26a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c08fa60();
          _objc_release(uVar3);
          puVar5 = PTR_PTR_1126bd4d8;
          if (uVar4 != 0) {
            uVar3 = uVar2;
            func_0x00010bef26a0(uVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f40e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            puVar6 = puVar5;
            func_0x00010bef60a0();
            if ((int)puVar6 == 6) {
              puVar6 = PTR_PTR_1126c6980;
              _objc_alloc();
              func_0x00010bf52680();
              uVar3 = uVar8;
              func_0x00010bfe5ea0(uVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c298be0(uVar8);
              func_0x00010c005fa0();
              _objc_release(uVar3);
              uVar3 = uVar1;
              func_0x00010bf66200();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x000108f516b8();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar1;
              FUN_108486888(uVar1,0,0,1,puVar6,uVar4,param_4,param_5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              _objc_release(uVar3);
              uVar3 = uVar7;
              func_0x00010c259560();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010afef744();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar3);
              if (uVar4 != 0) {
                func_0x00010c126bc0(param_3);
              }
              _objc_release(uVar4);
              _objc_release(uVar7);
              _objc_release(puVar6);
            }
            _objc_release(puVar5);
          }
          _objc_release(uVar2);
        }
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_release(uVar8);
        _objc_release(uVar1);
        _objc_release(uVar1);
        _objc_release(uVar8);
      }
      uVar8 = param_1;
      func_0x00010bf529e0();
    } while (uVar9 < uVar8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1084883a4; end: 1084883cf;  */

void FUN_1084883a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084883d0; end: 108488403; -[SCAdApplicationInfo _appDidEnterForeground] */

void FUN_1084883d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108488404; end: 108488477; -[SCAdApplicationInfo getApplicationBundleName] */

void FUN_108488404(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108488478; end: 1084884ef; -[SCAdApplicationInfo getApplicationBundleIdentifier] */

void FUN_108488478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084884f0; end: 1084884f7; -[SCAdApplicationInfo getApplicationType] */

undefined8 FUN_1084884f0(void)

{
  return 0;
}



/* Entry: 1084884f8; end: 1084884ff; -[SCAdApplicationInfo getSDKVersion] */

undefined8 FUN_1084884f8(void)

{
  return 0;
}



/* Entry: 108488500; end: 108488547; -[SCAdApplicationInfo getSourceAppId] */

void FUN_108488500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100873628();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108488548; end: 10848856f; -[SCAdApplicationInfo getAppSessionId] */

void FUN_108488548(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108488570; end: 108488577; -[SCAdApplicationInfo getApplicationDesignType] */

undefined8 FUN_108488570(void)

{
  return 0;
}



/* Entry: 108488578; end: 1084885bf; -[SCAdApplicationInfo .cxx_destruct] */

void FUN_108488578(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084885c0; end: 1084885c7; -[SCAdDeviceInfoProvider init] */

void FUN_1084885c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff35b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAppPreferences__1125da730,0);
  return;
}



/* Entry: 1084885c8; end: 1084885cf; -[SCAdDeviceInfoProvider getScreenHeightInPixels] */

undefined8 FUN_1084885c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1084885d0; end: 1084885d7; -[SCAdDeviceInfoProvider getScreenWidthInPixels] */

undefined8 FUN_1084885d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084885d8; end: 1084885df; -[SCAdDeviceInfoProvider getScreenHeightInPoints] */

undefined8 FUN_1084885d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1084885e0; end: 1084885e7; -[SCAdDeviceInfoProvider getScreenWidthInPoints] */

undefined8 FUN_1084885e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084885e8; end: 1084885ef; -[SCAdDeviceInfoProvider getDeviceVolume] */

undefined8 FUN_1084885e8(void)

{
  return 0;
}



/* Entry: 1084885f0; end: 1084885f7; -[SCAdDeviceInfoProvider isDeviceAudible] */

undefined8 FUN_1084885f0(void)

{
  return 1;
}



/* Entry: 1084885f8; end: 1084885ff; -[SCAdDeviceInfoProvider getConnectivityType] */

undefined8 FUN_1084885f8(void)

{
  return 3;
}



/* Entry: 108488600; end: 108488633; -[SCAdDeviceInfoProvider getConnectivity] */

undefined ** FUN_108488600(ulong param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bfc4060();
  if (param_1 < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a4abe8)[param_1];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110edd9d8;
  }
  return ppuVar1;
}



/* Entry: 108488634; end: 1084886b7; -[SCAdDeviceInfoProvider getDefaultWebViewUserAgent] */

void FUN_108488634(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c2a1be0(param_1);
    lVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1084886b8; end: 10848879f; -[SCAdDeviceInfoProvider warmDefaultWebViewUserAgentIfNeeded] */

void FUN_1084886b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    if (*(char *)(param_1 + 0x2c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
      return;
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
    _os_unfair_lock_unlock(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = uVar2;
    _objc_retain(uVar2);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1084887a0;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    uStack_38 = uVar2;
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uVar1);
    _objc_release(uStack_38);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1084887a0; end: 1084887ff;  */

void FUN_1084887a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf6aa40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b360();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108488800; end: 10848885f; -[SCAdDeviceInfoProvider defaultWebViewUserAgentFromWebView] */

void FUN_108488800(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  _objc_alloc(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108488860; end: 1084888eb; -[SCAdDeviceInfoProvider getDeviceModel] */

void FUN_108488860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110edd9f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084888ec; end: 108488937; -[SCAdDeviceInfoProvider getDeviceLanguage] */

void FUN_1084888ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108488938; end: 10848893f; -[SCAdDeviceInfoProvider getCarrierName] */

undefined8 FUN_108488938(void)

{
  return 0;
}



/* Entry: 108488940; end: 108488947; -[SCAdDeviceInfoProvider getCarrierMCCAndMNC] */

undefined8 FUN_108488940(void)

{
  return 0;
}



/* Entry: 108488948; end: 10848894f; -[SCAdDeviceInfoProvider getCellularNetworkType] */

undefined8 FUN_108488948(void)

{
  return 0;
}



/* Entry: 108488950; end: 108488957; -[SCAdDeviceInfoProvider getDownloadBandwidthBytesPerSecond] */

undefined8 FUN_108488950(void)

{
  return 0;
}



/* Entry: 108488958; end: 10848895f; -[SCAdDeviceInfoProvider getBatteryData] */

undefined8 FUN_108488958(void)

{
  return 0;
}



/* Entry: 108488960; end: 108488967; -[SCAdDeviceInfoProvider getDiskData] */

undefined8 FUN_108488960(void)

{
  return 0;
}



/* Entry: 108488968; end: 108488993; -[SCAdDeviceInfoProvider getDeviceUpDurationInMs] */

void FUN_108488968(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bf5e680(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 108488994; end: 1084889df; -[SCAdDeviceInfoProvider identifierForVendor] */

void FUN_108488994(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084889e0; end: 108488a83; -[SCAdDeviceTargetingManager initWithDeviceAdapter:applicationInfo:] */

undefined1 *
FUN_1084889e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc9e8;
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



/* Entry: 108488a84; end: 108488ab3; -[SCAdDeviceTargetingManager .cxx_destruct] */

void FUN_108488a84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108488ab4; end: 108488ae3; -[SCAdNetworkRequest initWithUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:] */

void FUN_108488ab4(void)

{
  func_0x00010c05a360();
  return;
}



/* Entry: 108488ae4; end: 108488b4f; -[SCAdNetworkRequest initWithUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:isPrimaryRequest:adProductType:requestKey:] */

void FUN_108488ae4(void)

{
  func_0x00010c05a240(0);
  return;
}



/* Entry: 108488b50; end: 108488bb3; -[SCAdNetworkRequest initWithUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:snapAdsId:adType:requestType:isPrimaryRequest:requestFormat:adProductType:serveItemId:adServeTimestamp:adId:requestKey:] */

void FUN_108488b50(void)

{
  func_0x00010c05a240();
  return;
}



/* Entry: 108488bb4; end: 108488c03; -[SCAdNetworkRequest initWithUrl:retryUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:snapAdsId:adType:requestType:isPrimaryRequest:requestFormat:adProductType:serveItemId:adServeTimestamp:adId:requestKey:] */

void FUN_108488bb4(void)

{
  func_0x00010c05a260();
  return;
}



/* Entry: 108488c04; end: 108488f2b; -[SCAdNetworkRequest initWithUrl:retryUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:snapAdsId:adType:requestType:isPrimaryRequest:requestFormat:adProductType:serveItemId:adServeTimestamp:adId:requestKey:trackSeqNum:trackIsSwiped:] */

undefined8 *
FUN_108488c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,long param_22,undefined8 param_23,undefined1 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_80 = PTR_PTR_1126fc9f0;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_6;
    _objc_release(uVar2);
    puVar1[0x10] = param_7;
    _objc_retain(param_9);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 10) = param_10;
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    puVar1[0x12] = param_12;
    _objc_retain(param_13);
    uVar2 = puVar1[2];
    puVar1[2] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[3];
    puVar1[3] = param_14;
    _objc_release(uVar2);
    puVar1[4] = param_15;
    *(undefined1 *)(puVar1 + 1) = param_16;
    puVar1[6] = param_18;
    puVar1[7] = param_19;
    _objc_retain(param_20);
    uVar2 = puVar1[8];
    puVar1[8] = param_20;
    _objc_release(uVar2);
    puVar1[9] = param_1;
    _objc_retain(param_21);
    uVar2 = puVar1[10];
    puVar1[10] = param_21;
    _objc_release(uVar2);
    lVar3 = param_22;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_22);
      lVar3 = param_22;
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar1[0xb] = param_23;
    *(undefined1 *)((long)puVar1 + 9) = param_24;
    _objc_release(lVar3);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108488f2c; end: 108488f53; -[SCAdNetworkRequest getUrl] */

void FUN_108488f2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108488f54; end: 108488f7b; -[SCAdNetworkRequest getRetryUrl] */

void FUN_108488f54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108488f7c; end: 108488fa3; -[SCAdNetworkRequest getUserAgent] */

void FUN_108488f7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108488fa4; end: 108488fab; -[SCAdNetworkRequest getType] */

undefined8 FUN_108488fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108488fac; end: 108488fd3; -[SCAdNetworkRequest getBody] */

void FUN_108488fac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108488fd4; end: 108488fdb; -[SCAdNetworkRequest shouldSerializeRequest] */

undefined1 FUN_108488fd4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108488fdc; end: 108489003; -[SCAdNetworkRequest getOverrideHeaders] */

void FUN_108488fdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108489004; end: 108489033; -[SCAdNetworkRequest updateUrl:] */

void FUN_108489004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108489034; end: 108489063; -[SCAdNetworkRequest updateBody:] */

void FUN_108489034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108489064; end: 10848906b; -[SCAdNetworkRequest updateRetroType:] */

void FUN_108489064(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10848906c; end: 108489073; -[SCAdNetworkRequest snapAdsId] */

undefined8 FUN_10848906c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108489074; end: 10848907b; -[SCAdNetworkRequest adType] */

undefined8 FUN_108489074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10848907c; end: 108489083; -[SCAdNetworkRequest requestType] */

undefined8 FUN_10848907c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108489084; end: 10848908b; -[SCAdNetworkRequest requestKey] */

undefined8 FUN_108489084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10848908c; end: 108489093; -[SCAdNetworkRequest isPrimaryRequest] */

undefined1 FUN_10848908c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108489094; end: 10848909b; -[SCAdNetworkRequest format] */

undefined8 FUN_108489094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10848909c; end: 1084890a3; -[SCAdNetworkRequest adProductType] */

undefined8 FUN_10848909c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1084890a4; end: 1084890ab; -[SCAdNetworkRequest serveItemId] */

undefined8 FUN_1084890a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1084890ac; end: 1084890b3; -[SCAdNetworkRequest adServeTimestamp] */

undefined8 FUN_1084890ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1084890b4; end: 1084890bb; -[SCAdNetworkRequest adId] */

undefined8 FUN_1084890b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1084890bc; end: 1084890c3; -[SCAdNetworkRequest trackSeqNum] */

undefined8 FUN_1084890bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1084890c4; end: 1084890cb; -[SCAdNetworkRequest trackIsSwiped] */

undefined1 FUN_1084890c4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1084890cc; end: 1084890d3; -[SCAdNetworkRequest url] */

undefined8 FUN_1084890cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1084890d4; end: 1084890db; -[SCAdNetworkRequest retryUrl] */

undefined8 FUN_1084890d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1084890dc; end: 1084890e3; -[SCAdNetworkRequest userAgent] */

undefined8 FUN_1084890dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1084890e4; end: 1084890eb; -[SCAdNetworkRequest overrideHeaders] */

undefined8 FUN_1084890e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1084890ec; end: 1084890f3; -[SCAdNetworkRequest type] */

undefined8 FUN_1084890ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1084890f4; end: 1084890fb; -[SCAdNetworkRequest body] */

undefined8 FUN_1084890f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1084890fc; end: 108489103; -[SCAdNetworkRequest serialize] */

undefined1 FUN_1084890fc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108489104; end: 10848910b; -[SCAdNetworkRequest retroType] */

undefined8 FUN_108489104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10848910c; end: 10848919b; -[SCAdNetworkRequest .cxx_destruct] */

void FUN_10848910c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10848919c; end: 1084891eb; -[SCAdPersistedDataProvider setEncryptedUserData:] */

void FUN_10848919c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195bc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084891ec; end: 108489233; -[SCAdPersistedDataProvider getEncryptedUserData] */

void FUN_1084891ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf93c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108489234; end: 10848927b; -[SCAdPersistedDataProvider getUserPixelToken] */

void FUN_108489234(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2931c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10848927c; end: 1084892cb; -[SCAdPersistedDataProvider setUserPixelToken:] */

void FUN_10848927c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ee40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084892cc; end: 108489313; -[SCAdPersistedDataProvider getAdInitClientRequestId] */

void FUN_1084892cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108489314; end: 108489363; -[SCAdPersistedDataProvider setAdInitClientRequestId:] */

void FUN_108489314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108489364; end: 1084893ab; -[SCAdPersistedDataProvider getAdSourceConfig] */

void FUN_108489364(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef55e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084893ac; end: 108489403; -[SCAdPersistedDataProvider setAdSourceConfig:] */

void FUN_1084893ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1648e0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108489404; end: 10848944b; -[SCAdPersistedDataProvider getAdSessionId] */

void FUN_108489404(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10848944c; end: 10848949b; -[SCAdPersistedDataProvider setAdSessionId:] */

void FUN_10848944c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1645c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10848949c; end: 1084894df; -[SCAdPersistedDataProvider setLast429ResponseTimestamp:] */

void FUN_10848949c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084894e0; end: 108489527; -[SCAdPersistedDataProvider getLast429ResponseTimestamp] */

undefined8 FUN_1084894e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0881a0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108489528; end: 10848956f; -[SCAdPersistedDataProvider getSaid] */

void FUN_108489528(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108489570; end: 1084895bf; -[SCAdPersistedDataProvider setLastInitTimestampInSec:] */

void FUN_108489570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7e80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084895c0; end: 108489607; -[SCAdPersistedDataProvider getLastInitTimestampInSec] */

void FUN_1084895c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c088fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108489608; end: 108489643; -[SCAdPersistedDataProvider setShouldSendGeoLocationInAdRequest:] */

void FUN_108489608(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108489644; end: 108489683; -[SCAdPersistedDataProvider getShouldSendGeoLocationInAdRequest] */

undefined8 FUN_108489644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c233080();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108489684; end: 1084896cb; -[SCAdPersistedDataProvider getLastCanOpenURLUploadingTimestampInSec] */

void FUN_108489684(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c088440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084896cc; end: 10848971b; -[SCAdPersistedDataProvider setLastCanOpenURLUploadingTimestampInSec:] */

void FUN_1084896cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10848971c; end: 108489763; -[SCAdPersistedDataProvider getAdServerChatURL] */

void FUN_10848971c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108489764; end: 1084897b3; -[SCAdPersistedDataProvider setAdServerChatURL:] */

void FUN_108489764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084897b4; end: 1084897fb; -[SCAdPersistedDataProvider getAdServerHeaderKeysArray] */

void FUN_1084897b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084897fc; end: 10848984b; -[SCAdPersistedDataProvider setAdServerHeaderKeysArray:] */

void FUN_1084897fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10848984c; end: 108489893; -[SCAdPersistedDataProvider getAdServerHeaderValuesArray] */

void FUN_10848984c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


