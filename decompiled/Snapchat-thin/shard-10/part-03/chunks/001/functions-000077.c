/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e6277c; end: 107e6277f;  */

void FUN_107e6277c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_needsLiveRendering_112613708);
  return;
}



/* Entry: 107e62780; end: 107e627db;  */

void FUN_107e62780(ulong param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 == 0)) {
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d73c0();
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_1);
      uVar1 = param_1;
    }
    else {
      uVar1 = 0;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e627dc; end: 107e629bb;  */

undefined * FUN_107e627dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfd4420();
  if ((int)lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar8 = (undefined *)0x0;
    if (lVar3 != 0) {
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          uVar9 = *(ulong *)(lVar10 * 8);
          uVar4 = uVar9;
          func_0x00010bf0d0a0();
          if ((int)uVar4 == 1) {
            func_0x00010bf4e080();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar9;
            func_0x00010bfd5c60();
            if ((int)uVar4 != 0) {
              uVar4 = uVar9;
              func_0x00010bf4e840();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf3d0e0();
              if ((int)uVar5 == 0xc) {
                uVar5 = uVar4;
                func_0x00010c27f9c0();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x00010bfdad20();
                _objc_release(uVar5);
                if ((uVar6 & 1) != 0) {
                  _objc_release(uVar4);
                  _objc_release(uVar9);
                  puVar8 = (undefined *)0x1;
                  goto LAB_107e6296c;
                }
              }
              _objc_release(uVar4);
            }
            _objc_release(uVar9);
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      puVar8 = (undefined *)0x0;
    }
LAB_107e6296c:
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126bf670;
                    /* WARNING: Could not recover jumptable at 0x00010c075010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf670,PTR_s_isImage__1125fae10,param_1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 107e629bc; end: 107e629e3;  */

void FUN_107e629bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c075010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf670,PTR_s_isImage__1125fae10,param_1);
  return;
}



/* Entry: 107e629e4; end: 107e62d93;  */

ulong FUN_107e629e4(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar23 = param_1;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bfdc300();
  _objc_release(uVar23);
  if ((int)uVar24 == 0) {
    uVar23 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar24;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar24);
    _objc_release(uVar23);
    uVar23 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (uVar23 == 0) {
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
      do {
        uVar24 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar4);
          }
          lVar9 = *(long *)(uVar24 * 8);
          func_0x00010c12f9a0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar9;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar5 != 0) {
            lVar20 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar9);
              }
              lVar6 = *(long *)(lVar20 * 8);
              dVar29 = 0.0;
              func_0x00010c12fa40();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010bf52a60();
              lVar28 = lRam0000000000000000;
              while (lVar7 != 0) {
                lVar21 = 0;
                do {
                  dVar30 = dVar29;
                  if (lRam0000000000000000 != lVar28) {
                    _objc_enumerationMutation(lVar6);
                    dVar30 = dVar29;
                  }
                  uVar27 = *(undefined8 *)(lVar21 * 8);
                  uVar8 = uVar27;
                  func_0x00010c12f940();
                  _objc_retainAutoreleasedReturnValue();
                  uVar26 = uVar8;
                  func_0x00010bf8cf20();
                  _objc_release(uVar8);
                  dVar29 = dVar30;
                  if ((int)uVar26 == 1) {
                    func_0x00010c12f940();
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uVar27;
                    func_0x00010bf101a0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2a0dc0();
                    dVar29 = dVar30;
                    _objc_release(uVar8);
                    _objc_release(uVar27);
                    if (dVar30 != 0.0) {
                      _objc_release(lVar6);
                      _objc_release(lVar9);
                      _objc_release(uVar4);
                      uVar22 = 1;
                      goto LAB_107e62d48;
                    }
                    uVar22 = 1;
                  }
                  lVar21 = lVar21 + 1;
                } while (lVar7 != lVar21);
                lVar7 = lVar6;
                func_0x00010bf52a60();
              }
              _objc_release(lVar6);
              lVar20 = lVar20 + 1;
            } while (lVar20 != lVar5);
            lVar5 = lVar9;
            func_0x00010bf52a60();
          }
          _objc_release(lVar9);
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar23);
        uVar23 = uVar4;
        func_0x00010bf52a60();
      } while (uVar23 != 0);
      uVar22 = uVar22 ^ 1;
    }
  }
  else {
    uVar4 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar4;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010bfdc680();
    uVar22 = (uint)uVar24;
    _objc_release(uVar23);
  }
  _objc_release(uVar4);
LAB_107e62d48:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return (ulong)(uVar22 & 1);
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar23 = param_1;
  FUN_107e61fac();
  if ((int)uVar23 == 0) {
    uVar23 = 0;
  }
  else {
    uVar24 = param_1;
    func_0x00010bf51e00();
    uVar23 = uVar24;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar23;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar23);
    uVar3 = uVar4;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar23 != 0) {
      uVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        lVar9 = *(long *)(uVar25 * 8);
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar9;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar9);
            }
            lVar28 = *(long *)(lVar20 * 8);
            lVar7 = lVar28;
            func_0x00010bfdda80();
            if ((int)lVar7 != 0) {
              lVar7 = lVar28;
              func_0x00010c27c540();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar7;
              func_0x00010c250f20();
              if (lVar6 == 0) {
                lVar6 = lVar28;
                func_0x00010c27c540();
                _objc_retainAutoreleasedReturnValue();
                lVar21 = lVar6;
                func_0x00010bf8b160();
                _objc_release(lVar6);
                _objc_release(lVar7);
                if (lVar21 == 0) {
                  func_0x00010c27c540();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c192d40();
                  _objc_release(lVar28);
                  goto LAB_107e62f78;
                }
              }
              else {
                _objc_release(lVar7);
              }
              _objc_release(lVar9);
              _objc_release(uVar3);
              uVar23 = 0;
              goto LAB_107e63100;
            }
LAB_107e62f78:
            lVar20 = lVar20 + 1;
          } while (lVar5 != lVar20);
          lVar5 = lVar9;
          func_0x00010bf52a60();
        }
        _objc_release(lVar9);
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar23);
      uVar23 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
    uVar23 = uVar24;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar23;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar23);
    uVar23 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar23 != 0) {
      uVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        uVar26 = *(undefined8 *)(uVar25 * 8);
        uVar8 = uVar26;
        func_0x00010c08c3a0();
        if ((int)uVar8 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c45e0();
          _objc_release(uVar26);
        }
        uVar25 = uVar25 + 1;
      } while (uVar23 != uVar25);
      uVar23 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
    _objc_retain(uVar24);
    uVar23 = uVar24;
LAB_107e63100:
    _objc_release(uVar4);
    _objc_release(uVar24);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    puVar10 = PTR_PTR_1126b25c0;
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_opt_new();
    puVar11 = PTR_PTR_1126b3068;
    _objc_alloc_init(PTR_PTR_1126b3068);
    puVar12 = PTR_PTR_1126b25e8;
    _objc_alloc_init(PTR_PTR_1126b25e8);
    func_0x00010c1ac2a0(puVar11);
    _objc_release(puVar12);
    puVar12 = puVar10;
    func_0x00010c0fee00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd500();
    _objc_release(puVar12);
    uVar24 = param_1;
    func_0x00010bf8cb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe97a0(0x4086800000000000,0x4094000000000000,0x3ff0000000000000,puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar14 = puVar13;
    _UIImageJPEGRepresentation(0x3ff0000000000000,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c2bda80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar12);
    puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar15 = &PTR____CFConstantStringClassReference_110e09658;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e09658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    puVar16 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    puVar17 = PTR_PTR_1126b3080;
    func_0x00010bfad3e0(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar24;
    func_0x00010c265b80(uVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010c0c3fe0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880();
    _objc_release(puVar18);
    _objc_release(uVar23);
    _objc_release(puVar17);
    puVar17 = puVar16;
    func_0x00010c0c3fe0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a960();
    _objc_release(puVar17);
    puVar17 = puVar16;
    func_0x00010c0c3fe0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar17);
    puVar17 = puVar16;
    func_0x00010c0c3fe0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar16;
    func_0x00010c0c3fe0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar18);
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar24);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar17);
    uVar23 = uVar24;
    func_0x00010c23fe00(uVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar12);
    _objc_release(uVar8);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar24);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar23);
  return uVar23;
}



/* Entry: 107e62d94; end: 107e6350b;  */

void FUN_107e62d94(long param_1,undefined8 param_2)

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
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar23 = param_1;
  FUN_107e61fac();
  if ((int)lVar23 == 0) {
    lVar23 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf51e00();
    lVar23 = lVar2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar23;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar23);
    lVar5 = lVar4;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar23 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        lVar6 = *(long *)(lVar24 * 8);
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar22 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar6);
            }
            lVar26 = *(long *)(lVar22 * 8);
            lVar8 = lVar26;
            func_0x00010bfdda80();
            if ((int)lVar8 != 0) {
              lVar8 = lVar26;
              func_0x00010c27c540();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010c250f20();
              if (lVar9 == 0) {
                lVar9 = lVar26;
                func_0x00010c27c540();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010bf8b160();
                _objc_release(lVar9);
                _objc_release(lVar8);
                if (lVar10 == 0) {
                  func_0x00010c27c540();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c192d40();
                  _objc_release(lVar26);
                  goto LAB_107e62f78;
                }
              }
              else {
                _objc_release(lVar8);
              }
              _objc_release(lVar6);
              _objc_release(lVar5);
              lVar23 = 0;
              goto LAB_107e63100;
            }
LAB_107e62f78:
            lVar22 = lVar22 + 1;
          } while (lVar7 != lVar22);
          lVar7 = lVar6;
          func_0x00010bf52a60();
        }
        _objc_release(lVar6);
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar23);
      lVar23 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    lVar23 = lVar2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar23;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar23);
    lVar23 = lVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar23 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        uVar25 = *(undefined8 *)(lVar24 * 8);
        uVar11 = uVar25;
        func_0x00010c08c3a0();
        if ((int)uVar11 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c45e0();
          _objc_release(uVar25);
        }
        lVar24 = lVar24 + 1;
      } while (lVar23 != lVar24);
      lVar23 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    _objc_retain(lVar2);
    lVar23 = lVar2;
LAB_107e63100:
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
    ___stack_chk_fail();
    puVar12 = PTR_PTR_1126b25c0;
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_opt_new();
    puVar13 = PTR_PTR_1126b3068;
    _objc_alloc_init(PTR_PTR_1126b3068);
    puVar14 = PTR_PTR_1126b25e8;
    _objc_alloc_init(PTR_PTR_1126b25e8);
    func_0x00010c1ac2a0(puVar13);
    _objc_release(puVar14);
    puVar14 = puVar12;
    func_0x00010c0fee00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd500();
    _objc_release(puVar14);
    lVar21 = param_1;
    func_0x00010bf8cb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar15 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe97a0(0x4086800000000000,0x4094000000000000,0x3ff0000000000000,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar16 = puVar15;
    _UIImageJPEGRepresentation(0x3ff0000000000000,puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar16;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c2bda80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar17 = &PTR____CFConstantStringClassReference_110e09658;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e09658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    puVar18 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    puVar19 = PTR_PTR_1126b3080;
    func_0x00010bfad3e0(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar21;
    func_0x00010c265b80(lVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010c0c3fe0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880();
    _objc_release(puVar20);
    _objc_release(lVar23);
    _objc_release(puVar19);
    puVar19 = puVar18;
    func_0x00010c0c3fe0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a960();
    _objc_release(puVar19);
    puVar19 = puVar18;
    func_0x00010c0c3fe0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar19);
    puVar19 = puVar18;
    func_0x00010c0c3fe0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar20);
    _objc_release(puVar19);
    puVar19 = puVar18;
    func_0x00010c0c3fe0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar20);
    _objc_release(puVar19);
    puVar19 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(lVar21);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    lVar23 = lVar21;
    func_0x00010c23fe00(lVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar14);
    _objc_release(uVar11);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(lVar21);
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar23);
  return;
}



/* Entry: 107e6350c; end: 107e63717;  */

void FUN_107e6350c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_x6;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(in_x6);
  _objc_retain(param_2);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b25c0;
  _objc_opt_new(PTR_PTR_1126b25c0);
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c16b420(puVar2);
    _objc_release(lVar3);
  }
  puVar4 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
  _objc_release(puVar4);
  uVar5 = param_2;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  func_0x00010bef9c20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_retain(param_1);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar6);
  _objc_release(in_x6);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e63718; end: 107e639a3;  */

