/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c6b504; end: 107c6b7cf;  */

void FUN_107c6b504(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126c23d8;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf8ba00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf81820(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c2b6e00(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf8ba00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c1315c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_107c79d70(0x4028000000000000,0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5fc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c2b5fe0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b7d60(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aab20(param_1,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c11b580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar1 == 0) && (param_4 != 0)) {
      func_0x00010c2b7d20(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b7d40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_2;
      func_0x00010bf8ba00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c154f80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_107c79d70(0x4028000000000000,0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7d40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar6 = puVar2;
      func_0x00010c2b8e40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      FUN_107c6b7d0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b3f60(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    puVar6 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2acbc0(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c6b7d0; end: 107c6b823;  */

void FUN_107c6b7d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c6b824; end: 107c6be5f;  */

void FUN_107c6b824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_1 == 0) goto LAB_107c6bbe8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != 0) {
    func_0x00010c259740(param_1);
    lVar1 = param_6;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_retain(lVar1);
      _objc_release(param_1);
      param_1 = lVar1;
    }
    lVar2 = param_1;
    func_0x00010c25b720();
    lVar3 = param_1;
    if (lVar2 < 0xb) {
      if (lVar2 == 2) {
        func_0x00010c259560(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107c6ba30;
      }
      if (lVar2 == 3) {
        func_0x00010c259560(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
LAB_107c6baa8:
        _objc_release(lVar3);
        lVar4 = lVar2;
        func_0x00010bf24ec0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar2;
        func_0x00010c2923e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
LAB_107c6bb98:
        func_0x000107c6bc24(lVar4,lVar7,param_1,param_3,param_4,param_5,param_7);
        goto LAB_107c6bbb8;
      }
      if (lVar2 == 5) {
        lVar3 = param_1;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010afef744();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if (lVar2 == 0) goto LAB_107c6bbd0;
        lVar4 = lVar2;
        FUN_107c6e8f0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar3 = lVar4;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar4;
          func_0x00010bfe44e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x000107c6bc24(lVar7,lVar3,param_1,param_3,param_4,param_5,param_7);
          _objc_release(lVar3);
          goto LAB_107c6bbb8;
        }
        goto LAB_107c6bbc0;
      }
    }
    else {
      if (lVar2 != 0xb) {
        if (lVar2 == 0xd) {
          lVar3 = param_1;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar3;
          func_0x00010afef86c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          if (lVar2 != 0) {
            lVar3 = lVar2;
            func_0x00010bf25140(lVar2);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            lVar3 = lVar2;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar3;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bf5b480();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar3);
            goto LAB_107c6bb98;
          }
        }
        else if (lVar2 == 0xe) {
          func_0x00010c259560(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar3;
          func_0x00010afefd10();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107c6baa8;
        }
        goto LAB_107c6bbd0;
      }
      func_0x00010c259560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
LAB_107c6ba30:
      _objc_release(lVar3);
      lVar4 = lVar2;
      func_0x00010c11af80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c2387e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_107c6be60(param_1,lVar4,lVar7,param_3,param_4,param_5,param_7);
LAB_107c6bbb8:
      _objc_release(lVar7);
LAB_107c6bbc0:
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
LAB_107c6bbd0:
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_1);
LAB_107c6bbe8:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c6be60; end: 107c6bf77;  */

void FUN_107c6be60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_1);
    uVar1 = param_1;
    FUN_107c6e8a4(param_1);
    uVar2 = param_1;
    func_0x00010c0794a0(param_1);
    uVar3 = param_1;
    FUN_107c23b94(param_1,param_2,param_3,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    FUN_107c6bf78(uVar3,param_4,param_5,param_6,param_7);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107c6bf78; end: 107c6c15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_107c6bf78(undefined8 *****param_1,undefined8 param_2,undefined8 param_3,long param_4,
             long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined8 ****ppppuStack_1e8;
  undefined *puStack_1e0;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  lVar10 = param_5;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(param_5);
      }
      puVar4 = PTR_DAT_1126a4e80;
      uVar13 = *(ulong *)(lVar11 * 8);
      _objc_retain(uVar13);
      uVar2 = uVar13;
      func_0x00010010fab4(uVar13,puVar4);
      uVar1 = uVar13;
      if ((int)uVar2 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar13);
      uVar2 = uVar1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((param_4 != 0) && (uVar2 == 0)) {
        func_0x00010c1e1580(uVar1);
      }
      func_0x00010bfd0140();
      _objc_release(uVar1);
      if ((uVar13 & 1) != 0) goto LAB_107c6c0ec;
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    lVar10 = param_5;
    func_0x00010bf52a60();
  }
LAB_107c6c0ec:
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  puStack_1e0 = PTR_PTR_1126fa3f8;
  pppppuVar3 = &ppppuStack_1e8;
  ppppuStack_1e8 = param_1;
  _objc_msgSendSuper2(pppppuVar3,PTR_s_initWithFrame__1125e2948);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    func_0x00010c160fc0(pppppuVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar10 = (long)_DAT_11276c2b0;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    *(undefined **)((long)pppppuVar3 + lVar10) = puVar4;
    _objc_release(uVar8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)pppppuVar3 + lVar10));
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010befbb60(pppppuVar3);
    puVar4 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276c2b4;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar7);
    *(undefined **)((long)pppppuVar3 + lVar7) = puVar4;
    _objc_release(uVar8);
    FUN_107c6c9a4(*(undefined8 *)((long)pppppuVar3 + lVar7),3);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar7);
    func_0x00010c1951a0(uVar8);
    uVar9 = *(undefined8 *)((long)pppppuVar3 + lVar7);
    func_0x000107c7ac78();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar9);
    _objc_release(uVar8);
    uVar8 = 0x4030000000000000;
    puVar4 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(*(undefined8 *)((long)pppppuVar3 + lVar7));
    func_0x00010c161220(*(undefined8 *)((long)pppppuVar3 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)pppppuVar3 + lVar7));
    func_0x00010befbb60(pppppuVar3);
    puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar6);
    func_0x00010c182d20(uVar8,puVar5);
    func_0x00010c1bdd00(0x3ff0000000000000,puVar5);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(puVar5);
    _objc_release(puVar6);
    func_0x00010c19bc00(puVar5);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11276c2b8);
    *(undefined **)((long)pppppuVar3 + (long)_DAT_11276c2b8) = puVar5;
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar7);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar8);
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar10 = (long)_DAT_11276c2bc;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    *(undefined **)((long)pppppuVar3 + lVar10) = puVar5;
    _objc_release(uVar8);
    func_0x00010c182220(*(undefined8 *)((long)pppppuVar3 + lVar10));
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4040000000000000);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar8);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)pppppuVar3 + lVar10));
    _objc_release(puVar5);
    func_0x00010c160fc0(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010befbb60(pppppuVar3);
    puVar5 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x403c000000000000,0x403c000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar12 = (long)_DAT_11276c2c0;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar12);
    *(undefined **)((long)pppppuVar3 + lVar12) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)pppppuVar3 + lVar12));
    _objc_release(puVar6);
    func_0x00010c182220(*(undefined8 *)((long)pppppuVar3 + lVar12));
    func_0x00010c1a7f60(*(undefined8 *)((long)pppppuVar3 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar3 + lVar10));
    puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar10 = (long)_DAT_11276c2c4;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    *(undefined **)((long)pppppuVar3 + lVar10) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)pppppuVar3 + lVar10));
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)pppppuVar3 + lVar10));
    _objc_release(puVar6);
    func_0x00010c213040(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010c1cfce0(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010c160fc0(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010befbb60(pppppuVar3);
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar10 = (long)_DAT_11276c2c8;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    *(undefined **)((long)pppppuVar3 + lVar10) = puVar6;
    _objc_release(uVar8);
    func_0x00010c182220(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010c1a7f60(*(undefined8 *)((long)pppppuVar3 + lVar10));
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4022000000000000);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4000000000000000);
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar8);
    _objc_release(puVar6);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)pppppuVar3 + lVar10));
    _objc_release(puVar6);
    func_0x00010befbb60(pppppuVar3);
    puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar10 = (long)_DAT_11276c2cc;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    *(undefined **)((long)pppppuVar3 + lVar10) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)pppppuVar3 + lVar10));
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)pppppuVar3 + lVar10));
    _objc_release(puVar6);
    func_0x00010c213040(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010c1cfce0(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010c160fc0(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010befbb60(pppppuVar3);
    puVar6 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11276c2d0;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    *(undefined **)((long)pppppuVar3 + lVar10) = puVar6;
    _objc_release(uVar8);
    func_0x00010c1951a0(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010c160fc0(*(undefined8 *)((long)pppppuVar3 + lVar10));
    func_0x00010befbb60(pppppuVar3);
    _objc_initWeak(auStack_1f0,pppppuVar3);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar7);
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_107c6ca08;
    puStack_200 = &UNK_1108434b0;
    _objc_copyWeak(auStack_1f8,auStack_1f0);
    func_0x00010c1d3960(uVar8);
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar10);
    _objc_copyWeak(auStack_220,auStack_1f0);
    func_0x00010c1d3960(uVar8);
    _objc_destroyWeak(auStack_220);
    _objc_destroyWeak(auStack_1f8);
    _objc_destroyWeak(auStack_1f0);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  return pppppuVar3;
}



/* Entry: 107c6c15c; end: 107c6c9a3; -[SCDiscoverFeedEnhancedPostViewOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107c6c15c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126fa3f8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar7 = (long)_DAT_11276c2b0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11276c2b4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar5);
    FUN_107c6c9a4(*(undefined8 *)((long)puVar1 + lVar9),3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c1951a0(uVar5);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x000107c7ac78();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar6);
    _objc_release(uVar5);
    uVar5 = 0x4030000000000000;
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c161220(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar4);
    func_0x00010c182d20(uVar5,puVar3);
    func_0x00010c1bdd00(0x3ff0000000000000,puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(puVar3);
    _objc_release(puVar4);
    func_0x00010c19bc00(puVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c2b8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c2b8) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar7 = (long)_DAT_11276c2bc;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4040000000000000);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x403c000000000000,0x403c000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar8 = (long)_DAT_11276c2c0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar7 = (long)_DAT_11276c2c4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar7 = (long)_DAT_11276c2c8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar7));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4022000000000000);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4000000000000000);
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar5);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    lVar7 = (long)_DAT_11276c2cc;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar4 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276c2d0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar5);
    func_0x00010c1951a0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    _objc_initWeak(auStack_b0,puVar1);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107c6ca08;
    puStack_c0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_b8,auStack_b0);
    func_0x00010c1d3960(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_copyWeak(auStack_e0,auStack_b0);
    func_0x00010c1d3960(uVar5);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 107c6c9a4; end: 107c6ca07;  */

void FUN_107c6c9a4(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c20eaa0(param_1);
  func_0x00010c1732a0(param_1);
  func_0x00010c1732a0(param_1);
  func_0x00010c1732a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c6ca08; end: 107c6cb7b;  */

void FUN_107c6ca08(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_48 [8];
  
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  puVar1 = auStack_48;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) goto LAB_107c6cb40;
  puVar1 = auStack_48;
  _objc_loadWeakRetained(puVar1);
  puVar2 = puVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = auStack_48;
  _objc_loadWeakRetained(puVar1);
  puVar3 = puVar1;
  func_0x00010beeee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = auStack_48;
  _objc_loadWeakRetained();
  puVar4 = puVar1;
  func_0x00010c131400();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined1 *)0x0) {
    puVar5 = auStack_48;
    _objc_loadWeakRetained();
    puVar6 = puVar5;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c1313e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    if (puVar4 != (undefined1 *)0x0) goto LAB_107c6cb00;
  }
  else {
    _objc_release(puVar1);
LAB_107c6cb00:
    puVar1 = auStack_48;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bfd0140(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_107c6cb40:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107c6cb7c; end: 107c6ce2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6cb7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_107c6ce10;
  puVar2 = puVar1;
  func_0x00010beee460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010beeee40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(puVar1 + _DAT_11276c2d4);
  if (lVar9 - 2U < 2) {
    puVar7 = puVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c116500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      func_0x00010bfd0140(puVar2);
LAB_107c6cdf8:
      _objc_release(puVar8);
    }
  }
  else if (lVar9 == 1) {
    puVar7 = puVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25fd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      puVar1[_DAT_11276c2d8] = 1;
      func_0x00010bfd0140(puVar2);
      puVar7 = puVar1;
      func_0x00010c29d560(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27b7e0();
      func_0x00010becf120(puVar1);
      _objc_release(puVar7);
      goto LAB_107c6cdf8;
    }
  }
  else if (lVar9 == 4) {
    puVar7 = puVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25fd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126d5a70;
    _objc_opt_class(PTR_PTR_1126d5a70);
    puVar8 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar7);
    puVar7 = puVar4;
    if (((ulong)puVar8 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar4);
    if (puVar7 != (undefined *)0x0) {
      puVar8 = PTR_PTR_1126b02a8;
      _objc_alloc();
      puVar7 = PTR_PTR_1126d5a70;
      _objc_alloc(PTR_PTR_1126d5a70);
      puVar5 = puVar4;
      func_0x00010c258f40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c1561c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d4c0(puVar7);
      func_0x00010c01b460();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (puVar8 != (undefined *)0x0) {
        func_0x00010bfd0140(puVar2);
        func_0x00010becef60(puVar1);
        goto LAB_107c6cdf8;
      }
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_107c6ce10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c6ce30; end: 107c6d143; -[SCDiscoverFeedEnhancedPostViewOverlayView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6ce30(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276c2dc;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11276c2bc;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6),param_2,0);
  lVar4 = (long)_DAT_11276c2e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  if (param_3 == 0) {
    func_0x00010c1a7f60(param_1,param_2,1);
    *(undefined1 *)(param_1 + _DAT_11276c2d8) = 0;
    *(undefined8 *)(param_1 + _DAT_11276c2d4) = 0;
  }
  else {
    func_0x00010c1a7f60(param_1,param_2,0);
    func_0x00010be0fd60(param_1);
    lVar4 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276c2c4;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c260d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276c2cc;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c260d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c08fa60();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,lVar6 == 0);
    _objc_release(lVar4);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5),param_2,2);
    lVar4 = param_3;
    func_0x00010c0e1a60();
    if (lVar4 < 1) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c2c8),param_2,1);
    }
    else {
      lVar4 = param_3;
      func_0x00010c0e1a60(param_3);
      func_0x000108f4715c();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11276c2c8;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,puVar2 == (undefined *)0x0);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010c0bc200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_3;
      func_0x00010c0bc200(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276c2b0),param_2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010c079980();
    lVar6 = (long)_DAT_11276c2b4;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    if ((int)lVar4 == 0) {
      uVar3 = 0x11;
      func_0x000107c7ac78();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = 0x218;
      func_0x000107c7ac90();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c216260(uVar1,param_2,lVar4,0);
    _objc_release(lVar4);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar6),param_2,puVar2,0);
    _objc_release(puVar2);
    if ((*(byte *)(param_1 + _DAT_11276c2d8) & 1) == 0) {
      func_0x00010bde5880(param_1);
    }
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c6d144; end: 107c6d303; -[SCDiscoverFeedEnhancedPostViewOverlayView _configureSecondaryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6d144(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = (long)_DAT_11276c2e0;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c154d80();
  lVar5 = (long)_DAT_11276c2d0;
  if (lVar1 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
    *(undefined8 *)(param_1 + _DAT_11276c2d4) = 0;
    return;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (lVar1 == 3) {
    uVar7 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c7acf0();
    _objc_retainAutoreleasedReturnValue();
    FUN_107c6d304(uVar7,4,puVar4,0);
    lVar1 = 3;
  }
  else if (lVar1 == 2) {
    uVar7 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c7acd8();
    _objc_retainAutoreleasedReturnValue();
    FUN_107c6d304(uVar7,4,puVar4,0);
    lVar1 = 2;
  }
  else {
    if (lVar1 != 1) goto LAB_107c6d2d8;
    puVar4 = *(undefined **)(param_1 + lVar6);
    func_0x00010c080120();
    uVar7 = *(undefined8 *)(param_1 + lVar5);
    if ((int)puVar4 == 0) {
      func_0x000107c7aca8();
      _objc_retainAutoreleasedReturnValue();
      FUN_107c6d304(uVar7,2,puVar4,puVar2);
      lVar1 = 1;
    }
    else {
      func_0x000107c7acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = 4;
      FUN_107c6d304(uVar7,4,puVar4,puVar3);
    }
  }
  _objc_release(puVar4);
LAB_107c6d2d8:
  *(long *)(param_1 + _DAT_11276c2d4) = lVar1;
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107c6d304; end: 107c6d3bf;  */

void FUN_107c6d304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_107c6c9a4(param_1,param_2);
  func_0x00010c216260(param_1);
  _objc_release(param_3);
  uVar1 = param_4;
  func_0x00010bfb2bc0();
  uVar2 = param_4;
  if ((int)uVar1 != 0) {
    func_0x00010bfe77e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  func_0x00010c1a9fc0(param_1);
  func_0x00010c161220(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c6d3c0; end: 107c6d8d7; -[SCDiscoverFeedEnhancedPostViewOverlayView _fetchAvatarImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6d3c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar12 = (long)_DAT_11276c2c0;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar12),param_2,1);
  lVar11 = *(long *)(param_1 + _DAT_11276c2e0);
  _objc_retain(lVar11);
  if (lVar11 == 0) {
    uVar15 = *(undefined8 *)(param_1 + _DAT_11276c2bc);
  }
  else {
    lVar16 = lVar11;
    func_0x00010bf130e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar16;
    func_0x00010c08fa60();
    _objc_release(lVar16);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar1 != 0) {
      lVar16 = lVar11;
      func_0x00010bf130e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      if ((puVar2 == (undefined *)0x0) ||
         (lVar16 = (long)_DAT_11276c2e4, *(long *)(param_1 + lVar16) == 0)) {
        _objc_release(puVar2);
        goto LAB_107c6d67c;
      }
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c2bc));
      puVar3 = PTR_PTR_1126b08b0;
      lVar12 = lVar11;
      func_0x00010bf130e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33760(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      puVar4 = PTR_PTR_1126b17d8;
      _objc_alloc(PTR_PTR_1126b17d8);
      func_0x00010c003a80();
      puVar6 = PTR_PTR_1126b85a0;
      puVar5 = puVar4;
      func_0x00010bf220e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23c900(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      func_0x00010c011b80();
      puVar7 = PTR_PTR_1126b85a8;
      _objc_alloc(PTR_PTR_1126b85a8);
      puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c01cf00(puVar7);
      _objc_release(puVar8);
      _objc_initWeak(auStack_68,param_1);
      uVar15 = *(undefined8 *)(param_1 + lVar16);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107c6d8d8;
      puStack_78 = &UNK_11084a018;
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010bfa7900();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + _DAT_11276c2dc);
      *(undefined8 *)(param_1 + _DAT_11276c2dc) = uVar15;
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
LAB_107c6d82c:
      _objc_release(puVar2);
      goto LAB_107c6d880;
    }
LAB_107c6d67c:
    lVar16 = lVar11;
    func_0x00010bf12c60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar16;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
LAB_107c6d840:
      _objc_release(lVar16);
    }
    else {
      lVar1 = lVar11;
      func_0x00010bf12c80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar1;
      func_0x00010c08fa60();
      if (lVar13 == 0) {
        _objc_release(lVar1);
        goto LAB_107c6d840;
      }
      lVar14 = (long)_DAT_11276c2e8;
      lVar13 = *(long *)(param_1 + lVar14);
      _objc_release(lVar1);
      _objc_release(lVar16);
      if (lVar13 != 0) {
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c2bc));
        puVar2 = PTR_PTR_1126b4bc0;
        _objc_alloc(PTR_PTR_1126b4bc0);
        lVar12 = lVar11;
        func_0x00010bf13280(lVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar11;
        func_0x00010bf12c60(lVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar11;
        func_0x00010bf12c80(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05ad00(puVar2);
        _objc_release(lVar1);
        _objc_release(lVar16);
        _objc_release(lVar12);
        _objc_initWeak(auStack_68,param_1);
        uVar9 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_98,auStack_68);
        uVar15 = uVar9;
        func_0x00010bfaa020();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + _DAT_11276c2dc);
        *(undefined8 *)(param_1 + _DAT_11276c2dc) = uVar15;
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_destroyWeak(auStack_98);
        _objc_destroyWeak(auStack_68);
        goto LAB_107c6d82c;
      }
    }
    lVar16 = lVar11;
    func_0x00010bf13260();
    uVar15 = *(undefined8 *)(param_1 + _DAT_11276c2bc);
    if ((int)lVar16 != 0) {
      func_0x00010c1a7f60(uVar15);
      uVar15 = *(undefined8 *)(param_1 + lVar12);
    }
  }
  func_0x00010c1a7f60(uVar15);
