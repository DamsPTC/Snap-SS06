/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fb48f0; end: 106fb49cf; +[SCSpectaclesHermosaRequestMessage getBatteryPreservationMode] */

undefined *
FUN_106fb48f0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 ****ppppuStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3be8;
  _objc_alloc_init(PTR_PTR_1126d3be8);
  func_0x00010c1a31c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fb49d0;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126c18d0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puVar3 = PTR_PTR_1126d3cd8;
    _objc_alloc_init(PTR_PTR_1126d3cd8);
    func_0x00010c16fb20(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf17660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8c60();
    _objc_release(puVar3);
    _objc_alloc();
    uVar7 = 1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c01a4a0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release();
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126c18d0;
      pcStack_88 = FUN_106fb4ae4;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_90 = &puStack_50;
      _objc_retain(uVar7);
      _objc_retain(puVar4);
      _objc_alloc_init();
      puVar3 = puVar1;
      func_0x00010c1fe960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c1fe960(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c140();
      _objc_release(uVar7);
      _objc_release(puVar3);
      param_1 = puVar2;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a4a0(param_1,param_2,puVar3);
      _objc_release(puVar3);
      puVar4 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        pcStack_d8 = FUN_106fb4c18;
        lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar5 = PTR_PTR_1126c18d0;
        puStack_100 = puVar2;
        puStack_f8 = puVar3;
        puStack_f0 = param_1;
        puStack_e8 = puVar1;
        pppuStack_e0 = &ppuStack_90;
        _objc_alloc_init();
        puVar1 = puVar5;
        func_0x00010c11cba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar1);
        _objc_alloc();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_110 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_110,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01a4a0(puVar4,param_2,puVar1);
        _objc_release(puVar1);
        puVar3 = puVar5;
        _objc_release();
        param_1 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
          ___stack_chk_fail();
          pcStack_118 = FUN_106fb4cf4;
          lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar6 = PTR_PTR_1126c18d0;
          puStack_140 = puVar2;
          puStack_138 = puVar1;
          puStack_130 = puVar5;
          puStack_128 = puVar4;
          ppppuStack_120 = &pppuStack_e0;
          _objc_alloc_init();
          puVar1 = PTR_PTR_1126d3be8;
          _objc_alloc_init(PTR_PTR_1126d3be8);
          func_0x00010c1a3940(puVar6,param_2,puVar1);
          _objc_release(puVar1);
          _objc_alloc();
          uVar7 = 1;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_150 = puVar6;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_150,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01a4a0(puVar3,param_2,puVar1);
          _objc_release(puVar1);
          _objc_release(puVar6);
          param_1 = puVar3;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
            ___stack_chk_fail();
            puVar1 = PTR_PTR_1126c18d0;
            lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
            _objc_retain(param_5);
            _objc_retain(uVar7);
            _objc_alloc_init();
            puVar2 = PTR_PTR_1126d3ce0;
            _objc_alloc_init(PTR_PTR_1126d3ce0);
            func_0x00010c1fe320(puVar1,param_2,puVar2);
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c21e2a0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b73a0();
            _objc_release(uVar7);
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c21e2a0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d94e0();
            _objc_release(param_5);
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c21e2a0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1db280();
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c21e2a0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ec520();
            _objc_release(puVar2);
            _objc_alloc(puVar6);
            puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_1a0 = puVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a0,1);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c01a4a0(puVar6);
            _objc_release(puVar2);
            _objc_release(puVar1);
            param_1 = puVar6;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
              ___stack_chk_fail();
              if (puVar3 < (undefined *)0x4) {
                return (undefined *)(ulong)*(uint *)(&UNK_10ddc4d70 + (long)puVar3 * 4);
              }
              return (undefined *)0x0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fb49d0; end: 106fb4ae3; +[SCSpectaclesHermosaRequestMessage setBatteryPreservationMode:] */

undefined *
FUN_106fb49d0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3cd8;
  _objc_alloc_init(PTR_PTR_1126d3cd8);
  func_0x00010c16fb20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf17660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8c60();
  _objc_release(puVar2);
  _objc_alloc();
  uVar7 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c01a4a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c18d0;
    pcStack_48 = FUN_106fb4ae4;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(uVar7);
    _objc_retain(puVar4);
    _objc_alloc_init();
    puVar3 = puVar2;
    func_0x00010c1fe960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = puVar2;
    func_0x00010c1fe960(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c140();
    _objc_release(uVar7);
    _objc_release(puVar4);
    param_1 = puVar1;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a4a0(param_1,param_2,puVar4);
    _objc_release(puVar4);
    puVar3 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_98 = FUN_106fb4c18;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = PTR_PTR_1126c18d0;
      puStack_c0 = puVar1;
      puStack_b8 = puVar4;
      puStack_b0 = param_1;
      puStack_a8 = puVar2;
      ppuStack_a0 = &puStack_50;
      _objc_alloc_init();
      puVar2 = puVar5;
      func_0x00010c11cba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar2);
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a4a0(puVar3,param_2,puVar2);
      _objc_release(puVar2);
      puVar4 = puVar5;
      _objc_release();
      param_1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        pcStack_d8 = FUN_106fb4cf4;
        lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = PTR_PTR_1126c18d0;
        puStack_100 = puVar1;
        puStack_f8 = puVar2;
        puStack_f0 = puVar5;
        puStack_e8 = puVar3;
        pppuStack_e0 = &ppuStack_a0;
        _objc_alloc_init();
        puVar1 = PTR_PTR_1126d3be8;
        _objc_alloc_init(PTR_PTR_1126d3be8);
        func_0x00010c1a3940(puVar6,param_2,puVar1);
        _objc_release(puVar1);
        _objc_alloc();
        uVar7 = 1;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_110 = puVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_110,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01a4a0(puVar4,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar6);
        param_1 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
          ___stack_chk_fail();
          puVar1 = PTR_PTR_1126c18d0;
          lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(param_5);
          _objc_retain(uVar7);
          _objc_alloc_init();
          puVar2 = PTR_PTR_1126d3ce0;
          _objc_alloc_init(PTR_PTR_1126d3ce0);
          func_0x00010c1fe320(puVar1,param_2,puVar2);
          _objc_release(puVar2);
          puVar2 = puVar1;
          func_0x00010c21e2a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b73a0();
          _objc_release(uVar7);
          _objc_release(puVar2);
          puVar2 = puVar1;
          func_0x00010c21e2a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d94e0();
          _objc_release(param_5);
          _objc_release(puVar2);
          puVar2 = puVar1;
          func_0x00010c21e2a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1db280();
          _objc_release(puVar2);
          puVar2 = puVar1;
          func_0x00010c21e2a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ec520();
          _objc_release(puVar2);
          _objc_alloc(puVar6);
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_160 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_160,1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010c01a4a0(puVar6);
          _objc_release(puVar2);
          _objc_release(puVar1);
          param_1 = puVar6;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
            ___stack_chk_fail();
            if (puVar4 < (undefined *)0x4) {
              return (undefined *)(ulong)*(uint *)(&UNK_10ddc4d70 + (long)puVar4 * 4);
            }
            return (undefined *)0x0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fb4ae4; end: 106fb4c17; +[SCSpectaclesHermosaRequestMessage sendShakeToReportData:description:] */