void FUN_107e63718(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar1 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    puVar2 = puVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0c3fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a960();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0c3fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0c3fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0c3fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0c3fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c45e0();
    _objc_release(puVar2);
    func_0x00010c17dd60(PTR_PTR_1126bf670);
    if (*(int *)(param_1 + 0x54) != 0) {
      puVar2 = PTR_PTR_1126affc8;
      _objc_opt_new(PTR_PTR_1126affc8);
      puVar3 = PTR_PTR_1126affd0;
      _objc_opt_new(PTR_PTR_1126affd0);
      func_0x00010c1c52c0();
      func_0x00010c1c4d40(puVar2);
      puVar4 = puVar1;
      func_0x00010c0c3fe0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010befd2c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e639a4; end: 107e63d9f;  */

void FUN_107e639a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_388;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lVar6 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_2b0,auStack_f0,0x10);
  if (lVar6 != 0) {
    lVar7 = *plStack_2a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_2a0 != lVar7) {
          _objc_enumerationMutation(lVar8);
        }
        lVar12 = *(long *)(lStack_2a8 + lVar14 * 8);
        lVar2 = lVar12;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          func_0x00010bf5cc00(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar12);
          _objc_release(lVar12);
        }
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      lVar6 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_2b0,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar8);
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  lVar6 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar7;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar6);
  lStack_388 = lVar14;
  func_0x00010bf52a60(lVar14,param_2,&uStack_2f0,auStack_170,0x10);
  if (lStack_388 != 0) {
    lVar6 = *plStack_2e0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_2e0 != lVar6) {
          _objc_enumerationMutation(lVar14);
        }
        lVar2 = *(long *)(lStack_2e8 + lVar8 * 8);
        lStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        func_0x00010c12f9a0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar2;
        func_0x00010bf52a60();
        if (lVar7 != 0) {
          lVar12 = *plStack_320;
          do {
            lVar11 = 0;
            do {
              if (*plStack_320 != lVar12) {
                _objc_enumerationMutation(lVar2);
              }
              lVar3 = *(long *)(lStack_328 + lVar11 * 8);
              lStack_368 = 0;
              uStack_370 = 0;
              uStack_358 = 0;
              plStack_360 = (long *)0x0;
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              func_0x00010c12fa40();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010bf52a60();
              if (lVar4 != 0) {
                lVar10 = *plStack_360;
                do {
                  lVar13 = 0;
                  do {
                    if (*plStack_360 != lVar10) {
                      _objc_enumerationMutation(lVar3);
                    }
                    lVar15 = *(long *)(lStack_368 + lVar13 * 8);
                    lVar5 = lVar15;
                    func_0x00010bf5cc00();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (lVar5 != 0) {
                      func_0x00010bf5cc00(lVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar1,param_2,lVar15);
                      _objc_release(lVar15);
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar4 != lVar13);
                  lVar4 = lVar3;
                  func_0x00010bf52a60(lVar3,param_2,&uStack_370,auStack_270,0x10);
                } while (lVar4 != 0);
              }
              _objc_release(lVar3);
              lVar11 = lVar11 + 1;
            } while (lVar11 != lVar7);
            lVar7 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_330,auStack_1f0,0x10);
          } while (lVar7 != 0);
        }
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lStack_388);
      lStack_388 = lVar14;
      func_0x00010bf52a60(lVar14,param_2,&uStack_2f0,auStack_170,0x10);
    } while (lStack_388 != 0);
  }
  _objc_release(lVar14);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    lVar6 = param_1;
    func_0x00010bfd84e0();
    if ((int)lVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      lVar6 = param_1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bfe5ea0();
      _objc_release(lVar6);
      puVar9 = (undefined *)0x0;
      if (lVar8 != 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107e63da0; end: 107e63ecf;  */

void FUN_107e63da0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfd84e0();
  if ((int)lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_release(lVar1);
    puVar4 = (undefined *)0x0;
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e64874; end: 107e649e3;  */

/* WARNING: Possible PIC construction at 0x000107e64ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e64c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e64cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e64ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e64cf8) */
/* WARNING: Removing unreachable block (ram,0x000107e64d18) */
/* WARNING: Removing unreachable block (ram,0x000107e64d2c) */
/* WARNING: Removing unreachable block (ram,0x000107e64c0c) */
/* WARNING: Removing unreachable block (ram,0x000107e64ba4) */
/* WARNING: Removing unreachable block (ram,0x000107e64c3c) */
/* WARNING: Removing unreachable block (ram,0x000107e64c48) */
/* WARNING: Removing unreachable block (ram,0x000107e64bd4) */
/* WARNING: Removing unreachable block (ram,0x000107e64efc) */
/* WARNING: Removing unreachable block (ram,0x000107e64f1c) */
/* WARNING: Removing unreachable block (ram,0x000107e64f30) */

void FUN_107e64874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long lVar13;
  undefined8 *unaff_x28;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uStack_500;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_380;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 ***pppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_190;
  undefined8 **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar14 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain(param_2);
  uVar16 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar7 = puVar2;
  func_0x00010bf52a60();
  fVar17 = (float)uVar16;
  if (puVar7 != (undefined8 *)0x0) {
    unaff_x24 = (undefined8 *)*puStack_110;
    do {
      unaff_x25 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_110 != unaff_x24) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x22 = *(undefined8 **)(lStack_118 + (long)unaff_x25 * 8);
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = unaff_x22;
        func_0x00010bf0b760();
        if ((int)puVar14 == 5) {
          unaff_x23 = param_2;
          func_0x00010bf51e00();
          func_0x00010c191d40(unaff_x22);
          _objc_release(unaff_x23);
        }
        _objc_release(unaff_x22);
        unaff_x25 = (undefined8 *)((long)unaff_x25 + 1);
      } while (puVar7 != unaff_x25);
      puVar7 = puVar2;
      puVar14 = &uStack_120;
      func_0x00010bf52a60();
      fVar17 = (float)uVar16;
      param_1 = (undefined8 *)0x0;
    } while (puVar7 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
  puVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_310;
  uStack_128 = 0x107e649e4;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = (undefined8 **)&stack0xfffffffffffffff0;
  if (puVar7 == (undefined8 *)0x0) {
    unaff_x22 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)0x0;
LAB_107e64e08:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) goto _objc_autoreleaseReturnValue;
    uVar16 = 0x107e64e48;
    ___stack_chk_fail();
SUB_107e64e48:
    puVar1 = &uStack_500;
    puVar4 = &uStack_500;
    ppppuVar15 = &pppuStack_320;
    lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_370 = unaff_x28;
    puStack_368 = unaff_x27;
    puStack_360 = unaff_x26;
    puStack_358 = unaff_x25;
    puStack_350 = unaff_x24;
    puStack_348 = unaff_x23;
    puStack_340 = unaff_x22;
    puStack_338 = param_1;
    puStack_330 = puVar2;
    puStack_328 = param_2;
    pppuStack_320 = &ppuStack_130;
    uStack_318 = uVar16;
    _objc_retain();
    puVar3 = puVar14;
    if (puVar7 == (undefined8 *)0x0) {
LAB_107e65084:
      unaff_x22 = (undefined8 *)0x0;
    }
    else {
      fVar17 = 0.0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      plStack_4b8 = (long *)0x0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      puStack_4b0 = (undefined8 *)0x0;
      puVar2 = puVar7;
      func_0x00010bf5ccc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = &uStack_4c0;
      puVar14 = puVar2;
      func_0x00010bf52a60();
      if (puVar14 != (undefined8 *)0x0) {
        unaff_x24 = (undefined8 *)*puStack_4b0;
        unaff_x25 = (undefined8 *)0x0;
        if ((undefined8 *)*puStack_4b0 != unaff_x24) {
          _objc_enumerationMutation(puVar2);
        }
        puVar4 = (undefined8 *)*plStack_4b8;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = 0x107e64efc;
        puVar1 = &uStack_500;
        param_1 = puVar14;
        unaff_x23 = puVar4;
        goto SUB_107e65120;
      }
      _objc_release(puVar2);
      puVar14 = puVar7;
      func_0x00010bfdd280();
      if ((int)puVar14 == 0) goto LAB_107e65084;
      uVar16 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      lStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      puStack_4f0 = (undefined8 *)0x0;
      param_1 = puVar7;
      func_0x00010c269920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf8d2c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar14 = puVar2;
      func_0x00010bf52a60();
      fVar17 = (float)uVar16;
      if (puVar14 != (undefined8 *)0x0) {
        unaff_x27 = (undefined8 *)*puStack_4f0;
        do {
          unaff_x28 = (undefined8 *)0x0;
          do {
            if ((undefined8 *)*puStack_4f0 != unaff_x27) {
              _objc_enumerationMutation(puVar2);
            }
            param_1 = *(undefined8 **)(lStack_4f8 + (long)unaff_x28 * 8);
            unaff_x23 = param_1;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = unaff_x23;
            func_0x00010bf31ca0();
            if ((int)puVar3 == 2) {
              unaff_x24 = param_1;
              func_0x00010beedca0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = unaff_x25;
              func_0x00010c08fa60();
              _objc_release(unaff_x25);
              _objc_release(unaff_x24);
              _objc_release(unaff_x23);
              fVar17 = (float)uVar16;
              if (unaff_x26 != (undefined8 *)0x0) {
                func_0x00010beedca0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x23 = param_1;
                func_0x00010c086560();
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = unaff_x23;
                func_0x00010c0b5ac0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x23);
                _objc_release(param_1);
                goto LAB_107e650d0;
              }
            }
            else {
              _objc_release(unaff_x23);
            }
            unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
          } while (puVar14 != unaff_x28);
          puVar14 = puVar2;
          puVar4 = &uStack_500;
          func_0x00010bf52a60();
          fVar17 = (float)uVar16;
          param_1 = (undefined8 *)0x0;
        } while (puVar14 != (undefined8 *)0x0);
      }
      unaff_x22 = (undefined8 *)0x0;
LAB_107e650d0:
      _objc_release(puVar2);
      puVar3 = puVar4;
    }
    puVar4 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_380) goto _objc_autoreleaseReturnValue;
    uVar16 = 0x107e65120;
    ___stack_chk_fail();
  }
  else {
    param_2 = (undefined8 *)PTR_PTR_1126b25c0;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_2;
    func_0x00010bfd4420();
    puVar7 = param_2;
    if ((int)puVar14 != 0) {
      puVar14 = param_2;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar14;
      func_0x00010bf0d820();
      _objc_release(puVar14);
      param_1 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        uVar16 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        lStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        puStack_2c0 = (undefined8 *)0x0;
        param_1 = param_2;
        func_0x00010bf0d7e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010bf0d800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        puVar14 = &uStack_2d0;
        puVar1 = puVar2;
        func_0x00010bf52a60();
        if (puVar1 != (undefined8 *)0x0) {
          unaff_x27 = (undefined8 *)*puStack_2c0;
          param_1 = puVar1;
          do {
            unaff_x28 = (undefined8 *)0x0;
            do {
              if ((undefined8 *)*puStack_2c0 != unaff_x27) {
                _objc_enumerationMutation(puVar2);
              }
              unaff_x24 = *(undefined8 **)(lStack_2c8 + (long)unaff_x28 * 8);
              puVar1 = unaff_x24;
              func_0x00010bf0d0a0();
              if ((int)puVar1 == 0xc) {
                unaff_x23 = unaff_x24;
                func_0x00010c0fd240();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = unaff_x23;
                func_0x00010bfdd220();
                fVar17 = (float)uVar16;
                if ((int)puVar1 == 0) {
                  _objc_release(unaff_x23);
                  goto LAB_107e64b1c;
                }
                param_1 = unaff_x23;
                func_0x00010c2683c0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = param_1;
                func_0x00010bfe2ee0();
                unaff_x24 = unaff_x23;
                func_0x00010c2683c0();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = unaff_x24;
                func_0x00010c0b5940();
                func_0x000100c4a928();
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = unaff_x25;
                func_0x00010c0b5ac0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x25);
                _objc_release(unaff_x24);
LAB_107e64de8:
                _objc_release(param_1);
                _objc_release(unaff_x23);
                goto LAB_107e64df8;
              }
LAB_107e64b1c:
              puVar1 = unaff_x24;
              func_0x00010bf0d0a0();
              fVar17 = (float)uVar16;
              if ((int)puVar1 == 1) {
                unaff_x22 = unaff_x24;
                func_0x00010bf4e080();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = unaff_x22;
                func_0x00010c297e20();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = puVar3;
                func_0x00010c08fa60();
                _objc_release(puVar3);
                _objc_release(unaff_x22);
                unaff_x23 = unaff_x24;
                func_0x00010bf4e080();
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x25 != (undefined8 *)0x0) {
                  param_1 = unaff_x23;
                  func_0x00010c297e20();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x22 = param_1;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_107e64de8;
                }
                unaff_x25 = unaff_x23;
                func_0x00010bf4e840();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = unaff_x25;
                func_0x00010c27f9c0();
                _objc_retainAutoreleasedReturnValue();
                uVar16 = 0x107e64ba4;
                unaff_x26 = puVar7;
                goto SUB_107e64e48;
              }
              unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
            } while (param_1 != unaff_x28);
            puVar14 = &uStack_2d0;
            param_1 = puVar2;
            func_0x00010bf52a60();
          } while (param_1 != (undefined8 *)0x0);
        }
        _objc_release(puVar2);
      }
    }
    fVar17 = 0.0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    plStack_308 = (long *)0x0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    puStack_300 = (undefined8 *)0x0;
    puVar2 = param_2;
    FUN_107e639a4();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010bf52a60();
    if (puVar14 == (undefined8 *)0x0) {
      unaff_x22 = (undefined8 *)0x0;
      puVar14 = puVar3;
LAB_107e64df8:
      _objc_release(puVar2);
      _objc_release();
      goto LAB_107e64e08;
    }
    unaff_x24 = (undefined8 *)*puStack_300;
    unaff_x25 = (undefined8 *)0x0;
    if ((undefined8 *)*puStack_300 != unaff_x24) {
      _objc_enumerationMutation(puVar2);
    }
    puVar4 = (undefined8 *)*plStack_308;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0x107e64cf8;
    puVar1 = &uStack_310;
    param_1 = puVar14;
    unaff_x23 = puVar4;
    ppppuVar15 = (undefined8 ****)&ppuStack_130;
  }
