/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c26fcc; end: 106c2705b;  */

void FUN_106c26fcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c2705c; end: 106c2752b; -[SCMemoriesCameraRollIndexerManager _indexResults:cachedIndexResults:] */

void FUN_106c2705c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    puVar3 = PTR_PTR_1126d1710;
    _objc_alloc(PTR_PTR_1126d1710);
    func_0x00010c01d8a0();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
    func_0x00010bfa4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x00010bfa50c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_106c2752c;
    puStack_110 = &UNK_110969ad0;
    _objc_retain(puVar11);
    puStack_108 = puVar11;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = &uStack_158;
    uStack_158 = 0;
    uStack_148 = 0x3032000000;
    pcStack_140 = FUN_106c24384;
    uStack_138 = 0x106c24394;
    uStack_130 = 0;
    lVar4 = *(long *)(param_1 + 0x78);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0d3c80();
    _objc_release(lVar4);
    _objc_retain(param_4);
    _objc_retain(lVar5);
    lVar6 = param_3;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar12 = *(undefined8 *)(lVar10 * 8);
        uVar8 = uVar12;
        func_0x00010bfb0d80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c154b60(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar12);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar7;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b5f2968(uVar9);
        _objc_release(uVar12);
        _objc_release(uVar7);
        _objc_release(uVar8);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    lVar4 = param_1;
    func_0x00010be34180();
    if ((int)lVar4 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0c8b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f2a1c();
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    if (*(char *)(param_1 + 0x6a) == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0c8b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f2a1c();
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    func_0x00010bf529e0();
    func_0x00010bf529e0();
    puVar3 = PTR_PTR_1126d1710;
    _objc_alloc(PTR_PTR_1126d1710);
    func_0x00010c01d8a0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_4);
    _objc_release(lVar5);
    __Block_object_dispose(&uStack_158,8);
    _objc_release(uStack_130);
    _objc_release(param_3);
    _objc_release(puStack_108);
    _objc_release(puVar11);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar9 = 8;
    __Block_object_dispose(&uStack_158,8);
    __Unwind_Resume();
    puVar3 = PTR_PTR_1126d1718;
    _objc_retain(uVar9);
    _objc_alloc(puVar3);
    func_0x00010bff42a0();
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c2752c; end: 106c27587;  */

void FUN_106c2752c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1718;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff42a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c27588; end: 106c275e7;  */

void FUN_106c27588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b60f8;
  func_0x00010bfed440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2b40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c275e8; end: 106c27dc7;  */

void FUN_106c275e8(double param_1,long param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_118;
  
  puVar2 = param_3;
  _objc_retain();
  _objc_autoreleasePoolPush();
  uVar3 = *(ulong *)(param_2 + 0x20);
  func_0x00010be34180();
  if (((uVar3 & 1) != 0) || ((*(byte *)(*(long *)(param_2 + 0x20) + 0x6a) & 1) != 0)) {
    puVar15 = (undefined *)0x0;
    goto LAB_106c27ca8;
  }
  puVar4 = param_3;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = *(undefined **)(param_2 + 0x28);
  puVar15 = puVar4;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar5 = PTR_PTR_1126d1720;
  _objc_opt_new();
  cVar1 = *(char *)(*(long *)(param_2 + 0x20) + 0x68);
  if (cVar1 == '\x01') {
    puVar15 = puVar13;
    func_0x00010c271000();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar15;
    func_0x00010c08fa60();
    if (puVar6 != (undefined *)0x0) {
      if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x69) & 1) != 0) goto LAB_106c276f0;
      _objc_release(puVar15);
      goto LAB_106c27724;
    }
    _objc_release(puVar15);
LAB_106c27734:
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x000108ec0da8();
    _objc_release(uVar9);
    _CACurrentMediaTime();
    puStack_118 = puVar4;
    dVar17 = param_1;
    func_0x000107fe9a24(puVar4,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x60),uVar12);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    param_1 = dVar17 - param_1;
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f2ab4();
    _objc_release(uVar12);
    _objc_release(uVar9);
    if (puStack_118 != (undefined *)0x0) goto LAB_106c277d4;
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f2a1c();
    _objc_release(uVar12);
    _objc_release(uVar9);
    puVar15 = puVar4;
    func_0x00010bf5a700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar18 = param_1 + 1.0;
    func_0x00010c26f320(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28));
    dVar17 = param_1;
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (param_1 < dVar18) {
      puStack_118 = puVar4;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010bf655e0(dVar17 + 1.0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      uVar12 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined **)(lVar7 + 0x28) = puVar15;
      _objc_release(uVar12);
      puVar15 = (undefined *)0x0;
      goto LAB_106c27c84;
    }
    puVar15 = (undefined *)0x0;
  }
  else {
    if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x69) & 1) != 0) {
LAB_106c276f0:
      puVar6 = puVar13;
      func_0x00010c2a0600();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c08fa60();
      _objc_release(puVar6);
      if (cVar1 != '\0') {
        _objc_release(puVar15);
      }
      if (puVar8 == (undefined *)0x0) goto LAB_106c27734;
    }
LAB_106c27724:
    puStack_118 = (undefined *)0x0;