undefined *
FUN_106fb4ae4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c18d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010c1fe960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c1fe960(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c140();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = param_1;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_106fb4c18;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126c18d0;
    puStack_80 = param_1;
    puStack_78 = puVar3;
    puStack_70 = puVar2;
    puStack_68 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puVar1 = puVar5;
    func_0x00010c11cba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar1);
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a4a0(puVar4,param_2,puVar1);
    _objc_release(puVar1);
    puVar3 = puVar5;
    _objc_release();
    puVar2 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_98 = FUN_106fb4cf4;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = PTR_PTR_1126c18d0;
      puStack_c0 = param_1;
      puStack_b8 = puVar1;
      puStack_b0 = puVar5;
      puStack_a8 = puVar4;
      ppuStack_a0 = &puStack_60;
      _objc_alloc_init();
      puVar1 = PTR_PTR_1126d3be8;
      _objc_alloc_init(PTR_PTR_1126d3be8);
      func_0x00010c1a3940(puVar6,param_2,puVar1);
      _objc_release(puVar1);
      _objc_alloc();
      uVar7 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a4a0(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar2 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        puVar1 = PTR_PTR_1126c18d0;
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(param_5);
        _objc_retain(uVar7);
        _objc_alloc_init();
        puVar2 = PTR_PTR_1126d3ce0;
        _objc_alloc_init(PTR_PTR_1126d3ce0);
        func_0x00010c1fe320(puVar1,param_2,puVar2);
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c21e2a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b73a0();
        _objc_release(uVar7);
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c21e2a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d94e0();
        _objc_release(param_5);
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c21e2a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1db280();
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c21e2a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ec520();
        _objc_release(puVar2);
        _objc_alloc(puVar6);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_120 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c01a4a0(puVar6);
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar2 = puVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
          ___stack_chk_fail();
          if ((undefined *)0x3 < puVar3) {
            return (undefined *)0x0;
          }
          return (undefined *)(ulong)*(uint *)(&UNK_10ddc4d70 + (long)puVar3 * 4);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 106fb4c18; end: 106fb4cf3; +[SCSpectaclesHermosaRequestMessage activateFastboot] */

undefined *
FUN_106fb4c18(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010c11cba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126c18d0;
    _objc_alloc_init();
    puVar3 = PTR_PTR_1126d3be8;
    _objc_alloc_init(PTR_PTR_1126d3be8);
    func_0x00010c1a3940(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_alloc();
    uVar5 = 1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a4a0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126c18d0;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(param_5);
      _objc_retain(uVar5);
      _objc_alloc_init();
      puVar3 = PTR_PTR_1126d3ce0;
      _objc_alloc_init(PTR_PTR_1126d3ce0);
      func_0x00010c1fe320(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c21e2a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b73a0();
      _objc_release(uVar5);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c21e2a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d94e0();
      _objc_release(param_5);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c21e2a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1db280();
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c21e2a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ec520();
      _objc_release(puVar3);
      _objc_alloc(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c01a4a0(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
      param_1 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        if ((undefined *)0x3 < puVar4) {
          return (undefined *)0x0;
        }
        return (undefined *)(ulong)*(uint *)(&UNK_10ddc4d70 + (long)puVar4 * 4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fb4cf4; end: 106fb4dd3; +[SCSpectaclesHermosaRequestMessage requestUserDeviceSecurityData] */

undefined *
FUN_106fb4cf4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3be8;
  _objc_alloc_init(PTR_PTR_1126d3be8);
  func_0x00010c1a3940(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_alloc();
  uVar5 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c18d0;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_5);
    _objc_retain(uVar5);
    _objc_alloc_init();
    puVar3 = PTR_PTR_1126d3ce0;
    _objc_alloc_init(PTR_PTR_1126d3ce0);
    func_0x00010c1fe320(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c21e2a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73a0();
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c21e2a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d94e0();
    _objc_release(param_5);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c21e2a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db280();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c21e2a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec520();
    _objc_release(puVar3);
    _objc_alloc(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c01a4a0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      if ((undefined *)0x3 < puVar4) {
        return (undefined *)0x0;
      }
      return (undefined *)(ulong)*(uint *)(&UNK_10ddc4d70 + (long)puVar4 * 4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fb4dd4; end: 106fb4f7b; +[SCSpectaclesHermosaRequestMessage setPhoneProximityEnable:lagunaId:passcode:] */

ulong FUN_106fb4dd4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c18d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3ce0;
  _objc_alloc_init(PTR_PTR_1126d3ce0);
  func_0x00010c1fe320(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e2a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b73a0();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e2a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d94e0();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e2a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db280();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e2a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec520();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c01a4a0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  if (puVar3 < (undefined *)0x4) {
    return (ulong)*(uint *)(&UNK_10ddc4d70 + (long)puVar3 * 4);
  }
  return 0;
}



/* Entry: 106fb4f7c; end: 106fb4f9b; +[SCSpectaclesHermosaRequestMessage _HRMPBLockOutEventFromSCSpectaclesLockOutEvent:] */

undefined4 FUN_106fb4f7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return *(undefined4 *)(&UNK_10ddc4d70 + param_3 * 4);
  }
  return 0;
}



/* Entry: 106fb4f9c; end: 106fb51ab; +[SCSpectaclesHermosaRequestMessage setLockOutEvent:lockOutTime:lagunaId:passcode:] */

void FUN_106fb4f9c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_5;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c18d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3ce0;
  _objc_alloc_init(PTR_PTR_1126d3ce0);
  func_0x00010c1fe320(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e2a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b73a0();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d94e0();
  _objc_release(param_6);
  _objc_release(puVar2);
  func_0x00010bdc3840(param_1,param_2,param_3);
  puVar3 = puVar1;
  func_0x00010c21e2a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c01a0();
  _objc_release(puVar3);
  if (param_4 != (undefined *)0x0) {
    func_0x00010c067fc0(param_4);
  }
  puVar3 = puVar1;
  func_0x00010c21e2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0200();
  _objc_release(puVar3);
  puVar4 = puVar1;
  func_0x00010c21e2a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec520();
  _objc_release(puVar4);
  _objc_alloc();
  uVar10 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126c18d0;
    pcStack_68 = FUN_106fb51ac;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_a0 = puVar2;
    puStack_98 = puVar3;
    puStack_90 = puVar4;
    puStack_88 = param_1;
    puStack_80 = puVar1;
    puStack_78 = param_4;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(uVar11);
    _objc_retain(uVar10);
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126d3ce0;
    _objc_alloc_init(PTR_PTR_1126d3ce0);
    func_0x00010c1fe320(puVar6,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar6;
    func_0x00010c21e2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73a0();
    _objc_release(uVar10);
    _objc_release(puVar1);
    puVar2 = puVar6;
    func_0x00010c21e2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d94e0();
    _objc_release(uVar11);
    _objc_release(puVar2);
    puVar3 = puVar6;
    func_0x00010c21e2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec520();
    _objc_release(puVar3);
    _objc_alloc();
    uVar11 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c01a4a0(puVar5,param_2,puVar4);
    _objc_release(puVar4);
    puVar7 = puVar6;
    _objc_release();
    param_1 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar8 = PTR_PTR_1126c18d0;
      pcStack_b8 = FUN_106fb5330;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_f0 = puVar1;
      puStack_e8 = puVar2;
      puStack_e0 = puVar3;
      puStack_d8 = puVar4;
      puStack_d0 = puVar5;
      puStack_c8 = puVar6;
      ppuStack_c0 = &puStack_70;
      _objc_retain(uVar11);
      _objc_retain(puVar9);
      _objc_alloc_init();
      puVar1 = PTR_PTR_1126d3ce8;
      _objc_alloc_init(PTR_PTR_1126d3ce8);
      func_0x00010c1fe300(puVar8,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar8;
      func_0x00010c21e240(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d94e0();
      _objc_release(puVar9);
      _objc_release(puVar1);
      puVar1 = puVar8;
      func_0x00010c21e240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ccb00();
      _objc_release(uVar11);
      _objc_release(puVar1);
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_100,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c01a4a0(puVar7,param_2,puVar2);
      _objc_release(puVar2);
      puVar3 = puVar8;
      _objc_release();
      param_1 = puVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
        ___stack_chk_fail();
        puVar5 = PTR_PTR_1126c18d0;
        pcStack_108 = FUN_106fb548c;
        lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_130 = puVar1;
        puStack_128 = puVar2;
        puStack_120 = puVar7;
        puStack_118 = puVar8;
        pppuStack_110 = &ppuStack_c0;
        _objc_retain(puVar4);
        _objc_alloc_init();
        puVar1 = PTR_PTR_1126d3cf0;
        _objc_alloc_init(PTR_PTR_1126d3cf0);
        func_0x00010c220d60(puVar5,param_2,puVar1);
        _objc_release(puVar1);
        puVar1 = puVar5;
        func_0x00010c298980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d94e0();
        _objc_release(puVar4);
        _objc_release(puVar1);
        puVar2 = puVar5;
        func_0x00010c298980(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar2);
        _objc_alloc();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_140 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_140,1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c01a4a0(puVar3,param_2,puVar2);
        _objc_release(puVar2);
        puVar4 = puVar5;
        _objc_release();
        param_1 = puVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
          ___stack_chk_fail();
          puVar7 = PTR_PTR_1126c18d0;
          pcStack_148 = FUN_106fb55cc;
          lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_170 = puVar1;
          puStack_168 = puVar2;
          puStack_160 = puVar3;
          puStack_158 = puVar5;
          pppuStack_150 = &pppuStack_110;
          _objc_retain(puVar6);
          _objc_alloc_init();
          puVar1 = PTR_PTR_1126d3cf0;
          _objc_alloc_init(PTR_PTR_1126d3cf0);
          func_0x00010c220d60(puVar7,param_2,puVar1);
          _objc_release(puVar1);
          puVar1 = puVar7;
          func_0x00010c298980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d94e0();
          _objc_release(puVar6);
          _objc_release(puVar1);
          puVar1 = puVar7;
          func_0x00010c298980(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0();
          _objc_release(puVar1);
          _objc_alloc();
          uVar11 = 1;
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_180 = puVar7;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c01a4a0(puVar4,param_2,puVar1);
          _objc_release(puVar1);
          _objc_release(puVar7);
          param_1 = puVar4;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
            ___stack_chk_fail();
            param_1 = PTR_PTR_1126c18d8;
            _objc_retain(uVar11);
            _objc_retain(puVar2);
            _objc_alloc_init();
            func_0x00010c1fe3c0();
            _objc_release(uVar11);
            puVar1 = PTR_PTR_1126c1910;
            _objc_alloc_init(PTR_PTR_1126c1910);
            func_0x00010c220160(param_1,param_2,puVar1);
            _objc_release(puVar1);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1e0 = 0xc2000000;
            pcStack_1d8 = FUN_106fb58ac;
            puStack_1d0 = &UNK_110841f20;
            _objc_retain(param_1);
            puStack_210 = puVar1;
            uStack_208 = 0xc2000000;
            uStack_200 = 0x106fb58e8;
            puStack_1f8 = &UNK_1108c9a88;
            puStack_1c8 = param_1;
            _objc_retain(param_1);
            puStack_238 = puVar1;
            uStack_230 = 0xc2000000;
            uStack_228 = 0x106fb5924;
            puStack_220 = &UNK_1108450c8;
            puStack_1f0 = param_1;
            _objc_retain(param_1);
            puStack_260 = puVar1;
            uStack_258 = 0xc2000000;
            pcStack_250 = FUN_106fb5974;
            puStack_248 = &UNK_110846710;
            puStack_218 = param_1;
            _objc_retain(param_1);
            puStack_240 = param_1;
            func_0x00010c0bcc80(puVar2,param_2,&puStack_1e8,&puStack_210,&puStack_238,&puStack_260,
                                &PTR___NSConcreteGlobalBlock_110986cb8);
            _objc_release(puVar2);
            puVar1 = puStack_240;
            _objc_retain(param_1);
            _objc_release(puVar1);
            _objc_release(puStack_218);
            _objc_release(puStack_1f0);
            _objc_release(puStack_1c8);
            _objc_release(param_1);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fb51ac; end: 106fb532f; +[SCSpectaclesHermosaRequestMessage setRequirePasscodeEnabled:lagunaId:passcode:] */

void FUN_106fb51ac(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c18d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3ce0;
  _objc_alloc_init(PTR_PTR_1126d3ce0);
  func_0x00010c1fe320(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b73a0();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010c21e2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d94e0();
  _objc_release(param_5);
  _objc_release(puVar3);
  puVar4 = puVar1;
  func_0x00010c21e2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec520();
  _objc_release(puVar4);
  _objc_alloc();
  uVar9 = 1;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c01a4a0(param_1,param_2,puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126c18d0;
    pcStack_58 = FUN_106fb5330;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_90 = puVar2;
    puStack_88 = puVar3;
    puStack_80 = puVar4;
    puStack_78 = puVar5;
    puStack_70 = param_1;
    puStack_68 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(uVar9);
    _objc_retain(puVar8);
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126d3ce8;
    _objc_alloc_init(PTR_PTR_1126d3ce8);
    func_0x00010c1fe300(puVar7,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar7;
    func_0x00010c21e240(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d94e0();
    _objc_release(puVar8);
    _objc_release(puVar1);
    puVar1 = puVar7;
    func_0x00010c21e240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ccb00();
    _objc_release(uVar9);
    _objc_release(puVar1);
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c01a4a0(puVar6,param_2,puVar2);
    _objc_release(puVar2);
    puVar3 = puVar7;
    _objc_release();
    param_1 = puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126c18d0;
      pcStack_a8 = FUN_106fb548c;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_d0 = puVar1;
      puStack_c8 = puVar2;
      puStack_c0 = puVar6;
      puStack_b8 = puVar7;
      ppuStack_b0 = &puStack_60;
      _objc_retain(puVar4);
      _objc_alloc_init();
      puVar1 = PTR_PTR_1126d3cf0;
      _objc_alloc_init(PTR_PTR_1126d3cf0);
      func_0x00010c220d60(puVar5,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar5;
      func_0x00010c298980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d94e0();
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar2 = puVar5;
      func_0x00010c298980(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar2);
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c01a4a0(puVar3,param_2,puVar2);
      _objc_release(puVar2);
      puVar4 = puVar5;
      _objc_release();
      param_1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        puVar8 = PTR_PTR_1126c18d0;
        pcStack_e8 = FUN_106fb55cc;
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_110 = puVar1;
        puStack_108 = puVar2;
        puStack_100 = puVar3;
        puStack_f8 = puVar5;
        ppuStack_f0 = &ppuStack_b0;
        _objc_retain(puVar6);
        _objc_alloc_init();
        puVar1 = PTR_PTR_1126d3cf0;
        _objc_alloc_init(PTR_PTR_1126d3cf0);
        func_0x00010c220d60(puVar8,param_2,puVar1);
        _objc_release(puVar1);
        puVar1 = puVar8;
        func_0x00010c298980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d94e0();
        _objc_release(puVar6);
        _objc_release(puVar1);
        puVar1 = puVar8;
        func_0x00010c298980(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar1);
        _objc_alloc();
        uVar9 = 1;
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_120 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c01a4a0(puVar4,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar8);
        param_1 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
          ___stack_chk_fail();
          param_1 = PTR_PTR_1126c18d8;
          _objc_retain(uVar9);
          _objc_retain(puVar2);
          _objc_alloc_init();
          func_0x00010c1fe3c0();
          _objc_release(uVar9);
          puVar1 = PTR_PTR_1126c1910;
          _objc_alloc_init(PTR_PTR_1126c1910);
          func_0x00010c220160(param_1,param_2,puVar1);
          _objc_release(puVar1);
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_180 = 0xc2000000;
          pcStack_178 = FUN_106fb58ac;
          puStack_170 = &UNK_110841f20;
          _objc_retain(param_1);
          puStack_1b0 = puVar1;
          uStack_1a8 = 0xc2000000;
          uStack_1a0 = 0x106fb58e8;
          puStack_198 = &UNK_1108c9a88;
          puStack_168 = param_1;
          _objc_retain(param_1);
          puStack_1d8 = puVar1;
          uStack_1d0 = 0xc2000000;
          uStack_1c8 = 0x106fb5924;
          puStack_1c0 = &UNK_1108450c8;
          puStack_190 = param_1;
          _objc_retain(param_1);
          puStack_200 = puVar1;
          uStack_1f8 = 0xc2000000;
          pcStack_1f0 = FUN_106fb5974;
          puStack_1e8 = &UNK_110846710;
          puStack_1b8 = param_1;
          _objc_retain(param_1);
          puStack_1e0 = param_1;
          func_0x00010c0bcc80(puVar2,param_2,&puStack_188,&puStack_1b0,&puStack_1d8,&puStack_200,
                              &PTR___NSConcreteGlobalBlock_110986cb8);
          _objc_release(puVar2);
          puVar1 = puStack_1e0;
          _objc_retain(param_1);
          _objc_release(puVar1);
          _objc_release(puStack_1b8);
          _objc_release(puStack_190);
          _objc_release(puStack_168);
          _objc_release(param_1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fb5330; end: 106fb548b; +[SCSpectaclesHermosaRequestMessage changePasscode:newPasscode:] */

void FUN_106fb5330(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c18d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3ce8;
  _objc_alloc_init(PTR_PTR_1126d3ce8);
  func_0x00010c1fe300(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d94e0();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c21e240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ccb00();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c01a4a0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c18d0;
    pcStack_58 = FUN_106fb548c;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = puVar2;
    puStack_78 = puVar3;
    puStack_70 = param_1;
    puStack_68 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126d3cf0;
    _objc_alloc_init(PTR_PTR_1126d3cf0);
    func_0x00010c220d60(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c298980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d94e0();
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar2 = puVar5;
    func_0x00010c298980(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar2);
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c01a4a0(puVar4,param_2,puVar2);
    _objc_release(puVar2);
    puVar3 = puVar5;
    _objc_release();
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      puVar6 = PTR_PTR_1126c18d0;
      pcStack_98 = FUN_106fb55cc;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_c0 = puVar1;
      puStack_b8 = puVar2;
      puStack_b0 = puVar4;
      puStack_a8 = puVar5;
      ppuStack_a0 = &puStack_60;
      _objc_retain(puVar7);
      _objc_alloc_init();
      puVar1 = PTR_PTR_1126d3cf0;
      _objc_alloc_init(PTR_PTR_1126d3cf0);
      func_0x00010c220d60(puVar6,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar6;
      func_0x00010c298980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d94e0();
      _objc_release(puVar7);
      _objc_release(puVar1);
      puVar1 = puVar6;
      func_0x00010c298980(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar1);
      _objc_alloc();
      uVar8 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c01a4a0(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar6);
      param_1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        param_1 = PTR_PTR_1126c18d8;
        _objc_retain(uVar8);
        _objc_retain(puVar2);
        _objc_alloc_init();
        func_0x00010c1fe3c0();
        _objc_release(uVar8);
        puVar1 = PTR_PTR_1126c1910;
        _objc_alloc_init(PTR_PTR_1126c1910);
        func_0x00010c220160(param_1,param_2,puVar1);
        _objc_release(puVar1);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_106fb58ac;
        puStack_120 = &UNK_110841f20;
        _objc_retain(param_1);
        puStack_160 = puVar1;
        uStack_158 = 0xc2000000;
        uStack_150 = 0x106fb58e8;
        puStack_148 = &UNK_1108c9a88;
        puStack_118 = param_1;
        _objc_retain(param_1);
        puStack_188 = puVar1;
        uStack_180 = 0xc2000000;
        uStack_178 = 0x106fb5924;
        puStack_170 = &UNK_1108450c8;
        puStack_140 = param_1;
        _objc_retain(param_1);
        puStack_1b0 = puVar1;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_106fb5974;
        puStack_198 = &UNK_110846710;
        puStack_168 = param_1;
        _objc_retain(param_1);
        puStack_190 = param_1;
        func_0x00010c0bcc80(puVar2,param_2,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0,
                            &PTR___NSConcreteGlobalBlock_110986cb8);
        _objc_release(puVar2);
        puVar1 = puStack_190;
        _objc_retain(param_1);
        _objc_release(puVar1);
        _objc_release(puStack_168);
        _objc_release(puStack_140);
        _objc_release(puStack_118);
        _objc_release(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fb548c; end: 106fb55cb; +[SCSpectaclesHermosaRequestMessage verifyPasscode:] */

void FUN_106fb548c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126c18d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3cf0;
  _objc_alloc_init(PTR_PTR_1126d3cf0);
  func_0x00010c220d60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c298980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d94e0();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010c298980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar3);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c01a4a0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c18d0;
    pcStack_48 = FUN_106fb55cc;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar2;
    puStack_68 = puVar3;
    puStack_60 = param_1;
    puStack_58 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126d3cf0;
    _objc_alloc_init(PTR_PTR_1126d3cf0);
    func_0x00010c220d60(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c298980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d94e0();
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c298980(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar1);
    _objc_alloc();
    uVar7 = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c01a4a0(puVar4,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar5);
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      param_1 = PTR_PTR_1126c18d8;
      _objc_retain(uVar7);
      _objc_retain(puVar2);
      _objc_alloc_init();
      func_0x00010c1fe3c0();
      _objc_release(uVar7);
      puVar1 = PTR_PTR_1126c1910;
      _objc_alloc_init(PTR_PTR_1126c1910);
      func_0x00010c220160(param_1,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_106fb58ac;
      puStack_d0 = &UNK_110841f20;
      _objc_retain(param_1);
      puStack_110 = puVar1;
      uStack_108 = 0xc2000000;
      uStack_100 = 0x106fb58e8;
      puStack_f8 = &UNK_1108c9a88;
      puStack_c8 = param_1;
      _objc_retain(param_1);
      puStack_138 = puVar1;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x106fb5924;
      puStack_120 = &UNK_1108450c8;
      puStack_f0 = param_1;
      _objc_retain(param_1);
      puStack_160 = puVar1;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_106fb5974;
      puStack_148 = &UNK_110846710;
      puStack_118 = param_1;
      _objc_retain(param_1);
      puStack_140 = param_1;
      func_0x00010c0bcc80(puVar2,param_2,&puStack_e8,&puStack_110,&puStack_138,&puStack_160,
                          &PTR___NSConcreteGlobalBlock_110986cb8);
      _objc_release(puVar2);
      puVar1 = puStack_140;
      _objc_retain(param_1);
      _objc_release(puVar1);
      _objc_release(puStack_118);
      _objc_release(puStack_f0);
      _objc_release(puStack_c8);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fb55cc; end: 106fb570b; +[SCSpectaclesHermosaRequestMessage performProximityUnlockWithPasscode:] */

void FUN_106fb55cc(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126c18d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3cf0;
  _objc_alloc_init(PTR_PTR_1126d3cf0);
  func_0x00010c220d60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c298980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d94e0();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c298980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  _objc_alloc();
  uVar4 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c01a4a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    param_1 = PTR_PTR_1126c18d8;
    _objc_retain(uVar4);
    _objc_retain(puVar3);
    _objc_alloc_init();
    func_0x00010c1fe3c0();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126c1910;
    _objc_alloc_init(PTR_PTR_1126c1910);
    func_0x00010c220160(param_1,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106fb58ac;
    puStack_90 = &UNK_110841f20;
    _objc_retain(param_1);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106fb58e8;
    puStack_b8 = &UNK_1108c9a88;
    puStack_88 = param_1;
    _objc_retain(param_1);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x106fb5924;
    puStack_e0 = &UNK_1108450c8;
    puStack_b0 = param_1;
    _objc_retain(param_1);
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_106fb5974;
    puStack_108 = &UNK_110846710;
    puStack_d8 = param_1;
    _objc_retain(param_1);
    puStack_100 = param_1;
    func_0x00010c0bcc80(puVar3,param_2,&puStack_a8,&puStack_d0,&puStack_f8,&puStack_120,
                        &PTR___NSConcreteGlobalBlock_110986cb8);
    _objc_release(puVar3);
    puVar1 = puStack_100;
    _objc_retain(param_1);
    _objc_release(puVar1);
    _objc_release(puStack_d8);
    _objc_release(puStack_b0);
    _objc_release(puStack_88);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fb570c; end: 106fb58ab; +[SCSpectaclesHermosaRequestMessage _setSettingRequestWithValue:forKey:] */

void FUN_106fb570c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126c18d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c1fe3c0();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126c1910;
  _objc_alloc_init(PTR_PTR_1126c1910);
  func_0x00010c220160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106fb58ac;
  puStack_50 = &UNK_110841f20;
  _objc_retain(puVar1);
  puStack_90 = puVar2;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106fb58e8;
  puStack_78 = &UNK_1108c9a88;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  puStack_b8 = puVar2;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106fb5924;
  puStack_a0 = &UNK_1108450c8;
  puStack_70 = puVar1;
  _objc_retain(puVar1);
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106fb5974;
  puStack_c8 = &UNK_110846710;
  puStack_98 = puVar1;
  _objc_retain(puVar1);
  puStack_c0 = puVar1;
  func_0x00010c0bcc80(param_3,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0,
                      &PTR___NSConcreteGlobalBlock_110986cb8);
  _objc_release(param_3);
  puVar2 = puStack_c0;
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(puStack_98);
  _objc_release(puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fb58ac; end: 106fb5973;  */

void FUN_106fb58ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fb5974; end: 106fb59b7;  */

void FUN_106fb5974(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19de40((float)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fb59b8; end: 106fb59bb;  */

void FUN_106fb59b8(void)

{
  return;
}



/* Entry: 106fb59bc; end: 106fb5bff; +[SCSpectaclesHermosaRequestMessage setBatchSettingsRequest:] */

ulong FUN_106fb59bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126d3cf8;
  _objc_alloc_init(PTR_PTR_1126d3cf8);
  func_0x00010c1fe040(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f0,0x10);
  if (uVar4 != 0) {
    lVar11 = *plStack_130;
    do {
      uVar12 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_138 + uVar12 * 8);
        uVar5 = uVar10;
        func_0x00010c296d80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c227ea0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010bea75e0(param_1,param_2,uVar5,uVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar5);
        func_0x00010befa120(puVar3,param_2,uVar6);
        _objc_release(uVar6);
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      uVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f0,0x10);
    } while (uVar4 != 0);
  }
  _objc_release(param_3);
  puVar7 = puVar2;
  func_0x00010c16f860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe420();
  _objc_release(puVar7);
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c01a4a0(param_1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_106fb5c00;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR_PTR_1126c18d0;
    puStack_170 = puVar3;
    uStack_168 = param_1;
    puStack_160 = puVar2;
    uStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126d3d00;
    _objc_alloc_init(PTR_PTR_1126d3d00);
    func_0x00010c1a3820(puVar7,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010bdc3860(uVar4,param_2,puVar8);
    puVar2 = puVar7;
    func_0x00010bfca2c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a060();
    _objc_release(puVar2);
    _objc_alloc(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_180 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c01a4a0(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar7);
    param_1 = uVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      uVar9 = 1;
      if (puVar3 == (undefined *)0x1) {
        uVar9 = 2;
      }
      uVar1 = 3;
      if (puVar3 != (undefined *)0x2) {
        uVar1 = uVar9;
      }
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fb5c00; end: 106fb5d17; +[SCSpectaclesHermosaRequestMessage getSettingsInCategory:] */

ulong FUN_106fb5c00(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126d3d00;
  _objc_alloc_init(PTR_PTR_1126d3d00);
  func_0x00010c1a3820(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bdc3860(param_1,param_2,param_3);
  puVar3 = puVar2;
  func_0x00010bfca2c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a060();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c01a4a0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  uVar5 = 1;
  if (puVar4 == (undefined *)0x1) {
    uVar5 = 2;
  }
  uVar1 = 3;
  if (puVar4 != (undefined *)0x2) {
    uVar1 = uVar5;
  }
  return (ulong)uVar1;
}



/* Entry: 106fb5d18; end: 106fb5d33; +[SCSpectaclesHermosaRequestMessage _HRMPBSettingCategoryFromCategory:] */

undefined4 FUN_106fb5d18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 1) {
    uVar2 = 2;
  }
  uVar1 = 3;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 106fb5d34; end: 106fb5e4f; +[SCSpectaclesHermosaRequestMessage launchLensWithLensId:] */

undefined * FUN_106fb5d34(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126c18d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3d08;
  _objc_alloc_init(PTR_PTR_1126d3d08);
  func_0x00010c1bc080(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c094d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fb5e50;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126c18d0;
    puStack_70 = puVar2;
    puStack_68 = puVar3;
    puStack_60 = param_1;
    puStack_58 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126d3d10;
    _objc_alloc_init(PTR_PTR_1126d3d10);
    func_0x00010c210c60(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    _objc_alloc(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a4a0(puVar4,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar5);
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fb5e50; end: 106fb5f2f; +[SCSpectaclesHermosaRequestMessage syncLenses] */

undefined8 FUN_106fb5e50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d3d10;
  _objc_alloc_init(PTR_PTR_1126d3d10);
  func_0x00010c210c60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_alloc(param_1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106fb5f30; end: 106fb5f37; +[SCSpectaclesHermosaRequestMessage firmwareUpdateUpload:startPosition:overwriteExistingFile:] */

undefined8 FUN_106fb5f30(void)

{
  return 0;
}



/* Entry: 106fb5f38; end: 106fb5f3f; +[SCSpectaclesHermosaRequestMessage firmwareGetCurrentVersion] */

undefined8 FUN_106fb5f38(void)

{
  return 0;
}



/* Entry: 106fb5f40; end: 106fb5f47; +[SCSpectaclesHermosaRequestMessage firmwareApplyFullUpdate] */

undefined8 FUN_106fb5f40(void)

{
  return 0;
}



/* Entry: 106fb5f48; end: 106fb5f4f; +[SCSpectaclesHermosaRequestMessage firmwareGetChecksum] */

undefined8 FUN_106fb5f48(void)

{
  return 0;
}



/* Entry: 106fb5f50; end: 106fb5f57; +[SCSpectaclesHermosaRequestMessage firmwwareRebootAndSwitchPartition] */

undefined8 FUN_106fb5f50(void)

{
  return 0;
}



/* Entry: 106fb5f58; end: 106fb5f5f; +[SCSpectaclesHermosaRequestMessage firmwareScheduleUpdate:targetDigest:isFullUpdate:] */

undefined8 FUN_106fb5f58(void)

{
  return 0;
}



/* Entry: 106fb5f60; end: 106fb5f67; +[SCSpectaclesHermosaRequestMessage firmwareCancelScheduledUpdate] */

undefined8 FUN_106fb5f60(void)

{
  return 0;
}



/* Entry: 106fb5f68; end: 106fb5f6f; +[SCSpectaclesHermosaRequestMessage debugLogFileListRequest] */

undefined8 FUN_106fb5f68(void)

{
  return 0;
}



/* Entry: 106fb5f70; end: 106fb5f77; +[SCSpectaclesHermosaRequestMessage debugLogFileRequestWithFilename:range:] */

undefined8 FUN_106fb5f70(void)

{
  return 0;
}



/* Entry: 106fb5f78; end: 106fb5f7f; +[SCSpectaclesHermosaRequestMessage analyticsFileListRequest] */

undefined8 FUN_106fb5f78(void)

{
  return 0;
}



/* Entry: 106fb5f80; end: 106fb5f87; +[SCSpectaclesHermosaRequestMessage analyticsFileGetWithFilename:range:] */

undefined8 FUN_106fb5f80(void)

{
  return 0;
}



/* Entry: 106fb5f88; end: 106fb5f8f; +[SCSpectaclesHermosaRequestMessage analyticsFileDeleteRequest] */

undefined8 FUN_106fb5f88(void)

{
  return 0;
}



/* Entry: 106fb5f90; end: 106fb5f97; +[SCSpectaclesHermosaRequestMessage enableLostMode] */

undefined8 FUN_106fb5f90(void)

{
  return 0;
}



/* Entry: 106fb5f98; end: 106fb5f9f; +[SCSpectaclesHermosaRequestMessage startFlightImuCalibrationRequest] */

undefined8 FUN_106fb5f98(void)

{
  return 0;
}



/* Entry: 106fb5fa0; end: 106fb5fa7; +[SCSpectaclesHermosaRequestMessage stopFlightImuCalibrationRequest] */

undefined8 FUN_106fb5fa0(void)

{
  return 0;
}



/* Entry: 106fb5fa8; end: 106fb5faf; -[SCSpectaclesHermosaRequestMessage hermosaRequests] */

undefined8 FUN_106fb5fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fb5fb0; end: 106fb5fbb; -[SCSpectaclesHermosaRequestMessage .cxx_destruct] */

void FUN_106fb5fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fb5fbc; end: 106fb6037;  */

undefined * FUN_106fb5fbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8988 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e909b8,
                        &UNK_10de1a30c,&UNK_10de1a360,7,FUN_106fb6038,2);
    do {
      if (puRam00000001136c8988 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8988;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8988,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8988 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8988;
}



/* Entry: 106fb6038; end: 106fb6047;  */

bool FUN_106fb6038(int param_1)

{
  return param_1 - 1U < 7;
}



/* Entry: 106fb6048; end: 106fb60d3; +[CHRPBCheeriosRpcRequest descriptor] */

undefined * FUN_106fb6048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e000,
                        &PTR____CFConstantStringClassReference_110e909d8,&PTR_DAT_1131990f0,
                        &PTR_DAT_113199108,0x45,0x220,0x1c);
    func_0x00010c229040();
    puRam00000001136c8990 = puVar1;
  }
  return puRam00000001136c8990;
}



/* Entry: 106fb60d4; end: 106fb6163; +[CHRPBCheeriosRpcResponse descriptor] */

undefined * FUN_106fb60d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e050,
                        &PTR____CFConstantStringClassReference_110e909f8,&PTR_DAT_1131990f0,
                        0x1131985c8,0x47,0x218,0x1d);
    func_0x00010c229040();
    puRam00000001136c8998 = puVar1;
  }
  return puRam00000001136c8998;
}



/* Entry: 106fb6164; end: 106fb61df;  */

undefined * FUN_106fb6164(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c89a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90a18,
                        &UNK_10de1a37c,&UNK_10de1a3c0,7,FUN_106fb61e0,2);
    do {
      if (puRam00000001136c89a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c89a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c89a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c89a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c89a0;
}



/* Entry: 106fb61e0; end: 106fb61eb;  */

bool FUN_106fb61e0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106fb61ec; end: 106fb6267;  */

undefined * FUN_106fb61ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c89a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90a38,
                        &UNK_10de1a3dc,&UNK_10de1a438,6,FUN_106fb6268,2);
    do {
      if (puRam00000001136c89a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c89a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c89a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c89a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c89a8;
}



/* Entry: 106fb6268; end: 106fb6273;  */

bool FUN_106fb6268(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106fb6274; end: 106fb62db; +[CHRPBMediaTypeAndSize descriptor] */

void FUN_106fb6274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e0f0,
                        &PTR____CFConstantStringClassReference_110e905d8,&PTR_DAT_1131999a8,
                        &PTR_DAT_113199a00,2,0xc,0x1c);
    puRam00000001136c89b0 = puVar1;
  }
  return;
}



/* Entry: 106fb62dc; end: 106fb6343; +[CHRPBMediaMetadata descriptor] */

void FUN_106fb62dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e140,
                        &PTR____CFConstantStringClassReference_110e90298,&PTR_DAT_1131999a8,
                        &PTR_s_uuid_113199a40,2,0x18,0x1c);
    puRam00000001136c89b8 = puVar1;
  }
  return;
}



/* Entry: 106fb6344; end: 106fb63ab; +[CHRPBMediaFileTransferRequest descriptor] */

void FUN_106fb6344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e190,
                        &PTR____CFConstantStringClassReference_110e902b8,&PTR_DAT_1131999a8,
                        &PTR_s_uuid_113199ac0,3,0x18,0x1c);
    puRam00000001136c89c0 = puVar1;
  }
  return;
}



/* Entry: 106fb63ac; end: 106fb6413; +[CHRPBMediaFileDeletionRequest descriptor] */

void FUN_106fb63ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e1e0,
                        &PTR____CFConstantStringClassReference_110e905f8,&PTR_DAT_1131999a8,
                        &PTR_s_uuid_1131999c0,1,0x10,0x1c);
    puRam00000001136c89c8 = puVar1;
  }
  return;
}



/* Entry: 106fb6414; end: 106fb647b; +[CHRPBMediaFileMarkTransferredRequest descriptor] */

void FUN_106fb6414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e230,
                        &PTR____CFConstantStringClassReference_110e90618,&PTR_DAT_1131999a8,
                        &PTR_s_uuid_1131999e0,1,0x10,0x1c);
    puRam00000001136c89d0 = puVar1;
  }
  return;
}



/* Entry: 106fb647c; end: 106fb64e3; +[CHRPBMediaRequest descriptor] */

void FUN_106fb647c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e280,
                        &PTR____CFConstantStringClassReference_110e902f8,&PTR_DAT_1131999a8,
                        &PTR_DAT_113199b80,4,0x20,0x1c);
    puRam00000001136c89d8 = puVar1;
  }
  return;
}



/* Entry: 106fb64e4; end: 106fb654b; +[CHRPBMediaData descriptor] */

void FUN_106fb64e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e2d0,
                        &PTR____CFConstantStringClassReference_110db5498,&PTR_DAT_1131999a8,
                        &PTR_s_uuid_113199c80,5,0x28,0x1c);
    puRam00000001136c89e0 = puVar1;
  }
  return;
}



/* Entry: 106fb654c; end: 106fb65b3; +[CHRPBMediaResponse descriptor] */

void FUN_106fb654c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e320,
                        &PTR____CFConstantStringClassReference_110e90318,&PTR_DAT_1131999a8,
                        &PTR_DAT_113199b20,3,0x20,0x1c);
    puRam00000001136c89e8 = puVar1;
  }
  return;
}



/* Entry: 106fb65b4; end: 106fb661b; +[CHRPBGetFileRequest descriptor] */

void FUN_106fb65b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e370,
                        &PTR____CFConstantStringClassReference_110e90a58,&PTR_DAT_1131999a8,
                        &PTR_DAT_113199a80,2,0x18,0x1c);
    puRam00000001136c89f0 = puVar1;
  }
  return;
}



/* Entry: 106fb661c; end: 106fb66ff; +[CHRPBGetFileResponse descriptor] */

void FUN_106fb661c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c89f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e3c0,
                        &PTR____CFConstantStringClassReference_110e90a78,&PTR_DAT_1131999a8,
                        &PTR_DAT_113199c00,4,0x28,0x1c);
    puRam00000001136c89f8 = puVar1;
  }
  return;
}



/* Entry: 106fb6700; end: 106fb670b;  */

bool FUN_106fb6700(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fb670c; end: 106fb6787;  */

undefined * FUN_106fb670c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8a08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90ab8,
                        &UNK_10de1a474,&UNK_10de1a484,2,FUN_106fb6788,2);
    do {
      if (puRam00000001136c8a08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8a08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8a08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8a08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8a08;
}



/* Entry: 106fb6788; end: 106fb6793;  */

bool FUN_106fb6788(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106fb6794; end: 106fb67fb; +[CHRPBTimeData descriptor] */

void FUN_106fb6794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e460,
                        &PTR____CFConstantStringClassReference_110e90ad8,&PTR_DAT_113199d20,
                        &PTR_DAT_113199d58,2,0x18,0x1c);
    puRam00000001136c8a10 = puVar1;
  }
  return;
}



/* Entry: 106fb67fc; end: 106fb6863; +[CHRPBDroppedFramesData descriptor] */

void FUN_106fb67fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e4b0,
                        &PTR____CFConstantStringClassReference_110e90af8,&PTR_DAT_113199d20,
                        &PTR_DAT_113199d98,2,0xc,0x1c);
    puRam00000001136c8a18 = puVar1;
  }
  return;
}