SUB_107e65120:
  *(undefined8 **)((long)puVar1 + -0x60) = unaff_x28;
  *(undefined8 **)((long)puVar1 + -0x58) = unaff_x27;
  *(undefined8 **)((long)puVar1 + -0x50) = unaff_x26;
  *(undefined8 **)((long)puVar1 + -0x48) = unaff_x25;
  *(undefined8 **)((long)puVar1 + -0x40) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
  *(undefined8 **)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar1 + -0x28) = param_1;
  *(undefined8 **)((long)puVar1 + -0x20) = puVar2;
  *(undefined8 **)((long)puVar1 + -0x18) = puVar7;
  *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar15;
  *(undefined8 *)((long)puVar1 + -8) = uVar16;
  *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar14 = unaff_x28;
  if (puVar4 == (undefined8 *)0x0) {
LAB_107e65a20:
    unaff_x22 = (undefined8 *)0x0;
  }
  else {
    puVar14 = puVar4;
    func_0x00010c0cc820();
    if ((int)puVar14 != 7) {
LAB_107e65374:
      puVar14 = puVar4;
      func_0x00010c0cc820();
      if ((int)puVar14 == 3) {
        puVar7 = puVar4;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar7;
        func_0x00010bfedf40();
        if ((int)puVar14 == 1) {
          puVar14 = puVar7;
          func_0x00010c0fd520();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar14;
          func_0x00010bfda400();
          _objc_release(puVar14);
          if (((ulong)puVar2 & 1) != 0) {
            puVar14 = puVar7;
            func_0x00010c0fd520();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = puVar14;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x23;
            func_0x00010bfe2ee0();
            unaff_x24 = puVar7;
            func_0x00010c0fd520();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = unaff_x25;
            func_0x00010c0b5940();
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = unaff_x26;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107e65448;
          }
        }
        _objc_release(puVar7);
      }
      puVar14 = puVar4;
      func_0x00010c0cc820();
      if ((int)puVar14 == 2) {
        param_1 = puVar4;
        func_0x00010bf30500();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = 0;
        *(undefined8 *)((long)puVar1 + -0x228) = 0;
        *(undefined8 *)((long)puVar1 + -0x230) = 0;
        *(undefined8 *)((long)puVar1 + -0x218) = 0;
        *(undefined8 *)((long)puVar1 + -0x220) = 0;
        *(undefined8 *)((long)puVar1 + -0x208) = 0;
        *(undefined8 *)((long)puVar1 + -0x210) = 0;
        *(undefined8 *)((long)puVar1 + -0x1f8) = 0;
        *(undefined8 *)((long)puVar1 + -0x200) = 0;
        *(undefined8 **)((long)puVar1 + -0x2b8) = param_1;
        func_0x00010c0ca840();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = (undefined8 *)((long)puVar1 + -0x230);
        puVar14 = param_1;
        func_0x00010bf52a60();
        fVar17 = (float)uVar16;
        if (puVar14 != (undefined8 *)0x0) {
          lVar13 = **(long **)((long)puVar1 + -0x220);
          do {
            unaff_x28 = (undefined8 *)0x0;
            do {
              if (**(long **)((long)puVar1 + -0x220) != lVar13) {
                _objc_enumerationMutation(param_1);
              }
              unaff_x24 = *(undefined8 **)(*(long *)((long)puVar1 + -0x228) + (long)unaff_x28 * 8);
              unaff_x23 = unaff_x24;
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = unaff_x23;
              func_0x00010bf96ee0();
              if ((int)puVar2 == 2) {
                unaff_x25 = unaff_x24;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010c0fce80();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x26;
                func_0x00010bfd7d20();
                _objc_release(unaff_x26);
                _objc_release(unaff_x25);
                _objc_release(unaff_x23);
                fVar17 = (float)uVar16;
                if (((ulong)unaff_x27 & 1) != 0) {
                  unaff_x23 = unaff_x24;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x25 = unaff_x23;
                  func_0x00010c0fce80();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x26 = unaff_x25;
                  func_0x00010bfe5ea0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = unaff_x26;
                  func_0x00010bfe2ee0();
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = unaff_x24;
                  func_0x00010c0fce80();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = unaff_x27;
                  func_0x00010bfe5ea0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = unaff_x28;
                  func_0x00010c0b5940();
                  func_0x000100c4a928();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x22 = puVar2;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar2);
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  _objc_release(unaff_x24);
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x25);
                  _objc_release(unaff_x23);
                  _objc_release(param_1);
                  puVar7 = *(undefined8 **)((long)puVar1 + -0x2b8);
                  goto LAB_107e65808;
                }
              }
              else {
                _objc_release(unaff_x23);
              }
              unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
            } while (puVar14 != unaff_x28);
            puVar3 = (undefined8 *)((long)puVar1 + -0x230);
            puVar14 = param_1;
            func_0x00010bf52a60();
            fVar17 = (float)uVar16;
          } while (puVar14 != (undefined8 *)0x0);
        }
        _objc_release(param_1);
        _objc_release(*(undefined8 *)((long)puVar1 + -0x2b8));
      }
      puVar2 = puVar4;
      func_0x00010c08eee0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      param_1 = (undefined8 *)0x0;
      puVar14 = unaff_x28;
      if (puVar6 != (undefined8 *)0x0) {
        param_1 = puVar4;
        func_0x00010c08eee0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        func_0x00010bdc1900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class();
        puVar2 = puVar7;
        _objc_opt_isKindOfClass();
        if (((ulong)puVar2 & 1) != 0) {
          param_1 = (undefined8 *)PTR_PTR_1126bcdd8;
          _objc_alloc();
          puVar3 = puVar7;
          func_0x00010c0206e0();
          puVar14 = param_1;
          func_0x00010bfaebe0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar14;
          func_0x00010c297ca0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010bf1f3c0();
          unaff_x23 = param_1;
          if (((ulong)puVar6 & 1) == 0) {
            _objc_release(puVar2);
            _objc_release(puVar14);
          }
          else {
            unaff_x24 = param_1;
            func_0x00010bfaebe0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c297c00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c15a3e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010c08fa60();
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            _objc_release(puVar2);
            _objc_release(puVar14);
            if (unaff_x27 != (undefined8 *)0x0) {
              func_0x00010bfaebe0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = unaff_x23;
              func_0x00010c297c00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010c15a3e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = unaff_x25;
              func_0x00010c0b5ac0();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = param_1;
              goto LAB_107e65450;
            }
          }
          uVar16 = 0;
          *(undefined8 *)((long)puVar1 + -0x248) = 0;
          *(undefined8 *)((long)puVar1 + -0x250) = 0;
          *(undefined8 *)((long)puVar1 + -0x238) = 0;
          *(undefined8 *)((long)puVar1 + -0x240) = 0;
          *(undefined8 *)((long)puVar1 + -0x268) = 0;
          *(undefined8 *)((long)puVar1 + -0x270) = 0;
          *(undefined8 *)((long)puVar1 + -600) = 0;
          *(undefined8 *)((long)puVar1 + -0x260) = 0;
          *(undefined8 **)((long)puVar1 + -0x2b8) = param_1;
          func_0x00010c2553e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = (undefined8 *)((long)puVar1 + -0x270);
          puVar14 = unaff_x23;
          func_0x00010bf52a60();
          if (puVar14 != (undefined8 *)0x0) {
            unaff_x28 = (undefined8 *)**(undefined8 **)((long)puVar1 + -0x260);
            do {
              param_1 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)**(undefined8 **)((long)puVar1 + -0x260) != unaff_x28) {
                  _objc_enumerationMutation(unaff_x23);
                }
                unaff_x25 = *(undefined8 **)(*(long *)((long)puVar1 + -0x268) + (long)param_1 * 8);
                func_0x00010bfedfc0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010c297b40();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x26;
                func_0x00010c297b40();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = unaff_x27;
                func_0x00010c297e20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x25);
                puVar2 = unaff_x24;
                func_0x00010c08fa60();
                fVar17 = (float)uVar16;
                if (puVar2 != (undefined8 *)0x0) {
                  unaff_x22 = unaff_x24;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = *(undefined8 **)((long)puVar1 + -0x2b8);
                  goto LAB_107e65458;
                }
                _objc_release(unaff_x24);
                param_1 = (undefined8 *)((long)param_1 + 1);
              } while (puVar14 != param_1);
              puVar3 = (undefined8 *)((long)puVar1 + -0x270);
              puVar14 = unaff_x23;
              func_0x00010bf52a60();
            } while (puVar14 != (undefined8 *)0x0);
          }
          _objc_release(unaff_x23);
          uVar16 = 0;
          *(undefined8 *)((long)puVar1 + -0x288) = 0;
          *(undefined8 *)((long)puVar1 + -0x290) = 0;
          *(undefined8 *)((long)puVar1 + -0x278) = 0;
          *(undefined8 *)((long)puVar1 + -0x280) = 0;
          *(undefined8 *)((long)puVar1 + -0x2a8) = 0;
          *(undefined8 *)((long)puVar1 + -0x2b0) = 0;
          *(undefined8 *)((long)puVar1 + -0x298) = 0;
          *(undefined8 *)((long)puVar1 + -0x2a0) = 0;
          puVar14 = *(undefined8 **)((long)puVar1 + -0x2b8);
          unaff_x23 = puVar14;
          func_0x00010bf308c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = (undefined8 *)((long)puVar1 + -0x2b0);
          puVar2 = unaff_x23;
          func_0x00010bf52a60();
          fVar17 = (float)uVar16;
          if (puVar2 != (undefined8 *)0x0) {
            unaff_x27 = (undefined8 *)**(undefined8 **)((long)puVar1 + -0x2a0);
            do {
              param_1 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)**(undefined8 **)((long)puVar1 + -0x2a0) != unaff_x27) {
                  _objc_enumerationMutation(unaff_x23);
                }
                unaff_x25 = *(undefined8 **)(*(long *)((long)puVar1 + -0x2a8) + (long)param_1 * 8);
                func_0x00010c0fd620();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = unaff_x26;
                func_0x00010c0fd0e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x26);
                _objc_release(unaff_x25);
                puVar6 = unaff_x24;
                func_0x00010c08fa60();
                fVar17 = (float)uVar16;
                if (puVar6 != (undefined8 *)0x0) {
                  unaff_x22 = unaff_x24;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x24);
                  _objc_release(unaff_x23);
                  unaff_x28 = puVar14;
                  goto LAB_107e6546c;
                }
                _objc_release(unaff_x24);
                param_1 = (undefined8 *)((long)param_1 + 1);
              } while (puVar2 != param_1);
              puVar3 = (undefined8 *)((long)puVar1 + -0x2b0);
              puVar2 = unaff_x23;
              func_0x00010bf52a60();
              fVar17 = (float)uVar16;
            } while (puVar2 != (undefined8 *)0x0);
          }
          _objc_release(unaff_x23);
          _objc_release(puVar14);
        }
        _objc_release(puVar7);
        puVar2 = puVar7;
      }
      goto LAB_107e65a20;
    }
    puVar7 = puVar4;
    func_0x00010bfae120();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bfadfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bfeddc0();
    puVar14 = puVar7;
    if ((int)puVar6 == 1) {
      puVar6 = puVar7;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar6;
      func_0x00010c297e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010bfda400();
      _objc_release(unaff_x23);
      _objc_release(puVar6);
      _objc_release(puVar2);
      if ((int)unaff_x24 == 0) goto LAB_107e6529c;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar14;
      func_0x00010c297e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c0fd0e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x24;
      func_0x00010bfe2ee0();
      unaff_x25 = puVar7;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010c297e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = unaff_x26;
      func_0x00010c0fd0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = unaff_x27;
      func_0x00010c0b5940();
      func_0x000100c4a928();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x28;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
LAB_107e65448:
      _objc_release(unaff_x26);
LAB_107e65450:
      _objc_release(unaff_x25);
    }
    else {
      _objc_release(puVar2);
LAB_107e6529c:
      puVar2 = puVar7;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfeddc0();
      if ((int)puVar6 != 3) {
        _objc_release(puVar2);
LAB_107e6536c:
        _objc_release(puVar7);
        goto LAB_107e65374;
      }
      puVar6 = puVar7;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar6;
      func_0x00010c297f00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010c08fa60();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(puVar6);
      _objc_release(puVar2);
      if (unaff_x25 == (undefined8 *)0x0) goto LAB_107e6536c;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar14;
      func_0x00010c297f00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x24;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_107e65458:
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    param_1 = puVar14;
LAB_107e6546c:
    _objc_release(puVar14);
    puVar2 = puVar7;
LAB_107e65808:
    _objc_release(puVar7);
    puVar14 = unaff_x28;
  }
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70))
  goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  *(undefined8 **)((long)puVar1 + -800) = puVar14;
  *(undefined8 **)((long)puVar1 + -0x318) = unaff_x27;
  *(undefined8 **)((long)puVar1 + -0x310) = unaff_x26;
  *(undefined8 **)((long)puVar1 + -0x308) = unaff_x25;
  *(undefined8 **)((long)puVar1 + -0x300) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x2f8) = unaff_x23;
  *(undefined8 **)((long)puVar1 + -0x2f0) = unaff_x22;
  *(undefined8 **)((long)puVar1 + -0x2e8) = param_1;
  *(undefined8 **)((long)puVar1 + -0x2e0) = puVar2;
  *(undefined8 **)((long)puVar1 + -0x2d8) = puVar4;
  *(undefined1 **)((long)puVar1 + -0x2d0) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined8 *)((long)puVar1 + -0x2c8) = 0x107e65ab4;
  *(undefined8 *)((long)puVar1 + -0x330) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(puVar3);
  puVar14 = puVar7;
  func_0x00010bf529e0();
  puVar2 = puVar5;
  func_0x00010bf529e0();
  unaff_x22 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
  if (puVar14 == puVar2) {
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    *(undefined **)((long)puVar1 + -1000) = PTR___NSConcreteStackBlock_11034bd00;
    fVar17 = -32.0;
    *(undefined8 *)((long)puVar1 + -0x3e0) = 0xc2000000;
    *(code **)((long)puVar1 + -0x3d8) = FUN_107e65d34;
    *(undefined **)((long)puVar1 + -0x3d0) = &UNK_110a0fe30;
    _objc_retain(puVar5);
    *(undefined8 **)((long)puVar1 + -0x3c8) = puVar5;
    _objc_retain(puVar14);
    *(undefined8 **)((long)puVar1 + -0x3c0) = puVar14;
    _objc_retain(unaff_x23);
    *(undefined8 **)((long)puVar1 + -0x3b8) = unaff_x23;
    func_0x00010bf97e80(puVar7);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    if (puVar2 == (undefined8 *)0x0) {
LAB_107e65ca8:
      unaff_x22 = puVar14;
      func_0x00010bf51e00(puVar14);
    }
    else {
      unaff_x24 = puVar3;
      func_0x00010bf529e0();
      puVar2 = puVar5;
      func_0x00010bf529e0();
      if (unaff_x24 != puVar2) goto LAB_107e65ca8;
      unaff_x24 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar16 = 0;
      *(undefined8 *)((long)puVar1 + -0x428) = 0;
      *(undefined8 *)((long)puVar1 + -0x430) = 0;
      *(undefined8 *)((long)puVar1 + -0x418) = 0;
      *(undefined8 *)((long)puVar1 + -0x420) = 0;
      *(undefined8 *)((long)puVar1 + -0x408) = 0;
      *(undefined8 *)((long)puVar1 + -0x410) = 0;
      *(undefined8 *)((long)puVar1 + -0x3f8) = 0;
      *(undefined8 *)((long)puVar1 + -0x400) = 0;
      _objc_retain(puVar3);
      puVar2 = puVar3;
      func_0x00010bf52a60();
      fVar17 = (float)uVar16;
      if (puVar2 != (undefined8 *)0x0) {
        lVar13 = **(long **)((long)puVar1 + -0x420);
        do {
          puVar4 = (undefined8 *)0x0;
          do {
            if (**(long **)((long)puVar1 + -0x420) != lVar13) {
              _objc_enumerationMutation(puVar3);
            }
            puVar6 = unaff_x23;
            func_0x00010c0e00e0(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x24);
            _objc_release(puVar6);
            puVar4 = (undefined8 *)((long)puVar4 + 1);
          } while (puVar2 != puVar4);
          puVar2 = puVar3;
          func_0x00010bf52a60();
          fVar17 = (float)uVar16;
        } while (puVar2 != (undefined8 *)0x0);
      }
      _objc_release(puVar3);
      unaff_x22 = unaff_x24;
      func_0x00010bf51e00(unaff_x24);
      _objc_release(unaff_x24);
    }
    _objc_release(*(undefined8 *)((long)puVar1 + -0x3b8));
    _objc_release(*(undefined8 *)((long)puVar1 + -0x3c0));
    _objc_release(*(undefined8 *)((long)puVar1 + -0x3c8));
    _objc_release(unaff_x23);
    _objc_release(puVar14);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar1 + -0x330)) {
    ___stack_chk_fail();
    *(undefined8 **)((long)puVar1 + -0x470) = unaff_x24;
    *(undefined8 **)((long)puVar1 + -0x468) = unaff_x23;
    *(undefined8 **)((long)puVar1 + -0x460) = puVar14;
    *(undefined8 **)((long)puVar1 + -0x458) = puVar3;
    *(undefined8 **)((long)puVar1 + -0x450) = puVar5;
    *(undefined8 **)((long)puVar1 + -0x448) = puVar7;
    *(undefined1 **)((long)puVar1 + -0x440) = (undefined1 *)((long)puVar1 + -0x2d0);
    *(code **)((long)puVar1 + -0x438) = FUN_107e65d34;
    puVar8 = PTR_PTR_1126aff30;
    func_0x00010c240080(PTR_PTR_1126aff30);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[4];
    func_0x00010c0dfd40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010bf8b160();
    _CMTimeMake((undefined1 *)((long)puVar1 + -0x4b8),(long)(fVar17 * 1000.0),1000);
    uVar16 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + -0x4c8) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar1 + -0x4d0) = uVar16;
    *(undefined8 *)((long)puVar1 + -0x4c0) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake((undefined1 *)((long)puVar1 + -0x4a0),(undefined1 *)((long)puVar1 + -0x4d0),
                     (undefined1 *)((long)puVar1 + -0x4b8));
    func_0x00010c297240(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126aff40;
    _objc_alloc(PTR_PTR_1126aff40);
    uVar16 = uVar9;
    func_0x00010c241220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d3c0(puVar11);
    _objc_release(uVar16);
    func_0x00010befa120(puVar2[5]);
    uVar12 = puVar2[6];
    uVar16 = uVar9;
    func_0x00010c241220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12);
    _objc_release(uVar16);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 107e649e4; end: 107e65d33;  */

/* WARNING: Possible PIC construction at 0x000107e64ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e64c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e64cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e64ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e64cf8) */
/* WARNING: Removing unreachable block (ram,0x000107e64d18) */
/* WARNING: Removing unreachable block (ram,0x000107e64d2c) */
/* WARNING: Removing unreachable block (ram,0x000107e64c0c) */
/* WARNING: Removing unreachable block (ram,0x000107e64ba4) */
/* WARNING: Removing unreachable block (ram,0x000107e64c3c) */
/* WARNING: Removing unreachable block (ram,0x000107e64c48) */
/* WARNING: Removing unreachable block (ram,0x000107e64bd4) */
/* WARNING: Removing unreachable block (ram,0x000107e64efc) */
/* WARNING: Removing unreachable block (ram,0x000107e64f1c) */
/* WARNING: Removing unreachable block (ram,0x000107e64f30) */

void FUN_107e649e4(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long lVar12;
  undefined8 *unaff_x28;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  undefined8 uVar15;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_260;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  puVar2 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    unaff_x22 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
LAB_107e64e08:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
    uVar15 = 0x107e64e48;
    ___stack_chk_fail();
SUB_107e64e48:
    puVar1 = &uStack_3e0;
    puVar6 = &uStack_3e0;
    ppppuVar14 = &pppuStack_200;
    lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_250 = unaff_x28;
    puStack_248 = unaff_x27;
    puStack_240 = unaff_x26;
    puStack_238 = unaff_x25;
    puStack_230 = unaff_x24;
    puStack_228 = unaff_x23;
    puStack_220 = unaff_x22;
    puStack_218 = unaff_x21;
    puStack_210 = unaff_x20;
    puStack_208 = unaff_x19;
    pppuStack_200 = (undefined8 ***)&stack0xfffffffffffffff0;
    uStack_1f8 = uVar15;
    _objc_retain();
    puVar2 = param_4;
    if (puVar13 == (undefined8 *)0x0) {
LAB_107e65084:
      unaff_x22 = (undefined8 *)0x0;
    }
    else {
      param_1 = 0.0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      plStack_398 = (long *)0x0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      puStack_390 = (undefined8 *)0x0;
      unaff_x20 = puVar13;
      func_0x00010bf5ccc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = &uStack_3a0;
      puVar4 = unaff_x20;
      func_0x00010bf52a60();
      if (puVar4 != (undefined8 *)0x0) {
        unaff_x24 = (undefined8 *)*puStack_390;
        unaff_x25 = (undefined8 *)0x0;
        if ((undefined8 *)*puStack_390 != unaff_x24) {
          _objc_enumerationMutation(unaff_x20);
        }
        puVar3 = (undefined8 *)*plStack_398;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = 0x107e64efc;
        puVar1 = &uStack_3e0;
        unaff_x21 = puVar4;
        unaff_x23 = puVar3;
        goto SUB_107e65120;
      }
      _objc_release(unaff_x20);
      puVar4 = puVar13;
      func_0x00010bfdd280();
      if ((int)puVar4 == 0) goto LAB_107e65084;
      uVar15 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      lStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      puStack_3d0 = (undefined8 *)0x0;
      unaff_x21 = puVar13;
      func_0x00010c269920();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = unaff_x21;
      func_0x00010bf8d2c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x21);
      puVar2 = unaff_x20;
      func_0x00010bf52a60();
      param_1 = (float)uVar15;
      if (puVar2 != (undefined8 *)0x0) {
        unaff_x27 = (undefined8 *)*puStack_3d0;
        do {
          unaff_x28 = (undefined8 *)0x0;
          do {
            if ((undefined8 *)*puStack_3d0 != unaff_x27) {
              _objc_enumerationMutation(unaff_x20);
            }
            unaff_x21 = *(undefined8 **)(lStack_3d8 + (long)unaff_x28 * 8);
            unaff_x23 = unaff_x21;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = unaff_x23;
            func_0x00010bf31ca0();
            if ((int)puVar4 == 2) {
              unaff_x24 = unaff_x21;
              func_0x00010beedca0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = unaff_x25;
              func_0x00010c08fa60();
              _objc_release(unaff_x25);
              _objc_release(unaff_x24);
              _objc_release(unaff_x23);
              param_1 = (float)uVar15;
              if (unaff_x26 != (undefined8 *)0x0) {
                func_0x00010beedca0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x23 = unaff_x21;
                func_0x00010c086560();
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = unaff_x23;
                func_0x00010c0b5ac0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x23);
                _objc_release(unaff_x21);
                goto LAB_107e650d0;
              }
            }
            else {
              _objc_release(unaff_x23);
            }
            unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
          } while (puVar2 != unaff_x28);
          puVar2 = unaff_x20;
          puVar6 = &uStack_3e0;
          func_0x00010bf52a60();
          param_1 = (float)uVar15;
          unaff_x21 = (undefined8 *)0x0;
        } while (puVar2 != (undefined8 *)0x0);
      }
      unaff_x22 = (undefined8 *)0x0;