LAB_107c6d880:
  _objc_release(lVar11);
  return;
}



/* Entry: 107c6d8d8; end: 107c6d97f;  */

void FUN_107c6d8d8(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107c6d980;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107c6d980; end: 107c6da47;  */

void FUN_107c6d980(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x107c6d9fc;
    puStack_30 = &UNK_1108d4470;
    lStack_28 = lVar1;
    func_0x00010c0c0800(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48,
                        &PTR___NSConcreteGlobalBlock_110a011d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c6da48; end: 107c6da4b;  */

void FUN_107c6da48(void)

{
  return;
}



/* Entry: 107c6da4c; end: 107c6db23;  */

void FUN_107c6da4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107c6db24;
  puStack_58 = &UNK_110841fb0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_50 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107c6db24; end: 107c6db6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6db24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11276c2bc));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c6db6c; end: 107c6e00f; -[SCDiscoverFeedEnhancedPostViewOverlayView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6db6c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  long lStack_a0;
  undefined *puStack_98;
  long lVar4;
  
  puStack_98 = PTR_PTR_1126fa3f8;
  lStack_a0 = param_5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276c2b0));
  lVar10 = (long)_DAT_11276c2b4;
  func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar10));
  lVar9 = (long)_DAT_11276c2d0;
  iVar2 = (int)*(undefined8 *)(param_5 + lVar9);
  dVar11 = param_1;
  dVar18 = param_2;
  func_0x00010c074c20();
  puVar1 = PTR__CGSizeZero_110347620;
  if (iVar2 == 0) {
    func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar9));
  }
  else {
    dVar11 = *(double *)PTR__CGSizeZero_110347620;
    dVar18 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (dVar11 <= param_1) {
    dVar11 = param_1;
  }
  dVar13 = param_3 + -56.0;
  if (param_3 + -56.0 <= dVar11) {
    dVar13 = dVar11;
  }
  if (param_3 + -8.0 <= dVar13) {
    dVar13 = param_3 + -8.0;
  }
  *(double *)(param_5 + _DAT_11276c2ec) = dVar13;
  dVar16 = (param_3 - dVar13) * 0.5;
  dVar11 = dVar16;
  dVar17 = dVar13;
  _CGRectIntegral(dVar16,0x4040000000000000,dVar13);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar10));
  lVar7 = *(long *)(param_5 + _DAT_11276c2b8);
  lVar8 = *(long *)(param_5 + lVar10);
  _objc_retain(lVar7);
  _objc_retain(lVar8);
  if ((lVar7 != 0) && (lVar8 != 0)) {
    func_0x00010bf20c00(lVar8);
    func_0x00010c19f0e0(lVar7);
    lVar4 = lVar7;
    func_0x00010bf20c00();
    iVar2 = (int)lVar4;
    _CGRectIsEmpty();
    if (iVar2 == 0) {
      func_0x00010c099460(lVar7);
      uVar14 = 0x3fe0000000000000;
      dVar15 = dVar11 * 0.5;
      func_0x00010bf20c00(lVar7);
      _CGRectInset();
      dVar12 = dVar11;
      func_0x00010bf20c00(lVar8);
      _CGRectGetHeight();
      dVar15 = dVar12 * 0.5 - dVar15;
      dVar12 = 0.0;
      if (0.0 <= dVar15) {
        dVar12 = dVar15;
      }
      puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf19a00(dVar11,uVar14,dVar17,param_2,dVar12,
                          PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      func_0x00010c1d9820(lVar7);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c1d9820(lVar7);
    }
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  uVar6 = *(ulong *)(param_5 + lVar9);
  func_0x00010c074c20();
  dVar17 = param_4;
  if ((uVar6 & 1) == 0) {
    dVar17 = (param_4 + -32.0) - dVar18;
    _CGRectIntegral(dVar16,dVar17,dVar13,dVar18);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar9));
    dVar11 = dVar16;
  }
  dVar18 = param_3 + -32.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar10));
  _CGRectGetMaxY();
  iVar2 = (int)*(undefined8 *)(param_5 + lVar9);
  func_0x00010c074c20();
  if (iVar2 != 0) {
    dVar17 = (param_4 + -32.0) - *(double *)(param_5 + _DAT_11276c2f0);
  }
  lVar9 = (long)_DAT_11276c2c4;
  dVar16 = 1.79769313486232e+308;
  dVar13 = dVar18;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar9));
  if (dVar18 <= dVar13) {
    dVar13 = dVar18;
  }
  lVar10 = (long)_DAT_11276c2cc;
  uVar6 = *(ulong *)(param_5 + lVar10);
  func_0x00010c074c20();
  if ((uVar6 & 1) == 0) {
    dVar15 = 1.79769313486232e+308;
    dVar12 = dVar18;
    func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar10));
    if (dVar18 <= dVar12) {
      dVar12 = dVar18;
    }
  }
  else {
    dVar15 = *(double *)(puVar1 + 8);
    dVar12 = *(double *)puVar1;
  }
  lVar7 = (long)_DAT_11276c2bc;
  uVar6 = *(ulong *)(param_5 + lVar7);
  func_0x00010c074c20();
  dVar18 = dVar16;
  if ((uint)uVar6 == 0) {
    dVar18 = dVar16 + 72.0;
  }
  iVar2 = (int)*(undefined8 *)(param_5 + lVar10);
  func_0x00010c074c20();
  if (iVar2 == 0) {
    dVar18 = dVar15 + 2.0 + dVar18;
  }
  dVar17 = dVar11 + ((dVar17 - dVar11) - dVar18) * 0.5;
  dVar18 = dVar11 + 4.0;
  if (dVar11 + 4.0 <= dVar17) {
    dVar18 = dVar17;
  }
  if ((uVar6 & 1) == 0) {
    dVar11 = (param_3 + -64.0) * 0.5;
    func_0x00010c19f0e0(dVar11,dVar18,0x4050000000000000,0x4050000000000000,
                        *(undefined8 *)(param_5 + lVar7));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276c2c0));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetMaxY();
    dVar18 = dVar11 + 8.0;
  }
  dVar11 = (param_3 - dVar13) * 0.5;
  func_0x00010c19f0e0(dVar11,dVar18,dVar13,dVar16,*(undefined8 *)(param_5 + lVar9));
  lVar8 = (long)_DAT_11276c2c8;
  uVar3 = (uint)*(undefined8 *)(param_5 + lVar8);
  func_0x00010c074c20();
  if ((((uint)uVar6 | uVar3) & 1) == 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetMidX();
    dVar18 = dVar11 + -9.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetMaxY();
    func_0x00010c19f0e0(dVar18,dVar11 + -12.0,0x4032000000000000,0x4032000000000000,
                        *(undefined8 *)(param_5 + lVar8));
  }
  else {
    uVar6 = *(ulong *)(param_5 + lVar8);
    func_0x00010c074c20();
    dVar18 = dVar11;
    if ((uVar6 & 1) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar8));
      dVar18 = dVar11;
    }
  }
  uVar6 = *(ulong *)(param_5 + lVar10);
  func_0x00010c074c20();
  if ((uVar6 & 1) == 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar9));
    _CGRectGetMaxY();
    func_0x00010c19f0e0((param_3 - dVar12) * 0.5,dVar18 + 2.0,dVar12,dVar15,
                        *(undefined8 *)(param_5 + lVar10));
  }
  return;
}



