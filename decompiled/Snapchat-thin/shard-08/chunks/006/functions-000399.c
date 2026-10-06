/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10631677c; end: 106316867;  */

void FUN_10631677c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = 0;
  if (param_2 < 4) {
    if (param_2 == 1) {
      uVar1 = param_1;
      func_0x00010c1126e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_2 == 2) {
      uVar1 = param_1;
      func_0x00010c0d9ae0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_2 == 3) {
      uVar1 = param_1;
      func_0x00010c0f3aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_2 == 4) {
    uVar1 = param_1;
    func_0x00010bf0cb60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_2 == 5) {
    uVar1 = param_1;
    func_0x00010c0d9820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_2 == 6) {
    uVar1 = param_1;
    func_0x00010c1125e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106316868; end: 106316baf;  */

void FUN_106316868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_7;
  func_0x00010c2555c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar1 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    puVar7 = param_8;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar7 = puVar1;
    func_0x00010c25b700();
    puVar9 = puVar1;
    func_0x00010c25b6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106317530(puVar7,puVar9,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar7 != (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
    puVar3 = puVar1;
    func_0x00010c25b700();
    puVar9 = puVar1;
    func_0x00010c25b6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106317530(puVar3,puVar9,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
    puVar4 = puVar1;
    func_0x00010c0e8f60();
    puVar9 = puVar1;
    func_0x00010c0e8f40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106317530(puVar4,puVar9,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
    puVar5 = puVar1;
    func_0x00010bf3dae0();
    puVar9 = puVar1;
    func_0x00010bf3dac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106317530(puVar5,puVar9,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar5 != (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
    puVar9 = PTR_PTR_1126c9be0;
    _objc_alloc();
    func_0x00010c055400();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010c0d6c60();
  if (lVar6 == 0) {
    ppuVar8 = &PTR_PTR_1126c9be8;
  }
  else {
    if (lVar6 != 1) goto LAB_106316b44;
    ppuVar8 = &PTR_PTR_1126c9bf0;
  }
  puVar7 = *ppuVar8;
  _objc_alloc(puVar7);
  func_0x00010c00a660();
LAB_106316b44:
  _objc_release(puVar9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106316bb0; end: 106316ca7;  */

void FUN_106316bb0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106316ca8;
  puStack_40 = &UNK_110842e18;
  _objc_retain(param_2);
  uStack_38 = param_2;
  if (lRam00000001136c37f8 != -1) {
    func_0x00010002a2fc(0x1136c37f8,&puStack_58);
  }
  if ((bRam00000001136c37f0 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c252440();
    lVar2 = param_1;
    if (1 < lVar1 - 1U) {
      if (lVar1 != 0) goto LAB_106316c30;
      if (param_3 == 0) {
        lVar2 = 0;
      }
    }
    _objc_retain(lVar2);
  }
  else {
LAB_106316c30:
    lVar2 = 0;
  }
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106316ca8; end: 106316cd7;  */

void FUN_106316ca8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e4ad98,0,0);
  uRam00000001136c37f0 = (char)uVar1;
  return;
}



/* Entry: 106316cd8; end: 106316dcb;  */

void FUN_106316cd8(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain();
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar2 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c09ef00(param_3);
    dVar4 = param_1;
    dVar5 = param_2;
    func_0x00010c27adc0(param_3);
    puVar2 = PTR_PTR_1126c98a0;
    func_0x00010c0689c0(param_1 - dVar4,param_2 - dVar5,param_1,param_2,PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106316dcc; end: 106317057;  */

undefined8
FUN_106316dcc(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double in_stack_00000000;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  
  _fmod(param_1,0x401921fb54442d18);
  dVar3 = param_1 + 6.283185307179586;
  if (0.0 <= param_1) {
    dVar3 = param_1;
  }
  dVar4 = ABS(param_2 - dVar3);
  dVar5 = ABS(param_2 + dVar3) * 2.220446049250313e-16;
  bVar1 = true;
  if ((dVar3 < param_2) && (bVar1 = false, !NAN(dVar4))) {
    bVar1 = dVar4 < 2.2250738585072014e-308;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar2 = dVar4 < dVar5;
  }
  if (bVar2) {
    if (dVar3 <= param_3) {
      return 0;
    }
    dVar4 = ABS(dVar3 - param_3);
    dVar5 = ABS(param_3 + dVar3) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
      bVar1 = dVar4 < dVar5;
    }
    if (bVar1) {
      return 0;
    }
  }
  dVar4 = ABS(param_4 - dVar3);
  dVar5 = ABS(param_4 + dVar3) * 2.220446049250313e-16;
  bVar1 = true;
  if ((dVar3 < param_4) && (bVar1 = false, !NAN(dVar4))) {
    bVar1 = dVar4 < 2.2250738585072014e-308;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar2 = dVar4 < dVar5;
  }
  if (bVar2) {
    if (dVar3 <= param_5) {
      return 1;
    }
    dVar4 = ABS(dVar3 - param_5);
    dVar5 = ABS(dVar3 + param_5) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
      bVar1 = dVar4 < dVar5;
    }
    if (bVar1) {
      return 1;
    }
  }
  dVar4 = ABS(param_6 - dVar3);
  dVar5 = ABS(dVar3 + param_6) * 2.220446049250313e-16;
  bVar1 = true;
  if ((dVar3 < param_6) && (bVar1 = false, !NAN(dVar4))) {
    bVar1 = dVar4 < 2.2250738585072014e-308;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar2 = dVar4 < dVar5;
  }
  if (bVar2) {
    if (dVar3 <= param_7) {
      return 3;
    }
    dVar4 = ABS(dVar3 - param_7);
    dVar5 = ABS(dVar3 + param_7) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
      bVar1 = dVar4 < dVar5;
    }
    if (bVar1) {
      return 3;
    }
  }
  dVar5 = ABS(in_stack_00000000 - dVar3);
  dVar4 = ABS(dVar3 + in_stack_00000000) * 2.220446049250313e-16;
  bVar1 = true;
  if ((dVar3 < in_stack_00000000) && (bVar1 = false, !NAN(dVar5))) {
    bVar1 = dVar5 < 2.2250738585072014e-308;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(dVar5) && !NAN(dVar4))) {
    bVar2 = dVar5 < dVar4;
  }
  if (bVar2) {
    if (dVar3 <= in_stack_00000008) {
      return 3;
    }
    dVar5 = ABS(dVar3 - in_stack_00000008);
    dVar4 = ABS(dVar3 + in_stack_00000008) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
      bVar1 = dVar5 < dVar4;
    }
    if (bVar1) {
      return 3;
    }
  }
  dVar5 = ABS(in_stack_00000010 - dVar3);
  dVar4 = ABS(dVar3 + in_stack_00000010) * 2.220446049250313e-16;
  bVar1 = true;
  if ((dVar3 < in_stack_00000010) && (bVar1 = false, !NAN(dVar5))) {
    bVar1 = dVar5 < 2.2250738585072014e-308;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(dVar5) && !NAN(dVar4))) {
    bVar2 = dVar5 < dVar4;
  }
  if (!bVar2) {
    return 0xffffffffffffffff;
  }
  if (in_stack_00000018 < dVar3) {
    dVar4 = ABS(dVar3 - in_stack_00000018);
    dVar3 = ABS(dVar3 + in_stack_00000018) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar3))) {
      bVar1 = dVar4 < dVar3;
    }
    if (!bVar1) {
      return 0xffffffffffffffff;
    }
  }
  return 2;
}



/* Entry: 106317058; end: 10631716b;  */

void FUN_106317058(undefined8 param_1,double param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_2) {
    dVar1 = param_2;
  }
  NEON_fminnm(dVar1,0x3fe921fb54442d18);
  FUN_106316dcc();
  return;
}



/* Entry: 10631716c; end: 1063172e7;  */

void FUN_10631716c(ulong param_1,ulong param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar4 = param_1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010be36bc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010c27a6c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uVar1 = param_2;
        func_0x00010c27a6c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar4 = 0;
        if (param_5 == 0 && uVar1 == 0) goto LAB_1063172b4;
      }
      else {
        _objc_release();
      }
      uVar1 = param_1;
      func_0x00010c27a6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      FUN_1063172e8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (uVar4 == 0) {
        lVar3 = param_3;
        func_0x000106316658(param_3);
        uVar4 = param_2;
        FUN_1063163d4(param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          uVar4 = param_5;
          FUN_1063172e8(param_5,param_3);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_retain(uVar4);
      _objc_release(uVar4);
      goto LAB_1063172b4;
    }
  }
  uVar4 = 0;
LAB_1063172b4:
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063172e8; end: 10631752f;  */

void FUN_1063172e8(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar11 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar1 = param_1;
  func_0x00010c27a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52a60();
  fVar10 = (float)uVar11;
  if (uVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      uVar6 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(uVar1);
        }
        puVar8 = *(undefined **)(lStack_138 + uVar6 * 8);
        uStack_160 = 0;
        uStack_150 = 0x2020000000;
        uStack_148 = 0;
        uStack_180 = 0;
        uStack_170 = 0x2020000000;
        uStack_168 = 0;
        puVar3 = puVar8;
        puStack_178 = &uStack_180;
        puStack_158 = &uStack_160;
        func_0x00010bf7f0e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bdfe0();
        _objc_release(puVar3);
        fVar10 = (float)uVar11;
        if (((*(byte *)(puStack_158 + 3) & 1) != 0) && (param_2 == puStack_178[3])) {
          func_0x00010bf03a20();
          _objc_retainAutoreleasedReturnValue();
          __Block_object_dispose(&uStack_180,8);
          __Block_object_dispose(&uStack_160,8);
          goto LAB_1063174ac;
        }
        __Block_object_dispose(&uStack_180,8);
        __Block_object_dispose(&uStack_160,8);
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      uVar2 = uVar1;
      func_0x00010bf52a60();
      fVar10 = (float)uVar11;
    } while (uVar2 != 0);
  }
  puVar8 = (undefined *)0x0;
LAB_1063174ac:
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_180,8);
  lVar9 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  _objc_retain(lVar9);
  puVar3 = PTR_PTR_1126c9bd8;
  func_0x00010c271c80(PTR_PTR_1126c9bd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar9);
  if (((int)param_1 < 1) && (lVar4 = lVar9, func_0x00010bf529e0(), lVar4 == 0)) {
    _objc_release(lVar9);
LAB_1063176c4:
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00010bf529e0();
    if (lVar4 == 4) {
      func_0x00010c296de0(lVar9);
      dVar12 = (double)fVar10;
      func_0x00010c296de0(lVar9);
      dVar13 = (double)fVar10;
      func_0x00010c296de0(lVar9);
      dVar14 = (double)fVar10;
      func_0x00010c296de0(lVar9);
      puVar8 = PTR_PTR_1126c9bf8;
      _objc_alloc(PTR_PTR_1126c9bf8);
      func_0x00010c0048a0(dVar12,dVar13,dVar14,(double)fVar10);
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    _objc_release(lVar9);
    if ((int)param_1 < 1) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((double)(param_1 & 0xffffffff) / 1000.0,
                          PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126c9c00;
    _objc_alloc();
    func_0x00010bff2f80();
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(lVar9);
    if (puVar5 == (undefined *)0x0) goto LAB_1063176c4;
    puVar8 = PTR_PTR_1126c9c08;
    _objc_alloc(PTR_PTR_1126c9c08);
    func_0x00010c00c820();
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(lVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106317530; end: 1063176f7;  */

void FUN_106317530(float param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9bd8;
  func_0x00010c271c80(PTR_PTR_1126c9bd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  if (((int)param_2 < 1) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) {
    _objc_release(param_3);
  }
  else {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf529e0();
    if (lVar2 == 4) {
      func_0x00010c296de0(param_3);
      dVar6 = (double)param_1;
      func_0x00010c296de0(param_3);
      dVar7 = (double)param_1;
      func_0x00010c296de0(param_3);
      dVar8 = (double)param_1;
      func_0x00010c296de0(param_3);
      puVar4 = PTR_PTR_1126c9bf8;
      _objc_alloc(PTR_PTR_1126c9bf8);
      func_0x00010c0048a0(dVar6,dVar7,dVar8,(double)param_1);
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    _objc_release(param_3);
    if ((int)param_2 < 1) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((double)param_2 / 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126c9c00;
    _objc_alloc();
    func_0x00010bff2f80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_3);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c9c08;
      _objc_alloc(PTR_PTR_1126c9c08);
      func_0x00010c00c820();
      _objc_release(puVar3);
      goto LAB_1063176c8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_1063176c8:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1063176f8; end: 10631771b;  */

void FUN_1063176f8(void)

{
  return;
}



/* Entry: 10631771c; end: 1063178cb; -[SCOperaHorizontalNavigationManager initWithDelegate:dataProvider:configuration:grapheneRegistry:eventAnnouncer:legacyStateContainer:configProvider:internalConfigProvider:viewSource:defaultPageTransitionConfig:] */

undefined1 *
FUN_10631771c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f0e90;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x60),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x68),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_12;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf9e780();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_9;
    func_0x00010c2908a0();
    *(char *)((long)puVar1 + 0x50) = (char)uVar2;
    uVar2 = param_10;
    func_0x00010c0ffca0();
    *(char *)((long)puVar1 + 0x51) = (char)uVar2;
  }
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063178cc; end: 10631791b; -[SCOperaHorizontalNavigationManager setOperaScrollView:] */

void FUN_1063178cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x70,param_3);
  _objc_retain();
  func_0x00010c1d56a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10631791c; end: 106317923; -[SCOperaHorizontalNavigationManager navigateToPreviousGroupAnimated:] */

void FUN_10631791c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToPreviousGroupAnimated__112613268,param_3,0);
  return;
}



/* Entry: 106317924; end: 10631792b; -[SCOperaHorizontalNavigationManager navigateToNextGroupAnimated:] */

void FUN_106317924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToNextGroupAnimated_igno_112613228,param_3,0);
  return;
}



/* Entry: 10631792c; end: 106317933; -[SCOperaHorizontalNavigationManager navigateToParentAnimated:] */

void FUN_10631792c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToParentAnimated_ignoreS_112613248,param_3,0);
  return;
}



/* Entry: 106317934; end: 10631793b; -[SCOperaHorizontalNavigationManager navigateToAttachmentAnimated:] */

void FUN_106317934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToAttachmentAnimated_ign_1126131d8,param_3,0);
  return;
}



/* Entry: 10631793c; end: 106317a57; -[SCOperaHorizontalNavigationManager navigateToPreviousGroupAnimated:ignoreSettingLastInteraction:] */

void FUN_10631793c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1126e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c0f0be0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107dc65c0();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf01220(uVar4);
  lVar1 = lVar3;
  FUN_10631667c(lVar3,uVar4,lVar2);
  if ((int)lVar1 == 0) {
    if (lVar3 == 0) goto LAB_106317a40;
    lVar1 = param_1;
    func_0x00010be6f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9c320(param_1);
    func_0x00010be9bfe0(param_1);
  }
  else {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d6a20();
  }
  _objc_release(lVar1);
