/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058fa6f4; end: 1058fab7f; -[SCPlaybackMediaResolver downloadSingleMedia:range:loggedUseCase:completion:] */

void FUN_1058fa6f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c271bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_3;
    FUN_1058fab80(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,0,0,lVar1);
    _objc_release(lVar1);
    puVar14 = (undefined *)0x0;
    goto LAB_1058fab44;
  }
  lVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0c46a0();
    lVar5 = param_3;
    func_0x00010bf9d9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c292920();
    FUN_1058f9f20(lVar3,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  puVar7 = PTR_PTR_1126b7f98;
  _objc_alloc();
  func_0x00010c04b840();
  lVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  if (lVar5 == 0) {
LAB_1058fa994:
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar2 = lVar6;
  }
  else {
    lVar8 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar10 != 0) {
      lVar1 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad2a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar5);
      goto LAB_1058fa994;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfa5dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar14 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  puVar13 = PTR_PTR_1126bfed0;
  _objc_alloc(PTR_PTR_1126bfed0);
  func_0x00010bff9900();
  func_0x00010bef7460(puVar14);
  _objc_release(puVar13);
  uVar11 = uVar12;
  func_0x00010bf49960(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar12);
  func_0x00010c26d0c0(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_retain(puVar14);
  _objc_release(param_7);
  _objc_release(uVar12);
  _objc_release(param_6);
  _objc_release(puVar14);
  _objc_release(puVar14);
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_1058fab44:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1058fab80; end: 1058fac5f;  */

void FUN_1058fab80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0c738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar4,param_2,&PTR____CFConstantStringClassReference_110f68bf8,puVar3,6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058fac60; end: 1058fadaf;  */

void FUN_1058fac60(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bfc1d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(*(undefined8 *)(param_1 + 0x40));
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    uVar3 = uVar2;
    func_0x00010c0bfa60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058fadb0; end: 1058faf7f;  */

void FUN_1058fadb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c067ec0();
    func_0x00010c0a3940(uVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4c940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  uVar3 = uVar1;
  func_0x00010c26d0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058faf80; end: 1058fafd3;  */

undefined8 FUN_1058faf80(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107cd1204(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,0,param_2);
  _objc_release(param_2);
  return 0;
}



/* Entry: 1058fafd4; end: 1058fb47f; -[SCPlaybackMediaResolver prefetchStreamingContentFrom:completion:] */

void FUN_1058fafd4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c271bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (param_4 != 0) {
      lVar1 = param_3;
      FUN_1058fab80(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,lVar1);
      _objc_release(lVar1);
    }
    puVar15 = (undefined *)0x0;
    goto LAB_1058fb428;
  }
  lVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  lVar9 = lVar2;
  if (lVar5 == 0) {
LAB_1058fb19c:
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar2 = lVar9;
  }
  else {
    lVar5 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar8 != 0) {
      lVar1 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad2a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      goto LAB_1058fb19c;
    }
  }
  puVar10 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar11 = PTR_PTR_1126b1378;
  lVar1 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c1081a0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c107de0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c107440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar12);
  puVar15 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  puVar14 = PTR_PTR_1126bfec8;
  _objc_alloc(PTR_PTR_1126bfec8);
  func_0x00010c038480();
  func_0x00010bef7460(puVar15);
  _objc_release(puVar14);
  _objc_initWeak(auStack_68,param_1);
  uVar12 = uVar13;
  func_0x00010bfbc440(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar15);
  _objc_retain(uVar13);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c26d0c0(uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_retain(puVar15);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar13);
  _objc_release(puVar15);
  _objc_release(param_4);
  _objc_release(puVar15);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar2);
LAB_1058fb428:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1058fb480; end: 1058fb5c7;  */

undefined8 FUN_1058fb480(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x38);
      uVar2 = param_2;
      func_0x00010bfc1d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000107cd1204();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfbc480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c26d0c0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return 0;
}



/* Entry: 1058fb5c8; end: 1058fb81f;  */

