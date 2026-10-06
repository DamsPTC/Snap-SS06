/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fdce9c; end: 107fdcfb7;  */

void FUN_107fdce9c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  func_0x00010b5f88e4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfe5ea0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    func_0x00010bfe5ea0(param_2);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c2b2ca0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = param_2;
      func_0x00010c11fae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6760(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fdcfb8; end: 107fde5f3;  */

undefined *
FUN_107fdcfb8(ulong param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = param_3;
  puVar14 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 != (undefined *)0x0) {
    func_0x00010bf8b160(param_3);
    func_0x00010c2b3780(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010bf59960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9240(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    func_0x00010b5fa088(param_3);
    func_0x00010b5f9ff0();
    func_0x00010c2b3b00(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    FUN_107fde5f4(param_3,param_6,param_5);
    func_0x00010c2b9b80(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b9460(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010b5fa088();
    if (puVar19 + -2 < (undefined *)0xb) {
      puVar19 = param_3;
      FUN_107fde6f0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2080(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = param_3;
      func_0x00010bf70720(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2060(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar19);
    }
    func_0x00010c0ed100();
    func_0x00010c2b5080(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010b5fa088(param_3);
    func_0x00010b5f57cc();
    func_0x00010c2aeb20(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010b5fa760();
    if ((int)puVar19 != 0) {
      func_0x00010c2b61a0(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bfd9dc0(param_3);
    func_0x00010c2af1e0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af4c0;
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbdda0();
    func_0x000108dfcb04();
    func_0x00010c2ad4e0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c07b240(puVar4);
    func_0x00010c2b3de0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b93a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = puVar4;
    func_0x00010bf97200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad440(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = puVar4;
    func_0x00010bf9e140(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad420(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = puVar4;
    func_0x00010bf977c0(puVar4);
    lVar5 = (long)(int)puVar19;
    func_0x00010b5f5864(lVar5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeaa0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010b5fb758();
    func_0x00010c2b3820(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = param_3;
    FUN_107fdccc8(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9c00(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    func_0x00010c2b3be0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = puVar4;
    func_0x00010bf3d240(puVar4);
    lVar6 = (long)(int)puVar19;
    func_0x00010b5f5ca0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380(PTR_PTR_1126af4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = puVar4;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    puVar19 = puVar14;
    func_0x00010b5fca54();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar7);
    puVar14 = puVar16;
    func_0x00010bfecde0();
    if (puVar14 != (undefined *)0x7fffffffffffffff) {
      func_0x00010bfecde0(puVar16);
    }
    func_0x00010c2b3ca0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa7c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c26afc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bae20(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_3;
    func_0x00010bf3f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa860(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = puVar4;
    func_0x00010bfa34a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2adbe0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = puVar4;
    func_0x00010bfa3440(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2adbc0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010c08fa60();
    _objc_release(puVar14);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126b25c0;
      _objc_alloc(PTR_PTR_1126b25c0);
      puVar19 = param_3;
      func_0x00010c23ff80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar14);
      _objc_release(puVar19);
      puVar19 = puVar4;
      func_0x00010bf3d240(puVar4);
      puVar7 = (undefined *)(long)(int)puVar19;
      func_0x00010b5f5e50(puVar7,puVar14,param_8);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_2;
      func_0x000107fde78c(puVar14,param_2);
      _objc_release(puVar14);
    }
    puVar14 = puVar7;
    func_0x00010c2b43a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      puVar14 = puVar8;
      func_0x00010bf8a7e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2acb00(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar14 = puVar8;
      func_0x00010bf8a400(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2acae0(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar14 = (undefined *)0x5e;
      func_0x00010c2b9b80(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar17 = puVar8;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c08fa60();
      _objc_release(puVar17);
      if (puVar9 != (undefined *)0x0) {
        puVar17 = puVar8;
        func_0x00010c094540(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar17;
        func_0x00010c2b2880(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar17);
      }
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar16);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
  }
  if (param_4 == (undefined *)0x0) {
    puVar19 = param_3;
    FUN_107fdce9c(param_2,param_3);
  }
  else {
    func_0x000107fde868(param_4);
    FUN_107fde8cc(param_4);
    func_0x00010c2a83a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8360(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bcf00(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar14 = param_3;
    func_0x00010b5fa088();
    if (puVar14 < (undefined *)0xd) {
      if ((1L << ((ulong)puVar14 & 0x3f) & 0x1566U) == 0) {
        func_0x00010bf8b160(param_3);
      }
      else {
        puVar14 = param_4;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar14;
        func_0x00010c249da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar14);
        func_0x00010bf8b160(param_3);
        if (puVar4 != (undefined *)0x0) {
          uVar22 = param_1;
          func_0x00010c14c240(PTR_PTR_1126b26d0);
          param_1 = (ulong)(uint)((float)param_1 * (float)uVar22);
        }
      }
    }
    else {
      param_1 = 0;
    }
    _objc_release(param_4);
    _objc_release(param_3);
    func_0x00010c2b3780(param_1,param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    FUN_107fde9ec(param_4);
    func_0x00010c2ab6a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    FUN_107fdebbc(param_4);
    func_0x00010c2aca40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000107fdec84(param_4);
    func_0x00010c2a9fa0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = param_4;
    FUN_107fdedf8(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ade40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_4;
    FUN_107fdee3c(param_4);
    func_0x000108442c94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2adf40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    FUN_107fdeee4(param_4);
    func_0x00010c2adfa0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x00010bfaebe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140160();
    _objc_release(puVar14);
    func_0x00010c2ae060(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x000107fdef5c(param_4);
    func_0x000108442cdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ae1a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_4;
    func_0x00010bf2fba0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0816c0();
    _objc_release(puVar14);
    func_0x00010c2aa100(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x00010c2553e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2ba100(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    FUN_107fdf048(param_4);
    func_0x00010c2ba260(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x00010c2453c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b99a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_4;
    func_0x00010c23f480();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c2bcf20(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      puVar4 = param_4;
      func_0x00010c23f480();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar7;
      func_0x00010c2a2e80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar16;
      func_0x00010c2a2ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c2bcf20(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar16);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    _objc_release(puVar14);
    puVar14 = param_4;
    func_0x00010bf10220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8c40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_4;
    func_0x00010bf20900(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc6e0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 == (undefined *)0x0) {
      puVar19 = param_3;
      FUN_107fdce9c(param_2,param_3);
    }
    else {
      puVar14 = param_4;
      func_0x00010c094540(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar14 = param_4;
      func_0x00010c096600(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6760(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar14);
      func_0x00010c2b2ca0(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar14 = param_3;
    func_0x00010b5fa088();
    if (puVar14 + -2 < (undefined *)0xb) {
      puVar14 = param_4;
      func_0x00010c111620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = param_4;
        func_0x00010c111620(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ade40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
      }
    }
    puVar14 = param_4;
    func_0x00010bf308c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2aa120(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar4 = param_4;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar7 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar14 = puVar4;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar14 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar4);
        }
        puVar18 = *(undefined **)((long)puVar16 * 8);
        puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar18;
        func_0x00010bf8b600();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar17;
        func_0x00010bf303a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar9);
        _objc_release(puVar17);
        if (puVar10 != (undefined *)0x0) {
          puVar17 = puVar18;
          func_0x00010bf8b600(puVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar17;
          func_0x00010bf303a0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c25e080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(puVar8);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar17);
        }
        puVar17 = puVar18;
        func_0x00010c0fb8e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar18;
        func_0x00010bf8b600();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf303a0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf15ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        if (puVar17 == (undefined *)0x0) {
          puVar17 = puVar11;
          func_0x00010c08fa60();
          if (puVar17 == (undefined *)0x0) {
            puVar17 = (undefined *)0x0;
          }
          else {
            puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14cda0();
            puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
          }
        }
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar8);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25dfe0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar18;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        if (puVar10 == (undefined *)0x0) {
          _objc_release(puVar18);
        }
        else {
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          do {
            puVar21 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar6) {
                _objc_enumerationMutation(puVar18);
              }
              uVar20 = *(undefined8 *)((long)puVar21 * 8);
              uVar13 = uVar20;
              func_0x00010bf1eca0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar13;
              func_0x00010c067ec0();
              _objc_release(uVar13);
              bVar1 = (bool)((int)uVar12 != 0 | bVar1);
              uVar13 = uVar20;
              func_0x00010c084060();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar13;
              func_0x00010c067ec0();
              _objc_release(uVar13);
              bVar2 = (bool)((int)uVar12 != 0 | bVar2);
              func_0x00010c27f740();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar20;
              func_0x00010c067ec0();
              _objc_release(uVar20);
              bVar3 = (bool)((int)uVar13 != 0 | bVar3);
              puVar21 = puVar21 + 1;
            } while (puVar10 != puVar21);
            puVar10 = puVar18;
            func_0x00010bf52a60();
          } while (puVar10 != (undefined *)0x0);
          _objc_release(puVar18);
          if (bVar1) {
            func_0x00010bf070e0(puVar9);
          }
          if (bVar2) {
            func_0x00010bf070e0(puVar9);
          }
          if (bVar3) {
            func_0x00010bf070e0(puVar9);
          }
        }
        puVar10 = puVar9;
        func_0x00010c08fa60();
        if (puVar10 != (undefined *)0x0) {
          func_0x00010c08fa60(puVar9);
          func_0x00010bf6b860(puVar9);
        }
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar8);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar7);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar11);
        _objc_release(puVar17);
        _objc_release(puVar8);
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar14);
      puVar14 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar14 = puVar7;
    func_0x00010c08fa60();
    if (puVar14 != (undefined *)0x0) {
      func_0x00010c08fa60(puVar7);
      func_0x00010bf6b860(puVar7);
    }
    _objc_release(puVar4);
    func_0x00010c2aa060(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar4 = param_4;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar14 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00010c081160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = puVar7 + 1;
      } while (puVar14 != puVar7);
      puVar14 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    func_0x00010c2aa0c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar14 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar4);
        }
        uVar13 = *(undefined8 *)((long)puVar7 * 8);
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b77f850();
        _objc_release(uVar13);
        puVar7 = puVar7 + 1;
      } while (puVar14 != puVar7);
      puVar14 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    func_0x00010c2ba0a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abba0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b9900(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2afce0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aee80(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a94e0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x00010bf11400(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8d00(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_4;
    func_0x000107fdf170(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2740(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_4;
    FUN_107fdf3b0(param_4);
    func_0x00010c2b9160(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar14);
    puVar4 = param_2;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      FUN_107fdcaa8(puVar19);
    }
    else {
      puVar4 = PTR_PTR_1126af4c0;
      func_0x00010bfa7060();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010bfb3860();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar7;
      func_0x00010c067ec0();
      _objc_release(puVar7);
      if ((int)puVar16 == 1) {
        puVar19 = (undefined *)0x5a;
      }
      else {
        puVar7 = puVar4;
        func_0x00010bf3d240();
        if (((uint)puVar7 >> 3 & 1) == 0) {
          FUN_107fdcaa8(puVar19);
        }
        else {
          puVar19 = (undefined *)0xb;
        }
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar14);
    _objc_release(param_2);
    return puVar19;
  }
  return param_2;
}



/* Entry: 107fde5f4; end: 107fde6ef;  */

undefined8 FUN_107fde5f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    FUN_107fdcaa8(param_2);
  }
  else {
    puVar2 = PTR_PTR_1126af4c0;
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb3860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c067ec0();
    _objc_release(puVar3);
    if ((int)puVar4 == 1) {
      param_2 = 0x5a;
    }
    else {
      puVar3 = puVar2;
      func_0x00010bf3d240();
      if (((uint)puVar3 >> 3 & 1) == 0) {
        FUN_107fdcaa8(param_2);
      }
      else {
        param_2 = 0xb;
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return param_2;
}



/* Entry: 107fde6f0; end: 107fde8cb;  */

void FUN_107fde6f0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010b5fa760();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_1;
  func_0x00010bf704c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ece578;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ece598;
  }
  func_0x00010c14de00(puVar4,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fde8cc; end: 107fde9eb;  */

ulong FUN_107fde8cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fdf690;
  puStack_50 = &UNK_110a16bd8;
  uStack_48 = param_1;
  _objc_retain(param_1);
  uVar2 = uVar1;
  func_0x00010bfaea20(uVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = uVar3;
    func_0x00010c06c000(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf1f3c0();
    uVar4 = uVar4 & 0xffffffff;
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107fde9ec; end: 107fdebbb;  */

bool FUN_107fde9ec(float param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf5c920();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      bVar1 = false;
    }
    else {
      lVar2 = param_2;
      func_0x00010c27ade0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar9 = ABS((double)param_1);
      dVar8 = ABS((double)param_1 + 0.0) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (bVar1) {
        lVar3 = param_2;
        func_0x00010c27ae20(param_2);
        fVar6 = SUB84(dVar8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar9 = ABS((double)fVar6);
        dVar8 = ABS((double)fVar6 + 0.0) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar1 = dVar9 < dVar8;
        }
        if (bVar1) {
          lVar4 = param_2;
          func_0x00010c141a80(param_2);
          fVar6 = SUB84(dVar8,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          dVar9 = ABS((double)fVar6);
          dVar8 = ABS((double)fVar6 + 0.0) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
            bVar1 = dVar9 < dVar8;
          }
          if (bVar1) {
            lVar5 = param_2;
            func_0x00010c14e120(param_2);
            fVar7 = SUB84(dVar8,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            fVar6 = ABS(fVar7 + 1.0) * 2.220446e-16;
            if (fVar6 <= 0.0) {
              fVar6 = 0.0;
            }
            bVar1 = fVar6 <= ABS(fVar7 + -1.0);
            _objc_release(lVar5);
          }
          else {
            bVar1 = true;
          }
          _objc_release(lVar4);
        }
        else {
          bVar1 = true;
        }
        _objc_release(lVar3);
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar2);
    }
    _objc_release(param_2);
  }
  return bVar1;
}



/* Entry: 107fdebbc; end: 107fdedf7;  */

bool FUN_107fdebbc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25dde0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = param_1;
      func_0x00010bf89ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf529e0();
      bVar1 = lVar6 != 0;
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107fdedf8; end: 107fdee3b;  */

void FUN_107fdedf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fdee3c; end: 107fdeee3;  */

long FUN_107fdee3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bfedcc0();
  _objc_release(lVar2);
  if (lVar1 == 0x1fe7ae) {
    lVar2 = 0;
  }
  else if (lVar1 == 0x4b70827) {
    lVar2 = 4;
  }
  else if (lVar1 == 0x73b7c3d4) {
    lVar2 = param_1;
    FUN_107fdcac8(param_1);
  }
  else {
    lVar2 = -1;
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 107fdeee4; end: 107fdf047;  */

undefined8 FUN_107fdeee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c249dc0();
  _objc_release(param_1);
  uVar1 = 0xffffffffffffffff;
  if (lVar3 == 0x7b2e3000) {
    uVar1 = 3;
  }
  uVar2 = 2;
  if (lVar3 != 0x7b2e2fc2) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (lVar3 != -0x6e0993d9) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 107fdf048; end: 107fdf3af;  */

undefined * FUN_107fdf048(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)0x0;
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_118 + lVar10 * 8);
        func_0x00010c081660();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1f3c0();
        _objc_release(uVar2);
        puVar8 = puVar8 + (uVar3 & 0xffffffff);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar9 != 0) {
      puVar4 = PTR_PTR_1126c4328;
      func_0x00010c091ba0(PTR_PTR_1126c4328);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(puVar4,param_2,lVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c2b2680(puVar4,param_2,PTR_PTR_1133c92a0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    lVar1 = param_1;
    func_0x00010c111620();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c08fa60();
    lVar10 = lVar1;
    if (lVar9 == 0) {
      lVar9 = param_1;
      func_0x00010c296f60(param_1,param_2,&PTR____CFConstantStringClassReference_110ece4d8);
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 != 0) {
        lVar6 = lVar9;
        func_0x00010c296f60(lVar9,param_2,&PTR____CFConstantStringClassReference_110ece4f8);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf529e0();
        if (lVar7 != 0) {
          lVar10 = lVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar9);
    }
    lVar1 = lVar10;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar4 = PTR_PTR_1126c4328;
      func_0x00010c091ba0(PTR_PTR_1126c4328);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b2680(puVar4,param_2,PTR_PTR_1133c92a8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = puVar8;
    func_0x00010bf51e00(puVar8);
    _objc_release(lVar10);
    _objc_release(puVar8);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  return puVar8;
}



/* Entry: 107fdf3b0; end: 107fdf417;  */

ulong FUN_107fdf3b0(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c262b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar1 == 0) || (uVar1 = param_1, func_0x00010c262ba0(), 3 < uVar1)) {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107fdf418; end: 107fdf54b;  */

void FUN_107fdf418(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  if (lVar2 != 0x7fffffffffffffff) {
    lVar2 = param_4;
    func_0x00010c0fa980(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  func_0x00010c2b3ca0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_3);
  func_0x00010c2b3b00(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_107fdf54c(param_3);
  func_0x00010c2b3780((float)(double)CONCAT44(uVar4,uVar3),param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9b80(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad4e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fdf54c; end: 107fdf64f;  */

undefined8 FUN_107fdf54c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0c6c20();
  if (lVar1 == 1) {
    func_0x00010bf2a7e0(PTR_PTR_1126b6600);
    uVar2 = param_1;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0c6c20();
    uVar2 = 0;
    if (lVar1 == 2) {
      func_0x00010bf8b160(param_2);
      uVar2 = param_1;
    }
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107fdf650; end: 107fdf68f;  */

undefined8 FUN_107fdf650(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c06c000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107fdf690; end: 107fdf717;  */

undefined8 FUN_107fdf690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfe5e40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaebe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107fdf718; end: 107fdfab3;  */

undefined ** FUN_107fdf718(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 0;
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar4 != 0) {
    do {
      lVar16 = 0;
      do {
        fVar17 = (float)uVar19;
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar14 = *(undefined8 *)(lVar16 * 8);
        ppuVar15 = ppuVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf3a0;
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar7 = ppuVar15;
        }
        _objc_retain(ppuVar7);
        _objc_release(ppuVar15);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfb2c80(ppuVar7);
        fVar18 = fVar17;
        func_0x00010bf45de0(uVar14);
        uVar19 = (ulong)(uint)(fVar17 + fVar18);
        func_0x00010c0df740(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2);
        _objc_release(puVar5);
        ppuVar6 = ppuVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf3a0;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar15 = ppuVar6;
        }
        _objc_retain(ppuVar15);
        _objc_release(ppuVar6);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c067fc0(ppuVar15);
        _objc_release(ppuVar15);
        func_0x00010c0df780(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar3);
        _objc_release(puVar5);
        _objc_release(ppuVar7);
        lVar16 = lVar16 + 1;
      } while (lVar4 != lVar16);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_1);
  ppuVar7 = ppuVar2;
  func_0x00010c086f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  ppuVar12 = (undefined **)0x0;
  ppuVar15 = ppuVar7;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar15;
  func_0x00010c0d3c80();
  _objc_release(ppuVar15);
  ppuVar15 = ppuVar6;
  func_0x00010bf529e0();
  fVar17 = (float)uVar19;
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar15 = (undefined **)0x0;
    do {
      fVar18 = (float)uVar19;
      ppuVar8 = ppuVar6;
      func_0x00010c0dfd40(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar3;
      func_0x00010c0e00e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80(ppuVar9);
      fVar17 = fVar18;
      func_0x00010bfb2c80(ppuVar10);
      uVar19 = (ulong)(uint)(fVar18 / fVar17);
      ppuVar11 = ppuVar6;
      ppuVar12 = ppuVar15;
      func_0x00010c0dfd40(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1807e0();
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      ppuVar8 = ppuVar6;
      func_0x00010bf529e0();
      fVar17 = (float)uVar19;
    } while (ppuVar15 < ppuVar8);
  }
  ppuVar15 = ppuVar6;
  func_0x00010bf51e00(ppuVar6);
  _objc_release(ppuVar6);
  _objc_release(ppuVar7);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
    return ppuVar15;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  func_0x00010bfb2c80(param_2);
  fVar18 = fVar17;
  func_0x00010bfb2c80(ppuVar12);
  _objc_release(ppuVar12);
  return (undefined **)(ulong)(fVar17 < fVar18);
}



/* Entry: 107fdfab4; end: 107fdfb0b;  */

bool FUN_107fdfab4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  
  _objc_retain(param_4);
  func_0x00010bfb2c80(param_3);
  fVar1 = param_1;
  func_0x00010bfb2c80(param_4);
  _objc_release(param_4);
  return param_1 < fVar1;
}



/* Entry: 107fdfb0c; end: 107fe00bf;  */

void FUN_107fdfb0c(undefined8 ****param_1,undefined8 ****param_2,undefined8 ****param_3,
                  undefined8 ****param_4,undefined8 ****param_5,undefined8 param_6,
                  undefined8 ****param_7)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined **ppuVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  undefined8 uVar15;
  undefined8 ****unaff_x20;
  long lVar16;
  double dVar17;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 ***pppuStack_258;
  undefined8 ***pppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 ***pppuStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 ***pppuStack_1d8;
  int iStack_1cc;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 ***pppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 **ppuStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined1 auStack_108 [128];
  undefined8 ***pppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = (undefined **)param_2;
  ppppuVar12 = param_3;
  ppppuVar6 = param_4;
  ppppuVar14 = param_5;
  _objc_retain();
  iVar13 = (int)ppppuVar6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  pppuStack_1c0 = param_7;
  _objc_retain(param_7);
  ppppuVar2 = param_4;
  pppuStack_1b8 = param_4;
  func_0x00010bf529e0();
  ppppuVar6 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
  if (ppppuVar2 == (undefined8 ****)0x0) goto LAB_107fdfd78;
  iStack_1cc = (int)param_5;
  param_4 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_1c8 = param_6;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar12 = param_1;
  func_0x00010bf0af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = ppppuVar12;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar10 = param_3;
  ppuVar11 = (undefined **)ppppuVar2;
  FUN_107fe4ac8(param_3,ppppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar2);
  _objc_release(ppppuVar12);
  ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSSet_1126ae870;
  if (ppppuVar10 == (undefined8 ****)0x0) {
    param_7 = param_1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)0x2;
    ppppuVar12 = (undefined8 ****)0x1;
    ppppuVar2 = param_7;
    FUN_107fe9a24();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    param_5 = param_4;
    param_6 = uStack_1c8;
    if (ppppuVar2 != (undefined8 ****)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_1f8 = ppppuVar10;
      pppuStack_1f0 = param_3;
      pppuStack_1e0 = param_1;
      pppuStack_1d8 = ppppuVar2;
      pppuStack_88 = ppppuVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      pppuStack_1e8 = param_2;
      func_0x00010bf39de0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar2 = param_2;
      func_0x00010c13cf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar5);
      dVar17 = 0.0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      ppuStack_150 = (undefined8 ***)0x0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      _objc_retain(ppppuVar2);
      ppppuVar12 = (undefined8 ****)&ppuStack_150;
      iVar13 = (int)auStack_108;
      ppppuVar14 = (undefined8 ****)0x10;
      ppppuVar6 = ppppuVar2;
      func_0x00010bf52a60();
      if (ppppuVar6 != (undefined8 ****)0x0) {
        lVar16 = *plStack_140;
        do {
          ppppuVar14 = (undefined8 ****)0x0;
          do {
            if (*plStack_140 != lVar16) {
              _objc_enumerationMutation(ppppuVar2);
            }
            uVar15 = *(undefined8 *)(lStack_148 + (long)ppppuVar14 * 8);
            puVar5 = PTR_PTR_1126d1768;
            _objc_opt_new(PTR_PTR_1126d1768);
            uVar7 = uVar15;
            func_0x00010c1536e0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar7;
            func_0x00010c14d600();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            ppppuVar12 = (undefined8 ****)pppuStack_1b8;
            func_0x00010bfc51c0();
            if ((int)ppppuVar12 == 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110ece618;
              func_0x00010b5f316c(pppuStack_1c0,&PTR____CFConstantStringClassReference_110ece618);
            }
            else {
              func_0x00010c220160(puVar5);
              func_0x00010bf45da0(uVar15);
              dVar17 = (double)(ulong)(uint)(float)dVar17;
              func_0x00010c1807e0(dVar17,puVar5);
              func_0x00010befa120(param_4);
            }
            _objc_release(uVar9);
            _objc_release(puVar5);
            ppppuVar14 = (undefined8 ****)((long)ppppuVar14 + 1);
          } while (ppppuVar6 != ppppuVar14);
          ppppuVar12 = (undefined8 ****)&ppuStack_150;
          iVar13 = (int)auStack_108;
          ppppuVar14 = (undefined8 ****)0x10;
          ppppuVar6 = ppppuVar2;
          func_0x00010bf52a60();
        } while (ppppuVar6 != (undefined8 ****)0x0);
      }
      _objc_release(ppppuVar2);
      ppppuVar8 = param_4;
      func_0x00010bf529e0();
      ppppuVar4 = (undefined8 ****)PTR___NSConcreteStackBlock_11034bd00;
      param_1 = (undefined8 ****)pppuStack_1e0;
      param_2 = (undefined8 ****)pppuStack_1e8;
      param_3 = (undefined8 ****)pppuStack_1f0;
      param_6 = uStack_1c8;
      ppppuVar6 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
      ppppuVar10 = (undefined8 ****)pppuStack_1f8;
      if (ppppuVar8 != (undefined8 ****)0x0) {
        ppuStack_188 = (undefined8 **)PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_107fe2db8;
        puStack_170 = &UNK_110864a38;
        _objc_retain(param_4);
        param_1 = (undefined8 ****)pppuStack_1e0;
        pppuStack_168 = param_4;
        _objc_retain(pppuStack_1e0);
        param_6 = uStack_1c8;
        pppuStack_160 = param_1;
        uVar7 = uStack_1c8;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1b0 = ppppuVar4;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_107fe2e94;
        puStack_198 = &UNK_110841f20;
        _objc_retain(param_4);
        param_3 = (undefined8 ****)pppuStack_1f0;
        ppppuVar12 = (undefined8 ****)&ppuStack_188;
        ppppuVar14 = (undefined8 ****)&ppuStack_1b0;
        uVar9 = uVar7;
        pppuStack_190 = param_4;
        func_0x00010c0f8500(pppuStack_1f0);
        iVar13 = (int)uVar9;
        _objc_release(uVar7);
        _objc_release(pppuStack_190);
        _objc_release(pppuStack_160);
        ppppuVar3 = (undefined8 ****)pppuStack_168;
        ppppuVar8 = param_4;
        param_2 = (undefined8 ****)pppuStack_1e8;
        ppppuVar6 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
        ppppuVar10 = (undefined8 ****)pppuStack_1f8;
        goto LAB_107fdfcac;
      }
      goto LAB_107fdfcb4;
    }
  }
  else {
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar5 = PTR_PTR_1126d1768;
    _objc_opt_class();
    uStack_208 = 0;
    puStack_210 = puVar5;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    ppppuVar3 = ppppuVar10;
    func_0x00010c2a0540();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_110 = (undefined8 ****)0x0;
    ppppuVar14 = &pppuStack_110;
    ppppuVar12 = ppppuVar2;
    ppppuVar4 = ppppuVar3;
    func_0x00010c27f260();
    iVar13 = (int)ppppuVar4;
    _objc_retainAutoreleasedReturnValue();
    pppuStack_1d8 = pppuStack_110;
    _objc_retain();
    _objc_release(param_4);
    ppppuVar4 = param_4;
    param_6 = uStack_1c8;
LAB_107fdfcac:
    param_4 = ppppuVar8;
    _objc_release(ppppuVar3);
    param_5 = ppppuVar4;
LAB_107fdfcb4:
    iVar1 = iStack_1cc;
    _objc_release(ppppuVar2);
    _objc_release(pppuStack_1d8);
    if (iVar1 != 0) {
      ppppuVar12 = param_4;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      param_5 = ppppuVar12;
      func_0x00010c0d3c80();
      _objc_release(param_4);
      _objc_release(ppppuVar12);
      ppppuVar12 = param_5;
      func_0x00010bf529e0();
      if ((undefined8 ****)0x9 < ppppuVar12) {
        ppppuVar12 = (undefined8 ****)0xa;
      }
      iVar13 = (int)ppppuVar12;
      ppppuVar12 = (undefined8 ****)0x0;
      ppppuVar4 = param_5;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      param_4 = ppppuVar4;
      func_0x00010c0d3c80();
      _objc_release(param_5);
      _objc_release(ppppuVar4);
    }
    param_7 = param_4;
    func_0x00010bf51e00();
    if (param_7 != (undefined8 ****)0x0) {
      ppppuVar6 = param_7;
    }
    _objc_retain(ppppuVar6);
    _objc_release(param_7);
    unaff_x20 = ppppuVar2;
  }
  _objc_release(ppppuVar10);
  _objc_release(param_4);
LAB_107fdfd78:
  _objc_release(pppuStack_1c0);
  _objc_release(param_6);
  _objc_release(pppuStack_1b8);
  _objc_release(param_3);
  _objc_release(param_2);
  ppppuVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_218 = FUN_107fe00c0;
    uStack_260 = param_6;
    pppuStack_258 = param_3;
    pppuStack_250 = param_2;
    pppuStack_248 = param_1;
    pppuStack_240 = param_5;
    pppuStack_238 = param_4;
    pppuStack_230 = unaff_x20;
    pppuStack_228 = param_7;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(ppuVar11);
    _objc_retain(ppppuVar12);
    _objc_retain(ppppuVar14);
    ppppuVar10 = ppppuVar12;
    func_0x00010bf529e0();
    ppppuVar6 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
    if (ppppuVar10 != (undefined8 ****)0x0) {
      puStack_288 = &uStack_290;
      uStack_290 = 0;
      uStack_280 = 0x3032000000;
      pcStack_278 = FUN_107fe2ef0;
      uStack_270 = 0x107fe2f00;
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar10 = ppppuVar2;
      puStack_268 = puVar5;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar4 = ppppuVar10;
      func_0x00010c08fa60();
      ppppuVar8 = ppppuVar2;
      if (ppppuVar4 == (undefined8 ****)0x0) {
        func_0x00010c241220(ppppuVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf8b0c0(ppppuVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppppuVar10);
      _objc_retain(ppppuVar12);
      _objc_retain(ppppuVar14);
      func_0x00010bfaac80(ppuVar11);
      if (iVar13 != 0) {
        uVar9 = puStack_288[5];
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c0d3c80();
        uVar15 = puStack_288[5];
        puStack_288[5] = uVar7;
        _objc_release(uVar15);
        _objc_release(uVar9);
        uVar9 = puStack_288[5];
        func_0x00010bf529e0();
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c0d3c80();
        uVar15 = puStack_288[5];
        puStack_288[5] = uVar7;
        _objc_release(uVar15);
        _objc_release(uVar9);
      }
      ppppuVar10 = (undefined8 ****)puStack_288[5];
      func_0x00010bf51e00();
      if (ppppuVar10 != (undefined8 ****)0x0) {
        ppppuVar6 = ppppuVar10;
      }
      _objc_retain(ppppuVar6);
      _objc_release(ppppuVar10);
      _objc_release(ppppuVar14);
      _objc_release(ppppuVar12);
      _objc_release(ppppuVar8);
      __Block_object_dispose(&uStack_290,8);
      _objc_release(puStack_268);
    }
    _objc_release(ppppuVar14);
    _objc_release(ppppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar6);
  return;
}



/* Entry: 107fe00c0; end: 107fe0357;  */

void FUN_107fe00c0(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar8 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_107fe2ef0;
    uStack_60 = 0x107fe2f00;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    puStack_58 = puVar6;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    lVar3 = param_1;
    if (lVar2 == 0) {
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf8b0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bfaac80(param_2);
    if (param_4 != 0) {
      uVar4 = puStack_78[5];
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d3c80();
      uVar7 = puStack_78[5];
      puStack_78[5] = uVar5;
      _objc_release(uVar7);
      _objc_release(uVar4);
      uVar4 = puStack_78[5];
      func_0x00010bf529e0();
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d3c80();
      uVar7 = puStack_78[5];
      puStack_78[5] = uVar5;
      _objc_release(uVar7);
      _objc_release(uVar4);
    }
    puVar6 = (undefined *)puStack_78[5];
    func_0x00010bf51e00();
    if (puVar6 != (undefined *)0x0) {
      puVar8 = puVar6;
    }
    _objc_retain(puVar8);
    _objc_release(puVar6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(lVar3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(puStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107fe0358; end: 107fe0427;  */

void FUN_107fe0358(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b86e8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c204580();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010c197720(puVar1);
  uVar3 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c25c500(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fe0428; end: 107fe04eb;  */

void FUN_107fe0428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x00010b7f2fec();
  puVar1 = PTR_PTR_1126d8c80;
  _objc_opt_new(PTR_PTR_1126d8c80);
  func_0x00010c20cee0();
  func_0x00010c20d1a0(puVar1);
  _objc_release(param_1);
  func_0x00010c222c00(puVar1);
  func_0x00010c203920(puVar1);
  _objc_release(param_4);
  func_0x00010b5fb06c(param_5);
  func_0x000108dfcc3c();
  func_0x00010c20ddc0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fe04ec; end: 107fe067f;  */

void FUN_107fe04ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf44660(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c2bedc0(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  func_0x00010bfed6a0(param_3);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126d8c88;
  _objc_opt_new(PTR_PTR_1126d8c88);
  func_0x00010c223000();
  func_0x00010c2230a0(puVar2);
  puVar3 = PTR_PTR_1126bf170;
  _objc_opt_new(PTR_PTR_1126bf170);
  func_0x00010bf51c80(param_5);
  func_0x00010c1b9120(puVar3);
  func_0x00010bf51c80(param_5);
  _objc_release(param_5);
  func_0x00010c1be5e0(param_2,puVar3);
  func_0x00010c21eb20(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fe1400; end: 107fe1b6b;  */

void FUN_107fe1400(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,undefined **param_8,
                  undefined **param_9,int param_10)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  undefined *puVar34;
  undefined **ppuVar35;
  ulong uVar36;
  undefined **ppuVar37;
  double dVar38;
  int iStack_4d0;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  byte bStack_1a8;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = param_8;
  ppuVar27 = param_9;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  ppuVar1 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  ppuVar26 = param_8;
  FUN_107fe00c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar1;
  FUN_107fe3130();
  ppuVar3 = ppuVar1;
  func_0x00010bf313a0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(ppuVar3);
  _objc_retain(param_3);
  ppuVar3 = param_3;
  func_0x00010c246660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = param_3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar4;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar24;
    func_0x00010c08fa60();
    _objc_release(ppuVar24);
    _objc_release(ppuVar4);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      puVar6 = PTR_PTR_1126b25c0;
      _objc_alloc();
      ppuVar4 = param_3;
      func_0x00010c23f220(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar24 = ppuVar4;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360();
      _objc_release(ppuVar24);
      _objc_release(ppuVar4);
      puVar7 = puVar6;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfe5ea0();
      _objc_release(puVar7);
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((long)puVar8 < 1) {
        _objc_release(puVar6);
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        puVar7 = puVar6;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        puStack_200 = puVar7;
        func_0x00010bfe5ea0();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
    }
  }
  else {
    ppuVar4 = ppuVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar3);
  _objc_release(param_3);
  ppuVar3 = ppuVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d8cd0;
  _objc_opt_new();
  ppuVar24 = ppuVar2;
  func_0x00010c0d3c80(ppuVar2);
  func_0x00010c223f60(puVar6);
  _objc_release(ppuVar24);
  func_0x00010c1c5440(puVar6);
  func_0x00010c1c5480(puVar6);
  func_0x00010c203dc0(puVar6);
  func_0x00010c1bbd60(puVar6);
  func_0x00010c204680(puVar6);
  func_0x00010bfd9dc0(ppuVar1);
  func_0x00010c1a5d80(puVar6);
  func_0x00010bf298a0();
  func_0x00010c177420(puVar6);
  ppuVar24 = ppuVar1;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar24;
  func_0x00010c08fa60();
  ppuVar9 = ppuVar1;
  if (ppuVar5 == (undefined **)0x0) {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar24);
  puVar7 = PTR_PTR_1126af4d0;
  ppuVar24 = param_6;
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    ppuVar24 = (undefined **)0x0;
    puStack_1f0 = PTR_PTR_1126af4c0;
    ppuVar26 = param_6;
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1f0 != (undefined *)0x0) {
      puVar8 = PTR_PTR_1126af4d0;
      func_0x00010bfa7400();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      ppuVar24 = apuStack_f0;
      ppuVar26 = (undefined **)0x10;
      puVar10 = puVar8;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar30 = *plStack_120;
        do {
          puVar34 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar30) {
              _objc_enumerationMutation(puVar8);
            }
            uVar11 = *(ulong *)(lStack_128 + (long)puVar34 * 8);
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar7;
            func_0x00010c241220(puVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar11;
            func_0x00010c0720c0();
            _objc_release(puVar12);
            _objc_release(uVar11);
            if ((uVar22 & 1) != 0) goto LAB_107fe18e0;
            puVar34 = puVar34 + 1;
          } while (puVar10 != puVar34);
          ppuVar24 = apuStack_f0;
          ppuVar26 = (undefined **)0x10;
          puVar10 = puVar8;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
LAB_107fe18e0:
      _objc_release(puVar8);
      _objc_release(puVar8);
    }
    func_0x00010c1b0e80(puVar6);
    _objc_release(puStack_1f0);
  }
  _objc_release(puVar7);
  _objc_release(ppuVar9);
  if ((int)ppuVar23 != 0) {
    func_0x00010bf8b160(ppuVar1);
    param_2 = 0x447a0000;
  }
  func_0x00010c192e60(puVar6);
  ppuVar23 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d2a0();
  func_0x00010c204940(puVar6);
  _objc_release(ppuVar23);
  ppuVar23 = ppuVar1;
  func_0x00010bfd89e0();
  if ((int)ppuVar23 != 0) {
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_107fe2ef0;
    uStack_140 = 0x107fe2f00;
    uStack_138 = 0;
    ppuVar23 = param_9;
    puStack_158 = &uStack_160;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_107fe3158;
    puStack_170 = &UNK_11097c0a0;
    ppuVar19 = &puStack_188;
    ppuVar24 = (undefined **)0x1;
    ppuVar26 = (undefined **)0x0;
    puStack_168 = &uStack_160;
    func_0x00010c135bc0();
    _objc_release(ppuVar23);
    puVar7 = PTR_PTR_1126bf170;
    _objc_alloc_init();
    func_0x00010bf51c80(puStack_158[5]);
    func_0x00010c1b9120(puVar7);
    func_0x00010bf51c80(puStack_158[5]);
    func_0x00010c1be5e0(param_2,puVar7);
    func_0x00010c1b9180(puVar6);
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_160,8);
    _objc_release(uStack_138);
  }
  puVar7 = puVar6;
  func_0x00010c0c6d20();
  uVar22 = (ulong)puVar7 & 0xffffffff;
  func_0x00010b5f32d0(param_8,0);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uVar20 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar19;
  ppuVar23 = ppuVar27;
  _objc_retain();
  _objc_retain(uVar20);
  _objc_retain(uVar22);
  _objc_retain(ppuVar24);
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar19);
  _objc_retain(ppuVar27);
  _objc_retain(puStack_200);
  _objc_retain(uStack_1f8);
  _objc_retain(puStack_1f0);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar9);
  _objc_retain(param_9);
  _objc_retain(ppuVar3);
  _objc_retain(param_6);
  _objc_retain(param_3);
  puVar6 = PTR_PTR_1126d8c90;
  _objc_opt_new();
  ppuVar5 = ppuVar27;
  FUN_107fe04ec(ppuVar27,puStack_200,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e0a0(puVar6);
  _objc_retain(ppuVar19);
  dVar38 = 0.0;
  ppuVar13 = ppuVar19;
  func_0x00010bf52a60();
  lVar30 = lRam0000000000000000;
  if (ppuVar13 == (undefined **)0x0) {
    iStack_4d0 = 0;
  }
  else {
    uVar33 = 0;
    do {
      ppuVar35 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar30) {
          _objc_enumerationMutation(ppuVar19);
        }
        uVar14 = *(undefined8 *)((long)ppuVar35 * 8);
        func_0x00010bf0af00(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160();
        dVar38 = dVar38 + (double)uVar33;
        uVar33 = (uint)dVar38;
        _objc_release(uVar14);
        ppuVar35 = (undefined **)((long)ppuVar35 + 1);
      } while (ppuVar13 != ppuVar35);
      ppuVar13 = ppuVar19;
      func_0x00010bf52a60();
    } while (ppuVar13 != (undefined **)0x0);
    iStack_4d0 = uVar33 * 1000;
  }
  _objc_release(ppuVar19);
  ppuVar35 = ppuVar24;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar19);
  _objc_retain(uVar20);
  _objc_retain(uVar22);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar3);
  _objc_retain(param_9);
  _objc_retain(ppuVar19);
  puVar7 = PTR_PTR_1126d8cc8;
  _objc_opt_new();
  _objc_retain(ppuVar19);
  ppuVar13 = ppuVar19;
  func_0x00010bf52a60();
  lVar30 = lRam0000000000000000;
  while (ppuVar13 != (undefined **)0x0) {
    ppuVar37 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar30) {
        _objc_enumerationMutation(ppuVar19);
      }
      uVar14 = *(undefined8 *)((long)ppuVar37 * 8);
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      _objc_release(uVar14);
      func_0x00010bfcb860();
      func_0x00010c21af40(puVar7);
      ppuVar37 = (undefined **)((long)ppuVar37 + 1);
    } while (ppuVar13 != ppuVar37);
    ppuVar13 = ppuVar19;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar19);
  _objc_release(ppuVar19);
  _objc_retain(ppuVar19);
  ppuVar13 = ppuVar19;
  func_0x00010bf52a60();
  lVar30 = lRam0000000000000000;
  while (ppuVar13 != (undefined **)0x0) {
    ppuVar37 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar30) {
        _objc_enumerationMutation(ppuVar19);
      }
      lVar31 = *(long *)((long)ppuVar37 * 8);
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar31;
      func_0x00010c0c6c20();
      _objc_release(lVar31);
      if (lVar15 != 1) {
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar8 = puVar10;
        func_0x00010bf52a60();
        lVar15 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar34 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar15) {
              _objc_enumerationMutation(puVar10);
            }
            lVar32 = *(long *)((long)puVar34 * 8);
            lVar31 = lVar32;
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar31;
            func_0x00010c0c6c20();
            _objc_release(lVar31);
            if (lVar16 != 1) {
              func_0x00010bf0af00(lVar32);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8b160();
              _objc_release(lVar32);
            }
            puVar34 = puVar34 + 1;
          } while (puVar8 != puVar34);
          puVar8 = puVar10;
          func_0x00010bf52a60();
        }
        _objc_release(puVar10);
        _objc_release(puVar10);
      }
      ppuVar37 = (undefined **)((long)ppuVar37 + 1);
    } while (ppuVar37 != ppuVar13);
    ppuVar13 = ppuVar19;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar19);
  _objc_retain(ppuVar19);
  dVar38 = 0.0;
  ppuVar13 = ppuVar19;
  func_0x00010bf52a60();
  lVar30 = lRam0000000000000000;
  while (ppuVar13 != (undefined **)0x0) {
    ppuVar37 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar30) {
        _objc_enumerationMutation(ppuVar19);
      }
      uVar17 = *(undefined8 *)((long)ppuVar37 * 8);
      func_0x00010bf0af00(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar17;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar14);
      _objc_release(uVar17);
      ppuVar37 = (undefined **)((long)ppuVar37 + 1);
    } while (ppuVar13 != ppuVar37);
    ppuVar13 = ppuVar19;
    func_0x00010bf52a60();
  }
  func_0x00010bf529e0();
  _objc_release(ppuVar19);
  _objc_retain(ppuVar19);
  ppuVar13 = ppuVar19;
  func_0x00010bfb1920(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  ppuVar37 = ppuVar13;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar37;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar11 = (ulong)dVar38;
  _objc_release(ppuVar18);
  _objc_release(ppuVar37);
  _objc_release(ppuVar13);
  dVar38 = 0.0;
  _objc_retain(ppuVar19);
  ppuVar13 = ppuVar19;
  func_0x00010bf52a60();
  lVar30 = lRam0000000000000000;
  while (ppuVar13 != (undefined **)0x0) {
    ppuVar37 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar30) {
        _objc_enumerationMutation(ppuVar19);
      }
      uVar17 = *(undefined8 *)((long)ppuVar37 * 8);
      func_0x00010bf0af00(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar17;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      uVar36 = (ulong)dVar38;
      _objc_release(uVar14);
      _objc_release(uVar17);
      if (uVar36 <= uVar11) {
        uVar11 = uVar36;
      }
      ppuVar37 = (undefined **)((long)ppuVar37 + 1);
    } while (ppuVar13 != ppuVar37);
    ppuVar13 = ppuVar19;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar19);
  _objc_release(ppuVar19);
  _objc_retain(ppuVar19);
  ppuVar13 = ppuVar19;
  func_0x00010bfb1920(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  ppuVar37 = ppuVar13;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar37;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar11 = (ulong)dVar38;
  _objc_release(ppuVar18);
  _objc_release(ppuVar37);
  _objc_release(ppuVar13);
  dVar38 = 0.0;
  _objc_retain(ppuVar19);
  ppuVar13 = ppuVar19;
  func_0x00010bf52a60();
  lVar30 = lRam0000000000000000;
  uVar33 = (uint)ppuVar23;
  while (ppuVar13 != (undefined **)0x0) {
    ppuVar37 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar30) {
        _objc_enumerationMutation(ppuVar19);
      }
      uVar17 = *(undefined8 *)((long)ppuVar37 * 8);
      func_0x00010bf0af00(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar17;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      uVar36 = (ulong)dVar38;
      _objc_release(uVar14);
      _objc_release(uVar17);
      if (uVar11 <= uVar36) {
        uVar11 = uVar36;
      }
      ppuVar37 = (undefined **)((long)ppuVar37 + 1);
    } while (ppuVar13 != ppuVar37);
    ppuVar13 = ppuVar19;
    func_0x00010bf52a60();
    uVar33 = (uint)ppuVar23;
  }
  bStack_1a8 = (byte)param_8;
  uVar28 = (uint)bStack_1a8;
  _objc_release(ppuVar19);
  _objc_release(ppuVar19);
  ppuVar13 = (undefined **)PTR_PTR_1126d8cc0;
  _objc_opt_new();
  _objc_retain(uVar20);
  _objc_retain(uVar22);
  _objc_retain(ppuVar19);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar3);
  _objc_retain(param_9);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar19);
  ppuVar23 = ppuVar19;
  func_0x00010bf52a60();
  lVar30 = lRam0000000000000000;
  while (ppuVar23 != (undefined **)0x0) {
    ppuVar37 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar30) {
        _objc_enumerationMutation(ppuVar19);
      }
      uVar14 = *(undefined8 *)((long)ppuVar37 * 8);
      ppuVar2 = ppuVar3;
      ppuVar18 = param_9;
      FUN_107fdfb0c(uVar14,uVar20,uVar22,ppuVar4,0);
      uVar33 = (uint)ppuVar18;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar8);
      _objc_release(uVar14);
      ppuVar37 = (undefined **)((long)ppuVar37 + 1);
    } while (ppuVar23 != ppuVar37);
    ppuVar23 = ppuVar19;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar19);
  puVar10 = puVar8;
  FUN_107fdf718(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(param_9);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar19);
  _objc_release(uVar22);
  _objc_release(uVar20);
  func_0x00010c217700(ppuVar13);
  _objc_release(puVar10);
  func_0x00010c1c4400(ppuVar13);
  func_0x00010c16de40(ppuVar13);
  func_0x00010c16ddc0(ppuVar13);
  func_0x00010c1c7b00(ppuVar13);
  func_0x00010c1c3140(ppuVar13);
  _objc_release(puVar7);
  _objc_release(param_9);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(ppuVar19);
  ppuVar37 = ppuVar24;
  func_0x00010bf977c0(ppuVar24);
  ppuVar18 = ppuVar35;
  ppuVar25 = ppuVar13;
  FUN_107fe0428(ppuVar35,iStack_4d0,param_7,ppuVar13,ppuVar37);
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar18;
  func_0x00010c20d2a0(puVar6);
  if (param_10 < 0x11) {
    if (param_10 == 0xf) {
      puVar7 = PTR_PTR_1126d8c98;
      _objc_opt_new(PTR_PTR_1126d8c98);
      ppuVar23 = ppuVar26;
      ppuVar25 = ppuVar4;
      ppuVar37 = ppuVar3;
      ppuVar2 = param_9;
      uVar33 = uVar28;
      FUN_107fe2a80(ppuVar26,uVar20,uVar22,ppuVar4,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204860(puVar7);
      _objc_release(ppuVar23);
      func_0x00010bf1f3c0(uStack_1f8);
      func_0x00010c1df660(puVar7);
      func_0x00010c282760(puStack_1f0);
      func_0x00010c1e88a0(puVar7);
      func_0x00010c205500(puVar6);
      ppuVar23 = &PTR____CFConstantStringClassReference_110ec0b38;
      goto LAB_107fe2968;
    }
    if (param_10 == 0x10) {
      puVar7 = PTR_PTR_1126d8ca0;
      _objc_opt_new(PTR_PTR_1126d8ca0);
      func_0x00010c282760(param_4);
      func_0x00010c222560(puVar7);
      func_0x00010c20e000(puVar6);
      ppuVar23 = &PTR____CFConstantStringClassReference_110ece5b8;
      goto LAB_107fe2968;
    }
  }
  else {
    if (param_10 == 0x11) {
      puVar7 = PTR_PTR_1126d8ca8;
      _objc_opt_new(PTR_PTR_1126d8ca8);
      ppuVar23 = ppuVar26;
      ppuVar25 = ppuVar4;
      ppuVar37 = ppuVar3;
      ppuVar2 = param_9;
      uVar33 = uVar28;
      FUN_107fe2a80(ppuVar26,uVar20,uVar22,ppuVar4,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204860(puVar7);
      _objc_release(ppuVar23);
      func_0x00010c282760(param_5);
      func_0x00010c222560(puVar7);
      func_0x00010c205b40(puVar6);
      ppuVar23 = &PTR____CFConstantStringClassReference_110ece5d8;
    }
    else if (param_10 == 0x12) {
      puVar7 = PTR_PTR_1126d8cb0;
      _objc_opt_new(PTR_PTR_1126d8cb0);
      func_0x00010c1feba0();
      ppuVar23 = ppuVar26;
      ppuVar25 = ppuVar4;
      ppuVar37 = ppuVar3;
      ppuVar2 = param_9;
      uVar33 = uVar28;
      FUN_107fe2a80(ppuVar26,uVar20,uVar22,ppuVar4,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204860(puVar7);
      _objc_release(ppuVar23);
      func_0x00010c1d0a80(puVar6);
      ppuVar23 = &PTR____CFConstantStringClassReference_110ece5f8;
    }
    else {
      if (param_10 != 0x13) goto LAB_107fe297c;
      puVar7 = PTR_PTR_1126d8cb8;
      _objc_opt_new(PTR_PTR_1126d8cb8);
      ppuVar23 = ppuVar26;
      ppuVar25 = ppuVar4;
      ppuVar37 = ppuVar3;
      ppuVar2 = param_9;
      uVar33 = uVar28;
      FUN_107fe2a80(ppuVar26,uVar20,uVar22,ppuVar4,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204860(puVar7);
      _objc_release(ppuVar23);
      func_0x00010c19a600(puVar6);
      ppuVar23 = &PTR____CFConstantStringClassReference_110e47758;
    }
LAB_107fe2968:
    func_0x00010b5f3060(param_9,1,ppuVar23);
    _objc_release(puVar7);
  }
LAB_107fe297c:
  ppuVar21 = ppuVar1;
  FUN_107fe0358(puVar6,ppuVar1);
  _objc_release(ppuVar18);
  _objc_release(ppuVar13);
  _objc_release(ppuVar35);
  _objc_release(ppuVar5);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(ppuVar3);
  _objc_release(param_9);
  _objc_release(ppuVar9);
  _objc_release(ppuVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(puStack_200);
  _objc_release(ppuVar27);
  _objc_release(ppuVar19);
  _objc_release(ppuVar26);
  _objc_release(ppuVar24);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar37);
  _objc_retain(ppuVar25);
  _objc_retain(ppuVar23);
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar1);
  ppuVar19 = ppuVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  ppuVar3 = ppuVar19;
  func_0x00010bf5a700(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar19;
  func_0x00010c09da80(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bf170;
  _objc_alloc_init();
  ppuVar4 = ppuVar19;
  func_0x000107fe9c90(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1b9120(puVar7);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar19;
  func_0x000107fe9d68(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1be5e0(puVar7);
  _objc_release(ppuVar4);
  puVar6 = PTR_PTR_1126d8cd0;
  _objc_opt_new(PTR_PTR_1126d8cd0);
  ppuVar4 = ppuVar1;
  FUN_107fdfb0c(ppuVar1,ppuVar21,ppuVar23,ppuVar25,1,ppuVar37,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar37);
  _objc_release(ppuVar25);
  _objc_release(ppuVar23);
  _objc_release(ppuVar21);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar4;
  func_0x00010c0d3c80(ppuVar4);
  func_0x00010c223f60(puVar6);
  _objc_release(ppuVar1);
  func_0x00010c1c5440(puVar6);
  func_0x00010c1c5480(puVar6);
  func_0x00010c203dc0(puVar6);
  func_0x00010c204680(puVar6);
  func_0x00010bf8b160(ppuVar19);
  func_0x00010c192e60(puVar6);
  func_0x00010c204940(puVar6);
  func_0x000107fe9bd4();
  func_0x00010c177420(puVar6);
  func_0x00010c206c40(puVar6);
  func_0x00010c072a60(ppuVar19);
  func_0x00010c1b0e80(puVar6);
  ppuVar1 = ppuVar19;
  func_0x00010c0d0320(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar19;
  func_0x00010bf5a700(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb60(ppuVar1);
  func_0x00010c1a5d80(puVar6);
  _objc_release(ppuVar23);
  _objc_release(ppuVar1);
  if (uVar33 != 0) {
    func_0x00010c1b9180(puVar6);
  }
  puVar8 = puVar6;
  func_0x00010c0c6d20(puVar6);
  func_0x00010b5f32d0(ppuVar2,1,(ulong)puVar8 & 0xffffffff);
  _objc_release(ppuVar4);
  _objc_release(puVar7);
  _objc_release(ppuVar3);
  _objc_release(ppuVar19);
  _objc_release(ppuVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107fe1b6c; end: 107fe2a7f;  */

void FUN_107fe1b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,int param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined *param_15,undefined8 param_16,
                  undefined **param_17,undefined **param_18,undefined8 param_19,byte param_20,
                  undefined4 param_21,undefined8 param_22)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  uint uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined **ppuVar24;
  ulong uVar25;
  double dVar26;
  int iStack_2d0;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_6;
  uVar12 = param_7;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_22);
  puVar2 = PTR_PTR_1126d8c90;
  _objc_opt_new();
  uVar3 = param_7;
  FUN_107fe04ec(param_7,param_9,param_22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e0a0(puVar2);
  _objc_retain(param_6);
  dVar26 = 0.0;
  ppuVar14 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (ppuVar14 == (undefined **)0x0) {
    iStack_2d0 = 0;
  }
  else {
    uVar21 = 0;
    do {
      ppuVar22 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_6);
        }
        uVar4 = *(undefined8 *)((long)ppuVar22 * 8);
        func_0x00010bf0af00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160();
        dVar26 = dVar26 + (double)uVar21;
        uVar21 = (uint)dVar26;
        _objc_release(uVar4);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar14 != ppuVar22);
      ppuVar14 = param_6;
      func_0x00010bf52a60();
    } while (ppuVar14 != (undefined **)0x0);
    iStack_2d0 = uVar21 * 1000;
  }
  _objc_release(param_6);
  ppuVar22 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_6);
  puVar5 = PTR_PTR_1126d8cc8;
  _objc_opt_new();
  _objc_retain(param_6);
  ppuVar14 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar14 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar4 = *(undefined8 *)((long)ppuVar24 * 8);
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      _objc_release(uVar4);
      func_0x00010bfcb860();
      func_0x00010c21af40(puVar5);
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar14 != ppuVar24);
    ppuVar14 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_retain(param_6);
  ppuVar14 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar14 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      lVar19 = *(long *)((long)ppuVar24 * 8);
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar19;
      func_0x00010c0c6c20();
      _objc_release(lVar19);
      if (lVar6 != 1) {
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar8 = puVar7;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar18 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(puVar7);
            }
            lVar20 = *(long *)((long)puVar18 * 8);
            lVar19 = lVar20;
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar19;
            func_0x00010c0c6c20();
            _objc_release(lVar19);
            if (lVar9 != 1) {
              func_0x00010bf0af00(lVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8b160();
              _objc_release(lVar20);
            }
            puVar18 = puVar18 + 1;
          } while (puVar8 != puVar18);
          puVar8 = puVar7;
          func_0x00010bf52a60();
        }
        _objc_release(puVar7);
        _objc_release(puVar7);
      }
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar24 != ppuVar14);
    ppuVar14 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release(param_6);
  _objc_retain(param_6);
  dVar26 = 0.0;
  ppuVar14 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar14 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar10 = *(undefined8 *)((long)ppuVar24 * 8);
      func_0x00010bf0af00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar4);
      _objc_release(uVar10);
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar14 != ppuVar24);
    ppuVar14 = param_6;
    func_0x00010bf52a60();
  }
  func_0x00010bf529e0();
  _objc_release(param_6);
  _objc_retain(param_6);
  ppuVar14 = param_6;
  func_0x00010bfb1920(param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = ppuVar14;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar24;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar25 = (ulong)dVar26;
  _objc_release(ppuVar11);
  _objc_release(ppuVar24);
  _objc_release(ppuVar14);
  dVar26 = 0.0;
  _objc_retain(param_6);
  ppuVar14 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar14 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar10 = *(undefined8 *)((long)ppuVar24 * 8);
      func_0x00010bf0af00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      uVar23 = (ulong)dVar26;
      _objc_release(uVar4);
      _objc_release(uVar10);
      if (uVar23 <= uVar25) {
        uVar25 = uVar23;
      }
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar14 != ppuVar24);
    ppuVar14 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_retain(param_6);
  ppuVar14 = param_6;
  func_0x00010bfb1920(param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = ppuVar14;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar24;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar25 = (ulong)dVar26;
  _objc_release(ppuVar11);
  _objc_release(ppuVar24);
  _objc_release(ppuVar14);
  dVar26 = 0.0;
  _objc_retain(param_6);
  ppuVar14 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar21 = (uint)uVar12;
  while (ppuVar14 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar10 = *(undefined8 *)((long)ppuVar24 * 8);
      func_0x00010bf0af00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      uVar23 = (ulong)dVar26;
      _objc_release(uVar4);
      _objc_release(uVar10);
      if (uVar25 <= uVar23) {
        uVar25 = uVar23;
      }
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar14 != ppuVar24);
    ppuVar14 = param_6;
    func_0x00010bf52a60();
    uVar21 = (uint)uVar12;
  }
  uVar16 = (uint)param_20;
  _objc_release(param_6);
  _objc_release(param_6);
  puVar8 = PTR_PTR_1126d8cc0;
  _objc_opt_new();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_17);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  ppuVar14 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar14 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar12 = *(undefined8 *)((long)ppuVar24 * 8);
      ppuVar15 = param_18;
      ppuVar11 = param_17;
      FUN_107fdfb0c(uVar12,param_2,param_3,param_15,0);
      uVar21 = (uint)ppuVar11;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar7);
      _objc_release(uVar12);
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar14 != ppuVar24);
    ppuVar14 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release(param_6);
  puVar18 = puVar7;
  FUN_107fdf718(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(param_17);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c217700(puVar8);
  _objc_release(puVar18);
  func_0x00010c1c4400(puVar8);
  func_0x00010c16de40(puVar8);
  func_0x00010c16ddc0(puVar8);
  func_0x00010c1c7b00(puVar8);
  func_0x00010c1c3140(puVar8);
  _objc_release(puVar5);
  _objc_release(param_17);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_6);
  ppuVar24 = param_4;
  func_0x00010bf977c0(param_4);
  ppuVar11 = ppuVar22;
  puVar5 = puVar8;
  FUN_107fe0428(ppuVar22,iStack_2d0,param_14,puVar8,ppuVar24);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar11;
  func_0x00010c20d2a0(puVar2);
  if (param_8 < 0x11) {
    if (param_8 == 0xf) {
      puVar7 = PTR_PTR_1126d8c98;
      _objc_opt_new(PTR_PTR_1126d8c98);
      uVar12 = param_5;
      puVar5 = param_15;
      ppuVar24 = param_18;
      ppuVar15 = param_17;
      uVar21 = uVar16;
      FUN_107fe2a80(param_5,param_2,param_3,param_15,param_18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204860(puVar7);
      _objc_release(uVar12);
      func_0x00010bf1f3c0(param_10);
      func_0x00010c1df660(puVar7);
      func_0x00010c282760(param_11);
      func_0x00010c1e88a0(puVar7);
      func_0x00010c205500(puVar2);
      ppuVar14 = &PTR____CFConstantStringClassReference_110ec0b38;
    }
    else {
      if (param_8 != 0x10) goto LAB_107fe297c;
      puVar7 = PTR_PTR_1126d8ca0;
      _objc_opt_new(PTR_PTR_1126d8ca0);
      func_0x00010c282760(param_12);
      func_0x00010c222560(puVar7);
      func_0x00010c20e000(puVar2);
      ppuVar14 = &PTR____CFConstantStringClassReference_110ece5b8;
    }
  }
  else if (param_8 == 0x11) {
    puVar7 = PTR_PTR_1126d8ca8;
    _objc_opt_new(PTR_PTR_1126d8ca8);
    uVar12 = param_5;
    puVar5 = param_15;
    ppuVar24 = param_18;
    ppuVar15 = param_17;
    uVar21 = uVar16;
    FUN_107fe2a80(param_5,param_2,param_3,param_15,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204860(puVar7);
    _objc_release(uVar12);
    func_0x00010c282760(param_13);
    func_0x00010c222560(puVar7);
    func_0x00010c205b40(puVar2);
    ppuVar14 = &PTR____CFConstantStringClassReference_110ece5d8;
  }
  else if (param_8 == 0x12) {
    puVar7 = PTR_PTR_1126d8cb0;
    _objc_opt_new(PTR_PTR_1126d8cb0);
    func_0x00010c1feba0();
    uVar12 = param_5;
    puVar5 = param_15;
    ppuVar24 = param_18;
    ppuVar15 = param_17;
    uVar21 = uVar16;
    FUN_107fe2a80(param_5,param_2,param_3,param_15,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204860(puVar7);
    _objc_release(uVar12);
    func_0x00010c1d0a80(puVar2);
    ppuVar14 = &PTR____CFConstantStringClassReference_110ece5f8;
  }
  else {
    if (param_8 != 0x13) goto LAB_107fe297c;
    puVar7 = PTR_PTR_1126d8cb8;
    _objc_opt_new(PTR_PTR_1126d8cb8);
    uVar12 = param_5;
    puVar5 = param_15;
    ppuVar24 = param_18;
    ppuVar15 = param_17;
    uVar21 = uVar16;
    FUN_107fe2a80(param_5,param_2,param_3,param_15,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204860(puVar7);
    _objc_release(uVar12);
    func_0x00010c19a600(puVar2);
    ppuVar14 = &PTR____CFConstantStringClassReference_110e47758;
  }
  func_0x00010b5f3060(param_17,1,ppuVar14);
  _objc_release(puVar7);
LAB_107fe297c:
  uVar12 = param_1;
  FUN_107fe0358(puVar2,param_1);
  _objc_release(ppuVar11);
  _objc_release(puVar8);
  _objc_release(ppuVar22);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_22);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar15);
  _objc_retain(ppuVar24);
  _objc_retain(puVar5);
  _objc_retain(ppuVar14);
  _objc_retain(uVar12);
  _objc_retain(param_1);
  uVar3 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  uVar4 = uVar3;
  func_0x00010bf5a700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c09da80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf170;
  _objc_alloc_init();
  uVar10 = uVar3;
  func_0x000107fe9c90(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1b9120(puVar2);
  _objc_release(uVar10);
  uVar10 = uVar3;
  func_0x000107fe9d68(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1be5e0(puVar2);
  _objc_release(uVar10);
  puVar8 = PTR_PTR_1126d8cd0;
  _objc_opt_new(PTR_PTR_1126d8cd0);
  uVar10 = param_1;
  FUN_107fdfb0c(param_1,uVar12,ppuVar14,puVar5,1,ppuVar24,ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar24);
  _objc_release(puVar5);
  _objc_release(ppuVar14);
  _objc_release(uVar12);
  _objc_release(param_1);
  uVar12 = uVar10;
  func_0x00010c0d3c80(uVar10);
  func_0x00010c223f60(puVar8);
  _objc_release(uVar12);
  func_0x00010c1c5440(puVar8);
  func_0x00010c1c5480(puVar8);
  func_0x00010c203dc0(puVar8);
  func_0x00010c204680(puVar8);
  func_0x00010bf8b160(uVar3);
  func_0x00010c192e60(puVar8);
  func_0x00010c204940(puVar8);
  func_0x000107fe9bd4();
  func_0x00010c177420(puVar8);
  func_0x00010c206c40(puVar8);
  func_0x00010c072a60(uVar3);
  func_0x00010c1b0e80(puVar8);
  uVar12 = uVar3;
  func_0x00010c0d0320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf5a700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb60(uVar12);
  func_0x00010c1a5d80(puVar8);
  _objc_release(uVar13);
  _objc_release(uVar12);
  if (uVar21 != 0) {
    func_0x00010c1b9180(puVar8);
  }
  puVar5 = puVar8;
  func_0x00010c0c6d20(puVar8);
  func_0x00010b5f32d0(ppuVar15,1,(ulong)puVar5 & 0xffffffff);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107fe2a80; end: 107fe2db7;  */

void FUN_107fe2a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  uVar2 = uVar1;
  func_0x00010bf5a700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c09da80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bf170;
  _objc_alloc_init();
  uVar4 = uVar1;
  func_0x000107fe9c90(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1b9120(puVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x000107fe9d68(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1be5e0(puVar3);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126d8cd0;
  _objc_opt_new(PTR_PTR_1126d8cd0);
  uVar4 = param_1;
  FUN_107fdfb0c(param_1,param_2,param_3,param_4,1,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  uVar6 = uVar4;
  func_0x00010c0d3c80(uVar4);
  func_0x00010c223f60(puVar5);
  _objc_release(uVar6);
  func_0x00010c1c5440(puVar5);
  func_0x00010c1c5480(puVar5);
  func_0x00010c203dc0(puVar5);
  func_0x00010c204680(puVar5);
  func_0x00010bf8b160(uVar1);
  func_0x00010c192e60(puVar5);
  func_0x00010c204940(puVar5);
  func_0x000107fe9bd4();
  func_0x00010c177420(puVar5);
  func_0x00010c206c40(puVar5);
  func_0x00010c072a60(uVar1);
  func_0x00010c1b0e80(puVar5);
  uVar6 = uVar1;
  func_0x00010c0d0320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf5a700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb60(uVar6);
  func_0x00010c1a5d80(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if (param_7 != 0) {
    func_0x00010c1b9180(puVar5);
  }
  puVar8 = puVar5;
  func_0x00010c0c6d20(puVar5);
  func_0x00010b5f32d0(param_6,1,(ulong)puVar8 & 0xffffffff);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fe2db8; end: 107fe2e93;  */

void FUN_107fe2db8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_retain(param_2);
  func_0x00010bf09780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1770;
  _objc_alloc(PTR_PTR_1126d1770);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0af00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbaa0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  FUN_107fe4980(param_2,puVar2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fe2e94; end: 107fe2e97;  */

void FUN_107fe2e94(void)

{
  return;
}



/* Entry: 107fe2e98; end: 107fe2eef;  */

bool FUN_107fe2e98(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  
  _objc_retain(param_4);
  func_0x00010bf45de0(param_3);
  fVar1 = param_1;
  func_0x00010bf45de0(param_4);
  _objc_release(param_4);
  return param_1 < fVar1;
}



/* Entry: 107fe2ef0; end: 107fe2f07;  */

void FUN_107fe2ef0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107fe2f08; end: 107fe30d7;  */

undefined ** FUN_107fe2f08(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  float fVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
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
  ppuVar7 = param_2;
  _objc_retain(param_2);
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar9 = &uStack_140;
  ppuVar4 = param_2;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    lVar10 = *plStack_130;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_2);
        }
        iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010bfc51c0();
        if (iVar3 == 0) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110ece638;
          func_0x00010b5f316c(*(undefined8 *)(param_1 + 0x28),
                              &PTR____CFConstantStringClassReference_110ece638);
        }
        else {
          puVar5 = PTR_PTR_1126d1768;
          _objc_opt_new(PTR_PTR_1126d1768);
          func_0x00010c220160();
          ppuVar6 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar8 = ppuVar6;
          _objc_opt_isKindOfClass(ppuVar6,ppuVar7);
          ppuVar1 = ppuVar6;
          if (((ulong)ppuVar8 & 1) == 0) {
            ppuVar1 = (undefined **)0x0;
          }
          _objc_retain(ppuVar1);
          _objc_release(ppuVar6);
          func_0x00010bf885a0(ppuVar1);
          _objc_release(ppuVar1);
          fVar2 = (float)(double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,
                                                  CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,
                                                  uVar12)))))));
          uVar12 = SUB41(fVar2,0);
          uVar13 = (undefined1)((uint)fVar2 >> 8);
          uVar14 = (undefined1)((uint)fVar2 >> 0x10);
          uVar15 = (undefined1)((uint)fVar2 >> 0x18);
          uVar16 = 0;
          uVar17 = 0;
          uVar18 = 0;
          uVar19 = 0;
          func_0x00010c1807e0(puVar5);
          func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
          _objc_release(puVar5);
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar4 != ppuVar11);
      puVar9 = &uStack_140;
      ppuVar4 = param_2;
      func_0x00010bf52a60();
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  func_0x00010bf45de0(ppuVar7);
  fVar2 = (float)CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)));
  func_0x00010bf45de0(puVar9);
  _objc_release(puVar9);
  return (undefined **)
         (ulong)(fVar2 < (float)CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12))));
}



/* Entry: 107fe30d8; end: 107fe312f;  */

bool FUN_107fe30d8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  
  _objc_retain(param_4);
  func_0x00010bf45de0(param_3);
  fVar1 = param_1;
  func_0x00010bf45de0(param_4);
  _objc_release(param_4);
  return param_1 < fVar1;
}



/* Entry: 107fe3130; end: 107fe3157;  */

undefined4 FUN_107fe3130(long param_1)

{
  func_0x00010b5fa088();
  func_0x00010b5f57cc();
  return *(undefined4 *)(&UNK_10deec5ac + param_1 * 4);
}



/* Entry: 107fe3158; end: 107fe318f;  */

void FUN_107fe3158(long param_1,undefined8 param_2)

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



/* Entry: 107fe3190; end: 107fe3237; -[SCMemoriesLoggingSnapInfo initWithSnap:sojuOverlay:] */

undefined1 *
FUN_107fe3190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 107fe3238; end: 107fe325b; -[SCMemoriesLoggingSnapInfo copyWithZone:] */

undefined8 FUN_107fe3238(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107fe325c; end: 107fe32cf; -[SCMemoriesLoggingSnapInfo hash] */

undefined8 * FUN_107fe325c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107fe3350:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107fe335c;
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
          goto LAB_107fe335c;
        }
        goto LAB_107fe3350;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107fe335c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107fe32d0; end: 107fe3377; -[SCMemoriesLoggingSnapInfo isEqual:] */

long FUN_107fe32d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107fe3350:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107fe335c;
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
          goto LAB_107fe335c;
        }
        goto LAB_107fe3350;
      }
    }
    lVar3 = 0;
  }
LAB_107fe335c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107fe3378; end: 107fe337f; -[SCMemoriesLoggingSnapInfo snap] */

undefined8 FUN_107fe3378(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107fe3380; end: 107fe3387; -[SCMemoriesLoggingSnapInfo sojuOverlay] */

undefined8 FUN_107fe3380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107fe3388; end: 107fe33b7; -[SCMemoriesLoggingSnapInfo .cxx_destruct] */

void FUN_107fe3388(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fe33b8; end: 107fe342f; -[SCMemoriesLoggingCameraRollInfo initWithAsset:] */

undefined1 * FUN_107fe33b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc030;
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



/* Entry: 107fe3430; end: 107fe3453; -[SCMemoriesLoggingCameraRollInfo copyWithZone:] */

undefined8 FUN_107fe3430(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107fe3454; end: 107fe345b; -[SCMemoriesLoggingCameraRollInfo hash] */

void FUN_107fe3454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107fe345c; end: 107fe34eb; -[SCMemoriesLoggingCameraRollInfo isEqual:] */

long FUN_107fe345c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107fe34d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107fe34d0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107fe34d0;
    }
  }
  lVar3 = 1;
LAB_107fe34d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107fe34ec; end: 107fe34f3; -[SCMemoriesLoggingCameraRollInfo asset] */

undefined8 FUN_107fe34ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107fe34f4; end: 107fe34ff; -[SCMemoriesLoggingCameraRollInfo .cxx_destruct] */

void FUN_107fe34f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fe3500; end: 107fe372f;  */

void FUN_107fe3500(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bf840);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_107fe5730();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fe3730; end: 107fe37b7;  */

void FUN_107fe3730(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_107fe6ad8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fe37b8; end: 107fe3b8b;  */

void FUN_107fe37b8(double param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined ***pppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined ***pppuVar18;
  double dVar19;
  undefined4 uStack_a94;
  long lStack_a90;
  long lStack_a88;
  undefined8 uStack_a80;
  undefined **ppuStack_a78;
  undefined4 uStack_a70;
  undefined4 uStack_a60;
  undefined4 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  long lStack_a30;
  long lStack_a28;
  undefined8 uStack_a20;
  long *plStack_a18;
  long *plStack_a10;
  undefined1 uStack_a01;
  undefined **ppuStack_a00;
  undefined4 uStack_9f8;
  undefined2 uStack_9e8;
  byte bStack_9e6;
  byte bStack_9e5;
  undefined1 *puStack_9c8;
  undefined ***pppuStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  undefined8 uStack_9a8;
  long *plStack_9a0;
  long *plStack_998;
  undefined **ppuStack_990;
  undefined4 uStack_988;
  undefined4 uStack_978;
  long lStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  long lStack_948;
  long lStack_940;
  undefined8 uStack_938;
  long *plStack_930;
  long *plStack_928;
  undefined1 uStack_919;
  undefined **ppuStack_918;
  undefined4 uStack_910;
  undefined2 uStack_900;
  byte bStack_8fe;
  byte bStack_8fd;
  undefined1 *puStack_8e0;
  undefined ***pppuStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  undefined8 uStack_8c0;
  long *plStack_8b8;
  long *plStack_8b0;
  undefined **ppuStack_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_890;
  long lStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_860;
  long lStack_858;
  undefined8 uStack_850;
  long *plStack_848;
  long *plStack_840;
  undefined1 uStack_831;
  undefined **ppuStack_830;
  undefined4 uStack_828;
  undefined2 uStack_818;
  undefined2 uStack_816;
  undefined1 *puStack_7f8;
  undefined ***pppuStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined **ppuStack_7c0;
  undefined4 uStack_7b8;
  undefined2 uStack_7a8;
  byte bStack_7a6;
  byte bStack_7a5;
  undefined ***pppuStack_788;
  undefined ***pppuStack_780;
  long lStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  long *plStack_760;
  long *plStack_758;
  undefined **ppuStack_750;
  undefined4 uStack_748;
  undefined2 uStack_738;
  byte bStack_736;
  byte bStack_735;
  undefined ***pppuStack_718;
  undefined ***pppuStack_710;
  long lStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_560;
  undefined4 uStack_4a4;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined **ppuStack_488;
  undefined4 uStack_480;
  undefined4 uStack_470;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  long *plStack_420;
  undefined1 uStack_411;
  undefined **ppuStack_410;
  undefined4 uStack_408;
  undefined2 uStack_3f8;
  undefined2 uStack_3f6;
  undefined1 *puStack_3d8;
  undefined ***pppuStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_2e8;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c26f320(param_2);
  _objc_opt_class(PTR_PTR_1126bf840);
  if (param_3 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_3);
  }
  puVar2 = &uStack_1a1;
  FUN_107fe59f0();
  lStack_1e8 = (long)param_1;
  uStack_210 = 0xf;
  uStack_200 = 0x100;
  ppuStack_218 = &PTR_DAT_110862958;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_198 = 7;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_DAT_110881e20;
  pppuStack_160 = &ppuStack_218;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  lStack_230 = 0;
  lStack_228 = 0;
  uStack_220 = 0;
  uStack_234 = 0;
  puVar3 = &uStack_130;
  puStack_168 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_1a0,&lStack_230,&uStack_234);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_110881e20;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_110862958;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  dVar19 = 0.0;
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar4);
      }
      uVar14 = *(undefined8 *)((long)puVar16 * 8);
      _objc_retain(param_3);
      puVar5 = PTR_PTR_1126d8cd8;
      FUN_107fe6a64(PTR_PTR_1126d8cd8,uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(param_3);
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (puVar3 != puVar16);
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
  lVar17 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126bf840);
  if (lVar17 == 0) {
    uStack_370 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3a0,lVar17);
  }
  puVar2 = &uStack_411;
  FUN_107fe59f0();
  lStack_458 = (long)dVar19;
  uStack_480 = 0xf;
  uStack_470 = 0x100;
  ppuStack_488 = &PTR_DAT_110862958;
  uStack_448 = 0;
  uStack_450 = 0;
  lStack_438 = 0;
  lStack_440 = 0;
  plStack_428 = (long *)0x0;
  uStack_430 = 0;
  plStack_420 = (long *)0x0;
  uStack_3f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_408 = 7;
  uStack_3f8 = 0x100;
  ppuStack_410 = &PTR_DAT_110881e20;
  pppuStack_3d0 = &ppuStack_488;
  lStack_3c0 = 0;
  lStack_3c8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_3b8 = 0;
  plStack_3a8 = (long *)0x0;
  lStack_4a0 = 0;
  lStack_498 = 0;
  uStack_490 = 0;
  uStack_4a4 = 0;
  puVar4 = &uStack_3a0;
  pppuVar13 = &ppuStack_410;
  puStack_3d8 = puVar2;
  func_0x0001000e77a0(puVar4,pppuVar13,&lStack_4a0,&uStack_4a4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_4a0 != 0) {
    lStack_498 = lStack_4a0;
    __ZdlPv();
  }
  plVar1 = plStack_3a8;
  ppuStack_410 = &PTR_DAT_110881e20;
  plStack_3a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3b0;
  plStack_3b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3c8 != 0) {
    lStack_3c0 = lStack_3c8;
    __ZdlPv();
  }
  plVar1 = plStack_420;
  ppuStack_488 = &PTR_DAT_110862958;
  plStack_420 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_428;
  plStack_428 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_440 != 0) {
    lStack_438 = lStack_440;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_378);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  _objc_retain(puVar16);
  puVar4 = puVar16;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar16);
      }
      uVar14 = *(undefined8 *)((long)puVar15 * 8);
      func_0x00010bf0b2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(uVar14);
      puVar15 = (undefined8 *)((long)puVar15 + 1);
    } while (puVar4 != puVar15);
    puVar4 = puVar16;
    func_0x00010bf52a60();
  }
  _objc_release(puVar16);
  puVar4 = puVar3;
  func_0x00010bf00560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar3);
  lVar6 = lVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release(lVar17);
    __Unwind_Resume();
    puVar3 = &uStack_620;
    lStack_560 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar7 = pppuVar13;
    _objc_retain();
    uVar12 = SUB84(pppuVar7,0);
    _objc_retain(pppuVar13);
    dVar19 = 0.0;
    lStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    plStack_610 = (long *)0x0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    _objc_retain(pppuVar13);
    pppuVar7 = pppuVar13;
    func_0x00010bf52a60();
    if (pppuVar7 != (undefined ***)0x0) {
      lVar17 = *plStack_610;
      do {
        pppuVar18 = (undefined ***)0x0;
        do {
          if (*plStack_610 != lVar17) {
            _objc_enumerationMutation(pppuVar13);
          }
          uVar12 = (undefined4)*(undefined8 *)(lStack_618 + (long)pppuVar18 * 8);
          lVar8 = lVar6;
          FUN_107fe3500();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf0a540();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar8);
          if (lVar10 != 0) {
            _objc_retain(lVar6);
            puVar5 = PTR_PTR_1126d8cd8;
            lVar8 = lVar10;
            FUN_107fe63f8();
            uVar12 = (undefined4)lVar8;
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 != (undefined *)0x0) {
              _objc_setProperty_nonatomic_copy(puVar5);
              _objc_setProperty_nonatomic_copy(puVar5);
            }
            func_0x00010c25ed40(lVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(lVar6);
          }
          _objc_release(lVar10);
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar7 != pppuVar18);
        pppuVar7 = pppuVar13;
        puVar3 = &uStack_620;
        func_0x00010bf52a60();
      } while (pppuVar7 != (undefined ***)0x0);
    }
    _objc_release(pppuVar13);
    _objc_release(pppuVar13);
    lVar17 = lVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_560) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pppuVar13);
    _objc_release(pppuVar13);
    _objc_release(lVar6);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain(puVar3);
    func_0x00010c26f320(puVar3);
    _objc_opt_class(PTR_PTR_1126bf840);
    if (lVar17 == 0) {
      uStack_6b0 = 0;
      uStack_6c8 = 0;
      uStack_6d0 = 0;
      uStack_6b8 = 0;
      uStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_6e0,lVar17);
    }
    puVar2 = &uStack_831;
    FUN_107fe5b38();
    uStack_8a0 = 0xf;
    uStack_890 = 0x100;
    ppuStack_8a8 = &PTR_DAT_110862958;
    uStack_868 = 0;
    uStack_870 = 0;
    lStack_858 = 0;
    lStack_860 = 0;
    plStack_848 = (long *)0x0;
    uStack_850 = 0;
    plStack_840 = (long *)0x0;
    uStack_816 = *(undefined2 *)(puVar2 + 0x1a);
    uStack_828 = 7;
    uStack_818 = 0x100;
    ppuStack_830 = &PTR_DAT_110881e20;
    lStack_7e0 = 0;
    lStack_7e8 = 0;
    plStack_7d0 = (long *)0x0;
    uStack_7d8 = 0;
    plStack_7c8 = (long *)0x0;
    puVar11 = &uStack_919;
    lStack_878 = (long)dVar19;
    puStack_7f8 = puVar2;
    pppuStack_7f0 = &ppuStack_8a8;
    FUN_107fe59f0();
    uStack_988 = 0xf;
    uStack_978 = 0x100;
    ppuStack_990 = &PTR_DAT_110862958;
    uStack_950 = 0;
    uStack_958 = 0;
    lStack_940 = 0;
    lStack_948 = 0;
    plStack_930 = (long *)0x0;
    uStack_938 = 0;
    plStack_928 = (long *)0x0;
    bStack_8fe = puVar11[0x1a];
    bStack_8fd = puVar11[0x1b];
    uStack_910 = 8;
    uStack_900 = 0x100;
    ppuStack_918 = &PTR_DAT_110881e20;
    plStack_8b0 = (long *)0x0;
    lStack_8c8 = 0;
    lStack_8d0 = 0;
    plStack_8b8 = (long *)0x0;
    uStack_8c0 = 0;
    bStack_7a6 = (byte)uStack_816 | bStack_8fe;
    bStack_7a5 = uStack_816._1_1_ & bStack_8fd;
    uStack_7b8 = 4;
    uStack_7a8 = 0x100;
    ppuStack_7c0 = &PTR_DAT_1108629c8;
    pppuStack_788 = &ppuStack_830;
    pppuStack_780 = &ppuStack_918;
    uStack_770 = 0;
    lStack_778 = 0;
    plStack_760 = (long *)0x0;
    uStack_768 = 0;
    plStack_758 = (long *)0x0;
    puVar2 = &uStack_a01;
    lStack_960 = (long)dVar19;
    puStack_8e0 = puVar11;
    pppuStack_8d8 = &ppuStack_990;
    FUN_107fe58a8();
    uStack_a70 = 0xf;
    uStack_a60 = 0x100;
    ppuStack_a78 = &PTR_DAT_1108962d0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    lStack_a28 = 0;
    lStack_a30 = 0;
    plStack_a18 = (long *)0x0;
    uStack_a20 = 0;
    plStack_a10 = (long *)0x0;
    bStack_9e6 = puVar2[0x1a];
    bStack_9e5 = puVar2[0x1b];
    uStack_9f8 = 10;
    uStack_9e8 = 0x100;
    ppuStack_a00 = &PTR_DAT_110897348;
    plStack_998 = (long *)0x0;
    lStack_9b0 = 0;
    lStack_9b8 = 0;
    plStack_9a0 = (long *)0x0;
    uStack_9a8 = 0;
    bStack_736 = bStack_7a6 | bStack_9e6;
    bStack_735 = bStack_7a5 & bStack_9e5;
    uStack_748 = 4;
    uStack_738 = 0x100;
    ppuStack_750 = &PTR_DAT_1108629c8;
    pppuStack_710 = &ppuStack_a00;
    uStack_700 = 0;
    lStack_708 = 0;
    plStack_6f0 = (long *)0x0;
    uStack_6f8 = 0;
    plStack_6e8 = (long *)0x0;
    lStack_a90 = 0;
    lStack_a88 = 0;
    uStack_a80 = 0;
    uStack_a94 = 0;
    puVar4 = &uStack_6e0;
    uStack_a48 = uVar12;
    puStack_9c8 = puVar2;
    pppuStack_9c0 = &ppuStack_a78;
    pppuStack_718 = &ppuStack_7c0;
    func_0x0001000e77a0(puVar4,&ppuStack_750,&lStack_a90,&uStack_a94);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (lStack_a90 != 0) {
      lStack_a88 = lStack_a90;
      __ZdlPv();
    }
    plVar1 = plStack_6e8;
    ppuStack_750 = &PTR_DAT_1108629c8;
    plStack_6e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_6f0;
    plStack_6f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_708 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_998;
    ppuStack_a00 = &PTR_DAT_110897348;
    plStack_998 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_9a0;
    plStack_9a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_9b8 != 0) {
      lStack_9b0 = lStack_9b8;
      __ZdlPv();
    }
    plVar1 = plStack_a10;
    ppuStack_a78 = &PTR_DAT_1108962d0;
    plStack_a10 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_a18;
    plStack_a18 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_a30 != 0) {
      lStack_a28 = lStack_a30;
      __ZdlPv();
    }
    plVar1 = plStack_758;
    ppuStack_7c0 = &PTR_DAT_1108629c8;
    plStack_758 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_760;
    plStack_760 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_778 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_8b0;
    ppuStack_918 = &PTR_DAT_110881e20;
    plStack_8b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_8b8;
    plStack_8b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_8d0 != 0) {
      lStack_8c8 = lStack_8d0;
      __ZdlPv();
    }
    plVar1 = plStack_928;
    ppuStack_990 = &PTR_DAT_110862958;
    plStack_928 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_930;
    plStack_930 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_948 != 0) {
      lStack_940 = lStack_948;
      __ZdlPv();
    }
    plVar1 = plStack_7c8;
    ppuStack_830 = &PTR_DAT_110881e20;
    plStack_7c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_7d0;
    plStack_7d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_7e8 != 0) {
      lStack_7e0 = lStack_7e8;
      __ZdlPv();
    }
    plVar1 = plStack_840;
    ppuStack_8a8 = &PTR_DAT_110862958;
    plStack_840 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_848;
    plStack_848 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_860 != 0) {
      lStack_858 = lStack_860;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_6b8);
    _objc_release(uStack_6c8);
    _objc_release(uStack_6d0);
    puVar4 = puVar16;
    func_0x00010bfb1920(puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release(lVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fe3b8c; end: 107fe3f7b;  */

void FUN_107fe3b8c(double param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined ***pppuVar18;
  double dVar19;
  undefined4 uStack_814;
  long lStack_810;
  long lStack_808;
  undefined8 uStack_800;
  undefined **ppuStack_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7e0;
  undefined4 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  undefined8 uStack_7a0;
  long *plStack_798;
  long *plStack_790;
  undefined1 uStack_781;
  undefined **ppuStack_780;
  undefined4 uStack_778;
  undefined2 uStack_768;
  byte bStack_766;
  byte bStack_765;
  undefined1 *puStack_748;
  undefined ***pppuStack_740;
  long lStack_738;
  long lStack_730;
  undefined8 uStack_728;
  long *plStack_720;
  long *plStack_718;
  undefined **ppuStack_710;
  undefined4 uStack_708;
  undefined4 uStack_6f8;
  long lStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  long *plStack_6b0;
  long *plStack_6a8;
  undefined1 uStack_699;
  undefined **ppuStack_698;
  undefined4 uStack_690;
  undefined2 uStack_680;
  byte bStack_67e;
  byte bStack_67d;
  undefined1 *puStack_660;
  undefined ***pppuStack_658;
  long lStack_650;
  long lStack_648;
  undefined8 uStack_640;
  long *plStack_638;
  long *plStack_630;
  undefined **ppuStack_628;
  undefined4 uStack_620;
  undefined4 uStack_610;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined1 uStack_5b1;
  undefined **ppuStack_5b0;
  undefined4 uStack_5a8;
  undefined2 uStack_598;
  undefined2 uStack_596;
  undefined1 *puStack_578;
  undefined ***pppuStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined **ppuStack_540;
  undefined4 uStack_538;
  undefined2 uStack_528;
  byte bStack_526;
  byte bStack_525;
  undefined ***pppuStack_508;
  undefined ***pppuStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined **ppuStack_4d0;
  undefined4 uStack_4c8;
  undefined2 uStack_4b8;
  byte bStack_4b6;
  byte bStack_4b5;
  undefined ***pppuStack_498;
  undefined ***pppuStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_2e0;
  undefined4 uStack_224;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126bf840);
  if (param_2 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  puVar4 = &uStack_191;
  FUN_107fe59f0();
  lStack_1d8 = (long)param_1;
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_DAT_110862958;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_188 = 7;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_110881e20;
  pppuStack_150 = &ppuStack_208;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_220 = 0;
  lStack_218 = 0;
  uStack_210 = 0;
  uStack_224 = 0;
  puVar5 = &uStack_120;
  pppuVar15 = &ppuStack_190;
  puStack_158 = puVar4;
  func_0x0001000e77a0(puVar5,pppuVar15,&lStack_220,&uStack_224);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_110881e20;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110862958;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar6);
  puVar5 = puVar6;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(puVar6);
      }
      uVar7 = *(undefined8 *)((long)puVar16 * 8);
      func_0x00010bf0b2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar7);
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (puVar5 != puVar16);
    puVar5 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  puVar5 = puVar2;
  func_0x00010bf00560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  lVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(param_2);
    __Unwind_Resume();
    puVar2 = &uStack_3a0;
    lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar9 = pppuVar15;
    _objc_retain();
    uVar14 = SUB84(pppuVar9,0);
    _objc_retain(pppuVar15);
    dVar19 = 0.0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    _objc_retain(pppuVar15);
    pppuVar9 = pppuVar15;
    func_0x00010bf52a60();
    if (pppuVar9 != (undefined ***)0x0) {
      lVar17 = *plStack_390;
      do {
        pppuVar18 = (undefined ***)0x0;
        do {
          if (*plStack_390 != lVar17) {
            _objc_enumerationMutation(pppuVar15);
          }
          uVar14 = (undefined4)*(undefined8 *)(lStack_398 + (long)pppuVar18 * 8);
          lVar10 = lVar8;
          FUN_107fe3500();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf0a540();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          _objc_release(lVar10);
          if (lVar12 != 0) {
            _objc_retain(lVar8);
            puVar3 = PTR_PTR_1126d8cd8;
            lVar10 = lVar12;
            FUN_107fe63f8();
            uVar14 = (undefined4)lVar10;
            _objc_retainAutoreleasedReturnValue();
            if (puVar3 != (undefined *)0x0) {
              _objc_setProperty_nonatomic_copy(puVar3);
              _objc_setProperty_nonatomic_copy(puVar3);
            }
            func_0x00010c25ed40(lVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(lVar8);
          }
          _objc_release(lVar12);
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar9 != pppuVar18);
        pppuVar9 = pppuVar15;
        puVar2 = &uStack_3a0;
        func_0x00010bf52a60();
      } while (pppuVar9 != (undefined ***)0x0);
    }
    _objc_release(pppuVar15);
    _objc_release(pppuVar15);
    lVar17 = lVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pppuVar15);
    _objc_release(pppuVar15);
    _objc_release(lVar8);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain(puVar2);
    func_0x00010c26f320(puVar2);
    _objc_opt_class(PTR_PTR_1126bf840);
    if (lVar17 == 0) {
      uStack_430 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_460,lVar17);
    }
    puVar4 = &uStack_5b1;
    FUN_107fe5b38();
    uStack_620 = 0xf;
    uStack_610 = 0x100;
    ppuStack_628 = &PTR_DAT_110862958;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    lStack_5d8 = 0;
    lStack_5e0 = 0;
    plStack_5c8 = (long *)0x0;
    uStack_5d0 = 0;
    plStack_5c0 = (long *)0x0;
    uStack_596 = *(undefined2 *)(puVar4 + 0x1a);
    uStack_5a8 = 7;
    uStack_598 = 0x100;
    ppuStack_5b0 = &PTR_DAT_110881e20;
    lStack_560 = 0;
    lStack_568 = 0;
    plStack_550 = (long *)0x0;
    uStack_558 = 0;
    plStack_548 = (long *)0x0;
    puVar13 = &uStack_699;
    lStack_5f8 = (long)dVar19;
    puStack_578 = puVar4;
    pppuStack_570 = &ppuStack_628;
    FUN_107fe59f0();
    uStack_708 = 0xf;
    uStack_6f8 = 0x100;
    ppuStack_710 = &PTR_DAT_110862958;
    uStack_6d0 = 0;
    uStack_6d8 = 0;
    lStack_6c0 = 0;
    lStack_6c8 = 0;
    plStack_6b0 = (long *)0x0;
    uStack_6b8 = 0;
    plStack_6a8 = (long *)0x0;
    bStack_67e = puVar13[0x1a];
    bStack_67d = puVar13[0x1b];
    uStack_690 = 8;
    uStack_680 = 0x100;
    ppuStack_698 = &PTR_DAT_110881e20;
    plStack_630 = (long *)0x0;
    lStack_648 = 0;
    lStack_650 = 0;
    plStack_638 = (long *)0x0;
    uStack_640 = 0;
    bStack_526 = (byte)uStack_596 | bStack_67e;
    bStack_525 = uStack_596._1_1_ & bStack_67d;
    uStack_538 = 4;
    uStack_528 = 0x100;
    ppuStack_540 = &PTR_DAT_1108629c8;
    pppuStack_508 = &ppuStack_5b0;
    pppuStack_500 = &ppuStack_698;
    uStack_4f0 = 0;
    lStack_4f8 = 0;
    plStack_4e0 = (long *)0x0;
    uStack_4e8 = 0;
    plStack_4d8 = (long *)0x0;
    puVar4 = &uStack_781;
    lStack_6e0 = (long)dVar19;
    puStack_660 = puVar13;
    pppuStack_658 = &ppuStack_710;
    FUN_107fe58a8();
    uStack_7f0 = 0xf;
    uStack_7e0 = 0x100;
    ppuStack_7f8 = &PTR_DAT_1108962d0;
    uStack_7b8 = 0;
    uStack_7c0 = 0;
    lStack_7a8 = 0;
    lStack_7b0 = 0;
    plStack_798 = (long *)0x0;
    uStack_7a0 = 0;
    plStack_790 = (long *)0x0;
    bStack_766 = puVar4[0x1a];
    bStack_765 = puVar4[0x1b];
    uStack_778 = 10;
    uStack_768 = 0x100;
    ppuStack_780 = &PTR_DAT_110897348;
    plStack_718 = (long *)0x0;
    lStack_730 = 0;
    lStack_738 = 0;
    plStack_720 = (long *)0x0;
    uStack_728 = 0;
    bStack_4b6 = bStack_526 | bStack_766;
    bStack_4b5 = bStack_525 & bStack_765;
    uStack_4c8 = 4;
    uStack_4b8 = 0x100;
    ppuStack_4d0 = &PTR_DAT_1108629c8;
    pppuStack_490 = &ppuStack_780;
    uStack_480 = 0;
    lStack_488 = 0;
    plStack_470 = (long *)0x0;
    uStack_478 = 0;
    plStack_468 = (long *)0x0;
    lStack_810 = 0;
    lStack_808 = 0;
    uStack_800 = 0;
    uStack_814 = 0;
    puVar5 = &uStack_460;
    uStack_7c8 = uVar14;
    puStack_748 = puVar4;
    pppuStack_740 = &ppuStack_7f8;
    pppuStack_498 = &ppuStack_540;
    func_0x0001000e77a0(puVar5,&ppuStack_4d0,&lStack_810,&uStack_814);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (lStack_810 != 0) {
      lStack_808 = lStack_810;
      __ZdlPv();
    }
    plVar1 = plStack_468;
    ppuStack_4d0 = &PTR_DAT_1108629c8;
    plStack_468 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_470;
    plStack_470 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_488 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_718;
    ppuStack_780 = &PTR_DAT_110897348;
    plStack_718 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_720;
    plStack_720 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_738 != 0) {
      lStack_730 = lStack_738;
      __ZdlPv();
    }
    plVar1 = plStack_790;
    ppuStack_7f8 = &PTR_DAT_1108962d0;
    plStack_790 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_798;
    plStack_798 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_7b0 != 0) {
      lStack_7a8 = lStack_7b0;
      __ZdlPv();
    }
    plVar1 = plStack_4d8;
    ppuStack_540 = &PTR_DAT_1108629c8;
    plStack_4d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4e0;
    plStack_4e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4f8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_630;
    ppuStack_698 = &PTR_DAT_110881e20;
    plStack_630 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_638;
    plStack_638 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_650 != 0) {
      lStack_648 = lStack_650;
      __ZdlPv();
    }
    plVar1 = plStack_6a8;
    ppuStack_710 = &PTR_DAT_110862958;
    plStack_6a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_6b0;
    plStack_6b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_6c8 != 0) {
      lStack_6c0 = lStack_6c8;
      __ZdlPv();
    }
    plVar1 = plStack_548;
    ppuStack_5b0 = &PTR_DAT_110881e20;
    plStack_548 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_550;
    plStack_550 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_568 != 0) {
      lStack_560 = lStack_568;
      __ZdlPv();
    }
    plVar1 = plStack_5c0;
    ppuStack_628 = &PTR_DAT_110862958;
    plStack_5c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5c8;
    plStack_5c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_5e0 != 0) {
      lStack_5d8 = lStack_5e0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_438);
    _objc_release(uStack_448);
    _objc_release(uStack_450);
    puVar5 = puVar6;
    func_0x00010bfb1920(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(lVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fe3f7c; end: 107fe41db;  */

void FUN_107fe3f7c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined4 uStack_5a4;
  long lStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  undefined **ppuStack_588;
  undefined4 uStack_580;
  undefined4 uStack_570;
  undefined4 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_540;
  long lStack_538;
  undefined8 uStack_530;
  long *plStack_528;
  long *plStack_520;
  undefined1 uStack_511;
  undefined **ppuStack_510;
  undefined4 uStack_508;
  undefined2 uStack_4f8;
  byte bStack_4f6;
  byte bStack_4f5;
  undefined1 *puStack_4d8;
  undefined ***pppuStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  undefined **ppuStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_488;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined1 uStack_429;
  undefined **ppuStack_428;
  undefined4 uStack_420;
  undefined2 uStack_410;
  byte bStack_40e;
  byte bStack_40d;
  undefined1 *puStack_3f0;
  undefined ***pppuStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3a0;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined1 uStack_341;
  undefined **ppuStack_340;
  undefined4 uStack_338;
  undefined2 uStack_328;
  undefined2 uStack_326;
  undefined1 *puStack_308;
  undefined ***pppuStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined **ppuStack_2d0;
  undefined4 uStack_2c8;
  undefined2 uStack_2b8;
  byte bStack_2b6;
  byte bStack_2b5;
  undefined ***pppuStack_298;
  undefined ***pppuStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined **ppuStack_260;
  undefined4 uStack_258;
  undefined2 uStack_248;
  byte bStack_246;
  byte bStack_245;
  undefined ***pppuStack_228;
  undefined ***pppuStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar12 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain();
  uVar11 = (undefined4)lVar2;
  _objc_retain(param_2);
  dVar15 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        uVar11 = (undefined4)*(undefined8 *)(lStack_128 + lVar14 * 8);
        lVar3 = param_1;
        FUN_107fe3500();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar5 != 0) {
          _objc_retain(param_1);
          puVar6 = PTR_PTR_1126d8cd8;
          lVar3 = lVar5;
          FUN_107fe63f8();
          uVar11 = (undefined4)lVar3;
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            _objc_setProperty_nonatomic_copy(puVar6);
            _objc_setProperty_nonatomic_copy(puVar6);
          }
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(param_1);
        }
        _objc_release(lVar5);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = param_2;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar12);
  func_0x00010c26f320(puVar12);
  _objc_opt_class(PTR_PTR_1126bf840);
  if (lVar2 == 0) {
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1f0,lVar2);
  }
  puVar7 = &uStack_341;
  FUN_107fe5b38();
  uStack_3b0 = 0xf;
  uStack_3a0 = 0x100;
  ppuStack_3b8 = &PTR_DAT_110862958;
  uStack_378 = 0;
  uStack_380 = 0;
  lStack_368 = 0;
  lStack_370 = 0;
  plStack_358 = (long *)0x0;
  uStack_360 = 0;
  plStack_350 = (long *)0x0;
  uStack_326 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_338 = 7;
  uStack_328 = 0x100;
  ppuStack_340 = &PTR_DAT_110881e20;
  lStack_2f0 = 0;
  lStack_2f8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2e8 = 0;
  plStack_2d8 = (long *)0x0;
  puVar8 = &uStack_429;
  lStack_388 = (long)dVar15;
  puStack_308 = puVar7;
  pppuStack_300 = &ppuStack_3b8;
  FUN_107fe59f0();
  uStack_498 = 0xf;
  uStack_488 = 0x100;
  ppuStack_4a0 = &PTR_DAT_110862958;
  uStack_460 = 0;
  uStack_468 = 0;
  lStack_450 = 0;
  lStack_458 = 0;
  plStack_440 = (long *)0x0;
  uStack_448 = 0;
  plStack_438 = (long *)0x0;
  bStack_40e = puVar8[0x1a];
  bStack_40d = puVar8[0x1b];
  uStack_420 = 8;
  uStack_410 = 0x100;
  ppuStack_428 = &PTR_DAT_110881e20;
  plStack_3c0 = (long *)0x0;
  lStack_3d8 = 0;
  lStack_3e0 = 0;
  plStack_3c8 = (long *)0x0;
  uStack_3d0 = 0;
  bStack_2b6 = (byte)uStack_326 | bStack_40e;
  bStack_2b5 = uStack_326._1_1_ & bStack_40d;
  uStack_2c8 = 4;
  uStack_2b8 = 0x100;
  ppuStack_2d0 = &PTR_DAT_1108629c8;
  pppuStack_298 = &ppuStack_340;
  pppuStack_290 = &ppuStack_428;
  uStack_280 = 0;
  lStack_288 = 0;
  plStack_270 = (long *)0x0;
  uStack_278 = 0;
  plStack_268 = (long *)0x0;
  puVar7 = &uStack_511;
  lStack_470 = (long)dVar15;
  puStack_3f0 = puVar8;
  pppuStack_3e8 = &ppuStack_4a0;
  FUN_107fe58a8();
  uStack_580 = 0xf;
  uStack_570 = 0x100;
  ppuStack_588 = &PTR_DAT_1108962d0;
  uStack_548 = 0;
  uStack_550 = 0;
  lStack_538 = 0;
  lStack_540 = 0;
  plStack_528 = (long *)0x0;
  uStack_530 = 0;
  plStack_520 = (long *)0x0;
  bStack_4f6 = puVar7[0x1a];
  bStack_4f5 = puVar7[0x1b];
  uStack_508 = 10;
  uStack_4f8 = 0x100;
  ppuStack_510 = &PTR_DAT_110897348;
  plStack_4a8 = (long *)0x0;
  lStack_4c0 = 0;
  lStack_4c8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_4b8 = 0;
  bStack_246 = bStack_2b6 | bStack_4f6;
  bStack_245 = bStack_2b5 & bStack_4f5;
  uStack_258 = 4;
  uStack_248 = 0x100;
  ppuStack_260 = &PTR_DAT_1108629c8;
  pppuStack_220 = &ppuStack_510;
  uStack_210 = 0;
  lStack_218 = 0;
  plStack_200 = (long *)0x0;
  uStack_208 = 0;
  plStack_1f8 = (long *)0x0;
  lStack_5a0 = 0;
  lStack_598 = 0;
  uStack_590 = 0;
  uStack_5a4 = 0;
  puVar9 = &uStack_1f0;
  uStack_558 = uVar11;
  puStack_4d8 = puVar7;
  pppuStack_4d0 = &ppuStack_588;
  pppuStack_228 = &ppuStack_2d0;
  func_0x0001000e77a0(puVar9,&ppuStack_260,&lStack_5a0,&uStack_5a4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  if (lStack_5a0 != 0) {
    lStack_598 = lStack_5a0;
    __ZdlPv();
  }
  plVar1 = plStack_1f8;
  ppuStack_260 = &PTR_DAT_1108629c8;
  plStack_1f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_200;
  plStack_200 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_218 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_4a8;
  ppuStack_510 = &PTR_DAT_110897348;
  plStack_4a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4b0;
  plStack_4b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4c8 != 0) {
    lStack_4c0 = lStack_4c8;
    __ZdlPv();
  }
  plVar1 = plStack_520;
  ppuStack_588 = &PTR_DAT_1108962d0;
  plStack_520 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_528;
  plStack_528 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_540 != 0) {
    lStack_538 = lStack_540;
    __ZdlPv();
  }
  plVar1 = plStack_268;
  ppuStack_2d0 = &PTR_DAT_1108629c8;
  plStack_268 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_270;
  plStack_270 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_288 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_3c0;
  ppuStack_428 = &PTR_DAT_110881e20;
  plStack_3c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3c8;
  plStack_3c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3e0 != 0) {
    lStack_3d8 = lStack_3e0;
    __ZdlPv();
  }
  plVar1 = plStack_438;
  ppuStack_4a0 = &PTR_DAT_110862958;
  plStack_438 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_440;
  plStack_440 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_458 != 0) {
    lStack_450 = lStack_458;
    __ZdlPv();
  }
  plVar1 = plStack_2d8;
  ppuStack_340 = &PTR_DAT_110881e20;
  plStack_2d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2e0;
  plStack_2e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2f8 != 0) {
    lStack_2f0 = lStack_2f8;
    __ZdlPv();
  }
  plVar1 = plStack_350;
  ppuStack_3b8 = &PTR_DAT_110862958;
  plStack_350 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_358;
  plStack_358 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_370 != 0) {
    lStack_368 = lStack_370;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_1c8);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  puVar9 = puVar10;
  func_0x00010bfb1920(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107fe41dc; end: 107fe47e3;  */

void FUN_107fe41dc(double param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_474;
  long lStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined **ppuStack_458;
  undefined4 uStack_450;
  undefined4 uStack_440;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 uStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  undefined1 uStack_3e1;
  undefined **ppuStack_3e0;
  undefined4 uStack_3d8;
  undefined2 uStack_3c8;
  byte bStack_3c6;
  byte bStack_3c5;
  undefined1 *puStack_3a8;
  undefined ***pppuStack_3a0;
  long lStack_398;
  long lStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined4 uStack_358;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_2f9;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  undefined2 uStack_2e0;
  byte bStack_2de;
  byte bStack_2dd;
  undefined1 *puStack_2c0;
  undefined ***pppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  byte bStack_186;
  byte bStack_185;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined2 uStack_118;
  byte bStack_116;
  byte bStack_115;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010c26f320(param_4);
  _objc_opt_class(PTR_PTR_1126bf840);
  if (param_2 == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_c0,param_2);
  }
  puVar2 = &uStack_211;
  FUN_107fe5b38();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  ppuStack_288 = &PTR_DAT_110862958;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  uStack_1f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_208 = 7;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_DAT_110881e20;
  lStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  plStack_1a8 = (long *)0x0;
  puVar3 = &uStack_2f9;
  lStack_258 = (long)param_1;
  puStack_1d8 = puVar2;
  pppuStack_1d0 = &ppuStack_288;
  FUN_107fe59f0();
  uStack_368 = 0xf;
  uStack_358 = 0x100;
  ppuStack_370 = &PTR_DAT_110862958;
  uStack_330 = 0;
  uStack_338 = 0;
  lStack_320 = 0;
  lStack_328 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  plStack_308 = (long *)0x0;
  bStack_2de = puVar3[0x1a];
  bStack_2dd = puVar3[0x1b];
  uStack_2f0 = 8;
  uStack_2e0 = 0x100;
  ppuStack_2f8 = &PTR_DAT_110881e20;
  plStack_290 = (long *)0x0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  plStack_298 = (long *)0x0;
  uStack_2a0 = 0;
  bStack_186 = (byte)uStack_1f6 | bStack_2de;
  bStack_185 = uStack_1f6._1_1_ & bStack_2dd;
  uStack_198 = 4;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_DAT_1108629c8;
  pppuStack_168 = &ppuStack_210;
  pppuStack_160 = &ppuStack_2f8;
  uStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  puVar2 = &uStack_3e1;
  lStack_340 = (long)param_1;
  puStack_2c0 = puVar3;
  pppuStack_2b8 = &ppuStack_370;
  FUN_107fe58a8();
  uStack_450 = 0xf;
  uStack_440 = 0x100;
  ppuStack_458 = &PTR_DAT_1108962d0;
  uStack_418 = 0;
  uStack_420 = 0;
  lStack_408 = 0;
  lStack_410 = 0;
  plStack_3f8 = (long *)0x0;
  uStack_400 = 0;
  plStack_3f0 = (long *)0x0;
  bStack_3c6 = puVar2[0x1a];
  bStack_3c5 = puVar2[0x1b];
  uStack_3d8 = 10;
  uStack_3c8 = 0x100;
  ppuStack_3e0 = &PTR_DAT_110897348;
  plStack_378 = (long *)0x0;
  lStack_390 = 0;
  lStack_398 = 0;
  plStack_380 = (long *)0x0;
  uStack_388 = 0;
  bStack_116 = bStack_186 | bStack_3c6;
  bStack_115 = bStack_185 & bStack_3c5;
  uStack_128 = 4;
  uStack_118 = 0x100;
  ppuStack_130 = &PTR_DAT_1108629c8;
  pppuStack_f0 = &ppuStack_3e0;
  uStack_e0 = 0;
  lStack_e8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_d8 = 0;
  plStack_c8 = (long *)0x0;
  lStack_470 = 0;
  lStack_468 = 0;
  uStack_460 = 0;
  uStack_474 = 0;
  puVar4 = &uStack_c0;
  uStack_428 = param_3;
  puStack_3a8 = puVar2;
  pppuStack_3a0 = &ppuStack_458;
  pppuStack_f8 = &ppuStack_1a0;
  func_0x0001000e77a0(puVar4,&ppuStack_130,&lStack_470,&uStack_474);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_470 != 0) {
    lStack_468 = lStack_470;
    __ZdlPv();
  }
  plVar1 = plStack_c8;
  ppuStack_130 = &PTR_DAT_1108629c8;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_e8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_378;
  ppuStack_3e0 = &PTR_DAT_110897348;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_380;
  plStack_380 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_398 != 0) {
    lStack_390 = lStack_398;
    __ZdlPv();
  }
  plVar1 = plStack_3f0;
  ppuStack_458 = &PTR_DAT_1108962d0;
  plStack_3f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3f8;
  plStack_3f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_410 != 0) {
    lStack_408 = lStack_410;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_1108629c8;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_290;
  ppuStack_2f8 = &PTR_DAT_110881e20;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_298;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  plVar1 = plStack_308;
  ppuStack_370 = &PTR_DAT_110862958;
  plStack_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_310;
  plStack_310 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar1 = plStack_1a8;
  ppuStack_210 = &PTR_DAT_110881e20;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_DAT_110862958;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  puVar4 = puVar5;
  func_0x00010bfb1920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fe47e4; end: 107fe497f;  */

void FUN_107fe47e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  FUN_107fe3500(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010b5f2c70(param_2,lVar3 != 0);
  if (lVar3 != 0) {
    _objc_retain(param_1);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010c113c80();
    if (lVar1 != param_4) {
      puVar4 = PTR_PTR_1126d8cd8;
      FUN_107fe63f8(PTR_PTR_1126d8cd8,lVar3);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        *(long *)(puVar4 + 0x60) = (long)param_4;
      }
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fe4980; end: 107fe4a07;  */

void FUN_107fe4980(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_107fe8408(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fe4a08; end: 107fe4ac7;  */

void FUN_107fe4a08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_107fe4ac8(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d8ce0;
  FUN_107fe8394(PTR_PTR_1126d8ce0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fe4ac8; end: 107fe4d73;  */

void FUN_107fe4ac8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d1770);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_121;
  FUN_107fe7c94();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(param_2);
  ppuStack_198 = &PTR_DAT_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_110862700;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  uStack_168 = param_2;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x0001000e77a0(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_DAT_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  func_0x000100105004(&puStack_1b0);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_DAT_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_150;
  func_0x000100105004(&puStack_1b0);
  _objc_release(uStack_168);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fe4d74; end: 107fe4fbb; -[SCMemoriesCameraRollFeaturedStory initWithIdentifier:title:subtitle:viewedAssetIds:seenInCarousel:assetIds:cameraRollFeaturedStoryType:entryType:expirationDateTimeIntervalSince1970:isHidden:activationDateTimeIntervalSince1970:priority:lastSyncedTimeTimeIntervalSince1970:entrySource:referenceDateTimeIntervalSince1970:snapFeedViewedAssetIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107fe4d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_20);
  puStack_68 = PTR_PTR_1126fc038;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772e78);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772e78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772e7c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772e7c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772e80);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772e80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772e84);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772e84) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772e88) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772e8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772e8c) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112772e90) = param_9;
    *(undefined4 *)((long)puVar1 + (long)_DAT_112772e94) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772e98) = param_11;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772e9c) = param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772ea0) = param_14;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772ea4) = param_15;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772ea8) = param_16;
    *(undefined4 *)((long)puVar1 + (long)_DAT_112772eac) = param_17;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772eb0) = param_19;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772eb4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772eb4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_20);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107fe4fbc; end: 107fe4fdf; -[SCMemoriesCameraRollFeaturedStory copyWithZone:] */

