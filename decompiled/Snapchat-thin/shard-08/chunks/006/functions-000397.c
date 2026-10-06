/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10630c9b0; end: 10630c9b7; -[SCOperaPerformanceTrackingPlugin operaSessionId] */

undefined8 FUN_10630c9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10630c9b8; end: 10630c9bf; -[SCOperaPerformanceTrackingPlugin viewLocation] */

undefined8 FUN_10630c9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10630c9c0; end: 10630c9c7; -[SCOperaPerformanceTrackingPlugin setViewLocation:] */

void FUN_10630c9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x150) = param_3;
  return;
}



/* Entry: 10630c9c8; end: 10630cb43; -[SCOperaPerformanceTrackingPlugin .cxx_destruct] */

void FUN_10630c9c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10630cb44; end: 10630cb5b;  */

void FUN_10630cb44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10630cb5c; end: 10630ceff;  */

void FUN_10630cb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0b4fe0(param_2);
  func_0x00010c1d57a0(param_3);
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630cf00; end: 10630d1e3;  */

void FUN_10630cf00(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_2);
  func_0x00010c29a980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x00010bf4d420();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf1ee80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    if (puVar6 != (undefined *)0x0) goto LAB_10630d1c0;
  }
  _objc_retain(param_1);
  if (param_1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    puVar1 = param_1;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_1;
      func_0x00010c06b7e0();
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = puVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126b5bc0;
        _objc_opt_class(PTR_PTR_1126b5bc0);
        puVar6 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar1);
        puVar1 = puVar2;
        if (((ulong)puVar6 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010bf1eea0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar6);
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
        if (puVar3 != (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x00010c0c5340(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf1eea0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf649c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          FUN_10630d1e4();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar5);
          _objc_release(puVar4);
          goto LAB_10630d034;
        }
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar1;
        func_0x00010c0e00e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      FUN_10630d1e4();
      _objc_retainAutoreleasedReturnValue();
LAB_10630d034:
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
LAB_10630d1c0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10630d1e4; end: 10630d2d3;  */

void FUN_10630d1e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bc668;
  _objc_retain();
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf4ce20();
  puVar3 = puVar1;
  if ((int)puVar2 == 3) {
    func_0x00010c0c4220(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf15f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4c700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar4 = (undefined *)0x0;
    if ((int)puVar2 != 2) goto LAB_10630d2b4;
    func_0x00010bf4c2c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf4c700();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
LAB_10630d2b4:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10630d2d4; end: 10630d88f;  */

void FUN_10630d2d4(ulong param_1,ulong param_2)

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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_2);
  func_0x00010c29a980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x00010bf4d420();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf1ee80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar11 != 0) goto LAB_10630d864;
  }
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar11 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a52f8);
  uVar2 = uVar3;
  if ((int)uVar11 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar4 = uVar11;
    _objc_opt_isKindOfClass(uVar11,puVar1);
    uVar3 = uVar11;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar11);
    uVar11 = uVar3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar11);
    if (uVar4 == 0) {
      uVar11 = param_1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar11 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar1);
      uVar4 = uVar5;
      if ((uVar11 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      uVar11 = uVar4;
      func_0x00010c08fa60();
      if (uVar11 == 0) {
        uVar5 = param_1;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
        uVar6 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar1);
        uVar5 = uVar11;
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar11);
        if (uVar5 == 0) {
          uVar11 = param_1;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf1f3c0();
          _objc_release(uVar6);
          _objc_release(uVar11);
          if ((uVar7 & 1) == 0) {
            uVar11 = param_1;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar11;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            uVar11 = uVar7;
            func_0x00010010fab4(uVar7,PTR_DAT_1126a5308);
            uVar6 = uVar7;
            if ((int)uVar11 == 0) {
              uVar6 = 0;
            }
            _objc_retain(uVar6);
            _objc_release(uVar7);
            uVar11 = param_1;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar11;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar11 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar1);
            uVar7 = uVar8;
            if ((uVar11 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar8);
            uVar11 = uVar7;
            func_0x00010c08fa60();
            if (uVar11 == 0) {
              _objc_release(uVar7);
              _objc_release(uVar6);
            }
            else {
              uVar8 = uVar6;
              func_0x00010c2991c0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c0d5720();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar9;
              func_0x00010bf4d420();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar10;
              func_0x00010bf1ee80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar10);
              _objc_release(uVar9);
              uVar9 = uVar11;
              func_0x00010c08fa60();
              if (uVar9 != 0) {
                _objc_retain(uVar11);
              }
              _objc_release(uVar11);
              _objc_release(uVar8);
              _objc_release(uVar7);
              _objc_release(uVar6);
              if (uVar9 != 0) goto LAB_10630d83c;
            }
          }
          uVar11 = param_1;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar11 = uVar7;
          _objc_opt_isKindOfClass(uVar7,puVar1);
          uVar6 = uVar7;
          if ((uVar11 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          _objc_release(uVar7);
          uVar11 = uVar6;
          func_0x00010c08fa60();
          if (uVar11 == 0) {
            uVar11 = 0;
          }
          else {
            _objc_retain(uVar6);
            uVar11 = uVar6;
          }
          _objc_release(uVar6);
        }
        else {
          func_0x00010beec820(uVar11);
          _objc_retainAutoreleasedReturnValue();
        }
LAB_10630d83c:
        _objc_release(uVar5);
      }
      else {
        _objc_retain(uVar4);
        uVar11 = uVar4;
      }
    }
    else {
      uVar4 = uVar3;
      func_0x00010c0c5340(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar11 = uVar2;
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(param_1);
LAB_10630d864:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 10630d890; end: 10630dde7;  */

ulong FUN_10630d890(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  uVar5 = param_1;
  func_0x00010c06b7e0();
  if ((uVar5 & 1) == 0) {
    puVar1 = PTR_PTR_1126c9310;
    func_0x00010c0700c0();
    puVar2 = PTR_PTR_1126b2340;
    if (((ulong)puVar1 & 1) == 0) {
      uVar5 = param_1;
      func_0x00010c118b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077200();
      _objc_release(uVar5);
      puVar1 = PTR_PTR_1126c9a58;
      if (((ulong)puVar2 & 1) == 0) {
        uVar5 = param_1;
        func_0x00010c118b40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07fc00();
        _objc_release(uVar5);
        puVar2 = PTR_PTR_1126c9ae8;
        if (((ulong)puVar1 & 1) == 0) {
          uVar5 = param_1;
          func_0x00010c118b40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06e4a0();
          _objc_release(uVar5);
          puVar1 = PTR_PTR_1126c9ae8;
          if (((ulong)puVar2 & 1) == 0) {
            uVar5 = param_1;
            func_0x00010c118b40(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0742c0();
            _objc_release(uVar5);
            if (((ulong)puVar1 & 1) == 0) {
              uVar5 = param_1;
              func_0x00010c118b40();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar5);
              if (uVar3 == 0) {
                uVar5 = 0xffffffffffffffff;
              }
              else {
                uVar5 = param_1;
                func_0x00010c118b40();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar5);
                puVar2 = PTR_PTR_1126c98c0;
                _objc_opt_class(PTR_PTR_1126c98c0);
                uVar4 = uVar3;
                _objc_opt_isKindOfClass(uVar3,puVar2);
                uVar5 = uVar3;
                if ((uVar4 & 1) == 0) {
                  uVar5 = 0;
                }
                _objc_retain(uVar5);
                _objc_release(uVar3);
                uVar3 = uVar5;
                func_0x00010bf0e960(uVar5);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar5);
                uVar5 = uVar3;
                func_0x00010bf4dac0(uVar3);
                _objc_release(uVar3);
              }
            }
            else {
              uVar5 = 4;
            }
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0;
        }
        goto LAB_10630d90c;
      }
    }
    uVar5 = 3;
  }
  else {
    uVar5 = 2;
  }
LAB_10630d90c:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10630dde8; end: 10630e1e7;  */

void FUN_10630dde8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9af8;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c297440(param_2);
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220520(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = param_2;
  func_0x00010c297500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220440(puVar1);
  _objc_release(uVar4);
  func_0x00010c2a5040(param_2);
  func_0x00010c2256c0(puVar1);
  func_0x00010bfe0640(param_2);
  func_0x00010c1a7d00(puVar1);
  func_0x00010c2a11a0(param_2);
  dVar8 = (double)param_1;
  func_0x00010c2242e0(dVar8,puVar1);
  fVar7 = SUB84(dVar8,0);
  func_0x00010bf1c860(param_2);
  func_0x00010c171860(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c297860(param_2);
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dca0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c2a11c0(param_2);
  func_0x00010c224300((double)fVar7,puVar1);
  func_0x00010bf3efc0();
  func_0x00010c17dd20(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa1dc0(param_2);
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a960(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126c9b18;
  _objc_opt_new(PTR_PTR_1126c9b18);
  func_0x00010c2203c0();
  puVar5 = PTR_PTR_1126c9b20;
  _objc_opt_new(PTR_PTR_1126c9b20);
  puVar2 = PTR_PTR_1126c9b38;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  uVar4 = param_2;
  func_0x00010c11f960(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7220(puVar2);
  _objc_release(uVar4);
  func_0x00010c11f940(param_2);
  func_0x00010c1e71e0(puVar2);
  uVar4 = param_2;
  func_0x00010c11f980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7240(puVar2);
  _objc_release(uVar4);
  func_0x00010c0b4fe0(param_3);
  _objc_release(param_3);
  func_0x00010c1ecc00(puVar2);
  uVar4 = param_2;
  func_0x00010c08ada0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9240(puVar2);
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010bf27ce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175720(puVar2);
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c2976c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c220540(puVar2);
  _objc_release(uVar4);
  func_0x00010c1e7040(puVar5);
  _objc_release(puVar2);
  func_0x00010c1e06a0(puVar5);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126c9b28;
  _objc_opt_new(PTR_PTR_1126c9b28);
  func_0x00010c1ebfa0();
  puVar6 = PTR_PTR_1126c9b30;
  _objc_opt_new(PTR_PTR_1126c9b30);
  func_0x00010c1dd5e0();
  func_0x00010c1e0440(puVar3);
  func_0x00010c1dd440(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10630e1e8; end: 10630e29b; -[SCOperaPlaybackSnapshot initWithMediaVariants:framesDropped:operaFrameDrops:] */

undefined1 *
FUN_10630e1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10630e29c; end: 10630e2bf; -[SCOperaPlaybackSnapshot copyWithZone:] */

undefined8 FUN_10630e29c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10630e2c0; end: 10630e33f; -[SCOperaPlaybackSnapshot hash] */

undefined8 * FUN_10630e2c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10630e3d0:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10630e3dc;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10630e3dc;
        }
        goto LAB_10630e3d0;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10630e3dc:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10630e340; end: 10630e3f7; -[SCOperaPlaybackSnapshot isEqual:] */

long FUN_10630e340(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10630e3d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10630e3dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10630e3dc;
        }
        goto LAB_10630e3d0;
      }
    }
    lVar3 = 0;
  }
LAB_10630e3dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10630e3f8; end: 10630e3ff; -[SCOperaPlaybackSnapshot mediaVariants] */

undefined8 FUN_10630e3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10630e400; end: 10630e407; -[SCOperaPlaybackSnapshot framesDropped] */

undefined8 FUN_10630e400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10630e408; end: 10630e40f; -[SCOperaPlaybackSnapshot operaFrameDrops] */

undefined8 FUN_10630e408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10630e410; end: 10630e43f; -[SCOperaPlaybackSnapshot .cxx_destruct] */

void FUN_10630e410(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10630e440; end: 10630eb57;  */

/* WARNING: Possible PIC construction at 0x00010630e488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e6a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e6d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630e7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010630e774) */
/* WARNING: Removing unreachable block (ram,0x00010630e734) */
/* WARNING: Removing unreachable block (ram,0x00010630e704) */
/* WARNING: Removing unreachable block (ram,0x00010630e6d4) */
/* WARNING: Removing unreachable block (ram,0x00010630e6a4) */
/* WARNING: Removing unreachable block (ram,0x00010630e674) */
/* WARNING: Removing unreachable block (ram,0x00010630e644) */
/* WARNING: Removing unreachable block (ram,0x00010630e614) */
/* WARNING: Removing unreachable block (ram,0x00010630e5e4) */
/* WARNING: Removing unreachable block (ram,0x00010630e5b4) */
/* WARNING: Removing unreachable block (ram,0x00010630e584) */
/* WARNING: Removing unreachable block (ram,0x00010630e554) */
/* WARNING: Removing unreachable block (ram,0x00010630e524) */
/* WARNING: Removing unreachable block (ram,0x00010630e4f4) */
/* WARNING: Removing unreachable block (ram,0x00010630e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010630e48c) */
/* WARNING: Removing unreachable block (ram,0x00010630e7b4) */
/* WARNING: Removing unreachable block (ram,0x00010630e9b0) */
/* WARNING: Removing unreachable block (ram,0x00010630e9f0) */
/* WARNING: Removing unreachable block (ram,0x00010630ea08) */
/* WARNING: Removing unreachable block (ram,0x00010630ea20) */
/* WARNING: Removing unreachable block (ram,0x00010630ea34) */
/* WARNING: Removing unreachable block (ram,0x00010630ea4c) */
/* WARNING: Removing unreachable block (ram,0x00010630ea64) */
/* WARNING: Removing unreachable block (ram,0x00010630ea74) */
/* WARNING: Removing unreachable block (ram,0x00010630ea84) */
/* WARNING: Removing unreachable block (ram,0x00010630ea94) */
/* WARNING: Removing unreachable block (ram,0x00010630eaa4) */
/* WARNING: Removing unreachable block (ram,0x00010630eab4) */
/* WARNING: Removing unreachable block (ram,0x00010630eac4) */
/* WARNING: Removing unreachable block (ram,0x00010630ead4) */
/* WARNING: Removing unreachable block (ram,0x00010630eae4) */
/* WARNING: Removing unreachable block (ram,0x00010630eaf4) */
/* WARNING: Removing unreachable block (ram,0x00010630eb04) */
/* WARNING: Removing unreachable block (ram,0x00010630eb14) */
/* WARNING: Removing unreachable block (ram,0x00010630eb24) */
/* WARNING: Removing unreachable block (ram,0x00010630eb34) */
/* WARNING: Removing unreachable block (ram,0x00010630eb44) */
/* WARNING: Removing unreachable block (ram,0x00010630eb50) */
/* WARNING: Removing unreachable block (ram,0x00010630ebec) */
/* WARNING: Removing unreachable block (ram,0x00010630ec08) */
/* WARNING: Removing unreachable block (ram,0x00010630ec14) */
/* WARNING: Removing unreachable block (ram,0x00010630ebd4) */
/* WARNING: Removing unreachable block (ram,0x00010630e98c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

undefined * FUN_10630e440(void)

{
  undefined *puVar1;
  
  func_0x00010630ec4c();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf135c0();
  return puVar1;
}



/* Entry: 10630eb58; end: 10630ec1b;  */

undefined * FUN_10630eb58(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined **ppuStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010630ec4c();
  uStack_38 = extraout_x8;
  _objc_retain();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dae8f8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,auStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010630ec30();
  func_0x00010630ec28();
  func_0x00010630ec38(uStack_38);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x19);
  func_0x00010630ec28();
  __Unwind_Resume(puVar2);
  return puVar2;
}



/* Entry: 10630ec1c; end: 10630ec5f;  */

void FUN_10630ec1c(void)

{
  return;
}



/* Entry: 10630ec60; end: 10630ed2b; -[SCActiveOperaPresenter initWithOperaSessionId:activeOperaSessionScopeExposer:activeOperaSessionScopeServices:] */

undefined1 *
FUN_10630ec60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0e50;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10630ed2c; end: 10630eddb; -[SCActiveOperaPresenter presentWithOperaController:playlistItemController:eventAnnouncer:delegate:] */

void FUN_10630ed2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x20,param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf234c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10630eddc; end: 10630ee0f; -[SCActiveOperaPresenter teardown] */

void FUN_10630eddc(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,0);
  return;
}



/* Entry: 10630ee10; end: 10630ee63; -[SCActiveOperaPresenter didRegisterPageFeatureDataProvider:] */

void FUN_10630ee10(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef0d80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10630ee64; end: 10630eea7; -[SCActiveOperaPresenter .cxx_destruct] */

void FUN_10630ee64(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10630eea8; end: 10630f167; -[SCOperaPresenter initWithPresentingViewController:operaDeckContainer:operaConfigurationInitializer:operaDependencies:testsHelperPlugin:trackerService:mediaResolverService:operaSessionId:operaSessionContext:activeOperaPresenter:contentResolutionSignalCollector:] */

undefined8 *
FUN_10630eea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f0e58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x21];
    puVar1[0x21] = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9948;
    func_0x00010bdface0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1270e0();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126d00();
    _objc_release(puVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10630f168; end: 10630f263; +[SCOperaPresenter _dependenciesEnsuringInternalConfigProvider:] */

void FUN_10630f168(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126b23c8;
      func_0x00010c0ea380(PTR_PTR_1126b23c8,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bf461c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b0000(puVar1,param_2,puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bf21f60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto LAB_10630f248;
    }
  }
  else {
    _objc_release();
  }
  _objc_retain(param_3);
  puVar2 = param_3;
LAB_10630f248:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10630f264; end: 10630f307; -[SCOperaPresenter dealloc] */

void FUN_10630f264(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2821e0();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2820e0();
    _objc_release(puVar1);
  }
  puStack_38 = PTR_PTR_1126f0e58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10630f308; end: 10630f30f; -[SCOperaPresenter transitionAnimator] */

void FUN_10630f308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_transitionAnimator_11267c3d0);
  return;
}



/* Entry: 10630f310; end: 10630f4b3; -[SCOperaPresenter presentViewingSessionWithPlaylistFetcher:playlistPlugins:baseView:config:] */

void FUN_10630f310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010bfce9e0();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c101300();
  _objc_release(lVar2);
  if (9 < lVar3) {
    lVar3 = 10;
  }
  *(long *)(param_1 + 0xc0) = lVar3;
  lVar3 = *(long *)(param_1 + 0xb0);
  func_0x00010c09d3c0();
  if (lVar3 < 2) {
    if (lVar3 != 0) {
      if (lVar3 != 1) goto LAB_10630f480;
LAB_10630f3f0:
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xb0),param_2,param_1);
      func_0x00010c10eec0(param_1,param_2,0,0,param_4,param_5,param_6);
      goto LAB_10630f480;
    }
    uVar1 = 1;
  }
  else {
    if (lVar3 == 2) {
      uVar1 = param_3;
      func_0x00010c13afe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bfb1100(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10eec0(param_1,param_2,uVar1,uVar4,param_4,param_5,param_6);
      _objc_release(uVar4);
      _objc_release(uVar1);
      goto LAB_10630f480;
    }
    if (lVar3 == 3) goto LAB_10630f3f0;
    if (lVar3 != 4) goto LAB_10630f480;
    uVar1 = 2;
  }
  func_0x00010bdfdbc0(param_1,param_2,uVar1);
LAB_10630f480:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630f4b4; end: 10630f5a3; -[SCOperaPresenter _setUpEventAnnouncerV2] */

void FUN_10630f4b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf99b60();
  _objc_release(uVar6);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126c9b40;
    _objc_opt_new(PTR_PTR_1126c9b40);
    puVar4 = PTR_PTR_1126c9b48;
    _objc_opt_new(PTR_PTR_1126c9b48);
    puVar5 = PTR_PTR_1126c9b50;
    _objc_alloc();
    func_0x00010c031f20();
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126c9b58;
    _objc_alloc();
    func_0x00010c031f40();
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10630f5a4; end: 10630fa6b; -[SCOperaPresenter presentViewingSessionWithDataModels:firstDisplayGroupDataModel:playlistPlugins:baseView:config:] */

void FUN_10630f5a4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c9b60;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfb2ba0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bfb2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf461c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0138a0();
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar2);
  func_0x00010bea9340(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar8);
  _objc_release(uVar4);
  _objc_storeWeak(param_1 + 0x20,param_6);
  _objc_retain(param_7);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_7;
  _objc_release(uVar8);
  uVar8 = param_7;
  func_0x00010bfce9e0();
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  uVar8 = param_5;
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bf09f60(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
  func_0x00010bf18180(PTR_PTR_1126c98e0);
  puVar1 = PTR_PTR_1126c9b68;
  _objc_alloc();
  func_0x00010c037340();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar7);
  func_0x00010bef8080(*(undefined8 *)(param_1 + 0x40));
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010c1d5440(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  func_0x00010bf18180(PTR_PTR_1126c98e0);
  puVar1 = PTR_PTR_1126c9948;
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2881e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdface0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
  _objc_release(uVar7);
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  func_0x00010bf18180(PTR_PTR_1126c98e0);
  func_0x00010beae900(param_1);
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10630fa6c;
  uStack_88 = 0x10630fa7c;
  uStack_80 = 0;
  uVar4 = param_1;
  func_0x00010be752c0();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010beaef60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puStack_a0[5];
    puStack_a0[5] = uVar4;
    _objc_release(uVar7);
    if (puStack_a0[5] == 0) {
      func_0x00010bdfdbc0(param_1);
      goto LAB_10630f9b4;
    }
  }
  _objc_initWeak(auStack_b0,param_1);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10630fa84;
  puStack_d0 = &UNK_11091c698;
  _objc_copyWeak(auStack_b8,auStack_b0);
  puStack_c0 = &uStack_a8;
  _objc_retain(param_7);
  ppuVar5 = &puStack_e8;
  uStack_c8 = param_7;
  _objc_retainBlock();
  uVar7 = param_7;
  func_0x00010c27f1e0();
  if ((int)uVar7 == 0) {
    (*(code *)ppuVar5[2])(ppuVar5,0,0,0);
  }
  else {
    _objc_initWeak(auStack_f0,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_f8,auStack_f0);
    func_0x00010c109440(uVar7);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_f0);
  }
  _objc_release(ppuVar5);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
LAB_10630f9b4:
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10630fa6c; end: 10630fa83;  */

void FUN_10630fa6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10630fa84; end: 10630faf7;  */

void FUN_10630fa84(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75380();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10630faf8; end: 10630fb23;  */

void FUN_10630faf8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be008c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10630fb24; end: 10630fdef; -[SCOperaPresenter _playlistItemPreparationCompleted:error:baseLayerType:initialViewModel:presentingConfig:] */

void FUN_10630fb24(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010be8c6e0(param_2);
  if ((param_2[0x99] & 1) == 0) {
    if ((param_4 == 0) || (uVar6 = param_8, func_0x00010bfa0340(), (int)uVar6 != 0)) {
      if (*(long *)(param_2 + 0x70) == 0) {
        puVar1 = param_2;
        func_0x00010be752c0();
        uVar6 = param_7;
        if ((int)puVar1 != 0) {
          func_0x00010bedaea0(param_2);
          uVar6 = *(undefined8 *)(param_2 + 0xb8);
          _objc_retain(uVar6);
          _objc_release(param_7);
        }
        puVar1 = PTR_PTR_1126c9b70;
        _objc_alloc();
        func_0x00010c001c00();
        uVar4 = *(undefined8 *)(param_2 + 0x70);
        *(undefined **)(param_2 + 0x70) = puVar1;
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_2 + 0x70);
        func_0x00010c08f5e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + 0x60);
        *(undefined8 *)(param_2 + 0x60) = uVar4;
        _objc_release(uVar5);
        func_0x00010c1d5860(*(undefined8 *)(param_2 + 0x30),param_3,*(undefined8 *)(param_2 + 0x70))
        ;
        func_0x00010c200ea0(*(undefined8 *)(param_2 + 0x70),param_3,param_2[0xf0]);
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class();
        func_0x00010c14de00(puVar1,param_3,&PTR____CFConstantStringClassReference_110e4a998);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126c9b78;
        _objc_alloc();
        func_0x00010c050a20();
        uVar4 = *(undefined8 *)(param_2 + 0x78);
        *(undefined **)(param_2 + 0x78) = puVar2;
        _objc_release(uVar4);
        func_0x00010c1d53c0(*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x78))
        ;
        func_0x00010c10f140(*(undefined8 *)(param_2 + 0xe0),param_3,*(undefined8 *)(param_2 + 0x78),
                            *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x90),param_2)
        ;
        puVar2 = param_2;
        func_0x00010bf6a8a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 == (undefined *)0x0) {
          puVar3 = PTR_PTR_1126c9b80;
          _objc_alloc(PTR_PTR_1126c9b80);
          puVar2 = param_2 + 0x20;
          _objc_loadWeakRetained(puVar2);
          func_0x00010c2744e0(param_8);
          uVar4 = param_8;
          func_0x00010c27aa00(param_8);
          func_0x00010bff71a0(param_1,puVar3,param_3,puVar2,1,uVar4);
          _objc_release(puVar2);
          uVar4 = param_8;
          func_0x00010c26e360(param_8);
          func_0x00010c214420(puVar3,param_3,uVar4);
          uVar4 = *(undefined8 *)(param_2 + 0x70);
          param_2 = param_2 + 8;
          _objc_loadWeakRetained(param_2);
          func_0x00010c10c3a0(uVar4,param_3,param_2,puVar3);
          _objc_release(param_2);
        }
        else {
          puVar2 = param_2;
          func_0x00010bf6a8a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17c3e0();
          _objc_release(puVar2);
          uVar4 = *(undefined8 *)(param_2 + 0x70);
          func_0x00010bf6a8a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c10f260(uVar4,param_3,param_2);
          puVar3 = param_2;
        }
        _objc_release(puVar3);
        _objc_release(puVar1);
        param_7 = uVar6;
      }
    }
    else {
      func_0x00010bdfdbc0(param_2,param_3,3);
    }
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10630fdf0; end: 106310087; -[SCOperaPresenter _setupPlaylistViewCoordinatorWithItemGroupDataModels:firstDisplayGroupDataModel:] */