/* Entry: 107c6e010; end: 107c6e13f; -[SCDiscoverFeedEnhancedPostViewOverlayView _transitionToAddedStateForTreatment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e010(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  *(undefined1 *)(param_1 + _DAT_11276c2d8) = 1;
  *(undefined8 *)(param_1 + _DAT_11276c2d4) = 4;
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107c7acc0();
  _objc_retainAutoreleasedReturnValue();
  FUN_107c6d304(*(undefined8 *)(param_1 + _DAT_11276c2d0),4,puVar2,puVar1);
  func_0x00010c1cbe20(param_1);
  _objc_initWeak(auStack_48,param_1);
  if (param_3 != 1) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107c6e140;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100c749e0(0x3fc00000,"APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107c6e140; end: 107c6e1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e140(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_11276c2d4) == 4)) {
    *(undefined8 *)(param_1 + _DAT_11276c2d4) = 3;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107c6e1f4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c27ac60(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,
                        *(undefined8 *)(param_1 + _DAT_11276c2d0),0x500004,&puStack_48,0);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107c6e1f4; end: 107c6e257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e1f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276c2d0);
  lVar1 = param_1;
  func_0x000107c7acf0();
  _objc_retainAutoreleasedReturnValue();
  FUN_107c6d304(uVar2,4,lVar1,0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107c6e258; end: 107c6e37b; -[SCDiscoverFeedEnhancedPostViewOverlayView _transitionBackToAddState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  *(undefined1 *)(param_1 + _DAT_11276c2d8) = 0;
  *(undefined8 *)(param_1 + _DAT_11276c2d4) = 1;
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,param_2,0x21c);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107c6e318;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010c0f9680(puVar1,param_2,&puStack_60);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107c6e37c; end: 107c6e3ff; -[SCDiscoverFeedEnhancedPostViewOverlayView isTapOnButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6e37c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276c2b4);
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_11276c2d0;
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + lVar3);
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      if ((uVar1 & 1) != 0) goto LAB_107c6e3b8;
    }
    uVar2 = 0;
  }
  else {
LAB_107c6e3b8:
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 107c6e400; end: 107c6e533; -[SCDiscoverFeedEnhancedPostViewOverlayView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e400(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  double dVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  puVar4 = &uStack_50;
  dVar5 = param_1;
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c074c20();
  if ((((uVar2 & 1) != 0) || (func_0x00010bf01b40(param_3), dVar5 <= 0.0)) ||
     (uVar2 = param_3, func_0x00010c082800(), (int)uVar2 == 0)) {
    puStack_48 = PTR_PTR_1126fa3f8;
    uStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&uStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107c6e4dc;
  }
  lVar3 = (long)_DAT_11276c2b4;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  if (iVar1 == 0) {
    lVar3 = (long)_DAT_11276c2d0;
    uVar2 = *(ulong *)(param_3 + lVar3);
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      if (iVar1 != 0) goto LAB_107c6e478;
    }
    puVar4 = (ulong *)0x0;
  }
  else {
LAB_107c6e478:
    puVar4 = *(ulong **)(param_3 + lVar3);
    func_0x00010bf512a0(param_1,param_2,param_3);
    func_0x00010bfe3a40(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107c6e4dc:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107c6e534; end: 107c6e543; -[SCDiscoverFeedEnhancedPostViewOverlayView matchedButtonWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6e534(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c2ec);
}



/* Entry: 107c6e544; end: 107c6e553; -[SCDiscoverFeedEnhancedPostViewOverlayView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6e544(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c2e0);
}



/* Entry: 107c6e554; end: 107c6e573; -[SCDiscoverFeedEnhancedPostViewOverlayView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e554(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276c2f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c6e574; end: 107c6e587; -[SCDiscoverFeedEnhancedPostViewOverlayView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e574(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276c2f4,param_3);
  return;
}



/* Entry: 107c6e588; end: 107c6e5a7; -[SCDiscoverFeedEnhancedPostViewOverlayView actionSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e588(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276c2f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c6e5a8; end: 107c6e5bb; -[SCDiscoverFeedEnhancedPostViewOverlayView setActionSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276c2f8,param_3);
  return;
}



/* Entry: 107c6e5bc; end: 107c6e5cb; -[SCDiscoverFeedEnhancedPostViewOverlayView imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6e5bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c2e4);
}



/* Entry: 107c6e5cc; end: 107c6e60b; -[SCDiscoverFeedEnhancedPostViewOverlayView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c2e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c6e60c; end: 107c6e61b; -[SCDiscoverFeedEnhancedPostViewOverlayView bitmojiSelfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6e60c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c2e8);
}



/* Entry: 107c6e61c; end: 107c6e65b; -[SCDiscoverFeedEnhancedPostViewOverlayView setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c2e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c6e65c; end: 107c6e66b; -[SCDiscoverFeedEnhancedPostViewOverlayView replayActionModelOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6e65c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c2fc);
}



/* Entry: 107c6e66c; end: 107c6e6ab; -[SCDiscoverFeedEnhancedPostViewOverlayView setReplayActionModelOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c2fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c6e6ac; end: 107c6e6bb; -[SCDiscoverFeedEnhancedPostViewOverlayView bottomReservedHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6e6ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c2f0);
}



/* Entry: 107c6e6bc; end: 107c6e6cb; -[SCDiscoverFeedEnhancedPostViewOverlayView setBottomReservedHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e6bc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276c2f0) = param_1;
  return;
}



/* Entry: 107c6e6cc; end: 107c6e7e3; -[SCDiscoverFeedEnhancedPostViewOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6e6cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c2fc,0);
  _objc_storeStrong(param_1 + _DAT_11276c2e8,0);
  _objc_storeStrong(param_1 + _DAT_11276c2e4,0);
  _objc_destroyWeak(param_1 + _DAT_11276c2f8);
  _objc_destroyWeak(param_1 + _DAT_11276c2f4);
  _objc_storeStrong(param_1 + _DAT_11276c2e0,0);
  _objc_storeStrong(param_1 + _DAT_11276c2dc,0);
  _objc_storeStrong(param_1 + _DAT_11276c2d0,0);
  _objc_storeStrong(param_1 + _DAT_11276c2cc,0);
  _objc_storeStrong(param_1 + _DAT_11276c2c8,0);
  _objc_storeStrong(param_1 + _DAT_11276c2c4,0);
  _objc_storeStrong(param_1 + _DAT_11276c2c0,0);
  _objc_storeStrong(param_1 + _DAT_11276c2bc,0);
  _objc_storeStrong(param_1 + _DAT_11276c2b8,0);
  _objc_storeStrong(param_1 + _DAT_11276c2b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c2b0,0);
  return;
}



/* Entry: 107c6e7e4; end: 107c6e8a3;  */

ulong FUN_107c6e7e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c25b720();
  uVar3 = 0;
  if ((uVar1 < 0x10) && ((1L << (uVar1 & 0x3f) & 0xe80fU) != 0)) {
    uVar1 = param_1;
    func_0x00010c0741a0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf3cd00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c236ac0();
      if ((uVar3 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010bf3cd00(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c2674a0();
        _objc_release(uVar2);
      }
      else {
        uVar3 = 1;
      }
      _objc_release(uVar1);
    }
    else {
      uVar3 = 1;
    }
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107c6e8a4; end: 107c6e8ef;  */

ulong FUN_107c6e8a4(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c080120();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c077680(param_1);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107c6e8f0; end: 107c6e99f;  */

void FUN_107c6e8f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010bef4a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf20fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107c6e9a0; end: 107c6f7d3;  */

void FUN_107c6e9a0(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_2;
  puVar10 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  puVar15 = (undefined *)0x0;
  if ((param_1 == (undefined8 *)0x0) || (param_3 == (undefined *)0x0)) goto LAB_107c6f780;
  FUN_107c6e8a4();
  puVar3 = param_1;
  func_0x00010c25b720();
  puVar15 = (undefined *)0x0;
  if ((long)puVar3 < 0xb) {
    if (puVar3 == (undefined8 *)0x2) {
      puVar3 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar4 != (undefined8 *)0x0) {
        puVar3 = puVar4;
        func_0x00010c11af80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined8 *)0x0) {
          puVar5 = puVar3;
          func_0x00010bfad760();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = puVar4;
          func_0x00010c2387e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined8 *)0x0) {
            puStack_b8 = puVar3;
            func_0x00010bfb57e0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar5 = puVar4;
            func_0x00010c2387e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_b8 = puVar5;
            func_0x00010c238a20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
          }
          _objc_release(puVar3);
          bVar1 = false;
          puStack_c8 = (undefined8 *)0x0;
          puStack_c0 = (undefined8 *)0x0;
          puStack_d8 = (undefined8 *)0x0;
          puStack_d0 = (undefined8 *)0x0;
          bVar2 = true;
          goto LAB_107c6f154;
        }
LAB_107c6ee64:
        puVar15 = (undefined *)0x0;
LAB_107c6f77c:
        _objc_release(puVar4);
        goto LAB_107c6f780;
      }
    }
    else if (puVar3 == (undefined8 *)0x3) {
      puVar3 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar4 != (undefined8 *)0x0) {
        puVar6 = puVar4;
        func_0x00010bf24fc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = puVar4;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = puVar4;
        func_0x00010bf1ade0();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = puVar4;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_b8 = puVar4;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010bf25300();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c08fa60();
        if (puVar5 == (undefined8 *)0x0) {
          puStack_c0 = (undefined8 *)0x0;
        }
        else {
          puStack_c0 = puVar4;
          func_0x00010bf25300();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar3);
        func_0x00010c0e1a60(puVar4);
        bVar1 = false;
        goto LAB_107c6f0b0;
      }
    }
    else {
      if (puVar3 != (undefined8 *)0x5) goto LAB_107c6f780;
      puVar3 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar4 != (undefined8 *)0x0) {
        puVar3 = puVar4;
        FUN_107c6e8f0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined8 *)0x0) {
          bVar2 = false;
        }
        else {
          puVar5 = puVar3;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c08fa60();
          bVar2 = puVar6 != (undefined8 *)0x0;
          _objc_release(puVar5);
        }
        puVar5 = puVar3;
        func_0x00010c116960();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = puVar7;
        func_0x00010c08fa60();
        puVar6 = puVar7;
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = puVar4;
          func_0x00010bfe5b40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 != (undefined8 *)0x0) {
            puVar5 = puVar4;
            func_0x00010bfe5b40();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010beec820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar5);
          }
        }
        puVar5 = puVar4;
        func_0x00010bf20f80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c08fa60();
        puVar9 = puVar5;
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = puVar4;
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf20f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        puStack_c0 = puVar4;
        func_0x00010bfe0440();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puStack_c0;
        func_0x00010c08fa60();
        if (puVar5 == (undefined8 *)0x0) {
          _objc_retain(puVar9);
          puStack_b8 = puVar9;
        }
        else {
          puStack_b8 = puVar4;
          func_0x00010bfe0440();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release();
        func_0x000107c7ad68();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c26ea40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf926c0();
        if ((int)puVar7 != 0) {
          puVar7 = puVar4;
          func_0x00010c26ea40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf85540();
          _objc_release(puVar7);
        }
        _objc_release(puVar5);
        _objc_release(puVar9);
        _objc_release(puVar3);
        goto LAB_107c6f150;
      }
    }
  }
  else if (puVar3 == (undefined8 *)0xb) {
    puVar3 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010afefbe8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = puVar4;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined8 *)0x0) goto LAB_107c6ee64;
      puVar5 = puVar3;
      func_0x00010bfad760();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x00010c2387e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c238a20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined8 *)0x0) {
        puStack_b8 = puVar3;
        func_0x00010bfb57e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar7);
        puStack_b8 = puVar7;
      }
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puStack_c0 = (undefined8 *)0x0;
      bVar2 = true;
