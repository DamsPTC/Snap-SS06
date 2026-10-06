/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f804c8; end: 106f804eb; -[SCSpectaclesHermosaMessageBuffer _tlvLength] */

ulong FUN_106f804c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf25f00();
  return (ulong)*(uint3 *)(lVar1 + 1);
}



/* Entry: 106f804ec; end: 106f80507; -[SCSpectaclesHermosaMessageBuffer _tlvType] */

undefined1 FUN_106f804ec(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  func_0x00010bf25f00();
  return *puVar1;
}



/* Entry: 106f80508; end: 106f80533; -[SCSpectaclesHermosaMessageBuffer .cxx_destruct] */

void FUN_106f80508(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f80534; end: 106f805a7; -[SCSpectaclesHermosaNetworkRequestMessage initWithRPCRequest:] */

undefined1 * FUN_106f80534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8088;
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



/* Entry: 106f805a8; end: 106f805af; -[SCSpectaclesHermosaNetworkRequestMessage rpcRequest] */

undefined8 FUN_106f805a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f805b0; end: 106f805bb; -[SCSpectaclesHermosaNetworkRequestMessage .cxx_destruct] */

void FUN_106f805b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f805bc; end: 106f80633; -[SCSpectaclesHermosaNetworkRequest initWithHermosaRequests:] */

undefined1 * FUN_106f805bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f80634; end: 106f807bb; +[SCSpectaclesHermosaNetworkRequest requestByBatchingRequests:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000106f806bc */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_106f80634(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined1 auStack_2a8 [128];
  long lStack_228;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf51e00();
  lVar15 = lVar2;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  puVar19 = PTR_s_hermosaRequests_1125d5cb8;
  while (PTR_s_hermosaRequests_1125d5cb8 = puVar19, lVar15 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar2);
      }
      uVar17 = *(ulong *)(lVar18 * 8);
      uVar3 = uVar17;
      _objc_opt_respondsToSelector(uVar17,puVar19);
      if ((uVar3 & 1) != 0) {
        func_0x00010bfe0be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(uVar17);
      }
      lVar18 = lVar18 + 1;
    } while (lVar15 != lVar18);
    lVar15 = lVar2;
    func_0x00010bf52a60();
    puVar19 = PTR_s_hermosaRequests_1125d5cb8;
  }
  _objc_release(lVar2);
  puVar19 = PTR_PTR_1126d3828;
  _objc_alloc();
  func_0x00010c01a4a0();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126b6718;
    func_0x00010c0c5620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d38e0;
    _objc_alloc();
    func_0x00010c03cae0();
    puVar19 = PTR_PTR_1126d3828;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c01a4a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar6);
      puVar1 = puVar6;
      FUN_106fcfed8();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126d2f50;
      puVar4 = puVar6;
      func_0x00010c0f58c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010bf4db00(puVar19);
      _objc_release(puVar4);
      uVar11 = 0x7fffffffffffffff;
      uVar12 = 0x7fffffffffffffff;
      puVar4 = PTR_PTR_1126b6718;
      func_0x00010c1218a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d38e0;
      _objc_alloc();
      func_0x00010c03cae0();
      puVar19 = PTR_PTR_1126d3828;
      _objc_alloc();
      uVar9 = 1;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c01a4a0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
        ___stack_chk_fail();
        lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar13 = uVar12;
        _objc_retain(puVar8);
        puVar4 = puVar8;
        FUN_106fcfed8();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126d2f50;
        puVar1 = puVar8;
        func_0x00010c0f58c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4db00();
        _objc_release(puVar1);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        puVar6 = puVar4;
        FUN_106f74dc8(puVar4,puVar19,uVar9,uVar11,uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = auStack_2a8;
        uVar9 = 0x10;
        puVar1 = puVar6;
        func_0x00010bf52a60();
        lVar15 = lRam0000000000000000;
        puVar19 = PTR_PTR_1126d3828;
        while (PTR_PTR_1126d3828 = puVar19, puVar1 != (undefined *)0x0) {
          puVar19 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar15) {
              _objc_enumerationMutation(puVar6);
            }
            puVar7 = PTR_PTR_1126d38e0;
            _objc_alloc();
            func_0x00010c03cae0();
            func_0x00010befa120(puVar5);
            _objc_release(puVar7);
            puVar19 = puVar19 + 1;
          } while (puVar1 != puVar19);
          puVar10 = auStack_2a8;
          uVar9 = 0x10;
          puVar1 = puVar6;
          func_0x00010bf52a60();
          puVar19 = PTR_PTR_1126d3828;
        }
        _objc_alloc();
        puVar1 = puVar5;
        func_0x00010c01a4a0();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
          ___stack_chk_fail();
          lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(puVar1);
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          puVar6 = puVar1;
          FUN_106f74e90(puVar1,puVar10,uVar9,uVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar6;
          func_0x00010bf52a60();
          lVar15 = lRam0000000000000000;
          puVar19 = PTR_PTR_1126d3828;
          while (PTR_PTR_1126d3828 = puVar19, puVar4 != (undefined *)0x0) {
            puVar19 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar15) {
                _objc_enumerationMutation(puVar6);
              }
              puVar8 = PTR_PTR_1126d38e0;
              _objc_alloc();
              func_0x00010c03cae0();
              func_0x00010befa120(puVar5);
              _objc_release(puVar8);
              puVar19 = puVar19 + 1;
            } while (puVar4 != puVar19);
            puVar4 = puVar6;
            func_0x00010bf52a60();
            puVar19 = PTR_PTR_1126d3828;
          }
          _objc_alloc();
          puVar4 = puVar5;
          func_0x00010c01a4a0();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar1);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
            ___stack_chk_fail();
            lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
            FUN_106fcfed8();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126b6718;
            func_0x00010c0bbc60();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_PTR_1126d38e0;
            _objc_alloc();
            func_0x00010c03cae0();
            puVar19 = PTR_PTR_1126d3828;
            _objc_alloc();
            puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010c01a4a0();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar1);
            _objc_release(puVar4);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
              ___stack_chk_fail();
              lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
              FUN_106fcfed8(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126b6718;
              func_0x00010bf6d0e0(PTR_PTR_1126b6718);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126d38e0;
              _objc_alloc();
              func_0x00010c03cae0();
              puVar19 = PTR_PTR_1126d3828;
              _objc_alloc(PTR_PTR_1126d3828);
              puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c01a4a0(puVar19);
              _objc_release(puVar5);
              _objc_release(puVar4);
              _objc_release(puVar1);
              _objc_release(puVar8);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
                ___stack_chk_fail();
                return (undefined *)0x0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return puVar19;
}



