/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10716086c; end: 1071608f7; -[PreviewViewController _shouldDisableSnapMapStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10716086c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + _DAT_112764488) != '\x01') {
    return 1;
  }
  lVar1 = param_1;
  func_0x00010c292da0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = (long)_DAT_1127644ac;
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c07b5a0();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c07e920(uVar3);
      goto LAB_1071608c4;
    }
  }
  uVar3 = 1;
LAB_1071608c4:
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 1071608f8; end: 107160a83; -[PreviewViewController _handleInteractionEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1071608f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    bVar6 = true;
  }
  else {
    lVar9 = *plStack_120;
    bVar6 = true;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        puVar8 = *(undefined1 **)(lStack_128 + lVar11 * 8);
        _objc_retain(puVar8);
        puVar1 = PTR_DAT_1126a5970;
        _objc_retain(puVar8);
        puVar2 = puVar8;
        func_0x00010010fab4(puVar8,puVar1);
        _objc_release(puVar8);
        if (((int)puVar2 != 0 && puVar8 != (undefined1 *)0x0) &&
           (lVar10 = param_3, puVar4 = (undefined8 *)puVar8, func_0x00010c114a00(), lVar10 == 0)) {
          _objc_release(puVar8);
          bVar6 = false;
          goto LAB_107160a34;
        }
        _objc_release(puVar8);
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = param_1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
LAB_107160a34:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar6;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  bVar6 = false;
  if (lVar9 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar10 * 8);
        _objc_retain(lVar7);
        puVar1 = PTR_DAT_1126a5970;
        _objc_retain(lVar7);
        lVar3 = lVar7;
        func_0x00010010fab4(lVar7,puVar1);
        _objc_release(lVar7);
        if (((int)lVar3 != 0 && lVar7 != 0) &&
           (puVar2 = (undefined1 *)puVar4, func_0x00010c22e4a0(), (int)puVar2 != 0)) {
          _objc_release(lVar7);
          bVar6 = true;
          goto LAB_107160bb4;
        }
        _objc_release(lVar7);
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = param_3;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
    bVar6 = false;
  }
LAB_107160bb4:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return bVar6;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)((long)puVar4 + (long)_DAT_1127644ac);
  func_0x00010c0ce5c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar5 != 0;
}



/* Entry: 107160a84; end: 107160c03; -[PreviewViewController _shouldBlockInteractionEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107160a84(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  bVar6 = false;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        lVar7 = *(long *)(lVar8 * 8);
        _objc_retain(lVar7);
        puVar1 = PTR_DAT_1126a5970;
        _objc_retain(lVar7);
        lVar3 = lVar7;
        func_0x00010010fab4(lVar7,puVar1);
        _objc_release(lVar7);
        if (((int)lVar3 != 0 && lVar7 != 0) &&
           (lVar3 = param_3, func_0x00010c22e4a0(), (int)lVar3 != 0)) {
          _objc_release(lVar7);
          bVar6 = true;
          goto LAB_107160bb4;
        }
        _objc_release(lVar7);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    bVar6 = false;
  }
LAB_107160bb4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return bVar6;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_3 + _DAT_1127644ac);
  func_0x00010c0ce5c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar4 != 0;
}



/* Entry: 107160c04; end: 107160c43; -[PreviewViewController _shouldEnableScreenBrightnessAdjustment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107160c04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127644ac);
  func_0x00010c0ce5c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107160c44; end: 107160f1f; -[PreviewViewController _adjustScreenBrightnessIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107160c44(double param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  if ((*(byte *)(param_2 + _DAT_11276459c) & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf07b60();
    _objc_release(puVar6);
    if (puVar2 != (undefined *)0x0) {
      return;
    }
    lVar3 = param_2;
    func_0x00010c083820();
    if ((int)lVar3 == 0) {
      return;
    }
    lVar7 = (long)_DAT_1127644ac;
    lVar3 = *(long *)(param_2 + lVar7);
    func_0x00010c26a080();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_2 + lVar7);
      func_0x00010c0ed8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        lVar3 = (long)_DAT_1127645a0;
        if ((*(byte *)(param_2 + lVar3) & 1) == 0) {
          uVar5 = *(undefined8 *)(param_2 + lVar7);
          func_0x00010c26a080(uVar5);
          fVar8 = SUB84(param_1,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c173c60((double)fVar8);
          _objc_release(puVar6);
          _objc_release(uVar5);
          *(undefined1 *)(param_2 + lVar3) = 1;
          return;
        }
        puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf21200();
        dVar9 = param_1;
        _objc_release(puVar6);
        fVar8 = SUB84(dVar9,0);
        uVar5 = *(undefined8 *)(param_2 + lVar7);
        func_0x00010c0ed8e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        fVar11 = ABS((float)param_1 - fVar8);
        fVar10 = ABS(fVar8 + (float)param_1) * 1.1920929e-07;
        _objc_release(uVar5);
        fVar8 = 1.1754944e-38;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar1 = fVar11 < fVar10;
        }
        if (!bVar1) {
          return;
        }
        puVar6 = *(undefined **)(param_2 + lVar7);
        func_0x00010c26a080(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173c60((double)fVar8);
        _objc_release(puVar2);
        goto LAB_107160e98;
      }
    }
    lVar3 = param_2;
    func_0x00010beb3800();
    if (((int)lVar3 != 0) && (lVar3 = (long)_DAT_1127645a4, *(long *)(param_2 + lVar3) == 0)) {
      puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21200();
      dVar9 = param_1;
      _objc_release(puVar6);
      fVar8 = SUB84(dVar9,0);
      uVar5 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c0ce5c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar5);
      if ((float)(int)(param_1 * 100.0) / 100.0 < (float)(int)(fVar8 * 100.0) / 100.0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + lVar3);
        *(undefined **)(param_2 + lVar3) = puVar6;
        _objc_release(uVar5);
        puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173c60((double)fVar8);
LAB_107160e98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 107160f20; end: 1071610db; -[PreviewViewController _restoreBrightnessIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107160f20(double param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = param_2;
  func_0x00010c083820();
  if ((int)lVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      return;
    }
    lVar7 = (long)_DAT_1127644ac;
    lVar4 = *(long *)(param_2 + lVar7);
    func_0x00010c26a080();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_2 + lVar7);
      func_0x00010c0ed8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf21200();
        dVar9 = param_1;
        _objc_release(puVar2);
        fVar8 = SUB84(dVar9,0);
        uVar6 = *(undefined8 *)(param_2 + lVar7);
        func_0x00010c26a080(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        fVar11 = ABS((float)param_1 - fVar8);
        fVar10 = ABS(fVar8 + (float)param_1) * 1.1920929e-07;
        _objc_release(uVar6);
        fVar8 = 1.1754944e-38;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar1 = fVar11 < fVar10;
        }
        if (!bVar1) {
          return;
        }
        uVar6 = *(undefined8 *)(param_2 + lVar7);
        func_0x00010c0ed8e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173c60((double)fVar8);
        _objc_release(puVar2);
        goto LAB_1071610c4;
      }
    }
    fVar8 = SUB84(param_1,0);
    lVar4 = (long)_DAT_1127645a4;
    if (*(long *)(param_2 + lVar4) != 0) {
      func_0x00010bfb2c80();
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173c60((double)fVar8);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)(param_2 + lVar4);
      *(undefined8 *)(param_2 + lVar4) = 0;
LAB_1071610c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
  }
  return;
}



/* Entry: 1071610dc; end: 107161173; -[PreviewViewController _objectTrackingDidChange] */