LAB_106c277d4:
    lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x78);
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      uVar3 = 0;
      do {
        puVar8 = *(undefined **)(*(long *)(param_2 + 0x20) + 0x78);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010c0dfd40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar9;
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar17 = param_1;
        _objc_release(uVar12);
        _objc_release(uVar9);
        _CACurrentMediaTime();
        puVar15 = puVar8;
        dVar18 = dVar17;
        func_0x00010bfed420();
        puVar6 = puVar13;
        if (puVar15 == (undefined *)0x3) {
          func_0x00010c2a0600();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar6;
          func_0x00010c08fa60();
          if (puVar15 == (undefined *)0x0) {
LAB_106c279cc:
            puVar16 = (undefined *)0x0;
            puVar15 = puVar6;
          }
          else {
            puVar15 = PTR_PTR_1126d1738;
            _objc_alloc();
            puVar16 = puVar4;
            func_0x00010c09da80(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar13;
            func_0x00010c2a0600(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01bd40();
            _objc_release(puVar10);
            _objc_release(puVar16);
            _objc_release(puVar6);
            if (puVar15 == (undefined *)0x0) goto LAB_106c279c4;
            puVar16 = PTR_PTR_1126d1730;
            func_0x00010c2a05c0();
            _objc_retainAutoreleasedReturnValue();
          }
LAB_106c279d0:
          _objc_release(puVar15);
        }
        else {
          if (puVar15 == (undefined *)0x2) {
            func_0x00010c271000();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar6;
            func_0x00010c08fa60();
            if (puVar15 == (undefined *)0x0) goto LAB_106c279cc;
            puVar15 = PTR_PTR_1126d1728;
            _objc_alloc();
            puVar16 = puVar4;
            func_0x00010c09da80(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar13;
            func_0x00010c271000(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01bb40();
            _objc_release(puVar10);
            _objc_release(puVar16);
            _objc_release(puVar6);
            if (puVar15 != (undefined *)0x0) {
              puVar16 = PTR_PTR_1126d1730;
              func_0x00010c2710c0();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_106c279d0;
            }
          }
LAB_106c279c4:
          puVar16 = (undefined *)0x0;
        }
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar9;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b5f2bc4();
        _objc_release(uVar12);
        _objc_release(uVar9);
        if (puVar16 == (undefined *)0x0) {
          puVar16 = puVar8;
          func_0x00010bfeca00();
          _objc_retainAutoreleasedReturnValue();
        }
        _CACurrentMediaTime();
        puVar15 = PTR_PTR_1126b60f8;
        param_1 = param_1 + (dVar18 - dVar17);
        uVar14 = *(undefined8 *)(param_2 + 0x30);
        uVar12 = uVar14;
        func_0x00010c0dfd40(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar12;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f2b40(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130f40(uVar14);
        _objc_release(puVar15);
        _objc_release(puVar6);
        _objc_release(uVar9);
        _objc_release(uVar12);
        if (puVar16 == (undefined *)0x0) {
          puVar15 = puVar4;
          func_0x00010bf5a700(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          dVar18 = param_1 + 1.0;
          func_0x00010c26f320(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28));
          dVar17 = param_1;
          _objc_release(puVar15);
          puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
          if (param_1 < dVar18) {
            puVar6 = puVar4;
            func_0x00010bf5a700(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            func_0x00010bf655e0(dVar17 + 1.0);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 8);
            uVar12 = *(undefined8 *)(lVar7 + 0x28);
            *(undefined **)(lVar7 + 0x28) = puVar15;
            _objc_release(uVar12);
            _objc_release(puVar6);
          }
          _objc_release(puVar8);
          puVar15 = (undefined *)0x0;
          goto LAB_106c27c84;
        }
        _objc_retain(puVar5);
        _objc_retain(puVar5);
        _objc_retain(puVar5);
        func_0x00010c0bedc0(puVar16);
        _objc_release(puVar5);
        _objc_release(puVar5);
        _objc_release(puVar5);
        _objc_release(puVar16);
        _objc_release(puVar8);
        uVar3 = uVar3 + 1;
        uVar11 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x78);
        func_0x00010bf529e0();
      } while (uVar3 < uVar11);
    }
    puVar15 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_106c27c84:
    _objc_release(puStack_118);
  }
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(puVar4);
LAB_106c27ca8:
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106c27dc8; end: 106c27e33;  */

void FUN_106c27dc8(long param_1,undefined8 param_2)

{
  func_0x00010c2b3ee0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c27e34; end: 106c27efb; -[SCMemoriesCameraRollIndexerManager _newPhotoLibraryFetcher] */

undefined * FUN_106c27e34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  puVar5 = PTR_PTR_1126b2670;
  _objc_alloc(PTR_PTR_1126b2670);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_106c27efc;
  puStack_50 = &UNK_110969c00;
  puVar6 = PTR_PTR_1126ae720;
  uStack_48 = uVar7;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035d40(puVar5,param_2,uVar3,uVar1,uVar4,uVar2,puVar6);
  _objc_release(puVar6);
  return puVar5;
}



/* Entry: 106c27efc; end: 106c27f0f;  */

void FUN_106c27efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithUnsignedInteger__112615828,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106c27f10; end: 106c27f4f; -[SCMemoriesCameraRollIndexerManager _didReceiveMemoryWarning] */

void FUN_106c27f10(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 0x70) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c27f50; end: 106c27fab; -[SCMemoriesCameraRollIndexerManager _hasMemoryWarning] */

bool FUN_106c27f50(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar2 = *(double *)(param_2 + 0x70);
  _objc_release(puVar1);
  return param_1 - dVar2 <= 300.0;
}



/* Entry: 106c27fac; end: 106c2803b; -[SCMemoriesCameraRollIndexerManager .cxx_destruct] */

void FUN_106c27fac(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106c2803c; end: 106c281db; -[SCMemoriesCameraRollIndexerManager _initWithTransactor:performer:photoPermissionCoordinator:] */

undefined8 *
FUN_106c2803c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f5cf0;
  puVar4 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  puVar1 = PTR_PTR_1126ae720;
  if (puVar4 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[8];
    puVar4[8] = puVar1;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar4[7];
    puVar4[7] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar4[2];
    puVar4[2] = param_5;
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126d1740;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[0xf];
    puVar4[0xf] = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = *(undefined8 **)(param_3 + 0x20);
  _objc_retain(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106c281dc; end: 106c28203;  */

void FUN_106c281dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c28204; end: 106c2820b; -[SCMemoriesCameraRollIndexerManager _setFetchingParams:maxNumberOfAssets:] */

void FUN_106c28204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  return;
}



/* Entry: 106c2820c; end: 106c2823b; -[SCMemoriesCameraRollIndexerManager _setIndexers:] */

void FUN_106c2820c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c2823c; end: 106c2838f; -[SCMemoriesCameraRollTinyClipIndexer initWithModelProvider:coreConfigProvider:grapheneRegistry:] */

undefined8 *
FUN_106c2823c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5cf8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c28390; end: 106c28483;  */

void FUN_106c28390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108ec1db4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0d0160(uVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110eff918);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe70c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106c28484; end: 106c285d7; -[SCMemoriesCameraRollTinyClipIndexer indexCameraRollItem:thumbnail:] */

void FUN_106c28484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  func_0x00010bf0af00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddb420(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000107ff4b1c(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,lVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126d1728;
      _objc_alloc(PTR_PTR_1126d1728);
      uVar4 = param_3;
      func_0x00010c09da80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bb40(puVar3,param_2,uVar4,puVar2);
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126d1730;
      func_0x00010c2710c0(PTR_PTR_1126d1730,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c285d8; end: 106c286df; -[SCMemoriesCameraRollTinyClipIndexer isReady] */

void FUN_106c285d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108ec1d74();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c291940(lVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110eff918);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126ae6b8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar7,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c286e0; end: 106c286eb; -[SCMemoriesCameraRollTinyClipIndexer indexerTypeString] */

undefined ** FUN_106c286e0(void)

{
  return &PTR____CFConstantStringClassReference_110e798b8;
}



/* Entry: 106c286ec; end: 106c286f3; -[SCMemoriesCameraRollTinyClipIndexer indexerType] */

undefined8 FUN_106c286ec(void)

{
  return 2;
}



/* Entry: 106c286f4; end: 106c288e3; -[SCMemoriesCameraRollTinyClipIndexer _captionToConfidenceMap:thumbnail:] */

void FUN_106c286f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b30e0;
  _objc_alloc(PTR_PTR_1126b30e0);
  func_0x00010bff3e00(0);
  uVar4 = uVar1;
  func_0x00010c1427e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106c288e4;
  uStack_70 = 0x106c288f4;
  uStack_68 = 0;
  func_0x00010c0bf0a0(uVar4);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_90);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 106c288e4; end: 106c288fb;  */

void FUN_106c288e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c288fc; end: 106c289d3;  */

void FUN_106c288fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfed440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5f288c(uVar4,uVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106c289d4; end: 106c28a2b;  */

void FUN_106c289d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c150d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c28a2c; end: 106c28a73; -[SCMemoriesCameraRollTinyClipIndexer .cxx_destruct] */

void FUN_106c28a2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c28a74; end: 106c28b6f; -[SCMemoriesCameraRollVisualTagIndexer initWithVisualTagAnalyzer:coreConfigProvider:grapheneRegistry:memoriesLogger:] */

undefined1 *
FUN_106c28a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5d00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c28b70; end: 106c28e8f; -[SCMemoriesCameraRollVisualTagIndexer indexCameraRollItem:thumbnail:] */

void FUN_106c28b70(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x22;
  undefined *puVar13;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beca5e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_158 = param_3;
    lStack_150 = param_4;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(uVar3);
    uVar4 = uVar3;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar11 = *plStack_130;
      do {
        uVar9 = 0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(uVar3);
          }
          iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
          func_0x00010bfc51c0();
          if (iVar2 == 0) {
            puVar7 = *(undefined **)(param_1 + 0x18);
            func_0x00010c269d40(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar7;
            func_0x00010c0c8b00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010b5f316c();
            _objc_release(puVar13);
          }
          else {
            puVar7 = PTR_PTR_1126d16f0;
            _objc_opt_new(PTR_PTR_1126d16f0);
            func_0x00010c21acc0();
            uVar5 = uVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar6 = uVar5;
            _objc_opt_isKindOfClass(uVar5,puVar13);
            uVar1 = uVar5;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar5);
            func_0x00010bf885a0(uVar1);
            _objc_release(uVar1);
            func_0x00010c1807c0(uVar10,puVar7);
            func_0x00010befa120(unaff_x22);
          }
          _objc_release(puVar7);
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar9);
        uVar4 = uVar3;
        func_0x00010bf52a60();
      } while (uVar4 != 0);
    }
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      param_3 = uStack_158;
    }
    else {
      puVar8 = PTR_PTR_1126d1738;
      _objc_alloc(PTR_PTR_1126d1738);
      param_3 = uStack_158;
      uVar10 = uStack_158;
      func_0x00010c09da80(uStack_158);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bd40(puVar8);
      _objc_release(uVar10);
      puVar13 = PTR_PTR_1126d1730;
      func_0x00010c2a05c0(PTR_PTR_1126d1730);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    param_4 = lStack_150;
    _objc_release(puVar7);
    _objc_release(unaff_x22);
  }
  _objc_release(uVar3);
  _objc_release(param_3);
  lVar11 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_168 = FUN_106c28e90;
    uVar10 = *(undefined8 *)(lVar11 + 8);
    puStack_190 = unaff_x22;
    uStack_188 = uVar3;
    uStack_180 = param_3;
    lStack_178 = param_4;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(uVar10);
    uVar12 = *(undefined8 *)(lVar11 + 0x20);
    _objc_retain(uVar12);
    _objc_initWeak(auStack_198,lVar11);
    puVar13 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_1a0,auStack_198);
    func_0x00010bf54280(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
    _objc_release(uVar12);
    _objc_release(uVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106c28e90; end: 106c28f7f; -[SCMemoriesCameraRollVisualTagIndexer isReady] */

void FUN_106c28e90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c28f80; end: 106c290af;  */

void FUN_106c28f80(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07bc40();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      func_0x00010bfab600(uVar4);
      _objc_release(uVar4);
      _objc_release(param_2);
      goto LAB_106c29068;
    }
  }
  func_0x00010c0d9840(param_2);
  func_0x00010bf436e0(param_2);
LAB_106c29068:
  puVar5 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c290b0; end: 106c2913f;  */

void FUN_106c290b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c29140; end: 106c2914b; -[SCMemoriesCameraRollVisualTagIndexer indexerTypeString] */

undefined ** FUN_106c29140(void)

{
  return &PTR____CFConstantStringClassReference_110e798f8;
}



/* Entry: 106c2914c; end: 106c29153; -[SCMemoriesCameraRollVisualTagIndexer indexerType] */

undefined8 FUN_106c2914c(void)

{
  return 3;
}



/* Entry: 106c29154; end: 106c293eb; -[SCMemoriesCameraRollVisualTagIndexer _tagToConfidenceMap:thumbnail:] */

void FUN_106c29154(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf39de0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13cf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar5 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfed440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f288c(puVar7,param_1,&PTR____CFConstantStringClassReference_110e79918);
    _objc_release(param_1);
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar8 = *(undefined8 *)(lVar9 * 8);
        func_0x00010bf45da0(uVar8);
        func_0x00010c0df720(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1536e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(uVar4);
        _objc_release(uVar8);
        _objc_release(puVar7);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    puVar7 = puVar5;
    func_0x00010bf51e00(puVar5);
  }
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x28,0);
  _objc_storeStrong(param_4 + 0x20,0);
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 106c293ec; end: 106c2943f; -[SCMemoriesCameraRollVisualTagIndexer .cxx_destruct] */

void FUN_106c293ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c29440; end: 106c294eb; -[SCMemoriesCameraRollFetchResult initWithAssets:oldestCreationDate:] */

undefined1 *
FUN_106c29440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5d08;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c294ec; end: 106c2950f; -[SCMemoriesCameraRollFetchResult copyWithZone:] */

undefined8 FUN_106c294ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c29510; end: 106c29583; -[SCMemoriesCameraRollFetchResult hash] */

undefined8 * FUN_106c29510(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106c29604:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106c29610;
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
          goto LAB_106c29610;
        }
        goto LAB_106c29604;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106c29610:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106c29584; end: 106c2962b; -[SCMemoriesCameraRollFetchResult isEqual:] */

long FUN_106c29584(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c29604:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c29610;
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
          goto LAB_106c29610;
        }
        goto LAB_106c29604;
      }
    }
    lVar3 = 0;
  }
LAB_106c29610:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c2962c; end: 106c29633; -[SCMemoriesCameraRollFetchResult assets] */

undefined8 FUN_106c2962c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c29634; end: 106c2963b; -[SCMemoriesCameraRollFetchResult oldestCreationDate] */

undefined8 FUN_106c29634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c2963c; end: 106c2966b; -[SCMemoriesCameraRollFetchResult .cxx_destruct] */

void FUN_106c2963c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c2966c; end: 106c29743; -[SCMemoriesCameraRollCompleteIndexResult initWithMetadataIndexResult:tinyClipIndexResult:visualTagIndexResult:] */

undefined1 *
FUN_106c2966c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5d10;
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



/* Entry: 106c29744; end: 106c29767; -[SCMemoriesCameraRollCompleteIndexResult copyWithZone:] */

undefined8 FUN_106c29744(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c29768; end: 106c297e7; -[SCMemoriesCameraRollCompleteIndexResult hash] */

undefined8 * FUN_106c29768(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c29880:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c2988c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106c2988c;
          }
          goto LAB_106c29880;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c2988c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c297e8; end: 106c298a7; -[SCMemoriesCameraRollCompleteIndexResult isEqual:] */

long FUN_106c297e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c29880:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c2988c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106c2988c;
          }
          goto LAB_106c29880;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c2988c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c298a8; end: 106c298af; -[SCMemoriesCameraRollCompleteIndexResult metadataIndexResult] */

undefined8 FUN_106c298a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c298b0; end: 106c298b7; -[SCMemoriesCameraRollCompleteIndexResult tinyClipIndexResult] */

undefined8 FUN_106c298b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c298b8; end: 106c298bf; -[SCMemoriesCameraRollCompleteIndexResult visualTagIndexResult] */

undefined8 FUN_106c298b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c298c0; end: 106c298fb; -[SCMemoriesCameraRollCompleteIndexResult .cxx_destruct] */

void FUN_106c298c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c298fc; end: 106c29917; +[SCMemoriesCameraRollCompleteIndexResultBuilder memoriesCameraRollCompleteIndexResult] */

void FUN_106c298fc(void)

{
  _objc_alloc_init(PTR_PTR_1126d1720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c29918; end: 106c29a2f; +[SCMemoriesCameraRollCompleteIndexResultBuilder memoriesCameraRollCompleteIndexResultFromExistingMemoriesCameraRollCompleteIndexResult:] */

void FUN_106c29918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d1720;
  _objc_retain(param_3);
  func_0x00010c0c8040(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0cc4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b3ee0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c271060(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2bb3a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2a0560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2bcb80(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c29a30; end: 106c29a63; -[SCMemoriesCameraRollCompleteIndexResultBuilder build] */

void FUN_106c29a30(void)

{
  _objc_alloc(PTR_PTR_1126d1748);
  func_0x00010c02bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c29a64; end: 106c29a9b; -[SCMemoriesCameraRollCompleteIndexResultBuilder withMetadataIndexResult:] */

long FUN_106c29a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106c29a9c; end: 106c29ad3; -[SCMemoriesCameraRollCompleteIndexResultBuilder withTinyClipIndexResult:] */

long FUN_106c29a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106c29ad4; end: 106c29b0b; -[SCMemoriesCameraRollCompleteIndexResultBuilder withVisualTagIndexResult:] */

long FUN_106c29ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106c29b0c; end: 106c29b47; -[SCMemoriesCameraRollCompleteIndexResultBuilder .cxx_destruct] */

void FUN_106c29b0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c29b48; end: 106c29bf3; -[SCMemoriesCameraRollCachedIndexResult initWithVisualTagsData:tinyClipCaptionsData:] */

undefined1 *
FUN_106c29b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5d18;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c29bf4; end: 106c29c17; -[SCMemoriesCameraRollCachedIndexResult copyWithZone:] */

undefined8 FUN_106c29bf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c29c18; end: 106c29c8b; -[SCMemoriesCameraRollCachedIndexResult hash] */

undefined8 * FUN_106c29c18(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106c29d0c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106c29d18;
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
          goto LAB_106c29d18;
        }
        goto LAB_106c29d0c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106c29d18:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106c29c8c; end: 106c29d33; -[SCMemoriesCameraRollCachedIndexResult isEqual:] */

long FUN_106c29c8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c29d0c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c29d18;
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
          goto LAB_106c29d18;
        }
        goto LAB_106c29d0c;
      }
    }
    lVar3 = 0;
  }
LAB_106c29d18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c29d34; end: 106c29d3b; -[SCMemoriesCameraRollCachedIndexResult visualTagsData] */

undefined8 FUN_106c29d34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c29d3c; end: 106c29d43; -[SCMemoriesCameraRollCachedIndexResult tinyClipCaptionsData] */

undefined8 FUN_106c29d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c29d44; end: 106c29d73; -[SCMemoriesCameraRollCachedIndexResult .cxx_destruct] */

void FUN_106c29d44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c29d74; end: 106c29e27; -[SCMemoriesCameraRollCompleteIndexResultWrapper initWithIndexResults:nextIndexChunkReferenceDate:failedToIndexAllItems:] */

undefined1 *
FUN_106c29d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5d20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c29e28; end: 106c29e4b; -[SCMemoriesCameraRollCompleteIndexResultWrapper copyWithZone:] */

undefined8 FUN_106c29e28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c29e4c; end: 106c29ec3; -[SCMemoriesCameraRollCompleteIndexResultWrapper hash] */

undefined8 * FUN_106c29e4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c29f54:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c29f60;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106c29f60;
        }
        goto LAB_106c29f54;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c29f60:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c29ec4; end: 106c29f7b; -[SCMemoriesCameraRollCompleteIndexResultWrapper isEqual:] */

long FUN_106c29ec4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c29f54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c29f60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106c29f60;
        }
        goto LAB_106c29f54;
      }
    }
    lVar3 = 0;
  }