undefined8 FUN_1058fb5c8(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bfc1d60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010bf4c940(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar11 = param_1;
      _objc_release(lVar3);
      if (param_1 <= 0.0) {
        lVar3 = lVar2;
        func_0x00010bf4c940();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          lVar3 = lVar2;
          func_0x00010bf27200(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(lVar3);
          dVar12 = 0.2;
          if (dVar11 <= 0.0) {
            dVar12 = 0.0;
          }
        }
        else {
          _objc_release();
          dVar12 = 0.0;
        }
      }
      else {
        lVar3 = lVar2;
        func_0x00010bf27200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        lVar4 = lVar2;
        dVar12 = dVar11;
        func_0x00010bf4c940(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar12 = dVar11 / dVar12;
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      dVar11 = 1.0;
      if (dVar12 <= 1.0) {
        dVar11 = dVar12;
      }
      if (0.0 < dVar11) {
        puVar5 = PTR_PTR_1126bff28;
        _objc_alloc(PTR_PTR_1126bff28);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf9d9e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf4c8a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c46a0();
        puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
        puVar8 = PTR_PTR_1126bfe80;
        _objc_alloc(PTR_PTR_1126bfe80);
        uVar9 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c0c5220(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029740(dVar11,puVar8);
        func_0x00010c2268e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029200(puVar5);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(uVar9);
        _objc_release(uVar7);
        _objc_release(uVar6);
        func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x28));
        _objc_release(puVar5);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1058fb820; end: 1058fb827; -[SCPlaybackMediaResolver enableNewContentManagerForStories] */

undefined1 FUN_1058fb820(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 1058fb828; end: 1058fb89f; -[SCPlaybackMediaResolver .cxx_destruct] */

void FUN_1058fb828(long param_1)

{
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



/* Entry: 1058fb8a0; end: 1058fb913; -[SCPlaybackMediaResourceFetcher initWithContentDelivery:] */

undefined1 * FUN_1058fb8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ead38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058fb914; end: 1058fbcc7; -[SCPlaybackMediaResourceFetcher fetchMediaResourceForRequest:completion:] */

void FUN_1058fb914(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  uStack_88 = 0x1058fd17c;
  uStack_80 = 0x1058fd18c;
  uStack_78 = 0;
  uVar1 = param_3;
  puStack_98 = &uStack_a0;
  func_0x00010c0c5220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1058fd194;
  puStack_b0 = &UNK_110842b58;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1058fd1cc;
  puStack_d8 = &UNK_11084c9b0;
  puStack_d0 = &uStack_a0;
  puStack_a8 = &uStack_a0;
  func_0x00010c0c1120();
  _objc_release(uVar1);
  lVar7 = puStack_98[5];
  _objc_retain(lVar7);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_3);
  if (lVar7 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126af5d0;
    uVar4 = 1;
    func_0x000107cd11bc(1,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    uVar1 = param_3;
    func_0x00010c0c5220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(0,puVar6);
    (**(code **)(param_4 + 0x10))(param_4,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar8);
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b7fc0;
    _objc_alloc_init();
    _objc_initWeak(&uStack_a0,param_1);
    puStack_130 = puVar5;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1058fbcc8;
    puStack_118 = &UNK_1108a6698;
    _objc_copyWeak(auStack_f8,&uStack_a0);
    _objc_retain(puVar8);
    puStack_110 = puVar8;
    _objc_retain(param_4);
    lStack_100 = param_4;
    _objc_retain(param_3);
    ppuVar2 = &puStack_130;
    uStack_108 = param_3;
    _objc_retainBlock();
    puStack_180 = puVar5;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_1058fbf58;
    puStack_168 = &UNK_1108bed68;
    _objc_retain(puVar8);
    puStack_160 = puVar8;
    _objc_retain(param_3);
    uStack_158 = param_3;
    _objc_retain(param_4);
    uStack_150 = param_1;
    lStack_140 = param_4;
    _objc_retain(lVar7);
    ppuVar3 = &puStack_180;
    lStack_148 = lVar7;
    ppuStack_138 = ppuVar2;
    _objc_retainBlock(ppuVar3);
    func_0x00010be893e0(param_1);
    _objc_retain(puVar8);
    _objc_release(ppuVar3);
    _objc_release(lStack_148);
    _objc_release(lStack_140);
    _objc_release(uStack_158);
    _objc_release(puStack_160);
    _objc_release(ppuVar2);
    _objc_release(uStack_108);
    _objc_release(lStack_100);
    _objc_release(puStack_110);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(&uStack_a0);
  }
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1058fbcc8; end: 1058fbf57;  */

void FUN_1058fbcc8(undefined8 param_1,long param_2,undefined *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      puVar3 = param_3;
      func_0x00010bfcaaa0();
      if (puVar3 == (undefined *)0x0) {
        func_0x00010be13660(lVar1);
        lVar7 = *(long *)(param_2 + 0x30);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126bfe80;
        _objc_alloc(PTR_PTR_1126bfe80);
        puVar6 = *(undefined **)(param_2 + 0x28);
        func_0x00010c0c5220(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029740(param_1,puVar5);
        (**(code **)(lVar7 + 0x10))(lVar7,puVar3,puVar5);
      }
      else {
        puVar3 = param_3;
        func_0x00010bfc79a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x000107cd1204();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar5 = param_3;
        func_0x00010bfcaaa0();
        puVar3 = puVar6;
        if (puVar5 == (undefined *)0x3) {
          puVar3 = (undefined *)0x5;
          func_0x000107cd11e0(5,&PTR____CFConstantStringClassReference_110e0c898,puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar3 == (undefined *)0x0) {
          func_0x00010bfcaaa0(param_3);
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar3 = (undefined *)0x4;
          func_0x000107cd11bc(4,puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
        }
        lVar7 = *(long *)(param_2 + 0x30);
        puVar6 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126bfe80;
        _objc_alloc(PTR_PTR_1126bfe80);
        puVar5 = *(undefined **)(param_2 + 0x28);
        func_0x00010c0c5220(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029740(0,puVar4);
        (**(code **)(lVar7 + 0x10))(lVar7,puVar6,puVar4);
        _objc_release(puVar4);
      }
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058fbf58; end: 1058fc0e7;  */

void FUN_1058fbf58(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af5d0;
    lVar7 = *(long *)(param_1 + 0x40);
    uVar3 = 3;
    func_0x000107cd11bc(3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c5220(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(0,puVar5);
    (**(code **)(lVar7 + 0x10))(lVar7,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = *(undefined **)(param_1 + 0x30);
    func_0x00010c265580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be10960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bef7460(*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1058fc0e8; end: 1058fc27f; -[SCPlaybackMediaResourceFetcher retrieveCacheStatusForRequest:completion:] */

void FUN_1058fc0e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf9d9e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf9d9e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c27ef40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c13e300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be13660(param_2);
  if (param_5 != 0) {
    puVar8 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    uVar2 = param_4;
    func_0x00010c0c5220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(param_1,puVar8);
    (**(code **)(param_5 + 0x10))(param_5,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar2);
  }
  _objc_release(uVar7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058fc280; end: 1058fc31f; -[SCPlaybackMediaResourceFetcher _fetchRatioFromContentResult:request:] */

double FUN_1058fc280(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfcaaa0();
  dVar3 = 0.0;
  if ((lVar1 == 0) && (lVar1 = param_3, func_0x00010bfcb5a0(), 0 < lVar1)) {
    lVar1 = param_4;
    func_0x00010c0c6c20();
    dVar3 = 1.0;
    if (lVar1 == 3) {
      lVar1 = param_3;
      func_0x00010bfc2be0(param_3);
      lVar2 = param_3;
      func_0x00010bfcb5a0(param_3);
      dVar3 = (double)lVar1 / (double)lVar2;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return dVar3;
}



/* Entry: 1058fc320; end: 1058fc45f; -[SCPlaybackMediaResourceFetcher _registerContentWithRequest:completion:] */

void FUN_1058fc320(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c0c6c20();
  lVar3 = param_3;
  func_0x00010c0c5220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1058fc460;
  puStack_78 = &UNK_1108bed98;
  uStack_70 = param_1;
  _objc_retain(param_3);
  lStack_68 = param_3;
  uStack_58 = lVar2 == 3;
  _objc_retain(param_4);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1058fc5f8;
  puStack_b8 = &UNK_1108bedc8;
  uStack_b0 = param_1;
  lStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = lVar2 == 3;
  uStack_60 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c1120(lVar3,param_2,&puStack_90,&puStack_d0);
  _objc_release(lVar3);
  _objc_release(uStack_a0);
  _objc_release(lStack_a8);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058fc460; end: 1058fc793;  */

void FUN_1058fc460(long param_1,undefined8 param_2)

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
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be61f40(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf9d9e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf9d9e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf9c720(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126160(uVar2);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058fc794; end: 1058fcbbf; -[SCPlaybackMediaResourceFetcher _fetchContentWithRequest:requestKey:switchBoardKey:completion:] */

void FUN_1058fc794(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c13e320();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c27cbe0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = param_3;
      func_0x00010bf9d9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c292920();
      _objc_release(puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        func_0x00010be77440(param_1,param_2,param_3,param_4,param_6);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1058fcb7c;
      }
      puVar1 = param_3;
      func_0x00010bf9d9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c135080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = *(undefined **)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_3;
        func_0x00010bf9d9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf4c8a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_3;
        func_0x00010bf9d9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c135080();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c27ef40();
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar3;
        func_0x00010c13e580(puVar3,param_2,puVar2,puVar10,param_5,param_6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      else {
        puVar1 = param_3;
        func_0x00010bf9d9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c135080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar4 = *(undefined **)(param_1 + 8);
        func_0x00010c269d40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_3;
        func_0x00010bf9d9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf4c8a0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126b1378;
        puVar9 = puVar3;
        func_0x00010c11fca0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0c46a0();
        puVar5 = puVar3;
        func_0x00010c27ef40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c11fca0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c27bc40();
        func_0x00010bf6a940(puVar1,param_2,puVar10,puVar5,puVar7,param_5);
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar4;
        func_0x00010c13e5c0(puVar4,param_2,puVar8,puVar1,param_6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar2);
        _objc_release(puVar4);
      }
    }
    else {
      puVar3 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c135080();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar3;
      func_0x00010c13e5c0(puVar3,param_2,puVar2,puVar9,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
  else {
    func_0x00010be96400(param_1,param_2,param_3,param_6);
    param_1 = PTR_PTR_1126b7fc0;
    _objc_alloc_init(PTR_PTR_1126b7fc0);
  }
LAB_1058fcb7c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1058fcbc0; end: 1058fce27; -[SCPlaybackMediaResourceFetcher _prefetchMediaResourceForRequest:requestKey:completion:] */

void FUN_1058fcbc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1058fce28;
  puStack_90 = &UNK_110892920;
  _objc_retain(puVar1);
  puStack_88 = puVar1;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_5);
  ppuVar2 = &puStack_a8;
  uStack_78 = param_5;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c107de0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf0bda0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bef7460(puVar1);
  _objc_retain(puVar1);
  _objc_release(uVar10);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(puStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058fce28; end: 1058fce73;  */

void FUN_1058fce28(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058fce74; end: 1058fcf9f; -[SCPlaybackMediaResourceFetcher _retrieveCachedContentWithRequest:completion:] */

void FUN_1058fce74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c135080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27ef40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c13e300(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  (**(code **)(param_4 + 0x10))(param_4,uVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1058fcfa0; end: 1058fd16f; -[SCPlaybackMediaResourceFetcher _nativeCMRequestFromResolutionRequest:downloadUrl:] */

void FUN_1058fcfa0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf9c720(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(uVar1,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b1058;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_4;
  func_0x00010c0c6c20(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar4,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b360(puVar5,param_3,uVar3,&PTR____CFConstantStringClassReference_110e0c858,puVar6,0
                      ,(long)(param_1 * 60.0 * 60.0 * 24.0));
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058fd170; end: 1058fd193; -[SCPlaybackMediaResourceFetcher .cxx_destruct] */

void FUN_1058fd170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058fd194; end: 1058fd20f;  */

void FUN_1058fd194(long param_1,undefined8 param_2)

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



/* Entry: 1058fd210; end: 1058fd283; -[SCPlaybackMediaResourceLoader initWithMediaResourceFetcher:] */

undefined1 * FUN_1058fd210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ead40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058fd284; end: 1058fd28b; -[SCPlaybackMediaResourceLoader loadResourceForMediaRequest:completion:] */

void FUN_1058fd284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchMediaResourceForRequest_com_1125c7b70);
  return;
}



/* Entry: 1058fd28c; end: 1058fd293; -[SCPlaybackMediaResourceLoader retrieveCacheStatusForRequest:completion:] */

void FUN_1058fd28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_retrieveCacheStatusForRequest_co_11262d2c8);
  return;
}



/* Entry: 1058fd294; end: 1058fd29f; -[SCPlaybackMediaResourceLoader .cxx_destruct] */

void FUN_1058fd294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058fd2a0; end: 1058fd37b; -[SCPlaybackContentLocationResultImpl initWithMediaContextType:contentBundle:contentBundleMetadata:data:] */

undefined1 *
FUN_1058fd2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ead48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1058fd37c; end: 1058fd383; -[SCPlaybackContentLocationResultImpl mediaContextType] */

undefined8 FUN_1058fd37c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1058fd384; end: 1058fd38b; -[SCPlaybackContentLocationResultImpl contentBundle] */

undefined8 FUN_1058fd384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1058fd38c; end: 1058fd393; -[SCPlaybackContentLocationResultImpl contentBundleMetadata] */

undefined8 FUN_1058fd38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1058fd394; end: 1058fd39b; -[SCPlaybackContentLocationResultImpl data] */

undefined8 FUN_1058fd394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1058fd39c; end: 1058fd3d7; -[SCPlaybackContentLocationResultImpl .cxx_destruct] */

void FUN_1058fd39c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1058fd3d8; end: 1058fd3ff; -[SCPlaybackSingleMediaResolutionResultImpl initWithMediaType:mediaContextType:containerLayerType:contentResult:] */

void FUN_1058fd3d8(void)

{
  func_0x00010be3ad60();
  return;
}



/* Entry: 1058fd400; end: 1058fd42b; -[SCPlaybackSingleMediaResolutionResultImpl initWithMediaType:mediaContextType:containerLayerType:url:] */

void FUN_1058fd400(void)

{
  func_0x00010be3ad60();
  return;
}



/* Entry: 1058fd42c; end: 1058fd4f3; -[SCPlaybackSingleMediaResolutionResultImpl initWithMediaType:mediaContextType:containerLayerType:contentResult:zipEntryName:] */

undefined1 *
FUN_1058fd42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ead50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 3;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1058fd4f4; end: 1058fd51f; -[SCPlaybackSingleMediaResolutionResultImpl initWithMediaType:mediaContextType:containerLayerType:contentLocationResult:] */

void FUN_1058fd4f4(void)

{
  func_0x00010be3ad60();
  return;
}



/* Entry: 1058fd520; end: 1058fd54b; -[SCPlaybackSingleMediaResolutionResultImpl initWithMediaType:mediaContextType:containerLayerType:error:] */

void FUN_1058fd520(void)

{
  func_0x00010be3ad60();
  return;
}



/* Entry: 1058fd54c; end: 1058fd69b; -[SCPlaybackSingleMediaResolutionResultImpl _initWithMediaType:mediaContextType:containerLayerType:contentResult:url:contentLocationResult:error:] */

undefined1 *
FUN_1058fd54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ead50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 0x28) == 0) {
      if (*(long *)((long)puVar1 + 0x38) != 0) {
        *(undefined8 *)((long)puVar1 + 0x20) = 0;
        goto LAB_1058fd644;
      }
      if (*(long *)((long)puVar1 + 0x30) == 0) {
        uVar2 = 4;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
LAB_1058fd644:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1058fd69c; end: 1058fd6a3; -[SCPlaybackSingleMediaResolutionResultImpl mediaType] */

undefined8 FUN_1058fd69c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1058fd6a4; end: 1058fd6ab; -[SCPlaybackSingleMediaResolutionResultImpl mediaContextType] */

undefined8 FUN_1058fd6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1058fd6ac; end: 1058fd6b3; -[SCPlaybackSingleMediaResolutionResultImpl containerLayerType] */

undefined8 FUN_1058fd6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1058fd6b4; end: 1058fd6db; -[SCPlaybackSingleMediaResolutionResultImpl contentResult] */

void FUN_1058fd6b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058fd6dc; end: 1058fd8ab; -[SCPlaybackSingleMediaResolutionResultImpl matchUrl:contentResult:contentLocation:error:] */

void FUN_1058fd6dc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      if (param_3 == 0) goto LAB_1058fd874;
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      pcVar6 = *(code **)(param_3 + 0x10);
      lVar5 = param_3;
    }
    else {
      if ((lVar5 != 1) || (param_4 == 0)) goto LAB_1058fd874;
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      pcVar6 = *(code **)(param_4 + 0x10);
      lVar5 = param_4;
    }
  }
  else if (lVar5 == 2) {
    if (param_5 == 0) goto LAB_1058fd874;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    pcVar6 = *(code **)(param_5 + 0x10);
    lVar5 = param_5;
  }
  else {
    if (lVar5 == 3) {
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010bfcc500();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        if (param_6 != 0) {
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = (undefined *)0xb;
          func_0x000107cd11bc(0xb,puVar1);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = *(code **)(param_6 + 0x10);
          lVar3 = param_6;
          goto LAB_1058fd854;
        }
      }
      else if (param_3 != 0) {
        puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = *(code **)(param_3 + 0x10);
        lVar3 = param_3;
LAB_1058fd854:
        (*pcVar6)(lVar3,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      _objc_release(lVar5);
      goto LAB_1058fd874;
    }
    if ((lVar5 != 4) || (param_6 == 0)) goto LAB_1058fd874;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    pcVar6 = *(code **)(param_6 + 0x10);
    lVar5 = param_6;
  }
  (*pcVar6)(lVar5,uVar4);
LAB_1058fd874:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058fd8ac; end: 1058fd8ff; -[SCPlaybackSingleMediaResolutionResultImpl .cxx_destruct] */

void FUN_1058fd8ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1058fd900; end: 1058fd973; -[SCGrapheneVideoSuperResolutionMetric2 init] */

undefined1 * FUN_1058fd900(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ead58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058fd974; end: 1058fdba3;  */

/* WARNING: Removing unreachable block (ram,0x0001058fe1d0) */
/* WARNING: Removing unreachable block (ram,0x0001058fe490) */

char * FUN_1058fd974(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  char *unaff_x24;
  char *pcStack_410;
  undefined *puStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3d8 [24];
  char *pcStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  undefined8 auStack_260 [3];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar9 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar15 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar9 = acStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    puVar15 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1058fdba4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar9;
  pcVar12 = pcVar4;
  puStack_e0 = (undefined8 *)unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar15;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  puVar15 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar8 = "";
    unaff_x23 = acStack_138;
    pcVar10 = acStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar13 = 0;
    puVar15 = auStack_118;
    pcVar12 = pcVar4;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar3 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_1c0;
  pcStack_148 = FUN_1058fddd4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar5 = pcVar10;
  puStack_180 = (undefined8 *)unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar15;
  pcStack_168 = pcVar4;
  pcStack_160 = pcVar9;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
    pcVar2 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar5 = pcVar11;
    pcVar12 = pcVar10;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar5 = pcVar11;
      pcVar12 = pcVar10;
    }
  }
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar3 = acStack_280;
  pcStack_1c8 = FUN_1058fdf48;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar4 = pcVar5;
  pcVar8 = pcVar12;
  pcVar10 = param_5;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  _objc_retain(pcVar12);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_260,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_248,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_230,pcVar1);
    acStack_280[0] = '\0';
    acStack_280[1] = '\0';
    acStack_280[2] = '\0';
    acStack_280[3] = '\0';
    acStack_280[4] = '\0';
    acStack_280[5] = '\0';
    acStack_280[6] = '\0';
    acStack_280[7] = '\0';
    acStack_280[8] = '\0';
    acStack_280[9] = '\0';
    acStack_280[10] = '\0';
    acStack_280[0xb] = '\0';
    acStack_280[0xc] = '\0';
    acStack_280[0xd] = '\0';
    acStack_280[0xe] = '\0';
    acStack_280[0xf] = '\0';
    acStack_280[0x10] = '\0';
    acStack_280[0x11] = '\0';
    acStack_280[0x12] = '\0';
    acStack_280[0x13] = '\0';
    acStack_280[0x14] = '\0';
    acStack_280[0x15] = '\0';
    acStack_280[0x16] = '\0';
    acStack_280[0x17] = '\0';
    func_0x00010007e1e8(acStack_280,auStack_260,&lStack_218,3);
    pcVar9 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_268 = acStack_280;
    func_0x00010007e5dc(&puStack_268);
    lVar13 = 0;
    pcVar4 = pcVar3;
    pcVar8 = param_5;
    do {
      if ((&cStack_219)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_280;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_260);
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar5 = acStack_340;
  pcStack_288 = FUN_1058fe208;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar9;
  pcVar3 = pcVar4;
  pcVar12 = pcVar8;
  pppuStack_290 = &pppuStack_1d0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_320,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_308,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_2f0,pcVar1);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x00010007e1e8(acStack_340,auStack_320,&lStack_2d8,3);
    pcVar2 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108bef38,acStack_340,pcVar10);
    puStack_328 = acStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar13 = 0;
    pcVar3 = pcVar5;
    pcVar12 = pcVar10;
    do {
      if ((&cStack_2d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_340;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  puStack_378 = auStack_320;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_378);
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  _objc_release(pcVar9);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_348 = FUN_1058fe4c8;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar3;
  puStack_380 = (undefined8 *)unaff_x24;
  pcStack_370 = pcVar1;
  pcStack_368 = pcVar8;
  pcStack_360 = pcVar4;
  pcStack_358 = pcVar9;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_3b8,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_3a0,pcVar1);
    acStack_3d8[0] = '\0';
    acStack_3d8[1] = '\0';
    acStack_3d8[2] = '\0';
    acStack_3d8[3] = '\0';
    acStack_3d8[4] = '\0';
    acStack_3d8[5] = '\0';
    acStack_3d8[6] = '\0';
    acStack_3d8[7] = '\0';
    acStack_3d8[8] = '\0';
    acStack_3d8[9] = '\0';
    acStack_3d8[10] = '\0';
    acStack_3d8[0xb] = '\0';
    acStack_3d8[0xc] = '\0';
    acStack_3d8[0xd] = '\0';
    acStack_3d8[0xe] = '\0';
    acStack_3d8[0xf] = '\0';
    acStack_3d8[0x10] = '\0';
    acStack_3d8[0x11] = '\0';
    acStack_3d8[0x12] = '\0';
    acStack_3d8[0x13] = '\0';
    acStack_3d8[0x14] = '\0';
    acStack_3d8[0x15] = '\0';
    acStack_3d8[0x16] = '\0';
    acStack_3d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3d8,auStack_3b8,&lStack_388,2);
    pcVar10 = acStack_3d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108bef88,pcVar10,pcVar12);
    pcStack_3c0 = acStack_3d8;
    func_0x00010007e5dc(&pcStack_3c0);
    lVar13 = 0;
    do {
      if ((&cStack_389)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_3a1 < '\0') {
      __ZdlPv(auStack_3b8[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    __Unwind_Resume();
    ppcVar6 = &pcStack_410;
    pcStack_3e8 = FUN_1058fe6f8;
    pcStack_400 = pcVar3;
    pcStack_3f8 = pcVar2;
    pppuStack_3f0 = &pppuStack_350;
    _objc_retain(pcVar10);
    puStack_408 = PTR_PTR_1126ead60;
    pcStack_410 = pcVar1;
    _objc_msgSendSuper2(&pcStack_410,PTR_s_init_1125d9248);
    if (ppcVar6 != (char **)0x0) {
      _objc_retain(pcVar10);
      uVar7 = *(undefined8 *)((long)ppcVar6 + 8);
      *(char **)((long)ppcVar6 + 8) = pcVar10;
      _objc_release(uVar7);
    }
    _objc_release(pcVar10);
    return (char *)ppcVar6;
  }
  return pcVar1;
}



/* Entry: 1058fdba4; end: 1058fddd3;  */

/* WARNING: Removing unreachable block (ram,0x0001058fe1d0) */
/* WARNING: Removing unreachable block (ram,0x0001058fe490) */

char * FUN_1058fdba4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  char *unaff_x24;
  char *pcStack_370;
  undefined *puStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [3];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar11 = acStack_120;
  pcStack_a8 = FUN_1058fddd4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar10 = pcVar5;
  puStack_e0 = (undefined8 *)unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar9 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar10 = pcVar11;
    pcVar4 = pcVar5;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar10 = pcVar11;
      pcVar4 = pcVar5;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar6 = acStack_1e0;
  pcStack_128 = FUN_1058fdf48;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar2 = pcVar10;
  pcVar3 = pcVar4;
  pcVar11 = param_5;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar10);
  _objc_retain(pcVar4);
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1c0,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1a8,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_190,pcVar1);
    acStack_1e0[0] = '\0';
    acStack_1e0[1] = '\0';
    acStack_1e0[2] = '\0';
    acStack_1e0[3] = '\0';
    acStack_1e0[4] = '\0';
    acStack_1e0[5] = '\0';
    acStack_1e0[6] = '\0';
    acStack_1e0[7] = '\0';
    acStack_1e0[8] = '\0';
    acStack_1e0[9] = '\0';
    acStack_1e0[10] = '\0';
    acStack_1e0[0xb] = '\0';
    acStack_1e0[0xc] = '\0';
    acStack_1e0[0xd] = '\0';
    acStack_1e0[0xe] = '\0';
    acStack_1e0[0xf] = '\0';
    acStack_1e0[0x10] = '\0';
    acStack_1e0[0x11] = '\0';
    acStack_1e0[0x12] = '\0';
    acStack_1e0[0x13] = '\0';
    acStack_1e0[0x14] = '\0';
    acStack_1e0[0x15] = '\0';
    acStack_1e0[0x16] = '\0';
    acStack_1e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1e0,auStack_1c0,&lStack_178,3);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_1c8 = acStack_1e0;
    func_0x00010007e5dc(&puStack_1c8);
    lVar12 = 0;
    pcVar2 = pcVar6;
    pcVar3 = param_5;
    do {
      if ((&cStack_179)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_1e0;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar10);
  pcVar5 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_1c0);
  _objc_release(pcVar4);
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  __Unwind_Resume();
  pcVar6 = acStack_2a0;
  pcStack_1e8 = FUN_1058fe208;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar9 = pcVar2;
  pcVar10 = pcVar3;
  pppuStack_1f0 = &ppuStack_130;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_280,pcVar5);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar5 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_268,pcVar5);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar5 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_250,pcVar5);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_238,3);
    pcVar4 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bef38,acStack_2a0,pcVar11);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    lVar12 = 0;
    pcVar9 = pcVar6;
    pcVar10 = pcVar11;
    do {
      if ((&cStack_239)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_2a0;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  puStack_2d8 = auStack_280;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_2d8);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1058fe4c8;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar9;
  puStack_2e0 = (undefined8 *)unaff_x24;
  pcStack_2d0 = pcVar5;
  pcStack_2c8 = pcVar3;
  pcStack_2c0 = pcVar2;
  pcStack_2b8 = pcVar1;
  pppuStack_2b0 = &pppuStack_1f0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar9);
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_318,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
    pcVar11 = acStack_338;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bef88,pcVar11,pcVar10);
    pcStack_320 = acStack_338;
    func_0x00010007e5dc(&pcStack_320);
    lVar12 = 0;
    do {
      if ((&cStack_2e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar4);
    __Unwind_Resume();
    ppcVar7 = &pcStack_370;
    pcStack_348 = FUN_1058fe6f8;
    pcStack_360 = pcVar9;
    pcStack_358 = pcVar4;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain(pcVar11);
    puStack_368 = PTR_PTR_1126ead60;
    pcStack_370 = pcVar1;
    _objc_msgSendSuper2(&pcStack_370,PTR_s_init_1125d9248);
    if (ppcVar7 != (char **)0x0) {
      _objc_retain(pcVar11);
      uVar8 = *(undefined8 *)((long)ppcVar7 + 8);
      *(char **)((long)ppcVar7 + 8) = pcVar11;
      _objc_release(uVar8);
    }
    _objc_release(pcVar11);
    return (char *)ppcVar7;
  }
  return pcVar1;
}



/* Entry: 1058fddd4; end: 1058fdf47;  */

/* WARNING: Removing unreachable block (ram,0x0001058fe1d0) */
/* WARNING: Removing unreachable block (ram,0x0001058fe490) */

char * FUN_1058fddd4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  char *unaff_x24;
  char *pcStack_2d0;
  undefined *puStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar7 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar7 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_140;
  pcStack_88 = FUN_1058fdf48;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar11 = param_4;
  pcVar10 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(param_4);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_120,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_108,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,pcVar2);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,auStack_120,&lStack_d8,3);
    pcVar6 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar13 = 0;
    pcVar8 = pcVar9;
    pcVar11 = param_5;
    do {
      if ((&cStack_d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_140;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_120);
    _objc_release(param_4);
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar3 = acStack_200;
    pcStack_148 = FUN_1058fe208;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    pcVar7 = pcVar8;
    pcVar9 = pcVar11;
    ppuStack_150 = &puStack_90;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    _objc_retain(pcVar11);
    if (pcVar2 != (char *)0x0) {
      plVar12 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1e0,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1c8,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_1b0,pcVar1);
      acStack_200[0] = '\0';
      acStack_200[1] = '\0';
      acStack_200[2] = '\0';
      acStack_200[3] = '\0';
      acStack_200[4] = '\0';
      acStack_200[5] = '\0';
      acStack_200[6] = '\0';
      acStack_200[7] = '\0';
      acStack_200[8] = '\0';
      acStack_200[9] = '\0';
      acStack_200[10] = '\0';
      acStack_200[0xb] = '\0';
      acStack_200[0xc] = '\0';
      acStack_200[0xd] = '\0';
      acStack_200[0xe] = '\0';
      acStack_200[0xf] = '\0';
      acStack_200[0x10] = '\0';
      acStack_200[0x11] = '\0';
      acStack_200[0x12] = '\0';
      acStack_200[0x13] = '\0';
      acStack_200[0x14] = '\0';
      acStack_200[0x15] = '\0';
      acStack_200[0x16] = '\0';
      acStack_200[0x17] = '\0';
      func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_198,3);
      pcVar1 = "";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108bef38,acStack_200,pcVar10);
      puStack_1e8 = acStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar13 = 0;
      pcVar7 = pcVar3;
      pcVar9 = pcVar10;
      do {
        if ((&cStack_199)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        unaff_x24 = acStack_200;
      } while (lVar13 != -0x48);
    }
    _objc_release(pcVar11);
    _objc_release(pcVar8);
    pcVar2 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(pcVar11);
      puStack_238 = auStack_1e0;
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != puStack_238);
      _objc_release(pcVar11);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      pcVar3 = pcVar2;
      __Unwind_Resume();
      pcStack_208 = FUN_1058fe4c8;
      lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar7;
      puStack_240 = unaff_x24;
      pcStack_230 = pcVar2;
      pcStack_228 = pcVar11;
      pcStack_220 = pcVar8;
      pcStack_218 = pcVar6;
      pppuStack_210 = &ppuStack_150;
      _objc_retain(pcVar1);
      _objc_retain(pcVar7);
      if (pcVar3 != (char *)0x0) {
        plVar12 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_278,pcVar2);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar2 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_260,pcVar2);
        acStack_298[0] = '\0';
        acStack_298[1] = '\0';
        acStack_298[2] = '\0';
        acStack_298[3] = '\0';
        acStack_298[4] = '\0';
        acStack_298[5] = '\0';
        acStack_298[6] = '\0';
        acStack_298[7] = '\0';
        acStack_298[8] = '\0';
        acStack_298[9] = '\0';
        acStack_298[10] = '\0';
        acStack_298[0xb] = '\0';
        acStack_298[0xc] = '\0';
        acStack_298[0xd] = '\0';
        acStack_298[0xe] = '\0';
        acStack_298[0xf] = '\0';
        acStack_298[0x10] = '\0';
        acStack_298[0x11] = '\0';
        acStack_298[0x12] = '\0';
        acStack_298[0x13] = '\0';
        acStack_298[0x14] = '\0';
        acStack_298[0x15] = '\0';
        acStack_298[0x16] = '\0';
        acStack_298[0x17] = '\0';
        func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
        pcVar10 = acStack_298;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108bef88,pcVar10,pcVar9);
        pcStack_280 = acStack_298;
        func_0x00010007e5dc(&pcStack_280);
        lVar13 = 0;
        do {
          if ((&cStack_249)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(pcVar7);
      pcVar2 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        if (cStack_261 < '\0') {
          __ZdlPv(auStack_278[0]);
        }
        _objc_release(pcVar7);
        _objc_release(pcVar1);
        __Unwind_Resume();
        ppcVar4 = &pcStack_2d0;
        pcStack_2a8 = FUN_1058fe6f8;
        pcStack_2c0 = pcVar7;
        pcStack_2b8 = pcVar1;
        pppuStack_2b0 = &pppuStack_210;
        _objc_retain(pcVar10);
        puStack_2c8 = PTR_PTR_1126ead60;
        pcStack_2d0 = pcVar2;
        _objc_msgSendSuper2(&pcStack_2d0,PTR_s_init_1125d9248);
        if (ppcVar4 != (char **)0x0) {
          _objc_retain(pcVar10);
          uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
          *(char **)((long)ppcVar4 + 8) = pcVar10;
          _objc_release(uVar5);
        }
        _objc_release(pcVar10);
        return (char *)ppcVar4;
      }
      return pcVar2;
    }
    return pcVar2;
  }
  return pcVar2;
}



/* Entry: 1058fdf48; end: 1058fe207;  */

/* WARNING: Removing unreachable block (ram,0x0001058fe1d0) */
/* WARNING: Removing unreachable block (ram,0x0001058fe490) */

char * FUN_1058fdf48(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  char *unaff_x24;
  char *pcStack_250;
  undefined *puStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar8 = param_3;
  pcVar10 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    pcVar8 = pcVar2;
    pcVar10 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar4 = acStack_180;
  pcStack_c8 = FUN_1058fe208;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar8;
  pcVar11 = pcVar10;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar7 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bef38,acStack_180,pcVar3);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar12 = 0;
    pcVar9 = pcVar4;
    pcVar11 = pcVar3;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    puStack_1b8 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_1b8);
    _objc_release(pcVar10);
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_188 = FUN_1058fe4c8;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    puStack_1c0 = unaff_x24;
    pcStack_1b0 = pcVar3;
    pcStack_1a8 = pcVar10;
    pcStack_1a0 = pcVar8;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar9);
    if (pcVar4 != (char *)0x0) {
      plVar13 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1f8,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_1e0,pcVar1);
      acStack_218[0] = '\0';
      acStack_218[1] = '\0';
      acStack_218[2] = '\0';
      acStack_218[3] = '\0';
      acStack_218[4] = '\0';
      acStack_218[5] = '\0';
      acStack_218[6] = '\0';
      acStack_218[7] = '\0';
      acStack_218[8] = '\0';
      acStack_218[9] = '\0';
      acStack_218[10] = '\0';
      acStack_218[0xb] = '\0';
      acStack_218[0xc] = '\0';
      acStack_218[0xd] = '\0';
      acStack_218[0xe] = '\0';
      acStack_218[0xf] = '\0';
      acStack_218[0x10] = '\0';
      acStack_218[0x11] = '\0';
      acStack_218[0x12] = '\0';
      acStack_218[0x13] = '\0';
      acStack_218[0x14] = '\0';
      acStack_218[0x15] = '\0';
      acStack_218[0x16] = '\0';
      acStack_218[0x17] = '\0';
      func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
      pcVar2 = acStack_218;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bef88,pcVar2,pcVar11);
      pcStack_200 = acStack_218;
      func_0x00010007e5dc(&pcStack_200);
      lVar12 = 0;
      do {
        if ((&cStack_1c9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar9);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      if (cStack_1e1 < '\0') {
        __ZdlPv(auStack_1f8[0]);
      }
      _objc_release(pcVar9);
      _objc_release(pcVar7);
      __Unwind_Resume();
      ppcVar5 = &pcStack_250;
      pcStack_228 = FUN_1058fe6f8;
      pcStack_240 = pcVar9;
      pcStack_238 = pcVar7;
      pppuStack_230 = &ppuStack_190;
      _objc_retain(pcVar2);
      puStack_248 = PTR_PTR_1126ead60;
      pcStack_250 = pcVar1;
      _objc_msgSendSuper2(&pcStack_250,PTR_s_init_1125d9248);
      if (ppcVar5 != (char **)0x0) {
        _objc_retain(pcVar2);
        uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
        *(char **)((long)ppcVar5 + 8) = pcVar2;
        _objc_release(uVar6);
      }
      _objc_release(pcVar2);
      return (char *)ppcVar5;
    }
    return pcVar1;
  }
  return pcVar3;
}



/* Entry: 1058fe208; end: 1058fe4c7;  */

/* WARNING: Removing unreachable block (ram,0x0001058fe490) */

char * FUN_1058fe208(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *unaff_x24;
  char *pcStack_190;
  undefined *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108bef38,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    pcVar7 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1058fe4c8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar8 = acStack_158;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108bef88,pcVar8,pcVar4);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar9 = 0;
    do {
      if ((&cStack_109)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    __Unwind_Resume();
    ppcVar5 = &pcStack_190;
    pcStack_168 = FUN_1058fe6f8;
    pcStack_180 = pcVar7;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar8);
    puStack_188 = PTR_PTR_1126ead60;
    pcStack_190 = pcVar4;
    _objc_msgSendSuper2(&pcStack_190,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      _objc_retain(pcVar8);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
      *(char **)((long)ppcVar5 + 8) = pcVar8;
      _objc_release(uVar6);
    }
    _objc_release(pcVar8);
    return (char *)ppcVar5;
  }
  return pcVar4;
}



/* Entry: 1058fe4c8; end: 1058fe6f7;  */

char * FUN_1058fe4c8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108bef88,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar3 = &pcStack_d0;
  pcStack_a8 = FUN_1058fe6f8;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puStack_c8 = PTR_PTR_1126ead60;
  pcStack_d0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(char **)((long)ppcVar3 + 8) = pcVar1;
    _objc_release(uVar4);
  }
  _objc_release(pcVar1);
  return (char *)ppcVar3;
}



/* Entry: 1058fe6f8; end: 1058fe76b; -[SCPercMLCoreMLModelImplementation initWithCoreMLModel:] */

undefined1 * FUN_1058fe6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ead60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058fe76c; end: 1058fe7df; -[SCPercMLCoreMLModelImplementation predictionFromFeatures:error:] */

void FUN_1058fe76c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf52360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058fe7e0; end: 1058fe86b; -[SCPercMLCoreMLModelImplementation predictionFromFeatures:options:error:] */

void FUN_1058fe7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf52360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058fe86c; end: 1058fe873; -[SCPercMLCoreMLModelImplementation coreMLModel] */

undefined8 FUN_1058fe86c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1058fe874; end: 1058fe87f; -[SCPercMLCoreMLModelImplementation .cxx_destruct] */

void FUN_1058fe874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058fe880; end: 1058fe8f3; -[SCPercMLSnapMLModelImplementation initWithSnapMLModel:] */

undefined1 * FUN_1058fe880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ead68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058fe8f4; end: 1058fe967; -[SCPercMLSnapMLModelImplementation predictionFromFeatures:error:] */

void FUN_1058fe8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c241de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058fe968; end: 1058fe9f3; -[SCPercMLSnapMLModelImplementation predictionFromFeatures:options:error:] */

void FUN_1058fe968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c241de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058fe9f4; end: 1058fe9fb; -[SCPercMLSnapMLModelImplementation snapMLModel] */

undefined8 FUN_1058fe9f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1058fe9fc; end: 1058fea07; -[SCPercMLSnapMLModelImplementation .cxx_destruct] */

void FUN_1058fe9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058fea08; end: 1058feacf; +[SCPercMLSnapMLModelPreloader loadModel:cacheDirectory:inferenceMode:error:] */

void FUN_1058fea08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bff30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c012d20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126bff38;
  func_0x00010c09b580(PTR_PTR_1126bff38,param_2,puVar1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126bff40;
  _objc_alloc(PTR_PTR_1126bff40);
  func_0x00010c0481e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058fead0; end: 1058feb1b; +[SCPercMLSnapMLModelPreloader wrapModel:] */

void FUN_1058fead0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bff48;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c005ce0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058feb1c; end: 1058feba7; +[SCPMDRDeliverableModelHandle descriptor] */

undefined * FUN_1058feb1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7a700,
                        &PTR____CFConstantStringClassReference_110e0c918,&PTR_DAT_11310c610,
                        &PTR_s_modelId_11310c648,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c14a0 = puVar1;
  }
  return puRam00000001136c14a0;
}



/* Entry: 1058feba8; end: 1058fec8b; +[SCPMDRModelDeliveryConfig descriptor] */

void FUN_1058feba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7a750,
                        &PTR____CFConstantStringClassReference_110e0c938,&PTR_DAT_11310c610,
                        &PTR_DAT_11310c628,1,0x10,0x1c);
    puRam00000001136c14a8 = puVar1;
  }
  return;
}



