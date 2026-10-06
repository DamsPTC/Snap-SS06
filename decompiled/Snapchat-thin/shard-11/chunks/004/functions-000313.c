/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085fc47c; end: 1085fc607; -[SCTAudioState _mostRecentlyAvailableRoute] */

/* WARNING: Possible PIC construction at 0x0001085fca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001085fcb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085fca9c) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaa0) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaac) */
/* WARNING: Removing unreachable block (ram,0x0001085fcab8) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb30) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb34) */
/* WARNING: Removing unreachable block (ram,0x0001085fca80) */

void FUN_1085fc47c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar1 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  if (lVar9 == 0) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    lVar15 = *plStack_130;
    do {
      lVar16 = 0;
      uVar4 = uVar12;
      do {
        dVar18 = dVar17;
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(lVar10);
          dVar18 = dVar17;
        }
        uVar14 = *(ulong *)(lStack_138 + lVar16 * 8);
        dVar17 = dVar18;
        if (uVar4 == 0) {
LAB_1085fc54c:
          uVar12 = uVar14;
          func_0x00010bf12ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_retain(uVar14);
          _objc_release(uVar11);
          uVar11 = uVar14;
        }
        else {
          uVar12 = uVar14;
          func_0x00010bf12ac0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380();
          dVar17 = dVar18;
          _objc_release(uVar12);
          uVar12 = uVar4;
          if (0.0 < dVar18) goto LAB_1085fc54c;
        }
        lVar16 = lVar16 + 1;
        uVar4 = uVar12;
      } while (lVar9 != lVar16);
      lVar9 = lVar10;
      puVar1 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar1;
    func_0x00010c0ef240();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar1 = puVar2;
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined8 **)PTR__AVAudioSessionPortHeadphones_11034cee8;
      puVar3 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)puVar3 == 0) {
        puVar1 = puVar2;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInReceiver_11034ced0;
        puVar3 = puVar1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)puVar3 == 0) {
          puVar1 = puVar2;
          func_0x00010c104100();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInSpeaker_11034ced8;
          puVar3 = puVar1;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)puVar3 == 0) {
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            lStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            plStack_260 = (long *)0x0;
            lVar10 = *(long *)(uVar12 + 0x18);
            _objc_retain(lVar10);
            puVar8 = &uStack_270;
            lVar9 = lVar10;
            func_0x00010bf52a60();
            if (lVar9 != 0) {
              lVar15 = *plStack_260;
              do {
                lVar16 = 0;
                do {
                  if (*plStack_260 != lVar15) {
                    _objc_enumerationMutation(lVar10);
                  }
                  uVar11 = *(ulong *)(lStack_268 + lVar16 * 8);
                  uVar12 = uVar11;
                  func_0x00010c065dc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (uVar12 != 0) {
                    uVar12 = uVar11;
                    func_0x00010c065dc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar4 = uVar12;
                    func_0x00010c104100();
                    _objc_retainAutoreleasedReturnValue();
                    uVar14 = uVar4;
                    func_0x00010c0720c0();
                    if ((int)uVar14 == 0) {
                      uVar14 = uVar11;
                      func_0x00010c065dc0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar5 = uVar14;
                      func_0x00010c104100();
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar5;
                      func_0x00010c0720c0();
                      _objc_release(uVar5);
                      _objc_release(uVar14);
                      _objc_release(uVar4);
                      _objc_release(uVar12);
                      if ((uVar6 & 1) == 0) {
                        uVar12 = uVar11;
                        func_0x00010c065dc0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar4 = uVar12;
                        func_0x00010bdc2a80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar1 = puVar2;
                        func_0x00010bdc2a80();
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = uVar4;
                        puVar8 = puVar1;
                        func_0x00010c0720c0();
                        _objc_release(puVar1);
                        _objc_release(uVar4);
                        _objc_release(uVar12);
                        if ((uVar14 & 1) != 0) {
                          _objc_retain(uVar11);
                          _objc_release(lVar10);
                          goto LAB_1085fc74c;
                        }
                      }
                    }
                    else {
                      _objc_release(uVar4);
                      _objc_release(uVar12);
                    }
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar9 != lVar16);
                puVar8 = &uStack_270;
                lVar9 = lVar10;
                func_0x00010bf52a60();
              } while (lVar9 != 0);
            }
            _objc_release(lVar10);
            uVar11 = 0;
          }
          else {
            func_0x00010bebe880();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar12;
          }
        }
        else {
          func_0x00010be06de0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar12;
        }
      }
      else {
        func_0x00010beeb540();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
      }
    }