LAB_106c29f60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c29f7c; end: 106c29f83; -[SCMemoriesCameraRollCompleteIndexResultWrapper indexResults] */

undefined8 FUN_106c29f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c29f84; end: 106c29f8b; -[SCMemoriesCameraRollCompleteIndexResultWrapper nextIndexChunkReferenceDate] */

undefined8 FUN_106c29f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c29f8c; end: 106c29f93; -[SCMemoriesCameraRollCompleteIndexResultWrapper failedToIndexAllItems] */

undefined1 FUN_106c29f8c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106c29f94; end: 106c29fc3; -[SCMemoriesCameraRollCompleteIndexResultWrapper .cxx_destruct] */

void FUN_106c29f94(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106c29fc4; end: 106c29fdf;  */

undefined ** FUN_106c29fc4(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e79958;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e79978;
  }
  return ppuVar1;
}



/* Entry: 106c29fe0; end: 106c2a097;  */

void FUN_106c29fe0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = lRam00000001136c6e10;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106c2a098;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c6e10,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar2 = uRam00000001136c6e18;
  _objc_retain(uRam00000001136c6e18);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c2a098; end: 106c2a113;  */

void FUN_106c2a098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d1750;
  _objc_opt_class(PTR_PTR_1126d1750);
  uVar4 = uVar2;
  func_0x00010c279940(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e79b18,0,0,0,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136c6e18;
  uRam00000001136c6e18 = uVar4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c2a114; end: 106c2a217;  */

void FUN_106c2a114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_4);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c2a218; end: 106c2a533;  */