/* Entry: 1058fec8c; end: 1058fec97;  */

bool FUN_1058fec8c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1058fec98; end: 1058fecff; +[SCPMDRFastDNNDeliverableModel descriptor] */

void FUN_1058fec98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aa48,
                        &PTR____CFConstantStringClassReference_110e0c978,&PTR_DAT_11310c6c0,
                        &PTR_s_identifier_11310c6d8,2,0x18,0x1c);
    puRam00000001136c14b8 = puVar1;
  }
  return;
}



/* Entry: 1058fed00; end: 1058fed83; +[SCPMDRFastDNNDeliverableModel_Identifier descriptor] */

undefined * FUN_1058fed00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aa70,
                        &PTR____CFConstantStringClassReference_110db4bb8,&PTR_DAT_11310c6c0,
                        &PTR_DAT_11310c978,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c14c0 = puVar1;
  }
  return puRam00000001136c14c0;
}



/* Entry: 1058fed84; end: 1058fedeb; +[SCPMDRSnapScanDeliverableModel descriptor] */

void FUN_1058fed84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aa98,
                        &PTR____CFConstantStringClassReference_110e0c998,&PTR_DAT_11310c6c0,
                        &PTR_s_identifier_11310c718,2,0x18,0x1c);
    puRam00000001136c14c8 = puVar1;
  }
  return;
}