/* WARNING: Possible PIC construction at 0x000107161110: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071610dc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c07e920();
  if (iVar1 == 0) {
    lVar3 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127645a8);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127644c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObjectTrackingEdited_112651c08);
  return;
}



/* Entry: 107161174; end: 107161217; -[PreviewViewController saveAsDMDraft] */

bool FUN_107161174(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c070a20();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07b9c0();
    if ((uVar4 & 1) == 0) {
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c242400();
      bVar1 = uVar4 != 0x4e;
      _objc_release(param_1);
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 107161218; end: 107161413; -[PreviewViewController hasAnimatedOrExternalAudioContent] */

bool FUN_107161218(ulong param_1)

{
  bool bVar1;
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
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf037a0();
  if ((long)uVar5 < 1) {
    uVar5 = param_1;
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfadbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf07a40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c06c1e0();
    if ((uVar9 & 1) == 0) {
      uVar9 = param_1;
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfadbe0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf07a40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c06c200();
      if (((uVar13 & 1) == 0) && (uVar13 = param_1, func_0x00010bfdc800(), (uVar13 & 1) == 0)) {
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_1;
        func_0x00010c0d2940();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c15a4a0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar15 != 0;
        _objc_release();
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(param_1);
      }
      else {
        bVar1 = true;
      }
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 107161414; end: 107161417; -[PreviewViewController previewExporterDisplayingViewController:] */

void FUN_107161414(void)

{
  return;
}



/* Entry: 107161418; end: 10716157f; -[PreviewViewController previewExporter:exportPolicy:didInitVideoFilter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107161418(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4d60;
  _objc_retain(param_4);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  _objc_release(param_4);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c15e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2216a0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127644ac);
      func_0x00010c2485a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_5;
      func_0x00010bf0f680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c15e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bfb1160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107161580; end: 10716180b; -[PreviewViewController didCancelFromPreview] */

void FUN_107161580(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c3400;
    func_0x00010bf72b80(PTR_PTR_1126c3400);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c2bd480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72d00();
  _objc_release(lVar1);
  func_0x00010c1e1a40(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c14e820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf952a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c08f5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128720();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c59b0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10716180c; end: 107161827; -[PreviewViewController _attachCameraPreviewToPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716180c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    if (*(long *)(param_1 + _DAT_1127644f4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + _DAT_1127644f4),PTR_s_addSubview__11259c880);
      return;
    }
  }
  return;
}



/* Entry: 107161828; end: 107161987; -[PreviewViewController _renderingMetadataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107161828(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x23;
  undefined8 uVar6;
  long unaff_x26;
  long lVar7;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126c3c98;
  _objc_alloc(PTR_PTR_1126c3c98);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127644ac);
  uVar2 = uVar6;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c081be0();
  if ((int)uVar3 == 0) {
    lVar7 = 0;
  }
  else {
    uStack_68 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = uStack_68;
    func_0x0001070c47d8();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x23;
    func_0x00010c1307e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001ea0(puVar1,param_2,uVar6,lVar7,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  if ((int)uVar3 != 0) {
    _objc_release(lVar7);
    _objc_release(unaff_x26);
    _objc_release(unaff_x23);
    _objc_release(uStack_68);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107161988; end: 107161ad3; -[PreviewViewController stopAnimatedStickerIfNecessary] */

void FUN_107161988(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c2558a0(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar5);
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_220,auStack_1d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_210;
    do {
      lVar5 = 0;
      do {
        if (*plStack_210 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c13d280(*(undefined8 *)(lStack_218 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c4aa8;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240d40(puVar2,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107161ad4; end: 107161c1f; -[PreviewViewController resumeAnimatedStickerIfNecessary] */

void FUN_107161ad4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c13d280(*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c4aa8;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240d40(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107161c20; end: 107161c73; -[PreviewViewController _stateBuilder] */

void FUN_107161c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4aa8;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240d40(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107161c74; end: 107161d8f; -[PreviewViewController modalPresentationDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107161c74(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + (long)_DAT_11276459c) = 1;
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108f487dc();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    *(undefined1 *)(param_1 + (long)_DAT_112764574) = 1;
  }
  func_0x00010be954c0(param_1);
  func_0x00010c256e40(param_1);
  func_0x00010c256100(param_1);
  func_0x00010c2558a0(param_1);
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf786c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107161d90; end: 107161e63; -[PreviewViewController modalDismissalDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107161d90(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(undefined1 *)(param_1 + (long)_DAT_11276459c) = 0;
  *(undefined1 *)(param_1 + (long)_DAT_112764574) = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_1127644ac);
  func_0x00010c231a80();
  if (iVar1 != 0) {
    func_0x00010be0c1c0(param_1);
  }
  func_0x00010c24ef40(param_1);
  func_0x00010c23ac40(param_1);
  func_0x00010c13d280(param_1);
  func_0x00010bdfd4c0(param_1);
  uVar2 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107161e64; end: 10716241b; -[PreviewViewController userMentions] */

undefined * FUN_107161e64(long param_1,undefined **param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lStack_310;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar16;
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    param_2 = &PTR___NSConcreteGlobalBlock_110990378;
    lStack_310 = lVar15;
    func_0x0001006372a4();
    _objc_release(lVar15);
    _objc_release(lVar16);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_retain(lStack_310);
    lVar4 = lStack_310;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lStack_310);
        }
        ppuVar6 = *(undefined ***)(lVar16 * 8);
        func_0x00010c0846e0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c0ca640();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar10;
        func_0x00010bfe2ee0();
        param_2 = ppuVar10;
        func_0x00010c0b5940(ppuVar10);
        func_0x000100c4a928(ppuVar11,param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar11);
        func_0x00010befa120(puVar2);
        _objc_release(ppuVar12);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        lVar16 = lVar16 + 1;
      } while (lVar4 != lVar16);
      lVar4 = lStack_310;
      func_0x00010bf52a60();
    }
    _objc_release(lStack_310);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar5;
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_retain(lVar16);
    lVar4 = lVar16;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar16);
        }
        uVar13 = *(undefined8 *)(lVar15 * 8);
        func_0x00010c268460();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar2);
        func_0x00010bf97ce0(uVar13);
        _objc_release(uVar13);
        _objc_release(puVar2);
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      lVar4 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
  }
  else {
    lStack_310 = lVar1;
    func_0x00010bfcd140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lStack_310;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bee6f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lStack_310;
    func_0x00010bf308c0(lStack_310);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bee6ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar16 = lVar1;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar16;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar16);
        }
        uVar17 = *(undefined8 *)(lVar15 * 8);
        uVar13 = uVar17;
        func_0x00010c2553e0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bee6f00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2);
        _objc_release(lVar3);
        _objc_release(uVar13);
        func_0x00010bf308c0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bee6ee0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2);
        _objc_release(lVar3);
        _objc_release(uVar17);
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      lVar4 = lVar16;
      func_0x00010bf52a60();
    }
  }
  _objc_release(lVar16);
  _objc_release(lStack_310);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010bfedfc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_2;
  func_0x00010c0ca400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return (undefined *)(ulong)(ppuVar7 != (undefined **)0x0);
}



/* Entry: 10716241c; end: 1071624db;  */

bool FUN_10716241c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfedfc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0ca400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 1071624dc; end: 10716253b;  */

void FUN_1071624dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c290fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10716253c; end: 10716275b; -[PreviewViewController _userMentionsInStickers:] */

void FUN_10716253c(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = &uStack_130;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar13;
        func_0x00010c27dd80();
        if ((lVar3 == 6) && (lVar3 = lVar13, func_0x00010bfee000(), lVar3 == 8)) {
          func_0x00010c0846e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar13;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar3;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010c0ca640();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar15;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bfe2ee0();
          param_2 = lVar4;
          func_0x00010c0b5940(lVar4);
          func_0x000100c4a928(lVar5,param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          func_0x00010befa120(puVar1);
          _objc_release(lVar6);
          _objc_release(lVar4);
          _objc_release(lVar15);
          _objc_release(lVar14);
          _objc_release(lVar3);
          _objc_release(lVar13);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar8 = &uStack_130;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar8);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    puVar7 = puVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar7 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar8);
        }
        lVar14 = *(long *)((long)puVar12 * 8);
        lVar13 = lVar14;
        func_0x00010c268460();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar13;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (lVar9 != 0) {
          lVar15 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(lVar13);
            }
            lVar4 = lVar14;
            func_0x00010c268460(lVar14);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_retain(puVar1);
            func_0x00010c0c0b00(lVar5);
            _objc_release(puVar1);
            _objc_release(lVar5);
            lVar15 = lVar15 + 1;
          } while (lVar9 != lVar15);
          lVar9 = lVar13;
          func_0x00010bf52a60();
        }
        _objc_release(lVar13);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar12 != puVar7);
      puVar7 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      uVar10 = puVar8[4];
      func_0x00010c290fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar10);
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10716275c; end: 1071629bf; -[PreviewViewController _userMentionsInCaptions:] */