/* Entry: 106f807bc; end: 106f8089f; +[SCSpectaclesHermosaNetworkRequest mediaListRequest] */

undefined * FUN_106f807bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_178 [128];
  long lStack_f8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0c5620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d38e0;
  _objc_alloc();
  func_0x00010c03cae0();
  puVar14 = PTR_PTR_1126d3828;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c01a4a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    puVar1 = puVar4;
    FUN_106fcfed8();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126d2f50;
    puVar2 = puVar4;
    func_0x00010c0f58c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bf4db00(puVar14);
    _objc_release(puVar2);
    uVar9 = 0x7fffffffffffffff;
    uVar10 = 0x7fffffffffffffff;
    puVar2 = PTR_PTR_1126b6718;
    func_0x00010c1218a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d38e0;
    _objc_alloc();
    func_0x00010c03cae0();
    puVar14 = PTR_PTR_1126d3828;
    _objc_alloc();
    uVar7 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c01a4a0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar11 = uVar10;
      _objc_retain(puVar6);
      puVar2 = puVar6;
      FUN_106fcfed8();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126d2f50;
      puVar1 = puVar6;
      func_0x00010c0f58c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4db00();
      _objc_release(puVar1);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar4 = puVar2;
      FUN_106f74dc8(puVar2,puVar14,uVar7,uVar9,uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = auStack_178;
      uVar7 = 0x10;
      puVar1 = puVar4;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      puVar14 = PTR_PTR_1126d3828;
      while (PTR_PTR_1126d3828 = puVar14, puVar1 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          puVar5 = PTR_PTR_1126d38e0;
          _objc_alloc();
          func_0x00010c03cae0();
          func_0x00010befa120(puVar3);
          _objc_release(puVar5);
          puVar14 = puVar14 + 1;
        } while (puVar1 != puVar14);
        puVar8 = auStack_178;
        uVar7 = 0x10;
        puVar1 = puVar4;
        func_0x00010bf52a60();
        puVar14 = PTR_PTR_1126d3828;
      }
      _objc_alloc();
      puVar1 = puVar3;
      func_0x00010c01a4a0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
        ___stack_chk_fail();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar1);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        puVar4 = puVar1;
        FUN_106f74e90(puVar1,puVar8,uVar7,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010bf52a60();
        lVar12 = lRam0000000000000000;
        puVar14 = PTR_PTR_1126d3828;
        while (PTR_PTR_1126d3828 = puVar14, puVar2 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar12) {
              _objc_enumerationMutation(puVar4);
            }
            puVar6 = PTR_PTR_1126d38e0;
            _objc_alloc();
            func_0x00010c03cae0();
            func_0x00010befa120(puVar3);
            _objc_release(puVar6);
            puVar14 = puVar14 + 1;
          } while (puVar2 != puVar14);
          puVar2 = puVar4;
          func_0x00010bf52a60();
          puVar14 = PTR_PTR_1126d3828;
        }
        _objc_alloc();
        puVar2 = puVar3;
        func_0x00010c01a4a0();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
          ___stack_chk_fail();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          FUN_106fcfed8();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126b6718;
          func_0x00010c0bbc60();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d38e0;
          _objc_alloc();
          func_0x00010c03cae0();
          puVar14 = PTR_PTR_1126d3828;
          _objc_alloc();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c01a4a0();
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar1);
          _objc_release(puVar2);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
            ___stack_chk_fail();
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            FUN_106fcfed8(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126b6718;
            func_0x00010bf6d0e0(PTR_PTR_1126b6718);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d38e0;
            _objc_alloc();
            func_0x00010c03cae0();
            puVar14 = PTR_PTR_1126d3828;
            _objc_alloc(PTR_PTR_1126d3828);
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01a4a0(puVar14);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar1);
            _objc_release(puVar6);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
              ___stack_chk_fail();
              return (undefined *)0x0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 106f808a0; end: 106f809ff; +[SCSpectaclesHermosaNetworkRequest readRequestWithFilename:] */