/* Entry: 1058fedec; end: 1058fee6f; +[SCPMDRSnapScanDeliverableModel_Identifier descriptor] */

undefined * FUN_1058fedec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aac0,
                        &PTR____CFConstantStringClassReference_110db4bb8,&PTR_DAT_11310c6c0,
                        &PTR_DAT_11310c858,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c14d0 = puVar1;
  }
  return puRam00000001136c14d0;
}



/* Entry: 1058fee70; end: 1058feed7; +[SCPMDRVisionDeliverableModel descriptor] */

void FUN_1058fee70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aae8,
                        &PTR____CFConstantStringClassReference_110e0c9b8,&PTR_DAT_11310c6c0,
                        &PTR_s_identifier_11310c758,2,0x18,0x1c);
    puRam00000001136c14d8 = puVar1;
  }
  return;
}



/* Entry: 1058feed8; end: 1058fef5b; +[SCPMDRVisionDeliverableModel_Identifier descriptor] */

undefined * FUN_1058feed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ab10,
                        &PTR____CFConstantStringClassReference_110db4bb8,&PTR_DAT_11310c6c0,
                        &PTR_DAT_11310c9f8,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c14e0 = puVar1;
  }
  return puRam00000001136c14e0;
}



/* Entry: 1058fef5c; end: 1058fefc3; +[SCPMDRPercGraphDeliverableModel descriptor] */