LAB_106317a40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106317a58; end: 106317b73; -[SCOperaHorizontalNavigationManager navigateToNextGroupAnimated:ignoreSettingLastInteraction:] */

void FUN_106317a58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d9ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c0f0be0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107dc65c0();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf01220(uVar4);
  lVar1 = lVar3;
  FUN_10631667c(lVar3,uVar4,lVar2);
  if ((int)lVar1 == 0) {
    if (lVar3 == 0) goto LAB_106317b5c;
    lVar1 = param_1;
    func_0x00010be6f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9c320(param_1);
    func_0x00010be9bfe0(param_1);
  }
  else {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d6a20();
  }
  _objc_release(lVar1);
LAB_106317b5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106317b74; end: 106317c7b; -[SCOperaHorizontalNavigationManager navigateToParentAnimated:ignoreSettingLastInteraction:] */

void FUN_106317b74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf84e00(uVar4);
    func_0x00010c0d69c0(lVar1,param_2,param_1,(uint)uVar4 ^ 1);
  }
  else {
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c0f2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c29bf00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010be9bfe0(param_1,param_2,param_3,0,param_4,3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106317c7c; end: 106317d5b; -[SCOperaHorizontalNavigationManager navigateToAttachmentAnimated:ignoreSettingLastInteraction:] */

void FUN_106317c7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0f2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010be9bfe0(param_1,param_2,param_3,0,param_4,4);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106317d5c; end: 106317dff; -[SCOperaHorizontalNavigationManager startInteractiveTransitionInDirection:velocity:touchPoint:] */

void FUN_106317d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  func_0x00010c298f40(*(undefined8 *)(param_5 + 8));
  param_5 = param_5 + 0x70;
  _objc_loadWeakRetained(param_5);
  lVar1 = param_5;
  func_0x00010c24f0a0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106317e00; end: 106317e97; -[SCOperaHorizontalNavigationManager resetCurrentScrolling] */

void FUN_106317e00(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_3 + 0x78) = 0;
  lVar1 = param_3 + 0x68;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf5f880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c0eb2e0(lVar2);
  lVar1 = param_3 + 0x70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c182360(param_1,param_2);
  _objc_release(lVar1);
  func_0x00010bee3d40(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106317e98; end: 106317e9f; -[SCOperaHorizontalNavigationManager isAnimatingScrolling] */

undefined1 FUN_106317e98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106317ea0; end: 10631835f; -[SCOperaHorizontalNavigationManager shouldBeginDismissingWithDirection:gestureRecognizer:] */

undefined8 FUN_106317ea0(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  _objc_retain(param_4);
  func_0x00010be8a2c0(param_1);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f24c0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    puVar13 = (undefined *)(param_1 + 0x68);
    _objc_loadWeakRetained(puVar13);
    puVar12 = puVar13;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    func_0x00010bf7dca0(puVar12);
LAB_106317f40:
    uVar16 = 0;
LAB_106317f44:
    _objc_release(puVar12);
  }
  else {
    uVar3 = param_1 + 0x70;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c07d460();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar3 = param_1 + 0x68;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c0805c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        lVar1 = param_1;
        if (param_3 == 1) {
          lVar2 = param_1 + 0x68;
          _objc_loadWeakRetained(lVar2);
          lVar9 = lVar2;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c0d9ae0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_1;
          func_0x00010beb3240();
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar2);
          if ((int)lVar11 == 0) {
            puVar12 = (undefined *)(param_1 + 0x68);
            _objc_loadWeakRetained();
            puVar13 = puVar12;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c0d9ae0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar14 == (undefined *)0x0) {
              _objc_release(puVar13);
              _objc_release(puVar12);
LAB_106318294:
              lVar1 = param_1 + 0x70;
              _objc_loadWeakRetained();
              lVar2 = lVar1;
              func_0x00010c151fe0();
              _objc_release(lVar1);
              if ((int)lVar2 != 0) {
                lVar1 = param_1 + 0x70;
                _objc_loadWeakRetained(lVar1);
                func_0x00010c1f7b20();
                _objc_release(lVar1);
                lVar1 = param_1 + 0x70;
                _objc_loadWeakRetained(lVar1);
                func_0x00010c1f7b20();
                _objc_release(lVar1);
              }
              uVar16 = *(undefined8 *)(param_1 + 0x18);
              puVar12 = PTR_PTR_1126c9c10;
              func_0x00010bf1d6c0(PTR_PTR_1126c9c10);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = (undefined *)(param_1 + 0x68);
              _objc_loadWeakRetained(puVar13);
              puVar14 = puVar13;
              func_0x00010bf60c20();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar14;
              func_0x00010c0f0be0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0eb7a0(uVar16);
              _objc_release(puVar15);
              _objc_release(puVar14);
            }
            else {
              _objc_release();
            }
            _objc_release(puVar13);
            goto LAB_106317f40;
          }
          func_0x00010c0eb240(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = 7;
LAB_106318240:
          puVar12 = param_4;
          FUN_106316cd8(param_4,uVar16,lVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          param_1 = param_1 + 0x60;
          _objc_loadWeakRetained(param_1);
          func_0x00010c0d69a0();
          _objc_release(param_1);
          uVar16 = 1;
          goto LAB_106317f44;
        }
        if (param_3 == 3) {
          lVar2 = param_1 + 0x68;
          _objc_loadWeakRetained(lVar2);
          lVar9 = lVar2;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c1126e0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_1;
          func_0x00010beb3240();
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar2);
          if ((int)lVar11 != 0) {
            func_0x00010c0eb240(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = 8;
            goto LAB_106318240;
          }
          lVar1 = param_1 + 0x68;
          _objc_loadWeakRetained();
          lVar2 = lVar1;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c1126e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (lVar9 == 0) goto LAB_106318294;
        }
        else if (param_3 == 2) {
          lVar2 = param_1 + 0x68;
          _objc_loadWeakRetained();
          lVar9 = lVar2;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c0f3aa0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 == 0) {
            _objc_release(lVar9);
            _objc_release(lVar2);
          }
          else {
            lVar11 = param_1 + 0x68;
            _objc_loadWeakRetained();
            _objc_retain();
            lVar5 = lVar11;
            func_0x00010bf60c20(lVar11);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c0f3aa0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar11;
            func_0x00010c0f2080();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            lVar8 = lVar7;
            func_0x00010bf1d940();
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar11);
            _objc_release(lVar10);
            _objc_release(lVar9);
            _objc_release(lVar2);
            if ((int)lVar8 == 0) goto LAB_106317f90;
          }
          func_0x00010c0eb240(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = 6;
          goto LAB_106318240;
        }
      }
    }
LAB_106317f90:
    uVar16 = 0;
  }
  _objc_release(param_4);
  return uVar16;
}



/* Entry: 106318360; end: 106318363; -[SCOperaHorizontalNavigationManager didFinishLayoutPageViewControllersForCurrentViewModel] */

void FUN_106318360(void)

{
  return;
}



/* Entry: 106318364; end: 106318487; -[SCOperaHorizontalNavigationManager _shouldDismissOnViewModel:] */

uint FUN_106318364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107dc65c0();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1f3c0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf01220(uVar9);
  uVar1 = param_3;
  FUN_10631667c(param_3,uVar9,uVar2);
  _objc_release(param_3);
  return ((uint)uVar1 | (uint)lVar8) & 1;
}



/* Entry: 106318488; end: 1063184ab; -[SCOperaHorizontalNavigationManager _relativePositionForSwipeDirecton:] */

undefined8 FUN_106318488(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 1U < 5) {
    return *(undefined8 *)(&UNK_10dddb6a0 + (param_3 + 1U) * 8);
  }
  return 4;
}



/* Entry: 1063184ac; end: 1063186a3; -[SCOperaHorizontalNavigationManager _scrollToContentOffset:animated:forAutoAdvance:ignoreSettingLastInteraction:scrollRelativePosition:] */