/* Entry: 106fb6864; end: 106fb68cb; +[CHRPBVideoData descriptor] */

void FUN_106fb6864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e500,
                        &PTR____CFConstantStringClassReference_110e90b18,&PTR_DAT_113199d20,
                        &PTR_s_durationMs_113199e58,3,0x18,0x1c);
    puRam00000001136c8a20 = puVar1;
  }
  return;
}



/* Entry: 106fb68cc; end: 106fb6933; +[CHRPBImageData descriptor] */

void FUN_106fb68cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e8e8,
                        &PTR____CFConstantStringClassReference_110e90b38,&PTR_DAT_113199d20,
                        &PTR_DAT_113199d38,1,0x10,0x1c);
    puRam00000001136c8a28 = puVar1;
  }
  return;
}



/* Entry: 106fb6934; end: 106fb69b7; +[CHRPBImageData_Burst descriptor] */

undefined * FUN_106fb6934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e910,
                        &PTR____CFConstantStringClassReference_110e90b58,&PTR_DAT_113199d20,
                        &PTR_DAT_11319a098,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c8a30 = puVar1;
  }
  return puRam00000001136c8a30;
}



/* Entry: 106fb69b8; end: 106fb6a1f; +[CHRPBCameraSensorData descriptor] */

void FUN_106fb69b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e5a0,
                        &PTR____CFConstantStringClassReference_110e90b78,&PTR_DAT_113199d20,
                        &PTR_DAT_11319a378,0xb,0x30,0x1c);
    puRam00000001136c8a38 = puVar1;
  }
  return;
}