LAB_1085fc74c:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar8);
      puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      uVar13 = puVar2[3];
      _objc_retain(puVar8);
      func_0x00010c1063a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfae5e0(uVar13);
      _objc_release(puVar7);
      _objc_retain(puVar8);
      puVar1 = puVar8;
      func_0x00010bf52a60();
      if (puVar1 == (undefined8 *)0x0) {
        _objc_release(puVar8);
        puVar7 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
        func_0x00010c07cd00();
        if ((int)puVar7 != 0) {
          uVar13 = puVar2[3];
          puVar1 = puVar2;
          func_0x00010be06de0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(uVar13);
          _objc_release(puVar1);
        }
        lVar10 = puVar2[7];
        if (lVar10 == 0) {
          _objc_release(puVar8);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
            return;
          }
          ___stack_chk_fail();
          uVar13 = puVar8[4];
          lVar10 = param_2;
        }
        else {
          uVar13 = puVar2[3];
        }
      }
      else {
        uVar13 = puVar2[3];
        lVar10 = lRam0000000000000000;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar13,PTR_s_containsObject__1125b07e8,lVar10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 1085fc608; end: 1085fc97f; -[SCTAudioState _scAudioRouteForSystemRoute:] */

/* WARNING: Possible PIC construction at 0x0001085fca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001085fcb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085fca9c) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaa0) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaac) */
/* WARNING: Removing unreachable block (ram,0x0001085fcab8) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb30) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb34) */
/* WARNING: Removing unreachable block (ram,0x0001085fca80) */

void FUN_1085fc608(ulong param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
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
  puVar10 = param_3;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    param_1 = 0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c104100();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined8 **)PTR__AVAudioSessionPortHeadphones_11034cee8;
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) {
      puVar2 = puVar1;
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInReceiver_11034ced0;
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 == 0) {
        puVar2 = puVar1;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInSpeaker_11034ced8;
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)puVar3 == 0) {
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          lStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          lVar11 = *(long *)(param_1 + 0x18);
          _objc_retain(lVar11);
          puVar10 = &uStack_130;
          lVar12 = lVar11;
          func_0x00010bf52a60();
          if (lVar12 != 0) {
            lVar13 = *plStack_120;
            do {
              lVar14 = 0;
              do {
                if (*plStack_120 != lVar13) {
                  _objc_enumerationMutation(lVar11);
                }
                param_1 = *(ulong *)(lStack_128 + lVar14 * 8);
                uVar4 = param_1;
                func_0x00010c065dc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (uVar4 != 0) {
                  uVar4 = param_1;
                  func_0x00010c065dc0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010c104100();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar5;
                  func_0x00010c0720c0();
                  if ((int)uVar6 == 0) {
                    uVar6 = param_1;
                    func_0x00010c065dc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = uVar6;
                    func_0x00010c104100();
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uVar7;
                    func_0x00010c0720c0();
                    _objc_release(uVar7);
                    _objc_release(uVar6);
                    _objc_release(uVar5);
                    _objc_release(uVar4);
                    if ((uVar8 & 1) == 0) {
                      uVar4 = param_1;
                      func_0x00010c065dc0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar5 = uVar4;
                      func_0x00010bdc2a80();
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = puVar1;
                      func_0x00010bdc2a80();
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar5;
                      puVar10 = puVar2;
                      func_0x00010c0720c0();
                      _objc_release(puVar2);
                      _objc_release(uVar5);
                      _objc_release(uVar4);
                      if ((uVar6 & 1) != 0) {
                        _objc_retain(param_1);
                        _objc_release(lVar11);
                        goto LAB_1085fc74c;
                      }
                    }
                  }
                  else {
                    _objc_release(uVar5);
                    _objc_release(uVar4);
                  }
                }
                lVar14 = lVar14 + 1;
              } while (lVar12 != lVar14);
              puVar10 = &uStack_130;
              lVar12 = lVar11;
              func_0x00010bf52a60();
            } while (lVar12 != 0);
          }
          _objc_release(lVar11);
          param_1 = 0;
        }
        else {
          func_0x00010bebe880();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010be06de0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010beeb540();
      _objc_retainAutoreleasedReturnValue();
    }
  }
LAB_1085fc74c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uVar15 = puVar1[3];
  _objc_retain(puVar10);
  func_0x00010c1063a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae5e0(uVar15);
  _objc_release(puVar9);
  _objc_retain(puVar10);
  puVar2 = puVar10;
  func_0x00010bf52a60();
  if (puVar2 == (undefined8 *)0x0) {
    _objc_release(puVar10);
    puVar9 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
    func_0x00010c07cd00();
    if ((int)puVar9 != 0) {
      uVar15 = puVar1[3];
      puVar2 = puVar1;
      func_0x00010be06de0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar15);
      _objc_release(puVar2);
    }
    lVar11 = puVar1[7];
    if (lVar11 == 0) {
      _objc_release(puVar10);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return;
      }
      ___stack_chk_fail();
      uVar15 = puVar10[4];
      lVar11 = param_2;
    }
    else {
      uVar15 = puVar1[3];
    }
  }
  else {
    uVar15 = puVar1[3];
    lVar11 = lRam0000000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar15,PTR_s_containsObject__1125b07e8,lVar11);
  return;
}



/* Entry: 1085fc980; end: 1085fcb87; -[SCTAudioState _updateAvailableRoutes:] */

/* WARNING: Possible PIC construction at 0x0001085fca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001085fcb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085fca9c) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaa0) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaac) */
/* WARNING: Removing unreachable block (ram,0x0001085fcab8) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb30) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb34) */
/* WARNING: Removing unreachable block (ram,0x0001085fca80) */

void FUN_1085fc980(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae5e0(uVar4);
  _objc_release(puVar1);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    _objc_release(param_3);
    puVar1 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
    func_0x00010c07cd00();
    if ((int)puVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      lVar2 = param_1;
      func_0x00010be06de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar4);
      _objc_release(lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 == 0) {
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
        return;
      }
      ___stack_chk_fail();
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      lVar2 = param_2;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = lRam0000000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_containsObject__1125b07e8,lVar2);
  return;
}