void FUN_106c2a218(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar8);
  uVar1 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079f60();
  _objc_release(uVar1);
  uVar1 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010c079f80();
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126af5d0;
  puVar7 = PTR_PTR_1126ae6b8;
  if (((uVar2 & 1) == 0) && ((uVar8 & 1) == 0)) {
    if (*(long *)(param_1 + 0x30) == 1) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (*(long *)(param_1 + 0x30) != 0) goto LAB_106c2a2d8;
      puVar3 = (undefined *)0x5;
      FUN_106c2a534(5);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfa01c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
LAB_106c2a2d8:
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    uStack_108 = 0x106c2a5ec;
    uStack_100 = 0x106c2a5fc;
    puStack_f8 = (undefined *)0x0;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain();
    uVar5 = uVar4;
    func_0x000100589538(uVar4,0,&PTR___NSConcreteGlobalBlock_110969d40);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    uStack_78 = 0x106c2a5ec;
    uStack_70 = 0x106c2a5fc;
    uStack_68 = 0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106c2b214;
    puStack_a8 = &UNK_11093b2a8;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_106c2b404;
    puStack_d8 = &UNK_110969c80;
    uStack_c8 = uVar9;
    puStack_a0 = puStack_d0;
    uStack_98 = uVar9;
    puStack_88 = puStack_d0;
    func_0x00010c0c0800();
    uVar9 = puStack_88[5];
    _objc_retain(uVar9);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar4);
    func_0x00010c0c0800(uVar9);
    puVar7 = (undefined *)puStack_118[5];
    _objc_retain(puVar7);
    _objc_release(uVar9);
    __Block_object_dispose(&uStack_120,8);
    puVar3 = puStack_f8;
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c2a534; end: 106c2a5af;  */