void FUN_10716275c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar13 = *(long *)(lVar12 * 8);
      lVar5 = lVar13;
      func_0x00010c268460();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar5);
          }
          lVar7 = lVar13;
          func_0x00010c268460(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_retain(puVar3);
          func_0x00010c0c0b00(lVar8);
          _objc_release(puVar3);
          _objc_release(lVar8);
          lVar14 = lVar14 + 1;
        } while (lVar6 != lVar14);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c290fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar11);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071629c0; end: 107162a1f;  */

void FUN_1071629c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c290fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107162a20; end: 107162a83; -[PreviewViewController _lensTouchProcesser] */

void FUN_107162a20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27e580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107162a84; end: 107162aff; -[PreviewViewController _filterTouchProcessor] */

void FUN_107162a84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfae5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c277420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107162b00; end: 107162b7b; -[PreviewViewController _filterUIStateProvider] */

void FUN_107162b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfae5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2527c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107162b7c; end: 107162b8b; -[PreviewViewController _saveSnapChangesAlertDialogWithSaveHandler:discardHandler:] */

void FUN_107162b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdea970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createAlertDialogWithSaveHandle_1125583f8,param_3,0,0,param_4);
  return;
}



/* Entry: 107162b8c; end: 107162b9f; -[PreviewViewController _saveAssetChangesAlertDialogWithSaveAndReplaceHandler:saveAsCopyHandler:discardHandler:] */

void FUN_107162b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdea970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createAlertDialogWithSaveHandle_1125583f8,0,param_3,param_4,param_5);
  return;
}



/* Entry: 107162ba0; end: 107162bb3; -[PreviewViewController _saveSnapChangesAlertDialogWithSaveAsCopyHandler:discardHandler:] */

void FUN_107162ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdea970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createAlertDialogWithSaveHandle_1125583f8,0,0,param_3,param_4);
  return;
}



/* Entry: 107162bb4; end: 107162f3f; -[PreviewViewController _createAlertDialogWithSaveHandler:saveAndReplaceHandler:saveAsCopyHandler:discardHandler:] */