/* Entry: 106fb6a20; end: 106fb6a87; +[CHRPBFirmwareVersion descriptor] */

void FUN_106fb6a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e5f0,
                        &PTR____CFConstantStringClassReference_110e90b98,&PTR_DAT_113199d20,
                        &PTR_DAT_113199eb8,3,0x20,0x1c);
    puRam00000001136c8a40 = puVar1;
  }
  return;
}



/* Entry: 106fb6a88; end: 106fb6aef; +[CHRPBFlightData descriptor] */

void FUN_106fb6a88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e640,
                        &PTR____CFConstantStringClassReference_110e90bb8,&PTR_DAT_113199d20,
                        &PTR_DAT_113199dd8,2,0x18,0x1c);
    puRam00000001136c8a48 = puVar1;
  }
  return;
}



/* Entry: 106fb6af0; end: 106fb6b57; +[CHRPBMediaFileMetadata descriptor] */

void FUN_106fb6af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e690,
                        &PTR____CFConstantStringClassReference_110e90bd8,&PTR_DAT_113199d20,
                        &PTR_DAT_11319a238,10,0x58,0x1c);
    puRam00000001136c8a50 = puVar1;
  }
  return;
}



/* Entry: 106fb6b58; end: 106fb6bbf; +[CHRPBAsset descriptor] */