void FUN_106c2a534(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  if (param_1 - 1U < 6) {
    ppuVar2 = (undefined **)(&PTR_PTR_110969e00)[param_1 - 1U];
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e79998;
  }
  _objc_retain(ppuVar2);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110daafd8,ppuVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c2a5b0; end: 106c2a603;  */

void FUN_106c2a5b0(long param_1)

{
  undefined **ppuVar1;
  
  if (param_1 - 1U < 0xb) {
    ppuVar1 = (undefined **)(&PTR_PTR_110969e30)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e79998;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110daafd8,ppuVar1,param_1);
  return;
}



/* Entry: 106c2a604; end: 106c2a713;  */

void FUN_106c2a604(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x28) == 1) {
    func_0x00010bf1f3c0(param_2);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) goto LAB_106c2a6fc;
    func_0x00010bf1f3c0(param_2);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2619e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_106c2a6fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c2a714; end: 106c2a78b;  */

void FUN_106c2a714(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c2a78c; end: 106c2a943;  */

void FUN_106c2a78c(undefined8 param_1,int param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x000108ec0940();
  if (param_2 != 0) {
    if (param_3 == 0) {
      lVar1 = param_4;
      func_0x00010bf3ec40();
      if (lVar1 == 7) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e79b78;
      }
      else {
        lVar1 = param_4;
        func_0x00010bf3ec40();
        if (lVar1 == 8) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e79b98;
        }
        else {
          lVar1 = param_4;
          func_0x00010bf3ec40();
          ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar1 == 9) {
            ppuVar3 = &PTR____CFConstantStringClassReference_110e79bb8;
          }
          else {
            lVar1 = param_4;
            func_0x00010c09e4e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(ppuVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar1);
          }
        }
      }
    }
    else {
      lVar1 = param_5;
      func_0x00010c067fc0();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar1 != 0) {
        func_0x00010c067fc0();
      }
      func_0x00010c14de00(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ff40();
    _objc_release(uVar2);
    _objc_release(ppuVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c2a944; end: 106c2a947;  */

void FUN_106c2a944(void)

{
  return;
}



/* Entry: 106c2a948; end: 106c2ad13;  */

void FUN_106c2a948(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x000108ec0940();
  if ((int)uVar1 != 0) {
    if (param_4 == 0) {
      lVar7 = param_5;
      func_0x00010bf3ec40();
      if (lVar7 == 4) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110e79c38;
      }
      else {
        lVar7 = param_5;
        func_0x00010bf3ec40();
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar7 == 5) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110e79c58;
        }
        else {
          lVar7 = param_5;
          func_0x00010c09e4e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
        }
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
      _objc_opt_new(PTR__OBJC_CLASS___PHFetchOptions_1126cb260);
      puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfc80(puVar2);
      func_0x00010c19b420(puVar2);
      puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x00010bfa5120(PTR__OBJC_CLASS___PHAsset_1126bd898);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_98 = (undefined **)0xc2000000;
      uStack_90 = 0x106c2b540;
      puStack_88 = &UNK_11085b3a0;
      puStack_80 = puVar5;
      _objc_retain();
      func_0x00010bf97e80(puVar4);
      puVar6 = puVar5;
      FUN_106c2adf8(puVar5,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(puVar6);
      _objc_release(puStack_80);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puStack_a0 = (undefined *)0x0;
      uStack_90 = 0x2020000000;
      puStack_88 = (undefined *)0x0;
      uStack_c0 = 0;
      uStack_b0 = 0x2020000000;
      uStack_a8 = 0;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_106c2ad14;
      puStack_e0 = &UNK_110969cd0;
      puStack_b8 = &uStack_c0;
      ppuStack_98 = &puStack_a0;
      _objc_retain(param_6);
      uStack_d8 = param_6;
      ppuStack_d0 = &puStack_a0;
      puStack_c8 = &uStack_c0;
      func_0x000100589538(param_3,0,&puStack_f8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_d8);
      __Block_object_dispose(&uStack_c0,8);
      __Block_object_dispose(&puStack_a0,8);
    }
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ff40();
    _objc_release(uVar1);
    _objc_release(ppuVar8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 106c2ad14; end: 106c2adf3;  */

undefined * FUN_106c2ad14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c067fc0(uVar5);
  lVar1 = param_2;
  FUN_106c302bc(param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067fc0(uVar5);
  lVar1 = param_2;
  FUN_106c30894(param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  func_0x00010bf529e0();
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar3;
  if (lVar2 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(lVar2 + 8);
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = bVar4 & 1;
  _objc_release(lVar1);
  _objc_release(lVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 106c2adf4; end: 106c2adf7;  */

void FUN_106c2adf4(void)

{
  return;
}



/* Entry: 106c2adf8; end: 106c2b087;  */

undefined * FUN_106c2adf8(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1063c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c19b420(puVar10);
    puVar2 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
    func_0x00010bfa4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        func_0x00010bfa50c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa140(puVar4);
        _objc_release(puVar5);
        puVar12 = puVar12 + 1;
      } while (puVar3 != puVar12);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    _objc_retain(puVar4);
    puVar3 = param_1;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar10);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  _objc_retain(param_2);
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar7 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      puVar10 = (undefined *)0x1;
LAB_106c2b160:
      _objc_release(lVar9);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return puVar10;
      }
      ___stack_chk_fail();
      if (puVar3 == (undefined *)0x6) {
        func_0x00010b5edefc();
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      return param_2;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      uVar6 = *(ulong *)(lVar11 * 8);
      func_0x00010bf4b900();
      if ((uVar6 & 1) != 0) {
        puVar10 = (undefined *)0x0;
        goto LAB_106c2b160;
      }
      lVar11 = lVar11 + 1;
    } while (lVar7 != lVar11);
    lVar7 = lVar9;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106c2b088; end: 106c2b1a7;  */

long FUN_106c2b088(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      lVar6 = 1;
LAB_106c2b160:
      _objc_release(lVar5);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return lVar6;
      }
      ___stack_chk_fail();
      if (lVar3 == 6) {
        func_0x00010b5edefc();
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      return param_2;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar2 = *(ulong *)(lVar7 * 8);
      func_0x00010bf4b900();
      if ((uVar2 & 1) != 0) {
        lVar6 = 0;
        goto LAB_106c2b160;
      }
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106c2b1a8; end: 106c2b20b;  */

void FUN_106c2b1a8(undefined8 param_1,long param_2)

{
  if (param_2 == 6) {
    func_0x00010b5edefc(param_1,0,&PTR___NSConcreteGlobalBlock_110969de0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106c2b20c; end: 106c2b213;  */

void FUN_106c2b20c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      func_0x0001005fc990(param_2 + 0x28,*(undefined8 *)(param_2 + 8),&UNK_10dde8725,0x27);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c2b214; end: 106c2b3b3;  */

void FUN_106c2b214(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
LAB_106c2b2b0:
    _objc_release(param_2);
    func_0x00010bf04920(param_2);
    puVar4 = PTR_PTR_1126af5d0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_2;
    func_0x00010bf04920();
    if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010bf529e0(), uVar1 < 3)) {
      uVar1 = param_2;
      func_0x00010bf529e0();
      if (uVar1 == 2) {
        uVar1 = param_2;
        func_0x00010bfaea20();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
        if (uVar2 != 1) goto LAB_106c2b304;
      }
      goto LAB_106c2b2b0;
    }
LAB_106c2b304:
    _objc_release(param_2);
    puVar4 = PTR_PTR_1126af5d0;
    if (*(long *)(param_1 + 0x28) == 1) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (*(long *)(param_1 + 0x28) != 0) goto LAB_106c2b3a0;
      puVar3 = (undefined *)0x6;
      FUN_106c2a534(6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar3);
LAB_106c2b3a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c2b3b4; end: 106c2b403;  */

byte FUN_106c2b3b4(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (*(char *)(param_2 + 8) != '\x01')) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_2 + 9) ^ 1;
  }
  _objc_release(param_2);
  return bVar1 & 1;
}



/* Entry: 106c2b404; end: 106c2b4cb;  */

void FUN_106c2b404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  if (*(long *)(param_1 + 0x28) == 1) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) goto LAB_106c2b4b8;
    puVar1 = (undefined *)0x1;
    FUN_106c2a534(1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
LAB_106c2b4b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c2b4cc; end: 106c2b527;  */

undefined8 FUN_106c2b4cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 8) & 1) == 0) {
      if ((*(byte *)(param_2 + 9) & 1) != 0) goto LAB_106c2b50c;
    }
    else if ((*(byte *)(param_2 + 9) != 0) && (*(long *)(param_2 + 0x28) == 0)) {
LAB_106c2b50c:
      uVar1 = 1;
      goto LAB_106c2b510;
    }
  }
  uVar1 = 0;
LAB_106c2b510:
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106c2b528; end: 106c2b54b;  */

byte FUN_106c2b528(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_2 + 9);
  }
  return bVar1 & 1;
}