void FUN_1063184ac(double param_1,double param_2,long param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
    lVar2 = param_3 + 0x70;
    dVar8 = param_1;
    dVar9 = param_2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf4cdc0();
    _objc_release(lVar2);
    bVar1 = false;
    if ((dVar8 == param_1) && (bVar1 = false, !NAN(dVar9) && !NAN(param_2))) {
      bVar1 = dVar9 == param_2;
    }
    if (!bVar1) {
      if (param_5 != 0) {
        *(undefined1 *)(param_3 + 0x38) = 1;
        lVar2 = param_3 + 0x70;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c21e900();
        _objc_release(lVar2);
        lVar2 = param_3 + 0x68;
        _objc_loadWeakRetained(lVar2);
        lVar3 = lVar2;
        func_0x00010bf5ede0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e900();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      *(undefined1 *)(param_3 + 0x39) = param_7;
      lVar2 = param_3 + 0x68;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bee9960(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      FUN_10631716c(lVar4,lVar6,param_8,*(undefined8 *)(param_3 + 0x28),
                    *(undefined8 *)(param_3 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      param_3 = param_3 + 0x70;
      _objc_loadWeakRetained(param_3);
      if (lVar7 == 0) {
        func_0x00010c182300(param_1,param_2);
      }
      else {
        func_0x00010c182320();
      }
      _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar7);
      return;
    }
  }
  return;
}



/* Entry: 1063186a4; end: 106318c97; -[SCOperaHorizontalNavigationManager operaScrollViewDidScroll:direction:touchBeginPoint:] */

void FUN_1063186a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_1;
  uVar16 = param_2;
  _objc_retain(param_5);
  lVar1 = 0;
  if (param_6 == 2) {
    lVar1 = 3;
  }
  lVar12 = 1;
  if (param_6 != 3) {
    lVar12 = lVar1;
  }
  lVar1 = 2;
  if (param_6 != 1) {
    lVar1 = 0;
  }
  lVar2 = 4;
  if (param_6 != 0) {
    lVar2 = lVar1;
  }
  if (param_6 < 2) {
    lVar12 = lVar2;
  }
  lVar1 = param_5;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  if (lVar2 != 1) {
    lVar2 = param_5;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5f880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar15 = uVar14;
  uVar17 = uVar16;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c0f36c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  FUN_106316bb0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3 + 0x68;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0f24c0();
  _objc_release(lVar1);
  if (lVar4 == 1) {
    *(undefined8 *)(param_3 + 0x78) = 0;
    param_3 = param_3 + 0x70;
    _objc_loadWeakRetained();
    func_0x00010c182360(uVar14,uVar16);
    _objc_release(param_3);
    func_0x00010bf7dca0(lVar2);
  }
  else {
    lVar1 = param_3 + 0x68;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c0ead20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar5 = param_3 + 0x68;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c231a40();
    _objc_release(uVar5);
    if (((uVar6 & 1) == 0) && (lVar4 == 0)) {
      func_0x00010bea01a0(param_3);
      *(long *)(param_3 + 0x40) = *(long *)(param_3 + 0x78);
      if (lVar12 != *(long *)(param_3 + 0x78)) {
        if (param_6 == 0) {
          lVar1 = lVar2;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar1;
          func_0x00010c0f61c0();
          _objc_release(lVar1);
          if ((int)lVar7 != 0) {
            func_0x00010c1d99a0(lVar2);
          }
        }
        if (((*(byte *)(param_3 + 0x38) & 1) == 0) && ((*(byte *)(param_3 + 0x39) & 1) == 0)) {
          lVar1 = param_3 + 0x68;
          _objc_loadWeakRetained();
          lVar7 = lVar1;
          func_0x00010c08aa80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          if ((param_6 != 2) ||
             ((lVar1 = lVar7, func_0x00010c27dd80(), lVar1 != 7 &&
              (lVar1 = lVar7, func_0x00010c27dd80(), lVar1 != 8)))) {
            FUN_1063166f4(lVar12);
            lVar1 = param_5;
            func_0x00010c0f36c0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09ef00();
            _objc_release(lVar1);
            puVar8 = PTR_PTR_1126c98a0;
            func_0x00010c0689c0(param_1,param_2,uVar15,uVar17,PTR_PTR_1126c98a0);
            _objc_retainAutoreleasedReturnValue();
            lVar1 = param_3 + 0x60;
            _objc_loadWeakRetained(lVar1);
            func_0x00010c0d69a0();
            _objc_release(lVar1);
            _objc_release(puVar8);
          }
          _objc_release(lVar7);
        }
        *(long *)(param_3 + 0x78) = lVar12;
        lVar1 = param_3;
        func_0x00010be6f960(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29cb80();
        _objc_release(lVar1);
        uVar14 = *(undefined8 *)(param_3 + 0x18);
        puVar8 = PTR_PTR_1126b2638;
        func_0x00010bf7bd00(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010c0f0be0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b6008;
        func_0x00010c128140();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar14);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(lVar1);
        _objc_release(puVar8);
      }
      func_0x00010bf4cdc0(param_5);
      func_0x00010bee3d40(param_3);
      func_0x00010beda9e0(param_3);
      lVar1 = param_3 + 0x68;
      _objc_loadWeakRetained(lVar1);
      lVar12 = lVar1;
      func_0x00010bf5ede0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedcae0(param_3);
      _objc_release(lVar12);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010be6f960();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        func_0x00010bedcae0(param_3);
      }
      param_3 = param_3 + 0x60;
      _objc_loadWeakRetained(param_3);
      func_0x00010c0d6a00();
      _objc_release(param_3);
      _objc_release(lVar1);
    }
    else {
      *(undefined8 *)(param_3 + 0x78) = 0;
      lVar1 = param_3 + 0x70;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c182360(uVar14,uVar16);
      _objc_release(lVar1);
      if (*(long *)(param_3 + 0x78) != 0) {
        lVar1 = param_3 + 0x70;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c0eb280(param_3);
        _objc_release(lVar1);
      }
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    param_5 = param_5 + 0x60;
    _objc_loadWeakRetained(param_5);
    func_0x00010c0d6a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 106318c98; end: 106318ccb; -[SCOperaHorizontalNavigationManager operaScrollViewWillEndDragging:direction:] */

void FUN_106318c98(long param_1)

{
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d6a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106318ccc; end: 106318f0b; -[SCOperaHorizontalNavigationManager operaScrollViewDidEndScrolling:] */

void FUN_106318ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x39) = 0;
  uVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c22ebe0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1 + 0x68;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c070be0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        *(undefined1 *)(param_1 + 0x38) = 0;
        lVar3 = param_1 + 0x70;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c21e900();
        _objc_release(lVar3);
        lVar3 = param_1 + 0x68;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010bf5ede0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e900();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      func_0x00010bf4cdc0(param_3);
      func_0x00010bee3d40(param_1);
      _objc_initWeak(auStack_58,param_1);
      lVar3 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar3);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c0d69e0(lVar3);
      _objc_release(lVar3);
      func_0x00010beda9e0(param_1);
      *(undefined8 *)(param_1 + 0x78) = 0;
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      puVar6 = PTR_PTR_1126b2638;
      func_0x00010bf75b40(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar7);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106318f0c; end: 106318f53;  */

void FUN_106318f0c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010bf2f360(*(undefined8 *)(param_1 + 0x58));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106318f54; end: 106319367; -[SCOperaHorizontalNavigationManager operaScrollViewDidTap:recognizer:] */

void FUN_106318f54(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  _objc_retain(param_8);
  uVar1 = param_5 + 0x70;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c07d460();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) goto LAB_10631933c;
  lVar3 = param_5 + 0x68;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0eb720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c09ef00(param_8,param_6,lVar4);
  dVar12 = param_1;
  dVar15 = param_2;
  func_0x00010bf512a0(lVar4,param_6,0);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar13 = dVar12;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar5);
  func_0x00010bfb68e0(lVar4);
  _CGRectGetWidth();
  dVar14 = dVar13;
  func_0x00010c2690e0(*(undefined8 *)(param_5 + 8));
  if (dVar13 * dVar14 <= param_1) {
    iVar11 = 0;
  }
  else {
    iVar11 = (int)*(undefined8 *)(param_5 + 8);
    func_0x00010c123040();
  }
  lVar3 = param_5 + 0x68;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c0f24c0();
  _objc_release(lVar3);
  puVar5 = (undefined *)(param_5 + 0x68);
  _objc_loadWeakRetained(puVar5);
  puVar7 = puVar5;
  if (lVar6 == 1) {
    func_0x00010bf5f880(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dca0();
LAB_106319324:
    _objc_release(puVar5);
  }
  else {
    func_0x00010bf60c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (iVar11 == 0) {
      uVar1 = param_5 + 0x68;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c231a40();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010bf04340(PTR_PTR_1126c98e0,param_6,
                            &PTR____CFConstantStringClassReference_110e4add8);
        puVar5 = PTR_PTR_1126c98a0;
        func_0x00010c068a00(param_1,param_2,dVar12 / param_3,dVar15 / param_4,PTR_PTR_1126c98a0,
                            param_6,5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_5 + 0x60;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c0d69a0();
        _objc_release(lVar3);
        uVar10 = *(undefined8 *)(param_5 + 0x18);
        puVar8 = PTR_PTR_1126c9460;
        func_0x00010c269c60(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c0f0be0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar10,param_6,puVar8,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar8 = (undefined *)(param_5 + 0x60);
        _objc_loadWeakRetained(puVar8);
LAB_106319318:
        func_0x00010c0d6980();
        goto LAB_10631931c;
      }
    }
    else {
      iVar11 = (int)*(undefined8 *)(param_5 + 0x10);
      func_0x00010bf80a60();
      if (iVar11 != 0) {
        uVar10 = *(undefined8 *)(param_5 + 0x18);
        puVar5 = PTR_PTR_1126c9c10;
        func_0x00010bf1d800(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0f0be0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar10,param_6,puVar5,puVar8);
LAB_10631931c:
        _objc_release(puVar8);
        goto LAB_106319324;
      }
      uVar1 = param_5 + 0x68;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c231a40();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010bf04340(PTR_PTR_1126c98e0,param_6,
                            &PTR____CFConstantStringClassReference_110e4adb8);
        puVar5 = PTR_PTR_1126c98a0;
        func_0x00010c068a00(param_1,param_2,dVar12 / param_3,dVar15 / param_4,PTR_PTR_1126c98a0,
                            param_6,4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_5 + 0x60;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c0d69a0();
        _objc_release(lVar3);
        uVar10 = *(undefined8 *)(param_5 + 0x18);
        puVar8 = PTR_PTR_1126c9460;
        func_0x00010c269c80(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c0f0be0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar10,param_6,puVar8,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar8 = (undefined *)(param_5 + 0x60);
        _objc_loadWeakRetained(puVar8);
        goto LAB_106319318;
      }
    }
  }
  _objc_release(puVar7);
  _objc_release(lVar4);
LAB_10631933c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 106319368; end: 10631980f; -[SCOperaHorizontalNavigationManager operaScrollViewWillBeginDragging:velocity:touchPoint:] */

undefined *
FUN_106319368(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5)

{
  bool bVar1;
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
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar26 = param_2;
  _objc_retain(param_5);
  uVar23 = *(undefined8 *)(param_3 + 0x18);
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)(param_3 + 0x68);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9410;
  func_0x00010c2979e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9410;
  func_0x00010c07b460();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = param_5;
  func_0x00010bf5f040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9410;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c9410;
  func_0x00010c29c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  puVar18 = puVar5;
  puVar20 = puVar14;
  func_0x00010c0eb7c0(uVar23);
  iVar19 = (int)puVar20;
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar22);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_2 < 0.0) {
    puVar3 = param_5;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar3;
    FUN_106316bb0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar15 = param_3 + 0x68;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar16;
    puVar18 = puVar22;
    func_0x00010c0f2480();
    if (lVar15 == 1) {
      puVar17 = (undefined *)0x4;
      func_0x00010bf7dca0(lVar16);
    }
    else {
      uVar23 = *(undefined8 *)(param_3 + 0x18);
      puVar2 = PTR_PTR_1126b2638;
      func_0x00010c2a5aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined *)(param_3 + 0x68);
      _objc_loadWeakRetained();
      puVar4 = puVar3;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c9410;
      func_0x00010c2772e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297120();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126c9410;
      func_0x00010c29c0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_5;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar2;
      puVar18 = puVar5;
      puVar11 = puVar10;
      func_0x00010c0eb7c0(uVar23);
      iVar19 = (int)puVar11;
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
    _objc_release(lVar16);
    _objc_release(puVar22);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return param_5;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar24 = param_1;
  _objc_retain(puVar17);
  puVar3 = param_5;
  func_0x00010be8a2c0();
  if (puVar3 == (undefined *)0x0) {
LAB_106319c2c:
    puVar22 = (undefined *)0x1;
  }
  else {
    if (iVar19 == 0) {
LAB_106319938:
      puVar22 = param_5 + 0x68;
      _objc_loadWeakRetained();
      puVar2 = puVar22;
      func_0x00010bf5f880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      puVar22 = puVar2;
      func_0x00010c0834c0();
      if ((int)puVar22 == 0) {
LAB_106319a0c:
        puVar22 = param_5;
        func_0x00010be6f960();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != puVar22) {
          puVar4 = puVar22;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar4 != (undefined *)0x0) {
            uVar23 = *(undefined8 *)(param_5 + 0x18);
            puVar4 = PTR_PTR_1126c9460;
            func_0x00010c2a5c80(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = param_5;
            func_0x00010bf64080();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_PTR_1126c9a28;
            func_0x00010bf6ed60();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar22;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            func_0x00010c0eb7c0(uVar23);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          if ((iVar19 != 0) && (puVar22 != (undefined *)0x0)) {
            puVar4 = param_5 + 0x68;
            _objc_loadWeakRetained();
            puVar5 = puVar2;
            func_0x00010c0f0be0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            puVar3 = puVar5;
            func_0x00010c0f1380();
            if ((int)puVar6 == 0) {
              puVar6 = param_5 + 0x68;
              _objc_loadWeakRetained();
              puVar7 = puVar22;
              func_0x00010c0f0be0(puVar22);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar6;
              puVar3 = puVar7;
              func_0x00010c0f1380();
              _objc_release(puVar7);
              _objc_release(puVar6);
              _objc_release(puVar5);
              _objc_release(puVar4);
              if ((int)puVar8 != 0) goto LAB_106319be0;
            }
            else {
              _objc_release(puVar5);
              _objc_release(puVar4);
LAB_106319be0:
              if (param_5[0x51] != '\x01') goto LAB_106319c1c;
            }
            puVar4 = PTR_PTR_1126c9c18;
            _objc_alloc();
            puVar3 = puVar2;
            func_0x00010c0167e0();
            uVar23 = *(undefined8 *)(param_5 + 0x58);
            *(undefined **)(param_5 + 0x58) = puVar4;
            _objc_release(uVar23);
            func_0x00010bf046e0(*(undefined8 *)(param_5 + 0x58));
          }
        }
LAB_106319c1c:
        _objc_release(puVar22);
        puVar18 = puVar3;
      }
      else {
        puVar22 = puVar2;
        func_0x00010c29bf00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        dVar25 = ABS(dVar24 - param_1);
        dVar24 = ABS(param_1 + dVar24) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar25) && (bVar1 = false, !NAN(dVar25) && !NAN(dVar24))) {
          bVar1 = dVar25 < dVar24;
        }
        if (!bVar1) {
          _objc_release(puVar22);
          goto LAB_106319a0c;
        }
        puVar4 = puVar2;
        func_0x00010c29bf00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        dVar27 = ABS(dVar25 - dVar26);
        dVar26 = ABS(dVar26 + dVar25) * 2.220446049250313e-16;
        _objc_release(puVar4);
        _objc_release(puVar22);
        dVar24 = 2.2250738585072014e-308;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar27) && (bVar1 = false, !NAN(dVar27) && !NAN(dVar26))) {
          bVar1 = dVar27 < dVar26;
        }
        if (!bVar1) goto LAB_106319a0c;
      }
      _objc_release(puVar2);
      goto LAB_106319c2c;
    }
    puVar22 = puVar17;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar22;
    FUN_106316bb0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    puVar22 = param_5 + 0x68;
    _objc_loadWeakRetained();
    puVar4 = puVar22;
    puVar18 = puVar3;
    func_0x00010c0f24c0();
    _objc_release(puVar22);
    if (puVar4 != (undefined *)0x1) {
      _objc_release(puVar2);
      goto LAB_106319938;
    }
    func_0x00010c138780(param_5);
    param_5 = param_5 + 0x68;
    _objc_loadWeakRetained();
    puVar22 = param_5;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010bf7dca0(puVar22);
    _objc_release(puVar22);
    _objc_release(puVar2);
    puVar22 = (undefined *)0x0;
    puVar18 = puVar3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return puVar22;
  }
  ___stack_chk_fail();
  puVar3 = puVar18;
  _objc_retain(puVar18);
  if (*(long *)(puVar17 + 0x48) != 0) {
    puVar3 = puVar17 + 0x68;
    _objc_loadWeakRetained();
    puVar22 = puVar3;
    func_0x00010bf5f820();
    _objc_release(puVar3);
    if ((int)puVar22 != 0) {
      FUN_106317058(dVar24,((double)*(long *)(puVar17 + 0x48) / 180.0) * 3.141592653589793);
      goto LAB_106319d60;
    }
  }
  FUN_106316dcc(dVar24,0x3fe921fb54442d18,0x4002d97c7f3321d2,0x4002d97c7f3321d2,0x400f6a7a2955385e,0
                ,0x3fe921fb54442d18);
LAB_106319d60:
  _objc_release(puVar18);
  return puVar3;
}



/* Entry: 106319810; end: 106319c7b; -[SCOperaHorizontalNavigationManager operaScrollViewWillScroll:direction:targetOffset:animated:] */

undefined *
FUN_106319810(double param_1,double param_2,undefined *param_3,undefined8 param_4,long param_5,
             undefined *param_6,int param_7)

{
  bool bVar1;
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
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = param_1;
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010be8a2c0();
  if (puVar2 == (undefined *)0x0) {
LAB_106319c2c:
    puVar15 = (undefined *)0x1;
  }
  else {
    if (param_7 == 0) {
LAB_106319938:
      puVar15 = param_3 + 0x68;
      _objc_loadWeakRetained();
      puVar5 = puVar15;
      func_0x00010bf5f880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar15 = puVar5;
      func_0x00010c0834c0();
      if ((int)puVar15 == 0) {
LAB_106319a0c:
        puVar15 = param_3;
        func_0x00010be6f960();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != puVar15) {
          puVar6 = puVar15;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            uVar14 = *(undefined8 *)(param_3 + 0x18);
            puVar6 = PTR_PTR_1126c9460;
            func_0x00010c2a5c80(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = param_3;
            func_0x00010bf64080();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR_PTR_1126c9a28;
            func_0x00010bf6ed60();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar15;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar6;
            func_0x00010c0eb7c0(uVar14);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar6);
          }
          if ((param_7 != 0) && (puVar15 != (undefined *)0x0)) {
            puVar6 = param_3 + 0x68;
            _objc_loadWeakRetained();
            puVar7 = puVar5;
            func_0x00010c0f0be0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            puVar2 = puVar7;
            func_0x00010c0f1380();
            if ((int)puVar8 == 0) {
              puVar8 = param_3 + 0x68;
              _objc_loadWeakRetained();
              puVar9 = puVar15;
              func_0x00010c0f0be0(puVar15);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar8;
              puVar2 = puVar9;
              func_0x00010c0f1380();
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar6);
              if ((int)puVar10 != 0) goto LAB_106319be0;
            }
            else {
              _objc_release(puVar7);
              _objc_release(puVar6);
LAB_106319be0:
              if (param_3[0x51] != '\x01') goto LAB_106319c1c;
            }
            puVar6 = PTR_PTR_1126c9c18;
            _objc_alloc();
            puVar2 = puVar5;
            func_0x00010c0167e0();
            uVar14 = *(undefined8 *)(param_3 + 0x58);
            *(undefined **)(param_3 + 0x58) = puVar6;
            _objc_release(uVar14);
            func_0x00010bf046e0(*(undefined8 *)(param_3 + 0x58));
          }
        }
LAB_106319c1c:
        _objc_release(puVar15);
        param_6 = puVar2;
      }
      else {
        puVar15 = puVar5;
        func_0x00010c29bf00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        dVar17 = ABS(dVar16 - param_1);
        dVar16 = ABS(param_1 + dVar16) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar17) && (bVar1 = false, !NAN(dVar17) && !NAN(dVar16))) {
          bVar1 = dVar17 < dVar16;
        }
        if (!bVar1) {
          _objc_release(puVar15);
          goto LAB_106319a0c;
        }
        puVar6 = puVar5;
        func_0x00010c29bf00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        dVar18 = ABS(dVar17 - param_2);
        dVar17 = ABS(param_2 + dVar17) * 2.220446049250313e-16;
        _objc_release(puVar6);
        _objc_release(puVar15);
        dVar16 = 2.2250738585072014e-308;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar18) && (bVar1 = false, !NAN(dVar18) && !NAN(dVar17))) {
          bVar1 = dVar18 < dVar17;
        }
        if (!bVar1) goto LAB_106319a0c;
      }
      _objc_release(puVar5);
      goto LAB_106319c2c;
    }
    lVar3 = param_5;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_106316bb0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar15 = param_3 + 0x68;
    _objc_loadWeakRetained();
    puVar5 = puVar15;
    param_6 = puVar2;
    func_0x00010c0f24c0();
    _objc_release(puVar15);
    if (puVar5 != (undefined *)0x1) {
      _objc_release(lVar4);
      goto LAB_106319938;
    }
    func_0x00010c138780(param_3);
    param_3 = param_3 + 0x68;
    _objc_loadWeakRetained();
    puVar15 = param_3;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf7dca0(puVar15);
    _objc_release(puVar15);
    _objc_release(lVar4);
    puVar15 = (undefined *)0x0;
    param_6 = puVar2;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar15;
  }
  ___stack_chk_fail();
  puVar2 = param_6;
  _objc_retain(param_6);
  if (*(long *)(param_5 + 0x48) != 0) {
    puVar2 = (undefined *)(param_5 + 0x68);
    _objc_loadWeakRetained();
    puVar15 = puVar2;
    func_0x00010bf5f820();
    _objc_release(puVar2);
    if ((int)puVar15 != 0) {
      FUN_106317058(dVar16,((double)*(long *)(param_5 + 0x48) / 180.0) * 3.141592653589793);
      goto LAB_106319d60;
    }
  }
  FUN_106316dcc(dVar16,0x3fe921fb54442d18,0x4002d97c7f3321d2,0x4002d97c7f3321d2,0x400f6a7a2955385e,0
                ,0x3fe921fb54442d18);