void FUN_106fb6b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e6e0,
                        &PTR____CFConstantStringClassReference_110e7e598,&PTR_DAT_113199d20,
                        &PTR_s_id_p_113199e18,2,0x10,0x1c);
    puRam00000001136c8a58 = puVar1;
  }
  return;
}



/* Entry: 106fb6bc0; end: 106fb6c27; +[CHRPBGenericAssetsMetadata descriptor] */

void FUN_106fb6bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e730,
                        &PTR____CFConstantStringClassReference_110e90bf8,&PTR_DAT_113199d20,
                        &PTR_DAT_113199f18,3,0x18,0x1c);
    puRam00000001136c8a60 = puVar1;
  }
  return;
}



/* Entry: 106fb6c28; end: 106fb6c8f; +[CHRPBCameraData descriptor] */

void FUN_106fb6c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e780,
                        &PTR____CFConstantStringClassReference_110e8fa98,&PTR_DAT_113199d20,
                        &PTR_s_width_11319a198,5,0x20,0x1c);
    puRam00000001136c8a68 = puVar1;
  }
  return;
}



/* Entry: 106fb6c90; end: 106fb6cf7; +[CHRPBAttitudeFrame descriptor] */

void FUN_106fb6c90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e7d0,
                        &PTR____CFConstantStringClassReference_110e8fa18,&PTR_DAT_113199d20,
                        &PTR_DAT_113199f78,3,0x20,0x1c);
    puRam00000001136c8a70 = puVar1;
  }
  return;
}