void FUN_1058fef5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ab38,
                        &PTR____CFConstantStringClassReference_110e0c9d8,&PTR_DAT_11310c6c0,
                        &PTR_s_identifier_11310c798,2,0x18,0x1c);
    puRam00000001136c14e8 = puVar1;
  }
  return;
}



/* Entry: 1058fefc4; end: 1058ff047; +[SCPMDRPercGraphDeliverableModel_Identifier descriptor] */

undefined * FUN_1058fefc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ab60,
                        &PTR____CFConstantStringClassReference_110db4bb8,&PTR_DAT_11310c6c0,
                        &PTR_DAT_11310c8b8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c14f0 = puVar1;
  }
  return puRam00000001136c14f0;
}



/* Entry: 1058ff048; end: 1058ff0af; +[SCPMDRImageClassificationMetadata descriptor] */

void FUN_1058ff048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c14f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ab88,
                        &PTR____CFConstantStringClassReference_110e0c9f8,&PTR_DAT_11310c6c0,
                        &PTR_DAT_11310ca78,4,0x20,0x1c);
    puRam00000001136c14f8 = puVar1;
  }
  return;
}



/* Entry: 1058ff0b0; end: 1058ff133; +[SCPMDRImageClassificationMetadata_ScorePropagation descriptor] */