LAB_106319d60:
  _objc_release(param_6);
  return puVar2;
}



/* Entry: 106319c7c; end: 106319d87; -[SCOperaHorizontalNavigationManager scrollView:swipeDirectionForAngle:] */

long FUN_106319c7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_4;
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x48) != 0) {
    lVar1 = param_2 + 0x68;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf5f820();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      FUN_106317058(param_1,((double)*(long *)(param_2 + 0x48) / 180.0) * 3.141592653589793);
      goto LAB_106319d60;
    }
  }
  FUN_106316dcc(param_1,0x3fe921fb54442d18,0x4002d97c7f3321d2,0x4002d97c7f3321d2,0x400f6a7a2955385e,
                0,0x3fe921fb54442d18);
LAB_106319d60:
  _objc_release(param_4);
  return lVar1;
}



/* Entry: 106319d88; end: 106319e43; -[SCOperaHorizontalNavigationManager scrollView:animationConfigForDirection:] */

undefined8 FUN_106319d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be8a2c0(param_1,param_2,param_4);
  func_0x00010bee9960(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar3);
  return 0;
}



/* Entry: 106319e44; end: 106319edb; -[SCOperaHorizontalNavigationManager scrollView:minVelocityForDirection:] */

undefined8
FUN_106319e44(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x00010be8a2c0(param_2,param_3,param_5);
  if (lVar1 == 2) {
    param_2 = param_2 + 0x68;
    _objc_loadWeakRetained();
    lVar1 = param_2;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    if ((lVar1 == 0) || (func_0x00010c26f880(lVar1), param_1 < 2.0)) {
      uVar2 = 0x4079000000000000;
    }
    else {
      uVar2 = 0x4059000000000000;
    }
    _objc_release(lVar1);
  }
  else {
    uVar2 = 0x4079000000000000;
  }
  return uVar2;
}



/* Entry: 106319edc; end: 106319f3f; -[SCOperaHorizontalNavigationManager _scrollViewOffsetForPageVC:] */

undefined1  [16]
FUN_106319edc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(char *)(param_3 + 0x50) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0eb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_operaScrollViewOffsetForPageView_1126186d0)
    ;
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_5);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 106319f40; end: 10631a0eb; -[SCOperaHorizontalNavigationManager _sendScrollEventWithRelativePosition:isPanning:] */