/* Entry: 1085fcb88; end: 1085fcb93;  */

void FUN_1085fcb88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 1085fcb94; end: 1085fcc03; -[SCTAudioState _updateActualRouteAccordingToSystemRoute:] */

void FUN_1085fcb94(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010be9a660();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bef1a60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    if ((uVar3 & 1) == 0) {
      func_0x00010c162f40(param_1,param_2,uVar1);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085fcc04; end: 1085fcc0f; -[SCTAudioState actualRoute] */

void FUN_1085fcc04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1085fcc10; end: 1085fcc17; -[SCTAudioState setActualRoute:] */

void FUN_1085fcc10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1085fcc18; end: 1085fcc23; -[SCTAudioState availableRoutes] */

void FUN_1085fcc18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1085fcc24; end: 1085fcc2f; -[SCTAudioState expectedRoute] */

void FUN_1085fcc24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 1085fcc30; end: 1085fcc37; -[SCTAudioState setExpectedRoute:] */

void FUN_1085fcc30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1085fcc38; end: 1085fcc43; -[SCTAudioState didAnswerFromUnlockedScreen] */

byte FUN_1085fcc38(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 1085fcc44; end: 1085fcc4f; -[SCTAudioState didForegroundInCall] */

byte FUN_1085fcc44(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 1085fcc50; end: 1085fcc5b; -[SCTAudioState didForegroundWithVideo] */

byte FUN_1085fcc50(long param_1)

{
  return *(byte *)(param_1 + 10) & 1;
}



/* Entry: 1085fcc5c; end: 1085fcc67; -[SCTAudioState didReceiveFromCallKit] */

byte FUN_1085fcc5c(long param_1)

{
  return *(byte *)(param_1 + 0xb) & 1;
}



/* Entry: 1085fcc68; end: 1085fcc73; -[SCTAudioState localUserMedia] */

void FUN_1085fcc68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1085fcc74; end: 1085fcc7b; -[SCTAudioState callStartMedia] */

undefined8 FUN_1085fcc74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1085fcc7c; end: 1085fcc83; -[SCTAudioState setCallStartMedia:] */

void FUN_1085fcc7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1085fcc84; end: 1085fcc8f; -[SCTAudioState userSelectedRoute] */

void FUN_1085fcc84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 1085fcc90; end: 1085fcc9b; -[SCTAudioState userSelectionTimestamp] */

void FUN_1085fcc90(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 1085fcc9c; end: 1085fccfb; -[SCTAudioState .cxx_destruct] */

void FUN_1085fcc9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1085fccfc; end: 1085fcd47; +[SCTCPlatformEvent uiStateChangeEvent:] */

void FUN_1085fccfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21b300();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fcd48; end: 1085fcdb3; +[SCTCPlatformEvent updateMediaEvent:] */

void FUN_1085fcd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da780;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21c640();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126da608;
  _objc_alloc_init(PTR_PTR_1126da608);
  func_0x00010c1bf060();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085fcdb4; end: 1085fce23; +[SCTCPlatformEvent dismissCallEvent] */

void FUN_1085fcdb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da780;
  _objc_alloc_init(PTR_PTR_1126da780);
  puVar2 = PTR_PTR_1126da788;
  _objc_alloc_init(PTR_PTR_1126da788);
  func_0x00010c18f4c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126da608;
  _objc_alloc_init(PTR_PTR_1126da608);
  func_0x00010c1bf060();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085fce24; end: 1085fce6f; +[SCTCPlatformEvent audioSuppressionEvent:] */

void FUN_1085fce24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c16c480();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fce70; end: 1085fcebb; +[SCTCPlatformEvent localVideoSuppressionEvent:] */

void FUN_1085fce70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1bf3c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fcebc; end: 1085fcf07; +[SCTCPlatformEvent updateParticipantsEvent:] */

void FUN_1085fcebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21c6a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fcf08; end: 1085fcf53; +[SCTCPlatformEvent participantsAddedEvent:] */

void FUN_1085fcf08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d9380();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fcf54; end: 1085fcf9f; +[SCTCPlatformEvent lensSelectionEvent:] */

void FUN_1085fcf54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1bcac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fcfa0; end: 1085fcfeb; +[SCTCPlatformEvent notificationDisplayEvent:] */

void FUN_1085fcfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1cdfa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fcfec; end: 1085fd037; +[SCTCPlatformEvent notificationDisplayFailedEvent:] */

void FUN_1085fcfec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1cdfc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fd038; end: 1085fd083; +[SCTCPlatformEvent userVideoStreamVisibilityEvent:] */

void FUN_1085fd038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da608;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21f6a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fd084; end: 1085fd0ef; -[SCTCallStartMediaLedger recordCallStartMedia:forContextId:] */

void FUN_1085fd084(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x28) = param_3;
  *(bool *)(param_1 + 0x20) = param_3 != 0;
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    lVar1 = 0;
  }
  else {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 8) + 1;
    *(long *)(param_1 + 8) = lVar1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1085fd0f0; end: 1085fd147; -[SCTCallStartMediaLedger withdrawWithToken:] */

bool FUN_1085fd0f0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return false;
  }
  bVar1 = param_3 == *(long *)(param_1 + 0x10);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return bVar1;
}



/* Entry: 1085fd148; end: 1085fd18f; -[SCTCallStartMediaLedger completeHandoverForContextId:] */

void FUN_1085fd148(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((param_3 != 0) && (lVar1 = *(long *)(param_1 + 0x18), lVar1 != 0)) &&
     (func_0x00010c0720c0(lVar1,param_2,param_3), (int)lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085fd190; end: 1085fd1ab; -[SCTCallStartMediaLedger mediaToPreserveAcrossReset] */

undefined8 FUN_1085fd190(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



/* Entry: 1085fd1ac; end: 1085fd1e3; -[SCTCallStartMediaLedger noteReset] */

void FUN_1085fd1ac(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1085fd1e4; end: 1085fd1eb; -[SCTCallStartMediaLedger recordedMedia] */

undefined8 FUN_1085fd1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085fd1ec; end: 1085fd1f3; -[SCTCallStartMediaLedger awaitingSessionWrapper] */

undefined1 FUN_1085fd1ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1085fd1f4; end: 1085fd1ff; -[SCTCallStartMediaLedger .cxx_destruct] */

void FUN_1085fd1f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1085fd200; end: 1085fd5e3;  */

void FUN_1085fd200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126da790;
  func_0x00010c2689e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bc360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2b5bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar12 = param_4;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1085fd6a4;
  uStack_88 = 0x1085fd6b4;
  uVar12 = uVar5;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c28d760(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  uVar8 = uVar12;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_6;
  func_0x00010c28d760(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar11;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_retain(param_7);
  _objc_retain(param_2);
  _objc_retain(param_8);
  _objc_retain(param_1);
  func_0x00010c0be200(param_3);
  uVar12 = puStack_a0[5];
  func_0x00010c0b8600(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_8);
  _objc_release(param_2);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar4);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 1085fd5e4; end: 1085fd6a3;  */

void FUN_1085fd5e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  puVar4 = PTR_PTR_1126ae6b8;
  if ((int)puVar2 == 0) {
    uVar3 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085fd6a4; end: 1085fd6bb;  */

void FUN_1085fd6a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1085fd6bc; end: 1085fd7a7;  */

void FUN_1085fd6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if ((int)puVar2 == 0) {
    uVar3 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    uVar3 = param_2;
  }
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bc440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c2ac7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085fd7a8; end: 1085fd817;  */

void FUN_1085fd7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2a9360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085fd818; end: 1085fd90b;  */

void FUN_1085fd818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcefc0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1085fd90c;
  puStack_50 = &UNK_110a5b130;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uStack_48 = uVar5;
  func_0x00010bf41860(uVar4,param_2,uVar2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1085fd90c; end: 1085fdaa3;  */

void FUN_1085fd90c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    uVar5 = param_2;
    if (lVar2 == 0) {
      _objc_release(param_3);
      _objc_retain(param_2);
LAB_1085fda5c:
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar3 = uVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf40c40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b5bc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(param_3);
        goto LAB_1085fda5c;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1085fdaa4; end: 1085fdaaf;  */

void FUN_1085fdaa4(void)

{
  return;
}



/* Entry: 1085fdab0; end: 1085fdbdf; -[SCTConversationParticipantsSubject initWithUserId:convoId:metadata:identityServices:snapchattersDataTracker:groupsDataFetcher:groupsDataTracker:] */

undefined8
FUN_1085fdab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c021520();
  func_0x00010c05af20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar1
                     );
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1085fdbe0; end: 1085fde07; -[SCTConversationParticipantsSubject initWithUserId:convoId:metadata:identityServices:snapchattersDataTracker:groupsDataFetcher:groupsDataTracker:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085fdbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
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
  puStack_68 = PTR_PTR_1126fd0d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277756c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277756c) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777570);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112777570) = uVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112777574;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112777578,param_6);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11277757c,param_7);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112777580,param_8);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112777584,param_9);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777588);
    *(undefined **)((long)puVar1 + (long)_DAT_112777588) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11277758c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777590);
    *(undefined **)((long)puVar1 + (long)_DAT_112777590) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777594);
    *(undefined **)((long)puVar1 + (long)_DAT_112777594) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec0980(puVar1);
  }
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