undefined * FUN_1058ff0b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1500 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7abb0,
                        &PTR____CFConstantStringClassReference_110e0ca18,&PTR_DAT_11310c6c0,
                        &PTR_DAT_11310c7d8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c1500 = puVar1;
  }
  return puRam00000001136c1500;
}



/* Entry: 1058ff134; end: 1058ff1bf; +[SCPMDRDeliverableModel descriptor] */

undefined * FUN_1058ff134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7a980,
                        &PTR____CFConstantStringClassReference_110e0ca38,&PTR_DAT_11310c6c0,
                        &PTR_DAT_11310caf8,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001136c1508 = puVar1;
  }
  return puRam00000001136c1508;
}



/* Entry: 1058ff1c0; end: 1058ff23b; +[SCPMDRBoltRegisteredModelReference descriptor] */

undefined * FUN_1058ff1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7a9d0,
                        &PTR____CFConstantStringClassReference_110e0ca58,&PTR_DAT_11310c6c0,
                        &PTR_s_contentObject_11310c818,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1510 = puVar1;
  }
  return puRam00000001136c1510;
}



/* Entry: 1058ff23c; end: 1058ff2c7; +[SCPMDRRegisteredModelReference descriptor] */

undefined * FUN_1058ff23c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aa20,
                        &PTR____CFConstantStringClassReference_110e0ca78,&PTR_DAT_11310c6c0,
                        &PTR_s_id_p_11310c918,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c1518 = puVar1;
  }
  return puRam00000001136c1518;
}