/* Entry: 106fb6cf8; end: 106fb6d73; +[CHRPBAttitudeFrame_Translation descriptor] */

undefined * FUN_106fb6cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e820,
                        &PTR____CFConstantStringClassReference_110e90c18,&PTR_DAT_113199d20,
                        &PTR_DAT_113199fd8,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c8a78 = puVar1;
  }
  return puRam00000001136c8a78;
}



/* Entry: 106fb6d74; end: 106fb6def; +[CHRPBAttitudeFrame_Quaternion descriptor] */

undefined * FUN_106fb6d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e870,
                        &PTR____CFConstantStringClassReference_110e90c38,&PTR_DAT_113199d20,
                        &PTR_DAT_11319a118,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001136c8a80 = puVar1;
  }
  return puRam00000001136c8a80;
}



/* Entry: 106fb6df0; end: 106fb6e57; +[CHRPBSixDof descriptor] */

void FUN_106fb6df0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e8c0,
                        &PTR____CFConstantStringClassReference_110e90c58,&PTR_DAT_113199d20,
                        &PTR_DAT_11319a038,3,0x18,0x1c);
    puRam00000001136c8a88 = puVar1;
  }
  return;
}



/* Entry: 106fb6e58; end: 106fb6ebf; +[CHRPBBleName descriptor] */