LAB_107c6f150:
      puStack_c8 = (undefined8 *)0x0;
      puStack_d0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      bVar1 = false;
LAB_107c6f154:
      _objc_release(puVar4);
      puVar3 = puVar6;
      func_0x00010c08fa60();
      puVar4 = puVar6;
      if (puVar3 != (undefined8 *)0x0) {
        puVar15 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        _objc_release(puVar15);
        _objc_retain(puVar6);
        puVar3 = puVar6;
        func_0x00010c08fa60();
        puVar5 = puVar6;
        if (puVar3 == (undefined8 *)0x0) {
          _objc_retain(puVar6);
        }
        else {
          func_0x00010bf4bb00();
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar5;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
        }
        _objc_release(puVar5);
        _objc_release(puVar6);
      }
      puVar16 = PTR_PTR_1126d7398;
      func_0x00010bf81840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a8ee0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8e40(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8e60(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8fa0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8f80(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ac7a0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba940(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b4b60(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b17c0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b7ca0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2bbbe0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_retain(param_1);
      _objc_retain(param_2);
      puVar15 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar10 = param_2;
      if (param_2 == (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar15);
      _objc_release(puVar11);
      if (param_2 == (undefined *)0x0) {
        _objc_release(puVar10);
      }
      _objc_release(param_2);
      _objc_release(param_1);
      func_0x00010c2b6de0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar15);
      if (!bVar1) {
        _objc_retain(param_1);
        _objc_retain(param_2);
        FUN_107c6e8a4(param_1);
        puVar15 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        puVar10 = PTR_PTR_1126d5a70;
        _objc_alloc(PTR_PTR_1126d5a70);
        func_0x00010c04d4c0();
        _objc_release(param_1);
        _objc_release(param_2);
        func_0x00010c01b460(puVar15);
        _objc_release(puVar10);
        func_0x00010c2ba8e0(puVar16);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar15);
      }
      _objc_retain(param_1);
      _objc_retain(param_2);
      puVar15 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar10 = param_2;
      if (param_2 == (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      param_5 = 2;
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar11;
      func_0x00010c01b460(puVar15);
      _objc_release(puVar11);
      if (param_2 == (undefined *)0x0) {
        _objc_release(puVar10);
      }
      _objc_release(param_2);
      _objc_release(param_1);
      func_0x00010c2b6220(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar15);
      if (!bVar2) {
        func_0x00010c2b6220(puVar16);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2ba8e0(puVar16);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_retain(param_1);
      puVar3 = param_1;
      func_0x00010c0741a0();
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = param_1;
        func_0x00010bf3cd00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c236ac0();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = param_1;
          func_0x00010bf3cd00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2674a0();
          _objc_release(puVar5);
        }
        _objc_release(puVar3);
      }
      _objc_release(param_1);
      func_0x00010c2b10e0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar15;
      func_0x00010bf414e0(0x3fe6666666666666);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar10 = puVar11;
      func_0x00010c2b35c0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar15 = puVar16;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puStack_c0);
      _objc_release(puStack_b8);
      _objc_release(puStack_c8);
      _objc_release(puStack_d8);
      _objc_release(puStack_d0);
      goto LAB_107c6f77c;
    }
  }
  else if (puVar3 == (undefined8 *)0xd) {
    puVar3 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4;
      func_0x00010bf24fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puStack_b8 = puVar4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1a60(puVar4);
      puStack_c0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      puStack_d0 = (undefined8 *)0x0;
      bVar1 = true;
LAB_107c6f0b0:
      bVar2 = true;
      goto LAB_107c6f154;
    }
  }
  else {
    if (puVar3 != (undefined8 *)0xe) goto LAB_107c6f780;
    puVar3 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010afefd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4;
      func_0x00010bf24fc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = puVar4;
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf25300();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c08fa60();
      if (puVar5 == (undefined8 *)0x0) {
        puStack_c0 = (undefined8 *)0x0;
      }
      else {
        puStack_c0 = puVar4;
        func_0x00010bf25300();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      func_0x00010c0e1a60(puVar4);
      bVar1 = false;
      puStack_d0 = (undefined8 *)0x0;
      puStack_c8 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      goto LAB_107c6f0b0;
    }
  }
  puVar15 = (undefined *)0x0;
LAB_107c6f780:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    _objc_retain(puVar10);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puVar15 = (undefined *)0x0;
    if (param_1 != (undefined8 *)0x0) {
      puVar16 = (undefined *)*param_1;
      _objc_retain(puVar16);
      if (puVar10 == (undefined *)0x0) {
        func_0x00010c1a7f60(puVar16);
        func_0x00010c2226c0(puVar16);
        func_0x00010c1736c0(0,puVar16);
        puVar15 = (undefined *)0x0;
      }
      else {
        if (puVar16 == (undefined *)0x0) {
          puVar16 = PTR_PTR_1126d73a0;
          _objc_alloc();
          func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                              *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                              *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                              *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
          func_0x00010c1aa2c0();
          func_0x00010c171460(puVar16);
          func_0x00010befbb60(puVar13);
          _objc_retain(puVar16);
          uVar12 = *param_1;
          *param_1 = puVar16;
          _objc_release(uVar12);
        }
        func_0x00010c161980(puVar16);
        func_0x00010c161d60(puVar16);
        func_0x00010c2226c0(puVar16);
        func_0x00010c1ead60(puVar16);
        func_0x00010c1a7f60(puVar16);
        func_0x00010bf21300(puVar13);
        puVar11 = puVar10;
        func_0x00010c116500(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar11;
        func_0x00010bf51e00();
        _objc_release(puVar11);
      }
      _objc_release(puVar16);
    }
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar10);
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107c6f7d4; end: 107c6f9af;  */

void FUN_107c6f7d4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar4 = 0;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = (undefined *)*param_1;
    _objc_retain(puVar3);
    if (param_3 == 0) {
      func_0x00010c1a7f60(puVar3);
      func_0x00010c2226c0(puVar3);
      func_0x00010c1736c0(0,puVar3);
      lVar4 = 0;
    }
    else {
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126d73a0;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        func_0x00010c1aa2c0();
        func_0x00010c171460(puVar3);
        func_0x00010befbb60(param_2);
        _objc_retain(puVar3);
        uVar1 = *param_1;
        *param_1 = puVar3;
        _objc_release(uVar1);
      }
      func_0x00010c161980(puVar3);
      func_0x00010c161d60(puVar3);
      func_0x00010c2226c0(puVar3);
      func_0x00010c1ead60(puVar3);
      func_0x00010c1a7f60(puVar3);
      func_0x00010bf21300(param_2);
      lVar2 = param_3;
      func_0x00010c116500(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf51e00();
      _objc_release(lVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107c6f9b0; end: 107c6fb43; -[SCDiscoverFeedJoinTheChatOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c6f9b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa400;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    lVar4 = (long)_DAT_11276c300;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    lVar4 = (long)_DAT_11276c304;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11276c308;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c161220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c6fb44; end: 107c6fc1f; -[SCDiscoverFeedJoinTheChatOverlayView layoutSubviews] */

/* WARNING: Possible PIC construction at 0x000107c6fb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c6fbbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c6fb84) */
/* WARNING: Removing unreachable block (ram,0x000107c6fbc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6fb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4000000000000000,param_3,0x4038000000000000,
             *(undefined8 *)(param_4 + _DAT_11276c300),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107c6fc20; end: 107c6fd0b; -[SCDiscoverFeedJoinTheChatOverlayView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6fc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276c30c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c2757a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276c300),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0c77a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276c304),param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276c308);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c085960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c6fd0c; end: 107c6fd3f; -[SCDiscoverFeedJoinTheChatOverlayView pointInJoinTheChatButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107c6fd0c(undefined8 param_1,double param_2,long param_3)

{
  double dVar1;
  
  dVar1 = param_2;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_11276c308));
  return dVar1 <= param_2;
}



/* Entry: 107c6fd40; end: 107c6fd4f; -[SCDiscoverFeedJoinTheChatOverlayView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c6fd40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c30c);
}



/* Entry: 107c6fd50; end: 107c6fdaf; -[SCDiscoverFeedJoinTheChatOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6fd50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c30c,0);
  _objc_storeStrong(param_1 + _DAT_11276c308,0);
  _objc_storeStrong(param_1 + _DAT_11276c304,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c300,0);
  return;
}



/* Entry: 107c6fdb0; end: 107c7044f; -[SCDiscoverFeedFriendsContextView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107c6fdb0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126fa408;
  puVar28 = &uStack_d0;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar28,PTR_s_initWithFrame__1125e2948);
  lVar34 = 0;
  if (puVar28 != (undefined8 *)0x0) {
    puVar1 = puVar28;
    func_0x00010c08c0e0(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x401c000000000000);
    _objc_release(puVar1);
    puVar1 = puVar28;
    func_0x00010c08c0e0(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184260();
    _objc_release(puVar1);
    puVar1 = puVar28;
    func_0x00010c08c0e0(puVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    lVar32 = (long)_DAT_11276c310;
    uVar29 = *(undefined8 *)((long)puVar28 + lVar32);
    *(undefined **)((long)puVar28 + lVar32) = puVar2;
    _objc_release(uVar29);
    _objc_release(puVar3);
    func_0x00010c1677c0(0x3feccccccccccccd,*(undefined8 *)((long)puVar28 + lVar32));
    func_0x00010c219b60(*(undefined8 *)((long)puVar28 + lVar32));
    func_0x00010c21e900(*(undefined8 *)((long)puVar28 + lVar32));
    func_0x00010befbb60(puVar28);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar30 = (long)_DAT_11276c314;
    uVar29 = *(undefined8 *)((long)puVar28 + lVar30);
    *(undefined **)((long)puVar28 + lVar30) = puVar2;
    _objc_release(uVar29);
    func_0x00010c16e060(*(undefined8 *)((long)puVar28 + lVar30));
    func_0x00010c207380(0x4010000000000000,*(undefined8 *)((long)puVar28 + lVar30));
    func_0x00010c166c00(*(undefined8 *)((long)puVar28 + lVar30));
    func_0x00010c219b60(*(undefined8 *)((long)puVar28 + lVar30));
    func_0x00010c21e900(*(undefined8 *)((long)puVar28 + lVar30));
    func_0x00010befbb60(puVar28);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar33 = (long)_DAT_11276c318;
    uVar29 = *(undefined8 *)((long)puVar28 + lVar33);
    *(undefined **)((long)puVar28 + lVar33) = puVar2;
    _objc_release(uVar29);
    func_0x00010c219b60(*(undefined8 *)((long)puVar28 + lVar33));
    func_0x00010c182220(*(undefined8 *)((long)puVar28 + lVar33));
    func_0x00010c21e900(*(undefined8 *)((long)puVar28 + lVar33));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar28 + lVar33));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar28 + lVar30));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar34 = (long)_DAT_11276c31c;
    uVar29 = *(undefined8 *)((long)puVar28 + lVar34);
    *(undefined **)((long)puVar28 + lVar34) = puVar2;
    _objc_release(uVar29);
    func_0x00010c219b60(*(undefined8 *)((long)puVar28 + lVar34));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar28 + lVar34));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar28 + lVar34));
    _objc_release(puVar2);
    func_0x00010c21e900(*(undefined8 *)((long)puVar28 + lVar34));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar28 + lVar30));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar34 = *(long *)((long)puVar28 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar28;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar31;
    uVar4 = *(undefined8 *)((long)puVar28 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar28;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar29;
    uVar6 = *(undefined8 *)((long)puVar28 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar28;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar28 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar28;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar28 + lVar33);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar28 + lVar33);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar28 + lVar30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar28;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar18;
    uVar19 = *(undefined8 *)((long)puVar28 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar28;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf493c0(0xc01c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar21;
    uVar22 = *(undefined8 *)((long)puVar28 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar28;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar22;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar24;
    uVar25 = *(undefined8 *)((long)puVar28 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar28;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar25;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar27;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar3;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar27);
    _objc_release(puVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(puVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar29);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(lVar31);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar28;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  lVar31 = (long)_DAT_11276c320;
  uVar29 = *(undefined8 *)(lVar34 + lVar31);
  *(undefined **)(lVar34 + lVar31) = param_3;
  _objc_release(uVar29);
  puVar28 = *(undefined8 **)(lVar34 + _DAT_11276c31c);
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar28,PTR_s_setText__1126625f0,*(undefined8 *)(lVar34 + lVar31));
  return puVar28;
}



/* Entry: 107c70450; end: 107c704a3; -[SCDiscoverFeedFriendsContextView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c70450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  lVar2 = (long)_DAT_11276c320;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c31c),PTR_s_setText__1126625f0,
             *(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 107c704a4; end: 107c7051b; -[SCDiscoverFeedFriendsContextView setIconImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c704a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c324);
  *(long *)(param_1 + _DAT_11276c324) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276c318;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,param_3 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c7051c; end: 107c7052b; -[SCDiscoverFeedFriendsContextView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c7051c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c320);
}



/* Entry: 107c7052c; end: 107c7053b; -[SCDiscoverFeedFriendsContextView iconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c7052c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c324);
}



/* Entry: 107c7053c; end: 107c705bb; -[SCDiscoverFeedFriendsContextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7053c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c324,0);
  _objc_storeStrong(param_1 + _DAT_11276c320,0);
  _objc_storeStrong(param_1 + _DAT_11276c31c,0);
  _objc_storeStrong(param_1 + _DAT_11276c318,0);
  _objc_storeStrong(param_1 + _DAT_11276c314,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c310,0);
  return;
}



/* Entry: 107c705bc; end: 107c7119b; -[SCDiscoverFeedLabelFooterView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107c705bc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_158 = PTR_PTR_1126fa410;
  puVar29 = &uStack_160;
  uStack_160 = param_1;
  _objc_msgSendSuper2(puVar29,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar29 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1cfce0(puVar2);
    func_0x00010c160fc0(puVar2);
    lVar25 = (long)_DAT_11276c328;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar25);
    *(undefined **)((long)puVar29 + lVar25) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar2);
    func_0x00010c1cfce0(puVar2);
    lVar30 = (long)_DAT_11276c32c;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar30);
    *(undefined **)((long)puVar29 + lVar30) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar32 = (long)_DAT_11276c330;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar32);
    *(undefined **)((long)puVar29 + lVar32) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar29 + lVar32));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar29 + lVar32);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf49420(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar4;
    uVar6 = *(undefined8 *)((long)puVar29 + lVar32);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf49420(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_a0 = *(undefined8 *)((long)puVar29 + lVar32);
    uStack_98 = *(undefined8 *)((long)puVar29 + lVar30);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar32 = (long)_DAT_11276c334;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar32);
    *(undefined **)((long)puVar29 + lVar32) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c16e060(*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010c207380(0x4010000000000000,*(undefined8 *)((long)puVar29 + lVar32));
    func_0x00010c166c00(*(undefined8 *)((long)puVar29 + lVar32));
    puVar2 = PTR_PTR_1126d5ab0;
    _objc_opt_new();
    lVar27 = (long)_DAT_11276c338;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar27);
    *(undefined **)((long)puVar29 + lVar27) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar29 + lVar27);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar4;
    uVar6 = *(undefined8 *)((long)puVar29 + lVar27);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1cfce0(puVar2);
    lVar30 = (long)_DAT_11276c33c;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar30);
    *(undefined **)((long)puVar29 + lVar30) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d73a8;
    _objc_opt_new();
    lVar33 = (long)_DAT_11276c340;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar33);
    *(undefined **)((long)puVar29 + lVar33) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar29 + lVar33));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar29 + lVar33);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf49420(0x402b000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar4;
    uVar6 = *(undefined8 *)((long)puVar29 + lVar33);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf49420(0x402b000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    func_0x00010c21e900();
    func_0x00010c181f00(0x437a0000,puVar2);
    func_0x00010c181cc0(0x437a0000,puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar34 = (long)_DAT_11276c344;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar34);
    *(undefined **)((long)puVar29 + lVar34) = puVar3;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar29 + lVar34));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar29 + lVar34));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar29 + lVar34);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar4;
    uVar6 = *(undefined8 *)((long)puVar29 + lVar34);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar15);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar26 = (long)_DAT_11276c348;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar26);
    *(undefined **)((long)puVar29 + lVar26) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar29 + lVar26));
    _objc_release(puVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar29 + lVar26));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar29 + lVar26));
    puVar15 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_100 = *(undefined8 *)((long)puVar29 + lVar27);
    uStack_f8 = *(undefined8 *)((long)puVar29 + lVar30);
    uStack_f0 = *(undefined8 *)((long)puVar29 + lVar33);
    puStack_e8 = puVar2;
    uStack_e0 = *(undefined8 *)((long)puVar29 + lVar34);
    uStack_d8 = *(undefined8 *)((long)puVar29 + lVar26);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar27 = (long)_DAT_11276c34c;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar27);
    *(undefined **)((long)puVar29 + lVar27) = puVar15;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c16e060(*(undefined8 *)((long)puVar29 + lVar27));
    func_0x00010c207380(0x4010000000000000,*(undefined8 *)((long)puVar29 + lVar27));
    func_0x00010c166c00(*(undefined8 *)((long)puVar29 + lVar27));
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_11276c350;
    uVar4 = *(undefined8 *)((long)puVar29 + lVar26);
    *(undefined **)((long)puVar29 + lVar26) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar29 + lVar26);
    func_0x00010c219b60(uVar4);
    func_0x000107c7acf0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)((long)puVar29 + lVar26));
    _objc_release(uVar4);
    param_5 = 0x40;
    func_0x00010befbd60(*(undefined8 *)((long)puVar29 + lVar26));
    puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_118 = *(undefined8 *)((long)puVar29 + lVar25);
    uStack_110 = *(undefined8 *)((long)puVar29 + lVar32);
    uStack_108 = *(undefined8 *)((long)puVar29 + lVar27);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    _objc_release(puVar3);
    func_0x00010c16e060(puVar8);
    func_0x00010c207380(0x4010000000000000,puVar8);
    func_0x00010c219b60(puVar8);
    func_0x00010befbb60(puVar29);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar29;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    puStack_130 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar29;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar8;
    puStack_128 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar29;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar31);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar28);
    _objc_release(puVar9);
    func_0x00010befbb60(puVar29);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar29 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar29 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar7;
    uVar19 = *(undefined8 *)((long)puVar29 + lVar26);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar29 + lVar27);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar5;
    uVar21 = *(undefined8 *)((long)puVar29 + lVar26);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar29 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar21;
    func_0x00010bf49440(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar6;
    uVar23 = *(undefined8 *)((long)puVar29 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar23;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 4;
    puVar28 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar28;
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar28);
    _objc_release(uVar4);
    _objc_release(uVar23);
    _objc_release(uVar6);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar5);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar7);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(puVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar29;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2328;
  func_0x00010bf71540(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_6;
  func_0x00010c0b84c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_6);
  if (lVar25 == 0) {
    puVar2[_DAT_11276c354] = 0;
  }
  else {
    lVar30 = lVar25;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar30;
    func_0x00010bf1f3c0();
    puVar2[_DAT_11276c354] = (char)lVar32;
    _objc_release(lVar30);
  }
  lVar32 = (long)_DAT_11276c350;
  func_0x00010c21e900(*(undefined8 *)(puVar2 + lVar32));
  lVar30 = (long)_DAT_11276c358;
  puVar28 = *(undefined8 **)(puVar2 + lVar30);
  _objc_retain(param_3);
  _objc_retain(puVar28);
  puVar29 = param_3;
  if (param_3 != puVar28) {
    if (puVar28 == (undefined8 *)0x0) {
      _objc_release();
    }
    else {
      func_0x00010c071ae0();
      _objc_release(puVar28);
      _objc_release(param_3);
      if (((ulong)puVar29 & 1) != 0) goto LAB_107c7170c;
    }
    puVar29 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(puVar2 + lVar30);
    *(undefined8 **)(puVar2 + lVar30) = puVar29;
    _objc_release(uVar4);
    puVar29 = param_3;
    func_0x00010bf4d880(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar30 = (long)_DAT_11276c328;
    func_0x00010c16b720(*(undefined8 *)(puVar2 + lVar30));
    _objc_release(puVar29);
    puVar29 = param_3;
    func_0x00010bf4d880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar30));
    _objc_release(puVar29);
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + _DAT_11276c334));
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + _DAT_11276c330));
    puVar29 = param_3;
    func_0x00010bf28980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar29 == (undefined8 *)0x0) {
      func_0x00010c182940(puVar2);
    }
    else {
      puVar29 = param_3;
      func_0x00010bf28980(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed8900(puVar2);
      _objc_release(puVar29);
    }
    puVar29 = param_3;
    func_0x00010bf5b380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar30 = (long)_DAT_11276c33c;
    func_0x00010c16b720(*(undefined8 *)(puVar2 + lVar30));
    _objc_release(puVar29);
    puVar29 = param_3;
    func_0x00010bf5b380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar30));
    _objc_release(puVar29);
    func_0x00010c074c20(*(undefined8 *)(puVar2 + lVar30));
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + _DAT_11276c34c));
    uVar24 = *(ulong *)(puVar2 + lVar30);
    func_0x00010c074c20();
    if ((uVar24 & 1) == 0) {
      puVar28 = param_3;
      func_0x00010bf5b3c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar28 == (undefined8 *)0x0) {
        puVar29 = (undefined8 *)0x0;
      }
      else {
        puVar29 = (undefined8 *)PTR_PTR_1126d73b0;
        _objc_alloc(PTR_PTR_1126d73b0);
        puVar31 = param_3;
        func_0x00010bf5b3c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0519c0(puVar29);
        _objc_release(puVar31);
      }
      _objc_release(puVar28);
      puVar28 = param_3;
      func_0x00010bf13300(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = param_3;
      func_0x00010bf95f20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar29 = (undefined8 *)0x0;
      puVar28 = (undefined8 *)0x0;
      puVar31 = (undefined8 *)0x0;
    }
    lVar26 = (long)_DAT_11276c340;
    func_0x00010c2226c0(*(undefined8 *)(puVar2 + lVar26));
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar26));
    lVar26 = (long)_DAT_11276c338;
    func_0x00010c1aa2c0(*(undefined8 *)(puVar2 + lVar26));
    func_0x00010c2226c0(*(undefined8 *)(puVar2 + lVar26));
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar26));
    uVar4 = *(undefined8 *)(puVar2 + lVar26);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181900(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0c40;
    if (puVar31 == (undefined8 *)0x0) {
      lVar26 = (long)_DAT_11276c344;
    }
    else {
      func_0x00010bfe5b00(puVar31);
      func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar26 = (long)_DAT_11276c344;
      func_0x00010c1a9f00(*(undefined8 *)(puVar2 + lVar26));
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b10c8;
      puVar12 = puVar31;
      func_0x00010bf529e0(puVar31);
      func_0x00010bf8d060(puVar2);
      func_0x00010c22d8e0((double)(long)puVar12,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar3;
      func_0x000107c79a44();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(puVar2 + _DAT_11276c348));
      _objc_release(puVar15);
      _objc_release(puVar3);
    }
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar26));
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + _DAT_11276c348));
    iVar1 = (int)*(undefined8 *)(puVar2 + lVar30);
    func_0x00010c074c20();
    if (iVar1 == 0) {
      puVar12 = param_3;
      func_0x00010c116500(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar32));
      _objc_release(puVar12);
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar32));
    }
    func_0x00010c1cbe20(puVar2);
    _objc_release(puVar31);
  }
  _objc_release(puVar28);
  _objc_release(puVar29);
LAB_107c7170c:
  _objc_release(lVar25);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 107c7119c; end: 107c7174b; -[SCDiscoverFeedLabelFooterView setViewModel:imageFetchingService:friendsContextLabelBuilder:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7119c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c2328;
  func_0x00010bf71540(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  func_0x00010c0b84c0(param_6,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(param_6);
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + _DAT_11276c354) = 0;
    bVar7 = 1;
  }
  else {
    lVar10 = lVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf1f3c0();
    lVar9 = (long)_DAT_11276c354;
    *(char *)(param_1 + lVar9) = (char)lVar11;
    _objc_release(lVar10);
    bVar7 = *(byte *)(param_1 + lVar9) ^ 1;
  }
  lVar11 = (long)_DAT_11276c350;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar11),param_2,bVar7 & 1);
  lVar10 = (long)_DAT_11276c358;
  puVar12 = *(undefined **)(param_1 + lVar10);
  _objc_retain(param_3);
  _objc_retain(puVar12);
  puVar13 = param_3;
  if (param_3 != puVar12) {
    if (puVar12 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      func_0x00010c071ae0(param_3,param_2,puVar12);
      _objc_release(puVar12);
      _objc_release(param_3);
      if (((ulong)puVar13 & 1) != 0) goto LAB_107c7170c;
    }
    puVar13 = param_3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar13;
    _objc_release(uVar8);
    puVar13 = param_3;
    func_0x00010bf4d880(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11276c328;
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar10),param_2,puVar13);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010bf4d880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,puVar13 == (undefined *)0x0);
    _objc_release(puVar13);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c334),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c330),param_2,1);
    puVar13 = param_3;
    func_0x00010bf28980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 == (undefined *)0x0) {
      func_0x00010c182940(param_1);
    }
    else {
      puVar13 = param_3;
      func_0x00010bf28980(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed8900(param_1,param_2,puVar13,param_5);
      _objc_release(puVar13);
    }
    puVar13 = param_3;
    func_0x00010bf5b380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11276c33c;
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar10),param_2,puVar13);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010bf5b380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,puVar13 == (undefined *)0x0);
    _objc_release(puVar13);
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c074c20(uVar8);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c34c),param_2,uVar8);
    uVar3 = *(ulong *)(param_1 + lVar10);
    func_0x00010c074c20();
    if ((uVar3 & 1) == 0) {
      puVar12 = param_3;
      func_0x00010bf5b3c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR_PTR_1126d73b0;
        _objc_alloc(PTR_PTR_1126d73b0);
        puVar14 = param_3;
        func_0x00010bf5b3c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0519c0(puVar13,param_2,puVar14);
        _objc_release(puVar14);
      }
      _objc_release(puVar12);
      puVar12 = param_3;
      func_0x00010bf13300(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_3;
      func_0x00010bf95f20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    lVar9 = (long)_DAT_11276c340;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar9),param_2,puVar13);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,puVar13 == (undefined *)0x0);
    lVar9 = (long)_DAT_11276c338;
    func_0x00010c1aa2c0(*(undefined8 *)(param_1 + lVar9),param_2,param_4);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar9),param_2,puVar12);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,puVar12 == (undefined *)0x0);
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x49);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181900(uVar8,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b0c40;
    if (puVar14 == (undefined *)0x0) {
      lVar9 = (long)_DAT_11276c344;
    }
    else {
      puVar5 = puVar14;
      func_0x00010bfe5b00(puVar14);
      func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,puVar4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)_DAT_11276c344;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar9),param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b10c8;
      puVar5 = puVar14;
      func_0x00010bf529e0(puVar14);
      lVar6 = param_1;
      func_0x00010bf8d060(param_1);
      func_0x00010c22d8e0((double)(long)puVar5,puVar4,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000107c79a44();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276c348),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,puVar14 == (undefined *)0x0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c348),param_2,
                        puVar14 == (undefined *)0x0);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
    func_0x00010c074c20();
    if (iVar1 == 0) {
      puVar4 = param_3;
      func_0x00010c116500(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11),param_2,puVar4 == (undefined *)0x0);
      _objc_release(puVar4);
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11),param_2,1);
    }
    func_0x00010c1cbe20(param_1);
    _objc_release(puVar14);
  }
  _objc_release(puVar12);
  _objc_release(puVar13);
LAB_107c7170c:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c7174c; end: 107c717e3; -[SCDiscoverFeedLabelFooterView setContentSubtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7174c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276c358;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf4d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf4d780(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276c32c));
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11276c334),PTR_s_setHidden__1126479f8,0);
    return;
  }
  return;
}



/* Entry: 107c717e4; end: 107c71903; -[SCDiscoverFeedLabelFooterView _updateFriendsContextViewWithCalloutLabel:friendsContextLabelBuilder:] */

void FUN_107c717e4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    func_0x00010bf57500(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010bf223a0(lVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c71904; end: 107c719ff;  */

void FUN_107c71904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107c71a00;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_50 = param_2;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107c71a00; end: 107c71a3f;  */

void FUN_107c71a00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdce200(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c71a40; end: 107c71c0f; -[SCDiscoverFeedLabelFooterView _applyFriendsContextText:iconImage:forCalloutLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c71a40(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + _DAT_11276c358);
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_5);
  if (lVar1 == param_5) {
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
  else {
    if (param_5 == 0) {
      _objc_release();
      _objc_release(lVar1);
      goto LAB_107c71be4;
    }
    lVar2 = lVar1;
    func_0x00010c071ae0();
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_107c71be4;
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c182940(param_1);
  }
  else {
    lVar1 = param_3;
    FUN_107c798f4(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276c32c));
    _objc_release(lVar1);
    uVar3 = param_4;
    func_0x00010bfe9720(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11276c330;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar1));
    _objc_release(puVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c334));
  }
  func_0x00010c1cbe20(param_1);
LAB_107c71be4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c71c10; end: 107c71c97; -[SCDiscoverFeedLabelFooterView _openProfileButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c71c10(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_11276c354) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + _DAT_11276c358);
  func_0x00010c116500();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = param_1 + _DAT_11276c35c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd0140();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c71c98; end: 107c71cef; +[SCDiscoverFeedLabelFooterView sizeForAttributedString:maxWidth:lineHeight:numberOfLines:] */

undefined1  [16]
FUN_107c71c98(undefined8 param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,long param_7,ulong param_8)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if (param_7 != 0) {
    dVar2 = 1.79769313486232e+308;
    dVar1 = 1.79769313486232e+308;
    if (param_8 != 0) {
      dVar1 = (double)(long)param_2 * (double)param_8;
    }
    func_0x00010bf20bc0(param_1,dVar1,param_7,param_6,1,0);
    auVar3._0_8_ = (long)dVar2;
    auVar3._8_8_ = (long)param_4;
    return auVar3;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 107c71cf0; end: 107c71ee3; +[SCDiscoverFeedLabelFooterView sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_107c71cf0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    dVar4 = *(double *)PTR__CGSizeZero_110347620;
    dVar3 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    goto LAB_107c71e78;
  }
  lVar1 = param_4;
  func_0x00010bf4d880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    lVar1 = param_4;
    func_0x00010bf4d8a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    dVar2 = 20.0;
    func_0x00010c23d180(param_1,0x4034000000000000,param_2,param_3,lVar1,2);
    _objc_release(lVar1);
    dVar2 = dVar2 + 4.0;
  }
  lVar1 = param_4;
  func_0x00010bf4d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010bf4d7a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = 16.0;
    func_0x00010c23d180(param_1,0x4030000000000000,param_2,param_3,lVar1,1);
    _objc_release(lVar1);
    dVar2 = dVar2 + dVar3 + 4.0;
  }
  lVar1 = param_4;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010bf13300();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_4;
      func_0x00010bf95f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) goto LAB_107c71e48;
      lVar1 = param_4;
      func_0x00010bf5b3a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      dVar3 = 16.0;
      func_0x00010c23d180(param_1,0x4030000000000000,param_2,param_3,lVar1,1);
      _objc_release(lVar1);
      dVar3 = dVar3 + 4.0;
    }
    else {
      _objc_release();
LAB_107c71e48:
      dVar3 = 24.0;
    }
    dVar2 = dVar2 + dVar3;
  }
  dVar3 = 4.0;
  func_0x00010b816218();
  dVar4 = (double)(long)(param_1 * dVar3) / dVar3;
  func_0x00010b816218();
  dVar3 = (double)(long)((dVar2 + 4.0) * dVar3) / dVar3;
LAB_107c71e78:
  _objc_release(param_4);
  auVar5._8_8_ = dVar3;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 107c71ee4; end: 107c71f17; -[SCDiscoverFeedLabelFooterView handleOpenProfileButtonTap:] */

undefined8 FUN_107c71ee4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c080ae0();
  if ((int)uVar1 != 0) {
    func_0x00010be6d4a0(param_1);
  }
  return uVar1;
}