/* Entry: 106c2b54c; end: 106c2b56b;  */

undefined * FUN_106c2b54c(undefined8 param_1,undefined8 param_2)

{
  FUN_106c31500(param_2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 106c2b56c; end: 106c2ba1b;  */

undefined * FUN_106c2b56c(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  long lStack_1c0;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar10 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_1);
  puVar6 = auStack_100;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_130;
    do {
      puVar14 = (undefined *)0x0;
      do {
        dVar15 = dVar16;
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(param_1);
          dVar15 = dVar16;
        }
        uVar11 = *(undefined8 *)(lStack_138 + (long)puVar14 * 8);
        puVar3 = puVar1;
        func_0x00010bf529e0();
        dVar16 = dVar15;
        if (puVar3 == (undefined *)0x0) {
LAB_106c2b6b0:
          func_0x00010befa120(puVar1);
        }
        else {
          puVar3 = puVar1;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf5a700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5a700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380(puVar4);
          _objc_release(uVar11);
          _objc_release(puVar4);
          _objc_release(puVar3);
          dVar16 = 0.0;
          if (param_2 < 0xd) {
            dVar16 = *(double *)(&UNK_10dde8550 + param_2 * 8);
          }
          if (dVar16 <= ABS(dVar15)) goto LAB_106c2b6b0;
        }
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar6 = auStack_100;
      puVar2 = param_1;
      puVar10 = &uStack_140;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(uVar9);
    _objc_retain(puVar10);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar9);
    uVar5 = uVar9;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (uVar5 != 0) {
      uVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(uVar9);
        }
        uVar11 = *(undefined8 *)(uVar13 * 8);
        func_0x00010c0fb3e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(uVar11);
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      uVar5 = uVar9;
      func_0x00010bf52a60();
    }
    _objc_release(uVar9);
    puVar2 = param_1;
    func_0x00010c0fb3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    _objc_retain(puVar1);
    puVar3 = puVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_retain(puVar3);
    if (puVar6 == (undefined1 *)0x2) {
      puVar6 = (undefined1 *)puVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfaa200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar7;
      func_0x000100817178(puVar7,&PTR___NSConcreteGlobalBlock_110969ef8);
      puVar8 = puVar6;
      func_0x00010bf529e0();
      puVar2 = PTR____NSArray0__struct_11034ab48;
      if ((puVar8 != (undefined1 *)0x0) &&
         (puVar4 = puVar3, func_0x00010bf529e0(), puVar2 = PTR____NSArray0__struct_11034ab48,
         puVar4 != (undefined *)0x0)) {
        puStack_268 = puVar14;
        uStack_260 = 0xc2000000;
        pcStack_258 = FUN_106c2d0a8;
        puStack_250 = &UNK_110969a40;
        _objc_retain(puVar6);
        puVar2 = puVar3;
        puStack_248 = puVar6;
        func_0x0001006372a4(puVar3,&puStack_268);
        _objc_release(puStack_248);
      }
      _objc_release(puVar6);
      _objc_release(puVar7);
    }
    else {
      _objc_retain(puVar3);
      puVar2 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4b900(uVar11);
      return (undefined *)(ulong)((uint)uVar11 ^ 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 106c2ba1c; end: 106c2ba3b;  */

uint FUN_106c2ba1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106c2ba3c; end: 106c2bbc7;  */

void FUN_106c2ba3c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  ppuVar1 = param_3;
  _objc_retain(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  switch(param_1) {
  case 0:
  case 0xc:
    FUN_106c2f510();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    break;
  case 1:
  case 4:
  case 6:
    func_0x000106c2f528();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    break;
  case 2:
    func_0x000106c2f558();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    break;
  case 3:
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c22d3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000106c2f588();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    break;
  case 5:
    func_0x000106c2f5a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    break;
  case 7:
    func_0x000106c2f5b8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    break;
  case 8:
    func_0x000106c2f5d0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    break;
  case 9:
    func_0x000106c2f618();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    break;
  case 10:
    ppuVar2 = param_3;
    func_0x000108dfd174(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106c2bbc8; end: 106c2bc3f;  */

void FUN_106c2bbc8(undefined8 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
  case 0xc:
    func_0x000106c2f540();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x000106c2f570();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
  case 9:
  case 10:
    func_0x000106c2f5e8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x000106c2f600(&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