LAB_107e650d0:
      _objc_release(unaff_x20);
      puVar2 = puVar6;
    }
    puVar3 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) goto _objc_autoreleaseReturnValue;
    uVar15 = 0x107e65120;
    ___stack_chk_fail();
  }
  else {
    unaff_x19 = (undefined8 *)PTR_PTR_1126b25c0;
    func_0x00010c0f40e0(PTR_PTR_1126b25c0,param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = unaff_x19;
    func_0x00010bfd4420();
    puVar13 = unaff_x19;
    if ((int)puVar6 != 0) {
      puVar6 = unaff_x19;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010bf0d820();
      _objc_release(puVar6);
      unaff_x21 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        uVar15 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        lStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        puStack_1a0 = (undefined8 *)0x0;
        unaff_x21 = unaff_x19;
        func_0x00010bf0d7e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = unaff_x21;
        func_0x00010bf0d800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x21);
        param_4 = &uStack_1b0;
        puVar6 = unaff_x20;
        func_0x00010bf52a60();
        if (puVar6 != (undefined8 *)0x0) {
          unaff_x27 = (undefined8 *)*puStack_1a0;
          unaff_x21 = puVar6;
          do {
            unaff_x28 = (undefined8 *)0x0;
            do {
              if ((undefined8 *)*puStack_1a0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x20);
              }
              unaff_x24 = *(undefined8 **)(lStack_1a8 + (long)unaff_x28 * 8);
              puVar6 = unaff_x24;
              func_0x00010bf0d0a0();
              if ((int)puVar6 == 0xc) {
                unaff_x23 = unaff_x24;
                func_0x00010c0fd240();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = unaff_x23;
                func_0x00010bfdd220();
                param_1 = (float)uVar15;
                if ((int)puVar6 == 0) {
                  _objc_release(unaff_x23);
                  goto LAB_107e64b1c;
                }
                unaff_x21 = unaff_x23;
                func_0x00010c2683c0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = unaff_x21;
                func_0x00010bfe2ee0();
                unaff_x24 = unaff_x23;
                func_0x00010c2683c0();
                _objc_retainAutoreleasedReturnValue();
                param_3 = unaff_x24;
                func_0x00010c0b5940();
                func_0x000100c4a928();
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = unaff_x25;
                func_0x00010c0b5ac0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x25);
                _objc_release(unaff_x24);
LAB_107e64de8:
                _objc_release(unaff_x21);
                _objc_release(unaff_x23);
                goto LAB_107e64df8;
              }
LAB_107e64b1c:
              puVar6 = unaff_x24;
              func_0x00010bf0d0a0();
              param_1 = (float)uVar15;
              if ((int)puVar6 == 1) {
                unaff_x22 = unaff_x24;
                func_0x00010bf4e080();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = unaff_x22;
                func_0x00010c297e20();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = puVar2;
                func_0x00010c08fa60();
                _objc_release(puVar2);
                _objc_release(unaff_x22);
                unaff_x23 = unaff_x24;
                func_0x00010bf4e080();
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x25 != (undefined8 *)0x0) {
                  unaff_x21 = unaff_x23;
                  func_0x00010c297e20();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x22 = unaff_x21;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_107e64de8;
                }
                unaff_x25 = unaff_x23;
                func_0x00010bf4e840();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = unaff_x25;
                func_0x00010c27f9c0();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = 0x107e64ba4;
                unaff_x26 = puVar13;
                goto SUB_107e64e48;
              }
              unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
            } while (unaff_x21 != unaff_x28);
            param_4 = &uStack_1b0;
            unaff_x21 = unaff_x20;
            func_0x00010bf52a60();
          } while (unaff_x21 != (undefined8 *)0x0);
        }
        _objc_release(unaff_x20);
      }
    }
    param_1 = 0.0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    plStack_1e8 = (long *)0x0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    puStack_1e0 = (undefined8 *)0x0;
    unaff_x20 = unaff_x19;
    FUN_107e639a4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = unaff_x20;
    func_0x00010bf52a60();
    if (puVar6 == (undefined8 *)0x0) {
      unaff_x22 = (undefined8 *)0x0;
      param_4 = puVar2;
LAB_107e64df8:
      _objc_release(unaff_x20);
      _objc_release();
      goto LAB_107e64e08;
    }
    unaff_x24 = (undefined8 *)*puStack_1e0;
    unaff_x25 = (undefined8 *)0x0;
    if ((undefined8 *)*puStack_1e0 != unaff_x24) {
      _objc_enumerationMutation(unaff_x20);
    }
    puVar3 = (undefined8 *)*plStack_1e8;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x107e64cf8;
    puVar1 = &uStack_1f0;
    unaff_x21 = puVar6;
    unaff_x23 = puVar3;
    ppppuVar14 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