void FUN_107162bb4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed70;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puVar2 = puVar1;
  if (param_3 != (undefined *)0x0) {
    func_0x000108ededb0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar4;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107162f40;
    puStack_78 = &UNK_11084e500;
    _objc_retain(param_3);
    puStack_70 = param_3;
    func_0x00010beff480(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110ea0b18,
                        &puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar2 = puStack_70;
    _objc_release(puStack_70);
  }
  puVar3 = PTR_PTR_1126aed70;
  if (param_4 != (undefined *)0x0) {
    func_0x000108eded68();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar4;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x107162f74;
    puStack_a0 = &UNK_11084e500;
    _objc_retain(param_4);
    puStack_98 = param_4;
    func_0x00010beff480(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e85c18,
                        &puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar2 = puStack_98;
    _objc_release(puStack_98);
  }
  puVar3 = PTR_PTR_1126aed70;
  if (param_5 != (undefined *)0x0) {
    func_0x000108eded98();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x107162fa8;
    puStack_c8 = &UNK_11084e500;
    _objc_retain(param_5);
    puStack_c0 = param_5;
    func_0x00010beff480(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e85c38,
                        &puStack_e0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar2 = puStack_c0;
    _objc_release(puStack_c0);
  }
  puVar3 = PTR_PTR_1126aed70;
  if (param_6 != (undefined *)0x0) {
    func_0x000108ede7f8();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x107162fdc;
    puStack_f0 = &UNK_11084e500;
    _objc_retain(param_6);
    puStack_e8 = param_6;
    func_0x00010beff460(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e9ffd8,0,
                        &puStack_108,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar2 = puStack_e8;
    _objc_release(puStack_e8);
  }
  puVar4 = PTR_PTR_1126aed70;
  func_0x000108ede798();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480(puVar4,param_2,puVar2,&PTR____CFConstantStringClassReference_110dcc5f8,
                      &PTR___NSConcreteGlobalBlock_1109903f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010befa120(puVar1,param_2,puVar4);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar2 = puVar3;
  func_0x000108ededc8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3,param_2,puVar2,0,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107162f40; end: 10716300f;  */

void FUN_107162f40(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000107162f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107163010; end: 10716301f;  */

void FUN_107163010(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107163020; end: 10716317f; -[PreviewViewController _setupSnapEditorListeners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107163020(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_408 [8];
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  long lStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined *puStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [16];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_1;
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar15;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar3 = PTR_s_configureWithView__1125af8f0;
  while (PTR_s_configureWithView__1125af8f0 = puVar3, lVar11 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar15);
      }
      uVar13 = *(ulong *)(lVar16 * 8);
      uVar6 = uVar13;
      _objc_opt_respondsToSelector(uVar13,puVar3);
      if ((uVar6 & 1) != 0) {
        lVar14 = param_1;
        func_0x00010c1122a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf47d20(uVar13);
        _objc_release(lVar14);
      }
      lVar16 = lVar16 + 1;
    } while (lVar11 != lVar16);
    lVar11 = lVar15;
    func_0x00010bf52a60();
    puVar3 = PTR_s_configureWithView__1125af8f0;
  }
  _objc_release(lVar15);
  func_0x00010bde5560(param_1);
  func_0x00010bfe4720(*(undefined8 *)(param_1 + _DAT_112764474));
  func_0x00010be76580();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf207a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109420();
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = (long)_DAT_112764474;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf9d440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf9d440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18faa0();
  _objc_release(uVar2);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c0ef680();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c26fe40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar15 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar15);
  lVar11 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf5afe0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar15 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar15;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  _objc_release(lVar11);
  _objc_release(lVar15);
  lVar11 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar11;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  _objc_release(lVar15);
  _objc_release(lVar11);
  lVar15 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar15;
  func_0x00010c29b9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  _objc_release(lVar11);
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar15;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar15);
      }
      puVar3 = PTR_DAT_1126a5978;
      uVar12 = *(undefined8 *)(lVar16 * 8);
      _objc_retain(uVar12);
      uVar5 = uVar12;
      func_0x00010010fab4(uVar12,puVar3);
      uVar2 = uVar12;
      if ((int)uVar5 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar12);
      func_0x00010c1d91e0(uVar2);
      _objc_release(uVar2);
      lVar16 = lVar16 + 1;
    } while (lVar11 != lVar16);
    lVar11 = lVar15;
    func_0x00010bf52a60();
  }
  _objc_release(lVar15);
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar3 = PTR_DAT_1126a5980;
      uVar12 = *(undefined8 *)(lVar15 * 8);
      _objc_retain(uVar12);
      uVar5 = uVar12;
      func_0x00010010fab4(uVar12,puVar3);
      uVar2 = uVar12;
      if ((int)uVar5 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar12);
      func_0x00010c1d91e0(uVar2);
      _objc_release(uVar2);
      lVar15 = lVar15 + 1;
    } while (lVar11 != lVar15);
    lVar11 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127644ac;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf114c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a380(lVar15);
  _objc_release(uVar2);
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228a00();
  _objc_release(lVar1);
  _objc_release(lVar11);
  func_0x00010c228c80(param_1);
  func_0x00010bec89c0(param_1);
  func_0x00010beade40(param_1);
  func_0x00010c28d160(param_1);
  lVar11 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123520();
  _objc_release(lVar11);
  func_0x00010c228fe0(param_1);
  func_0x00010beaade0(param_1);
  _objc_initWeak(auStack_3a0,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  puStack_3c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3c0 = 0xc2000000;
  pcStack_3b8 = FUN_1071642e4;
  puStack_3b0 = &UNK_11084dd40;
  _objc_copyWeak(auStack_3a8,auStack_3a0);
  func_0x00010befa300(uVar2);
  lVar11 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar11);
  puVar3 = PTR_PTR_1126d4de0;
  _objc_alloc();
  lVar11 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar10;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bab38;
  func_0x00010c22b6a0(PTR_PTR_1126bab38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009040();
  lVar14 = (long)_DAT_112764570;
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar3;
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(lVar16);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar11);
  func_0x00010c2868e0(*(undefined8 *)(param_1 + lVar14));
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf2d240();
  _objc_release(uVar5);
  if ((int)uVar2 != 0) {
    lVar11 = lVar15;
    func_0x000108eb72a0();
    uVar6 = *(ulong *)(param_1 + lVar17);
    if ((int)lVar11 == 0) {
      func_0x00010c11ea80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar11;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar10;
      func_0x00010c252ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar14;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010bf0c7a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar14);
      _objc_release(lVar16);
      _objc_release(lVar10);
      _objc_release(lVar1);
      _objc_release(lVar11);
      _objc_release(uVar6);
      lVar11 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar11;
      func_0x0001070c4790();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010c240640();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar16;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar14;
      func_0x00010bf5ffa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar16);
      _objc_release(lVar10);
      _objc_release(lVar1);
      _objc_release(lVar11);
      puVar3 = PTR_PTR_1126ba8a8;
      _objc_retain(uVar13);
      puVar4 = PTR_PTR_1126ba960;
      _objc_opt_class(PTR_PTR_1126ba960);
      uVar9 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar4);
      uVar6 = uVar13;
      if ((uVar9 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar13);
      func_0x00010befb9a0(puVar3);
      _objc_release(uVar6);
      _objc_initWeak(auStack_3d0,param_1);
      uVar2 = *(undefined8 *)(param_1 + lVar17);
      _objc_copyWeak(auStack_408,auStack_3d0);
      _objc_retain(uVar13);
      _objc_retain(lVar15);
      func_0x00010befa300(uVar2);
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010c11ea80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar15);
      _objc_release(uVar13);
      _objc_destroyWeak(auStack_408);
      _objc_destroyWeak(auStack_3d0);
      _objc_release(lVar7);
    }
    else {
      func_0x00010c11ea80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010bf5cca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127644e8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c253ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_initWeak(auStack_3d0,param_1);
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3f8 = 0xc2000000;
      pcStack_3f0 = FUN_107164358;
      puStack_3e8 = &UNK_110990518;
      _objc_copyWeak(auStack_3d8,auStack_3d0);
      _objc_retain(lVar15);
      lStack_3e0 = lVar15;
      func_0x00010befa300(uVar5);
      _objc_release(lStack_3e0);
      _objc_destroyWeak(auStack_3d8);
      _objc_destroyWeak(auStack_3d0);
    }
    _objc_release(uVar13);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c253b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0a40();
    _objc_release(lVar10);
    _objc_release(lVar1);
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  _objc_release(lVar15);
  _objc_destroyWeak(auStack_3a8);
  _objc_destroyWeak(auStack_3a0);
  return;
}