/* Entry: 1058ff2c8; end: 1058ff343;  */

undefined * FUN_1058ff2c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1520 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0ca98,
                        &UNK_10ddc17dc,&UNK_10ddc183c,7,FUN_1058ff344,0);
    do {
      if (puRam00000001136c1520 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1520;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1520,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1520 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1520;
}



/* Entry: 1058ff344; end: 1058ff363;  */

uint FUN_1058ff344(ulong param_1)

{
  return (uint)((uint)param_1 < 0x21) & (uint)(0x100010117 >> (param_1 & 0x3f));
}



/* Entry: 1058ff364; end: 1058ff3df;  */

undefined * FUN_1058ff364(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1528 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0cab8,
                        &UNK_10ddc1858,&UNK_10ddc189c,3,FUN_1058ff3e0,0);
    do {
      if (puRam00000001136c1528 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1528;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1528,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1528 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1528;
}



/* Entry: 1058ff3e0; end: 1058ff3eb;  */

bool FUN_1058ff3e0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1058ff3ec; end: 1058ff453; +[SCPFDModel descriptor] */

void FUN_1058ff3ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ac50,
                        &PTR____CFConstantStringClassReference_110e0cad8,&PTR_DAT_11310cbd8,
                        &PTR_DAT_11310cd30,6,0x28,0x1c);
    puRam00000001136c1530 = puVar1;
  }
  return;
}