undefined8 FUN_107fe4fbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107fe4fe0; end: 107fe510b; -[SCMemoriesCameraRollFeaturedStory hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107fe4fe0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772e78);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772e7c);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772e80);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772e84);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + _DAT_112772e88);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772e8c);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(uint *)(param_1 + _DAT_112772e90);
  lStack_70 = (long)*(int *)(param_1 + _DAT_112772e94);
  lVar5 = *(long *)(param_1 + _DAT_112772e98);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_60 = (ulong)*(byte *)(param_1 + _DAT_112772e9c);
  lVar5 = *(long *)(param_1 + _DAT_112772ea0);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_50 = *(undefined8 *)(param_1 + _DAT_112772ea4);
  lVar5 = *(long *)(param_1 + _DAT_112772ea8);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  lStack_40 = (long)*(int *)(param_1 + _DAT_112772eac);
  lVar5 = *(long *)(param_1 + _DAT_112772eb0);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772eb4);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_a8;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107fe530c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107fe5318;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(char *)((long)puVar3 + (long)_DAT_112772e88) ==
             *(char *)((long)param_3 + (long)_DAT_112772e88) &&
            (*(int *)((long)puVar3 + (long)_DAT_112772e90) ==
             *(int *)((long)param_3 + (long)_DAT_112772e90))) &&
           (*(int *)((long)puVar3 + (long)_DAT_112772e94) ==
            *(int *)((long)param_3 + (long)_DAT_112772e94))) &&
          ((*(long *)((long)puVar3 + (long)_DAT_112772e98) ==
            *(long *)((long)param_3 + (long)_DAT_112772e98) &&
           (*(char *)((long)puVar3 + (long)_DAT_112772e9c) ==
            *(char *)((long)param_3 + (long)_DAT_112772e9c))))))) &&
        (*(long *)((long)puVar3 + (long)_DAT_112772ea0) ==
         *(long *)((long)param_3 + (long)_DAT_112772ea0))) &&
       (((*(long *)((long)puVar3 + (long)_DAT_112772ea4) ==
          *(long *)((long)param_3 + (long)_DAT_112772ea4) &&
         (*(long *)((long)puVar3 + (long)_DAT_112772ea8) ==
          *(long *)((long)param_3 + (long)_DAT_112772ea8))) &&
        ((*(int *)((long)puVar3 + (long)_DAT_112772eac) ==
          *(int *)((long)param_3 + (long)_DAT_112772eac) &&
         (*(long *)((long)puVar3 + (long)_DAT_112772eb0) ==
          *(long *)((long)param_3 + (long)_DAT_112772eb0))))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112772e78);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112772e78)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112772e7c);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112772e7c)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_112772e80);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112772e80)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_112772e84);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112772e84)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_112772e8c);
              if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112772e8c)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_112772eb4);
                if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_112772eb4)) {
                  func_0x00010c071ae0();
                  goto LAB_107fe5318;
                }
                goto LAB_107fe530c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107fe5318:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107fe510c; end: 107fe5333; -[SCMemoriesCameraRollFeaturedStory isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fe510c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107fe530c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107fe5318;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + (long)_DAT_112772e88) == *(char *)(param_3 + (long)_DAT_112772e88)
            && (*(int *)(param_1 + (long)_DAT_112772e90) == *(int *)(param_3 + (long)_DAT_112772e90)
               )) && (*(int *)(param_1 + (long)_DAT_112772e94) ==
                      *(int *)(param_3 + (long)_DAT_112772e94))) &&
          ((*(long *)(param_1 + (long)_DAT_112772e98) == *(long *)(param_3 + (long)_DAT_112772e98)
           && (*(char *)(param_1 + (long)_DAT_112772e9c) ==
               *(char *)(param_3 + (long)_DAT_112772e9c))))))) &&
        (*(long *)(param_1 + (long)_DAT_112772ea0) == *(long *)(param_3 + (long)_DAT_112772ea0))) &&
       (((*(long *)(param_1 + (long)_DAT_112772ea4) == *(long *)(param_3 + (long)_DAT_112772ea4) &&
         (*(long *)(param_1 + (long)_DAT_112772ea8) == *(long *)(param_3 + (long)_DAT_112772ea8)))
        && ((*(int *)(param_1 + (long)_DAT_112772eac) == *(int *)(param_3 + (long)_DAT_112772eac) &&
            (*(long *)(param_1 + (long)_DAT_112772eb0) == *(long *)(param_3 + (long)_DAT_112772eb0))
            ))))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112772e78);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112772e78)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112772e7c);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112772e7c)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_112772e80);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_112772e80)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_112772e84);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_112772e84)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_112772e8c);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_112772e8c)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_112772eb4);
                if (lVar3 != *(long *)(param_3 + (long)_DAT_112772eb4)) {
                  func_0x00010c071ae0();
                  goto LAB_107fe5318;
                }
                goto LAB_107fe530c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107fe5318:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107fe5334; end: 107fe5343; -[SCMemoriesCameraRollFeaturedStory identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe5334(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772e78);
}