void FUN_106319f40(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2638;
  if (param_3 == (undefined *)0x1) {
    func_0x00010bf7a560();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == (undefined *)0x4) {
    func_0x00010bf7a500();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    if (param_3 != (undefined *)0x2) goto LAB_10631a0b4;
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010bf7a540();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar1 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained();
    puVar2 = param_1;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6008;
    func_0x00010c152bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_68 = puVar4;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar1;
    func_0x00010c0eb7c0(uVar7,param_2,puVar1,puVar3,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
LAB_10631a0b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1 + 0x68;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bee9960(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f2040(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10631a0ec; end: 10631a163; -[SCOperaHorizontalNavigationManager _pageVCForRelativePosition:] */

void FUN_10631a0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee9960(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f2040(lVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10631a164; end: 10631a26b; -[SCOperaHorizontalNavigationManager _viewModelForRelativePosition:] */

void FUN_10631a164(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = 0;
  if (param_3 < 4) {
    if (param_3 == 1) {
      lVar2 = lVar1;
      func_0x00010c1126e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 2) {
      lVar2 = lVar1;
      func_0x00010c0d9ae0(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 3) {
      lVar2 = lVar1;
      func_0x00010c0f3aa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 4) {
    lVar2 = lVar1;
    func_0x00010bf0cb60(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 5) {
    lVar2 = lVar1;
    func_0x00010c0d9820(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 6) {
    lVar2 = lVar1;
    func_0x00010c1125e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10631a26c; end: 10631a48b; -[SCOperaHorizontalNavigationManager _updatePageVCForHorizontalScroll:] */

undefined * FUN_10631a26c(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    puVar4 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _objc_retain(puVar11);
    puVar12 = puVar11;
  }
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(puVar2);
  param_2 = param_2 + 0x68;
  _objc_loadWeakRetained(param_2);
  lVar13 = param_2;
  func_0x00010c0eb720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  dVar18 = param_1;
  func_0x00010bf51280(puVar12,param_3,lVar5);
  dVar18 = dVar18 / param_1;
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010bfe4340();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar3;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_70,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar3);
  puVar4 = puVar2;
  func_0x00010bf7e940(param_4);
  _objc_release(puVar2);
  _objc_release(puVar12);
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10631a48c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = *(undefined **)(puVar2 + 8);
  puStack_b0 = puVar11;
  puStack_a8 = puVar3;
  puStack_a0 = puVar12;
  puStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c123040();
  if ((int)puVar6 != 0) {
    puVar2 = puVar2 + 0x68;
    _objc_loadWeakRetained();
    puVar6 = puVar2;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010c08ea20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c8 = puVar2;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c0 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_c0,&puStack_c8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(puVar6,param_3,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar6;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  dVar15 = dVar18;
  dVar16 = dVar17;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010be43840();
  if ((int)puVar3 != 0) {
    puVar11 = puVar6 + 0x68;
    _objc_loadWeakRetained(puVar11);
    puVar4 = puVar11;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(puVar4);
    _objc_release(puVar11);
    dVar19 = dVar15 + dVar15;
    if (dVar17 <= dVar15) {
      dVar19 = dVar15;
    }
    puVar11 = PTR_PTR_1126c9410;
    func_0x00010bf32180();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = dVar19 - dVar17;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_168 = puVar11;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_160 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_160,&puStack_168,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2,param_3,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar11);
  }
  puVar11 = puVar6 + 0x68;
  _objc_loadWeakRetained(puVar11);
  puVar4 = puVar11;
  func_0x00010bf5ede0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  iVar1 = (int)*(undefined8 *)(puVar6 + 8);
  func_0x00010c0b57a0();
  if (((iVar1 != 0) && ((puVar6[0x38] & 1) == 0)) &&
     ((((ulong)puVar3 & 1) != 0 || (puVar11 = puVar6, func_0x00010be43820(), (int)puVar11 != 0)))) {
    puVar11 = puVar6 + 0x68;
    _objc_loadWeakRetained();
    puVar12 = puVar11;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar11 = puVar4;
    func_0x00010c0f0be0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c0720c0(puVar8,param_3,puVar12);
    if ((int)puVar7 == 0) {
      uVar14 = 1;
    }
    else {
      puVar7 = puVar6 + 0x68;
      _objc_loadWeakRetained(puVar7);
      puVar9 = puVar7;
      func_0x00010c0741c0();
      uVar14 = (uint)puVar9 ^ 1;
      _objc_release(puVar7);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar11 = puVar6 + 0x70;
    _objc_loadWeakRetained(puVar11);
    puVar7 = puVar11;
    func_0x00010c07d460();
    func_0x00010c0df760(puVar12,param_3,((uint)puVar7 | uVar14) & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_3,puVar12,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar8);
  }
  puVar11 = puVar2;
  func_0x00010bf529e0();
  if (puVar11 != (undefined *)0x0) {
    puVar11 = puVar6 + 0x68;
    _objc_loadWeakRetained(puVar11);
    puVar12 = puVar11;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf7e940(puVar12,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar11 = puVar6 + 0x68;
    _objc_loadWeakRetained();
    puVar12 = puVar11;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar12);
    _objc_release(puVar11);
    if (puVar7 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126c9410;
      func_0x00010bf32180(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010c0e00e0(puVar2,param_3,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar11);
      if (puVar12 != (undefined *)0x0) {
        puVar11 = puVar6 + 0x68;
        _objc_loadWeakRetained(puVar11);
        puVar12 = puVar11;
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar12;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar12);
        _objc_release(puVar11);
        puVar11 = puVar6 + 0x68;
        _objc_loadWeakRetained(puVar11);
        puVar12 = puVar11;
        func_0x00010c0f2060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = PTR_PTR_1126c9410;
        func_0x00010bf32180();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c9410;
        puStack_178 = puVar11;
        func_0x00010bf32180(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010c0e00e0(puVar2,param_3,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_170 = puVar8;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_170,
                            &puStack_178,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e080(puVar12,param_3,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar11);
        _objc_release(puVar12);
        _objc_release(puVar9);
      }
    }
  }
  lVar13 = *(long *)(puVar6 + 0x78);
  puVar11 = puVar6;
  puVar12 = puVar6;
  if ((int)puVar3 == 0) {
    func_0x00010bee9960(puVar6,param_3,lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6f9c0(puVar6,param_3,puVar11,*(undefined8 *)(puVar6 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6 + 0x68;
    _objc_loadWeakRetained(puVar3);
    puVar7 = puVar3;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar17 = dVar15;
    _objc_release(puVar7);
    _objc_release(puVar3);
    func_0x00010be9c320(puVar6,param_3,puVar4);
    dVar16 = dVar17;
    func_0x00010be9c320(puVar6,param_3,puVar12);
    dVar17 = (dVar17 - dVar18) / dVar15;
    if (1.0 <= ABS(dVar17)) {
      dVar17 = 0.0;
    }
    func_0x00010c0f1060(dVar17,puVar4,param_3,1);
    func_0x00010c0f1060((dVar16 - dVar18) / dVar15,puVar12,param_3,0);
  }
  else {
    puVar3 = puVar6 + 0x68;
    _objc_loadWeakRetained();
    puVar7 = puVar3;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 4) {
      puVar11 = puVar7;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      _objc_release(puVar3);
      if (puVar11 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar6 + 0x68;
        _objc_loadWeakRetained(puVar3);
        puVar11 = puVar3;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        func_0x00010be6f960(puVar6,param_3,4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar12 = puVar7;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      _objc_release(puVar3);
      if (puVar12 == (undefined *)0x0) {
        puVar3 = puVar6 + 0x68;
        _objc_loadWeakRetained(puVar3);
        puVar11 = puVar3;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar12 = (undefined *)0x0;
      }
      else {
        func_0x00010be6f960(puVar6,param_3,3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6 + 0x68;
        _objc_loadWeakRetained(puVar3);
        puVar12 = puVar3;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
    }
    puVar3 = puVar11;
    func_0x00010c29bf00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    dVar15 = dVar17 - dVar15;
    func_0x00010c181ac0(dVar15,puVar11);
    _objc_release(puVar3);
    puVar3 = puVar6 + 0x68;
    _objc_loadWeakRetained(puVar3);
    puVar7 = puVar3;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(puVar7);
    _objc_release(puVar3);
    func_0x00010be9c320(puVar6,param_3,puVar11);
    func_0x00010c0f1080((dVar16 - dVar17) / dVar15,puVar11,param_3,3);
    func_0x00010be9c320(puVar6,param_3,puVar12);
    func_0x00010c0f1080((dVar16 - dVar17) / dVar15,puVar12,param_3,0);
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar2 + 0x78) - 3U < 2) {
    return (undefined *)0x1;
  }
  if (*(long *)(puVar2 + 0x78) == 0) {
    return (undefined *)(ulong)(*(long *)(puVar2 + 0x40) - 3U < 2);
  }
  return (undefined *)0x0;
}



/* Entry: 10631a48c; end: 10631a5a3; -[SCOperaHorizontalNavigationManager _updateLeftTapLayerEnabled:] */

undefined *
FUN_10631a48c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
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
  long lVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_3 + 8);
  func_0x00010c123040();
  if ((int)puVar2 != 0) {
    puVar3 = (undefined *)(param_3 + 0x68);
    _objc_loadWeakRetained();
    puVar2 = puVar3;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c08ea20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_48 = puVar3;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_40,&puStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(puVar2,param_4,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  dVar14 = param_1;
  dVar16 = param_2;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010be43840();
  if ((int)puVar4 != 0) {
    puVar10 = puVar2 + 0x68;
    _objc_loadWeakRetained(puVar10);
    puVar5 = puVar10;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(puVar5);
    _objc_release(puVar10);
    dVar15 = dVar14 + dVar14;
    if (param_2 <= dVar14) {
      dVar15 = dVar14;
    }
    puVar10 = PTR_PTR_1126c9410;
    func_0x00010bf32180();
    _objc_retainAutoreleasedReturnValue();
    dVar14 = dVar15 - param_2;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_e8 = puVar10;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_e0 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_e0,&puStack_e8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar3,param_4,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar10);
  }
  puVar10 = puVar2 + 0x68;
  _objc_loadWeakRetained(puVar10);
  puVar5 = puVar10;
  func_0x00010bf5ede0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  iVar1 = (int)*(undefined8 *)(puVar2 + 8);
  func_0x00010c0b57a0();
  if (((iVar1 != 0) && ((puVar2[0x38] & 1) == 0)) &&
     ((((ulong)puVar4 & 1) != 0 || (puVar10 = puVar2, func_0x00010be43820(), (int)puVar10 != 0)))) {
    puVar10 = puVar2 + 0x68;
    _objc_loadWeakRetained();
    puVar11 = puVar10;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar5;
    func_0x00010c0f0be0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c0720c0(puVar7,param_4,puVar11);
    if ((int)puVar6 == 0) {
      uVar13 = 1;
    }
    else {
      puVar6 = puVar2 + 0x68;
      _objc_loadWeakRetained(puVar6);
      puVar8 = puVar6;
      func_0x00010c0741c0();
      uVar13 = (uint)puVar8 ^ 1;
      _objc_release(puVar6);
    }
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar10 = puVar2 + 0x70;
    _objc_loadWeakRetained(puVar10);
    puVar6 = puVar10;
    func_0x00010c07d460();
    func_0x00010c0df760(puVar11,param_4,((uint)puVar6 | uVar13) & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_4,puVar11,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar7);
  }
  puVar10 = puVar3;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    puVar10 = puVar2 + 0x68;
    _objc_loadWeakRetained(puVar10);
    puVar11 = puVar10;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010bf7e940(puVar11,param_4,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar2 + 0x68;
    _objc_loadWeakRetained();
    puVar11 = puVar10;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar11);
    _objc_release(puVar10);
    if (puVar6 != (undefined *)0x0) {
      puVar10 = PTR_PTR_1126c9410;
      func_0x00010bf32180(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010c0e00e0(puVar3,param_4,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar10);
      if (puVar11 != (undefined *)0x0) {
        puVar10 = puVar2 + 0x68;
        _objc_loadWeakRetained(puVar10);
        puVar11 = puVar10;
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar11;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar11);
        _objc_release(puVar10);
        puVar10 = puVar2 + 0x68;
        _objc_loadWeakRetained(puVar10);
        puVar11 = puVar10;
        func_0x00010c0f2060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126c9410;
        func_0x00010bf32180();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c9410;
        puStack_f8 = puVar10;
        func_0x00010bf32180(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0(puVar3,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_f0 = puVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_f0,&puStack_f8
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e080(puVar11,param_4,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar8);
      }
    }
  }
  lVar12 = *(long *)(puVar2 + 0x78);
  puVar10 = puVar2;
  puVar11 = puVar2;
  if ((int)puVar4 == 0) {
    func_0x00010bee9960(puVar2,param_4,lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6f9c0(puVar2,param_4,puVar10,*(undefined8 *)(puVar2 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2 + 0x68;
    _objc_loadWeakRetained(puVar4);
    puVar6 = puVar4;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar16 = dVar14;
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010be9c320(puVar2,param_4,puVar5);
    dVar15 = dVar16;
    func_0x00010be9c320(puVar2,param_4,puVar11);
    dVar16 = (dVar16 - param_1) / dVar14;
    if (1.0 <= ABS(dVar16)) {
      dVar16 = 0.0;
    }
    func_0x00010c0f1060(dVar16,puVar5,param_4,1);
    func_0x00010c0f1060((dVar15 - param_1) / dVar14,puVar11,param_4,0);
  }
  else {
    puVar4 = puVar2 + 0x68;
    _objc_loadWeakRetained();
    puVar6 = puVar4;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 4) {
      puVar10 = puVar6;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar4);
      if (puVar10 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar2 + 0x68;
        _objc_loadWeakRetained(puVar4);
        puVar10 = puVar4;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x00010be6f960(puVar2,param_4,4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar11 = puVar6;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar4);
      if (puVar11 == (undefined *)0x0) {
        puVar4 = puVar2 + 0x68;
        _objc_loadWeakRetained(puVar4);
        puVar10 = puVar4;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar11 = (undefined *)0x0;
      }
      else {
        func_0x00010be6f960(puVar2,param_4,3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2 + 0x68;
        _objc_loadWeakRetained(puVar4);
        puVar11 = puVar4;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
    }
    puVar4 = puVar10;
    func_0x00010c29bf00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    dVar14 = param_2 - dVar14;
    func_0x00010c181ac0(dVar14,puVar10);
    _objc_release(puVar4);
    puVar4 = puVar2 + 0x68;
    _objc_loadWeakRetained(puVar4);
    puVar6 = puVar4;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010be9c320(puVar2,param_4,puVar10);
    func_0x00010c0f1080((dVar16 - param_2) / dVar14,puVar10,param_4,3);
    func_0x00010be9c320(puVar2,param_4,puVar11);
    func_0x00010c0f1080((dVar16 - param_2) / dVar14,puVar11,param_4,0);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar3;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar3 + 0x78) - 3U < 2) {
    return (undefined *)0x1;
  }
  if (*(long *)(puVar3 + 0x78) == 0) {
    return (undefined *)(ulong)(*(long *)(puVar3 + 0x40) - 3U < 2);
  }
  return (undefined *)0x0;
}



/* Entry: 10631a5a4; end: 10631ad7b; -[SCOperaHorizontalNavigationManager _updateViewPropertiesWithContentOffset:] */

undefined * FUN_10631a5a4(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  dVar17 = param_1;
  dVar19 = param_2;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010be43840();
  if ((int)uVar3 != 0) {
    lVar15 = param_3 + 0x68;
    _objc_loadWeakRetained(lVar15);
    lVar4 = lVar15;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(lVar4);
    _objc_release(lVar15);
    dVar18 = dVar17 + dVar17;
    if (param_2 <= dVar17) {
      dVar18 = dVar17;
    }
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010bf32180();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = dVar18 - param_2;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar5;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_90,&puStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2,param_4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  lVar15 = param_3 + 0x68;
  _objc_loadWeakRetained(lVar15);
  lVar4 = lVar15;
  func_0x00010bf5ede0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  iVar1 = (int)*(undefined8 *)(param_3 + 8);
  func_0x00010c0b57a0();
  if (((iVar1 != 0) && ((*(byte *)(param_3 + 0x38) & 1) == 0)) &&
     (((uVar3 & 1) != 0 || (uVar13 = param_3, func_0x00010be43820(), (int)uVar13 != 0)))) {
    lVar15 = param_3 + 0x68;
    _objc_loadWeakRetained();
    lVar8 = lVar15;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar15);
    lVar15 = lVar4;
    func_0x00010c0f0be0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar15;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar10;
    func_0x00010c0720c0(lVar10,param_4,lVar8);
    if ((int)lVar9 == 0) {
      uVar16 = 1;
    }
    else {
      lVar9 = param_3 + 0x68;
      _objc_loadWeakRetained(lVar9);
      lVar11 = lVar9;
      func_0x00010c0741c0();
      uVar16 = (uint)lVar11 ^ 1;
      _objc_release(lVar9);
    }
    _objc_release(lVar8);
    _objc_release(lVar15);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar15 = param_3 + 0x70;
    _objc_loadWeakRetained(lVar15);
    lVar8 = lVar15;
    func_0x00010c07d460();
    func_0x00010c0df760(puVar5,param_4,((uint)lVar8 | uVar16) & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_4,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar15);
    _objc_release(lVar10);
  }
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    lVar15 = param_3 + 0x68;
    _objc_loadWeakRetained(lVar15);
    lVar8 = lVar15;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf7e940(lVar8,param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar8);
    _objc_release(lVar15);
    lVar15 = param_3 + 0x68;
    _objc_loadWeakRetained();
    lVar8 = lVar15;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    _objc_release(lVar15);
    if (lVar9 != 0) {
      puVar5 = PTR_PTR_1126c9410;
      func_0x00010bf32180(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0e00e0(puVar2,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      if (puVar6 != (undefined *)0x0) {
        lVar15 = param_3 + 0x68;
        _objc_loadWeakRetained(lVar15);
        lVar8 = lVar15;
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar15);
        lVar15 = param_3 + 0x68;
        _objc_loadWeakRetained(lVar15);
        lVar8 = lVar15;
        func_0x00010c0f2060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar15);
        puVar5 = PTR_PTR_1126c9410;
        func_0x00010bf32180();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c9410;
        puStack_a8 = puVar5;
        func_0x00010bf32180(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c0e00e0(puVar2,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_a0 = puVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_a0,&puStack_a8
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e080(lVar8,param_4,puVar12);
        _objc_release(puVar12);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(lVar8);
        _objc_release(lVar11);
      }
    }
  }
  lVar15 = *(long *)(param_3 + 0x78);
  uVar13 = param_3;
  uVar14 = param_3;
  if ((int)uVar3 == 0) {
    func_0x00010bee9960(param_3,param_4,lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6f9c0(param_3,param_4,uVar13,*(undefined8 *)(param_3 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3 + 0x68;
    _objc_loadWeakRetained(lVar15);
    lVar8 = lVar15;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar19 = dVar17;
    _objc_release(lVar8);
    _objc_release(lVar15);
    func_0x00010be9c320(param_3,param_4,lVar4);
    dVar18 = dVar19;
    func_0x00010be9c320(param_3,param_4,uVar14);
    dVar19 = (dVar19 - param_1) / dVar17;
    if (1.0 <= ABS(dVar19)) {
      dVar19 = 0.0;
    }
    func_0x00010c0f1060(dVar19,lVar4,param_4,1);
    func_0x00010c0f1060((dVar18 - param_1) / dVar17,uVar14,param_4,0);
  }
  else {
    lVar8 = param_3 + 0x68;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 == 4) {
      lVar15 = lVar9;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar15 == 0) {
        uVar14 = 0;
        uVar13 = 0;
      }
      else {
        uVar3 = param_3 + 0x68;
        _objc_loadWeakRetained(uVar3);
        uVar13 = uVar3;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010be6f960(param_3,param_4,4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar15 = lVar9;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar15 == 0) {
        uVar3 = param_3 + 0x68;
        _objc_loadWeakRetained(uVar3);
        uVar13 = uVar3;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar14 = 0;
      }
      else {
        func_0x00010be6f960(param_3,param_4,3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3 + 0x68;
        _objc_loadWeakRetained(uVar3);
        uVar14 = uVar3;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
    }
    uVar3 = uVar13;
    func_0x00010c29bf00(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    dVar17 = param_2 - dVar17;
    func_0x00010c181ac0(dVar17,uVar13);
    _objc_release(uVar3);
    lVar15 = param_3 + 0x68;
    _objc_loadWeakRetained(lVar15);
    lVar8 = lVar15;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(lVar8);
    _objc_release(lVar15);
    func_0x00010be9c320(param_3,param_4,uVar13);
    func_0x00010c0f1080((dVar19 - param_2) / dVar17,uVar13,param_4,3);
    func_0x00010be9c320(param_3,param_4,uVar14);
    func_0x00010c0f1080((dVar19 - param_2) / dVar17,uVar14,param_4,0);
  }
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar2 + 0x78) - 3U < 2) {
    return (undefined *)0x1;
  }
  if (*(long *)(puVar2 + 0x78) == 0) {
    return (undefined *)(ulong)(*(long *)(puVar2 + 0x40) - 3U < 2);
  }
  return (undefined *)0x0;
}



/* Entry: 10631ad7c; end: 10631adb3; -[SCOperaHorizontalNavigationManager _isScrollingVertically] */

bool FUN_10631ad7c(long param_1)

{
  if (*(long *)(param_1 + 0x78) - 3U < 2) {
    return true;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return *(long *)(param_1 + 0x40) - 3U < 2;
  }
  return false;
}



/* Entry: 10631adb4; end: 10631adeb; -[SCOperaHorizontalNavigationManager _isScrollingHorizontally] */

bool FUN_10631adb4(long param_1)

{
  if (*(long *)(param_1 + 0x78) - 1U < 2) {
    return true;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return *(long *)(param_1 + 0x40) - 1U < 2;
  }
  return false;
}



/* Entry: 10631adec; end: 10631b01f; -[SCOperaHorizontalNavigationManager _pageViewControllerForViewModel:atRelativePosition:] */

void FUN_10631adec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
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
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf8aec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_100,0x10);
    if (lVar4 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(lVar5);
          }
          lVar8 = *(long *)(lStack_138 + lVar10 * 8);
          lVar6 = lVar8;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_3;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          if (lVar6 == lVar7) {
            func_0x00010be9c320(param_1,param_2,lVar8);
            dVar1 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13
                                                  (uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))
                                                  )));
            lVar6 = param_1 + 0x68;
            _objc_loadWeakRetained(lVar6);
            lVar7 = lVar6;
            func_0x00010bf5ede0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be9c320(param_1,param_2,lVar7);
            dVar2 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13
                                                  (uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))
                                                  )));
            _objc_release(lVar7);
            _objc_release(lVar6);
            bVar3 = dVar2 <= dVar1;
            if (param_4 != 1) {
              bVar3 = dVar1 <= dVar2;
            }
            if (!bVar3) {
              _objc_retain(lVar8);
              param_1 = lVar5;
              goto LAB_10631afc4;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_100,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
  }
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f2080();
  _objc_retainAutoreleasedReturnValue();
LAB_10631afc4:
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_3 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631b020; end: 10631b037; -[SCOperaHorizontalNavigationManager delegate] */

void FUN_10631b020(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631b038; end: 10631b04f; -[SCOperaHorizontalNavigationManager dataProvider] */

void FUN_10631b038(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631b050; end: 10631b067; -[SCOperaHorizontalNavigationManager operaScrollView] */

void FUN_10631b050(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631b068; end: 10631b06f; -[SCOperaHorizontalNavigationManager scrollRelativePosition] */

undefined8 FUN_10631b068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10631b070; end: 10631b077; -[SCOperaHorizontalNavigationManager setScrollRelativePosition:] */

void FUN_10631b070(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10631b078; end: 10631b0ef; -[SCOperaHorizontalNavigationManager .cxx_destruct] */

void FUN_10631b078(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10631b0f0; end: 10631b17b; -[SCOperaNavigationProfiler initWithNavigationStyle:metricsLogger:] */

undefined1 *
FUN_10631b0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0e98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    func_0x00010be92140(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10631b17c; end: 10631b19f; -[SCOperaNavigationProfiler navigationIntentReceivedAtTime:] */

void FUN_10631b17c(double param_1,long param_2)

{
  if (*(double *)(param_2 + 8) <= param_1) {
    param_1 = *(double *)(param_2 + 8);
  }
  *(double *)(param_2 + 8) = param_1;
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
  *(undefined1 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 10631b1a0; end: 10631b233; -[SCOperaNavigationProfiler navigationIntentConfirmedAtTime:intentType:] */

void FUN_10631b1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    puVar1 = PTR_PTR_1126c9c20;
    func_0x00010bdc3da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4b900(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 != 0) {
      *(undefined8 *)(param_1 + 0x30) = param_3;
    }
  }
  return;
}



/* Entry: 10631b234; end: 10631b237; -[SCOperaNavigationProfiler navigationCancelledAtTime:] */

void FUN_10631b234(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 10631b238; end: 10631b3d7; -[SCOperaNavigationProfiler navigationCompleteAtTime:mediaType:] */

void FUN_10631b238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bc90ccc(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106368e08(uVar1,puVar3,puVar5,uVar6,(long)*(double *)(param_1 + 0x10));
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc90ccc(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106368b48(uVar1,puVar3,puVar5,param_3,*(undefined8 *)(param_1 + 0x18));
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 10631b3d8; end: 10631b47b; -[SCOperaNavigationProfiler navigationIntentProceededAtTime:] */

void FUN_10631b3d8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c9c20;
  func_0x00010bdc3da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4b900(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((*(byte *)(param_2 + 0x38) & 1) == 0) && ((int)puVar3 != 0)) {
    *(double *)(param_2 + 0x10) = param_1 - *(double *)(param_2 + 8);
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  return;
}



/* Entry: 10631b47c; end: 10631b4cf; +[SCOperaNavigationProfiler _acceptedNavigationIntentTypes] */

void FUN_10631b47c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c3808 != -1) {
    func_0x00010002a2fc(0x1136c3808,&PTR___NSConcreteGlobalBlock_11091c878);
  }
  uVar1 = uRam00000001136c3800;
  _objc_retain(uRam00000001136c3800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10631b4d0; end: 10631b4e7;  */

void FUN_10631b4d0(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c3800;
  ppuRam00000001136c3800 = &PTR__OBJC_CLASS___NSConstantArray_111180920;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10631b4e8; end: 10631b4ff; -[SCOperaNavigationProfiler _reset] */

void FUN_10631b4e8(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0x7fefffffffffffff;
  return;
}



/* Entry: 10631b500; end: 10631b50b; -[SCOperaNavigationProfiler .cxx_destruct] */

void FUN_10631b500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10631b50c; end: 10631b5af; -[SCOperaPageToPageTransition initWithFromPage:toPage:] */

undefined1 *
FUN_10631b50c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0ea0;
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



/* Entry: 10631b5b0; end: 10631b5db; -[SCOperaPageToPageTransition announceTransitionBegin] */

void FUN_10631b5b0(long param_1)

{
  func_0x00010c29e800(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c29e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_viewWillBeginTransitionIn__112685420,0);
  return;
}



/* Entry: 10631b5dc; end: 10631b607; -[SCOperaPageToPageTransition cancelTransition] */

void FUN_10631b5dc(long param_1,undefined8 param_2)

{
  func_0x00010c29c820(*(undefined8 *)(param_1 + 8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c29c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_viewDidCancelTransitionIn_112684c28);
  return;
}



/* Entry: 10631b608; end: 10631b60f; -[SCOperaPageToPageTransition fromPage] */

undefined8 FUN_10631b608(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10631b610; end: 10631b617; -[SCOperaPageToPageTransition toPage] */

undefined8 FUN_10631b610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10631b618; end: 10631b647; -[SCOperaPageToPageTransition .cxx_destruct] */

void FUN_10631b618(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10631b648; end: 10631b833; -[SCOperaVerticalNavigationManager initWithDelegate:dataProvider:configuration:grapheneRegistry:eventAnnouncer:legacyStateContainer:configProvider:internalConfigProvider:viewSource:defaultPageTransitionConfig:] */

undefined8 *
FUN_10631b648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f0ea8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0xe,param_3);
    _objc_storeWeak(puVar1 + 0xf,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    puVar1[5] = param_11;
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    func_0x00010be3a2a0(puVar1);
    uVar2 = param_9;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_10;
    func_0x00010c0ffca0();
    *(char *)((long)puVar1 + 0x59) = (char)uVar2;
    uVar2 = param_9;
    func_0x00010bf9e780();
    puVar1[0xc] = uVar2;
  }
  _objc_release(param_12);
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



/* Entry: 10631b834; end: 10631b883; -[SCOperaVerticalNavigationManager setOperaScrollView:] */

void FUN_10631b834(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x80,param_3);
  _objc_retain();
  func_0x00010c1d56a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10631b884; end: 10631b88b; -[SCOperaVerticalNavigationManager navigateToPreviousGroupAnimated:] */

void FUN_10631b884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToPreviousGroupAnimated__112613268,param_3,0);
  return;
}



/* Entry: 10631b88c; end: 10631b893; -[SCOperaVerticalNavigationManager navigateToNextGroupAnimated:] */

void FUN_10631b88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToNextGroupAnimated_igno_112613228,param_3,0);
  return;
}



/* Entry: 10631b894; end: 10631b89b; -[SCOperaVerticalNavigationManager navigateToParentAnimated:] */

void FUN_10631b894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToParentAnimated_ignoreS_112613248,param_3,0);
  return;
}



/* Entry: 10631b89c; end: 10631b8a3; -[SCOperaVerticalNavigationManager navigateToAttachmentAnimated:] */

void FUN_10631b89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToAttachmentAnimated_ign_1126131d8,param_3,0);
  return;
}



/* Entry: 10631b8a4; end: 10631b9bf; -[SCOperaVerticalNavigationManager navigateToPreviousGroupAnimated:ignoreSettingLastInteraction:] */

void FUN_10631b8a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1126e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c0f0be0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107dc65c0();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf01220(uVar4);
  lVar1 = lVar3;
  FUN_10631667c(lVar3,uVar4,lVar2);
  if ((int)lVar1 == 0) {
    if (lVar3 == 0) goto LAB_10631b9a8;
    lVar1 = param_1;
    func_0x00010be6f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9c320(param_1);
    func_0x00010be9bfe0(param_1);
  }
  else {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d6a20();
  }
  _objc_release(lVar1);
LAB_10631b9a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10631b9c0; end: 10631badb; -[SCOperaVerticalNavigationManager navigateToNextGroupAnimated:ignoreSettingLastInteraction:] */

void FUN_10631b9c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d9ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c0f0be0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107dc65c0();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf01220(uVar4);
  lVar1 = lVar3;
  FUN_10631667c(lVar3,uVar4,lVar2);
  if ((int)lVar1 == 0) {
    if (lVar3 == 0) goto LAB_10631bac4;
    lVar1 = param_1;
    func_0x00010be6f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9c320(param_1);
    func_0x00010be9bfe0(param_1);
  }
  else {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d6a20();
  }
  _objc_release(lVar1);
LAB_10631bac4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10631badc; end: 10631bbcf; -[SCOperaVerticalNavigationManager navigateToParentAnimated:ignoreSettingLastInteraction:] */

void FUN_10631badc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf84e00(uVar4);
    func_0x00010c0d69c0(lVar1,param_2,param_1,(uint)uVar4 ^ 1);
  }
  else {
    lVar2 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c0f2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010be9c320(param_1,param_2,lVar1);
    func_0x00010be9bfe0(param_1,param_2,param_3,0,param_4,3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10631bbd0; end: 10631bc47; -[SCOperaVerticalNavigationManager resetCurrentScrolling] */

void FUN_10631bbd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf5f880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be9c320(param_1,param_2,lVar2);
  func_0x00010bea2f00(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010028941c();
  func_0x00010c0d65c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10631bc48; end: 10631bf43; -[SCOperaVerticalNavigationManager navigateToAttachmentAnimated:ignoreSettingLastInteraction:] */

void FUN_10631bc48(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar6 = param_3 + 0x80;
  _objc_loadWeakRetained();
  lVar2 = lVar6;
  func_0x00010c07d460();
  if (((int)lVar2 == 0) || (*(long *)(param_3 + 0x88) == 4)) {
    _objc_release(lVar6);
  }
  else {
    cVar1 = *(char *)(param_3 + 0x58);
    _objc_release(lVar6);
    if (cVar1 == '\x01') {
      func_0x00010c138780(param_3);
    }
  }
  lVar6 = param_3 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar6;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar6);
  if (lVar3 != 0) {
    lVar6 = param_3 + 0x78;
    _objc_loadWeakRetained(lVar6);
    lVar2 = lVar6;
    func_0x00010bf5ede0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar6);
    lVar6 = param_3 + 0x78;
    _objc_loadWeakRetained(lVar6);
    lVar2 = lVar6;
    func_0x00010c0f2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar6);
    lVar6 = param_3 + 0x78;
    _objc_loadWeakRetained();
    lVar4 = lVar6;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar6);
    if (lVar5 != 0) {
      lVar6 = param_3 + 0x78;
      _objc_loadWeakRetained(lVar6);
      lVar4 = lVar6;
      func_0x00010c0f2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar4;
      func_0x00010c29bf00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar6);
      _objc_release(lVar4);
    }
    func_0x00010be9c320(param_3,param_4,lVar2);
    lVar6 = *(long *)(param_3 + 8);
    dVar7 = param_1;
    dVar9 = param_2;
    func_0x00010c0da1c0();
    dVar8 = dVar7;
    dVar11 = dVar9;
    if (lVar6 == 3) {
      lVar6 = param_3 + 0x80;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf4cdc0();
      dVar10 = dVar9;
      _objc_release(lVar6);
      dVar8 = dVar7;
      dVar11 = dVar10;
      if (param_2 < dVar9) {
        lVar6 = param_3 + 0x80;
        _objc_loadWeakRetained(lVar6);
        func_0x00010bf4cdc0();
        dVar8 = dVar7;
        dVar11 = dVar10;
        _objc_release(lVar6);
        lVar6 = param_3 + 0x80;
        _objc_loadWeakRetained(lVar6);
        func_0x00010bfb68e0();
        _CGRectGetHeight();
        param_2 = dVar10 + dVar8;
        _objc_release(lVar6);
        param_1 = dVar7;
      }
    }
    if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
      lVar6 = param_3 + 0x80;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf4cdc0();
      _objc_release(lVar6);
      if ((dVar8 != param_1) || (dVar11 != param_2)) {
        *(undefined1 *)(param_3 + 0x48) = 1;
      }
    }
    func_0x00010be9bfe0(param_1,param_2,param_3,param_4,param_5,0,param_6,4);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10631bf44; end: 10631c02f; -[SCOperaVerticalNavigationManager startInteractiveTransitionInDirection:velocity:touchPoint:] */

void FUN_10631bf44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_5 + 8);
  func_0x00010c298f40();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf4e680();
  }
  param_5 = param_5 + 0x80;
  _objc_loadWeakRetained(param_5);
  lVar2 = param_5;
  func_0x00010c24f0a0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10631c030; end: 10631c037; -[SCOperaVerticalNavigationManager isAnimatingScrolling] */

undefined1 FUN_10631c030(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10631c038; end: 10631c50f; -[SCOperaVerticalNavigationManager shouldBeginDismissingWithDirection:gestureRecognizer:] */

undefined8 FUN_10631c038(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  func_0x00010be8a2c0(param_1);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f24c0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    puVar5 = (undefined *)(param_1 + 0x78);
    _objc_loadWeakRetained(puVar5);
    puVar8 = puVar5;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf7dca0(puVar8);
LAB_10631c0d0:
    uVar12 = 0;
LAB_10631c0d4:
    _objc_release(puVar8);
  }
  else {
    uVar4 = param_1 + 0x80;
    _objc_loadWeakRetained();
    uVar3 = uVar4;
    func_0x00010c07d460();
    _objc_release(uVar4);
    if ((uVar3 & 1) == 0) {
      uVar4 = param_1 + 0x78;
      _objc_loadWeakRetained();
      uVar3 = uVar4;
      func_0x00010c0805c0();
      _objc_release(uVar4);
      if ((uVar3 & 1) == 0) {
        uVar12 = 0;
        lVar1 = param_1;
        if (param_3 < 2) {
          if (param_3 != 0) {
            if (param_3 != 1) goto LAB_10631c124;
            lVar2 = param_1 + 0x78;
            _objc_loadWeakRetained();
            lVar9 = lVar2;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010c0f3aa0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar10 == 0) {
              uVar4 = *(ulong *)(param_1 + 8);
              func_0x00010c298f40();
              if ((uVar4 & 1) != 0) goto LAB_10631c198;
              uVar4 = *(ulong *)(param_1 + 8);
              func_0x00010bf4e680();
              _objc_release(lVar9);
              _objc_release(lVar2);
              if ((uVar4 & 1) == 0) {
                func_0x00010c0eb240(param_1);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = 7;
                goto LAB_10631c4cc;
              }
            }
            else {
LAB_10631c198:
              _objc_release(lVar10);
              _objc_release(lVar9);
              _objc_release(lVar2);
            }
            puVar8 = (undefined *)(param_1 + 0x78);
            _objc_loadWeakRetained();
            puVar5 = puVar8;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0d9ae0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 == (undefined *)0x0) {
              _objc_release(puVar5);
              _objc_release(puVar8);
              goto LAB_10631c3a4;
            }
            _objc_release();
LAB_10631c468:
            _objc_release(puVar5);
            goto LAB_10631c0d0;
          }
          lVar1 = param_1 + 0x78;
          _objc_loadWeakRetained(lVar1);
          lVar2 = lVar1;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c0d9ae0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = param_1;
          func_0x00010beb3240();
          _objc_release(lVar9);
          _objc_release(lVar2);
          _objc_release(lVar1);
          if ((int)lVar10 == 0) goto LAB_10631c120;
          puVar8 = PTR_PTR_1126c98a0;
          func_0x00010c0689a0(PTR_PTR_1126c98a0);
          _objc_retainAutoreleasedReturnValue();
LAB_10631c4e8:
          param_1 = param_1 + 0x70;
          _objc_loadWeakRetained(param_1);
          func_0x00010c0d69a0();
          _objc_release(param_1);
          uVar12 = 1;
          goto LAB_10631c0d4;
        }
        if (param_3 == 3) {
          lVar2 = param_1 + 0x78;
          _objc_loadWeakRetained();
          lVar9 = lVar2;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c0f3aa0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 == 0) {
            uVar4 = *(ulong *)(param_1 + 8);
            func_0x00010c264dc0();
            _objc_release(lVar9);
            _objc_release(lVar2);
            if ((uVar4 & 1) == 0) {
              func_0x00010c0eb240(param_1);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = 8;
              goto LAB_10631c4cc;
            }
          }
          else {
            _objc_release();
            _objc_release(lVar9);
            _objc_release(lVar2);
          }
          lVar1 = param_1 + 0x78;
          _objc_loadWeakRetained();
          lVar2 = lVar1;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c1126e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (lVar9 == 0) {
LAB_10631c3a4:
            lVar1 = param_1 + 0x80;
            _objc_loadWeakRetained();
            lVar2 = lVar1;
            func_0x00010c151fe0();
            _objc_release(lVar1);
            if ((int)lVar2 != 0) {
              lVar1 = param_1 + 0x80;
              _objc_loadWeakRetained(lVar1);
              func_0x00010c1f7b20();
              _objc_release(lVar1);
              lVar1 = param_1 + 0x80;
              _objc_loadWeakRetained(lVar1);
              func_0x00010c1f7b20();
              _objc_release(lVar1);
            }
            uVar12 = *(undefined8 *)(param_1 + 0x18);
            puVar8 = PTR_PTR_1126c9c10;
            func_0x00010bf1d6c0(PTR_PTR_1126c9c10);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = (undefined *)(param_1 + 0x78);
            _objc_loadWeakRetained(puVar5);
            puVar6 = puVar5;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar6;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0eb7a0(uVar12);
            _objc_release(puVar11);
            _objc_release(puVar6);
            goto LAB_10631c468;
          }
        }
        else {
          if (param_3 != 2) goto LAB_10631c124;
          lVar2 = param_1 + 0x78;
          _objc_loadWeakRetained(lVar2);
          lVar9 = lVar2;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c1126e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_1;
          func_0x00010beb3240();
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar2);
          if ((int)lVar7 != 0) {
            func_0x00010c0eb240(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = 6;
LAB_10631c4cc:
            puVar8 = param_4;
            FUN_106316cd8(param_4,uVar12,lVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar1);
            goto LAB_10631c4e8;
          }
        }
      }
    }
LAB_10631c120:
    uVar12 = 0;
  }
LAB_10631c124:
  _objc_release(param_4);
  return uVar12;
}



/* Entry: 10631c510; end: 10631c743; -[SCOperaVerticalNavigationManager didFinishLayoutPageViewControllersForCurrentViewModel] */

void FUN_10631c510(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010bf4e680();
    if ((uVar4 & 1) == 0) {
      lVar1 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0f2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010c29bf00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
      _objc_release(lVar2);
    }
  }
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0d9ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0f2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar6 != 0) {
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0f2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar6);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    lVar1 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4cdc0();
    func_0x00010bee3d40(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10631c744; end: 10631c7c3; -[SCOperaVerticalNavigationManager _shouldDismissOnViewModel:] */

undefined8 FUN_10631c744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107dc65c0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf01220(uVar3);
  uVar1 = param_3;
  FUN_10631667c(param_3,uVar3,uVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10631c7c4; end: 10631c94f; -[SCOperaVerticalNavigationManager _relativePositionForSwipeDirecton:] */

undefined8 FUN_10631c7c4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  if (param_3 < 2) {
    if (param_3 == 0) {
      param_1 = param_1 + 0x78;
      _objc_loadWeakRetained();
      lVar2 = param_1;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(param_1);
      uVar1 = 2;
      if (lVar3 != 0) {
        uVar1 = 4;
      }
    }
    else if (param_3 == 1) {
      param_1 = param_1 + 0x78;
      _objc_loadWeakRetained();
      lVar2 = param_1;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(param_1);
      uVar1 = 2;
      if (lVar3 == 0) {
        uVar1 = 3;
      }
    }
  }
  else if (param_3 == 2) {
    param_1 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar3 == 0) {
      uVar1 = 1;
    }
  }
  else if (param_3 == 3) {
    param_1 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar3 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 10631c950; end: 10631cb77; -[SCOperaVerticalNavigationManager _scrollToContentOffset:animated:forAutoAdvance:ignoreSettingLastInteraction:scrollRelativePosition:] */

void FUN_10631c950(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
    lVar2 = param_3 + 0x80;
    dVar10 = param_1;
    dVar11 = param_2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf4cdc0();
    _objc_release(lVar2);
    bVar1 = false;
    if ((dVar10 == param_1) && (bVar1 = false, !NAN(dVar11) && !NAN(param_2))) {
      bVar1 = dVar11 == param_2;
    }
    if (!bVar1) {
      if ((param_5 & 1) == 0) {
        *(undefined1 *)(param_3 + 0x39) = param_7;
      }
      else {
        *(undefined1 *)(param_3 + 0x38) = 1;
        *(undefined1 *)(param_3 + 0x39) = param_7;
        uVar3 = *(ulong *)(param_3 + 8);
        func_0x00010bfa0d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf01620();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          lVar2 = param_3 + 0x80;
          _objc_loadWeakRetained(lVar2);
          func_0x00010c21e900();
          _objc_release(lVar2);
          lVar2 = param_3 + 0x78;
          _objc_loadWeakRetained(lVar2);
          lVar5 = lVar2;
          func_0x00010bf5ede0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e900();
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar2);
        }
      }
      lVar2 = param_3 + 0x78;
      _objc_loadWeakRetained();
      lVar5 = lVar2;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bee9960(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      FUN_10631716c(lVar6,lVar8,param_8,*(undefined8 *)(param_3 + 0x28),
                    *(undefined8 *)(param_3 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      param_3 = param_3 + 0x80;
      _objc_loadWeakRetained(param_3);
      if (lVar9 == 0) {
        func_0x00010c182300(param_1,param_2);
      }
      else {
        func_0x00010c182320();
      }
      _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar9);
      return;
    }
  }
  return;
}



/* Entry: 10631cb78; end: 10631cd67; -[SCOperaVerticalNavigationManager _scrollRelativePositionForSwipeDirection:] */

undefined8 FUN_10631cb78(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      lVar4 = param_1 + 0x78;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        cVar1 = *(char *)(param_1 + 0x48);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (cVar1 != '\0') {
          return 4;
        }
        return 2;
      }
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    else {
      if (param_3 != 1) {
        return 0;
      }
      lVar4 = param_1 + 0x78;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) goto LAB_10631cd14;
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bf4e680();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      if ((uVar3 & 1) == 0) goto LAB_10631cd24;
    }
    uVar7 = 4;
  }
  else {
    if (param_3 != 3) {
      if (param_3 != 2) {
        return 0;
      }
      lVar4 = param_1 + 0x78;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (lVar6 != 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010bf4e680();
        if (iVar2 != 0) {
          return 0;
        }
        return 3;
      }
      return 1;
    }
    lVar4 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
LAB_10631cd14:
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    else {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bf4e680();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      if ((uVar3 & 1) != 0) {
        return 3;
      }
    }
LAB_10631cd24:
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 10631cd68; end: 10631d1f3; -[SCOperaVerticalNavigationManager operaScrollViewDidScroll:direction:touchBeginPoint:] */

void FUN_10631cd68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar10 = param_1;
  uVar13 = param_2;
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010be9bf20();
  uVar2 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf4e680(uVar2);
  func_0x000106316714(lVar1,uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010028941c();
  func_0x00010c0d6840(uVar2);
  if (lVar1 == 0) {
    *(undefined8 *)(param_3 + 0x88) = 0;
    lVar1 = param_3 + 0x78;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be9c320(param_3);
    func_0x00010bea2f00(param_3);
    func_0x00010bf7dca0(lVar5);
    uVar10 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010028941c();
    func_0x00010c0d65c0(uVar10);
    goto LAB_10631d1c4;
  }
  lVar11 = param_3 + 0x78;
  _objc_loadWeakRetained();
  lVar5 = lVar11;
  func_0x00010bf5f880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  func_0x00010be9c320(param_3);
  uVar2 = param_5;
  uVar12 = uVar10;
  uVar14 = uVar13;
  func_0x00010c0f36c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_106316bb0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar11 = param_3 + 0x78;
  _objc_loadWeakRetained();
  lVar4 = lVar11;
  func_0x00010c0f24c0();
  _objc_release(lVar11);
  if (lVar4 == 1) {
    *(undefined8 *)(param_3 + 0x88) = 0;
    func_0x00010bea2f00(uVar10,uVar13,param_3);
    func_0x00010bf7dca0(lVar5);
    uVar10 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010028941c();
    func_0x00010c0d65c0(uVar10);
  }
  else {
    lVar11 = param_3 + 0x78;
    _objc_loadWeakRetained();
    lVar4 = lVar11;
    func_0x00010c0ead20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    uVar6 = param_3 + 0x78;
    _objc_loadWeakRetained();
    uVar7 = uVar6;
    func_0x00010c231a40();
    _objc_release(uVar6);
    if (((uVar7 & 1) == 0) && (lVar4 == 0)) {
      func_0x00010bea0180(param_3);
      *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_3 + 0x88);
      uVar7 = *(ulong *)(param_3 + 8);
      func_0x00010bfa0d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c128160();
      if ((uVar6 & 1) == 0) {
        lVar11 = *(long *)(param_3 + 0x88);
        _objc_release(uVar7);
        if (lVar1 != lVar11) goto LAB_10631d000;
      }
      else {
        _objc_release(uVar7);
LAB_10631d000:
        if (lVar1 == 4) {
          lVar11 = lVar5;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar11;
          func_0x00010c0f61c0();
          _objc_release(lVar11);
          if ((int)lVar8 != 0) {
            func_0x00010c1d99a0(lVar5);
          }
        }
        if (((*(byte *)(param_3 + 0x38) & 1) == 0) && ((*(byte *)(param_3 + 0x39) & 1) == 0)) {
          lVar11 = param_3 + 0x78;
          _objc_loadWeakRetained();
          lVar8 = lVar11;
          func_0x00010c08aa80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          if ((lVar1 != 3) ||
             ((lVar11 = lVar8, func_0x00010c27dd80(), lVar11 != 7 &&
              (lVar11 = lVar8, func_0x00010c27dd80(), lVar11 != 8)))) {
            uVar10 = *(undefined8 *)(param_3 + 8);
            func_0x00010bf4e680(uVar10);
            func_0x000106316714(lVar1,uVar10);
            uVar10 = param_5;
            func_0x00010c0f36c0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09ef00();
            _objc_release(uVar10);
            puVar9 = PTR_PTR_1126c98a0;
            func_0x00010c0689c0(param_1,param_2,uVar12,uVar14,PTR_PTR_1126c98a0);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = param_3 + 0x70;
            _objc_loadWeakRetained(lVar11);
            func_0x00010c0d69a0();
            _objc_release(lVar11);
            _objc_release(puVar9);
          }
          _objc_release(lVar8);
        }
        *(long *)(param_3 + 0x88) = lVar1;
        lVar1 = param_3;
        func_0x00010be6f960(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29cb80();
        _objc_release(lVar1);
      }
      func_0x00010bf4cdc0(param_5);
      func_0x00010bee3d40(param_3);
      func_0x00010beda9e0(param_3);
      lVar1 = param_3 + 0x70;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0d6a00();
      _objc_release(lVar1);
      uVar10 = *(undefined8 *)(param_3 + 0x50);
      func_0x00010028941c();
      func_0x00010c0d6880(uVar10);
    }
    else {
      *(undefined8 *)(param_3 + 0x88) = 0;
      func_0x00010bea2f00(uVar10,uVar13,param_3);
      if (*(long *)(param_3 + 0x88) != 0) {
        lVar1 = param_3 + 0x80;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c0eb280(param_3);
        _objc_release(lVar1);
      }
      uVar10 = *(undefined8 *)(param_3 + 0x50);
      func_0x00010028941c();
      func_0x00010c0d65c0(uVar10);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar3);
LAB_10631d1c4:
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10631d1f4; end: 10631d227; -[SCOperaVerticalNavigationManager operaScrollViewWillEndDragging:direction:] */

void FUN_10631d1f4(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d6a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10631d228; end: 10631d46b; -[SCOperaVerticalNavigationManager operaScrollViewDidEndScrolling:] */

void FUN_10631d228(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  uVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c22ebe0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1 + 0x78;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c070be0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        *(undefined1 *)(param_1 + 0x38) = 0;
        lVar3 = param_1 + 0x80;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c21e900();
        _objc_release(lVar3);
        lVar3 = param_1 + 0x78;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010bf5ede0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e900();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      func_0x00010bf4cdc0(param_3);
      func_0x00010bee3d40(param_1);
      _objc_initWeak(auStack_58,param_1);
      lVar3 = param_1 + 0x70;
      _objc_loadWeakRetained(lVar3);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c0d69e0(lVar3);
      _objc_release(lVar3);
      func_0x00010beda9e0(param_1);
      *(undefined8 *)(param_1 + 0x88) = 0;
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      puVar6 = PTR_PTR_1126b2638;
      func_0x00010bf75b40(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x78;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar7);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10631d46c; end: 10631d5af;  */

void FUN_10631d46c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010bf2f360(*(undefined8 *)(param_1 + 0x68));
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010028941c();
      func_0x00010c0d65c0(uVar5);
    }
    else {
      lVar1 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf16000();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010028941c();
      func_0x00010c0d65e0(uVar5);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10631d5b0; end: 10631d9c3; -[SCOperaVerticalNavigationManager operaScrollViewDidTap:recognizer:] */

void FUN_10631d5b0(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  _objc_retain(param_8);
  uVar1 = param_5 + 0x80;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c07d460();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) goto LAB_10631d998;
  lVar3 = param_5 + 0x78;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0eb720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c09ef00(param_8,param_6,lVar4);
  dVar12 = param_1;
  dVar15 = param_2;
  func_0x00010bf512a0(lVar4,param_6,0);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar13 = dVar12;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar5);
  func_0x00010bfb68e0(lVar4);
  _CGRectGetWidth();
  dVar14 = dVar13;
  func_0x00010c2690e0(*(undefined8 *)(param_5 + 8));
  if (dVar13 * dVar14 <= param_1) {
    iVar11 = 0;
  }
  else {
    iVar11 = (int)*(undefined8 *)(param_5 + 8);
    func_0x00010c123040();
  }
  lVar3 = param_5 + 0x78;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c0f24c0();
  _objc_release(lVar3);
  puVar5 = (undefined *)(param_5 + 0x78);
  _objc_loadWeakRetained(puVar5);
  puVar7 = puVar5;
  if (lVar6 == 1) {
    func_0x00010bf5f880(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dca0();
LAB_10631d980:
    _objc_release(puVar5);
  }
  else {
    func_0x00010bf60c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (iVar11 == 0) {
      uVar1 = param_5 + 0x78;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c231a40();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010bf04340(PTR_PTR_1126c98e0,param_6,
                            &PTR____CFConstantStringClassReference_110e4add8);
        puVar5 = PTR_PTR_1126c98a0;
        func_0x00010c068a00(param_1,param_2,dVar12 / param_3,dVar15 / param_4,PTR_PTR_1126c98a0,
                            param_6,5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_5 + 0x70;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c0d69a0();
        _objc_release(lVar3);
        uVar10 = *(undefined8 *)(param_5 + 0x18);
        puVar8 = PTR_PTR_1126c9460;
        func_0x00010c269c60(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c0f0be0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar10,param_6,puVar8,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar8 = (undefined *)(param_5 + 0x70);
        _objc_loadWeakRetained(puVar8);
LAB_10631d974:
        func_0x00010c0d6980();
        goto LAB_10631d978;
      }
    }
    else {
      iVar11 = (int)*(undefined8 *)(param_5 + 0x10);
      func_0x00010bf80a60();
      if (iVar11 != 0) {
        uVar10 = *(undefined8 *)(param_5 + 0x18);
        puVar5 = PTR_PTR_1126c9c10;
        func_0x00010bf1d800(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0f0be0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar10,param_6,puVar5,puVar8);
LAB_10631d978:
        _objc_release(puVar8);
        goto LAB_10631d980;
      }
      uVar1 = param_5 + 0x78;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c231a40();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010bf04340(PTR_PTR_1126c98e0,param_6,
                            &PTR____CFConstantStringClassReference_110e4adb8);
        puVar5 = PTR_PTR_1126c98a0;
        func_0x00010c068a00(param_1,param_2,dVar12 / param_3,dVar15 / param_4,PTR_PTR_1126c98a0,
                            param_6,4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_5 + 0x70;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c0d69a0();
        _objc_release(lVar3);
        uVar10 = *(undefined8 *)(param_5 + 0x18);
        puVar8 = PTR_PTR_1126c9460;
        func_0x00010c269c80(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c0f0be0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar10,param_6,puVar8,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar8 = (undefined *)(param_5 + 0x70);
        _objc_loadWeakRetained(puVar8);
        goto LAB_10631d974;
      }
    }
  }
  _objc_release(puVar7);
  _objc_release(lVar4);
LAB_10631d998:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10631d9c4; end: 10631e063; -[SCOperaVerticalNavigationManager operaScrollViewWillBeginDragging:velocity:touchPoint:] */

undefined *
FUN_10631d9c4(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
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
  undefined *puVar16;
  int iVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uStack_168;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar26 = param_1;
  dVar25 = param_2;
  _objc_retain(param_5);
  uVar21 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010028941c();
  func_0x00010c0d68a0(uVar21);
  uVar21 = *(undefined8 *)(param_3 + 0x18);
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_3 + 0x78;
  _objc_loadWeakRetained();
  lVar4 = lVar20;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9410;
  func_0x00010c2979e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9410;
  func_0x00010c07b460();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = param_5;
  func_0x00010bf5f040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9410;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c9410;
  func_0x00010c29c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  puVar18 = puVar14;
  func_0x00010c0eb7c0(uVar21);
  iVar17 = (int)puVar18;
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar22);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar20);
  _objc_release(puVar3);
  puVar22 = param_5;
  if (0.0 <= param_2) {
    if (param_1 < 0.0) {
      dVar26 = ABS(param_1);
      dVar25 = ABS(param_2);
      if (dVar25 < dVar26) {
        iVar2 = (int)*(undefined8 *)(param_3 + 8);
        func_0x00010bf4e680();
        if (iVar2 != 0) {
          puVar3 = param_5;
          func_0x00010c0f36c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          FUN_106316bb0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          lVar20 = param_3 + 0x78;
          _objc_loadWeakRetained();
          lVar4 = lVar20;
          func_0x00010bf5f880();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c0f2480();
          _objc_release(lVar4);
          _objc_release(lVar20);
          if (lVar5 == 1) goto LAB_10631de98;
          uStack_168 = *(undefined8 *)(param_3 + 0x18);
          puVar3 = PTR_PTR_1126b2638;
          func_0x00010c2a5aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined *)(param_3 + 0x78);
          _objc_loadWeakRetained();
          puVar8 = puVar7;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126c9410;
          func_0x00010c2772e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297120();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126c9410;
          func_0x00010c29c0a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10631df9c;
        }
      }
    }
  }
  else {
    lVar20 = param_3 + 0x78;
    _objc_loadWeakRetained();
    lVar4 = lVar20;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar20);
    if (lVar5 != 0) {
      uVar15 = *(ulong *)(param_3 + 8);
      func_0x00010bf4e680();
      if ((uVar15 & 1) == 0) {
        puVar3 = param_5;
        func_0x00010c0f36c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        FUN_106316bb0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        lVar20 = param_3 + 0x78;
        _objc_loadWeakRetained();
        lVar4 = lVar20;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0f2480();
        _objc_release(lVar4);
        _objc_release(lVar20);
        if (lVar5 == 1) {
LAB_10631de98:
          puVar3 = (undefined *)(param_3 + 0x78);
          _objc_loadWeakRetained();
          puVar7 = puVar3;
          func_0x00010bf5f880();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = (undefined *)0x4;
          func_0x00010bf7dca0();
        }
        else {
          uStack_168 = *(undefined8 *)(param_3 + 0x18);
          puVar3 = PTR_PTR_1126b2638;
          func_0x00010c2a5aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined *)(param_3 + 0x78);
          _objc_loadWeakRetained();
          puVar8 = puVar7;
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126c9410;
          func_0x00010c2772e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297120();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126c9410;
          func_0x00010c29c0a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
LAB_10631df9c:
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar3;
          puVar14 = puVar13;
          func_0x00010c0eb7c0(uStack_168);
          iVar17 = (int)puVar14;
          _objc_release(puVar13);
          _objc_release(puVar22);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
        _objc_release(puVar3);
        _objc_release(puVar6);
      }
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return param_5;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = dVar26;
  _objc_retain(puVar16);
  puVar3 = param_5;
  func_0x00010be9bf20();
  puVar22 = PTR_PTR_1126c98e0;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar22);
    _objc_release(puVar3);
    if (iVar17 != 0) {
      puVar22 = puVar16;
      func_0x00010c0f36c0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar22;
      FUN_106316bb0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      puVar22 = param_5 + 0x78;
      _objc_loadWeakRetained();
      puVar6 = puVar22;
      func_0x00010c0f24c0();
      _objc_release(puVar22);
      if (puVar6 == (undefined *)0x1) {
        func_0x00010c138780(param_5);
        param_5 = param_5 + 0x78;
        _objc_loadWeakRetained();
        puVar22 = param_5;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_5);
        func_0x00010bf7dca0(puVar22);
        _objc_release(puVar22);
        _objc_release(puVar3);
        puVar22 = (undefined *)0x0;
        goto LAB_10631e4fc;
      }
      _objc_release(puVar3);
    }
    puVar22 = param_5;
    func_0x00010bee9960();
    _objc_retainAutoreleasedReturnValue();
    if (puVar22 != (undefined *)0x0) {
      puVar3 = param_5 + 0x78;
      _objc_loadWeakRetained();
      puVar6 = puVar3;
      func_0x00010bf5f880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar6;
      func_0x00010c0834c0();
      if ((int)puVar3 == 0) {
LAB_10631e2c8:
        puVar3 = param_5;
        func_0x00010be6f960();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != puVar3) {
          puVar7 = puVar3;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar7 != (undefined *)0x0) {
            uVar21 = *(undefined8 *)(param_5 + 0x18);
            puVar7 = PTR_PTR_1126c9460;
            func_0x00010c2a5c80(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = param_5;
            func_0x00010bf64080();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR_PTR_1126c9a28;
            func_0x00010bf6ed60();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar3;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0eb7c0(uVar21);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          if ((iVar17 != 0) && (puVar3 != (undefined *)0x0)) {
            puVar7 = param_5 + 0x78;
            _objc_loadWeakRetained();
            puVar8 = puVar6;
            func_0x00010c0f0be0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010c0f1380();
            if ((int)puVar9 == 0) {
              puVar9 = param_5 + 0x78;
              _objc_loadWeakRetained();
              puVar10 = puVar3;
              func_0x00010c0f0be0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar9;
              func_0x00010c0f1380();
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              if ((int)puVar11 != 0) goto LAB_10631e4a4;
            }
            else {
              _objc_release(puVar8);
              _objc_release(puVar7);
LAB_10631e4a4:
              if (param_5[0x59] != '\x01') goto LAB_10631e4e0;
            }
            puVar7 = PTR_PTR_1126c9c18;
            _objc_alloc();
            func_0x00010c0167e0();
            uVar21 = *(undefined8 *)(param_5 + 0x68);
            *(undefined **)(param_5 + 0x68) = puVar7;
            _objc_release(uVar21);
            func_0x00010bf046e0(*(undefined8 *)(param_5 + 0x68));
          }
        }
LAB_10631e4e0:
        _objc_release(puVar3);
      }
      else {
        puVar3 = puVar6;
        func_0x00010c29bf00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        dVar24 = ABS(dVar23 - dVar26);
        dVar23 = ABS(dVar26 + dVar23) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar24) && (bVar1 = false, !NAN(dVar24) && !NAN(dVar23))) {
          bVar1 = dVar24 < dVar23;
        }
        if (!bVar1) {
          _objc_release(puVar3);
          goto LAB_10631e2c8;
        }
        puVar7 = puVar6;
        func_0x00010c29bf00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _objc_release(puVar7);
        _objc_release(puVar3);
        dVar23 = 2.2250738585072014e-308;
        if ((2.2250738585072014e-308 <= ABS(dVar24 - dVar25)) &&
           (dVar23 = ABS(dVar25 + dVar24) * 2.220446049250313e-16, dVar23 <= ABS(dVar24 - dVar25)))
        goto LAB_10631e2c8;
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar22);
  }
  puVar22 = (undefined *)0x1;
LAB_10631e4fc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar22;
  }
  ___stack_chk_fail();
  puVar22 = *(undefined **)(puVar16 + 8);
  func_0x00010bf4e680();
  if (((int)puVar22 != 0) && (*(long *)(puVar16 + 0x60) != 0)) {
    puVar22 = puVar16 + 0x78;
    _objc_loadWeakRetained();
    puVar3 = puVar22;
    func_0x00010bf5f820();
    _objc_release(puVar22);
    if ((int)puVar3 != 0) {
      dVar25 = ((double)*(long *)(puVar16 + 0x60) / 180.0) * 3.141592653589793;
      dVar26 = 0.0;
      if (0.0 <= dVar25) {
        dVar26 = dVar25;
      }
      dVar26 = (double)NEON_fminnm(dVar26,0x3fe921fb54442d18);
      FUN_106316dcc(dVar23,0x3fe921fb54442d18,2.356194490192345 - dVar26,2.356194490192345 - dVar26,
                    dVar26 + 3.9269908169872414,0,0x3fe921fb54442d18);
      return puVar22;
    }
  }
  FUN_106316dcc(dVar23,0x3fe921fb54442d18,0x4002d97c7f3321d2,0x4002d97c7f3321d2,0x400f6a7a2955385e,0
                ,0x3fe921fb54442d18);
  return puVar22;
}



/* Entry: 10631e064; end: 10631e54b; -[SCOperaVerticalNavigationManager operaScrollViewWillScroll:direction:targetOffset:animated:] */

long FUN_10631e064(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,int param_7)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = param_1;
  _objc_retain(param_5);
  lVar14 = param_3;
  func_0x00010be9bf20();
  puVar6 = PTR_PTR_1126c98e0;
  if (lVar14 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar6);
    _objc_release(puVar2);
    if (param_7 != 0) {
      lVar14 = param_5;
      func_0x00010c0f36c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar14;
      FUN_106316bb0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      lVar14 = param_3 + 0x78;
      _objc_loadWeakRetained();
      lVar4 = lVar14;
      func_0x00010c0f24c0();
      _objc_release(lVar14);
      if (lVar4 == 1) {
        func_0x00010c138780(param_3);
        param_3 = param_3 + 0x78;
        _objc_loadWeakRetained();
        lVar14 = param_3;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        func_0x00010bf7dca0(lVar14);
        _objc_release(lVar14);
        _objc_release(lVar3);
        lVar14 = 0;
        goto LAB_10631e4fc;
      }
      _objc_release(lVar3);
    }
    lVar14 = param_3;
    func_0x00010bee9960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 != 0) {
      lVar3 = param_3 + 0x78;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010bf5f880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c0834c0();
      if ((int)lVar3 == 0) {
LAB_10631e2c8:
        lVar3 = param_3;
        func_0x00010be6f960();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != lVar3) {
          lVar5 = lVar3;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != 0) {
            uVar13 = *(undefined8 *)(param_3 + 0x18);
            puVar6 = PTR_PTR_1126c9460;
            func_0x00010c2a5c80(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_3;
            func_0x00010bf64080();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar5;
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126c9a28;
            func_0x00010bf6ed60();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar3;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0eb7c0(uVar13);
            _objc_release(puVar10);
            _objc_release(lVar9);
            _objc_release(puVar2);
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(lVar5);
            _objc_release(puVar6);
          }
          if ((param_7 != 0) && (lVar3 != 0)) {
            lVar5 = param_3 + 0x78;
            _objc_loadWeakRetained();
            lVar7 = lVar4;
            func_0x00010c0f0be0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar5;
            func_0x00010c0f1380();
            if ((int)lVar8 == 0) {
              lVar8 = param_3 + 0x78;
              _objc_loadWeakRetained();
              lVar9 = lVar3;
              func_0x00010c0f0be0(lVar3);
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar8;
              func_0x00010c0f1380();
              _objc_release(lVar9);
              _objc_release(lVar8);
              _objc_release(lVar7);
              _objc_release(lVar5);
              if ((int)lVar11 != 0) goto LAB_10631e4a4;
            }
            else {
              _objc_release(lVar7);
              _objc_release(lVar5);
LAB_10631e4a4:
              if (*(char *)(param_3 + 0x59) != '\x01') goto LAB_10631e4e0;
            }
            puVar6 = PTR_PTR_1126c9c18;
            _objc_alloc();
            func_0x00010c0167e0();
            uVar13 = *(undefined8 *)(param_3 + 0x68);
            *(undefined **)(param_3 + 0x68) = puVar6;
            _objc_release(uVar13);
            func_0x00010bf046e0(*(undefined8 *)(param_3 + 0x68));
          }
        }
LAB_10631e4e0:
        _objc_release(lVar3);
      }
      else {
        lVar3 = lVar4;
        func_0x00010c29bf00(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        dVar17 = ABS(dVar15 - param_1);
        dVar15 = ABS(param_1 + dVar15) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar17) && (bVar1 = false, !NAN(dVar17) && !NAN(dVar15))) {
          bVar1 = dVar17 < dVar15;
        }
        if (!bVar1) {
          _objc_release(lVar3);
          goto LAB_10631e2c8;
        }
        lVar5 = lVar4;
        func_0x00010c29bf00(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _objc_release(lVar5);
        _objc_release(lVar3);
        dVar15 = 2.2250738585072014e-308;
        if ((2.2250738585072014e-308 <= ABS(dVar17 - param_2)) &&
           (dVar15 = ABS(param_2 + dVar17) * 2.220446049250313e-16, dVar15 <= ABS(dVar17 - param_2))
           ) goto LAB_10631e2c8;
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar14);
  }
  lVar14 = 1;
LAB_10631e4fc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return lVar14;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)(param_5 + 8);
  func_0x00010bf4e680();
  if (((int)lVar14 != 0) && (*(long *)(param_5 + 0x60) != 0)) {
    lVar14 = param_5 + 0x78;
    _objc_loadWeakRetained();
    lVar12 = lVar14;
    func_0x00010bf5f820();
    _objc_release(lVar14);
    if ((int)lVar12 != 0) {
      dVar16 = ((double)*(long *)(param_5 + 0x60) / 180.0) * 3.141592653589793;
      dVar17 = 0.0;
      if (0.0 <= dVar16) {
        dVar17 = dVar16;
      }
      dVar17 = (double)NEON_fminnm(dVar17,0x3fe921fb54442d18);
      FUN_106316dcc(dVar15,0x3fe921fb54442d18,2.356194490192345 - dVar17,2.356194490192345 - dVar17,
                    dVar17 + 3.9269908169872414,0,0x3fe921fb54442d18);
      return lVar14;
    }
  }
  FUN_106316dcc(dVar15,0x3fe921fb54442d18,0x4002d97c7f3321d2,0x4002d97c7f3321d2,0x400f6a7a2955385e,0
                ,0x3fe921fb54442d18);
  return lVar14;
}



/* Entry: 10631e54c; end: 10631e657; -[SCOperaVerticalNavigationManager scrollView:swipeDirectionForAngle:] */

void FUN_10631e54c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 8);
  func_0x00010bf4e680();
  if ((iVar1 != 0) && (*(long *)(param_2 + 0x60) != 0)) {
    lVar2 = param_2 + 0x78;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf5f820();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      dVar4 = ((double)*(long *)(param_2 + 0x60) / 180.0) * 3.141592653589793;
      dVar5 = 0.0;
      if (0.0 <= dVar4) {
        dVar5 = dVar4;
      }
      dVar5 = (double)NEON_fminnm(dVar5,0x3fe921fb54442d18);
      FUN_106316dcc(param_1,0x3fe921fb54442d18,2.356194490192345 - dVar5,2.356194490192345 - dVar5,
                    dVar5 + 3.9269908169872414,0,0x3fe921fb54442d18);
      return;
    }
  }
  FUN_106316dcc(param_1,0x3fe921fb54442d18,0x4002d97c7f3321d2,0x4002d97c7f3321d2,0x400f6a7a2955385e,
                0,0x3fe921fb54442d18);
  return;
}



/* Entry: 10631e658; end: 10631e713; -[SCOperaVerticalNavigationManager scrollView:animationConfigForDirection:] */

undefined8 FUN_10631e658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be9bf20(param_1,param_2,param_4);
  func_0x00010bee9960(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar3);
  return 0;
}



/* Entry: 10631e714; end: 10631e7ab; -[SCOperaVerticalNavigationManager scrollView:minVelocityForDirection:] */

undefined8
FUN_10631e714(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x00010be9bf20(param_2,param_3,param_5);
  if (lVar1 == 2) {
    param_2 = param_2 + 0x78;
    _objc_loadWeakRetained();
    lVar1 = param_2;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    if ((lVar1 == 0) || (func_0x00010c26f880(lVar1), param_1 < 2.0)) {
      uVar2 = 0x4079000000000000;
    }
    else {
      uVar2 = 0x4059000000000000;
    }
    _objc_release(lVar1);
  }
  else {
    uVar2 = 0x4079000000000000;
  }
  return uVar2;
}