void FUN_10630fdf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c98e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf18180(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4a9b8);
  puVar2 = PTR_PTR_1126c9b88;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0c6c40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0c6440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf9eb20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c108ae0();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fdc0(puVar2,param_2,param_3,param_4,uVar3,uVar4,uVar5,uVar10,uVar12,uVar6,uVar11,
                      uVar8,0,*(undefined8 *)(param_1 + 0xe8));
  _objc_release(param_4);
  _objc_release(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30),param_2,param_1);
  func_0x00010c1d5860(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1d5360(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x50));
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4a9d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9b78;
    _objc_alloc();
    func_0x00010c050a20();
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar11);
    func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x38));
    puVar2 = PTR_PTR_1126c98e0;
    func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4a9f8);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf56960(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 106310088; end: 1063102f7; -[SCOperaPresenter _setupOperaConfigurationWithPresentingConfig:] */

void FUN_106310088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_7);
  lVar2 = *(long *)(param_5 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + 0x50);
    *(long *)(param_5 + 0x50) = lVar2;
    _objc_release(uVar9);
  }
  puVar3 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac5c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c2b4880(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b69c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b33c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8d60(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a75e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = *(long *)(param_5 + 0x50);
  func_0x00010c0d6c60();
  if (lVar2 == 1) {
    uVar5 = *(ulong *)(param_5 + 0x58);
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c230f20();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x00010bf02080(PTR_PTR_1126c9b90);
      func_0x00010bf020a0(PTR_PTR_1126c9b90);
      func_0x00010c2bc6c0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + 0x50);
  *(undefined **)(param_5 + 0x50) = puVar4;
  _objc_release(uVar9);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x50));
  uVar8 = *(undefined8 *)(param_5 + 0x40);
  uVar9 = param_1;
  uVar11 = param_2;
  uVar12 = param_3;
  uVar13 = param_4;
  func_0x00010c2881c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_5 + 0x50);
  *(undefined8 *)(param_5 + 0x50) = uVar8;
  _objc_release(uVar10);
  uVar1 = (undefined1)*(undefined8 *)(param_5 + 0x50);
  func_0x00010bf20c00();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar9,uVar11,uVar12,uVar13);
  *(undefined1 *)(param_5 + 0xf0) = uVar1;
  func_0x00010c200ea0(*(undefined8 *)(param_5 + 0x70));
  func_0x00010bf76cc0(*(undefined8 *)(param_5 + 0x40));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1063102f8; end: 10631033f; -[SCOperaPresenter updateBaseView:] */