/* Entry: 107fe5344; end: 107fe5353; -[SCMemoriesCameraRollFeaturedStory title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe5344(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772e7c);
}



/* Entry: 107fe5354; end: 107fe5363; -[SCMemoriesCameraRollFeaturedStory subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe5354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772e80);
}



/* Entry: 107fe5364; end: 107fe5373; -[SCMemoriesCameraRollFeaturedStory viewedAssetIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe5364(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772e84);
}



/* Entry: 107fe5374; end: 107fe5383; -[SCMemoriesCameraRollFeaturedStory seenInCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fe5374(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772e88);
}



/* Entry: 107fe5384; end: 107fe5393; -[SCMemoriesCameraRollFeaturedStory assetIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe5384(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772e8c);
}



/* Entry: 107fe5394; end: 107fe53a3; -[SCMemoriesCameraRollFeaturedStory cameraRollFeaturedStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107fe5394(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112772e90);
}



/* Entry: 107fe53a4; end: 107fe53b3; -[SCMemoriesCameraRollFeaturedStory entryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107fe53a4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112772e94);
}



/* Entry: 107fe53b4; end: 107fe53c3; -[SCMemoriesCameraRollFeaturedStory expirationDateTimeIntervalSince1970] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe53b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772e98);
}



/* Entry: 107fe53c4; end: 107fe53d3; -[SCMemoriesCameraRollFeaturedStory isHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fe53c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772e9c);
}



/* Entry: 107fe53d4; end: 107fe53e3; -[SCMemoriesCameraRollFeaturedStory activationDateTimeIntervalSince1970] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe53d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772ea0);
}



/* Entry: 107fe53e4; end: 107fe53f3; -[SCMemoriesCameraRollFeaturedStory priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe53e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772ea4);
}



/* Entry: 107fe53f4; end: 107fe5403; -[SCMemoriesCameraRollFeaturedStory lastSyncedTimeTimeIntervalSince1970] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe53f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772ea8);
}



/* Entry: 107fe5404; end: 107fe5413; -[SCMemoriesCameraRollFeaturedStory entrySource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107fe5404(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112772eac);
}



/* Entry: 107fe5414; end: 107fe5423; -[SCMemoriesCameraRollFeaturedStory referenceDateTimeIntervalSince1970] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe5414(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772eb0);
}



/* Entry: 107fe5424; end: 107fe5433; -[SCMemoriesCameraRollFeaturedStory snapFeedViewedAssetIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe5424(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772eb4);
}



/* Entry: 107fe5434; end: 107fe54b3; -[SCMemoriesCameraRollFeaturedStory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fe5434(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772eb4,0);
  _objc_storeStrong(param_1 + _DAT_112772e8c,0);
  _objc_storeStrong(param_1 + _DAT_112772e84,0);
  _objc_storeStrong(param_1 + _DAT_112772e80,0);
  _objc_storeStrong(param_1 + _DAT_112772e7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772e78,0);
  return;
}



/* Entry: 107fe54b4; end: 107fe556f; -[SCMemoriesCameraRollFeaturedStoryVisualTags initWithCameraRollId:visualTagData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107fe54b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc040;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772eb8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772eb8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772ebc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772ebc) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fe5570; end: 107fe5593; -[SCMemoriesCameraRollFeaturedStoryVisualTags copyWithZone:] */