/* Entry: 1085fde08; end: 1085fde9b; -[SCTConversationParticipantsSubject dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fde08(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11277757c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112777590));
  puStack_38 = PTR_PTR_1126fd0d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085fde9c; end: 1085fdf77; -[SCTConversationParticipantsSubject observableWithInjectBots:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fde9c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 == 0) {
    _objc_retain(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf41860(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085fdf78; end: 1085fdff3;  */

void FUN_1085fdf78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde20c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085fdff4; end: 1085fe1bb; -[SCTConversationParticipantsSubject _combineParticipants:withInjectedBot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fdff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085fe1bc;
  puStack_70 = &UNK_110a5b1f0;
  _objc_retain(param_4);
  uVar2 = param_3;
  uStack_68 = param_4;
  func_0x00010bf04920();
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_1085fe22c;
    uStack_98 = 0x1085fe23c;
    uStack_90 = 0;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112777574);
    _objc_retain(param_4);
    _objc_retain(param_4);
    func_0x00010c0be200(uVar2);
    func_0x00010bf09f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085fe1bc; end: 1085fe22b;  */

undefined8 FUN_1085fe1bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1085fe22c; end: 1085fe243;  */

void FUN_1085fe22c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1085fe244; end: 1085fe2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fe244(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108600738(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112777598),1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085fe2f0; end: 1085fe2f3; -[SCTConversationParticipantsSubject didStartSnapchattersUpdateDataRequest:] */

void FUN_1085fe2f0(void)

{
  return;
}



/* Entry: 1085fe2f4; end: 1085fe437; -[SCTConversationParticipantsSubject didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1085fe2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085fe438;
  puStack_70 = &UNK_110855370;
  uStack_68 = param_1;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0bc6c0(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1085fe438; end: 1085fe4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fe438(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277758c);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1085fe500; end: 1085fe533;  */

void FUN_1085fe500(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085fe534; end: 1085fe903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fe534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar19 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0();
  uVar3 = param_2;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf8e9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d560();
  uVar6 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  func_0x00010c08f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102000();
  uVar13 = param_2;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_2;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_2;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_2;
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0();
  _objc_release(param_3);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
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
  _objc_release(uVar19);
  _objc_release(param_2);
  uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277758c);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar19);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1085fe904; end: 1085fe937;  */