SUB_107e65120:
  *(undefined8 **)((long)puVar1 + -0x60) = unaff_x28;
  *(undefined8 **)((long)puVar1 + -0x58) = unaff_x27;
  *(undefined8 **)((long)puVar1 + -0x50) = unaff_x26;
  *(undefined8 **)((long)puVar1 + -0x48) = unaff_x25;
  *(undefined8 **)((long)puVar1 + -0x40) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
  *(undefined8 **)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar1 + -0x20) = unaff_x20;
  *(undefined8 **)((long)puVar1 + -0x18) = puVar13;
  *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar14;
  *(undefined8 *)((long)puVar1 + -8) = uVar15;
  *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar13 = unaff_x28;
  if (puVar3 == (undefined8 *)0x0) {
LAB_107e65a20:
    unaff_x22 = (undefined8 *)0x0;
  }
  else {
    puVar13 = puVar3;
    func_0x00010c0cc820();
    if ((int)puVar13 != 7) {
LAB_107e65374:
      puVar13 = puVar3;
      func_0x00010c0cc820();
      if ((int)puVar13 == 3) {
        puVar6 = puVar3;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar6;
        func_0x00010bfedf40();
        if ((int)puVar13 == 1) {
          puVar13 = puVar6;
          func_0x00010c0fd520();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar13;
          func_0x00010bfda400();
          _objc_release(puVar13);
          if (((ulong)puVar4 & 1) != 0) {
            puVar13 = puVar6;
            func_0x00010c0fd520();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = puVar13;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x23;
            func_0x00010bfe2ee0();
            unaff_x24 = puVar6;
            func_0x00010c0fd520();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            param_3 = unaff_x25;
            func_0x00010c0b5940();
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = unaff_x26;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107e65448;
          }
        }
        _objc_release(puVar6);
      }
      puVar13 = puVar3;
      func_0x00010c0cc820();
      if ((int)puVar13 == 2) {
        unaff_x21 = puVar3;
        func_0x00010bf30500();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = 0;
        *(undefined8 *)((long)puVar1 + -0x228) = 0;
        *(undefined8 *)((long)puVar1 + -0x230) = 0;
        *(undefined8 *)((long)puVar1 + -0x218) = 0;
        *(undefined8 *)((long)puVar1 + -0x220) = 0;
        *(undefined8 *)((long)puVar1 + -0x208) = 0;
        *(undefined8 *)((long)puVar1 + -0x210) = 0;
        *(undefined8 *)((long)puVar1 + -0x1f8) = 0;
        *(undefined8 *)((long)puVar1 + -0x200) = 0;
        *(undefined8 **)((long)puVar1 + -0x2b8) = unaff_x21;
        func_0x00010c0ca840();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = (undefined8 *)((long)puVar1 + -0x230);
        puVar13 = unaff_x21;
        func_0x00010bf52a60();
        param_1 = (float)uVar15;
        if (puVar13 != (undefined8 *)0x0) {
          lVar12 = **(long **)((long)puVar1 + -0x220);
          do {
            unaff_x28 = (undefined8 *)0x0;
            do {
              if (**(long **)((long)puVar1 + -0x220) != lVar12) {
                _objc_enumerationMutation(unaff_x21);
              }
              unaff_x24 = *(undefined8 **)(*(long *)((long)puVar1 + -0x228) + (long)unaff_x28 * 8);
              unaff_x23 = unaff_x24;
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = unaff_x23;
              func_0x00010bf96ee0();
              if ((int)puVar6 == 2) {
                unaff_x25 = unaff_x24;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010c0fce80();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x26;
                func_0x00010bfd7d20();
                _objc_release(unaff_x26);
                _objc_release(unaff_x25);
                _objc_release(unaff_x23);
                param_1 = (float)uVar15;
                if (((ulong)unaff_x27 & 1) != 0) {
                  unaff_x23 = unaff_x24;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x25 = unaff_x23;
                  func_0x00010c0fce80();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x26 = unaff_x25;
                  func_0x00010bfe5ea0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x20 = unaff_x26;
                  func_0x00010bfe2ee0();
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = unaff_x24;
                  func_0x00010c0fce80();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = unaff_x27;
                  func_0x00010bfe5ea0();
                  _objc_retainAutoreleasedReturnValue();
                  param_3 = unaff_x28;
                  func_0x00010c0b5940();
                  func_0x000100c4a928();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x22 = unaff_x20;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x20);
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  _objc_release(unaff_x24);
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x25);
                  _objc_release(unaff_x23);
                  _objc_release(unaff_x21);
                  puVar6 = *(undefined8 **)((long)puVar1 + -0x2b8);
                  goto LAB_107e65808;
                }
              }
              else {
                _objc_release(unaff_x23);
              }
              unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
            } while (puVar13 != unaff_x28);
            puVar2 = (undefined8 *)((long)puVar1 + -0x230);
            puVar13 = unaff_x21;
            func_0x00010bf52a60();
            param_1 = (float)uVar15;
          } while (puVar13 != (undefined8 *)0x0);
        }
        _objc_release(unaff_x21);
        _objc_release(*(undefined8 *)((long)puVar1 + -0x2b8));
      }
      unaff_x20 = puVar3;
      func_0x00010c08eee0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = unaff_x20;
      func_0x00010c08fa60();
      _objc_release(unaff_x20);
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      unaff_x21 = (undefined8 *)0x0;
      puVar13 = unaff_x28;
      if (puVar4 != (undefined8 *)0x0) {
        unaff_x21 = puVar3;
        func_0x00010c08eee0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = unaff_x21;
        func_0x00010bdc1900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x21);
        param_3 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class();
        puVar4 = puVar6;
        _objc_opt_isKindOfClass();
        if (((ulong)puVar4 & 1) != 0) {
          unaff_x21 = (undefined8 *)PTR_PTR_1126bcdd8;
          _objc_alloc();
          puVar2 = puVar6;
          func_0x00010c0206e0();
          puVar13 = unaff_x21;
          func_0x00010bfaebe0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar13;
          func_0x00010c297ca0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf1f3c0();
          unaff_x23 = unaff_x21;
          if (((ulong)puVar5 & 1) == 0) {
            _objc_release(puVar4);
            _objc_release(puVar13);
          }
          else {
            unaff_x24 = unaff_x21;
            func_0x00010bfaebe0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c297c00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c15a3e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010c08fa60();
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            _objc_release(puVar4);
            _objc_release(puVar13);
            if (unaff_x27 != (undefined8 *)0x0) {
              func_0x00010bfaebe0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = unaff_x23;
              func_0x00010c297c00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010c15a3e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = unaff_x25;
              func_0x00010c0b5ac0();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = unaff_x21;
              goto LAB_107e65450;
            }
          }
          uVar15 = 0;
          *(undefined8 *)((long)puVar1 + -0x248) = 0;
          *(undefined8 *)((long)puVar1 + -0x250) = 0;
          *(undefined8 *)((long)puVar1 + -0x238) = 0;
          *(undefined8 *)((long)puVar1 + -0x240) = 0;
          *(undefined8 *)((long)puVar1 + -0x268) = 0;
          *(undefined8 *)((long)puVar1 + -0x270) = 0;
          *(undefined8 *)((long)puVar1 + -600) = 0;
          *(undefined8 *)((long)puVar1 + -0x260) = 0;
          *(undefined8 **)((long)puVar1 + -0x2b8) = unaff_x21;
          func_0x00010c2553e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = (undefined8 *)((long)puVar1 + -0x270);
          puVar13 = unaff_x23;
          func_0x00010bf52a60();
          if (puVar13 != (undefined8 *)0x0) {
            unaff_x28 = (undefined8 *)**(undefined8 **)((long)puVar1 + -0x260);
            do {
              unaff_x21 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)**(undefined8 **)((long)puVar1 + -0x260) != unaff_x28) {
                  _objc_enumerationMutation(unaff_x23);
                }
                unaff_x25 = *(undefined8 **)(*(long *)((long)puVar1 + -0x268) + (long)unaff_x21 * 8)
                ;
                func_0x00010bfedfc0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010c297b40();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x26;
                func_0x00010c297b40();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = unaff_x27;
                func_0x00010c297e20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x25);
                puVar4 = unaff_x24;
                func_0x00010c08fa60();
                param_1 = (float)uVar15;
                if (puVar4 != (undefined8 *)0x0) {
                  unaff_x22 = unaff_x24;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = *(undefined8 **)((long)puVar1 + -0x2b8);
                  goto LAB_107e65458;
                }
                _objc_release(unaff_x24);
                unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
              } while (puVar13 != unaff_x21);
              puVar2 = (undefined8 *)((long)puVar1 + -0x270);
              puVar13 = unaff_x23;
              func_0x00010bf52a60();
            } while (puVar13 != (undefined8 *)0x0);
          }
          _objc_release(unaff_x23);
          uVar15 = 0;
          *(undefined8 *)((long)puVar1 + -0x288) = 0;
          *(undefined8 *)((long)puVar1 + -0x290) = 0;
          *(undefined8 *)((long)puVar1 + -0x278) = 0;
          *(undefined8 *)((long)puVar1 + -0x280) = 0;
          *(undefined8 *)((long)puVar1 + -0x2a8) = 0;
          *(undefined8 *)((long)puVar1 + -0x2b0) = 0;
          *(undefined8 *)((long)puVar1 + -0x298) = 0;
          *(undefined8 *)((long)puVar1 + -0x2a0) = 0;
          puVar13 = *(undefined8 **)((long)puVar1 + -0x2b8);
          unaff_x23 = puVar13;
          func_0x00010bf308c0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = (undefined8 *)((long)puVar1 + -0x2b0);
          puVar4 = unaff_x23;
          func_0x00010bf52a60();
          param_1 = (float)uVar15;
          if (puVar4 != (undefined8 *)0x0) {
            unaff_x27 = (undefined8 *)**(undefined8 **)((long)puVar1 + -0x2a0);
            do {
              unaff_x21 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)**(undefined8 **)((long)puVar1 + -0x2a0) != unaff_x27) {
                  _objc_enumerationMutation(unaff_x23);
                }
                unaff_x25 = *(undefined8 **)(*(long *)((long)puVar1 + -0x2a8) + (long)unaff_x21 * 8)
                ;
                func_0x00010c0fd620();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = unaff_x26;
                func_0x00010c0fd0e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x26);
                _objc_release(unaff_x25);
                puVar5 = unaff_x24;
                func_0x00010c08fa60();
                param_1 = (float)uVar15;
                if (puVar5 != (undefined8 *)0x0) {
                  unaff_x22 = unaff_x24;
                  func_0x00010c0b5ac0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x24);
                  _objc_release(unaff_x23);
                  unaff_x28 = puVar13;
                  goto LAB_107e6546c;
                }
                _objc_release(unaff_x24);
                unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
              } while (puVar4 != unaff_x21);
              puVar2 = (undefined8 *)((long)puVar1 + -0x2b0);
              puVar4 = unaff_x23;
              func_0x00010bf52a60();
              param_1 = (float)uVar15;
            } while (puVar4 != (undefined8 *)0x0);
          }
          _objc_release(unaff_x23);
          _objc_release(puVar13);
        }
        _objc_release(puVar6);
        unaff_x20 = puVar6;
      }
      goto LAB_107e65a20;
    }
    puVar6 = puVar3;
    func_0x00010bfae120();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bfadfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfeddc0();
    puVar13 = puVar6;
    if ((int)puVar5 == 1) {
      puVar5 = puVar6;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar5;
      func_0x00010c297e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010bfda400();
      _objc_release(unaff_x23);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if ((int)unaff_x24 == 0) goto LAB_107e6529c;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar13;
      func_0x00010c297e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c0fd0e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x24;
      func_0x00010bfe2ee0();
      unaff_x25 = puVar6;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010c297e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = unaff_x26;
      func_0x00010c0fd0e0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = unaff_x27;
      func_0x00010c0b5940();
      func_0x000100c4a928();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x28;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
LAB_107e65448:
      _objc_release(unaff_x26);
LAB_107e65450:
      _objc_release(unaff_x25);
    }
    else {
      _objc_release(puVar4);
LAB_107e6529c:
      puVar4 = puVar6;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfeddc0();
      if ((int)puVar5 != 3) {
        _objc_release(puVar4);
LAB_107e6536c:
        _objc_release(puVar6);
        goto LAB_107e65374;
      }
      puVar5 = puVar6;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar5;
      func_0x00010c297f00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010c08fa60();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (unaff_x25 == (undefined8 *)0x0) goto LAB_107e6536c;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar13;
      func_0x00010c297f00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x24;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_107e65458:
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    unaff_x21 = puVar13;
LAB_107e6546c:
    _objc_release(puVar13);
    unaff_x20 = puVar6;
LAB_107e65808:
    _objc_release(puVar6);
    puVar13 = unaff_x28;
  }
  puVar6 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70))
  goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  *(undefined8 **)((long)puVar1 + -800) = puVar13;
  *(undefined8 **)((long)puVar1 + -0x318) = unaff_x27;
  *(undefined8 **)((long)puVar1 + -0x310) = unaff_x26;
  *(undefined8 **)((long)puVar1 + -0x308) = unaff_x25;
  *(undefined8 **)((long)puVar1 + -0x300) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x2f8) = unaff_x23;
  *(undefined8 **)((long)puVar1 + -0x2f0) = unaff_x22;
  *(undefined8 **)((long)puVar1 + -0x2e8) = unaff_x21;
  *(undefined8 **)((long)puVar1 + -0x2e0) = unaff_x20;
  *(undefined8 **)((long)puVar1 + -0x2d8) = puVar3;
  *(undefined1 **)((long)puVar1 + -0x2d0) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined8 *)((long)puVar1 + -0x2c8) = 0x107e65ab4;
  *(undefined8 *)((long)puVar1 + -0x330) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(puVar2);
  puVar13 = puVar6;
  func_0x00010bf529e0();
  puVar4 = param_3;
  func_0x00010bf529e0();
  unaff_x22 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
  if (puVar13 == puVar4) {
    puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    *(undefined **)((long)puVar1 + -1000) = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = -32.0;
    *(undefined8 *)((long)puVar1 + -0x3e0) = 0xc2000000;
    *(code **)((long)puVar1 + -0x3d8) = FUN_107e65d34;
    *(undefined **)((long)puVar1 + -0x3d0) = &UNK_110a0fe30;
    _objc_retain(param_3);
    *(undefined8 **)((long)puVar1 + -0x3c8) = param_3;
    _objc_retain(puVar13);
    *(undefined8 **)((long)puVar1 + -0x3c0) = puVar13;
    _objc_retain(unaff_x23);
    *(undefined8 **)((long)puVar1 + -0x3b8) = unaff_x23;
    func_0x00010bf97e80(puVar6);
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 == (undefined8 *)0x0) {
LAB_107e65ca8:
      unaff_x22 = puVar13;
      func_0x00010bf51e00(puVar13);
    }
    else {
      unaff_x24 = puVar2;
      func_0x00010bf529e0();
      puVar4 = param_3;
      func_0x00010bf529e0();
      if (unaff_x24 != puVar4) goto LAB_107e65ca8;
      unaff_x24 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar15 = 0;
      *(undefined8 *)((long)puVar1 + -0x428) = 0;
      *(undefined8 *)((long)puVar1 + -0x430) = 0;
      *(undefined8 *)((long)puVar1 + -0x418) = 0;
      *(undefined8 *)((long)puVar1 + -0x420) = 0;
      *(undefined8 *)((long)puVar1 + -0x408) = 0;
      *(undefined8 *)((long)puVar1 + -0x410) = 0;
      *(undefined8 *)((long)puVar1 + -0x3f8) = 0;
      *(undefined8 *)((long)puVar1 + -0x400) = 0;
      _objc_retain(puVar2);
      puVar4 = puVar2;
      func_0x00010bf52a60();
      param_1 = (float)uVar15;
      if (puVar4 != (undefined8 *)0x0) {
        lVar12 = **(long **)((long)puVar1 + -0x420);
        do {
          puVar3 = (undefined8 *)0x0;
          do {
            if (**(long **)((long)puVar1 + -0x420) != lVar12) {
              _objc_enumerationMutation(puVar2);
            }
            puVar5 = unaff_x23;
            func_0x00010c0e00e0(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x24);
            _objc_release(puVar5);
            puVar3 = (undefined8 *)((long)puVar3 + 1);
          } while (puVar4 != puVar3);
          puVar4 = puVar2;
          func_0x00010bf52a60();
          param_1 = (float)uVar15;
        } while (puVar4 != (undefined8 *)0x0);
      }
      _objc_release(puVar2);
      unaff_x22 = unaff_x24;
      func_0x00010bf51e00(unaff_x24);
      _objc_release(unaff_x24);
    }
    _objc_release(*(undefined8 *)((long)puVar1 + -0x3b8));
    _objc_release(*(undefined8 *)((long)puVar1 + -0x3c0));
    _objc_release(*(undefined8 *)((long)puVar1 + -0x3c8));
    _objc_release(unaff_x23);
    _objc_release(puVar13);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar1 + -0x330)) {
    ___stack_chk_fail();
    *(undefined8 **)((long)puVar1 + -0x470) = unaff_x24;
    *(undefined8 **)((long)puVar1 + -0x468) = unaff_x23;
    *(undefined8 **)((long)puVar1 + -0x460) = puVar13;
    *(undefined8 **)((long)puVar1 + -0x458) = puVar2;
    *(undefined8 **)((long)puVar1 + -0x450) = param_3;
    *(undefined8 **)((long)puVar1 + -0x448) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x440) = (undefined1 *)((long)puVar1 + -0x2d0);
    *(code **)((long)puVar1 + -0x438) = FUN_107e65d34;
    puVar7 = PTR_PTR_1126aff30;
    func_0x00010c240080(PTR_PTR_1126aff30);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar4[4];
    func_0x00010c0dfd40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010bf8b160();
    _CMTimeMake((undefined1 *)((long)puVar1 + -0x4b8),(long)(param_1 * 1000.0),1000);
    uVar15 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + -0x4c8) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar1 + -0x4d0) = uVar15;
    *(undefined8 *)((long)puVar1 + -0x4c0) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake((undefined1 *)((long)puVar1 + -0x4a0),(undefined1 *)((long)puVar1 + -0x4d0),
                     (undefined1 *)((long)puVar1 + -0x4b8));
    func_0x00010c297240(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126aff40;
    _objc_alloc(PTR_PTR_1126aff40);
    uVar15 = uVar8;
    func_0x00010c241220(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d3c0(puVar10);
    _objc_release(uVar15);
    func_0x00010befa120(puVar4[5]);
    uVar11 = puVar4[6];
    uVar15 = uVar8;
    func_0x00010c241220(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11);
    _objc_release(uVar15);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 107e65d34; end: 107e65eaf;  */

void FUN_107e65d34(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [48];
  
  puVar1 = PTR_PTR_1126aff30;
  func_0x00010c240080(PTR_PTR_1126aff30,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010bf8b160();
  _CMTimeMake(auStack_88,(long)(param_1 * 1000.0),1000);
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(auStack_70,&uStack_a0,auStack_88);
  func_0x00010c297240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aff40;
  _objc_alloc(PTR_PTR_1126aff40);
  uVar5 = uVar2;
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d3c0(puVar4);
  _objc_release(uVar5);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x28));
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = uVar2;
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107e65eb0; end: 107e65f6f;  */

void FUN_107e65eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    puVar3 = PTR_PTR_1126bf8d8;
    func_0x00010c0f40e0(PTR_PTR_1126bf8d8,param_2,puVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0 && lStack_38 == 0) {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e65f70; end: 107e66167;  */

ulong FUN_107e65f70(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar7 = param_3, func_0x00010bf529e0(), uVar7 == 0)) {
    uVar7 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = param_1;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c0dfd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar3);
        _objc_release(puVar2);
        uVar7 = uVar7 + 1;
        uVar3 = param_1;
        func_0x00010bf529e0();
      } while (uVar7 < uVar3);
    }
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      uVar7 = param_3;
      func_0x00010bf529e0(param_3);
    }
    else {
      puVar2 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010bf529e0();
      if (uVar7 != 0) {
        uVar7 = 0;
        do {
          uVar3 = param_3;
          func_0x00010c0dfd40(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c067ec0();
          puVar6 = puVar2;
          func_0x00010c067ec0();
          _objc_release(puVar4);
          _objc_release(uVar3);
          if ((int)puVar6 < (int)puVar5) goto LAB_107e66108;
          uVar7 = uVar7 + 1;
          uVar3 = param_3;
          func_0x00010bf529e0();
        } while (uVar7 < uVar3);
      }
      uVar7 = param_3;
      func_0x00010bf529e0(param_3);
LAB_107e66108:
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 107e66168; end: 107e662db;  */

undefined *
FUN_107e66168(int param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = param_2;
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126af4d0;
  if (puVar4 == (undefined *)0x0) {
    if (param_1 != 2) {
      puVar4 = (undefined *)0x0;
      goto LAB_107e66298;
    }
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = puVar3;
    func_0x00010bf529e0(puVar3);
  }
  else {
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar1 = puVar3;
    func_0x00010c0b8600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    FUN_107e65f70(param_2,param_3,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
LAB_107e66298:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 107e662dc; end: 107e6635f;  */

void FUN_107e662dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_2;
  if (lVar2 == 0) {
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf8b0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107e66360; end: 107e6640f;  */

void FUN_107e66360(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_1 != 0) {
    _objc_retain();
    func_0x00010bf99260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010bf436e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107e66410; end: 107e6669b;  */

void FUN_107e66410(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_1 != 0) {
    if (param_2 < 3) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = (undefined *)0x0;
    }
    puVar1 = puVar2;
    func_0x00010bf3ec40(puVar2);
    FUN_107e66360(param_1,puVar1,param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e6669c; end: 107e666a3;  */

void FUN_107e6669c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_externalId_1125c51f8);
  return;
}



/* Entry: 107e666a4; end: 107e666ef;  */

undefined8 FUN_107e666a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107e666f0; end: 107e66b37;  */

void FUN_107e666f0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_1;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126af4d0;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar2 = puVar4;
    func_0x00010bf529e0();
    puVar5 = param_1;
    func_0x00010bf529e0();
    if (puVar2 == puVar5) {
      _dispatch_group_create();
      puStack_120 = &uStack_128;
      uStack_128 = 0;
      uStack_118 = 0x2020000000;
      uStack_110 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      _objc_retain(puVar4);
      puVar2 = puVar4;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        lVar9 = *plStack_160;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_160 != lVar9) {
              _objc_enumerationMutation(puVar4);
            }
            _dispatch_group_enter(puVar5);
            uVar3 = param_3;
            func_0x00010c269d40(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126bf788;
            _objc_alloc(PTR_PTR_1126bf788);
            func_0x00010c017ba0();
            uVar7 = param_5;
            func_0x00010c11de00(param_5);
            _objc_retainAutoreleasedReturnValue();
            puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_198 = 0xc2000000;
            pcStack_190 = FUN_107e66b38;
            puStack_188 = &UNK_11093a528;
            puStack_178 = &uStack_128;
            _objc_retain(puVar5);
            puStack_180 = puVar5;
            func_0x00010c135a60(uVar3);
            _objc_release(uVar7);
            _objc_release(puVar6);
            _objc_release(uVar3);
            _objc_release(puStack_180);
            puVar8 = puVar8 + 1;
          } while (puVar2 != puVar8);
          puVar2 = puVar4;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      puVar8 = PTR_PTR_1126ae560;
      _objc_opt_new();
      uVar3 = param_5;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1e0 = 0xc2000000;
      pcStack_1d8 = FUN_107e66b74;
      puStack_1d0 = &UNK_1108ae2f0;
      puStack_1a8 = &uStack_128;
      _objc_retain(puVar8);
      puStack_1c8 = puVar8;
      _objc_retain(param_4);
      uStack_1c0 = param_4;
      _objc_retain(puVar4);
      puStack_1b8 = puVar4;
      _objc_retain(param_1);
      puStack_1b0 = param_1;
      func_0x000100bc0718(puVar5,uVar3,&puStack_1e8);
      _objc_release(uVar3);
      puVar2 = puVar8;
      func_0x00010bfbc3e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_1b0);
      _objc_release(puStack_1b8);
      _objc_release(uStack_1c0);
      _objc_release(puStack_1c8);
      _objc_release(puVar8);
      __Block_object_dispose(&uStack_128,8);
      _objc_release(puVar5);
    }
    else {
      puVar2 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  iVar1 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  func_0x00010c0719c0();
  if (iVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e66b38; end: 107e66b73;  */

void FUN_107e66b38(long param_1,int param_2)

{
  func_0x00010c0719c0();
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e66b74; end: 107e66d5f;  */

/* WARNING: Possible PIC construction at 0x000107e66d14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e66d18) */
/* WARNING: Removing unreachable block (ram,0x000107e66d38) */

undefined8 FUN_107e66b74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      ___stack_chk_fail();
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_2;
      func_0x00010c0720c0();
      _objc_release(param_2);
      return uVar2;
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bfb2040(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithValue__1125ae900,puVar3);
  return uVar2;
}



/* Entry: 107e66d60; end: 107e66da7;  */

undefined8 FUN_107e66d60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107e66da8; end: 107e6734b;  */

void FUN_107e66da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_15);
  _objc_retain(param_8);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_13;
  func_0x00010bf90fc0();
  _objc_release(param_13);
  if ((int)uVar1 == 0) {
    puVar2 = PTR_PTR_1126bf820;
    _objc_alloc();
    uVar1 = param_2;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    FUN_107e66168(param_6,param_9,param_8,param_14,param_2);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bfa3220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bfa34a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c046fa0(puVar2);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar1 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c14ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_15);
    _objc_retain(param_18);
    _objc_retain(param_17);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(param_18);
    uVar1 = param_17;
  }
  else {
    puVar2 = PTR_PTR_1126bf810;
    _objc_alloc();
    func_0x00010c0066e0();
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar1 = param_12;
    func_0x00010c269d40(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar4 = uVar1;
    func_0x00010c14aa60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_retain(param_14);
    _objc_retain(param_18);
    _objc_retain(param_17);
    func_0x00010c297260(uVar4);
    _objc_release(param_15);
    _objc_release(param_14);
    _objc_release(param_17);
    uVar1 = param_18;
  }
  _objc_release(uVar1);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  return;
}



/* Entry: 107e6734c; end: 107e674cf;  */

void FUN_107e6734c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af4c0;
  if (param_3 == 0) {
    uVar3 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126af4d0;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126bf818;
    _objc_alloc(PTR_PTR_1126bf818);
    uVar3 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0172c0(puVar5);
    _objc_release(uVar1);
    _objc_release(uVar3);
    func_0x000107e66564(*(undefined8 *)(param_1 + 0x20),puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    FUN_107e66360(*(undefined8 *)(param_1 + 0x20),0xb,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e674d0; end: 107e675bb;  */

void FUN_107e674d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e675bc; end: 107e675d3;  */

void FUN_107e675bc(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  lVar2 = *(long *)(param_1 + 0x28);
  if ((lVar2 != 0) && (param_2 != 0)) {
    _objc_retain();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar2);
    _objc_release(puVar1);
    func_0x00010bf436e0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107e675d4; end: 107e6770f;  */

void FUN_107e675d4(undefined8 param_1,undefined1 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010bf06ba0(puVar1);
  }
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010bf06ba0(puVar1);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107e67710;
  puStack_60 = &UNK_11084d5f8;
  puStack_58 = puVar1;
  uStack_50 = param_3;
  uStack_48 = param_2;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107e67710; end: 107e67793;  */

void FUN_107e67710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x20),0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e67794; end: 107e6781f;  */

void FUN_107e67794(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_2);
  if (param_1 == 0) {
    func_0x00010bfa01c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(param_2);
  _objc_release(puVar1);
  func_0x00010bf436e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e67820; end: 107e68043;  */

/* WARNING: Possible PIC construction at 0x000107e6790c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e67910) */
/* WARNING: Removing unreachable block (ram,0x000107e67920) */
/* WARNING: Removing unreachable block (ram,0x000107e678f0) */

ulong FUN_107e67820(ulong param_1,undefined **param_2,int param_3,undefined **param_4,long param_5,
                   undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long lStack_340;
  undefined **ppuStack_338;
  ulong uStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_318;
  undefined8 uStack_300;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar17 = param_1;
  func_0x00010bfc6020();
  uVar1 = param_1;
  func_0x00010bfcb520();
  if (param_3 == 0) {
LAB_107e67944:
    ppuVar2 = &PTR____CFConstantStringClassReference_110ec1718;
    lVar12 = 2;
    uVar13 = 0;
    ppuVar3 = param_2;
    func_0x00010c067f00();
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      return (ulong)((int)uVar17 <= (int)ppuVar3 || uVar1 <= uVar17);
    }
    ___stack_chk_fail();
    uVar10 = param_1;
    param_4 = ppuVar11;
    param_2 = ppuVar2;
    param_5 = lVar12;
  }
  else {
    ppuVar2 = param_4;
    func_0x00010bf3cec0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 0x10;
    ppuVar3 = ppuVar2;
    func_0x00010bf52a60();
    uVar10 = uRam0000000000000000;
    if (ppuVar3 == (undefined **)0x0) {
      _objc_release(ppuVar2);
      goto LAB_107e67944;
    }
  }
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x000108ec1274();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_2;
  func_0x00010c13f4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppuVar3 = param_4;
  func_0x00010bf3cf00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  if (ppuVar4 == (undefined **)0x0) {
    uVar17 = 0;
    goto LAB_107e67d90;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  uVar13 = 0x10;
  ppuVar3 = ppuVar2;
  func_0x00010bf52a60();
  uVar17 = uRam0000000000000000;
  while (lVar12 = param_5, ppuVar3 != (undefined **)0x0) {
    ppuVar16 = (undefined **)0x0;
    do {
      if (uRam0000000000000000 != uVar17) {
        _objc_enumerationMutation(ppuVar2);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuVar18 = *(undefined ***)((long)ppuVar16 * 8);
      func_0x00010bf98940(ppuVar18);
      func_0x00010c0df880(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf98940(ppuVar18);
      func_0x00010c0df880();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar15;
      func_0x00010c067ec0();
      _objc_release(ppuVar15);
      _objc_release(puVar6);
      ppuVar15 = ppuVar18;
      func_0x00010c0c2c00();
      ppuStack_328 = ppuVar2;
      if (ppuVar15 <= (undefined **)(long)(int)ppuVar7) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        if (lVar12 == 0) goto LAB_107e67d74;
        lVar9 = lVar12;
        func_0x00010c0c8b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf98940();
        func_0x00010b5f34d4(lVar9);
        goto LAB_107e67d40;
      }
      ppuVar16 = (undefined **)((long)ppuVar16 + 1);
    } while (ppuVar3 != ppuVar16);
    uVar13 = 0x10;
    ppuVar3 = ppuVar2;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar2);
  uStack_300 = 0;
  uStack_318 = 0;
  _objc_retain(ppuVar4);
  uVar13 = 0x10;
  ppuVar16 = ppuVar4;
  func_0x00010bf52a60();
  uVar17 = uRam0000000000000000;
  ppuVar3 = ppuVar4;
  if (ppuVar16 != (undefined **)0x0) {
LAB_107e67c0c:
    ppuVar15 = (undefined **)0x0;
LAB_107e67c10:
    if (uRam0000000000000000 != uVar17) {
      _objc_enumerationMutation(ppuVar4);
    }
    ppuVar18 = *(undefined ***)((long)ppuVar15 * 8);
    puVar6 = puVar5;
    func_0x00010bf4b900();
    if (((ulong)puVar6 & 1) != 0) goto LAB_107e67c70;
    ppuVar7 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c067ec0();
    _objc_release(ppuVar7);
    if ((uint)ppuVar8 < 3) goto LAB_107e67c70;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 != 0) {
      lVar9 = lVar12;
      func_0x00010c0c8b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010b5f34d4(lVar9);
LAB_107e67d40:
      _objc_release(lVar9);
      ppuVar11 = ppuVar18;
    }
LAB_107e67d74:
    _objc_release(lVar12);
    uVar17 = 1;
    goto LAB_107e67d80;
  }
  uVar17 = 0;
  goto LAB_107e67d80;
LAB_107e67c70:
  ppuVar15 = (undefined **)((long)ppuVar15 + 1);
  if (ppuVar16 == ppuVar15) goto code_r0x000107e67c7c;
  goto LAB_107e67c10;
code_r0x000107e67c7c:
  uVar13 = 0x10;
  ppuVar16 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar16 == (undefined **)0x0) goto code_r0x000107e67c98;
  goto LAB_107e67c0c;
code_r0x000107e67c98:
  uVar17 = 0;
LAB_107e67d80:
  _objc_release(ppuVar3);
  _objc_release(puVar5);
  lStack_340 = param_5;
  ppuStack_338 = param_4;
  uStack_330 = uVar10;
LAB_107e67d90:
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(ppuVar11);
    _objc_retain(uVar13);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(lStack_340);
    _objc_retain(ppuStack_338);
    _objc_retain(uStack_330);
    _objc_retain(ppuStack_328);
    _objc_retain(uStack_318);
    _objc_retain(uStack_300);
    _objc_retain(ppuStack_328);
    _objc_retain(uStack_300);
    _objc_retain(uVar13);
    _objc_retain(ppuStack_338);
    _objc_retain(uStack_330);
    _objc_retain(uStack_318);
    _objc_retain(lStack_340);
    _objc_retain(ppuVar11);
    _objc_retain(param_8);
    _objc_retain(uVar10);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(ppuStack_328);
    _objc_release(ppuStack_328);
    _objc_release(uStack_300);
    _objc_release(uVar13);
    _objc_release(ppuStack_338);
    _objc_release(uStack_330);
    _objc_release(uStack_318);
    _objc_release(lStack_340);
    _objc_release(ppuVar11);
    _objc_release(param_8);
    _objc_release(uVar10);
    _objc_release(param_7);
    _objc_release(ppuStack_328);
    _objc_release(uStack_300);
    _objc_release(uVar13);
    _objc_release(ppuStack_338);
    _objc_release(uStack_330);
    _objc_release(uStack_318);
    _objc_release(lStack_340);
    _objc_release(ppuVar11);
    _objc_release(param_8);
    _objc_release(uVar10);
    _objc_release(param_7);
    return param_7;
  }
  return uVar17;
}



/* Entry: 107e68044; end: 107e682fb;  */

void FUN_107e68044(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107e682fc;
  puStack_60 = &UNK_110a0fef0;
  lVar3 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uStack_58 = uVar5;
  func_0x00010bfece40(lVar3,param_2,&puStack_78);
  if (lVar3 != 0x7fffffffffffffff) {
    puStack_f8 = puVar2;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_107e6833c;
    puStack_e0 = &UNK_110a0ff40;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_d8 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uStack_d0 = uVar4;
    _objc_retain(uVar5);
    uStack_90 = *(undefined8 *)(param_1 + 0x80);
    uStack_98 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uStack_c8 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uStack_c0 = uVar4;
    _objc_retain(uVar5);
    uStack_80 = *(undefined1 *)(param_1 + 0x88);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uStack_b8 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_b0 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uStack_a8 = uVar5;
    lStack_88 = lVar3;
    _objc_retain(uVar4);
    puStack_188 = puVar2;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_107e686d4;
    puStack_170 = &UNK_110a0ffa0;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_168 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uStack_160 = uVar4;
    _objc_retain(uVar5);
    uStack_110 = *(undefined8 *)(param_1 + 0x80);
    uStack_118 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uStack_158 = uVar5;
    _objc_retain(uVar4);
    uStack_100 = *(undefined1 *)(param_1 + 0x88);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    uStack_150 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    uStack_148 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uStack_140 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uStack_138 = uVar5;
    _objc_retain(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uStack_130 = uVar4;
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    uStack_128 = uVar6;
    lStack_108 = lVar3;
    _objc_retain(uVar5);
    uStack_120 = uVar5;
    func_0x00010c0c0800(uVar1,param_2,&puStack_f8,&puStack_188);
    _objc_release(uStack_120);
    _objc_release(uStack_128);
    _objc_release(uStack_130);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    _objc_release(uStack_148);
    _objc_release(uStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_release(uStack_168);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_58);
  return;
}



/* Entry: 107e682fc; end: 107e6833b;  */

bool FUN_107e682fc(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release();
  return param_2 == lVar1;
}



/* Entry: 107e6833c; end: 107e6868f;  */

ulong FUN_107e6833c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar17 = PTR_PTR_1126bf818;
  _objc_opt_class(PTR_PTR_1126bf818);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar17);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x00010c0c8b00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x60);
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    uVar18 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfc3aa0(uVar7);
    func_0x00010b5f3670(lVar6,uVar15,uVar11,uVar18,uVar7);
    _objc_release(lVar6);
    uVar4 = uVar1;
    func_0x00010bfbcca0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    FUN_107e7774c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    puVar17 = *(undefined **)(param_1 + 0x40);
    uVar2 = *(undefined1 *)(param_1 + 0x78);
    uVar4 = uVar1;
    func_0x00010bfbcca0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_107e67820(uVar15,puVar17,uVar2,uVar4,*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar4);
    uVar14 = (uint)uVar15;
    if (uVar8 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf433a0();
      uVar14 = puVar10 != (undefined *)0xffffffffffffffff & uVar14;
      _objc_release(puVar9);
    }
    if (uVar14 != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa3360();
      _objc_release(uVar15);
    }
    puVar9 = PTR_PTR_1126b60f8;
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0dfd40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar11;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x50));
    _objc_release(puVar9);
    _objc_release(uVar15);
    _objc_release(uVar11);
    lVar16 = *(long *)(param_1 + 0x50);
    _objc_retain(lVar16);
    lVar6 = lVar16;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar16);
        }
        uVar11 = *(undefined8 *)(lVar13 * 8);
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar11;
        func_0x00010c282760();
        _objc_release(uVar11);
        if ((int)uVar15 == 0) {
          _objc_release(lVar16);
          goto LAB_107e6862c;
        }
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    uVar15 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf04920(uVar15);
    puVar17 = *(undefined **)(param_1 + 0x58);
    FUN_107e67794((uint)uVar15 ^ 1,puVar17,uVar1);
LAB_107e6862c:
    _objc_release(uVar8);
  }
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    func_0x00010c154b60(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar17;
    func_0x00010c282760();
    _objc_release(puVar17);
    return (ulong)((int)puVar9 == 2);
  }
  return param_2;
}