/* Entry: 107c71f18; end: 107c71fb7; -[SCDiscoverFeedLabelFooterView isTapOnOpenProfileButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c71f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11276c354) & 1) == 0) {
    lVar3 = (long)_DAT_11276c350;
    uVar1 = *(ulong *)(param_1 + lVar3);
    if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
      func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bf20c00(uVar2);
      _CGRectContainsPoint();
      goto LAB_107c71f68;
    }
  }
  uVar2 = 0;
LAB_107c71f68:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107c71fb8; end: 107c7205f; -[SCDiscoverFeedLabelFooterView openProfileAccessibilityCustomAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c71fb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((*(byte *)(param_1 + _DAT_11276c354) & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11276c358);
    func_0x00010c116500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIAccessibilityCustomAction_1126d0d38;
      _objc_alloc(PTR__OBJC_CLASS___UIAccessibilityCustomAction_1126d0d38);
      puVar2 = puVar3;
      func_0x000107c7acf0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02db60(puVar3,param_2,puVar2,param_1,PTR_s__openProfileButtonTapped_112578ec8);
      _objc_release(puVar2);
      goto LAB_107c7204c;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_107c7204c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c72060; end: 107c7207f; -[SCDiscoverFeedLabelFooterView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c72060(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276c35c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c72080; end: 107c72093; -[SCDiscoverFeedLabelFooterView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c72080(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276c35c,param_3);
  return;
}



/* Entry: 107c72094; end: 107c7217f; -[SCDiscoverFeedLabelFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c72094(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276c35c);
  _objc_storeStrong(param_1 + _DAT_11276c350,0);
  _objc_storeStrong(param_1 + _DAT_11276c34c,0);
  _objc_storeStrong(param_1 + _DAT_11276c338,0);
  _objc_storeStrong(param_1 + _DAT_11276c358,0);
  _objc_storeStrong(param_1 + _DAT_11276c348,0);
  _objc_storeStrong(param_1 + _DAT_11276c344,0);
  _objc_storeStrong(param_1 + _DAT_11276c340,0);
  _objc_storeStrong(param_1 + _DAT_11276c33c,0);
  _objc_storeStrong(param_1 + _DAT_11276c330,0);
  _objc_storeStrong(param_1 + _DAT_11276c334,0);
  _objc_storeStrong(param_1 + _DAT_11276c32c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c328,0);
  return;
}



/* Entry: 107c72180; end: 107c721a7; -[SCDiscoverFeedLabelFooterViewModel initWithContentTitleString:contentSubtitleString:creatorDisplayNameString:creatorDisplayNameIcon:story:spotlightEngagementMetadata:sectionKey:storiesConfigProvider:] */