undefined8 FUN_107fe5570(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107fe5594; end: 107fe5617; -[SCMemoriesCameraRollFeaturedStoryVisualTags hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107fe5594(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772eb8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772ebc);
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
LAB_107fe56a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107fe56b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112772eb8);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112772eb8)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_112772ebc);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_112772ebc)) {
          func_0x00010c071ae0();
          goto LAB_107fe56b4;
        }
        goto LAB_107fe56a8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107fe56b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107fe5618; end: 107fe56cf; -[SCMemoriesCameraRollFeaturedStoryVisualTags isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fe5618(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107fe56a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107fe56b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112772eb8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112772eb8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112772ebc);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112772ebc)) {
          func_0x00010c071ae0();
          goto LAB_107fe56b4;
        }
        goto LAB_107fe56a8;
      }
    }
    lVar3 = 0;
  }
LAB_107fe56b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107fe56d0; end: 107fe56df; -[SCMemoriesCameraRollFeaturedStoryVisualTags cameraRollId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe56d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772eb8);
}



/* Entry: 107fe56e0; end: 107fe56ef; -[SCMemoriesCameraRollFeaturedStoryVisualTags visualTagData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fe56e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772ebc);
}



/* Entry: 107fe56f0; end: 107fe572f; -[SCMemoriesCameraRollFeaturedStoryVisualTags .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fe56f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772ebc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772eb8,0);
  return;
}



/* Entry: 107fe5730; end: 107fe5793;  */