void FUN_1085fe904(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085fe938; end: 1085fed4f; -[SCTConversationParticipantsSubject _startObserving] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fe938(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_90,param_1);
  lVar9 = param_1 + _DAT_11277757c;
  _objc_loadWeakRetained(lVar9);
  lVar2 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar2);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_112777574;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c074920();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar1 == 0) {
    lVar10 = (long)_DAT_112777578;
    lVar2 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c12a5a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar6;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1085fee50;
    puStack_f0 = &UNK_1108553a0;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bfaa420(lVar2);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_e8);
  }
  else {
    lVar9 = param_1 + _DAT_112777584;
    _objc_loadWeakRetained(lVar9);
    lVar2 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bfcefc0();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = _DAT_11277758c;
    lVar3 = lVar10;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar6;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1085fed50;
    puStack_a0 = &UNK_11085a5a8;
    _objc_copyWeak(auStack_98,auStack_90);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(lVar9);
    lVar9 = param_1 + _DAT_112777580;
    _objc_loadWeakRetained(lVar9);
    lVar2 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar6;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1085fed98;
    puStack_c8 = &UNK_11085a5a8;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = *(undefined8 *)(param_1 + iVar1);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6120(lVar2);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar9);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    lVar10 = (long)_DAT_112777578;
  }
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e12b58;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_90;
  _objc_copyWeak(auStack_110,puVar8);
  func_0x00010bfaa480(param_1);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_110);
  puVar7 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar7);
  _objc_retain(puVar8);
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained(puVar7);
  func_0x00010be64540();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1085fed50; end: 1085fed97;  */

void FUN_1085fed50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085fed98; end: 1085fee4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fed98(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != (undefined *)0x0) && (param_1 != 0)) {
    puVar2 = param_2;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51e00();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    lVar5 = (long)_DAT_112777598;
    _objc_retain(puVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010be64520(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085fee50; end: 1085fee9f;  */

void FUN_1085fee50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be64560(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085feea0; end: 1085fef1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085feea0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112777594));
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085fef20; end: 1085fef87; -[SCTConversationParticipantsSubject _updateTrackedSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fef20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777588);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085fef88; end: 1085ff0cb; -[SCTConversationParticipantsSubject _notifyAboutUpdatedSnapchatterIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085fef88(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112777574;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c074920();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c12a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) goto LAB_1085ff01c;
  }
  else {
    lVar5 = *(long *)(param_1 + _DAT_112777598);
    uVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ef3c74(lVar5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar5 == 0) goto LAB_1085ff01c;
  }
  func_0x00010bee2820(param_1);
  func_0x00010be64520(param_1);
LAB_1085ff01c:
  uVar3 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112777594));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085ff0cc; end: 1085ff20b; -[SCTConversationParticipantsSubject _notifyAboutUpdatedGroupIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ff0cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112777570);
  uVar1 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    lVar5 = (long)_DAT_112777598;
    uVar4 = *(ulong *)(param_1 + lVar5);
    uVar1 = param_3;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    _objc_retain(uVar1);
    if (uVar4 == uVar1) {
      _objc_release(uVar1);
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    else {
      if (uVar1 == 0) {
        _objc_release(uVar4);
      }
      else {
        uVar2 = uVar4;
        func_0x00010c071ae0(uVar4,param_2,uVar1);
        _objc_release(uVar1);
        _objc_release(uVar4);
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) goto LAB_1085ff1f4;
      }
      uVar1 = param_3;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = uVar4;
      _objc_release(uVar3);
      _objc_release(uVar1);
      func_0x00010be64520(param_1);
    }
  }
LAB_1085ff1f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085ff20c; end: 1085ff3b7; -[SCTConversationParticipantsSubject _notify] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ff20c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112777574;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c074920();
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + _DAT_112777588);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c12a5a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11277756c);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c12a5a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    FUN_108600578(lVar5,uVar6,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    _objc_release(puVar3);
    _objc_release(lVar7);
    _objc_release(uVar2);
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277756c);
    FUN_1086008e0(uVar2,*(undefined8 *)(param_1 + _DAT_112777598));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    lVar5 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar5 + _DAT_112777590,0);
  _objc_storeStrong(lVar5 + _DAT_11277758c,0);
  _objc_storeStrong(lVar5 + _DAT_112777594,0);
  _objc_storeStrong(lVar5 + _DAT_112777588,0);
  _objc_storeStrong(lVar5 + _DAT_112777598,0);
  _objc_destroyWeak(lVar5 + _DAT_112777584);
  _objc_destroyWeak(lVar5 + _DAT_112777580);
  _objc_destroyWeak(lVar5 + _DAT_11277757c);
  _objc_destroyWeak(lVar5 + _DAT_112777578);
  _objc_storeStrong(lVar5 + _DAT_112777574,0);
  _objc_storeStrong(lVar5 + _DAT_112777570,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar5 + _DAT_11277756c,0);
  return;
}