void FUN_106fb6e58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4e9b0,
                        &PTR____CFConstantStringClassReference_110e90c78,&PTR_DAT_11319a4d8,
                        &PTR_DAT_11319a530,2,0x18,0x1c);
    puRam00000001136c8a90 = puVar1;
  }
  return;
}



/* Entry: 106fb6ec0; end: 106fb6f27; +[CHRPBMediaCountsResponse descriptor] */

void FUN_106fb6ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8a98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ea00,
                        &PTR____CFConstantStringClassReference_110e90c98,&PTR_DAT_11319a4d8,
                        &PTR_DAT_11319a4f0,1,0x10,0x1c);
    puRam00000001136c8a98 = puVar1;
  }
  return;
}



/* Entry: 106fb6f28; end: 106fb6f8f; +[CHRPBChargerStateResponse descriptor] */

void FUN_106fb6f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8aa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ea50,
                        &PTR____CFConstantStringClassReference_110e90cb8,&PTR_DAT_11319a4d8,
                        &PTR_DAT_11319a570,2,4,0x1c);
    puRam00000001136c8aa0 = puVar1;
  }
  return;
}



/* Entry: 106fb6f90; end: 106fb6ff7; +[CHRPBBoardIdResponse descriptor] */

void FUN_106fb6f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8aa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4eaa0,
                        &PTR____CFConstantStringClassReference_110e90cd8,&PTR_DAT_11319a4d8,
                        &PTR_DAT_11319a6b0,3,0x10,0x1c);
    puRam00000001136c8aa8 = puVar1;
  }
  return;
}