undefined ** FUN_107fe5730(void)

{
  int iVar1;
  
  if ((bRam00000001138247e8 & 1) == 0) {
    iVar1 = 0x138247e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_11324f9b0,0x100000000);
      ___cxa_guard_release(0x1138247e8);
    }
  }
  return &PTR_PTR_11324f9b0;
}



/* Entry: 107fe5794; end: 107fe581b;  */

void FUN_107fe5794(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fe581c; end: 107fe58a7;  */

void FUN_107fe581c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107fe58a8; end: 107fe5963;  */

undefined8 FUN_107fe58a8(void)

{
  int iVar1;
  
  if ((bRam0000000113824860 & 1) == 0) {
    iVar1 = 0x13824860;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138247f8 = 0xe;
      puRam0000000113824800 = &UNK_10f46e517;
      uRam0000000113824808 = 0x1010000;
      pcRam0000000113824810 = FUN_107fe5964;
      pcRam0000000113824818 = FUN_107fe599c;
      ppuRam00000001138247f0 = &PTR_DAT_1108962d0;
      uRam0000000113824830 = 0;
      uRam0000000113824828 = 0;
      uRam0000000113824840 = 0;
      uRam0000000113824838 = 0;
      uRam0000000113824850 = 0;
      uRam0000000113824848 = 0;
      uRam0000000113824858 = 0;
      ___cxa_atexit(&DAT_105535dc4,0x1138247f0,0x100000000);
      ___cxa_guard_release(0x113824860);
    }
  }
  return 0x1138247f0;
}