undefined * FUN_106f808a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 auStack_138 [128];
  long lStack_b8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar10 = param_3;
  FUN_106fcfed8();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126d2f50;
  uVar7 = param_3;
  func_0x00010c0f58c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf4db00(puVar15);
  _objc_release(uVar7);
  uVar9 = 0x7fffffffffffffff;
  uVar11 = 0x7fffffffffffffff;
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1218a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d38e0;
  _objc_alloc();
  func_0x00010c03cae0();
  puVar15 = PTR_PTR_1126d3828;
  _objc_alloc();
  uVar7 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c01a4a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar12 = uVar11;
    _objc_retain(puVar6);
    puVar2 = puVar6;
    FUN_106fcfed8();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126d2f50;
    puVar1 = puVar6;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4db00();
    _objc_release(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar4 = puVar2;
    FUN_106f74dc8(puVar2,puVar15,uVar7,uVar9,uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = auStack_138;
    uVar10 = 0x10;
    puVar1 = puVar4;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    puVar15 = PTR_PTR_1126d3828;
    while (PTR_PTR_1126d3828 = puVar15, puVar1 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar4);
        }
        puVar5 = PTR_PTR_1126d38e0;
        _objc_alloc();
        func_0x00010c03cae0();
        func_0x00010befa120(puVar3);
        _objc_release(puVar5);
        puVar15 = puVar15 + 1;
      } while (puVar1 != puVar15);
      puVar8 = auStack_138;
      uVar10 = 0x10;
      puVar1 = puVar4;
      func_0x00010bf52a60();
      puVar15 = PTR_PTR_1126d3828;
    }
    _objc_alloc();
    puVar1 = puVar3;
    func_0x00010c01a4a0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar1);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar6 = puVar1;
      FUN_106f74e90(puVar1,puVar8,uVar10,uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      puVar15 = PTR_PTR_1126d3828;
      while (PTR_PTR_1126d3828 = puVar15, puVar2 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(puVar6);
          }
          puVar4 = PTR_PTR_1126d38e0;
          _objc_alloc();
          func_0x00010c03cae0();
          func_0x00010befa120(puVar3);
          _objc_release(puVar4);
          puVar15 = puVar15 + 1;
        } while (puVar2 != puVar15);
        puVar2 = puVar6;
        func_0x00010bf52a60();
        puVar15 = PTR_PTR_1126d3828;
      }
      _objc_alloc();
      puVar2 = puVar3;
      func_0x00010c01a4a0();
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        ___stack_chk_fail();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_106fcfed8();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126b6718;
        func_0x00010c0bbc60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d38e0;
        _objc_alloc();
        func_0x00010c03cae0();
        puVar15 = PTR_PTR_1126d3828;
        _objc_alloc();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010c01a4a0();
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release(puVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
          ___stack_chk_fail();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          FUN_106fcfed8(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126b6718;
          func_0x00010bf6d0e0(PTR_PTR_1126b6718);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d38e0;
          _objc_alloc();
          func_0x00010c03cae0();
          puVar15 = PTR_PTR_1126d3828;
          _objc_alloc(PTR_PTR_1126d3828);
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01a4a0(puVar15);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          _objc_release(puVar4);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            ___stack_chk_fail();
            return (undefined *)0x0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return puVar15;
}



/* Entry: 106f80a00; end: 106f80bdf; +[SCSpectaclesHermosaNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:] */

undefined *
FUN_106f80a00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_6;
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_106fcfed8();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126d2f50;
  lVar12 = param_3;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4db00();
  _objc_release(lVar12);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar3 = lVar1;
  FUN_106f74dc8(lVar1,puVar13,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_e8;
  uVar9 = 0x10;
  lVar12 = lVar3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  puVar13 = PTR_PTR_1126d3828;
  while (PTR_PTR_1126d3828 = puVar13, lVar12 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar3);
      }
      puVar13 = PTR_PTR_1126d38e0;
      _objc_alloc();
      func_0x00010c03cae0();
      func_0x00010befa120(puVar2);
      _objc_release(puVar13);
      lVar14 = lVar14 + 1;
    } while (lVar12 != lVar14);
    puVar8 = auStack_e8;
    uVar9 = 0x10;
    lVar12 = lVar3;
    func_0x00010bf52a60();
    puVar13 = PTR_PTR_1126d3828;
  }
  _objc_alloc();
  puVar7 = puVar2;
  func_0x00010c01a4a0();
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar5 = puVar7;
    FUN_106f74e90(puVar7,puVar8,uVar9,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    puVar13 = PTR_PTR_1126d3828;
    while (PTR_PTR_1126d3828 = puVar13, puVar2 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar5);
        }
        puVar6 = PTR_PTR_1126d38e0;
        _objc_alloc();
        func_0x00010c03cae0();
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar2 = puVar5;
      func_0x00010bf52a60();
      puVar13 = PTR_PTR_1126d3828;
    }
    _objc_alloc();
    puVar2 = puVar4;
    func_0x00010c01a4a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_106fcfed8();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b6718;
      func_0x00010c0bbc60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d38e0;
      _objc_alloc();
      func_0x00010c03cae0();
      puVar13 = PTR_PTR_1126d3828;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c01a4a0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_106fcfed8(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b6718;
        func_0x00010bf6d0e0(PTR_PTR_1126b6718);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d38e0;
        _objc_alloc();
        func_0x00010c03cae0();
        puVar13 = PTR_PTR_1126d3828;
        _objc_alloc(PTR_PTR_1126d3828);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01a4a0(puVar13);
        _objc_release(puVar4);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar6);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          ___stack_chk_fail();
          return (undefined *)0x0;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 106f80be0; end: 106f80d6b; +[SCSpectaclesHermosaNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:] */