/* Entry: 1085ff3b8; end: 1085ff487; -[SCTConversationParticipantsSubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ff3b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777590,0);
  _objc_storeStrong(param_1 + _DAT_11277758c,0);
  _objc_storeStrong(param_1 + _DAT_112777594,0);
  _objc_storeStrong(param_1 + _DAT_112777588,0);
  _objc_storeStrong(param_1 + _DAT_112777598,0);
  _objc_destroyWeak(param_1 + _DAT_112777584);
  _objc_destroyWeak(param_1 + _DAT_112777580);
  _objc_destroyWeak(param_1 + _DAT_11277757c);
  _objc_destroyWeak(param_1 + _DAT_112777578);
  _objc_storeStrong(param_1 + _DAT_112777574,0);
  _objc_storeStrong(param_1 + _DAT_112777570,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277756c,0);
  return;
}



/* Entry: 1085ff488; end: 1085ff543; +[SCTOptionalEnum SCTCCallEndReasonFromNSNumber:nilValue:someValue:] */

void FUN_1085ff488(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  if (param_3 != 0) {
    func_0x00010b089bf8();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4b900();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      if (param_5 != 0) {
        lVar1 = param_3;
        func_0x00010c067ec0(param_3);
        (**(code **)(param_5 + 0x10))(param_5,lVar1);
      }
      goto LAB_1085ff51c;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
LAB_1085ff51c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085ff544; end: 1085ff5a3; -[SCTV3NetworkInfo initWitNetworkConnectivityMonitorServices:] */

undefined1 * FUN_1085ff544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd0e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  uVar2 = *(undefined8 *)((long)puVar1 + 8);
  *(undefined8 *)((long)puVar1 + 8) = param_3;
  _objc_release(uVar2);
  return (undefined1 *)puVar1;
}



/* Entry: 1085ff5a4; end: 1085ff623; -[SCTV3NetworkInfo carrierName] */

void FUN_1085ff5a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf32dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5e340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf32da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085ff624; end: 1085ff727; -[SCTV3NetworkInfo talkCoreConnectivityType:] */

undefined1  [16] FUN_1085ff624(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_3 == 0) {
    auVar8._8_8_ = 6;
    auVar8._0_8_ = 6;
    return auVar8;
  }
  if (param_3 != 1) {
    uVar5 = 7;
    if (param_3 == 2) {
      uVar5 = 5;
    }
    uVar6 = 7;
    if (param_3 == 2) {
      uVar6 = 5;
    }
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = uVar5;
    return auVar7;
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5e340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c121ba0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 < 4) {
    if (lVar4 == 2) {
      uVar5 = 3;
      uVar6 = 3;
      goto LAB_1085ff718;
    }
    if (lVar4 == 3) {
      uVar5 = 2;
      uVar6 = 2;
      goto LAB_1085ff718;
    }
  }
  else {
    if (lVar4 == 4) {
      uVar5 = 1;
      uVar6 = 1;
      goto LAB_1085ff718;
    }
    if (lVar4 == 5) {
      uVar5 = 0;
      uVar6 = 0;
      goto LAB_1085ff718;
    }
  }
  uVar5 = 4;
  uVar6 = 4;
LAB_1085ff718:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



/* Entry: 1085ff728; end: 1085ff733; -[SCTV3NetworkInfo .cxx_destruct] */

void FUN_1085ff728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ff734; end: 1085ff7a7; -[SCTV3NetworkStatusLogger initWithNetworkServices:] */

undefined1 * FUN_1085ff734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd0e8;
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



/* Entry: 1085ff7a8; end: 1085ff897; -[SCTV3NetworkStatusLogger sessionWrapper:updatedState:] */

void FUN_1085ff7a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf282e0();
  _objc_release(uVar2);
  _objc_release(param_4);
  if ((lVar4 == 0) != ((int)uVar3 != 0)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((int)uVar3 == 0) {
    func_0x00010c0aad40(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x10));
    uVar2 = 0;
  }
  else {
    func_0x00010c0aad60(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ff898; end: 1085ff8c7; -[SCTV3NetworkStatusLogger .cxx_destruct] */

void FUN_1085ff898(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ff8c8; end: 1085ff937; -[SCTVideoPrivacyNotificationPresenter initWithNotificationPool:] */

undefined1 * FUN_1085ff8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd0f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((long)puVar1 + 0x10) = 0;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085ff938; end: 1085ff99b; -[SCTVideoPrivacyNotificationPresenter enqueueNotification] */

void FUN_1085ff938(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c25f340(lVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085ff99c; end: 1085ff9a7; -[SCTVideoPrivacyNotificationPresenter dispose] */

void FUN_1085ff99c(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}



/* Entry: 1085ff9a8; end: 1085ffdc7; -[SCTVideoPrivacyNotificationPresenter containerView] */

void FUN_1085ff9a8(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x19;
  long lVar16;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined **ppuStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0x18);
  if (lVar16 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    unaff_d8 = *(undefined8 *)PTR__CGRectZero_110347608;
    unaff_d9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(unaff_d8,unaff_d9,uVar17,uVar18);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(unaff_d8,unaff_d9,uVar17,uVar18);
    func_0x00010c21ad00();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar3);
    func_0x00010860166c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(puVar3);
    func_0x00010c213040(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x18));
    puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    puStack_b0 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar15;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = puVar2;
    puStack_c0 = puVar3;
    puStack_a8 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    puStack_c8 = unaff_x27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar15;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = puVar2;
    puStack_a0 = unaff_x27;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x28;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar2;
    puStack_98 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x22;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined **)0x4;
    unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = unaff_x24;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d0);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar3);
    _objc_release(unaff_x26);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(uStack_d8);
    _objc_release(puStack_c8);
    _objc_release(puStack_c0);
    _objc_release(uStack_b8);
    _objc_release(puStack_b0);
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar3;
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar3);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e4ccccd);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar15);
    unaff_x21 = *(undefined ***)(param_1 + 0x18);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x3ff0000000000000);
    _objc_release(unaff_x21);
    _objc_release(puVar2);
    lVar16 = *(long *)(param_1 + 0x18);
    unaff_x19 = param_1;
  }
  lVar4 = lVar16;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1085ffdc8;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = unaff_d9;
  uStack_148 = unaff_d8;
  puStack_140 = unaff_x28;
  puStack_138 = unaff_x27;
  uStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_120 = unaff_x24;
  uStack_118 = unaff_x23;
  puStack_110 = unaff_x22;
  ppuStack_108 = unaff_x21;
  lStack_100 = lVar16;
  lStack_f8 = unaff_x19;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_110a5b220;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  if ((param_3 == (undefined *)0x0) || (*(char *)(lVar4 + 0x11) == '\x01')) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    lVar16 = lVar4;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_3);
    lVar5 = lVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c149040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar5);
    lVar5 = lVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar5);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar5 = lVar16;
    lStack_180 = lVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar16;
    lStack_178 = lVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar16;
    lStack_170 = lVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf494e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_168 = lVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar3);
    _objc_release(lVar5);
    func_0x00010c08cdc0(param_3);
    *(undefined1 *)(lVar4 + 0x10) = 1;
    func_0x00010c162480(lVar6);
    func_0x00010c162480(lVar7);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x108600248;
    puStack_190 = &UNK_110842e18;
    _objc_retain(param_3);
    puStack_188 = param_3;
    func_0x00010bf03440(0x3fd3333333333333,0,puVar3);
    _objc_initWeak(auStack_1b0,lVar4);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_1e8 = puVar2;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_108600250;
    puStack_1d0 = &UNK_110848ba8;
    lStack_1c8 = lVar6;
    lStack_1c0 = lVar7;
    _objc_retain(param_3);
    puStack_220 = puVar2;
    uStack_218 = 0xc2000000;
    uStack_210 = 0x108600288;
    puStack_208 = &UNK_11084f3a0;
    unaff_x21 = &puStack_220;
    puStack_1b8 = param_3;
    _objc_copyWeak(auStack_1f0,auStack_1b0);
    lStack_200 = lVar16;
    _objc_retain(ppuVar1);
    ppuStack_1f8 = ppuVar1;
    func_0x00010bf03440(0x3fd3333333333333,0x4008000000000000,puVar3);
    _objc_release(ppuStack_1f8);
    _objc_destroyWeak(auStack_1f0);
    _objc_release(puStack_1b8);
    _objc_destroyWeak(auStack_1b0);
    _objc_release(puStack_188);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar16);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x21 + 6);
  _objc_destroyWeak(auStack_1b0);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 1085ffdc8; end: 108600243; -[SCTVideoPrivacyNotificationPresenter presentNotificationOverView:completion:] */