/* Entry: 106fb6ff8; end: 106fb705f; +[CHRPBKeyExchangeMessage descriptor] */

void FUN_106fb6ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4eaf0,
                        &PTR____CFConstantStringClassReference_110e90cf8,&PTR_DAT_11319a4d8,
                        &PTR_s_nonce_11319a5b0,2,0x18,0x1c);
    puRam00000001136c8ab0 = puVar1;
  }
  return;
}



/* Entry: 106fb7060; end: 106fb70c7; +[CHRPBPairingSignatureMessage descriptor] */

void FUN_106fb7060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4eb40,
                        &PTR____CFConstantStringClassReference_110e90d18,&PTR_DAT_11319a4d8,
                        &PTR_DAT_11319a5f0,2,0x18,0x1c);
    puRam00000001136c8ab8 = puVar1;
  }
  return;
}



/* Entry: 106fb70c8; end: 106fb712f; +[CHRPBPeerVerificationMessage descriptor] */

void FUN_106fb70c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4eb90,
                        &PTR____CFConstantStringClassReference_110e90d38,&PTR_DAT_11319a4d8,
                        &PTR_s_tag_11319a630,2,0x18,0x1c);
    puRam00000001136c8ac0 = puVar1;
  }
  return;
}



/* Entry: 106fb7130; end: 106fb7197; +[CHRPBRealTimeMessage descriptor] */

void FUN_106fb7130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ebe0,
                        &PTR____CFConstantStringClassReference_110e90d58,&PTR_DAT_11319a4d8,
                        &PTR_DAT_11319a710,3,0x18,0x1c);
    puRam00000001136c8ac8 = puVar1;
  }
  return;
}



/* Entry: 106fb7198; end: 106fb71ff; +[CHRPBValidatePairingRequest descriptor] */

void FUN_106fb7198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ec30,
                        &PTR____CFConstantStringClassReference_110e90d78,&PTR_DAT_11319a4d8,
                        &PTR_s_userId_11319a510,1,0x10,0x1c);
    puRam00000001136c8ad0 = puVar1;
  }
  return;
}



/* Entry: 106fb7200; end: 106fb72e3; +[CHRPBValidatePairingResponse descriptor] */

void FUN_106fb7200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ec80,
                        &PTR____CFConstantStringClassReference_110e90d98,&PTR_DAT_11319a4d8,
                        &PTR_s_result_11319a670,2,8,0x1c);
    puRam00000001136c8ad8 = puVar1;
  }
  return;
}



/* Entry: 106fb72e4; end: 106fb72ef;  */

bool FUN_106fb72e4(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106fb72f0; end: 106fb736b;  */

undefined * FUN_106fb72f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8ae8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90dd8,
                        &UNK_10de1a514,&UNK_10de1a564,4,FUN_106fb736c,2);
    do {
      if (puRam00000001136c8ae8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8ae8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8ae8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8ae8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8ae8;
}



/* Entry: 106fb736c; end: 106fb737b;  */

bool FUN_106fb736c(int param_1)

{
  return param_1 - 1U < 4;
}



/* Entry: 106fb737c; end: 106fb73f7;  */

undefined * FUN_106fb737c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8af0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90df8,
                        &UNK_10de1a574,&UNK_10de1a5ec,7,FUN_106fb73f8,2);
    do {
      if (puRam00000001136c8af0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8af0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8af0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8af0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8af0;
}



/* Entry: 106fb73f8; end: 106fb7403;  */

bool FUN_106fb73f8(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106fb7404; end: 106fb747f;  */

undefined * FUN_106fb7404(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8af8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90e18,
                        &UNK_10de1a608,&UNK_10de1a630,7,FUN_106fb7480,2);
    do {
      if (puRam00000001136c8af8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8af8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8af8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8af8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8af8;
}



/* Entry: 106fb7480; end: 106fb748b;  */

bool FUN_106fb7480(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106fb748c; end: 106fb751b;  */

undefined * FUN_106fb748c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90e38,
                        &UNK_10de1a64c,&UNK_10de1a66c,5,FUN_106fb751c,2,&UNK_10de1a680);
    do {
      if (puRam00000001136c8b00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b00;
}



/* Entry: 106fb751c; end: 106fb7527;  */

bool FUN_106fb751c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fb7528; end: 106fb75b7;  */

undefined * FUN_106fb7528(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90e58,
                        &UNK_10de1a685,&UNK_10de1a6ac,2,FUN_106fb75b8,2,&UNK_10de1a6b4);
    do {
      if (puRam00000001136c8b08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b08;
}



/* Entry: 106fb75b8; end: 106fb75c3;  */

bool FUN_106fb75b8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106fb75c4; end: 106fb763f;  */

undefined * FUN_106fb75c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90e78,
                        &UNK_10de1a6bd,&UNK_10de1a6f4,3,FUN_106fb7640,2);
    do {
      if (puRam00000001136c8b10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b10;
}



/* Entry: 106fb7640; end: 106fb764b;  */

bool FUN_106fb7640(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fb764c; end: 106fb76c7;  */

undefined * FUN_106fb764c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90e98,
                        &UNK_10de1a700,&UNK_10de1a750,4,FUN_106fb76c8,2);
    do {
      if (puRam00000001136c8b18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b18;
}



/* Entry: 106fb76c8; end: 106fb76e3;  */

uint FUN_106fb76c8(uint param_1)

{
  return (uint)(param_1 < 0x11) & 0x1001cU >> (ulong)(param_1 & 0x1f);
}