void FUN_1063102f8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x20,param_3);
  if (param_3 != 0) {
    func_0x00010c16f460(*(undefined8 *)(param_1 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106310340; end: 106310347; -[SCOperaPresenter updateBaseViewFrame:] */

void FUN_106310340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setBaseViewFrame__112639758);
  return;
}



/* Entry: 106310348; end: 1063103ab; -[SCOperaPresenter updatePlaylistWithGroupDataModels:] */

void FUN_106310348(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010be87c80(param_1,param_2,param_3,0);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bf84cc0(param_1,param_2,1);
  }
  else {
    func_0x00010c2889e0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063103ac; end: 10631042f; -[SCOperaPresenter updatePlaylistWithGroupDataModels:initialGroup:] */

void FUN_1063103ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be87c80(param_1,param_2,param_3,param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bf84cc0(param_1,param_2,1);
  }
  else {
    func_0x00010c288a00(*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106310430; end: 10631054b; -[SCOperaPresenter _recoverFromPlaylistFetcherFailureWithGroupDataModels:firstDisplayGroupDataModel:] */

void FUN_106310430(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (((lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0xb0), lVar1 != 0)) &&
     (func_0x00010c09d3c0(), lVar1 == 3)) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1012e0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar1 = param_1;
      func_0x00010beaef60(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        func_0x00010c1cd2c0(*(undefined8 *)(param_1 + 0xb8),param_2,lVar1);
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c0f2200(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3bbe0();
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0xb8) = 0;
        _objc_release(uVar3);
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xb0),param_2,0);
        uVar3 = *(undefined8 *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xb0) = 0;
        _objc_release(uVar3);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10631054c; end: 106310917; -[SCOperaPresenter logShakeToReportState:] */

void FUN_10631054c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4aa38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010bef9860(param_3,param_2,&PTR____CFConstantStringClassReference_110e4aa58);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfce9e0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4aa78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c27f1e0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4aa98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfa0340();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4aab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0d6c60();
  func_0x000107d36104();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4aad8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2361a0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4aaf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2744e0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4ab18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c27aa00();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4ab38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c298f40();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4ab58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c298f80();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4ab78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c0ab360(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110e4ab98);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0ab360(param_3,param_2,lVar4,&PTR____CFConstantStringClassReference_110e4abb8);
  _objc_release(lVar4);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0ab360(param_3,param_2,lVar4,&PTR____CFConstantStringClassReference_110e4abd8);
  _objc_release(lVar4);
  func_0x00010c0ab360(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e4abf8);
  func_0x00010c0ab360(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e0b2f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4ac18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106310918; end: 106310a07; -[SCOperaPresenter itemIdFor:page:] */

void FUN_106310918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c22a480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0eb3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101440(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106310a08; end: 106310a67; -[SCOperaPresenter _didFailToPresent:] */

void FUN_106310a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x00010be8fee0(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eae40();
  _objc_release(uVar1);
  func_0x00010becaf20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106310a68; end: 106310b97; -[SCOperaPresenter _reportOperaSessionFailed:] */

void FUN_106310a68(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf1f440();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126afdd8;
  if ((int)uVar2 != 0) {
    if (param_3 < 6) {
      ppuVar7 = (undefined **)(&PTR_PTR_11091c6c8)[param_3];
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c0f2220(uVar3);
    func_0x00010bfc8740(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    puVar6 = PTR_PTR_1126afdd8;
    if (puVar5 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0f2240(uVar3);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0xd8);
      func_0x00010c0f2220(uVar3);
    }
    func_0x00010bfc8740(puVar6,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38640(param_1,param_2,ppuVar7,puVar6);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106310b98; end: 106310c07; -[SCOperaPresenter _incrementOperaSessionFailedWithErrorType:pageName:] */

void FUN_106310b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c99e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  FUN_10636e070();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106310c08; end: 106310e3f; -[SCOperaPresenter registeredEventsForOperaSession] */

void FUN_106310c08(undefined8 param_1,undefined8 param_2)

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
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf18820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_d0 = puVar1;
  func_0x00010bfafaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_c8 = puVar2;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_c0 = puVar3;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_b8 = puVar4;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_b0 = puVar5;
  func_0x00010bf2e260();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_a8 = puVar6;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2330;
  puStack_a0 = puVar7;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2338;
  puStack_98 = puVar8;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2330;
  puStack_90 = puVar9;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c95c8;
  puStack_88 = puVar10;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2330;
  puStack_80 = puVar11;
  func_0x00010c29e020();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2330;
  puStack_78 = puVar12;
  func_0x00010c29e3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,0xd);
  _objc_retainAutoreleasedReturnValue();
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  uVar15 = *(ulong *)(puVar1 + 0x58);
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf7fd60();
  _objc_release(uVar15);
  if ((uVar16 & 1) == 0) {
    if ((puVar1[0x9a] & 1) != 0) {
      return;
    }
    puVar1[0x9a] = 1;
  }
  puVar1 = puVar1 + 0x10;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c24db60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106310e40; end: 106310ed7; -[SCOperaPresenter _startDeckDismissalIfNeeded] */

void FUN_106310e40(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x58);
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7fd60();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x9a) & 1) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x9a) = 1;
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24db60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106310ed8; end: 10631144b; -[SCOperaPresenter operaViewDidSendEvent:page:params:] */

void FUN_106310ed8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf18820(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bfafaa0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_106310fa0;
      lVar6 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf437e0();
      _objc_release(lVar6);
      *(undefined1 *)(param_1 + 0x98) = 1;
LAB_106311018:
      func_0x00010be9ef00(param_1);
      goto LAB_106310fa0;
    }
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf17f80(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf17ae0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010bfaf7a0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 == 0) {
          puVar1 = PTR_PTR_1126b2330;
          func_0x00010bf2e260(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            puVar1 = PTR_PTR_1126b2330;
            func_0x00010c0e9c40(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar1);
            _objc_release(puVar1);
            puVar1 = PTR_PTR_1126b2340;
            if ((int)uVar2 != 0) {
              if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
                uVar3 = param_4;
                func_0x00010c118b40(param_4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c076c60(puVar1,param_2,uVar3);
                _objc_release(uVar3);
                if ((int)puVar1 != 0) {
                  *(undefined1 *)(param_1 + 0xa8) = 1;
                  func_0x00010be9ef00(param_1);
                }
              }
              uVar3 = param_4;
              func_0x00010c118b40();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf1f3c0();
              _objc_release(uVar4);
              _objc_release(uVar3);
              if ((uVar5 & 1) == 0) {
                func_0x00010c21e520(*(undefined8 *)(param_1 + 0x60),param_2,0);
              }
              goto LAB_106310fa0;
            }
            puVar1 = PTR_PTR_1126b2330;
            func_0x00010c0e9c60(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar1);
            _objc_release(puVar1);
            puVar1 = PTR_PTR_1126b2340;
            if ((int)uVar2 == 0) {
              puVar1 = PTR_PTR_1126b2338;
              func_0x00010c0c6900(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0(param_3,param_2,puVar1);
              _objc_release(puVar1);
              if ((int)uVar2 == 0) {
                puVar1 = PTR_PTR_1126b2330;
                func_0x00010bf3df20(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0(param_3,param_2,puVar1);
                _objc_release(puVar1);
                if ((int)uVar2 == 0) {
                  puVar1 = PTR_PTR_1126c95c8;
                  func_0x00010c09d2c0(PTR_PTR_1126c95c8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = param_3;
                  func_0x00010c0720c0(param_3,param_2,puVar1);
                  _objc_release(puVar1);
                  if (((int)uVar2 != 0) && (lVar6 = param_1, func_0x00010be752c0(), (int)lVar6 != 0)
                     ) {
                    func_0x00010bfa9500(*(undefined8 *)(param_1 + 0xb0));
                  }
                }
                else {
                  func_0x00010becaf20(param_1);
                }
                goto LAB_106310fa0;
              }
              if ((*(byte *)(param_1 + 0xa8) & 1) != 0) goto LAB_106310fa0;
            }
            else {
              if ((*(byte *)(param_1 + 0xa8) & 1) != 0) goto LAB_106310fa0;
              uVar3 = param_4;
              func_0x00010c118b40(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c083240(puVar1,param_2,uVar3);
              _objc_release(uVar3);
              if (((ulong)puVar1 & 1) != 0) goto LAB_106310fa0;
            }
            *(undefined1 *)(param_1 + 0xa8) = 1;
            goto LAB_106311018;
          }
          *(undefined1 *)(param_1 + 0x9a) = 0;
          lVar6 = param_1 + 0x10;
          _objc_loadWeakRetained(lVar6);
          func_0x00010bf2dda0();
          _objc_release(lVar6);
          lVar6 = param_1 + 0x20;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c1a7f60();
          _objc_release(lVar6);
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0eade0();
        }
        else {
          *(undefined1 *)(param_1 + 0x9a) = 0;
          lVar6 = param_1 + 0x10;
          _objc_loadWeakRetained(lVar6);
          func_0x00010bf437c0();
          _objc_release(lVar6);
          lVar6 = param_1 + 0x20;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c1a7f60();
          _objc_release(lVar6);
          param_1 = param_1 + 0x100;
          _objc_loadWeakRetained(param_1);
          func_0x00010c0eae60();
        }
      }
      else {
        func_0x00010bebfc40(param_1);
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eafe0();
      }
    }
    else {
      func_0x00010bebfc40(param_1);
      lVar6 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c27a6a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb000(lVar6,param_2,param_1,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar6);
      uVar3 = *(ulong *)(param_1 + 0x68);
      func_0x00010c2361a0();
      if ((uVar3 & 1) != 0) goto LAB_106310fa0;
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1a7f60();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x9a) = 0;
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c24db80();
    _objc_release(lVar6);
    lVar6 = param_1 + 0x100;
    _objc_loadWeakRetained(lVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c27a6a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb020(lVar6,param_2,param_1,uVar2);
    _objc_release(uVar2);
    param_1 = lVar6;
  }
  _objc_release(param_1);
LAB_106310fa0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10631144c; end: 1063114d3; -[SCOperaPresenter _sendDidFinishPresentingCallbackIfNecessary] */

void FUN_10631144c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(char *)(param_1 + 0xa8) == '\x01')) {
    lVar1 = param_1 + 0x100;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c27a6a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eae80(lVar1,param_2,param_1,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1063114d4; end: 1063115f7; -[SCOperaPresenter _teardown] */

void FUN_1063114d4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010be8c6e0();
  func_0x00010c26ac40(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c26ac40(*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1f440();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010c26ac40(*(undefined8 *)(param_1 + 0xe0));
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010c0ddc40();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar4);
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1063115f8;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1063115f8; end: 106311647;  */

void FUN_1063115f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eaf20();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106311648; end: 106311657; -[SCOperaPresenter isPresenting] */

bool FUN_106311648(long param_1)

{
  return *(long *)(param_1 + 0x70) != 0;
}



/* Entry: 106311658; end: 10631168f; -[SCOperaPresenter isPresentingOtherViewController] */

bool FUN_106311658(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c10f940(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106311690; end: 106311697; -[SCOperaPresenter dismissWithAnimation:] */

void FUN_106311690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_dismissWithAnimation__1125becd8);
  return;
}



/* Entry: 106311698; end: 1063116f3; -[SCOperaPresenter dismissWithInteractionType:] */

void FUN_106311698(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c29cc40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84d40();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063116f4; end: 1063117b3; -[SCOperaPresenter overridePauseStateToResume] */

void FUN_1063116f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c29e000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0360();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c29d360(uVar3);
  uVar4 = uVar1;
  func_0x000109128eac(uVar1,uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c29e000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1063117b4; end: 10631186f; -[SCOperaPresenter overridePauseStateToPause] */

void FUN_1063117b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c29d360(uVar2);
  uVar3 = uVar4;
  func_0x000109128eac(uVar4,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c29e000(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200();
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c29e000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106311870; end: 106311877; -[SCOperaPresenter pauseOpera] */

void FUN_106311870(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pauseOperaWithOverlay__11261b1b0,1);
  return;
}



/* Entry: 106311878; end: 1063118bb; -[SCOperaPresenter pauseOperaWithOverlay:] */

void FUN_106311878(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c29e000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063118bc; end: 1063118ef; -[SCOperaPresenter resumeOpera] */

void FUN_1063118bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c29e000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063118f0; end: 106311923; -[SCOperaPresenter modalPresentationDidEnd] */

void FUN_1063118f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0cfb40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106311924; end: 106311957; -[SCOperaPresenter modalDismissalDidEnd] */

void FUN_106311924(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0cfb40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106311958; end: 106311973; -[SCOperaPresenter cancelPresentingIfNecessary] */

void FUN_106311958(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x99) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdfdbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didFailToPresent__11255d090,4);
  return;
}



/* Entry: 106311974; end: 106311997; -[SCOperaPresenter _playlistFetcherIsInProcess] */

bool FUN_106311974(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb0);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010c09d3c0();
    bVar1 = lVar2 != 2;
  }
  return bVar1;
}



/* Entry: 106311998; end: 106311a83; -[SCOperaPresenter _updateLoadingViewModelForPlaylistFetcher] */

void FUN_106311998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b2368;
  _objc_opt_new(PTR_PTR_1126b2368);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bf5f300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b53e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c2b53a0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e49f98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0xb8);
  puVar1 = PTR_PTR_1126c9b98;
  func_0x00010c0f2400(PTR_PTR_1126c9b98,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar4 = PTR_PTR_1126c9ba0;
    _objc_alloc();
    func_0x00010c032da0();
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined **)(param_1 + 0xb8) = puVar4;
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1d7e80(*(undefined8 *)(param_1 + 0xb8),param_2,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106311a84; end: 106311af7; -[SCOperaPresenter currentPlaylistItemGroupDataModel] */

void FUN_106311a84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = uVar3;
  func_0x00010c101260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63e80(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106311af8; end: 106311b97; -[SCOperaPresenter playlistItemGroupDataModels] */

void FUN_106311af8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c101260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106311b98; end: 106311ba7;  */

void FUN_106311b98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),
             PTR_s_dataModelForPlaylistItemGroup__1125b6948,param_2);
  return;
}



/* Entry: 106311ba8; end: 106311c03; -[SCOperaPresenter playlistViewCoordinator:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_106311ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ead60();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106311c04; end: 106311c77; -[SCOperaPresenter playlistViewCoordinator:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_106311c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ead80();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106311c78; end: 106311d1f; -[SCOperaPresenter playlistViewCoordinator:willEnterPlaylistGroupDataModel:prevGroupDataModel:] */

void FUN_106311c78(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7db00();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106311d20; end: 106311dc7; -[SCOperaPresenter playlistViewCoordinator:didEnterPlaylistItemDataModel:groupDataModel:] */

void FUN_106311d20(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75e60();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106311dc8; end: 106311e6f; -[SCOperaPresenter playlistViewCoordinator:didFinishLoadingPlaylistItemDataModel:groupDataModel:] */

void FUN_106311dc8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76b60();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106311e70; end: 106311f17; -[SCOperaPresenter playlistViewCoordinator:didStartPlayingPlaylistItemDataModel:groupDataModel:] */

void FUN_106311e70(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7bda0();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106311f18; end: 106311fbf; -[SCOperaPresenter playlistViewCoordinator:didExitPlayingPlaylistItemDataModel:groupDataModel:] */

void FUN_106311f18(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76080();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106311fc0; end: 1063121ef; -[SCOperaPresenter loadingStateChanged:] */

void FUN_106311fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010c09d3c0();
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      func_0x00010bdfdbc0(param_1);
      goto LAB_1063121cc;
    }
    if (lVar1 != 1) goto LAB_1063121cc;
  }
  else {
    if (lVar1 == 2) {
      uVar2 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c13afe0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010bfb1100(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010beaef60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (lVar1 == 0) {
        func_0x00010bdfdbc0(param_1);
      }
      else {
        func_0x00010c1cd2c0(*(undefined8 *)(param_1 + 0xb8));
        uVar2 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c0f2200(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3bbe0();
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0xb8) = 0;
        _objc_release(uVar2);
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xb0));
        uVar2 = *(undefined8 *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xb0) = 0;
        _objc_release(uVar2);
      }
      _objc_release(lVar1);
      goto LAB_1063121cc;
    }
    if (lVar1 != 3) {
      if (lVar1 == 4) {
        func_0x00010bf84cc0(param_1);
      }
      goto LAB_1063121cc;
    }
    if (0 < *(long *)(param_1 + 0xc0)) {
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
      lVar4 = *(long *)(param_1 + 0x58);
      func_0x00010c069200(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c101320();
      _objc_release(lVar4);
      _objc_initWeak(auStack_58,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1063121f0;
      puStack_68 = &UNK_1108434b0;
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x000100c749e0((float)lVar1 / 1000.0,"APPSTORE",&puStack_80);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_1063121cc;
    }
  }
  func_0x00010bedaea0(param_1);
LAB_1063121cc:
  _objc_release(param_3);
  return;
}



/* Entry: 1063121f0; end: 106312237;  */

void FUN_1063121f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0xb0), lVar1 != 0)) &&
     (func_0x00010c09d3c0(), lVar1 == 3)) {
    func_0x00010bfa9500(*(undefined8 *)(param_1 + 0xb0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106312238; end: 10631226f; -[SCOperaPresenter _didStartToWaitForFirstPlaylistItemToDisplay] */

void FUN_106312238(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdc74a0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106312270; end: 106312323; -[SCOperaPresenter _addLoadingIndicatorToView:] */

void FUN_106312270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0xa0);
  }
  func_0x00010c0699c0(lVar1);
  func_0x00010c202c80(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010bfb68e0(param_3);
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010bfb68e0(param_3);
  _CGRectGetMidY();
  func_0x00010c17a860(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xa0),param_2,0);
  func_0x00010befbb60(param_3,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106312324; end: 106312373; -[SCOperaPresenter _removeLoadingIndicator] */

void FUN_106312324(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xa0),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 106312374; end: 10631237f; -[SCOperaPresenter activeOperaPresenter:didRegisterPageFeatureDataProvider:] */

void FUN_106312374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setPageFeatureDataProvider__112653a80,param_4);
  return;
}



/* Entry: 106312380; end: 106312387; -[SCOperaPresenter defaultTransitionAnimator] */

undefined8 FUN_106312380(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106312388; end: 1063123b7; -[SCOperaPresenter setDefaultTransitionAnimator:] */

void FUN_106312388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063123b8; end: 1063123cf; -[SCOperaPresenter delegate] */

void FUN_1063123b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063123d0; end: 1063123db; -[SCOperaPresenter setDelegate:] */

void FUN_1063123d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 1063123dc; end: 1063123e3; -[SCOperaPresenter operaSessionId] */

undefined8 FUN_1063123dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1063123e4; end: 10631253b; -[SCOperaPresenter .cxx_destruct] */

void FUN_1063123e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10631253c; end: 10631270b;  */

void FUN_10631253c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  puVar1 = param_1;
  func_0x00010c0d6c60();
  func_0x000107b7f578();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf61820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010befa160(puVar4);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c2aba40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126c9ba8);
  func_0x00010c2ac160(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c298f40(param_1);
  func_0x00010c2bc600(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c298f80(param_1);
  func_0x00010c2bc620(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c264dc0(param_1);
  _objc_release(param_1);
  func_0x00010c2baba0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10631270c; end: 106312777; -[SCOperaBlurView initWithConfiguration:] */

undefined1 * FUN_10631270c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0e60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1520(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106312778; end: 106312c23; -[SCOperaBlurView _setupViewsWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106312778(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  lVar13 = (long)_DAT_1127459c4;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar13));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar12 = (long)_DAT_1127459c8;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  lVar13 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar13 != 0) {
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    lVar13 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8220(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c1677c0(0x3fc3333333333333);
    func_0x00010c182220(puVar3);
    _objc_release(puVar1);
    func_0x00010bef6d60(uVar11);
    _objc_release(puVar3);
  }
  lVar13 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  if (lVar13 != 0) {
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar3);
    lVar13 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c212f20(puVar1);
    _objc_release(lVar13);
    func_0x00010c213040(puVar1);
    func_0x00010bef6d60(uVar11);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c207380(0x402e000000000000,*(undefined8 *)(param_1 + lVar12));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf493e0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(lVar13);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_1127459c4),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106312c24; end: 106312c4f; -[SCOperaBlurView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106312c24(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127459c4),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106312c50; end: 106312c8f; -[SCOperaBlurView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106312c50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127459c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127459c8,0);
  return;
}



/* Entry: 106312c90; end: 106312e7b;  */

void FUN_106312c90(undefined8 *param_1,double param_2,undefined8 param_3,double param_4,
                  double param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (param_2 == 1.0) {
    uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *param_1 = uVar4;
    param_1[3] = uVar8;
    param_1[2] = uVar6;
    uVar4 = *(undefined8 *)(puVar1 + 0x20);
    param_1[5] = *(undefined8 *)(puVar1 + 0x28);
    param_1[4] = uVar4;
  }
  else {
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    dVar13 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    dVar5 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    dStack_a0 = dVar13;
    dStack_90 = dVar5;
    _objc_retain();
    func_0x00010c219960(param_6);
    func_0x00010bf20c00(param_6);
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar9 = param_4;
    dVar14 = param_5;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar12 = dVar5;
    dVar7 = dVar13;
    dVar10 = dVar9;
    dVar11 = dVar14;
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar13 = dVar13 + dVar12;
    dVar14 = dVar14 - (dVar12 + dVar10);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513a0(dVar5 + dVar7,dVar13,dVar9 - (dVar7 + dVar11),dVar14,param_6);
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    dVar12 = (param_2 * dVar14) / param_5;
    _CGAffineTransformMakeScale(&uStack_b0,dVar12,dVar12);
    _CGAffineTransformMakeTranslation
              (&uStack_e0,16.0 - (1.0 - dVar12) * param_4 * 0.5,
               (dVar13 - (1.0 - dVar12) * param_5 * 0.5) + 8.0);
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    dStack_100 = dStack_a0;
    uStack_e8 = uStack_88;
    dStack_f0 = dStack_90;
    uStack_138 = uStack_d8;
    uStack_140 = uStack_e0;
    uStack_128 = uStack_c8;
    uStack_130 = uStack_d0;
    uStack_118 = uStack_b8;
    uStack_120 = uStack_c0;
    _CGAffineTransformConcat(param_1,&uStack_110,&uStack_140);
  }
  return;
}



/* Entry: 106312e7c; end: 106313197; +[SCOperaPageLayoutGuide pinToView:identifier:] */

void FUN_106312e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c9bb0;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010c1a99e0(puVar1);
  _objc_release(uVar2);
  func_0x00010bef9680(param_3);
  puVar3 = puVar1;
  func_0x00010c274200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c274200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217380(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1735a0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba000(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219520(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c274360();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf20080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c08de40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2793e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0fc170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  return;
}



/* Entry: 106313198; end: 1063131ab; -[SCOperaPageLayoutGuide pinView:] */

void FUN_106313198(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fc170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1,
             PTR_s_pinView_insets__11261ca78);
  return;
}