void FUN_1085ffdc8(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined **unaff_x21;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_110a5b220;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  if ((param_3 == 0) || (*(char *)(param_1 + 0x11) == '\x01')) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    lVar3 = param_1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_3);
    lVar4 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c149040(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar4 = lVar3;
    lStack_a0 = lVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    lStack_98 = lVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3;
    lStack_90 = lVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf494e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c08cdc0(param_3);
    *(undefined1 *)(param_1 + 0x10) = 1;
    func_0x00010c162480(lVar7);
    func_0x00010c162480(lVar6);
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x108600248;
    puStack_b0 = &UNK_110842e18;
    _objc_retain(param_3);
    lStack_a8 = param_3;
    func_0x00010bf03440(0x3fd3333333333333,0,puVar14);
    _objc_initWeak(auStack_d0,param_1);
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_108 = puVar2;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_108600250;
    puStack_f0 = &UNK_110848ba8;
    lStack_e8 = lVar7;
    lStack_e0 = lVar6;
    _objc_retain(param_3);
    puStack_140 = puVar2;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x108600288;
    puStack_128 = &UNK_11084f3a0;
    unaff_x21 = &puStack_140;
    lStack_d8 = param_3;
    _objc_copyWeak(auStack_110,auStack_d0);
    lStack_120 = lVar3;
    _objc_retain(ppuVar1);
    ppuStack_118 = ppuVar1;
    func_0x00010bf03440(0x3fd3333333333333,0x4008000000000000,puVar14);
    _objc_release(ppuStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_release(lStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(lStack_a8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x21 + 6);
  _objc_destroyWeak(auStack_d0);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 108600244; end: 10860024f;  */

void FUN_108600244(void)

{
  return;
}



/* Entry: 108600250; end: 1086002cf;  */

void FUN_108600250(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1086002d0; end: 1086002db; -[SCTVideoPrivacyNotificationPresenter debugInfo] */

undefined ** FUN_1086002d0(void)

{
  return &PTR____CFConstantStringClassReference_110ee5738;
}



/* Entry: 1086002dc; end: 108600307; -[SCTVideoPrivacyNotificationPresenter .cxx_destruct] */

void FUN_1086002dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108600308; end: 1086003d3; -[SCTalkNotificationProcessingReporter initWithNotificationProcessingStepEventEmitter:applicationStateProvider:callKitProcessingStepEventsEnabled:] */

undefined1 *
FUN_108600308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fd0f8;
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



/* Entry: 1086003d4; end: 10860046f; -[SCTalkNotificationProcessingReporter emitWillDisplayEvent:] */

void FUN_1086003d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b6b90;
  if ((int)uVar2 != 0) {
    lVar3 = param_1;
    func_0x00010be3e240(param_1);
    func_0x00010c0dcb80(puVar4,param_2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108600470; end: 10860051b; -[SCTalkNotificationProcessingReporter emitSuppressedEvent:suppressionReason:] */

void FUN_108600470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b6b90;
  if ((int)uVar2 != 0) {
    lVar3 = param_1;
    func_0x00010be3e240(param_1);
    func_0x00010c0dc1e0(puVar4,param_2,param_3,lVar3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10860051c; end: 10860053b; -[SCTalkNotificationProcessingReporter _isAppForegrounded] */

bool FUN_10860051c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf07b60(lVar1);
  return lVar1 == 0;
}



/* Entry: 10860053c; end: 108600577; -[SCTalkNotificationProcessingReporter .cxx_destruct] */

void FUN_10860053c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108600578; end: 1086008df;  */

void FUN_108600578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126da798;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010901d7c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf1bae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000108ef3ef4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  uVar9 = param_1;
  func_0x00010901e928();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bec1f0(param_1,0);
  _objc_release(param_1);
  func_0x00010c05f6e0(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086008e0; end: 1086009af;  */

void FUN_1086008e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_2);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1086009b0;
  puStack_48 = &UNK_110a5b240;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_1);
  uVar2 = param_2;
  func_0x000107c31908(param_2,&puStack_60);
  _objc_release(param_2);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1086009b0; end: 108600b57;  */

void FUN_1086009b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar8 & 1) == 0) {
    uVar1 = param_2;
    func_0x000108ef5348();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901cfb4();
    puVar9 = PTR_PTR_1126da798;
    _objc_alloc(PTR_PTR_1126da798);
    uVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0d5140(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf1acc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010c0fa800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f6e0(puVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108600b58; end: 108600c17;  */

void FUN_108600b58(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c12a5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126da798;
  _objc_alloc(PTR_PTR_1126da798);
  puVar2 = puVar1;
  func_0x000108ef5c94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000108ef44cc(param_1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f6e0(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108600c18; end: 108600c9f; -[SCMissedCallsCache initWithDocObjectContext:] */

undefined1 * FUN_108600c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd100;
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



/* Entry: 108600ca0; end: 108600f6b; -[SCMissedCallsCache getReasonForCallUuid:] */

long FUN_108600ca0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  long lStack_158;
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
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126da7a0);
    if (lVar2 == 0) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_a0,lVar2);
    }
    puVar3 = &uStack_111;
    FUN_10860251c();
    uStack_180 = 0xf;
    uStack_170 = 0x100;
    _objc_retain(param_3);
    ppuStack_188 = &PTR_DAT_110862760;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    plStack_128 = (long *)0x0;
    uStack_130 = 0;
    plStack_120 = (long *)0x0;
    uStack_f6 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_108 = 10;
    uStack_f8 = 0x100;
    ppuStack_110 = &PTR_SUB_110862700;
    uStack_c0 = 0;
    uStack_c8 = 0;
    plStack_b0 = (long *)0x0;
    uStack_b8 = 0;
    plStack_a8 = (long *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    puStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a4 = 0;
    puVar4 = &uStack_a0;
    lStack_158 = param_3;
    puStack_d8 = puVar3;
    pppuStack_d0 = &ppuStack_188;
    func_0x000107c310cc(puVar4,&ppuStack_110,&puStack_1a0,&uStack_1a4);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1a0 != (undefined8 *)0x0) {
      puStack_198 = puStack_1a0;
      __ZdlPv();
    }
    plVar1 = plStack_a8;
    ppuStack_110 = &PTR_SUB_110862700;
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
    func_0x000107c27dd4(&puStack_1a0);
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
    func_0x000107c27dd4(&puStack_1a0);
    _objc_release(lStack_158);
    func_0x000107c27da8(&uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(lVar2);
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined8 *)0x0) {
      param_1 = 0;
    }
    else {
      puVar5 = puVar4;
      func_0x00010bfb1920(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c121ea0();
      func_0x00010be86960(param_1);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return param_1;
}