/* Entry: 107163180; end: 107163b63; -[PreviewViewController _configurePreviewFeatureDelegates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107163180(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [16];
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf207a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109420();
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = (long)_DAT_112764474;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf9d440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf9d440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18faa0();
  _objc_release(uVar2);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c0ef680();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c26fe40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar16 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar16 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar12 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf5afe0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar16 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar12;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(lVar12);
  lVar16 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar16);
  lVar12 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar12;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(lVar12);
  lVar16 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar16;
  func_0x00010c29b9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  _objc_release(lVar12);
  _objc_release(lVar16);
  lVar16 = param_1;
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar16;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar16);
      }
      puVar3 = PTR_DAT_1126a5978;
      uVar13 = *(undefined8 *)(lVar15 * 8);
      _objc_retain(uVar13);
      uVar5 = uVar13;
      func_0x00010010fab4(uVar13,puVar3);
      uVar2 = uVar13;
      if ((int)uVar5 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar13);
      func_0x00010c1d91e0(uVar2);
      _objc_release(uVar2);
      lVar15 = lVar15 + 1;
    } while (lVar12 != lVar15);
    lVar12 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar3 = PTR_DAT_1126a5980;
      uVar13 = *(undefined8 *)(lVar16 * 8);
      _objc_retain(uVar13);
      uVar5 = uVar13;
      func_0x00010010fab4(uVar13,puVar3);
      uVar2 = uVar13;
      if ((int)uVar5 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar13);
      func_0x00010c1d91e0(uVar2);
      _objc_release(uVar2);
      lVar16 = lVar16 + 1;
    } while (lVar12 != lVar16);
    lVar12 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127644ac;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf114c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a380(lVar16);
  _objc_release(uVar2);
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228a00();
  _objc_release(lVar1);
  _objc_release(lVar12);
  func_0x00010c228c80(param_1);
  func_0x00010bec89c0(param_1);
  func_0x00010beade40(param_1);
  func_0x00010c28d160(param_1);
  lVar12 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123520();
  _objc_release(lVar12);
  func_0x00010c228fe0(param_1);
  func_0x00010beaade0(param_1);
  _objc_initWeak(auStack_270,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_1071642e4;
  puStack_280 = &UNK_11084dd40;
  _objc_copyWeak(auStack_278,auStack_270);
  func_0x00010befa300(uVar2);
  lVar12 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar12);
  puVar3 = PTR_PTR_1126d4de0;
  _objc_alloc();
  lVar12 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar11;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bab38;
  func_0x00010c22b6a0(PTR_PTR_1126bab38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009040();
  lVar14 = (long)_DAT_112764570;
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar3;
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar12);
  func_0x00010c2868e0(*(undefined8 *)(param_1 + lVar14));
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf2d240();
  _objc_release(uVar5);
  if ((int)uVar2 != 0) {
    lVar12 = lVar16;
    func_0x000108eb72a0();
    uVar6 = *(ulong *)(param_1 + lVar17);
    if ((int)lVar12 == 0) {
      func_0x00010c11ea80();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar12;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar11;
      func_0x00010c252ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar14;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf0c7a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar14);
      _objc_release(lVar15);
      _objc_release(lVar11);
      _objc_release(lVar1);
      _objc_release(lVar12);
      _objc_release(uVar6);
      lVar12 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar12;
      func_0x0001070c4790();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010c240640();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar15;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar14;
      func_0x00010bf5ffa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar15);
      _objc_release(lVar11);
      _objc_release(lVar1);
      _objc_release(lVar12);
      puVar3 = PTR_PTR_1126ba8a8;
      _objc_retain(uVar9);
      puVar4 = PTR_PTR_1126ba960;
      _objc_opt_class(PTR_PTR_1126ba960);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar4);
      uVar6 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar9);
      func_0x00010befb9a0(puVar3);
      _objc_release(uVar6);
      _objc_initWeak(auStack_2a0,param_1);
      uVar2 = *(undefined8 *)(param_1 + lVar17);
      _objc_copyWeak(auStack_2d8,auStack_2a0);
      _objc_retain(uVar9);
      _objc_retain(lVar16);
      func_0x00010befa300(uVar2);
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010c11ea80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar16);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_2d8);
      _objc_destroyWeak(auStack_2a0);
      _objc_release(lVar7);
    }
    else {
      func_0x00010c11ea80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf5cca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127644e8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c253ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_initWeak(auStack_2a0,param_1);
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2c8 = 0xc2000000;
      pcStack_2c0 = FUN_107164358;
      puStack_2b8 = &UNK_110990518;
      _objc_copyWeak(auStack_2a8,auStack_2a0);
      _objc_retain(lVar16);
      lStack_2b0 = lVar16;
      func_0x00010befa300(uVar5);
      _objc_release(lStack_2b0);
      _objc_destroyWeak(auStack_2a8);
      _objc_destroyWeak(auStack_2a0);
    }
    _objc_release(uVar9);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c253b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0a40();
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar12);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  _objc_release(lVar16);
  _objc_destroyWeak(auStack_278);
  _objc_destroyWeak(auStack_270);
  return;
}



/* Entry: 107163b64; end: 1071642e3; -[PreviewViewController _postFeatureCoordinatorSetupTasks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107163b64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127644ac;
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf114c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a380(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228a00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c228c80(param_1);
  func_0x00010bec89c0(param_1);
  func_0x00010beade40(param_1);
  func_0x00010c28d160(param_1);
  lVar1 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123520();
  _objc_release(lVar1);
  func_0x00010c228fe0(param_1);
  func_0x00010beaade0(param_1);
  _objc_initWeak(auStack_80,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1071642e4;
  puStack_90 = &UNK_11084dd40;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010befa300(uVar4);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126d4de0;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126bab38;
  func_0x00010c22b6a0(PTR_PTR_1126bab38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009040();
  lVar15 = (long)_DAT_112764570;
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar5;
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c2868e0(*(undefined8 *)(param_1 + lVar15));
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf2d240();
  _objc_release(uVar9);
  if ((int)uVar4 != 0) {
    lVar1 = lVar3;
    func_0x000108eb72a0();
    uVar10 = *(ulong *)(param_1 + lVar16);
    if ((int)lVar1 == 0) {
      func_0x00010c11ea80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c252ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar15;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar10;
      func_0x00010bf0c7a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar15);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar10);
      lVar1 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001070c4790();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c240640();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar7;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar15;
      func_0x00010bf5ffa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar5 = PTR_PTR_1126ba8a8;
      _objc_retain(uVar13);
      puVar8 = PTR_PTR_1126ba960;
      _objc_opt_class(PTR_PTR_1126ba960);
      uVar14 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar8);
      uVar10 = uVar13;
      if ((uVar14 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar13);
      func_0x00010befb9a0(puVar5);
      _objc_release(uVar10);
      _objc_initWeak(auStack_b0,param_1);
      uVar4 = *(undefined8 *)(param_1 + lVar16);
      _objc_copyWeak(auStack_e8,auStack_b0);
      _objc_retain(uVar13);
      _objc_retain(lVar3);
      func_0x00010befa300(uVar4);
      uVar9 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c11ea80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(lVar3);
      _objc_release(uVar13);
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_b0);
      _objc_release(lVar11);
    }
    else {
      func_0x00010c11ea80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar10;
      func_0x00010bf5cca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      uVar9 = *(undefined8 *)(param_1 + _DAT_1127644e8);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c253ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_initWeak(auStack_b0,param_1);
      uVar9 = *(undefined8 *)(param_1 + lVar16);
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_107164358;
      puStack_c8 = &UNK_110990518;
      _objc_copyWeak(auStack_b8,auStack_b0);
      _objc_retain(lVar3);
      lStack_c0 = lVar3;
      func_0x00010befa300(uVar9);
      _objc_release(lStack_c0);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_b0);
    }
    _objc_release(uVar13);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c253b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0a40();
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1071642e4; end: 107164357;  */

void FUN_1071642e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c28d160(param_1);
    lVar1 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123520();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123980();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107164358; end: 10716442f;  */