/* Entry: 107e68690; end: 107e686d3;  */

bool FUN_107e68690(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c154b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c282760();
  _objc_release(param_2);
  return (int)uVar1 == 2;
}



/* Entry: 107e686d4; end: 107e68b7b;  */

void FUN_107e686d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0c8b00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf3ec40(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfc3aa0(uVar3);
    func_0x00010b5f372c(lVar2,lVar4,uVar6,uVar7,uVar11,uVar3);
    _objc_release(lVar2);
    if (*(char *)(param_1 + 0x88) == '\x01') {
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x00010bfc6000();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010bfc6000();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bfbcca0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar5);
      lVar4 = lVar2;
      func_0x00010c08fa60();
      if ((lVar4 != 0) && (lVar4 = lVar9, func_0x00010c08fa60(), lVar4 != 0)) {
        func_0x00010bf3ec40();
        puStack_120 = &uStack_128;
        uStack_128 = 0;
        uStack_118 = 0x3032000000;
        pcStack_110 = FUN_107e68b7c;
        uStack_108 = 0x107e68b8c;
        uStack_100 = 0;
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar3);
        uVar7 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c11de00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar11);
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain(uVar12);
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar13);
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar14);
        uVar15 = *(undefined8 *)(param_1 + 0x58);
        _objc_retain(uVar15);
        func_0x00010c0f8520(uVar6);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar3);
        __Block_object_dispose(&uStack_128,8);
        _objc_release(uStack_100);
      }
      _objc_release(lVar9);
      _objc_release(lVar2);
    }
    puVar8 = PTR_PTR_1126b60f8;
    plVar10 = (long *)(param_1 + 0x60);
    lVar4 = *plVar10;
    func_0x00010c0dfd40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0(*plVar10);
    _objc_release(puVar8);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar9 = *plVar10;
    _objc_retain(lVar9);
    lVar2 = lVar9;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar9);
        }
        uVar7 = *(undefined8 *)(lVar5 * 8);
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c282760();
        _objc_release(uVar7);
        if ((int)uVar6 == 0) {
          _objc_release(lVar9);
          goto LAB_107e68b0c;
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    FUN_107e67794(0,*(undefined8 *)(param_1 + 0x68),0);
  }
LAB_107e68b0c:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 107e68b7c; end: 107e68b93;  */

void FUN_107e68b7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e68b94; end: 107e68ddf;  */