/* Entry: 107fe5964; end: 107fe599b;  */

undefined4 FUN_107fe5964(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 107fe599c; end: 107fe59ef;  */

undefined8 FUN_107fe599c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf2a800(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107fe59f0; end: 107fe5aab;  */

undefined8 FUN_107fe59f0(void)

{
  int iVar1;
  
  if ((bRam00000001138248d8 & 1) == 0) {
    iVar1 = 0x138248d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113824870 = 0xe;
      puRam0000000113824878 = &UNK_10f46e533;
      uRam0000000113824880 = 0x1010000;
      pcRam0000000113824888 = FUN_107fe5aac;
      pcRam0000000113824890 = FUN_107fe5ae4;
      ppuRam0000000113824868 = &PTR_DAT_110862958;
      uRam00000001138248a8 = 0;
      uRam00000001138248a0 = 0;
      uRam00000001138248b8 = 0;
      uRam00000001138248b0 = 0;
      uRam00000001138248c8 = 0;
      uRam00000001138248c0 = 0;
      uRam00000001138248d0 = 0;
      ___cxa_atexit(&DAT_1050077c0,0x113824868,0x100000000);
      ___cxa_guard_release(0x1138248d8);
    }
  }
  return 0x113824868;
}



/* Entry: 107fe5aac; end: 107fe5ae3;  */

undefined8 FUN_107fe5aac(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 107fe5ae4; end: 107fe5b37;  */

undefined8 FUN_107fe5ae4(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c740(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107fe5b38; end: 107fe5bf3;  */

undefined8 FUN_107fe5b38(void)

{
  int iVar1;
  
  if ((bRam0000000113824950 & 1) == 0) {
    iVar1 = 0x13824950;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138248e8 = 0xe;
      puRam00000001138248f0 = &UNK_10f46e557;
      uRam00000001138248f8 = 0x1010000;
      pcRam0000000113824900 = FUN_107fe5bf4;
      pcRam0000000113824908 = FUN_107fe5c2c;
      ppuRam00000001138248e0 = &PTR_DAT_110862958;
      uRam0000000113824920 = 0;
      uRam0000000113824918 = 0;
      uRam0000000113824930 = 0;
      uRam0000000113824928 = 0;
      uRam0000000113824940 = 0;
      uRam0000000113824938 = 0;
      uRam0000000113824948 = 0;
      ___cxa_atexit(&DAT_1050077c0,0x1138248e0,0x100000000);
      ___cxa_guard_release(0x113824950);
    }
  }
  return 0x1138248e0;
}



/* Entry: 107fe5bf4; end: 107fe5c2b;  */

undefined8 FUN_107fe5bf4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x18 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 107fe5c2c; end: 107fe5c7f;  */

undefined8 FUN_107fe5c2c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bef0260(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107fe5c80; end: 107fe5c8b; +[SCMemoriesCameraRollFeaturedStory table] */

undefined * FUN_107fe5c80(void)

{
  return &UNK_10f46e57b;
}



/* Entry: 107fe5c8c; end: 107fe61b7; +[SCMemoriesCameraRollFeaturedStory immutableObjectParse:bufferSize:] */

void FUN_107fe5c8c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uStack_90;
  undefined4 uStack_84;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126bf840;
  _objc_alloc(PTR_PTR_1126bf840);
  lVar10 = (long)*piVar1;
  uVar8 = *(ushort *)((long)piVar1 - lVar10);
  if (uVar8 < 5) {
    puVar15 = (undefined *)0x0;
LAB_107fe5d7c:
    puVar14 = (undefined *)0x0;
LAB_107fe5d80:
    puVar13 = (undefined *)0x0;
LAB_107fe5d84:
    lVar10 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar10))[2];
    if (uVar11 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - lVar10);
    }
    lVar10 = -lVar10;
    if (uVar8 < 7) goto LAB_107fe5d7c;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 6);
    if (uVar11 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = -(long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar8 < 9) goto LAB_107fe5d80;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 8);
    if (uVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = -(long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar8 < 0xb) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 10), uVar11 == 0))
    goto LAB_107fe5d84;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_107fe7908();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar9 < 0xd) {
    bVar3 = false;
LAB_107fe5df4:
    lVar6 = 0;
  }
  else {
    if ((ulong)puVar9[6] == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar1 + (ulong)puVar9[6]) != '\0';
    }
    if ((*puVar9 < 0xf) || ((ulong)puVar9[7] == 0)) goto LAB_107fe5df4;
    puVar2 = (uint *)((long)piVar1 + (ulong)puVar9[7]);
    lVar6 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_107fe7908();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar8 = *puVar9;
  if (uVar8 < 0x11) {
    uStack_84 = 0;
LAB_107fe5e80:
    uStack_90 = 0;
    uVar12 = 0;
LAB_107fe5e84:
    bVar4 = false;
  }
  else {
    if ((ulong)puVar9[8] == 0) {
      uStack_84 = 0;
    }
    else {
      uStack_84 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[8]);
    }
    if (uVar8 < 0x13) goto LAB_107fe5e80;
    if ((ulong)puVar9[9] == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[9]);
    }
    if (uVar8 < 0x15) {
      uStack_90 = 0;
      goto LAB_107fe5e84;
    }
    if ((ulong)puVar9[10] == 0) {
      uStack_90 = 0;
    }
    else {
      uStack_90 = *(undefined8 *)((long)piVar1 + (ulong)puVar9[10]);
    }
    if (uVar8 < 0x17) goto LAB_107fe5e84;
    if ((ulong)puVar9[0xb] == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar1 + (ulong)puVar9[0xb]) != '\0';
    }
    if ((((0x18 < uVar8) && (0x1a < uVar8)) && (0x1c < uVar8)) &&
       (((0x1e < uVar8 && (0x20 < uVar8)) && ((0x22 < uVar8 && ((ulong)puVar9[0x11] != 0)))))) {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar9[0x11]);
      lVar7 = (long)puVar2 + (ulong)*puVar2;
      goto LAB_107fe5e94;
    }
  }
  lVar7 = 0;
LAB_107fe5e94:
  FUN_107fe7908();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bba0(puVar5,param_2,puVar15,puVar14,puVar13,lVar10,bVar3,lVar6,uStack_84,uVar12,
                      uStack_90,bVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fe61b8; end: 107fe61db; +[SCMemoriesCameraRollFeaturedStory objectClassFunctionPointer] */

undefined1  [16] FUN_107fe61b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x107fe61d4;
  auVar1._0_8_ = 0x107fe61cc;
  return auVar1;
}