void FUN_107164358(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_5 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf46560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ea00();
    dVar3 = param_1;
    dVar5 = param_2;
    _objc_release(lVar2);
    func_0x00010bfbb9e0(lVar1);
    dVar4 = dVar3;
    _CGRectGetWidth();
    _CGRectGetHeight(dVar3,dVar5,param_3,param_4);
    if ((0.0 < dVar4) && (0.0 < dVar3)) {
      func_0x000108eb72f4(param_1 / dVar4,param_2 / dVar3,*(undefined8 *)(param_5 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107164430; end: 10716464b;  */

void FUN_107164430(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    func_0x00010c11ea00(param_2);
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x20));
    puVar5 = PTR_PTR_1126ba960;
    puVar3 = PTR_PTR_1126ba8a8;
    uVar2 = *(ulong *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_opt_class(puVar5);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c28a3e0(puVar3);
    _objc_release(uVar1);
    lVar7 = lVar4;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar18;
    func_0x00010c252c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = lVar9;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar9);
        }
        if (*(long *)(lVar18 * 8) == *(long *)(param_1 + 0x20)) {
          lVar10 = lVar4;
          func_0x00010c0d2440();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf736e0();
          _objc_release(lVar10);
        }
        lVar18 = lVar18 + 1;
      } while (lVar7 != lVar18);
      lVar7 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  _objc_release(lVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf16a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228540(uVar13);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(param_2);
  _objc_release(uVar13);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 10716464c; end: 107164733; -[PreviewViewController _setupBatchCaptureView] */

void FUN_10716464c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf16a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228540(uVar3,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107164734; end: 1071648bb; -[PreviewViewController _setupLocationAccessRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107164734(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126d4de8;
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf56f20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf6e0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1071648bc; end: 10716497f;  */

void FUN_1071648bc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_10716496c;
  lVar1 = param_1;
  if (param_2 == 0) {
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c297c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1290c0();
  }
  else {
    if (param_2 == 2) {
      func_0x00010c21f2a0(param_1);
      goto LAB_10716496c;
    }
    if (param_2 != 1) goto LAB_10716496c;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2033e0();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_10716496c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107164980; end: 107164a93; -[PreviewViewController _setupLensAssetsUploadInfoFutureCompletionBlockWithConfiguration:] */

void FUN_107164980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c090040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107164a94; end: 107164aff;  */

void FUN_107164a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4a3e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107164b00; end: 107164bdb; -[PreviewViewController _lensAssetsUploadInfoFutureDidCompleteWithInformObject:error:config:] */

void FUN_107164b00(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06d080();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c1baa80(param_5,param_2,param_3);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a020();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107164bdc; end: 107164bdf; -[PreviewViewController _didChangeBatchCaptureConfiguration:] */

void FUN_107164bdc(void)

{
  return;
}



/* Entry: 107164be0; end: 107164cd3; -[PreviewViewController _enableWaitingForFutureUI] */

void FUN_107164be0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161840();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107164cd4; end: 107164e5b; -[PreviewViewController _setupMultiSnapConfigurationFutureCompletionBlockWithConfiguration:] */

void FUN_107164cd4(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d2120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010beffe80();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar5 & 1) == 0) {
      _objc_initWeak(auStack_58,param_1);
      lVar1 = param_3;
      func_0x00010c0d2120(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = auStack_60;
      _objc_copyWeak(puVar6,auStack_58);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar1);
      _objc_release(puVar6);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107164e5c; end: 107164ec3;  */

void FUN_107164e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe800();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107164ec4; end: 107164f7b; -[PreviewViewController _didLoadMultiSnapConfigurationFutureWithConfiguration:error:] */

void FUN_107164ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5140();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010c228fe0(param_1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a020();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107164f7c; end: 10716512b; -[PreviewViewController _spotlightModesFromConfiguration:] */

void FUN_107164f7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0811c0();
  if ((int)lVar2 != 0) {
    uVar3 = 5;
    func_0x00010baee46c(5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  lVar2 = param_3;
  func_0x00010c06d080();
  if ((int)lVar2 != 0) {
    uVar3 = 3;
    func_0x00010baee46c(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  lVar2 = param_3;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar3 = 6;
    func_0x00010baee46c(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  lVar2 = param_3;
  func_0x00010c070a20();
  if ((int)lVar2 != 0) {
    uVar3 = 0xb;
    func_0x00010baee46c(0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  lVar2 = param_3;
  func_0x00010c078020();
  if ((int)lVar2 != 0) {
    uVar3 = 0xc;
    func_0x00010baee46c(0xc);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  lVar2 = param_3;
  func_0x00010c074860();
  if ((int)lVar2 != 0) {
    uVar3 = 0xd;
    func_0x00010baee46c(0xd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10716512c; end: 1071651f7; -[PreviewViewController _isDeferredAddSnapEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716512c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = (long)_DAT_1127645ac;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1071651f8; end: 1071652a3; -[PreviewViewController snapSegmentStateChangedShouldUpdateThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071651f8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c240620(*(undefined8 *)(param_1 + _DAT_112764538));
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c06ba20();
  if (iVar1 != 0) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240620();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071652a4; end: 1071653c3; -[PreviewViewController isShortVideo] */

uint FUN_1071652a4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  
  lVar1 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((lVar3 == 0) || (lVar1 = lVar3, func_0x00010bfde420(), (int)lVar1 == 0)) {
    uVar5 = 0;
  }
  else {
    func_0x00010c0ff240(lVar3);
    lVar1 = param_2;
    dVar6 = param_1;
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f4a2bc();
    uVar5 = (uint)(param_1 < dVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c07de40();
  _objc_release(param_2);
  _objc_release(lVar3);
  return (uint)lVar1 & 1 | uVar5;
}



/* Entry: 1071653c4; end: 1071654cf; -[PreviewViewController videoAudioEnabled] */

undefined * FUN_1071653c4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf926c0();
  puVar6 = PTR_PTR_1126bcd68;
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf0f0e0();
  }
  else {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdc700(puVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 1071654d0; end: 10716554f; -[PreviewViewController featureDrawingSetDisplayedPinchResizeTeachingTooltip:] */

void FUN_1071654d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1905a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107165550; end: 1071655e3; -[PreviewViewController featureDrawingShouldDisplayPinchResizeTeachingTooltip:] */

undefined8 FUN_107165550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22f960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1071655e4; end: 1071655eb; -[PreviewViewController featureDrawing:didTapToolbarButton:] */

void FUN_1071655e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toolbarButtonTapped__11267a848,param_4);
  return;
}



/* Entry: 1071655ec; end: 10716569f; -[PreviewViewController featureWebAttachmentWillUpdateOnMultiSnap:newAttachmentUrl:] */

void FUN_1071655ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0d2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72fc0();
  _objc_release(param_4);
  _objc_release(uVar1);
  func_0x00010c242fa0(param_1,param_2,0);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c241880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72fe0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071656a0; end: 1071656a3; -[PreviewViewController featureWebAttachmentDidTapCommerce] */

void FUN_1071656a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a3730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logCommerceAttachmentTap_1126067d8);
  return;
}



/* Entry: 1071656a4; end: 107165717; -[PreviewViewController featureTimerWillUpdateOnSnapEditingState:withSelectedItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071656a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c06d080();
  if (iVar1 != 0) {
    func_0x00010bf169c0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107165718; end: 1071657ff; -[PreviewViewController featureTimerDidBeginLongPress:] */

void FUN_107165718(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107165800; end: 1071658d3; -[PreviewViewController featureCaptionCanStartEditingCaption:] */

uint FUN_107165800(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c071800();
  if ((int)lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c23b200(param_1);
      uVar6 = (uint)param_1 ^ 1;
    }
    else {
      uVar6 = 0;
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar6;
}



/* Entry: 1071658d4; end: 10716593b; -[PreviewViewController featureCaptionWillStartEditingCaption:] */

void FUN_1071658d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29a9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe25c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10716593c; end: 107165b43; -[PreviewViewController featureCaptionDidStartEditingCaption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716593c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe0a80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2dc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be163e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218d20();
  _objc_release(lVar1);
  func_0x00010c28d160(param_1);
  func_0x00010c138c80(param_1);
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf606c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c070080();
  func_0x00010c287d60(lVar3,param_2,lVar4,lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c272940(*(undefined8 *)(param_1 + _DAT_112764504),param_2,2,0);
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c24e500(param_1,param_2,1,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107165b44; end: 107165ddf; -[PreviewViewController featureCaptionDidStopEditingCaption:withCaptionDeleted:shouldSendSnap:] */

void FUN_107165b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf91760();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfae5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c252b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2076a0(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010be163e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218d20();
  _objc_release(uVar1);
  if (param_4 == 0) {
    uVar1 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(uVar1);
  }
  else {
    func_0x00010c28d160();
  }
  func_0x00010c138c80(param_1);
  func_0x00010c242fa0(param_1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf606c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070080();
  func_0x00010c287d60(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfaf720(param_1);
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea02d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendSnap_112585a58);
    return;
  }
  return;
}



/* Entry: 107165de0; end: 107165e0f; -[PreviewViewController featureCaptionDidDeleteCaption:] */

void FUN_107165de0(undefined8 param_1)

{
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107165e10; end: 107166063; -[PreviewViewController featureCaption:loadTrackingCaption:withCaptionState:] */

void FUN_107165e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c081660();
  if ((int)uVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c278ba0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_70 = 0;
    }
    else {
      lVar4 = param_1;
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c29a700();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = lVar6;
      func_0x00010c29b920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    puVar10 = PTR_PTR_1126c4a10;
    uVar1 = param_5;
    func_0x00010c2790e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010c081160();
    lVar3 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001070c4820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfdb680();
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279720(puVar10,param_2,uVar1,uVar7 & 0xffffffff,lVar4,uStack_70,lVar6,lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    func_0x00010bf921e0(lVar2,param_2,puVar10);
    func_0x00010c1f5fe0(0,lVar2);
    _objc_release(puVar10);
    _objc_release(uStack_70);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107166064; end: 1071660d3; -[PreviewViewController featureCaptionStartLoadingCaptionStyles:] */

void FUN_107166064(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a020();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071660d4; end: 107166143; -[PreviewViewController featureCaptionDidLoadCaptionStyles:] */

void FUN_1071660d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a020();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107166144; end: 10716614b; -[PreviewViewController featureCaption:didCreateCustomStickerFromImage:] */

void FUN_107166144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e8670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setRecentlyCreatedCustomSticker__112657bc0,param_4);
  return;
}



/* Entry: 10716614c; end: 10716614f; -[PreviewViewController stickerSuggestionsActionHandler] */

void FUN_10716614c(void)

{
  return;
}



/* Entry: 107166150; end: 107166203; -[PreviewViewController _logCaptionTooltipShownWithOneAttempt] */

void FUN_107166150(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d4df0;
  _objc_opt_new(PTR_PTR_1126d4df0);
  func_0x00010c16b460();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107166204; end: 1071662b7; -[PreviewViewController _logCaptionTooltipCompleteWithOneAttempt] */

void FUN_107166204(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d4df8;
  _objc_opt_new(PTR_PTR_1126d4df8);
  func_0x00010c16b460();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071662b8; end: 107166517; -[PreviewViewController featureCreativeToolsDurationWillEnterDurationEditingMode:withTool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071662b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107166518;
  puStack_68 = &UNK_1109904a8;
  _objc_retain(param_4);
  uStack_60 = param_4;
  lStack_58 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + _DAT_1127644ac);
  func_0x00010bf30e80();
  if (lVar2 == 4) {
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,lVar5,*(undefined8 *)(param_1 + _DAT_112764580));
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
LAB_1071664b4:
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e8a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    if (lVar2 == 3) {
      lVar2 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2702c0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,lVar5,*(undefined8 *)(param_1 + _DAT_112764580));
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1071664b4;
    }
    if (lVar2 != 1) goto LAB_1071664e4;
    func_0x00010c111f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24eb00();
  }
  _objc_release(param_1);
LAB_1071664e4:
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(param_4);
  return;
}



/* Entry: 107166518; end: 10716665f;  */

void FUN_107166518(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010bf8b1a0();
  puVar2 = PTR_PTR_1126c4aa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240d40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c280560(*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_2;
  func_0x00010bfd6840();
  puVar3 = PTR_PTR_1126affe8;
  if ((int)uVar1 == 0) {
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c09e180();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2ab800(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  func_0x00010c280560(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0d1460(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107166660; end: 107166727; -[PreviewViewController featureCreativeToolsDurationDidEnterDurationEditingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107166660(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127644ac;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf30e80();
  if (lVar1 != 3) {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bf30e80();
    if (lVar1 != 4) goto LAB_107166714;
  }
  lVar1 = param_1;
  func_0x00010bec24c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab800(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar3 = lVar1;
  func_0x00010bf21f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
LAB_107166714:
                    /* WARNING: Could not recover jumptable at 0x00010c28d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateXButtonState_112680e80);
  return;
}



/* Entry: 107166728; end: 107166847; -[PreviewViewController featureCreativeToolsDurationDidExitDurationEditingMode:withTool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107166728(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  func_0x00010c28d160(param_1);
  lVar2 = *(long *)(param_1 + _DAT_1127644ac);
  func_0x00010bf30e80();
  if (lVar2 == 1) {
    lVar2 = param_1;
    func_0x00010c111f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fe80();
    _objc_release(lVar2);
  }
  uVar3 = param_4;
  func_0x00010c278b80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2552e0();
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107166848; end: 1071668bb; -[PreviewViewController canShowCreativeToolsMenu] */

uint FUN_107166848(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071280();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 1071668bc; end: 1071668eb; -[PreviewViewController ucoInMemoriesPreview:lensDidChangeState:] */

void FUN_1071668bc(undefined8 param_1)

{
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071668ec; end: 1071668ef; -[PreviewViewController pinningFeatureWillSkimThroughVideo] */

void FUN_1071668ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2381b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showLoadingOverlay_11266ba90);
  return;
}



/* Entry: 1071668f0; end: 107166a0b; -[PreviewViewController pinningFeatureFinishedPinningView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071668f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  func_0x00010c12cfe0(param_1);
  lVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bfafb40(*(undefined8 *)(param_1 + _DAT_112764538));
    func_0x00010bee24c0(param_1);
  }
  puVar3 = PTR_PTR_1126ba960;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2552e0();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107166a0c; end: 107166a2f; -[PreviewViewController featureVideoTracking:willTrackView:] */

void FUN_107166a0c(undefined8 param_1)

{
  func_0x00010c138c80();
                    /* WARNING: Could not recover jumptable at 0x00010be65830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__objectTrackingDidChange_112576fa8);
  return;
}



/* Entry: 107166a30; end: 107166a37; -[PreviewViewController featureVideoTracking:didTrackView:] */

void FUN_107166a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee24d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateToolContainersWithView__1125962d8,param_4);
  return;
}



/* Entry: 107166a38; end: 107166bcf; -[PreviewViewController featureVideoTracking:didDisableTrackingForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107166a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_8);
  func_0x00010bee24c0(param_5);
  lVar3 = param_5;
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279160();
  func_0x00010c219460(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010be65820(param_5);
  puVar2 = PTR_DAT_1126a51c0;
  _objc_retain(param_8);
  uVar6 = param_8;
  func_0x00010010fab4(param_8,puVar2);
  uVar1 = param_8;
  if ((int)uVar6 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_8);
  uVar7 = *(undefined8 *)(param_5 + _DAT_1127644f0);
  func_0x00010bf4b2a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar6 = param_1;
  uVar8 = param_2;
  uVar9 = param_3;
  uVar10 = param_4;
  func_0x00010bfbb9e0(param_5);
  func_0x00010c11cac0(param_5);
  func_0x00010c29caa0(param_1,param_2,param_3,param_4,uVar6,uVar8,uVar9,uVar10,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 107166bd0; end: 107166f37; -[PreviewViewController _updateToolContainersWithView:] */

void FUN_107166bd0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fac0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_3);
    func_0x00010bf7e500(uVar1);
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010befb9c0(uVar5);
    uVar2 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c2790a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c081160();
    if (((int)uVar2 == 0) || ((int)uVar6 == 0)) {
      func_0x00010c081660();
    }
    func_0x00010c160fc0(param_3);
    _objc_release(uVar5);
    _objc_release(param_3);
  }
  puVar4 = PTR_PTR_1126c4850;
  _objc_opt_class(PTR_PTR_1126c4850);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010bf30100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c081660();
    if ((int)uVar3 == 0) {
      func_0x00010bf736c0(uVar1);
      func_0x00010c160fc0(param_3);
    }
    else {
      func_0x00010bf73780(uVar1);
    }
    func_0x00010c2848e0(uVar5);
    uVar3 = uVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c278d20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c081160();
    if ((((int)uVar3 != 0) && ((uVar8 & 1) != 0)) ||
       (uVar3 = uVar2, func_0x00010c081660(), ((uint)uVar3 & (uint)uVar8) == 1)) {
      func_0x00010c160fc0(param_3);
    }
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  func_0x00010c242fa0(param_1);
  func_0x00010c28d160(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107166f38; end: 107166fb3; -[PreviewViewController isRemixingSpotlightVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107166f38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127644ac;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1297c0();
  if ((lVar2 - 10U < 5) && ((0x1bU >> (ulong)((uint)(lVar2 - 10U) & 0x1f) & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c07bf60(uVar3);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 107166fb4; end: 107166fb7; -[PreviewViewController previewViewQuickSend] */

void FUN_107166fb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_quickSend_112625428);
  return;
}



/* Entry: 107166fb8; end: 10716702f; -[PreviewViewController shouldEnableUserInteractionInPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107166fb8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127644f0);
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07cfa0();
  if ((int)uVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112764484);
    func_0x00010bf01640();
    if (iVar1 == 0) {
      bVar4 = 0;
      goto LAB_107167018;
    }
  }
  bVar4 = *(byte *)(param_1 + _DAT_11276456c) ^ 1;
LAB_107167018:
  _objc_release(uVar2);
  return bVar4 & 1;
}



/* Entry: 107167030; end: 107167033; -[PreviewViewController previewViewShowHintLabel] */

void FUN_107167030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c233990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldShowHintLabel_11266a888);
  return;
}



/* Entry: 107167034; end: 1071671ef; -[PreviewViewController previewViewSendToDTTRCTAEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107167034(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  uVar9 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c11e8a0();
  _objc_release(uVar9);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar9 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c07c560();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar9);
LAB_107167114:
    if ((*(long *)(param_1 + (long)_DAT_11276454c) == 0) &&
       (uVar9 = param_1, func_0x00010c233980(), (uVar9 & 1) == 0)) {
      lVar11 = (long)_DAT_1127644ac;
      uVar5 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c131bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x000108ee1048();
      if ((int)uVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010c11ea80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010bf2d240();
        if ((int)uVar6 == 0) {
LAB_1071671c0:
          uVar9 = uVar3;
          func_0x0001084236ec(uVar3);
          uVar10 = (uint)uVar9 ^ 1;
        }
        else {
          lVar8 = *(long *)(param_1 + lVar11);
          func_0x00010c243400();
          if (lVar8 == 0x15) goto LAB_1071671c0;
          uVar9 = *(ulong *)(param_1 + lVar11);
          func_0x00010c07e9a0();
          if ((uVar9 & 1) != 0) goto LAB_1071671c0;
          iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
          func_0x00010c07b9a0();
          if (iVar1 != 0) goto LAB_1071671c0;
          uVar10 = 0;
        }
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
      goto LAB_107167134;
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c081a80();
    _objc_release(uVar2);
    _objc_release(uVar9);
    if ((int)uVar4 != 0) goto LAB_107167114;
  }
  uVar10 = 0;
LAB_107167134:
  _objc_release(uVar3);
  return uVar10;
}



/* Entry: 1071671f0; end: 10716726b; -[PreviewViewController previewViewUserId] */

void FUN_1071671f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10716726c; end: 107167277; -[PreviewViewController getCroppingAspectRatio] */

undefined8 FUN_10716726c(void)

{
  return 0x7ff0000000000000;
}



/* Entry: 107167278; end: 10716727b; -[PreviewViewController previewViewDidSetupBottomButtons] */

void FUN_107167278(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupActionHandlerForBottomButt_112588320);
  return;
}



/* Entry: 10716727c; end: 107167293; -[PreviewViewController previewViewShowNGSBottomActionBar] */

uint FUN_10716727c(uint param_1)

{
  func_0x00010c1124a0();
  return param_1 ^ 1;
}



/* Entry: 107167294; end: 1071674af; -[PreviewViewController bitmojiSelfieFetchRequestForCurrentUser] */

void FUN_107167294(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5650();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5650();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126afd38;
    _objc_alloc_init(PTR_PTR_1126afd38);
    func_0x00010c2bc360();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8ea0(puVar7,param_2,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b8160(puVar7,param_2,lVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b78c0(puVar7,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1071674b0; end: 1071674f3; -[PreviewViewController previewViewCurrentSnapProProfileLogoURL] */

void FUN_1071674b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf7180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071674f4; end: 10716775b; -[PreviewViewController storiesTrayDefaultsToPublic] */

long FUN_1071674f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar7 = lVar3, func_0x00010c082880(), (int)lVar7 != 0)) {
    lVar7 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c242400();
    _objc_release(lVar7);
    if (lVar2 == 8) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x0001070c55e4();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010c1176a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010c0b7fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar2);
      _objc_release(lVar7);
      _objc_release(param_1);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
      lVar7 = 0;
      if (lVar2 != 0) {
        lVar7 = *plStack_120;
        do {
          lVar8 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(lVar4);
            }
            uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
            uVar5 = uVar6;
            func_0x00010c074e40();
            if ((int)uVar5 != 0) {
              func_0x00010c1164a0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar6;
              func_0x00010c070540();
              _objc_release(uVar6);
              if ((int)uVar5 == 0) {
                lVar7 = 1;
                goto LAB_10716774c;
              }
            }
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
          lVar2 = lVar4;
          func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
        } while (lVar2 != 0);
        lVar7 = 0;
      }
LAB_10716774c:
      _objc_release(lVar4);
      goto LAB_1071676fc;
    }
  }
  lVar7 = 0;
LAB_1071676fc:
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar7;
  }
  ___stack_chk_fail();
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x0001070c550c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return lVar7;
}



/* Entry: 10716775c; end: 1071677bf; -[PreviewViewController previewViewOnDemandResourceDownloader] */

void FUN_10716775c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c550c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