void FUN_107e68b94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126af4c0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar2,param_2,uVar8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar2;
  _objc_release(uVar8);
  _objc_release(uVar1);
  puVar2 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010bf3cf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    if (puVar3 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x40)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0e00e0(puVar5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067ec0();
    func_0x00010c0df760(puVar2,param_2,(int)puVar7 + 1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x40)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00010c1d0640(puVar4,param_2,puVar5,*(undefined8 *)(param_1 + 0x30));
    puVar2 = PTR_PTR_1126bc830;
    func_0x00010bf35080(PTR_PTR_1126bc830,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ccc0();
    _objc_release(puVar2);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 107e68de0; end: 107e68eff;  */

void FUN_107e68de0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
  FUN_107e7774c(lVar5,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  FUN_107e67820(uVar3,*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x58),
                *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28),
                *(undefined8 *)(param_1 + 0x40));
  uVar6 = (uint)uVar3;
  if (lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf433a0();
    uVar6 = puVar2 != (undefined *)0xffffffffffffffff & uVar6;
    _objc_release(puVar1);
  }
  if (uVar6 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3360();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107e68f00; end: 107e6959f;  */

void FUN_107e68f00(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
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
  puVar14 = param_2;
  puVar19 = param_3;
  puVar15 = param_4;
  _objc_retain(param_2);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = puVar1;
  if ((int)param_4 != 0) {
    func_0x000108ec07b8();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010c095ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    goto LAB_107e694a8;
  }
  func_0x000108ec0230();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x000108ec0484();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar11 = puVar2;
  func_0x00010c095ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = &uStack_1b0;
  puVar15 = auStack_f0;
  param_5 = 0x10;
  puVar12 = puVar11;
  func_0x00010bf52a60();
  if (puVar12 != (undefined8 *)0x0) {
    lVar18 = *plStack_1a0;
    do {
      puVar19 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lVar18) {
          _objc_enumerationMutation(puVar11);
        }
        uVar17 = *(ulong *)(lStack_1a8 + (long)puVar19 * 8);
        uVar13 = uVar17;
        func_0x00010c0deea0();
        if (uVar13 == 3) {
          func_0x00010befa120(puVar4);
        }
        uVar13 = uVar17;
        func_0x00010c0deea0();
        if (uVar13 == 4) {
          func_0x00010befa120(puVar5);
        }
        uVar13 = uVar17;
        func_0x00010c0deea0();
        if (uVar13 == 5) {
          func_0x00010befa120(puVar6);
        }
        uVar13 = uVar17;
        func_0x00010c0deea0();
        if (uVar13 == 6) {
          func_0x00010befa120(puVar7);
        }
        uVar13 = uVar17;
        func_0x00010c0deea0();
        if (uVar13 == 7) {
          func_0x00010befa120(puVar8);
        }
        uVar13 = uVar17;
        func_0x00010c0deea0();
        if (uVar13 == 8) {
          func_0x00010befa120(puVar9);
        }
        func_0x00010c0deea0();
        if (8 < uVar17) {
          func_0x00010befa120(puVar10);
        }
        puVar19 = (undefined8 *)((long)puVar19 + 1);
      } while (puVar12 != puVar19);
      puVar19 = &uStack_1b0;
      puVar15 = auStack_f0;
      param_5 = 0x10;
      puVar12 = puVar11;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined8 *)0x0);
  }
  _objc_release(puVar11);
  if ((int)param_3 != 0) {
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    puVar11 = puVar3;
    func_0x00010c095ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = &uStack_1f0;
    puVar15 = auStack_170;
    param_5 = 0x10;
    puVar12 = puVar11;
    func_0x00010bf52a60();
    if (puVar12 != (undefined8 *)0x0) {
      lVar18 = *plStack_1e0;
      do {
        puVar19 = (undefined8 *)0x0;
        do {
          if (*plStack_1e0 != lVar18) {
            _objc_enumerationMutation(puVar11);
          }
          uVar17 = *(ulong *)(lStack_1e8 + (long)puVar19 * 8);
          uVar13 = uVar17;
          func_0x00010c0deea0();
          if (uVar13 == 3) {
            func_0x00010befa120(puVar4);
          }
          uVar13 = uVar17;
          func_0x00010c0deea0();
          if (uVar13 == 4) {
            func_0x00010befa120(puVar5);
          }
          uVar13 = uVar17;
          func_0x00010c0deea0();
          if (uVar13 == 5) {
            func_0x00010befa120(puVar6);
          }
          uVar13 = uVar17;
          func_0x00010c0deea0();
          if (uVar13 == 6) {
            func_0x00010befa120(puVar7);
          }
          uVar13 = uVar17;
          func_0x00010c0deea0();
          if (uVar13 == 7) {
            func_0x00010befa120(puVar8);
          }
          uVar13 = uVar17;
          func_0x00010c0deea0();
          if (uVar13 == 8) {
            func_0x00010befa120(puVar9);
          }
          func_0x00010c0deea0();
          if (8 < uVar17) {
            func_0x00010befa120(puVar10);
          }
          puVar19 = (undefined8 *)((long)puVar19 + 1);
        } while (puVar12 != puVar19);
        puVar19 = &uStack_1f0;
        puVar15 = auStack_170;
        param_5 = 0x10;
        puVar12 = puVar11;
        func_0x00010bf52a60();
      } while (puVar12 != (undefined8 *)0x0);
    }
    _objc_release(puVar11);
  }
  puVar11 = puVar1;
  if ((long)param_1 < 6) {
    if (param_1 == 3) {
      puVar11 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar1);
    }
    else if (param_1 == 4) {
      puVar11 = puVar5;
      func_0x00010bf51e00();
      _objc_release(puVar1);
    }
    else {
      if (param_1 == 5) {
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        puVar19 = puVar6;
      }
      else {
LAB_107e693c0:
        if (param_1 < 9) goto LAB_107e6946c;
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        puVar19 = puVar10;
      }
LAB_107e69468:
      func_0x00010befa160(puVar1);
    }
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        puVar19 = puVar8;
      }
      else {
        if (param_1 != 8) goto LAB_107e693c0;
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        func_0x00010befa160(puVar1);
        puVar19 = puVar9;
      }
      goto LAB_107e69468;
    }
    func_0x00010befa160(puVar1);
    func_0x00010befa160(puVar1);
    func_0x00010befa160(puVar1);
    puVar19 = puVar7;
    func_0x00010befa160(puVar1);
  }