/* Entry: 1058ff454; end: 1058ff4cf; +[SCPFDModel_TensorShape descriptor] */

undefined * FUN_1058ff454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aca0,
                        &PTR____CFConstantStringClassReference_110e0caf8,&PTR_DAT_11310cbd8,
                        &PTR_DAT_11310cc10,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001136c1538 = puVar1;
  }
  return puRam00000001136c1538;
}



/* Entry: 1058ff4d0; end: 1058ff54b; +[SCPFDModel_TensorDefinition descriptor] */

undefined * FUN_1058ff4d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7acf0,
                        &PTR____CFConstantStringClassReference_110e0cb18,&PTR_DAT_11310cbd8,
                        &PTR_DAT_11310cbf0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c1540 = puVar1;
  }
  return puRam00000001136c1540;
}



/* Entry: 1058ff54c; end: 1058ff643; +[SCPFDModel_Options descriptor] */

undefined * FUN_1058ff54c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ad40,
                        &PTR____CFConstantStringClassReference_110e0cb38,&PTR_DAT_11310cbd8,
                        &PTR_DAT_11310cc90,5,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c1548 = puVar1;
  }
  return puRam00000001136c1548;
}



/* Entry: 1058ff644; end: 1058ff64f;  */

bool FUN_1058ff644(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1058ff650; end: 1058ff6df;  */

undefined * FUN_1058ff650(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1558 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0cb78,
                        &UNK_10ddc18dc,&UNK_10ddc1a20,0x12,FUN_1058ff6e0,0,&UNK_10ddc1a68);
    do {
      if (puRam00000001136c1558 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1558;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1558,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1558 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1558;
}



/* Entry: 1058ff6e0; end: 1058ff6eb;  */

bool FUN_1058ff6e0(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 1058ff6ec; end: 1058ff753; +[SCPVNDetectBarcodesRequestMetadata descriptor] */

void FUN_1058ff6ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ade0,
                        &PTR____CFConstantStringClassReference_110e0cb98,&PTR_DAT_11310cdf8,
                        &PTR_DAT_11310ce10,1,0x10,0x1c);
    puRam00000001136c1560 = puVar1;
  }
  return;
}



/* Entry: 1058ff754; end: 1058ff7df; +[SCPVNModel descriptor] */

undefined * FUN_1058ff754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ae30,
                        &PTR____CFConstantStringClassReference_110e0cad8,&PTR_DAT_11310cdf8,
                        &PTR_DAT_11310ce30,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c1568 = puVar1;
  }
  return puRam00000001136c1568;
}



/* Entry: 1058ff7e0; end: 1058ff86f;  */

undefined * FUN_1058ff7e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1570 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0cbb8,
                        &UNK_10ddc1a7c,&UNK_10ddc1ab8,3,FUN_1058ff870,0,&UNK_10ddc1ac4);
    do {
      if (puRam00000001136c1570 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1570;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1570,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1570 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1570;
}



/* Entry: 1058ff870; end: 1058ff87b;  */

bool FUN_1058ff870(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1058ff87c; end: 1058ff8e3; +[SCPSSSnapcodeDetectionMetadata descriptor] */

void FUN_1058ff87c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7aed0,
                        &PTR____CFConstantStringClassReference_110e0cbd8,&PTR_DAT_11310ce78,
                        &PTR_DAT_11310ceb0,3,0x10,0x1c);
    puRam00000001136c1578 = puVar1;
  }
  return;
}



/* Entry: 1058ff8e4; end: 1058ff96f; +[SCPSSModel descriptor] */

undefined * FUN_1058ff8e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7af20,
                        &PTR____CFConstantStringClassReference_110e0cad8,&PTR_DAT_11310ce78,
                        &PTR_DAT_11310ce90,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c1580 = puVar1;
  }
  return puRam00000001136c1580;
}



/* Entry: 1058ff970; end: 1058ff9c3; +[SCNeoPlayerLogCollector shared] */

void FUN_1058ff970(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c1590 != -1) {
    func_0x00010002a2fc(0x1136c1590,&PTR___NSConcreteGlobalBlock_1108bf0a8);
  }
  uVar1 = uRam00000001136c1588;
  _objc_retain(uRam00000001136c1588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