void FUN_107c72180(void)

{
  func_0x00010c003ce0();
  return;
}



/* Entry: 107c721a8; end: 107c7253b; -[SCDiscoverFeedLabelFooterViewModel initWithContentTitleString:contentSubtitleString:creatorDisplayNameString:creatorDisplayNameIcon:story:spotlightEngagementMetadata:calloutLabel:sectionKey:storiesConfigProvider:] */

long FUN_107c721a8(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,long param_10,long param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_b0;
  undefined **ppuStack_98;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126d5a78;
  lVar11 = param_10;
  lVar8 = param_11;
  func_0x00010c0718a0();
  ppuStack_98 = param_4;
  if ((int)puVar1 == 0) {
    lVar10 = 0;
  }
  else {
    puStack_b0 = (undefined *)0x0;
    if ((param_7 != 0) && (param_10 != 0)) {
      puStack_b0 = PTR_PTR_1126b02a8;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460();
      _objc_release(puVar1);
    }
    if (param_9 != 0) {
      _objc_release(param_4);
      ppuStack_98 = &PTR____CFConstantStringClassReference_110eb4218;
    }
    lVar10 = param_3;
    FUN_107c797a0(param_3,0,param_11);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    FUN_107c797a0(param_3,1,param_11);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuStack_98;
    FUN_107c798f4(ppuStack_98,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuStack_98;
    FUN_107c798f4(ppuStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x000107c7999c(param_5,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x000107c7999c(param_5,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d5a38;
    _objc_alloc();
    func_0x00010c04d3e0();
    puVar7 = PTR_PTR_1126d73b8;
    _objc_alloc();
    func_0x00010c04b300();
    lVar11 = lVar10;
    lVar8 = lVar2;
    func_0x00010c003cc0();
    _objc_retain();
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(lVar2);
    _objc_release(lVar10);
    _objc_release(puStack_b0);
    lVar10 = param_1;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuStack_98);
  _objc_release(param_3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return lVar10;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  func_0x00010c067ec0();
  _objc_release(lVar11);
  if ((int)lVar9 == 3) {
    lVar11 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c2328;
    func_0x00010bf714c0(PTR_PTR_1126c2328);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    func_0x00010c0b84c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar11);
    if (lVar9 == 0) {
      lVar11 = 0;
    }
    else {
      lVar10 = lVar9;
      func_0x00010c296d80(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf1f3c0();
      _objc_release(lVar10);
    }
    _objc_release(lVar9);
  }
  else {
    lVar11 = 0;
  }
  _objc_release(lVar8);
  return lVar11;
}



/* Entry: 107c7253c; end: 107c72637; +[SCDiscoverFeedLabelFooterViewModel isEnabledForSectionKey:storiesConfigProvider:] */

long FUN_107c7253c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c067ec0();
  _objc_release(param_3);
  if ((int)uVar1 == 3) {
    lVar5 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2328;
    func_0x00010bf714c0(PTR_PTR_1126c2328);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c0b84c0(lVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar5);
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010c296d80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf1f3c0();
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  else {
    lVar5 = 0;
  }
  _objc_release(param_4);
  return lVar5;
}



/* Entry: 107c72638; end: 107c72a7f; -[SCDiscoverFeedLabelOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c72638(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa418;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1198;
    _objc_opt_new();
    puVar3 = puVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c360);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c360) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1cfce0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c364);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c364) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c368);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c368) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c36c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c36c) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c370);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c370) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c374);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c374) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c378);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c378) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c37c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c37c) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c380);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c380) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c384);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c384) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c72a80; end: 107c72c57;  */

void FUN_107c72a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4000000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x000107c7ad50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x000107c78b44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fd0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c72c58; end: 107c72cef;  */

void FUN_107c72c58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d73a8;
  _objc_opt_new(PTR_PTR_1126d73a8);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c72cf0; end: 107c72d43;  */

void FUN_107c72cf0(void)

{
  _objc_opt_new(PTR_PTR_1126d5ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c72d44; end: 107c72dab; -[SCDiscoverFeedLabelOverlayView setAutoPlayGradientActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c72d44(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276c388) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276c388) = (char)param_3;
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c1681a0(0x3fd3333333333333,PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c1cbe20(param_1);
  func_0x00010c08cdc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 107c72dac; end: 107c72dfb; -[SCDiscoverFeedLabelOverlayView layoutSubviews] */

void FUN_107c72dac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa418;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bdce300(param_1);
  func_0x00010be49820(param_1);
  return;
}



/* Entry: 107c72dfc; end: 107c73a27; -[SCDiscoverFeedLabelOverlayView _layoutSubviewsBottomToTop] */

/* WARNING: Possible PIC construction at 0x000107c72e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c72e94) */
/* WARNING: Removing unreachable block (ram,0x000107c72edc) */
/* WARNING: Removing unreachable block (ram,0x000107c72f04) */
/* WARNING: Removing unreachable block (ram,0x000107c72f54) */
/* WARNING: Removing unreachable block (ram,0x000107c72f58) */
/* WARNING: Removing unreachable block (ram,0x000107c72f5c) */
/* WARNING: Removing unreachable block (ram,0x000107c7300c) */
/* WARNING: Removing unreachable block (ram,0x000107c730a4) */
/* WARNING: Removing unreachable block (ram,0x000107c730bc) */
/* WARNING: Removing unreachable block (ram,0x000107c7305c) */
/* WARNING: Removing unreachable block (ram,0x000107c73098) */
/* WARNING: Removing unreachable block (ram,0x000107c7309c) */
/* WARNING: Removing unreachable block (ram,0x000107c730a0) */
/* WARNING: Removing unreachable block (ram,0x000107c730cc) */
/* WARNING: Removing unreachable block (ram,0x000107c73178) */
/* WARNING: Removing unreachable block (ram,0x000107c73154) */
/* WARNING: Removing unreachable block (ram,0x000107c731c0) */
/* WARNING: Removing unreachable block (ram,0x000107c73158) */
/* WARNING: Removing unreachable block (ram,0x000107c731ac) */
/* WARNING: Removing unreachable block (ram,0x000107c731d0) */
/* WARNING: Removing unreachable block (ram,0x000107c73284) */
/* WARNING: Removing unreachable block (ram,0x000107c73288) */
/* WARNING: Removing unreachable block (ram,0x000107c732fc) */
/* WARNING: Removing unreachable block (ram,0x000107c7328c) */
/* WARNING: Removing unreachable block (ram,0x000107c73338) */
/* WARNING: Removing unreachable block (ram,0x000107c73418) */
/* WARNING: Removing unreachable block (ram,0x000107c733d0) */
/* WARNING: Removing unreachable block (ram,0x000107c73450) */
/* WARNING: Removing unreachable block (ram,0x000107c734e0) */
/* WARNING: Removing unreachable block (ram,0x000107c734f4) */
/* WARNING: Removing unreachable block (ram,0x000107c73508) */
/* WARNING: Removing unreachable block (ram,0x000107c739e0) */
/* WARNING: Removing unreachable block (ram,0x000107c739fc) */
/* WARNING: Removing unreachable block (ram,0x000107c73a20) */
/* WARNING: Removing unreachable block (ram,0x000107c7351c) */
/* WARNING: Removing unreachable block (ram,0x000107c73520) */
/* WARNING: Removing unreachable block (ram,0x000107c73528) */
/* WARNING: Removing unreachable block (ram,0x000107c736a4) */
/* WARNING: Removing unreachable block (ram,0x000107c736ac) */
/* WARNING: Removing unreachable block (ram,0x000107c736b0) */
/* WARNING: Removing unreachable block (ram,0x000107c736b4) */
/* WARNING: Removing unreachable block (ram,0x000107c736c4) */
/* WARNING: Removing unreachable block (ram,0x000107c736c8) */
/* WARNING: Removing unreachable block (ram,0x000107c736cc) */
/* WARNING: Removing unreachable block (ram,0x000107c7353c) */
/* WARNING: Removing unreachable block (ram,0x000107c737cc) */
/* WARNING: Removing unreachable block (ram,0x000107c734cc) */
/* WARNING: Removing unreachable block (ram,0x000107c737dc) */
/* WARNING: Removing unreachable block (ram,0x000107c738a4) */
/* WARNING: Removing unreachable block (ram,0x000107c738ac) */
/* WARNING: Removing unreachable block (ram,0x000107c73884) */
/* WARNING: Removing unreachable block (ram,0x000107c738b0) */
/* WARNING: Removing unreachable block (ram,0x000107c738e8) */
/* WARNING: Removing unreachable block (ram,0x000107c73904) */
/* WARNING: Removing unreachable block (ram,0x000107c73998) */
/* WARNING: Removing unreachable block (ram,0x000107c73a24) */
/* WARNING: Removing unreachable block (ram,0x000107c739b0) */

double FUN_107c72dfc(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010be07240(param_2);
  dVar1 = param_1;
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  return (double)(long)(param_1 * dVar1) / dVar1;
}



/* Entry: 107c73a28; end: 107c73b23; -[SCDiscoverFeedLabelOverlayView _effectiveTextBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107c73a28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf20c00();
  dVar1 = param_1;
  _CGRectGetMinX();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar1 = dVar1 + param_1 * 0.0444;
  dVar2 = dVar1;
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  return (double)(long)(dVar1 * dVar2) / dVar2;
}



/* Entry: 107c73b24; end: 107c73b9b; -[SCDiscoverFeedLabelOverlayView _applyLabelTextAlignment] */

/* WARNING: Possible PIC construction at 0x000107c73b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c73b60) */
/* WARNING: Removing unreachable block (ram,0x000107c73b70) */
/* WARNING: Removing unreachable block (ram,0x000107c73b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c73b24(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276c38c);
  if (lVar1 != 2) {
    lVar1 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c364),PTR_s_setTextAlignment__112662638,lVar1);
  return;
}



/* Entry: 107c73b9c; end: 107c73e33; -[SCDiscoverFeedLabelOverlayView _layoutSubtitleLabelWithEffectiveTextBounds:startYPos:layoutTopToBottom:] */

/* WARNING: Possible PIC construction at 0x000107c73d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c73d1c) */
/* WARNING: Removing unreachable block (ram,0x000107c73d28) */
/* WARNING: Removing unreachable block (ram,0x000107c73d2c) */
/* WARNING: Removing unreachable block (ram,0x000107c73d94) */
/* WARNING: Removing unreachable block (ram,0x000107c73d30) */
/* WARNING: Removing unreachable block (ram,0x000107c73dd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c73b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,long param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  
  lVar4 = (long)_DAT_11276c378;
  lVar1 = *(long *)(param_6 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = (long)_DAT_11276c368;
    lVar1 = *(long *)(param_6 + lVar3);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    _objc_release();
    lVar3 = (long)_DAT_11276c368;
  }
  func_0x00010c23d5a0(param_3,*(undefined8 *)(param_6 + lVar3));
  uVar2 = *(undefined8 *)(param_6 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x402b000000000000;
  dVar6 = 13.5;
  func_0x00010c23d5a0(0x402b000000000000,0x402b000000000000);
  _objc_release(uVar2);
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  if (param_8 == 0) {
    param_5 = param_5 - dVar6;
  }
  func_0x00010b8162e0();
  func_0x00010b81681c(param_6,*(undefined8 *)(param_6 + _DAT_11276c38c));
  func_0x00010c269d40(*(undefined8 *)(param_6 + lVar4));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_5,uVar5,dVar6);
  return;
}



/* Entry: 107c73e34; end: 107c73f0f; -[SCDiscoverFeedLabelOverlayView _layoutTitleLabelWithEffectiveTextBounds:startYPos:layoutTopToBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c73e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,long param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  lVar1 = (long)_DAT_11276c364;
  dVar3 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_6 + lVar1));
  if (param_8 == 0) {
    param_5 = param_5 - dVar3;
  }
  uVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010b8162e0(uVar2,param_5,param_1,dVar3);
  func_0x00010b81681c(param_6,*(undefined8 *)(param_6 + _DAT_11276c38c));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_6 + lVar1),PTR_s_setFrame__112645658)
  ;
  return;
}



/* Entry: 107c73f10; end: 107c748d3; -[SCDiscoverFeedLabelOverlayView setViewModel:imageFetchingService:friendsContextLabelBuilder:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c73f10(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 *param_7,undefined1 *param_8,
                  undefined1 *param_9)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined8 *puStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  long lStack_260;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1c8 [256];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_6;
  puVar8 = param_7;
  puVar9 = param_8;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar10 = (long)_DAT_11276c390;
  puVar13 = *(undefined8 **)(param_4 + lVar10);
  _objc_retain(param_6);
  _objc_retain(puVar13);
  if (param_6 == puVar13) {
    _objc_release(puVar13);
    _objc_release(param_6);
  }
  else {
    if (puVar13 == (undefined8 *)0x0) {
      _objc_release();
    }
    else {
      puVar11 = param_6;
      puVar1 = puVar13;
      func_0x00010c071ae0();
      _objc_release(puVar13);
      _objc_release(param_6);
      if (((ulong)puVar11 & 1) != 0) goto LAB_107c74874;
    }
    puVar1 = param_6;
    puStack_270 = param_8;
    puStack_268 = param_7;
    puStack_258 = param_9;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_4 + lVar10);
    *(undefined8 **)(param_4 + lVar10) = puVar1;
    _objc_release(uVar6);
    puVar1 = param_6;
    func_0x00010beecec0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_4);
    _objc_release(puVar1);
    func_0x00010c0def20(param_6);
    lStack_260 = (long)_DAT_11276c364;
    func_0x00010c1cfce0(*(undefined8 *)(param_4 + lStack_260));
    puVar1 = param_6;
    func_0x00010c1551e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined8 *)0x0) {
      lVar10 = (long)_DAT_11276c374;
      uVar2 = *(ulong *)(param_4 + lVar10);
      func_0x00010c06f880();
      _objc_release(puVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_4 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_4 + lVar10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_4);
        _objc_release(uVar6);
      }
    }
    puVar3 = PTR_PTR_1126d73b0;
    _objc_alloc(PTR_PTR_1126d73b0);
    puVar1 = param_6;
    func_0x00010c1551e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0519c0(puVar3);
    lVar14 = (long)_DAT_11276c374;
    uVar6 = *(undefined8 *)(param_4 + lVar14);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = param_6;
    func_0x00010c261040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined8 *)0x0) {
      lVar10 = (long)_DAT_11276c378;
      uVar2 = *(ulong *)(param_4 + lVar10);
      func_0x00010c06f880();
      _objc_release(puVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_4 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_4 + lVar10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_4);
        _objc_release(uVar6);
      }
    }
    puVar3 = PTR_PTR_1126d73b0;
    _objc_alloc(PTR_PTR_1126d73b0);
    puVar1 = param_6;
    func_0x00010c261040(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0519c0(puVar3);
    lVar15 = (long)_DAT_11276c378;
    uVar6 = *(undefined8 *)(param_4 + lVar15);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010c261060(param_6);
    uVar6 = *(undefined8 *)(param_4 + lVar15);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
    _objc_release(uVar6);
    puVar1 = param_6;
    func_0x00010bf8f120();
    if ((int)puVar1 != 0) {
      lVar10 = (long)_DAT_11276c370;
      uVar2 = *(ulong *)(param_4 + lVar10);
      func_0x00010c06f880();
      if ((uVar2 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_4 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_4 + lVar10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_4);
        _objc_release(uVar6);
      }
    }
    func_0x00010bf8f120(param_6);
    uVar6 = *(undefined8 *)(param_4 + _DAT_11276c370);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar6);
    uStack_a0 = *(undefined8 *)(param_4 + lStack_260);
    lStack_288 = (long)_DAT_11276c368;
    lVar10 = (long)_DAT_11276c36c;
    uStack_98 = *(undefined8 *)(param_4 + lStack_288);
    uStack_90 = *(undefined8 *)(param_4 + lVar10);
    uStack_88 = *(undefined8 *)(param_4 + _DAT_11276c360);
    puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lStack_280 = (long)_DAT_11276c37c;
    lStack_278 = (long)_DAT_11276c380;
    uStack_c8 = *(undefined8 *)(param_4 + lStack_280);
    uStack_c0 = *(undefined8 *)(param_4 + lStack_278);
    uStack_b8 = *(undefined8 *)(param_4 + lVar15);
    uStack_b0 = *(undefined8 *)(param_4 + lVar14);
    uStack_a8 = *(undefined8 *)(param_4 + _DAT_11276c384);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    _objc_retain(puVar13);
    puVar1 = puVar13;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      lVar14 = *plStack_200;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_200 != lVar14) {
            _objc_enumerationMutation(puVar13);
          }
          uVar6 = *(undefined8 *)(lStack_208 + (long)puVar11 * 8);
          func_0x00010c230e40(param_6);
          func_0x00010c1a7f60(uVar6);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar1 != puVar11);
        puVar1 = puVar13;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(puVar13);
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    _objc_retain(puVar3);
    puVar1 = &uStack_250;
    puVar8 = auStack_1c8;
    puVar9 = (undefined1 *)0x10;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar14 = *plStack_240;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_240 != lVar14) {
            _objc_enumerationMutation(puVar3);
          }
          uVar6 = *(undefined8 *)(lStack_248 + (long)puVar12 * 8);
          func_0x00010c230e40(param_6);
          func_0x00010bfe6360(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7f60();
          _objc_release(uVar6);
          puVar12 = puVar12 + 1;
        } while (puVar4 != puVar12);
        puVar1 = &uStack_250;
        puVar8 = auStack_1c8;
        puVar9 = (undefined1 *)0x10;
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar11 = param_6;
    func_0x00010c230e40();
    param_7 = puStack_268;
    param_8 = puStack_270;
    if (((ulong)puVar11 & 1) == 0) {
      puVar1 = param_6;
      func_0x00010c155120(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      FUN_107c78dbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(param_4 + lVar10));
      _objc_release(puVar11);
      _objc_release(puVar1);
      puVar1 = param_6;
      func_0x00010c25a9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010bf529e0();
      _objc_release(puVar1);
      lVar10 = lStack_288;
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = param_6;
        func_0x00010c260dc0(param_6);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lStack_288;
        func_0x00010c16b720(*(undefined8 *)(param_4 + lStack_288));
      }
      else {
        func_0x00010bf20c00(*(undefined8 *)(param_4 + lStack_288));
        puVar11 = param_6;
        func_0x00010c25a9a0(param_6);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar11;
        FUN_107c78f90(param_3 + -2.0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar1;
        func_0x000107c78ef4(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b720(*(undefined8 *)(param_4 + lVar10));
        _objc_release(puVar11);
      }
      lVar14 = lStack_280;
      _objc_release(puVar1);
      puVar1 = param_6;
      func_0x00010c2711a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(param_4 + lStack_260));
      _objc_release(puVar1);
      puVar1 = param_6;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar11;
      func_0x00010b8047e8();
      *(undefined8 **)(param_4 + _DAT_11276c38c) = puVar5;
      _objc_release(puVar11);
      _objc_release(puVar1);
      func_0x00010c260de0(param_6);
      func_0x00010c1677c0(*(undefined8 *)(param_4 + lVar10));
      puVar1 = param_6;
      func_0x00010bf13300();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = *(ulong *)(param_4 + lVar14);
        func_0x00010c06f880();
        _objc_release(puVar1);
        if ((uVar2 & 1) == 0) {
          func_0x00010bf57500(*(undefined8 *)(param_4 + lVar14));
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_4 + lVar14);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1aa2c0();
          _objc_release(uVar6);
          uVar6 = *(undefined8 *)(param_4 + lVar14);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(param_4);
          _objc_release(uVar6);
        }
      }
      uVar6 = *(undefined8 *)(param_4 + lVar14);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa2c0();
      _objc_release(uVar6);
      puVar1 = param_6;
      func_0x00010bf13300(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_4 + lVar14);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar6);
      _objc_release(puVar1);
      puVar1 = param_6;
      func_0x00010c26e9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lStack_278;
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = *(ulong *)(param_4 + lStack_278);
        func_0x00010c06f880();
        _objc_release(puVar1);
        if ((uVar2 & 1) == 0) {
          func_0x00010bf57500(*(undefined8 *)(param_4 + lVar10));
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_4 + lVar10);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(param_4);
          _objc_release(uVar6);
        }
      }
      puVar1 = param_6;
      func_0x00010c26e9e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_4 + lVar10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar6);
      _objc_release(puVar1);
      puVar1 = param_6;
      func_0x00010c26e9e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_4 + lVar10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      _objc_release(puVar1);
      puVar11 = param_6;
      func_0x00010bf28980();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar11;
      puVar8 = param_8;
      puVar9 = puStack_258;
      func_0x00010bed8920(param_4);
      _objc_release(puVar11);
    }
    func_0x00010c1cbe20(param_4);
    _objc_release(puVar3);
    _objc_release(puVar13);
    param_9 = puStack_258;
  }
LAB_107c74874:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  puVar11 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_298 = FUN_107c748d4;
    puStack_2d0 = puVar13;
    lStack_2c8 = param_4;
    puStack_2c0 = param_8;
    puStack_2b8 = param_7;
    lStack_2b0 = lVar10;
    puStack_2a8 = param_6;
    puStack_2a0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    uVar6 = *(undefined8 *)((long)puVar11 + (long)_DAT_11276c384);
    func_0x00010bfe6360(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar6);
    if (puVar1 != (undefined8 *)0x0) {
      func_0x00010bf57500(puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined1 *)0x0) {
        _objc_initWeak(auStack_2d8,puVar11);
        _objc_copyWeak(auStack_2e0,auStack_2d8);
        _objc_retain(puVar1);
        func_0x00010bf223a0(puVar7);
        _objc_release(puVar1);
        _objc_destroyWeak(auStack_2e0);
        _objc_destroyWeak(auStack_2d8);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    return;
  }
  return;
}



/* Entry: 107c748d4; end: 107c74a3b; -[SCDiscoverFeedLabelOverlayView _updateFriendsContextViewWithCalloutLabel:friendsContextLabelBuilder:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c748d4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c384);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010bf57500(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010bf223a0(lVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c74a3c; end: 107c74b37;  */

void FUN_107c74a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107c74b38;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_50 = param_2;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107c74b38; end: 107c74b77;  */

void FUN_107c74b38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdce200(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c74b78; end: 107c74d3f; -[SCDiscoverFeedLabelOverlayView _applyFriendsContextText:iconImage:forCalloutLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c74b78(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = (long)_DAT_11276c390;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c230e40();
  if ((uVar1 & 1) != 0) goto LAB_107c74d18;
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_5);
  if (lVar4 == param_5) {
    _objc_release(param_5);
    _objc_release(lVar4);
    _objc_release(lVar4);
  }
  else {
    if (param_5 == 0) {
      _objc_release();
      _objc_release(lVar4);
      goto LAB_107c74d18;
    }
    lVar2 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,param_5);
    _objc_release(param_5);
    _objc_release(lVar4);
    _objc_release(lVar4);
    if ((int)lVar2 == 0) goto LAB_107c74d18;
  }
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    lVar4 = (long)_DAT_11276c384;
    uVar1 = *(ulong *)(param_1 + lVar4);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar3);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9720();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c74d18:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c74d40; end: 107c74d83; -[SCDiscoverFeedLabelOverlayView setBottomInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c74d40(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_2 + _DAT_11276c398);
  dVar3 = ABS(dVar2 - param_1);
  dVar2 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + _DAT_11276c398) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107c74d84; end: 107c74d93; -[SCDiscoverFeedLabelOverlayView topObstructionHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c74d84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c394);
}



/* Entry: 107c74d94; end: 107c74da3; -[SCDiscoverFeedLabelOverlayView setTopObstructionHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c74d94(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276c394) = param_1;
  return;
}



/* Entry: 107c74da4; end: 107c74db3; -[SCDiscoverFeedLabelOverlayView bottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c74da4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c398);
}



/* Entry: 107c74db4; end: 107c74dc3; -[SCDiscoverFeedLabelOverlayView autoPlayGradientActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107c74db4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276c388);
}



/* Entry: 107c74dc4; end: 107c74e93; -[SCDiscoverFeedLabelOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c74dc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c384,0);
  _objc_storeStrong(param_1 + _DAT_11276c380,0);
  _objc_storeStrong(param_1 + _DAT_11276c37c,0);
  _objc_storeStrong(param_1 + _DAT_11276c390,0);
  _objc_storeStrong(param_1 + _DAT_11276c370,0);
  _objc_storeStrong(param_1 + _DAT_11276c36c,0);
  _objc_storeStrong(param_1 + _DAT_11276c368,0);
  _objc_storeStrong(param_1 + _DAT_11276c364,0);
  _objc_storeStrong(param_1 + _DAT_11276c378,0);
  _objc_storeStrong(param_1 + _DAT_11276c374,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c360,0);
  return;
}



/* Entry: 107c74e94; end: 107c74ee7; -[SCDiscoverFeedLabelOverlayViewModel initWithSecondaryTextPrefixIcon:secondaryText:title:subtitlePrefixIcon:subtitle:storyPosters:enableAdSlug:subtitleAlpha:subtitlePrefixIconAlpha:avatarViewModel:avatarPlacementType:tileBadge:labelPlacementType:accessibilityIdentifier:shouldHideTitles:ctaViewModel:numberOfLines:compactSubsUserStoriesBadgeStyle:compactSubsTitleGradientMultiplier:] */

void FUN_107c74e94(void)

{
  func_0x00010c042c80();
  return;
}



/* Entry: 107c74ee8; end: 107c74fdf; -[SCEngagementBadgeViewModel initWithSpotlightEngagementMetadata:] */

undefined8 FUN_107c74ee8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_107c74fb8:
    uVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c29c5c0();
    lVar2 = param_3;
    if (lVar1 < 1) {
      lVar1 = param_3;
      func_0x00010bf1f680();
      if (lVar1 < 1) {
        lVar1 = param_3;
        func_0x00010c123100();
        if (lVar1 < 1) {
          lVar1 = param_3;
          func_0x00010c24b580();
          if (lVar1 == 0) goto LAB_107c74fb8;
          func_0x00010c24b580(param_3);
          uVar3 = 0x7e;
        }
        else {
          func_0x00010c123100(param_3);
          uVar3 = 0x29;
        }
      }
      else {
        func_0x00010bf1f680(param_3);
        uVar3 = 0x14e;
      }
    }
    else {
      func_0x00010c29c5c0(param_3);
      uVar3 = 0xf0;
    }
    func_0x00010c0061c0(param_1,param_2,lVar2,uVar3);
    _objc_retain();
    uVar3 = param_1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar3;
}