LAB_107e6946c:
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_107e694a8:
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar11;
  func_0x00010bf529e0();
  if (puVar1 == (undefined8 *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    func_0x00010bf529e0(puVar11);
    _arc4random_uniform();
    puVar1 = puVar11;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126bf8d8;
    _objc_opt_new();
    puVar2 = puVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e400(puVar16);
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar2;
    func_0x00010c1b5f20(puVar16);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar14);
    _objc_retain(puVar19);
    _objc_retain(puVar15);
    _objc_retain(param_5);
    if ((long)param_2 < 0x3e) {
      if (param_2 == (undefined8 *)0x3c) {
        func_0x00010c189ae0(puVar15);
      }
      else if (param_2 == (undefined8 *)0x3d) {
        func_0x00010c189aa0(puVar15);
      }
    }
    else if (param_2 == (undefined8 *)0x3e) {
      func_0x00010c189b00(puVar15);
    }
    else if (param_2 == (undefined8 *)0x43) {
      func_0x00010c26f380(puVar14);
      _objc_retain(puVar14);
      func_0x00010c0f8500(param_5);
      _objc_release(puVar14);
    }
    _objc_release(param_5);
    _objc_release(puVar15);
    _objc_release(puVar19);
    _objc_release(puVar14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 107e695a0; end: 107e696ef;  */

void FUN_107e695a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 < 0x3e) {
    if (param_1 == 0x3c) {
      func_0x00010c189ae0(param_4);
    }
    else if (param_1 == 0x3d) {
      func_0x00010c189aa0(param_4);
    }
  }
  else if (param_1 == 0x3e) {
    func_0x00010c189b00(param_4);
  }
  else if (param_1 == 0x43) {
    func_0x00010c26f380(param_2);
    _objc_retain(param_2);
    func_0x00010c0f8500(param_5);
    _objc_release(param_2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107e696f0; end: 107e6973f;  */

void FUN_107e696f0(double param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c26f320(uVar2);
  FUN_107e6bec8(param_3,uVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e69740; end: 107e69913;  */

undefined *
FUN_107e69740(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010c0c7f80();
  if (lVar1 == 10) {
    lVar1 = param_2;
    func_0x00010c124e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(param_3);
    _objc_release(lVar1);
    iVar7 = (int)(param_1 / 31536000.0);
  }
  else {
    iVar7 = 0;
  }
  lVar1 = param_2;
  func_0x00010c0c7f80();
  FUN_107e69914();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x1;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0c7f80();
    puVar6 = (undefined *)0x1;
    if (lVar2 < 9) {
      if (lVar2 != 7) {
        if (lVar2 != 8) goto LAB_107e698e0;
        puVar6 = (undefined *)0x3;
      }
    }
    else if (lVar2 == 9) {
      puVar6 = (undefined *)0x18;
    }
    else {
      if (lVar2 != 10) goto LAB_107e698e0;
      if (iVar7 - 1U < 6) {
        puVar6 = *(undefined **)(&UNK_10dee7f20 + (ulong)(iVar7 - 1U) * 8);
      }
      else {
        puVar6 = (undefined *)0x7fffffffffffffff;
        if (iVar7 - 7U < 2) {
          puVar6 = (undefined *)0x1;
        }
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf44660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf65700();
    puVar6 = (undefined *)
             (ulong)((puVar5 < (undefined *)0x8000000000000000 && puVar6 <= puVar5) &&
                    ((undefined *)0x7fffffffffffffff < puVar5 || puVar5 != puVar6));
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
LAB_107e698e0:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar6;
}



/* Entry: 107e69914; end: 107e69aff;  */

void FUN_107e69914(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = (undefined *)0x0;
  if (param_1 < 9) {
    if (param_1 == 7) {
      puVar2 = param_3;
      func_0x00010bf65020(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 8) {
      puVar2 = param_3;
      func_0x00010bf64fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 == 9) {
    puVar2 = param_3;
    func_0x00010bf65040(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 10) {
    uVar1 = param_4;
    FUN_107e6be68(param_4,param_2);
    if ((long)uVar1 < 1) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0((double)uVar1,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e69b00; end: 107e69bbf;  */

void FUN_107e69b00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    puVar3 = PTR_PTR_1126bf7e8;
    func_0x00010c0f40e0(PTR_PTR_1126bf7e8,param_2,puVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0 && lStack_38 == 0) {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e69bc0; end: 107e69c2b;  */

undefined8 FUN_107e69bc0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  func_0x00010bf4c440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf977c0();
  _objc_release(param_1);
  uVar2 = (uint)uVar1;
  if ((uVar2 < 0x3c) || (((uVar2 - 0x3f < 0x16 && (uVar2 - 0x3f != 4)) || (uVar2 == 0xffffd8f1)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107e69c2c; end: 107e6a0db;  */

void FUN_107e69c2c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  func_0x000108ec18d8();
  if ((param_2 & 1) == 0) {
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_6);
    _objc_retain(param_14);
    _objc_retain(param_15);
    _objc_retain(param_4);
    _objc_retain(param_1);
    _objc_retain(param_11);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_5);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_11);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_15);
    _objc_release(param_14);
    _objc_release(param_6);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 107e6a0dc; end: 107e6a1a7;  */

void FUN_107e6a0dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e6a1a8; end: 107e6a2f7;  */

void FUN_107e6a1a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0c8b00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f2d08();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e6a2f8; end: 107e6a3c3;  */

undefined8 FUN_107e6a2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bf33680();
  if ((int)uVar1 == 0x31) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf33680();
    if ((int)uVar1 == 0x31) {
      uVar3 = 1;
    }
    else {
      uVar1 = param_2;
      func_0x00010c113c80(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c113c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf433a0(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107e6a3c4; end: 107e6a66b;  */

ulong FUN_107e6a3c4(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain();
  func_0x00010bf3cf00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar2 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar15 = *plStack_1b0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1b0 != lVar15) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        lVar5 = lVar4;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          lVar16 = *plStack_1f0;
          do {
            lVar17 = 0;
            do {
              if (*plStack_1f0 != lVar16) {
                _objc_enumerationMutation(lVar5);
              }
              func_0x00010c067ec0(*(undefined8 *)(lStack_1f8 + lVar17 * 8));
              lVar17 = lVar17 + 1;
            } while (lVar6 != lVar17);
            lVar6 = lVar5;
            func_0x00010bf52a60();
          } while (lVar6 != 0);
        }
        _objc_release(lVar5);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar7);
        _objc_release(lVar4);
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar3);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_107e6a66c;
  puStack_210 = &UNK_110a10110;
  puStack_208 = puVar1;
  _objc_retain(puVar1);
  ppuVar13 = &puStack_228;
  uVar14 = param_1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_208);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_retain(ppuVar13);
    func_0x00010c0844e0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c067ec0();
    _objc_release(uVar9);
    ppuVar11 = ppuVar13;
    func_0x00010c0844e0(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar12;
    func_0x00010c067ec0();
    _objc_release(uVar12);
    uVar14 = (ulong)((int)uVar9 < (int)uVar10);
    if ((int)uVar10 < (int)uVar9) {
      uVar14 = 0xffffffffffffffff;
    }
    _objc_release(ppuVar11);
    _objc_release(lVar8);
    return uVar14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return uVar14;
}



/* Entry: 107e6a66c; end: 107e6a747;  */

ulong FUN_107e6a66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c067ec0();
  _objc_release(uVar3);
  uVar5 = (ulong)((int)uVar4 < (int)uVar2);
  if ((int)uVar2 < (int)uVar4) {
    uVar5 = 0xffffffffffffffff;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 107e6a748; end: 107e6a897;  */

undefined * FUN_107e6a748(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [48];
  long lStack_198;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  dVar16 = 0.0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      puVar11 = (undefined *)0x1;
LAB_107e6a848:
      _objc_release(param_1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return puVar11;
      }
      ___stack_chk_fail();
      uVar9 = param_2;
      _objc_retain(param_2);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      lStack_198 = 0;
      func_0x00010c2bda80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lStack_198;
      _objc_retain(lStack_198);
      _objc_release(uVar9);
      puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar15 = (undefined *)0x0;
      if (lVar2 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e09658;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e09658);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        func_0x00010bf8b160(*(undefined8 *)(param_1 + 0x28));
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        dVar17 = 5.0;
        if (5.0 <= dVar16) {
          dVar17 = dVar16;
        }
        _CMTimeMake(auStack_1e0,(long)(dVar17 * 1000.0),1000);
        uStack_1f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_200 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_1f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        _CMTimeRangeMake(auStack_1c8,&uStack_200,auStack_1e0);
        func_0x00010c297240(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126aff30;
        func_0x00010bfe94a0(PTR_PTR_1126aff30);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126aff28;
        func_0x00010bf2a9a0(PTR_PTR_1126aff28);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR_PTR_1126aff40;
        _objc_alloc(PTR_PTR_1126aff40);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c09da80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01d3c0(puVar15);
        _objc_release(uVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar11);
      }
      _objc_release(uVar12);
      _objc_release(lVar2);
      _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
      return puVar15;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar13 = *(ulong *)(lVar14 * 8);
      uVar3 = uVar13;
      func_0x00010b5fa088();
      if ((uVar3 < 0xd && (1L << (uVar3 & 0x3f) & 0x1566U) != 0) &&
         (func_0x00010bf8b160(uVar13), 7.0 < SUB84(dVar16,0))) {
        puVar11 = (undefined *)0x0;
        goto LAB_107e6a848;
      }
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107e6a898; end: 107e6ac9b;  */

void FUN_107e6a898(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [48];
  long lStack_68;
  
  uVar8 = param_3;
  _objc_retain(param_3);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  func_0x00010c2bda80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  _objc_release(uVar8);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar10 = (undefined *)0x0;
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e09658;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e09658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x28));
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dVar11 = 5.0;
    if (5.0 <= param_1) {
      dVar11 = param_1;
    }
    _CMTimeMake(auStack_b0,(long)(dVar11 * 1000.0),1000);
    uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(auStack_98,&uStack_d0,auStack_b0);
    func_0x00010c297240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126aff30;
    func_0x00010bfe94a0(PTR_PTR_1126aff30);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aff28;
    func_0x00010bf2a9a0(PTR_PTR_1126aff28);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126aff40;
    _objc_alloc(PTR_PTR_1126aff40);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c09da80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d3c0(puVar10);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar9);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107e6ac9c; end: 107e6acd7;  */

void FUN_107e6ac9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  uStack_18 = param_3[5];
  uStack_20 = param_3[4];
  FUN_107e6acd8(0,param_1,param_2,&uStack_40);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e6acd8; end: 107e6b1c3;  */

void FUN_107e6acd8(double param_1,long param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined *param_7)

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
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_2);
      _objc_release(param_7);
      _objc_release(param_3);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        FUN_107e6ac9c();
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar15 = *(long *)(lVar14 * 8);
      _objc_retain(lVar15);
      _objc_retain(param_3);
      _objc_retain(param_7);
      lVar4 = lVar15;
      func_0x00010c0c6c20();
      if (lVar4 == 1) {
        puVar6 = PTR_PTR_1126bf8a0;
        _objc_alloc(PTR_PTR_1126bf8a0);
        if (param_1 <= 0.0) {
          func_0x00010c03ffa0(0x409e000000000000);
        }
        else {
          func_0x00010c03ffc0(0x409e000000000000,param_1);
        }
        puVar5 = param_3;
        func_0x00010bfe7f20(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        if (param_6 == 0) {
          func_0x00010bdc1860();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c2a3a60();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar8);
        _objc_release(puVar5);
        puVar5 = puVar7;
        func_0x00010bfbc3e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_7);
        _objc_retain(lVar15);
        puVar13 = puVar5;
        func_0x00010c0b8600(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(lVar15);
        puVar5 = param_7;
LAB_107e6b0f0:
        _objc_release(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      else {
        lVar4 = lVar15;
        func_0x00010c0c6c20();
        if (lVar4 == 2) {
          puVar5 = param_3;
          func_0x00010c29a4c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar7 = puVar6;
          func_0x00010bf165a0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar8 = puVar7;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = param_7;
          func_0x00010bfacf60();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b3070;
          _objc_alloc(PTR_PTR_1126b3070);
          func_0x00010c060d80();
          puVar10 = puVar6;
          func_0x00010bf9d3e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bfbc3e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar15);
          _objc_retain(puVar10);
          puVar13 = puVar11;
          func_0x00010c0b8600(puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(lVar15);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          goto LAB_107e6b0f0;
        }
        puVar13 = (undefined *)0x0;
      }
      _objc_release(param_7);
      _objc_release(param_3);
      _objc_release(lVar15);
      func_0x00010befa120(puVar2);
      _objc_release(puVar13);
      lVar14 = lVar14 + 1;
    } while (lVar3 != lVar14);
    lVar3 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107e6b1c4; end: 107e6b20f;  */

void FUN_107e6b1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  uStack_40 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uStack_28 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
  FUN_107e6ac9c(param_1,param_2,&uStack_40,0,0,param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e6b210; end: 107e6b313;  */

void FUN_107e6b210(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x00010bf1f460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_2 != 0) {
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17e20();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18440();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17d80();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17da0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf181c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e6b314; end: 107e6b3d3;  */

void FUN_107e6b314(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    puVar3 = PTR_PTR_1126bf9e0;
    func_0x00010c0f40e0(PTR_PTR_1126bf9e0,param_2,puVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0 && lStack_38 == 0) {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e6b3d4; end: 107e6b5cb;  */

void FUN_107e6b3d4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
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
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          lVar6 = *(long *)(lStack_128 + (long)puVar8 * 8);
          lVar3 = lVar6;
          FUN_107e6b5cc();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c08fa60();
          if (lVar4 != 0) {
            puVar5 = PTR_PTR_1126d8028;
            _objc_alloc(PTR_PTR_1126d8028);
            lVar4 = lVar6;
            func_0x00010bf33240(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c113e20(lVar6);
            func_0x00010bffcfc0(puVar5,param_2,lVar4,(long)(int)lVar6);
            _objc_release(lVar4);
            lVar4 = lVar3;
            func_0x00010c0b5ac0(lVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2,param_2,puVar5,lVar4);
            _objc_release(lVar4);
            _objc_release(puVar5);
          }
          _objc_release(lVar3);
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar1 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_1);
    puVar1 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010bfa0060();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    FUN_107e6b314();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar1 = puVar2;
    FUN_107e6b62c(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e6b5cc; end: 107e6b62b;  */

void FUN_107e6b5cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa0060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_107e6b314();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  FUN_107e6b62c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107e6b62c; end: 107e6b733;  */

undefined * FUN_107e6b62c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfa0540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfa0540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc3320();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    func_0x00010c057e80();
    puVar4 = puVar3;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf977c0();
  if ((int)lVar1 == 0x4a) {
    puVar6 = (undefined *)0x1;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfa0420(param_1);
    puVar6 = (undefined *)(ulong)((int)lVar1 == 0x31);
  }
  _objc_release(param_1);
  return puVar6;
}



/* Entry: 107e6b734; end: 107e6b787;  */

bool FUN_107e6b734(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf977c0();
  if ((int)uVar2 == 0x4a) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010bfa0420(param_1);
    bVar1 = (int)uVar2 == 0x31;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107e6b788; end: 107e6b793; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorServices .cxx_destruct] */

void FUN_107e6b788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e6b794; end: 107e6b7ff; +[SCMemoriesClientGenFeaturedStoryLocalEntry cameraRollFeaturedStoryWithCrFeaturedStory:] */

void FUN_107e6b794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e6b800; end: 107e6b863; +[SCMemoriesClientGenFeaturedStoryLocalEntry galleryEntryWithGalleryEntry:] */

void FUN_107e6b800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e6b864; end: 107e6b8a7; -[SCMemoriesClientGenFeaturedStoryLocalEntry internalInit] */

void FUN_107e6b864(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fb680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e6b8a8; end: 107e6b92b; -[SCMemoriesClientGenFeaturedStoryLocalEntry matchGalleryEntry:cameraRollFeaturedStory:] */

void FUN_107e6b8a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_107e6b910;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_107e6b910;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_107e6b910:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e6b92c; end: 107e6b95b; -[SCMemoriesClientGenFeaturedStoryLocalEntry .cxx_destruct] */

void FUN_107e6b92c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e6b95c; end: 107e6b967; -[SCMemoriesMashupSnapDocFactoryServices .cxx_destruct] */

void FUN_107e6b95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e6b968; end: 107e6ba2b; -[SCMemoriesAISnapsLensContext initWithGenerationId:requiresMySelfie:friendId:syncGenerationModeEnabled:] */

undefined1 *
FUN_107e6b968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fb690;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e6ba2c; end: 107e6ba4f; -[SCMemoriesAISnapsLensContext copyWithZone:] */

undefined8 FUN_107e6ba2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e6ba50; end: 107e6bacb; -[SCMemoriesAISnapsLensContext hash] */

undefined8 * FUN_107e6ba50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107e6bb6c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107e6bb78;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_107e6bb78;
        }
        goto LAB_107e6bb6c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107e6bb78:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107e6bacc; end: 107e6bb93; -[SCMemoriesAISnapsLensContext isEqual:] */

long FUN_107e6bacc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e6bb6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e6bb78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107e6bb78;
        }
        goto LAB_107e6bb6c;
      }
    }
    lVar3 = 0;
  }
LAB_107e6bb78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e6bb94; end: 107e6bb9b; -[SCMemoriesAISnapsLensContext generationId] */

undefined8 FUN_107e6bb94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e6bb9c; end: 107e6bba3; -[SCMemoriesAISnapsLensContext requiresMySelfie] */

undefined1 FUN_107e6bb9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e6bba4; end: 107e6bbab; -[SCMemoriesAISnapsLensContext friendId] */

undefined8 FUN_107e6bba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e6bbac; end: 107e6bbb3; -[SCMemoriesAISnapsLensContext syncGenerationModeEnabled] */

undefined1 FUN_107e6bbac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107e6bbb4; end: 107e6bbe3; -[SCMemoriesAISnapsLensContext .cxx_destruct] */

void FUN_107e6bbb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e6bbe4; end: 107e6bbef; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowServices .cxx_destruct] */

void FUN_107e6bbe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e6bbf0; end: 107e6be67;  */

void FUN_107e6bbf0(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
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
  long lStack_c8;
  long lStack_c0;
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
  _objc_opt_class(PTR_PTR_1126d8030);
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
  FUN_107e6c144();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_DAT_1108962d0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110897348;
  lStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&lStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110897348;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_1108962d0;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e6be68; end: 107e6bec7;  */

long FUN_107e6be68(long param_1)

{
  long lVar1;
  
  FUN_107e6bbf0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c088dc0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107e6bec8; end: 107e6bf87;  */

void FUN_107e6bec8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d8030;
  _objc_alloc(PTR_PTR_1126d8030);
  func_0x00010c0095e0();
  puVar2 = puVar1;
  FUN_107e6c618();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e6bf88; end: 107e6bfe7; -[SCMemoriesCameraRollCollageCoolDownData initWithDateStickerYearsAgo:lastGenerateDateTimeIntervalSince1970:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6bf88(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb6a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_112770698) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277069c) = param_4;
  }
  return;
}



/* Entry: 107e6bfe8; end: 107e6c00b; -[SCMemoriesCameraRollCollageCoolDownData copyWithZone:] */

undefined8 FUN_107e6bfe8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e6c00c; end: 107e6c07b; -[SCMemoriesCameraRollCollageCoolDownData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_107e6c00c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(uint *)(param_1 + _DAT_112770698);
  lVar3 = *(long *)(param_1 + _DAT_11277069c);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         (*(int *)((long)puVar1 + (long)_DAT_112770698) !=
          *(int *)((long)param_3 + (long)_DAT_112770698))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(long *)((long)puVar1 + (long)_DAT_11277069c) ==
                                 *(long *)((long)param_3 + (long)_DAT_11277069c));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107e6c07c; end: 107e6c123; -[SCMemoriesCameraRollCollageCoolDownData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107e6c07c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (*(int *)(param_1 + (long)_DAT_112770698) != *(int *)(param_3 + (long)_DAT_112770698))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + (long)_DAT_11277069c) ==
                *(long *)(param_3 + (long)_DAT_11277069c);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107e6c124; end: 107e6c133; -[SCMemoriesCameraRollCollageCoolDownData dateStickerYearsAgo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107e6c124(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112770698);
}



/* Entry: 107e6c134; end: 107e6c143; -[SCMemoriesCameraRollCollageCoolDownData lastGenerateDateTimeIntervalSince1970] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e6c134(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277069c);
}



/* Entry: 107e6c144; end: 107e6c1fb;  */

undefined8 FUN_107e6c144(void)

{
  int iVar1;
  
  if ((bRam00000001138247d0 & 1) == 0) {
    iVar1 = 0x138247d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113824768 = 0xe;
      puRam0000000113824770 = &UNK_10f460adf;
      uRam0000000113824778 = 0x10001;
      pcRam0000000113824780 = FUN_107e6c1fc;
      pcRam0000000113824788 = FUN_107e6c234;
      ppuRam0000000113824760 = &PTR_DAT_1108962d0;
      uRam00000001138247a0 = 0;
      uRam0000000113824798 = 0;
      uRam00000001138247b0 = 0;
      uRam00000001138247a8 = 0;
      uRam00000001138247c0 = 0;
      uRam00000001138247b8 = 0;
      uRam00000001138247c8 = 0;
      ___cxa_atexit(&DAT_105535dc4,0x113824760,0x100000000);
      ___cxa_guard_release(0x1138247d0);
    }
  }
  return 0x113824760;
}



/* Entry: 107e6c1fc; end: 107e6c233;  */

undefined4 FUN_107e6c1fc(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 107e6c234; end: 107e6c287;  */

undefined8 FUN_107e6c234(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf65420(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107e6c288; end: 107e6c293; +[SCMemoriesCameraRollCollageCoolDownData table] */

undefined * FUN_107e6c288(void)

{
  return &UNK_10f460af3;
}



/* Entry: 107e6c294; end: 107e6c30f; +[SCMemoriesCameraRollCollageCoolDownData immutableObjectParse:bufferSize:] */

void FUN_107e6c294(void)

{
  _objc_alloc(PTR_PTR_1126d8030);
  func_0x00010c0095e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e6c310; end: 107e6c333; +[SCMemoriesCameraRollCollageCoolDownData objectClassFunctionPointer] */

undefined1  [16] FUN_107e6c310(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x107e6c32c;
  auVar1._0_8_ = 0x107e6c324;
  return auVar1;
}



/* Entry: 107e6c334; end: 107e6c617;  */

void FUN_107e6c334(undefined *param_1)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  ppuVar6 = &puStack_50;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar7 < 0) {
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bf636c0();
      _objc_release(puVar7);
      func_0x0001001b9e08(puVar3,&UNK_10f460b1b);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = param_1;
        func_0x00010bf65420(param_1);
        _sqlite3_bind_int64(puVar3,1,(ulong)puVar7 & 0xffffffff);
        puVar7 = puVar3;
        _sqlite3_step();
        if ((int)puVar7 == 100) {
          puVar4 = puVar3;
          _sqlite3_column_int64(puVar3,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d8030);
          _sqlite3_column_blob(puVar3,1);
          _sqlite3_column_bytes(puVar3,1);
          puVar7 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar3);
          if (puVar7 != (undefined *)0x0) {
            puVar3 = PTR_PTR_1126d8038;
            _objc_alloc();
            puVar5 = puVar7;
            func_0x00010bf65420();
            uVar1 = SUB84(puVar5,0);
            puVar5 = puVar7;
            func_0x00010c088dc0();
            puVar8 = (undefined1 *)0x0;
            param_1 = puVar7;
            if (puVar3 == (undefined *)0x0) goto LAB_107e6c5a8;
            puStack_48 = PTR_PTR_1126fb6a8;
            puStack_50 = puVar3;
            _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
            goto LAB_107e6c424;
          }
          goto LAB_107e6c440;
        }
      }
      puVar8 = (undefined1 *)0x0;
      goto LAB_107e6c5a8;
    }
    puVar4 = param_1;
    func_0x00010c1422e0();
    puVar3 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8030);
    puVar7 = puVar3;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar3);
    if (puVar7 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126d8038;
      _objc_alloc();
      puVar5 = puVar7;
      func_0x00010bf65420();
      uVar1 = SUB84(puVar5,0);
      puVar5 = puVar7;
      func_0x00010c088dc0();
      param_1 = puVar7;
      puVar8 = (undefined1 *)0x0;
      if (puVar3 == (undefined *)0x0) goto LAB_107e6c5a8;
      puStack_48 = PTR_PTR_1126fb6a8;
      puStack_50 = puVar3;
      _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
      ppuVar6 = ppuVar2;
LAB_107e6c424:
      param_1 = puVar7;
      puVar8 = (undefined1 *)ppuVar6;
      if (ppuVar6 != (undefined **)0x0) {
        *(undefined **)((long)ppuVar6 + 8) = puVar4;
        *(undefined4 *)((long)ppuVar6 + 0x14) = uVar1;
        *(undefined **)((long)ppuVar6 + 0x18) = puVar5;
      }
      goto LAB_107e6c5a8;
    }
  }
LAB_107e6c440:
  puVar8 = (undefined1 *)0x0;
  param_1 = puVar7;
LAB_107e6c5a8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107e6c618; end: 107e6c7c3;  */

void FUN_107e6c618(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_50;
  _objc_retain();
  puVar1 = PTR_PTR_1126d8038;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_107e6c334();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126d8038;
    _objc_retain(param_1);
    _objc_opt_self(puVar6);
    if (param_1 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126d8038;
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      puVar2 = PTR_PTR_1126d8038;
      _objc_alloc();
      puVar3 = param_1;
      func_0x00010bf65420();
      puVar4 = param_1;
      func_0x00010c088dc0();
      puVar6 = (undefined *)0x0;
      if (puVar2 != (undefined *)0x0) {
        puStack_48 = PTR_PTR_1126fb6a8;
        puStack_50 = puVar2;
        _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
        puVar6 = (undefined *)ppuVar5;
        if (ppuVar5 != (undefined **)0x0) {
          *(undefined8 *)((long)ppuVar5 + 8) = 0xffffffffffffffff;
          *(int *)((long)ppuVar5 + 0x14) = (int)puVar3;
          *(undefined **)((long)ppuVar5 + 0x18) = puVar4;
        }
      }
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar6 = param_1;
    func_0x00010bf65420();
    *(int *)(puVar1 + 0x14) = (int)puVar6;
    puVar6 = param_1;
    func_0x00010c088dc0();
    *(undefined **)(puVar1 + 0x18) = puVar6;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107e6c7c4; end: 107e6c827;  */

void FUN_107e6c7c4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d8030;
    _objc_alloc(PTR_PTR_1126d8030);
    func_0x00010c0095e0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