undefined *
FUN_106f80be0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar3 = param_3;
  FUN_106f74e90(param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar4 = PTR_PTR_1126d3828;
  while (PTR_PTR_1126d3828 = puVar4, lVar10 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar4 = PTR_PTR_1126d38e0;
      _objc_alloc();
      func_0x00010c03cae0();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    lVar10 = lVar3;
    func_0x00010bf52a60();
    puVar4 = PTR_PTR_1126d3828;
  }
  _objc_alloc();
  puVar5 = puVar2;
  func_0x00010c01a4a0();
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    FUN_106fcfed8();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b6718;
    func_0x00010c0bbc60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d38e0;
    _objc_alloc();
    func_0x00010c03cae0();
    puVar4 = PTR_PTR_1126d3828;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c01a4a0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_106fcfed8(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b6718;
      func_0x00010bf6d0e0(PTR_PTR_1126b6718);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d38e0;
      _objc_alloc();
      func_0x00010c03cae0();
      puVar4 = PTR_PTR_1126d3828;
      _objc_alloc(PTR_PTR_1126d3828);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a4a0(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
        ___stack_chk_fail();
        return (undefined *)0x0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106f80d6c; end: 106f80e77; +[SCSpectaclesHermosaNetworkRequest markTransferredRequestForContentNamed:includeHd:] */

undefined * FUN_106f80d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_106fcfed8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0bbc60(PTR_PTR_1126b6718,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d38e0;
  _objc_alloc();
  func_0x00010c03cae0();
  puVar3 = PTR_PTR_1126d3828;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c01a4a0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    FUN_106fcfed8(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b6718;
    func_0x00010bf6d0e0(PTR_PTR_1126b6718,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d38e0;
    _objc_alloc();
    func_0x00010c03cae0();
    puVar3 = PTR_PTR_1126d3828;
    _objc_alloc(PTR_PTR_1126d3828);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a4a0(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 106f80e78; end: 106f80f83; +[SCSpectaclesHermosaNetworkRequest deletionRequestForContentNamed:includeHd:] */

undefined * FUN_106f80e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_106fcfed8(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf6d0e0(PTR_PTR_1126b6718,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d38e0;
  _objc_alloc();
  func_0x00010c03cae0();
  puVar3 = PTR_PTR_1126d3828;
  _objc_alloc(PTR_PTR_1126d3828);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a4a0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 106f80f84; end: 106f80f8b; +[SCSpectaclesHermosaNetworkRequest startAsNeededDeletionRequest] */

undefined8 FUN_106f80f84(void)

{
  return 0;
}



/* Entry: 106f80f8c; end: 106f80f93; +[SCSpectaclesHermosaNetworkRequest crashLogFileListRequest] */

undefined8 FUN_106f80f8c(void)

{
  return 0;
}



/* Entry: 106f80f94; end: 106f80f9b; +[SCSpectaclesHermosaNetworkRequest crashLogFileRequestWithFilename:range:] */

undefined8 FUN_106f80f94(void)

{
  return 0;
}



/* Entry: 106f80f9c; end: 106f80fa3; +[SCSpectaclesHermosaNetworkRequest firmwareWriteRequest:start:] */

undefined8 FUN_106f80f9c(void)

{
  return 0;
}



/* Entry: 106f80fa4; end: 106f80fab; +[SCSpectaclesHermosaNetworkRequest gpsWriteRequest:] */

undefined8 FUN_106f80fa4(void)

{
  return 0;
}



/* Entry: 106f80fac; end: 106f80fb3; +[SCSpectaclesHermosaNetworkRequest shareWifiCredentialsRequest] */

undefined8 FUN_106f80fac(void)

{
  return 0;
}



/* Entry: 106f80fb4; end: 106f80fbb; +[SCSpectaclesHermosaNetworkRequest shareWifiCredentialsStatusRequest] */

undefined8 FUN_106f80fb4(void)

{
  return 0;
}



/* Entry: 106f80fbc; end: 106f80fc3; +[SCSpectaclesHermosaNetworkRequest analyticsFilesListRequest] */

undefined8 FUN_106f80fbc(void)

{
  return 0;
}



/* Entry: 106f80fc4; end: 106f80fcb; +[SCSpectaclesHermosaNetworkRequest analyticsFilesGetWithFilename:range:] */

undefined8 FUN_106f80fc4(void)

{
  return 0;
}



/* Entry: 106f80fcc; end: 106f80fd3; +[SCSpectaclesHermosaNetworkRequest analyticsFilesDeleteRequest] */

undefined8 FUN_106f80fcc(void)

{
  return 0;
}



/* Entry: 106f80fd4; end: 106f80fdb; +[SCSpectaclesHermosaNetworkRequest stereoCalibrationDataRequest] */

undefined8 FUN_106f80fd4(void)

{
  return 0;
}



/* Entry: 106f80fdc; end: 106f80fe3; +[SCSpectaclesHermosaNetworkRequest lagunaPairingRequestWithAmbaRequest:] */

undefined8 FUN_106f80fdc(void)

{
  return 0;
}



/* Entry: 106f80fe4; end: 106f80feb; -[SCSpectaclesHermosaNetworkRequest hermosaRequests] */

undefined8 FUN_106f80fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f80fec; end: 106f80ff7; -[SCSpectaclesHermosaNetworkRequest .cxx_destruct] */

void FUN_106f80fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f80ff8; end: 106f8107f; -[SCSpectaclesHermosaPushMessage initWithHermosaPushMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106f80ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8098;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRequest__1125ed4b8,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761bd8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f81080; end: 106f81087; -[SCSpectaclesHermosaPushMessage responseStatus] */

undefined8 FUN_106f81080(void)

{
  return 5;
}



/* Entry: 106f81088; end: 106f810f3; -[SCSpectaclesHermosaPushMessage nrfErrorType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f81088(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010bfd9940();
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_112761bd8);
    func_0x00010bf98e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf990e0();
    _objc_release(uVar2);
    if ((uint)uVar3 < 10) {
      return *(undefined8 *)(&UNK_10de19290 + (uVar3 & 0xffffffff) * 8);
    }
  }
  return 0;
}



/* Entry: 106f810f4; end: 106f8111b; -[SCSpectaclesHermosaPushMessage hasNrfError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f810f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  func_0x00010c0f6680(uVar1);
  return (int)uVar1 == 0x17;
}



/* Entry: 106f8111c; end: 106f8119b; -[SCSpectaclesHermosaPushMessage hasCharging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f8111c(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761bd8;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c0f6680();
  if (iVar2 == 0x18) {
    bVar1 = true;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c0f6680();
    if (iVar2 == 0x29) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfe0b60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf9a0a0();
      bVar1 = (int)uVar4 == 0x1a;
      _objc_release(uVar3);
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 106f8119c; end: 106f812b7; -[SCSpectaclesHermosaPushMessage charging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f8119c(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112761bd8;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c0f6680();
  iVar3 = (int)*(undefined8 *)(param_1 + lVar7);
  if (iVar2 == 0x18) {
    func_0x00010bf35ac0();
    bVar1 = iVar3 == 1;
  }
  else {
    func_0x00010c0f6680();
    if (iVar3 == 0x29) {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bfe0b60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf9a0a0();
      _objc_release(uVar4);
      if ((int)uVar5 == 0x1a) {
        uVar6 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010bfe0b60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010bf35ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010bf35ac0();
        _objc_release(uVar5);
        _objc_release(uVar6);
        if ((int)uVar4 == 1) {
          return true;
        }
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010bfe0b60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf35ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf35ac0();
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106f812b8; end: 106f812bf; -[SCSpectaclesHermosaPushMessage deviceColor] */

undefined8 FUN_106f812b8(void)

{
  return 0;
}



/* Entry: 106f812c0; end: 106f812c7; -[SCSpectaclesHermosaPushMessage hasSpaceToRecord] */

undefined8 FUN_106f812c0(void)

{
  return 1;
}



/* Entry: 106f812c8; end: 106f8132f; -[SCSpectaclesHermosaPushMessage hasBackupStatusEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f812c8(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761bd8;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c0f6680();
  if (iVar2 == 0x29) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe0b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf9a0a0();
    bVar1 = (int)uVar4 == 0x23;
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106f81330; end: 106f814c3; -[SCSpectaclesHermosaPushMessage backupStatusEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f81330(float param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = param_2;
  func_0x00010bfd4800();
  if ((int)lVar11 != 0) {
    lVar11 = (long)_DAT_112761bd8;
    uVar1 = *(ulong *)(param_2 + lVar11);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf14d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf14ce0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uint)uVar3 < 3) {
      puVar10 = PTR_PTR_1126d38e8;
      _objc_alloc(PTR_PTR_1126d38e8);
      uVar4 = *(undefined8 *)(param_2 + lVar11);
      func_0x00010bfe0b60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf14d20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + lVar11);
      func_0x00010bfe0b60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf14d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf14c80();
      uVar9 = *(ulong *)(param_2 + lVar11);
      func_0x00010bfe0b60(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar9;
      func_0x00010bf14d20();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c26e2a0();
      func_0x00010c04c1e0((double)param_1,(double)(uVar1 & 0xffffffff),puVar10,param_3,
                          uVar3 & 0xffffffff,uVar6);
      _objc_release(uVar2);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_106f814a0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_106f814a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106f814c4; end: 106f814eb; -[SCSpectaclesHermosaPushMessage hasBluetoothEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f814c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  func_0x00010c0f6680(uVar1);
  return (int)uVar1 == 0xd;
}



/* Entry: 106f814ec; end: 106f81547; -[SCSpectaclesHermosaPushMessage bluetoothEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f814ec(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112761bd8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c0f6680();
  if (iVar1 == 0xd) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010bf1e5c0();
    if (iVar1 - 1U < 4) {
      return *(undefined8 *)(&UNK_10de192e0 + (ulong)(iVar1 - 1U) * 8);
    }
  }
  return 0;
}



/* Entry: 106f81548; end: 106f8154f; -[SCSpectaclesHermosaPushMessage wifiOn] */

undefined8 FUN_106f81548(void)

{
  return 0;
}



/* Entry: 106f81550; end: 106f815f7; -[SCSpectaclesHermosaPushMessage wiFiStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f81550(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761bd8;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf9a0a0();
  _objc_release(uVar1);
  if ((int)uVar3 == 8) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe0b60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c2a55e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_106f85f88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f815f8; end: 106f81693; -[SCSpectaclesHermosaPushMessage ipAddress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f815f8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761bd8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c0f6680();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (iVar1 == 6) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c06afe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8fe18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f81694; end: 106f816fb; -[SCSpectaclesHermosaPushMessage hasWiFiAccessPointConnectedClientCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f81694(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761bd8;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c0f6680();
  if (iVar2 == 0x29) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe0b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf9a0a0();
    bVar1 = (int)uVar4 == 0x1d;
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106f816fc; end: 106f817bf; -[SCSpectaclesHermosaPushMessage wiFiAccessPointConnectedClientCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106f816fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010bfde7c0();
  if ((int)lVar4 != 0) {
    lVar4 = (long)_DAT_112761bd8;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf486a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd59a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bfe0b60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf486a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf48680();
      _objc_release(uVar2);
      _objc_release(uVar1);
      return (long)(int)uVar3;
    }
  }
  return 0;
}



/* Entry: 106f817c0; end: 106f817e7; -[SCSpectaclesHermosaPushMessage startProxy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f817c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  func_0x00010c0f6680(uVar1);
  return (int)uVar1 == 0x2a;
}



/* Entry: 106f817e8; end: 106f8180f; -[SCSpectaclesHermosaPushMessage stopProxy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f817e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  func_0x00010c0f6680(uVar1);
  return (int)uVar1 == 0x2b;
}



/* Entry: 106f81810; end: 106f818af; -[SCSpectaclesHermosaPushMessage _brightnessChangeEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f81810(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761bd8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c0f6680();
  if (iVar1 == 0x29) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf9a0a0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0x20) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bfe0b60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf21260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f8189c;
    }
  }
  uVar3 = 0;
LAB_106f8189c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f818b0; end: 106f8191b; -[SCSpectaclesHermosaPushMessage brightnessLevel] */

void FUN_106f818b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bdd5840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd4ce0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf21240(param_1);
    func_0x00010c0df760(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f8191c; end: 106f81957; -[SCSpectaclesHermosaPushMessage hasAutoBrightnessEnabled] */

undefined8 FUN_106f8191c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdd5840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd80e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f81958; end: 106f819a3; -[SCSpectaclesHermosaPushMessage autoBrightnessEnabled] */

void FUN_106f81958(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd4640();
  if ((int)uVar1 != 0) {
    func_0x00010bdd5840(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06cca0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106f819a4; end: 106f819ab; -[SCSpectaclesHermosaPushMessage firmwareUpdateResponseType] */

undefined8 FUN_106f819a4(void)

{
  return 3;
}



/* Entry: 106f819ac; end: 106f819b3; -[SCSpectaclesHermosaPushMessage patchApplied] */

undefined8 FUN_106f819ac(void)

{
  return 0;
}



/* Entry: 106f819b4; end: 106f81bf7; -[SCSpectaclesHermosaPushMessage otaUpdateEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f819b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112761bd8;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a0a0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0x18) {
    puVar5 = (undefined *)0x0;
    goto LAB_106f81b94;
  }
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010bfe0b60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf88d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar6;
  func_0x00010bf987e0();
  FUN_106f861b4();
  if (lVar3 == 0) {
    lVar3 = lVar6;
    func_0x00010c13ba40();
    if ((int)lVar3 == 1) {
      puVar4 = PTR_PTR_1126c1a90;
      func_0x00010c117b20(PTR_PTR_1126c1a90,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = lVar6;
      func_0x00010c13ba40();
      puVar4 = PTR_PTR_1126c1a90;
      if ((int)lVar3 == 3) {
        lVar3 = lVar6;
        func_0x00010c0edd00(lVar6);
        func_0x00010c117b20(puVar4,param_2,(long)(int)lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar3 = lVar6;
        func_0x00010c13ba40();
        if ((int)lVar3 == 4) {
          puVar4 = PTR_PTR_1126c1a90;
          func_0x00010c117b20(PTR_PTR_1126c1a90,param_2,100);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar3 = lVar6;
          func_0x00010c13ba40();
          if ((int)lVar3 == 5) {
            lVar3 = 0;
            puVar4 = PTR_PTR_1126c1a90;
          }
          else {
            lVar3 = lVar6;
            func_0x00010c13ba40();
            puVar4 = PTR_PTR_1126c1a90;
            if ((int)lVar3 != 8) {
              lVar3 = lVar6;
              func_0x00010c13ba40();
              if ((int)lVar3 == 6) {
                puVar4 = PTR_PTR_1126c1a90;
                func_0x00010c117b20(PTR_PTR_1126c1a90,param_2,100);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010c13ba40();
                puVar4 = (undefined *)0x0;
              }
              goto LAB_106f81b68;
            }
            lVar3 = lVar6;
            func_0x00010c0edd20(lVar6);
            lVar3 = (long)(int)lVar3;
          }
          func_0x00010c117b20(puVar4,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
  }
  else {
    puVar4 = PTR_PTR_1126c1a90;
    func_0x00010bf99320(PTR_PTR_1126c1a90,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106f81b68:
  puVar5 = PTR_PTR_1126d3868;
  _objc_alloc(PTR_PTR_1126d3868);
  func_0x00010c04c2c0();
  _objc_release(puVar4);
  _objc_release(lVar6);
LAB_106f81b94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f81bf8; end: 106f81d6b; -[SCSpectaclesHermosaPushMessage otaUpdateAvailabilityEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f81bf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112761bd8;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bfe0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a0a0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0x17) {
    lVar3 = *(long *)(param_1 + lVar8);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010bf38320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar8;
    func_0x00010bf987e0();
    FUN_106f861b4();
    if (lVar3 == 0) {
      func_0x00010c13ba40();
      puVar6 = PTR_PTR_1126c1a90;
      lVar3 = lVar8;
      func_0x00010bf5f720(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010c283a40(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c07c6a0(lVar8);
      func_0x00010bf12580(puVar6,param_2,lVar3,lVar4,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    else {
      puVar6 = PTR_PTR_1126c1a90;
      func_0x00010bf99320(PTR_PTR_1126c1a90,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126d3868;
    _objc_alloc(PTR_PTR_1126d3868);
    func_0x00010c04c2c0();
    _objc_release(puVar6);
    _objc_release(lVar8);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f81d6c; end: 106f81e8b; -[SCSpectaclesHermosaPushMessage locationRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f81d6c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112761bd8;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bfe0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9a0a0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0x15) {
    uVar4 = *(ulong *)(param_1 + lVar8);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c09f400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010bfda260();
    if ((int)uVar4 == 0) {
      bVar1 = false;
    }
    else {
      uVar4 = uVar5;
      func_0x00010c0f9be0(uVar5);
      bVar1 = (int)uVar4 == 1;
    }
    puVar7 = PTR_PTR_1126d38f0;
    _objc_alloc(PTR_PTR_1126d38f0);
    uVar4 = uVar5;
    func_0x00010bfd63c0();
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar5;
      func_0x00010bf6ea80(uVar5);
      uVar4 = uVar4 & 0xffffffff;
    }
    uVar6 = uVar5;
    func_0x00010bfd8e40();
    if ((int)uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar5;
      func_0x00010c0c1d00(uVar5);
      uVar6 = uVar6 & 0xffffffff;
    }
    func_0x00010c0354a0(puVar7,param_2,bVar1,uVar4,uVar6);
    _objc_release(uVar5);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f81e8c; end: 106f81ed7; -[SCSpectaclesHermosaPushMessage hasShakeToReportEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f81e8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  func_0x00010bfe0b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a0a0();
  _objc_release(uVar1);
  return (int)uVar2 == 0x1e;
}



/* Entry: 106f81ed8; end: 106f8204f; -[SCSpectaclesHermosaPushMessage lensLaunchEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f81ed8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112761bd8;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bfe0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a0a0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0x27) {
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c094ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfd8660();
    if ((int)uVar1 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar4 = *(undefined ***)(param_1 + lVar8);
      func_0x00010bfe0b60(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c094ca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c095760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
    }
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126d38f8;
    _objc_alloc(PTR_PTR_1126d38f8);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfe0b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c094ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0245e0(puVar7,param_2,uVar1,ppuVar6);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(ppuVar6);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f82050; end: 106f8209b; -[SCSpectaclesHermosaPushMessage hasQcomStateChangeEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f82050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  func_0x00010bfe0b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a0a0();
  _objc_release(uVar1);
  return (int)uVar2 == 0x26;
}



/* Entry: 106f8209c; end: 106f8212f; -[SCSpectaclesHermosaPushMessage qcomStateChangeEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f8209c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bfdaca0();
  if ((int)lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_112761bd8);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11cbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d90c0();
    if ((uint)uVar4 < 0xb) {
      uVar5 = *(undefined8 *)(&UNK_10de19300 + (uVar4 & 0xffffffff) * 8);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return uVar5;
}



/* Entry: 106f82130; end: 106f821b7; -[SCSpectaclesHermosaPushMessage hasBootCompleteEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f82130(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761bd8;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9a0a0();
  if ((int)uVar3 == 0x28) {
    bVar1 = true;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe0b60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf9a0a0();
    bVar1 = (int)uVar3 == 0x29;
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106f821b8; end: 106f82257; -[SCSpectaclesHermosaPushMessage bootCompleteEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f821b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bfd4c00();
  if ((int)lVar3 != 0) {
    lVar3 = (long)_DAT_112761bd8;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf9a0a0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0x28) {
      return 1;
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf9a0a0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0x29) {
      return 2;
    }
  }
  return 0;
}



/* Entry: 106f82258; end: 106f822a3; -[SCSpectaclesHermosaPushMessage hasProximityUnlockEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f82258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  func_0x00010bfe0b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a0a0();
  _objc_release(uVar1);
  return (int)uVar2 == 0x22;
}



/* Entry: 106f822a4; end: 106f822ab; -[SCSpectaclesHermosaPushMessage settingsForCategoryResponse] */

undefined8 FUN_106f822a4(void)

{
  return 0;
}



/* Entry: 106f822ac; end: 106f82307; -[SCSpectaclesHermosaPushMessage uploadToCloudEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f822ac(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112761bd8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c0f6680();
  if (iVar1 == 0x14) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c28e920();
    if (iVar1 - 1U < 0xe) {
      return *(undefined8 *)(&UNK_10de19358 + (ulong)(iVar1 - 1U) * 8);
    }
  }
  return 0;
}



/* Entry: 106f82308; end: 106f8262f; -[SCSpectaclesHermosaPushMessage mediaCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f82308(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lVar6;
  
  lVar12 = (long)_DAT_112761bd8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
  func_0x00010c0f6680();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 == 7) {
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfde500();
    if ((int)uVar4 == 0) {
      iVar1 = 0;
    }
    else {
      unaff_x23 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c0c47a0(unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = unaff_x23;
      func_0x00010c29bec0();
      iVar1 = (int)uVar7;
    }
    uVar5 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bfda300();
    iVar2 = 0;
    if ((int)uVar7 != 0) {
      lVar12 = *(long *)(param_1 + lVar12);
      func_0x00010c0c47a0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar12;
      func_0x00010c0fb780();
      iVar2 = (int)lVar6;
    }
    func_0x00010c0df820(puVar11,param_2,iVar2 + iVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar7 != 0) {
      _objc_release(lVar12);
    }
    _objc_release(uVar5);
    if ((int)uVar4 != 0) {
      _objc_release(unaff_x23);
    }
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
    func_0x00010c0f6680();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (iVar1 == 2) {
      uVar4 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c0c4760(uVar4);
      func_0x00010c0df820(puVar11,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106f82604;
    }
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c4780();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfde500();
    if ((int)uVar7 == 0) {
      uVar5 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010bfe0b60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0c4780();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = uVar7;
      func_0x00010bfda300();
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((int)unaff_x24 == 0) {
        puVar11 = (undefined *)0x0;
        goto LAB_106f82604;
      }
    }
    else {
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c4780();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfde500();
    if ((int)uVar7 == 0) {
      iVar1 = 0;
    }
    else {
      uStack_78 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010bfe0b60();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uStack_78;
      func_0x00010c0c4780();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uStack_80;
      func_0x00010c29bec0();
      iVar1 = (int)uVar5;
    }
    uVar8 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bfe0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0c4780();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bfda300();
    iVar2 = 0;
    if ((int)uVar9 != 0) {
      unaff_x25 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010bfe0b60(unaff_x25);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x25;
      func_0x00010c0c4780();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = unaff_x24;
      func_0x00010c0fb780();
      iVar2 = (int)uVar10;
    }
    func_0x00010c0df820(puVar11,param_2,iVar2 + iVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar9 != 0) {
      _objc_release(unaff_x24);
      _objc_release(unaff_x25);
    }
    _objc_release(uVar5);
    _objc_release(uVar8);
    if ((int)uVar7 != 0) {
      _objc_release(uStack_80);
      _objc_release(uStack_78);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
LAB_106f82604:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106f82630; end: 106f8265f; -[SCSpectaclesHermosaPushMessage genericResponseProtocol] */

void FUN_106f82630(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e900b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e900b8);
  return;
}



/* Entry: 106f82660; end: 106f8268f; -[SCSpectaclesHermosaPushMessage genericResponseData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f82660(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761bd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f82690; end: 106f8269f; -[SCSpectaclesHermosaPushMessage pushMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f82690(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761bd8);
}



/* Entry: 106f826a0; end: 106f826b3; -[SCSpectaclesHermosaPushMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f826a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761bd8,0);
  return;
}



/* Entry: 106f826b4; end: 106f82933;  */

undefined * FUN_106f826b4(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uStack_208;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_1);
  uStack_208 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_1b0,auStack_f0,0x10);
  if (uStack_208 != 0) {
    lVar7 = *plStack_1a0;
    do {
      uVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar12 = *(long *)(lStack_1a8 + uVar8 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar1 = lVar12;
        func_0x00010c0c4040();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar13 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar1);
              }
              uVar14 = *(ulong *)(lStack_1e8 + lVar13 * 8);
              puVar3 = PTR_PTR_1126d3158;
              _objc_alloc(PTR_PTR_1126d3158);
              lVar4 = lVar12;
              func_0x00010c294d60(lVar12);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              FUN_106fcfe84();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar14;
              func_0x00010c27dd80();
              if ((uint)uVar6 < 8) {
                uVar9 = *(undefined8 *)(&UNK_10de193c8 + (uVar6 & 0xffffffff) * 8);
              }
              else {
                uVar9 = 0;
              }
              func_0x00010c23d0a0(uVar14);
              func_0x00010c03dfc0(puVar3,param_2,lVar5,uVar9,uVar14 & 0xffffffff);
              func_0x00010befa120(puVar10,param_2,puVar3);
              _objc_release(puVar3);
              _objc_release(lVar5);
              _objc_release(lVar4);
              lVar13 = lVar13 + 1;
            } while (lVar2 != lVar13);
            lVar2 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar2 != 0);
        }
        _objc_release(lVar1);
        uVar8 = uVar8 + 1;
      } while (uVar8 != uStack_208);
      uStack_208 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (uStack_208 != 0);
  }
  _objc_release(param_1);
  puVar3 = puVar10;
  func_0x00010bf51e00();
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    uVar8 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110deec98);
    if ((uVar8 & 1) == 0) {
      uVar8 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dada18);
      if ((uVar8 & 1) == 0) {
        uVar8 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110deecd8);
        puVar10 = (undefined *)0x2;
        if ((int)uVar8 == 0) {
          puVar10 = (undefined *)0x0;
        }
      }
      else {
        puVar10 = (undefined *)0x1;
      }
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    _objc_release(param_1);
    return puVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 106f82934; end: 106f82a1b;  */

undefined8 FUN_106f82934(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110deec98);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dada18);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110deecd8);
      uVar2 = 2;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f82a1c; end: 106f82a4b;  */

void FUN_106f82a1c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f3eb5c1;
  _dispatch_queue_create(&UNK_10f3eb5c1,0);
  uVar1 = puRam00000001136c86c0;
  puRam00000001136c86c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f82a4c; end: 106f82a5f;  */

void FUN_106f82a4c(void)

{
  iRam00000001136c86b8 = iRam00000001136c86b8 + 1;
  return;
}



/* Entry: 106f82a60; end: 106f82b27; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse initWithRpcResponse:response:responseDataLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f82a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f80a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761bdc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112761be0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112761be4) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f82b28; end: 106f82bcf; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse encryptionSetupNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f82b28(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c13bcc0();
  if (lVar4 == 4) {
    lVar4 = (long)_DAT_112761bdc;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c13ba40();
    if (iVar1 == 0xfa) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c17ab40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfd9820();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c17ab40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0db0e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        goto LAB_106f82bbc;
      }
    }
  }
  uVar3 = 0;
LAB_106f82bbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f82bd0; end: 106f82c07; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse responseStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f82bd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112761bdc);
  if (lVar2 != 0) {
    func_0x00010c13ba40();
    uVar1 = 4;
    if ((int)lVar2 == 1) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
}



/* Entry: 106f82c08; end: 106f82c17; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse serializedSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f82c08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761be4);
}



/* Entry: 106f82c18; end: 106f82cd7; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse mediaList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f82c18(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112761bdc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf12860();
    _objc_release(lVar2);
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (lVar3 != 0) {
      puVar4 = *(undefined **)(param_1 + lVar7);
      func_0x00010c0c64c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf12840();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      FUN_106f826b4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
  else {
    puVar6 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f82cd8; end: 106f82d9b; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f82cd8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761bdc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd91a0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      puVar4 = PTR_PTR_1126d38d0;
      _objc_alloc(PTR_PTR_1126d38d0);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0c64c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03b860(puVar4,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_106f82d88;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106f82d88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f82d9c; end: 106f82eb3; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse mediaUUID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f82d9c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112761bdc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfd8f80();
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfde280();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 == 0) goto LAB_106f82e88;
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0c64c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_106fcfe84();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  else {
LAB_106f82e88:
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106f82eb4; end: 106f8300f; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse mediaData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f82eb4(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112761bdc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8f80();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
LAB_106f82f84:
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfd91a0();
      _objc_release(uVar5);
      if ((int)uVar6 == 0) goto LAB_106f82ff4;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bfd6200();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((int)uVar5 == 0) goto LAB_106f82f84;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0c64c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
LAB_106f82ff4:
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106f83010; end: 106f832c3; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse mediaDataRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106f83010(long param_1)

{
  int iVar1;
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
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  
  lVar20 = (long)_DAT_112761bdc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar20);
  func_0x00010c13ba40();
  if (iVar1 == 0x9e) {
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8f80();
    if ((int)uVar3 == 0) {
LAB_106f83220:
      _objc_release(uVar2);
LAB_106f83228:
      uVar2 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfd91a0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) goto LAB_106f83294;
      uVar12 = *(ulong *)(param_1 + lVar20);
      func_0x00010c0c64c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar12;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c15ebe0();
      uVar19 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bfd3ca0();
      if ((int)uVar5 == 0) {
LAB_106f83210:
        _objc_release(uVar3);
        _objc_release(uVar4);
        goto LAB_106f83220;
      }
      uVar6 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfdca00();
      if ((int)uVar8 == 0) {
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar6);
        goto LAB_106f83210;
      }
      uVar9 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bfd84c0();
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((int)uVar11 == 0) goto LAB_106f83228;
      uVar12 = *(ulong *)(param_1 + lVar20);
      func_0x00010c0c64c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar12;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar17;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar13;
      func_0x00010c24d960();
      uVar19 = uVar19 & 0xffffffff;
      uVar14 = *(ulong *)(param_1 + lVar20);
      func_0x00010c0c64c0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar16;
      func_0x00010c08fa40();
      uVar18 = uVar18 & 0xffffffff;
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
    }
    _objc_release(uVar17);
    _objc_release(uVar12);
  }
  else {
LAB_106f83294:
    uVar19 = 0;
    uVar18 = 0;
  }
  auVar21._8_8_ = uVar18;
  auVar21._0_8_ = uVar19;
  return auVar21;
}



/* Entry: 106f832c4; end: 106f8334f; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse genericAssetFileIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f832c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761bdc;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfcb720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7160();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfcb720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfacde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f83350; end: 106f834cf; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse genericAssetRequestedRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106f83350(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar10 = (long)_DAT_112761bdc;
  uVar1 = *(ulong *)(param_1 + lVar10);
  func_0x00010bfcb720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bfdb2e0();
  if ((int)uVar9 == 0) {
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar10);
    func_0x00010bfcb720();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c1372c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bfdca00();
    if ((int)uVar9 == 0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bfcb720();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1372c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfd84c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar5 == 0) {
        uVar9 = 0;
        uVar8 = 0;
        goto LAB_106f834a4;
      }
      uVar1 = *(ulong *)(param_1 + lVar10);
      func_0x00010bfcb720(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1372c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c24d960();
      uVar9 = uVar9 & 0xffffffff;
      uVar6 = *(ulong *)(param_1 + lVar10);
      func_0x00010bfcb720(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c1372c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c08fa40();
      uVar8 = uVar8 & 0xffffffff;
      _objc_release(uVar7);
    }
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_106f834a4:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar9;
  return auVar11;
}



/* Entry: 106f834d0; end: 106f8364f; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse genericAssetActualRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106f834d0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar10 = (long)_DAT_112761bdc;
  uVar1 = *(ulong *)(param_1 + lVar10);
  func_0x00010bfcb720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bfd3ca0();
  if ((int)uVar9 == 0) {
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar10);
    func_0x00010bfcb720();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bef1a40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bfdca00();
    if ((int)uVar9 == 0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bfcb720();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfd84c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar5 == 0) {
        uVar9 = 0;
        uVar8 = 0;
        goto LAB_106f83624;
      }
      uVar1 = *(ulong *)(param_1 + lVar10);
      func_0x00010bfcb720(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c24d960();
      uVar9 = uVar9 & 0xffffffff;
      uVar6 = *(ulong *)(param_1 + lVar10);
      func_0x00010bfcb720(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bef1a40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c08fa40();
      uVar8 = uVar8 & 0xffffffff;
      _objc_release(uVar7);
    }
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_106f83624:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar9;
  return auVar11;
}



/* Entry: 106f83650; end: 106f836db; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse genericAssetData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f83650(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761bdc;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfcb720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6200();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfcb720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f836dc; end: 106f838df; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse backupStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f836dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112761bdc;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010c13ba40();
  if ((int)lVar2 == 0x109) {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + lVar10);
    func_0x00010bfc2d00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf14d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar11 = *(undefined8 *)(lVar9 * 8);
        puVar3 = PTR_PTR_1126d38d8;
        _objc_alloc(PTR_PTR_1126d38d8);
        uVar4 = uVar11;
        func_0x00010bf4c700(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c26dda0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        FUN_106fcfe84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26e2a0(uVar11);
        func_0x00010bf14c80(uVar11);
        func_0x00010bff6760(puVar3);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        func_0x00010befa120(puVar8);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + _DAT_112761bdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112761be0,0);
  return;
}



/* Entry: 106f838e0; end: 106f8391f; -[SCSpectaclesHermosaRPCOverHttpNetworkResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f838e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112761bdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761be0,0);
  return;
}



/* Entry: 106f83920; end: 106f839ab; -[SCSpectaclesHermosaResponseMessage initWithHermosaResponse:request:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f83920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f80a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRequest__1125ed4b8,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761be8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f839ac; end: 106f83a0f; -[SCSpectaclesHermosaResponseMessage responseStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f839ac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c13ba40();
  if (iVar1 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010bf987e0();
    if (iVar1 - 3U < 4) {
      uVar2 = *(undefined8 *)(&UNK_10de19408 + (ulong)(iVar1 - 3U) * 8);
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Entry: 106f83a10; end: 106f83a17; -[SCSpectaclesHermosaResponseMessage nrfErrorType] */

undefined8 FUN_106f83a10(void)

{
  return 0;
}



/* Entry: 106f83a18; end: 106f83a3f; -[SCSpectaclesHermosaResponseMessage hasNrfError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f83a18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 1;
}



/* Entry: 106f83a40; end: 106f83afb; -[SCSpectaclesHermosaResponseMessage batteryLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f83a40(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 != 5) {
    puVar5 = (undefined *)0x0;
    goto LAB_106f83aec;
  }
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010bf177c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_106f83ae0:
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar4;
    func_0x00010bfde200();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = lVar4;
    if ((int)lVar2 == 0) {
      lVar2 = lVar4;
      func_0x00010bfdc600();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar2 == 0) goto LAB_106f83ae0;
      func_0x00010c246020(lVar4);
    }
    else {
      func_0x00010c293a20(lVar4);
    }
    func_0x00010c0df760(puVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
LAB_106f83aec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f83afc; end: 106f83b5f; -[SCSpectaclesHermosaResponseMessage hasBatteryLevelStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f83afc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 5) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf177c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdc620();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 106f83b60; end: 106f83bcf; -[SCSpectaclesHermosaResponseMessage batteryLevelStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f83b60(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010bfd48c0();
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010bf177c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c246040();
    _objc_release(uVar3);
    uVar1 = (int)uVar4 - 1;
    if (uVar1 < 3) {
      return *(undefined8 *)(&UNK_10de19428 + (ulong)uVar1 * 8);
    }
  }
  return 0;
}



/* Entry: 106f83bd0; end: 106f83c6b; -[SCSpectaclesHermosaResponseMessage voltageLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f83bd0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c13ba40();
  if (iVar1 == 5) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bf177c0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) ||
       (lVar2 = lVar3, func_0x00010bfde5e0(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       (int)lVar2 == 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar3;
      func_0x00010c2a0d80(lVar3);
      func_0x00010c0df760(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f83c6c; end: 106f83cb3; -[SCSpectaclesHermosaResponseMessage hasCharging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f83c6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010bf35b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8100();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f83cb4; end: 106f83cfb; -[SCSpectaclesHermosaResponseMessage charging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f83cb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010bf35b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e400();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f83cfc; end: 106f83d23; -[SCSpectaclesHermosaResponseMessage hasDeviceColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f83cfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xa5;
}


