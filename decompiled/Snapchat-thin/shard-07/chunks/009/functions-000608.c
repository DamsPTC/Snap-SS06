/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b4a77c; end: 105b4a7d7;  */

void FUN_105b4a77c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23fa60();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b4a7d8; end: 105b4a80b; -[SCFriendsFeedAnimationHandler dealloc] */

void FUN_105b4a7d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec098;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105b4a80c; end: 105b4ae3f; -[SCFriendsFeedAnimationHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105b4a80c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    func_0x00010bf3a9a0();
    _objc_release(lVar4);
    uVar5 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((int)uVar3 == 0) {
      uVar5 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((int)uVar3 == 0) {
        uVar5 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((int)uVar3 == 0) {
          uVar5 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((int)uVar3 != 0) {
            uVar5 = uVar1;
            func_0x00010c08c0e0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12aaa0();
            _objc_release(uVar5);
            uVar5 = param_5;
            func_0x00010c08c0e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12aaa0();
LAB_105b4ab4c:
            _objc_release(uVar5);
LAB_105b4ab50:
            uVar7 = 0;
            goto LAB_105b4aaac;
          }
          uVar5 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((int)uVar3 == 0) {
            uVar5 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            func_0x00010c0720c0();
            _objc_release(uVar5);
            if ((int)uVar3 == 0) {
              uVar5 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar5;
              func_0x00010c0720c0();
              _objc_release(uVar5);
              if ((int)uVar3 == 0) {
                uVar5 = param_4;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar5;
                func_0x00010c0720c0();
                _objc_release(uVar5);
                if ((int)uVar3 == 0) {
                  uVar5 = param_4;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar5;
                  func_0x00010c0720c0();
                  _objc_release(uVar5);
                  if ((int)uVar3 == 0) {
                    uVar5 = param_4;
                    func_0x00010bfe5ec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar5;
                    func_0x00010c0720c0();
                    _objc_release(uVar5);
                    if ((int)uVar3 != 0) {
                      uVar3 = param_4;
                      func_0x00010beee2e0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = PTR_PTR_1126c2958;
                      _objc_opt_class(PTR_PTR_1126c2958);
                      uVar6 = uVar3;
                      _objc_opt_isKindOfClass(uVar3,puVar2);
                      uVar5 = uVar3;
                      if ((uVar6 & 1) == 0) {
                        uVar5 = 0;
                      }
                      _objc_retain(uVar5);
                      _objc_release(uVar3);
                      func_0x00010be9a920(param_1);
                      goto LAB_105b4ab4c;
                    }
                  }
                  else {
                    func_0x00010be8b580(param_1);
                    FUN_105b4ae40(uVar1);
                  }
                  goto LAB_105b4ab50;
                }
                uVar3 = param_4;
                func_0x00010beee2e0();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126c2950;
                _objc_opt_class(PTR_PTR_1126c2950);
                uVar6 = uVar3;
                _objc_opt_isKindOfClass(uVar3,puVar2);
                uVar5 = uVar3;
                if ((uVar6 & 1) == 0) {
                  uVar5 = 0;
                }
                _objc_retain(uVar5);
                _objc_release(uVar3);
                func_0x00010be710e0(param_1);
              }
              else {
                uVar3 = param_4;
                func_0x00010beee2e0();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126c2948;
                _objc_opt_class(PTR_PTR_1126c2948);
                uVar6 = uVar3;
                _objc_opt_isKindOfClass(uVar3,puVar2);
                uVar5 = uVar3;
                if ((uVar6 & 1) == 0) {
                  uVar5 = 0;
                }
                _objc_retain(uVar5);
                _objc_release(uVar3);
                func_0x00010be769c0(param_1);
              }
            }
            else {
              uVar3 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126c2940;
              _objc_opt_class(PTR_PTR_1126c2940);
              uVar6 = uVar3;
              _objc_opt_isKindOfClass(uVar3,puVar2);
              uVar5 = uVar3;
              if ((uVar6 & 1) == 0) {
                uVar5 = 0;
              }
              _objc_retain(uVar5);
              _objc_release(uVar3);
              func_0x00010bdea000(param_1);
            }
          }
          else {
            uVar3 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126c2938;
            _objc_opt_class(PTR_PTR_1126c2938);
            uVar6 = uVar3;
            _objc_opt_isKindOfClass(uVar3,puVar2);
            uVar5 = uVar3;
            if ((uVar6 & 1) == 0) {
              uVar5 = 0;
            }
            _objc_retain(uVar5);
            _objc_release(uVar3);
            func_0x00010be8ee80(param_1);
          }
        }
        else {
          uVar3 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126c2930;
          _objc_opt_class(PTR_PTR_1126c2930);
          uVar6 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar2);
          uVar5 = uVar3;
          if ((uVar6 & 1) == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar3);
          func_0x00010be848e0(param_1);
        }
      }
      else {
        uVar3 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126c2928;
        _objc_opt_class(PTR_PTR_1126c2928);
        uVar6 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar5 = uVar3;
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar3);
        func_0x00010bec8a20(param_1);
      }
    }
    else {
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c2920;
      _objc_opt_class(PTR_PTR_1126c2920);
      uVar6 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      uVar5 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar3);
      func_0x00010becf5e0(param_1);
    }
  }
  else {
    _objc_release();
    if (lVar4 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140();
  }
  _objc_release(uVar5);
  uVar7 = 1;
LAB_105b4aaac:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105b4ae40; end: 105b4af7b;  */

long FUN_105b4ae40(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_e8;
  puVar8 = (undefined1 *)0x10;
  lVar9 = param_1;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(param_1);
      }
      uVar13 = *(undefined8 *)(lVar17 * 8);
      uVar14 = uVar13;
      func_0x00010beecec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar14;
      func_0x00010c0720c0();
      _objc_release(uVar14);
      if ((int)uVar2 != 0) {
        func_0x00010c12c960(uVar13);
        goto LAB_105b4af38;
      }
      lVar17 = lVar17 + 1;
    } while (lVar9 != lVar17);
    puVar7 = auStack_e8;
    puVar8 = (undefined1 *)0x10;
    lVar9 = param_1;
    func_0x00010bf52a60();
  }
LAB_105b4af38:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar10 = puVar8;
  func_0x00010bf529e0();
  if (puVar10 == (undefined1 *)0x0) {
LAB_105b4b480:
    lVar12 = 0;
    goto LAB_105b4b4b0;
  }
  puVar10 = puVar7;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0720c0();
  _objc_release(puVar10);
  if ((int)puVar11 == 0) {
    puVar10 = puVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if ((int)puVar11 != 0) {
      puVar11 = puVar7;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c2960;
      _objc_opt_class(PTR_PTR_1126c2960);
      puVar3 = puVar11;
      _objc_opt_isKindOfClass(puVar11,puVar5);
      puVar10 = puVar11;
      if (((ulong)puVar3 & 1) == 0) {
        puVar10 = (undefined1 *)0x0;
      }
      _objc_retain(puVar10);
      _objc_release(puVar11);
      if (puVar10 == (undefined1 *)0x0) goto LAB_105b4b48c;
      puVar15 = *(undefined1 **)(param_1 + 0x20);
      _objc_retain(puVar15);
      _objc_retain(puVar8);
      puVar3 = puVar8;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar3 != (undefined1 *)0x0) {
        puVar18 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar8);
          }
          puVar4 = puVar11;
          func_0x00010bf03aa0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar15);
          _objc_retain(puVar11);
          func_0x00010becf5e0(param_1);
          _objc_release(puVar4);
          _objc_release(puVar10);
          _objc_release(puVar15);
          puVar18 = puVar18 + 1;
        } while (puVar3 != puVar18);
        puVar3 = puVar8;
        func_0x00010bf52a60();
      }
      _objc_release(puVar8);
      goto LAB_105b4b49c;
    }
    puVar10 = puVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if ((int)puVar11 == 0) goto LAB_105b4b480;
    _objc_retain(puVar8);
    puVar10 = puVar8;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar10 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar8);
        }
        puVar5 = PTR_PTR_1126c2968;
        uVar16 = *(ulong *)((long)puVar11 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar5);
        uVar6 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar5);
        uVar1 = uVar16;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar16);
        func_0x00010c1a7f60(uVar1);
        func_0x00010c219960(uVar16);
        _objc_release(uVar1);
        puVar11 = puVar11 + 1;
      } while (puVar10 != puVar11);
      puVar10 = puVar8;
      func_0x00010bf52a60();
    }
    lVar12 = 1;
    puVar10 = puVar8;
  }
  else {
    puVar3 = puVar7;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2960;
    _objc_opt_class(PTR_PTR_1126c2960);
    puVar10 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar5);
    puVar11 = puVar3;
    if (((ulong)puVar10 & 1) == 0) {
      puVar11 = (undefined1 *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar3);
    if (puVar11 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
LAB_105b4b48c:
      lVar12 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      puVar10 = puVar3;
      func_0x00010bfa3d00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa700(uVar14);
      _objc_release(puVar10);
      _objc_retain(puVar8);
      puVar18 = puVar8;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      puVar10 = puVar3;
      while (puVar15 = puVar8, puVar18 != (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar8);
          }
          puVar5 = PTR_PTR_1126c2968;
          uVar16 = *(ulong *)((long)puVar10 * 8);
          _objc_retain(uVar16);
          _objc_opt_class(puVar5);
          uVar6 = uVar16;
          _objc_opt_isKindOfClass(uVar16,puVar5);
          uVar1 = uVar16;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar16);
          func_0x00010c1a7f60(uVar1);
          puVar15 = puVar3;
          func_0x00010bf03aa0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010becf5e0(param_1);
          _objc_release(uVar1);
          _objc_release(puVar15);
          puVar10 = puVar10 + 1;
        } while (puVar18 != puVar10);
        puVar18 = puVar8;
        func_0x00010bf52a60();
        puVar10 = puVar11;
      }
LAB_105b4b49c:
      _objc_release(puVar15);
      lVar12 = 1;
    }
  }
  _objc_release(puVar10);
LAB_105b4b4b0:
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c2968;
    uVar16 = *(ulong *)(puVar7 + 0x20);
    _objc_retain(uVar16);
    _objc_opt_class(puVar5);
    uVar6 = uVar16;
    _objc_opt_isKindOfClass(uVar16,puVar5);
    uVar1 = uVar16;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar16);
    func_0x00010c1a7f60(uVar1);
    uVar14 = *(undefined8 *)(puVar7 + 0x28);
    lVar9 = *(long *)(puVar7 + 0x30);
    func_0x00010bfa3d00(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d8a0(uVar14);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar9);
    return lVar9;
  }
  return lVar12;
}



/* Entry: 105b4af7c; end: 105b4b503; -[SCFriendsFeedAnimationHandler handleActionWithSender:actionModel:fromSourceViews:] */

undefined8
FUN_105b4af7c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar6 = param_5;
  func_0x00010bf529e0();
  if (uVar6 == 0) {
LAB_105b4b480:
    uVar9 = 0;
    goto LAB_105b4b4b0;
  }
  uVar6 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  if ((int)uVar7 == 0) {
    uVar6 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c2960;
      _objc_opt_class(PTR_PTR_1126c2960);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar3);
      uVar6 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar7);
      if (uVar6 == 0) goto LAB_105b4b48c;
      uVar10 = *(ulong *)(param_1 + 0x20);
      _objc_retain(uVar10);
      _objc_retain(param_5);
      uVar8 = param_5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar8 != 0) {
        uVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_5);
          }
          uVar2 = uVar7;
          func_0x00010bf03aa0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar10);
          _objc_retain(uVar7);
          func_0x00010becf5e0(param_1);
          _objc_release(uVar2);
          _objc_release(uVar6);
          _objc_release(uVar10);
          uVar12 = uVar12 + 1;
        } while (uVar8 != uVar12);
        uVar8 = param_5;
        func_0x00010bf52a60();
      }
      _objc_release(param_5);
      goto LAB_105b4b49c;
    }
    uVar6 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar7 == 0) goto LAB_105b4b480;
    _objc_retain(param_5);
    uVar6 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        puVar3 = PTR_PTR_1126c2968;
        uVar12 = *(ulong *)(uVar7 * 8);
        _objc_retain(uVar12);
        _objc_opt_class(puVar3);
        uVar10 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar3);
        uVar8 = uVar12;
        if ((uVar10 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar12);
        func_0x00010c1a7f60(uVar8);
        func_0x00010c219960(uVar12);
        _objc_release(uVar8);
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      uVar6 = param_5;
      func_0x00010bf52a60();
    }
    uVar9 = 1;
    uVar6 = param_5;
  }
  else {
    uVar8 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2960;
    _objc_opt_class(PTR_PTR_1126c2960);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar7 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
    if (uVar7 == 0) {
      uVar6 = 0;
LAB_105b4b48c:
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = uVar8;
      func_0x00010bfa3d00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa700(uVar9);
      _objc_release(uVar6);
      _objc_retain(param_5);
      uVar12 = param_5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      uVar6 = uVar8;
      while (uVar10 = param_5, uVar12 != 0) {
        uVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_5);
          }
          puVar3 = PTR_PTR_1126c2968;
          uVar11 = *(ulong *)(uVar6 * 8);
          _objc_retain(uVar11);
          _objc_opt_class(puVar3);
          uVar2 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar3);
          uVar10 = uVar11;
          if ((uVar2 & 1) == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          _objc_release(uVar11);
          func_0x00010c1a7f60(uVar10);
          uVar2 = uVar8;
          func_0x00010bf03aa0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010becf5e0(param_1);
          _objc_release(uVar10);
          _objc_release(uVar2);
          uVar6 = uVar6 + 1;
        } while (uVar12 != uVar6);
        uVar12 = param_5;
        func_0x00010bf52a60();
        uVar6 = uVar7;
      }
LAB_105b4b49c:
      _objc_release(uVar10);
      uVar9 = 1;
    }
  }
  _objc_release(uVar6);
LAB_105b4b4b0:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126c2968;
    uVar8 = *(ulong *)(param_4 + 0x20);
    _objc_retain(uVar8);
    _objc_opt_class(puVar3);
    uVar7 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar6 = uVar8;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar8);
    func_0x00010c1a7f60(uVar6);
    uVar9 = *(undefined8 *)(param_4 + 0x28);
    uVar4 = *(undefined8 *)(param_4 + 0x30);
    func_0x00010bfa3d00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d8a0(uVar9);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return uVar4;
  }
  return uVar9;
}



/* Entry: 105b4b504; end: 105b4b59f;  */

void FUN_105b4b504(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar3 = PTR_PTR_1126c2968;
  uVar6 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x00010c1a7f60(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa3d00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d8a0(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105b4b5a0; end: 105b4b817; -[SCFriendsFeedAnimationHandler _substituteTextForView:parentView:animationData:] */

void FUN_105b4b5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  uVar4 = param_6;
  func_0x00010bf03aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_2);
  func_0x00010bf8b160(uVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105b4b818;
  puStack_88 = &UNK_110848ba8;
  _objc_retain(uVar1);
  uStack_80 = uVar1;
  _objc_retain(uVar4);
  uStack_78 = uVar4;
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(uVar3);
  _objc_retain(param_6);
  func_0x00010bdcb380(param_1,param_2);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar4);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b4b818; end: 105b4b877;  */

void FUN_105b4b818(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c260bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  func_0x00010c16b720(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105b4b878; end: 105b4b96f;  */

void FUN_105b4b878(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x00010c138860(*(undefined8 *)(param_2 + 0x20));
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b4b970;
  puStack_70 = &UNK_11085ae98;
  _objc_copyWeak(auStack_48,param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uStack_58 = uVar3;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b4b970; end: 105b4b9a7;  */

void FUN_105b4b970(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec8a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4b9a8; end: 105b4bbf7; -[SCFriendsFeedAnimationHandler _substituteTextBackForLabel:parentView:originalLabelString:animationData:] */

void FUN_105b4b9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf03aa0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c260bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar5 == 0) {
    func_0x00010bdfe400(param_2);
  }
  else {
    _objc_initWeak(auStack_78,param_2);
    func_0x00010bf8b160(uVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105b4bbf8;
    puStack_98 = &UNK_110848ba8;
    _objc_retain(param_4);
    uStack_90 = param_4;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_retain(param_5);
    uStack_80 = param_5;
    _objc_copyWeak(auStack_b8,auStack_78);
    _objc_retain(param_7);
    func_0x00010bdcb380(param_1,param_2);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b4bbf8; end: 105b4bc6b;  */

void FUN_105b4bbf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar1);
  func_0x00010c16b720(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105b4bc6c; end: 105b4bcab; -[SCFriendsFeedAnimationHandler _didFinishSubstitueTextAnimationForAnimationData:] */

void FUN_105b4bc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef91e0(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b4bcac; end: 105b4be0f; -[SCFriendsFeedAnimationHandler _replaySnapForFeedIconView:parentView:animationData:] */

void FUN_105b4bcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  FUN_105b4be10();
  if ((int)uVar1 != 0) {
    FUN_105b4bf44(param_4);
  }
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010bdcb060(0x3fe0000000000000,0x3fe0000000000000,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b4be10; end: 105b4bf43;  */

long FUN_105b4be10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  ulong unaff_x22;
  long lVar4;
  ulong unaff_x23;
  long lVar5;
  long unaff_x24;
  long lVar6;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    unaff_x24 = *plStack_110;
    unaff_x21 = lVar6;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(ulong *)(lStack_118 + lVar6 * 8);
        func_0x00010beecec0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x22;
        func_0x00010c0720c0();
        _objc_release(unaff_x22);
        if ((unaff_x23 & 1) != 0) {
          lVar6 = 1;
          goto LAB_105b4bf00;
        }
        lVar6 = lVar6 + 1;
      } while (unaff_x21 != lVar6);
      unaff_x21 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (unaff_x21 != 0);
  }
  lVar6 = 0;
LAB_105b4bf00:
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar6;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105b4bf44;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = unaff_x24;
  uStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  lStack_140 = lVar6;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  lVar6 = lVar1;
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar6);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  lVar6 = lVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_220;
    do {
      lVar5 = 0;
      do {
        if (*plStack_220 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        FUN_105b4bf44(*(undefined8 *)(lStack_228 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_230,auStack_1e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return lVar1;
  }
  ___stack_chk_fail();
  lVar6 = lVar1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010bf50280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfff00(lVar6,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return lVar6;
}



/* Entry: 105b4bf44; end: 105b4c067;  */

void FUN_105b4bf44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
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
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        FUN_105b4bf44(*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfff00(lVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b4c068; end: 105b4c0bb;  */

void FUN_105b4c068(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfff00(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b4c0bc; end: 105b4c0c3; -[SCFriendsFeedAnimationHandler _didReplaySnapForConversationId:] */

void FUN_105b4c0bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeReplayingSnapConversationI_112629238);
  return;
}



/* Entry: 105b4c0c4; end: 105b4c103; -[SCFriendsFeedAnimationHandler _peekAPeekForFeedIconView:animationData:] */

void FUN_105b4c0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c230b20(param_4);
  func_0x00010c1a7f60(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b4c104; end: 105b4c40b; -[SCFriendsFeedAnimationHandler _countdownSnapForFeedIconView:parentView:animationData:] */

void FUN_105b4c104(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf65e40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_105b4c178:
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_6;
    func_0x00010c241220(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b220(uVar3);
    dVar6 = param_1;
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_6;
    func_0x00010c241220(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155340(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  else {
    uVar2 = param_6;
    func_0x00010c0f6280();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_105b4c178;
    func_0x00010bf8b160(param_6);
    uVar1 = param_6;
    dVar6 = param_1;
    func_0x00010bf65e40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(uVar1);
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    if (dVar6 <= 0.0) {
      func_0x00010be8b580(param_2);
      func_0x00010bdfd080(param_2);
      goto LAB_105b4c354;
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c2970;
  if ((int)uVar3 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar5);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar5);
    uVar1 = param_4;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    func_0x00010c1a8220(uVar1);
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_58,param_2);
  uVar1 = param_6;
  func_0x00010c23f820(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bdcb060(param_1,dVar6,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_105b4c354:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b4c40c; end: 105b4c43f;  */

void FUN_105b4c40c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4c440; end: 105b4c657; -[SCFriendsFeedAnimationHandler _subscribeToSnapCountdownUpdates:layer:] */

void FUN_105b4c440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf52aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e0e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105b4c658;
  puStack_80 = &UNK_1108d6e40;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_3);
  uVar1 = uVar4;
  func_0x00010c25ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b4c658; end: 105b4c6ab;  */

void FUN_105b4c658(long param_1,int param_2)

{
  func_0x00010c0f6280();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be95d20();
  }
  else {
    func_0x00010be70d00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4c6ac; end: 105b4c6df;  */

void FUN_105b4c6ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4c6e0; end: 105b4c74b; -[SCFriendsFeedAnimationHandler _removeObserverForSnapId:] */

void FUN_105b4c6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40();
  _objc_release(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b4c74c; end: 105b4c7a7; -[SCFriendsFeedAnimationHandler _pauseLayerAnimation:] */

void FUN_105b4c74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010bf514c0(param_4,param_3,0);
  func_0x00010c207c40(0,param_4);
  func_0x00010c214e40(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b4c7a8; end: 105b4c823; -[SCFriendsFeedAnimationHandler _resumeLayerAnimation:] */

void FUN_105b4c7a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010c26f540(param_4);
  func_0x00010c207c40(0x3f800000,param_4);
  func_0x00010c214e40(0,param_4);
  dVar1 = 0.0;
  func_0x00010c16fd40(0,param_4);
  _CACurrentMediaTime();
  func_0x00010bf514c0(param_4,param_3,0);
  func_0x00010c16fd40(dVar1 - param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b4c824; end: 105b4ca1b; -[SCFriendsFeedAnimationHandler _didCountdownSnapForAnimationData:view:] */

void FUN_105b4c824(double param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c2970;
  _objc_opt_class(PTR_PTR_1126c2970);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfe5420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c262c80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      func_0x00010c1a8220(uVar1);
    }
  }
  else {
    _objc_release();
    _objc_release(uVar3);
  }
  uVar3 = param_4;
  func_0x00010bf65e40();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 == 0) || (uVar4 = param_4, func_0x00010c0f6280(), (uVar4 & 1) != 0)) {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155340(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
  else {
    uVar4 = param_4;
    func_0x00010bf65e40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(uVar4);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
  }
  _objc_release(uVar3);
  if ((long)param_1 == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = param_4;
    func_0x00010bf50280(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf502c0(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b4ca1c; end: 105b4cc5b; -[SCFriendsFeedAnimationHandler _postViewForFeedIconView:parentView:animationData:] */

void FUN_105b4ca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be8b580(param_1);
    FUN_105b4bf44(param_4);
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_5;
    func_0x00010c083540();
    lVar2 = param_5;
    if ((int)lVar1 == 0) {
      lVar1 = param_5;
      func_0x00010bf8e2c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010bfa3d00(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = auStack_88;
      _objc_copyWeak(puVar4,auStack_58);
      _objc_retain(param_5);
      func_0x00010bdcb0c0(param_1);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
    else {
      func_0x00010bf8e2c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010bfa3d00(param_5);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105b4cc5c;
      puStack_68 = &UNK_1108434b0;
      puVar4 = auStack_60;
      _objc_copyWeak(puVar4,auStack_58);
      func_0x00010bdcafa0(param_1);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
    _objc_destroyWeak(puVar4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b4cc5c; end: 105b4cca3;  */

void FUN_105b4cc5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf03cc0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4cca4; end: 105b4cd1b;  */

void FUN_105b4cca4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x48;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf03ce0(lVar2,param_2,lVar1,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b4cd1c; end: 105b4ce23; -[SCFriendsFeedAnimationHandler _pulsingTextForView:animationData:] */

void FUN_105b4cd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c24db20(param_5);
  func_0x00010c1677c0(param_4);
  puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  func_0x00010bf8b160(param_5);
  uVar3 = param_1;
  func_0x00010bf6adc0(param_5);
  uVar2 = param_5;
  func_0x00010c0ec860(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105b4ce24;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c142dc0(param_1,uVar3,puVar1,param_3,uVar2,&puStack_70,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b4ce24; end: 105b4ce4b;  */

void FUN_105b4ce24(long param_1)

{
  func_0x00010bf94160(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105b4ce4c; end: 105b4d01f; -[SCFriendsFeedAnimationHandler _translationAnimationForView:animationData:completion:] */

void FUN_105b4ce4c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_7 != 0) {
    _objc_retain(param_9);
    lVar2 = param_7;
    func_0x00010b8166c0();
    dVar4 = 1.0;
    dStack_d8 = -1.0;
    if ((int)lVar2 == 0) {
      dStack_d8 = 1.0;
    }
    func_0x00010c2beb00(param_8);
    dVar5 = dVar4;
    func_0x00010bf20c00(param_7);
    func_0x00010c2beb20(param_8);
    dVar5 = dStack_d8 * dVar5;
    dVar10 = dVar5 + param_3 * dVar4;
    func_0x00010c2bed20(param_8);
    dVar4 = dVar5;
    func_0x00010bf20c00(param_7);
    func_0x00010c2bed40(param_8);
    _CGAffineTransformMakeTranslation(&uStack_a0,dVar10,dVar4 + param_4 * dVar5);
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    func_0x00010c219960(param_7,param_6,&uStack_d0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar6 = uStack_80;
    func_0x00010bf8b160(param_8);
    uVar7 = uVar6;
    func_0x00010bf6adc0(param_8);
    uVar8 = uVar7;
    func_0x00010bf63420(param_8);
    uVar9 = uVar8;
    func_0x00010c2979e0(param_8);
    uVar3 = param_8;
    func_0x00010c0ec860(param_8);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_105b4d020;
    puStack_f0 = &UNK_110844b80;
    _objc_retain(param_7);
    lStack_e8 = param_7;
    _objc_retain(param_8);
    uStack_e0 = param_8;
    func_0x00010bf03460(uVar6,uVar7,uVar8,uVar9,puVar1,param_6,uVar3,&puStack_108,param_9);
    _objc_release(param_9);
    _objc_release(uStack_e0);
    _objc_release(lStack_e8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105b4d020; end: 105b4d0cb;  */

void FUN_105b4d020(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c2be9a0(*(undefined8 *)(param_5 + 0x28));
  dVar1 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
  func_0x00010c2be9c0(*(undefined8 *)(param_5 + 0x28));
  dVar1 = dVar1 * *(double *)(param_5 + 0x30);
  dVar3 = dVar1 + param_3 * param_1;
  func_0x00010c2bec20(*(undefined8 *)(param_5 + 0x28));
  dVar2 = dVar1;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
  func_0x00010c2bec40(*(undefined8 *)(param_5 + 0x28));
  _CGAffineTransformMakeTranslation(&uStack_70,dVar3,dVar2 + param_4 * dVar1);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(*(undefined8 *)(param_5 + 0x20),param_6,&uStack_a0);
  return;
}



/* Entry: 105b4d0cc; end: 105b4d1ab; -[SCFriendsFeedAnimationHandler _animateView:duration:animations:completion:] */

void FUN_105b4d0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e1a0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,1);
    }
  }
  else {
    func_0x00010c27ac60(param_1,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b4d1ac; end: 105b4d633; -[SCFriendsFeedAnimationHandler _animateRadialWipeAnimationForView:parentView:outerLayerColor:duration:remainingTime:clockwise:completion:] */

void FUN_105b4d1ac(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puVar2 = PTR_PTR_1126c2970;
  _objc_retain(param_9);
  _objc_opt_class(puVar2);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf20c00(param_7);
  dVar13 = param_3 * 0.5;
  func_0x00010bf20c00(param_7);
  dVar14 = param_4 * 0.5;
  func_0x00010bf20c00(param_7);
  param_3 = param_3 + -10.0;
  func_0x00010bf20c00(param_7);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _CGRectInset(0x4014000000000000,0x4014000000000000,param_3,param_4 + -10.0,0x3ff8000000000000,
               0x3ff8000000000000);
  func_0x00010bf19a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar4);
  _objc_retainAutorelease(param_9);
  func_0x00010bdc0fe0();
  _objc_release(param_9);
  func_0x00010c19bc00(puVar4);
  func_0x00010bf20c00(param_7);
  func_0x00010bf20c00(param_7);
  func_0x00010c1739e0(0,0,param_3,puVar4);
  dVar9 = dVar13;
  func_0x00010c1dee80(dVar13,dVar14,puVar4);
  func_0x00010c1a96c0(uVar1);
  func_0x00010bf20c00(puVar4);
  _CGRectGetWidth();
  dVar10 = dVar9;
  func_0x00010bf20c00(puVar4);
  _CGRectGetHeight();
  dVar15 = (double)(SQRT((float)(dVar10 * dVar10 + dVar9 * dVar9)) * 0.5);
  dVar11 = -1.5707963267948966;
  if (param_10 == 0) {
    dVar11 = 4.71238898038469;
  }
  dVar12 = 4.71238898038469;
  if (param_10 == 0) {
    dVar12 = (((param_1 - param_2) / param_1) * 360.0 * 3.141592653589793) / 180.0 +
             -1.5707963267948966;
  }
  puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19960(dVar13,dVar14,dVar15 * 0.5,dVar11,dVar12,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar6);
  _objc_release(puVar7);
  func_0x00010c1bdd00(dVar15,puVar6);
  _objc_retainAutorelease(puVar5);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar6);
  func_0x00010c20e920(0x3ff0000000000000,puVar6);
  func_0x00010c1739e0(0,0,dVar9,dVar10,puVar6);
  func_0x00010c1dee80(dVar13,dVar14,puVar6);
  func_0x00010c1c2c00(puVar4);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar8 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(param_2);
  func_0x00010c1a1180(puVar8);
  func_0x00010c216920(puVar8);
  puVar7 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_retain(param_11);
  _objc_retain(puVar4);
  func_0x00010c17fb40(puVar7);
  func_0x00010bef6c20(puVar6);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c20e920(0,puVar6);
  _objc_release(param_11);
  _objc_release(puVar4);
  _objc_release(param_11);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b4d634; end: 105b4d67b;  */

void FUN_105b4d634(long param_1,undefined8 param_2)

{
  func_0x00010c1c2c00(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c12c940(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105b4d66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105b4d67c; end: 105b4d7ff; -[SCFriendsFeedAnimationHandler _removeAnimatingSublayerIfNecessaryForView:] */

void FUN_105b4d67c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_release(param_3);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar4);
  puVar9 = auStack_d8;
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(lVar4);
        }
        lVar10 = *(long *)(lStack_118 + lVar12 * 8);
        lVar5 = lVar10;
        func_0x00010c0bc120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          lVar5 = lVar10;
          func_0x00010c0bc120();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12b200();
          _objc_release(lVar5);
          func_0x00010c12c940(lVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      puVar9 = auStack_d8;
      lVar3 = lVar4;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _CGAffineTransformMakeScale(&uStack_1c0,0x3ff0000000000000,0x3ff0000000000000);
  uStack_1e8 = uStack_1b8;
  uStack_1f0 = uStack_1c0;
  uStack_1d8 = uStack_1a8;
  uStack_1e0 = uStack_1b0;
  uStack_1c8 = uStack_198;
  uStack_1d0 = uStack_1a0;
  func_0x00010c219960(puVar8,param_2,&uStack_1f0);
  puVar6 = puVar9;
  func_0x00010c0d9e80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar13 = uStack_1a0;
  func_0x00010bf8b160(puVar9);
  uVar14 = uVar13;
  func_0x00010bf6adc0(puVar9);
  puVar7 = puVar9;
  func_0x00010c0ec860(puVar9);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_105b4d990;
  puStack_208 = &UNK_110841f80;
  _objc_retain(puVar8);
  puStack_250 = puVar1;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_105b4d9fc;
  puStack_238 = &UNK_110848bd8;
  puStack_230 = puVar6;
  puStack_228 = (undefined1 *)puVar8;
  puStack_200 = (undefined1 *)puVar8;
  puStack_1f8 = puVar9;
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  _objc_retain(puVar9);
  func_0x00010bf03440(uVar13,uVar14,puVar2,param_2,puVar7,&puStack_220,&puStack_250);
  _objc_release(puStack_228);
  _objc_release(puStack_230);
  _objc_release(puStack_1f8);
  _objc_release(puStack_200);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar9);
  return;
}



/* Entry: 105b4d800; end: 105b4d98f; -[SCFriendsFeedAnimationHandler _scaleFeedComponentForView:animationData:] */

void FUN_105b4d800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _CGAffineTransformMakeScale(&uStack_a0,0x3ff0000000000000,0x3ff0000000000000);
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010c219960(param_3,param_2,&uStack_d0);
  uVar3 = param_4;
  func_0x00010c0d9e80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar5 = uStack_80;
  func_0x00010bf8b160(param_4);
  uVar6 = uVar5;
  func_0x00010bf6adc0(param_4);
  uVar4 = param_4;
  func_0x00010c0ec860(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105b4d990;
  puStack_e8 = &UNK_110841f80;
  _objc_retain(param_3);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105b4d9fc;
  puStack_118 = &UNK_110848bd8;
  uStack_110 = uVar3;
  uStack_108 = param_3;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  func_0x00010bf03440(uVar5,uVar6,puVar2,param_2,uVar4,&puStack_100,&puStack_130);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 105b4d990; end: 105b4d9fb;  */

void FUN_105b4d990(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x28));
  _CGAffineTransformMakeScale(&uStack_60,param_1,uVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(param_2 + 0x20),param_3,&uStack_90);
  return;
}



/* Entry: 105b4d9fc; end: 105b4dad7;  */

void FUN_105b4d9fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (*(long *)(param_2 + 0x20) != 0) {
    func_0x00010bf8b160();
    uVar5 = param_1;
    func_0x00010bf6adc0(*(undefined8 *)(param_2 + 0x20));
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0ec860(uVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105b4dad8;
    puStack_58 = &UNK_110841f80;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uStack_50 = uVar4;
    _objc_retain(uVar3);
    uStack_48 = uVar3;
    func_0x00010bf03440(param_1,uVar5,puVar1,param_3,uVar2,&puStack_70,0);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  return;
}



/* Entry: 105b4dad8; end: 105b4db43;  */

void FUN_105b4dad8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x28));
  _CGAffineTransformMakeScale(&uStack_60,param_1,uVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(param_2 + 0x20),param_3,&uStack_90);
  return;
}



/* Entry: 105b4db44; end: 105b4ddeb; -[SCFriendsFeedAnimationHandler _animatePostViewEmoji:feedId:view:parentView:completion:] */

void FUN_105b4db44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = param_6;
  FUN_105b4be10();
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(param_5);
    _CGRectInset();
    func_0x00010c013de0();
    func_0x00010c160fc0();
    puVar5 = PTR_PTR_1126c2978;
    _objc_alloc();
    func_0x00010bf20c00(puVar4);
    _CGRectInset();
    func_0x00010c013de0();
    func_0x00010c1733a0(0x4000000000000000);
    func_0x00010c1842e0(0x4000000000000000,puVar5);
    func_0x00010befbb60(puVar4,param_2,puVar5);
    puVar6 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010bf20c00(puVar4);
    func_0x00010c013de0();
    func_0x00010c212f20();
    func_0x00010c213040(puVar6,param_2,1);
    func_0x00010c21ad00(puVar6,param_2,0x15);
    func_0x00010c165e20(puVar6,param_2,1);
    func_0x00010c1c83a0(0x3fb999999999999a,puVar6);
    func_0x00010c1677c0(0,puVar6);
    func_0x00010befbb60(puVar4,param_2,puVar6);
    func_0x00010c1677c0(0,param_5);
    func_0x00010befbb60(param_6,param_2,puVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105b4ddec;
    puStack_90 = &UNK_110848ba8;
    puStack_88 = puVar6;
    puStack_80 = puVar5;
    _objc_retain(param_5);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x105b4df24;
    puStack_d0 = &UNK_1108843d8;
    uStack_78 = param_5;
    _objc_retain(param_4);
    uStack_c8 = param_4;
    _objc_retain(param_5);
    uStack_c0 = param_5;
    puStack_b8 = puVar4;
    _objc_retain(param_7);
    uStack_b0 = param_7;
    func_0x00010bf02ee0(0x4008000000000000,0x3fe0000000000000,puVar2,param_2,0,&puStack_a8,
                        &puStack_e8);
    _objc_release(uStack_b0);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_78);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b4ddec; end: 105b4dec3;  */

void FUN_105b4ddec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105b4dec4;
  puStack_58 = &UNK_110841f80;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fa1111115555555,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_70);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105b4def4;
  puStack_88 = &UNK_110841f80;
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_78 = uVar3;
  func_0x00010bef95a0(0x3feeeeeeeeaaaaab,0x3fa1111115555555,puVar2,param_2,&puStack_a0);
  _objc_release(uStack_78);
  return;
}



/* Entry: 105b4dec4; end: 105b4df6b;  */

/* WARNING: Possible PIC construction at 0x000105b4dedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b4dee0) */

void FUN_105b4dec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105b4df6c; end: 105b4e1af; -[SCFriendsFeedAnimationHandler _animateSenderPostViewEmoji:feedId:view:parentView:completion:] */

void FUN_105b4df6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = param_6;
  FUN_105b4be10();
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(param_5);
    _CGRectInset();
    func_0x00010c013de0();
    func_0x00010c160fc0();
    puVar5 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010bf20c00(puVar4);
    func_0x00010c013de0();
    func_0x00010c212f20();
    func_0x00010c213040(puVar5,param_2,1);
    func_0x00010c21ad00(puVar5,param_2,0x15);
    func_0x00010c165e20(puVar5,param_2,1);
    func_0x00010c1677c0(0,puVar5);
    func_0x00010befbb60(puVar4,param_2,puVar5);
    func_0x00010c1677c0(0,param_5);
    func_0x00010befbb60(param_6,param_2,puVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105b4e1b0;
    puStack_88 = &UNK_110841f80;
    puStack_80 = puVar5;
    _objc_retain(param_5);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105b4e2cc;
    puStack_c8 = &UNK_1108843d8;
    uStack_78 = param_5;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    _objc_retain(param_5);
    uStack_b8 = param_5;
    puStack_b0 = puVar4;
    _objc_retain(param_7);
    uStack_a8 = param_7;
    func_0x00010bf02ee0(0x4008000000000000,0x3fb999999999999a,puVar2,param_2,0,&puStack_a0,
                        &puStack_e0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_78);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b4e1b0; end: 105b4e28f;  */

void FUN_105b4e1b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b4e290;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fa1111115555555,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105b4e29c;
  puStack_80 = &UNK_110841f80;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  func_0x00010bef95a0(0x3feeeeeeeeaaaaab,0x3fa1111115555555,puVar2,param_2,&puStack_98);
  _objc_release(uStack_70);
  return;
}



/* Entry: 105b4e290; end: 105b4e29b;  */

void FUN_105b4e290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105b4e29c; end: 105b4e313;  */

/* WARNING: Possible PIC construction at 0x000105b4e2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b4e2b8) */

void FUN_105b4e29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105b4e314; end: 105b4e32b; -[SCFriendsFeedAnimationHandler delegate] */

void FUN_105b4e314(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b4e32c; end: 105b4e337; -[SCFriendsFeedAnimationHandler setDelegate:] */

void FUN_105b4e32c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105b4e338; end: 105b4e33f; -[SCFriendsFeedAnimationHandler observers] */

undefined8 FUN_105b4e338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105b4e340; end: 105b4e36f; -[SCFriendsFeedAnimationHandler setObservers:] */

void FUN_105b4e340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b4e370; end: 105b4e3fb; -[SCFriendsFeedAnimationHandler .cxx_destruct] */

void FUN_105b4e370(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 105b4e3fc; end: 105b4e7bb;  */

undefined * FUN_105b4e3fc(double param_1,double param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 uStack_220;
  double dStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar11 = param_2;
  _objc_retain();
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar2);
  func_0x00010bf345e0(param_3);
  uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_150 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_140 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_120 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_188 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_190 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_178 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_180 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_168 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_170 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_160 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  _CATransform3DTranslate(&uStack_108,0,param_1 - dVar11,0,&uStack_190);
  lVar3 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uStack_c0;
  uStack_150 = uStack_c8;
  uStack_138 = uStack_b0;
  uStack_140 = uStack_b8;
  uStack_128 = uStack_a0;
  uStack_130 = uStack_a8;
  uStack_118 = uStack_90;
  uStack_120 = uStack_98;
  uStack_188 = uStack_100;
  uStack_190 = uStack_108;
  uStack_178 = uStack_f0;
  uStack_180 = uStack_f8;
  uStack_168 = uStack_e0;
  uStack_170 = uStack_e8;
  uStack_158 = uStack_d0;
  uStack_160 = uStack_d8;
  func_0x00010c219960();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar4);
  func_0x00010c192d40(0x3fb99999a0000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5);
  func_0x00010c192d40(0x3fd3333340000000,puVar5);
  lVar3 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_210,lVar3);
  }
  _CATransform3DScale(&uStack_190,0x3ff3333340000000,0x3ff3333340000000,0x3ff3333340000000,
                      &uStack_210);
  _objc_release(lVar3);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  puStack_80 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6);
  _objc_release(puVar7);
  func_0x00010c192d40(0x3fe19999a0000000,puVar6);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar7 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  pcStack_238 = FUN_105b4e7bc;
  puStack_230 = &UNK_110844b80;
  lStack_228 = param_3;
  uStack_220 = param_4;
  dStack_218 = param_2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c17fb40(puVar7);
  lVar3 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(lVar3);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_1b8 = uStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  uStack_1b0 = uStack_130;
  uStack_198 = uStack_118;
  uStack_1a0 = uStack_120;
  uStack_208 = uStack_188;
  uStack_210 = uStack_190;
  uStack_1f8 = uStack_178;
  uStack_200 = uStack_180;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_1c8 = uStack_148;
  uStack_1d0 = uStack_150;
  lVar3 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar3);
  _objc_release(uStack_220);
  _objc_release(lStack_228);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_105b4e7bc;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(puVar4 + 0x20);
  uVar10 = *(undefined8 *)(puVar4 + 0x28);
  dVar11 = *(double *)(puVar4 + 0x30);
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  _objc_retain(uVar2);
  uVar8 = uVar10;
  func_0x00010c08c0e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar8);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(-((dVar11 + 5.0) * 0.5),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar4);
  _objc_release(puVar5);
  func_0x00010c216920(puVar4);
  func_0x00010c192d40(0x3fd0000000000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5);
  puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((dVar11 + 5.0) * 0.5,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar7);
  _objc_release(puVar6);
  func_0x00010c216920(puVar7);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2d8 = puVar5;
  puStack_2d0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6);
  _objc_release(puVar9);
  func_0x00010c192d40(0x3fd0000000000000,puVar6);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uVar8 = uVar10;
  func_0x00010c08c0e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010bef6c20(uVar8);
  _objc_release(uVar8);
  uVar10 = uVar2;
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar10);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_308 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_310 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_2f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_300 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_2e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_2f0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_105b4ea98;
  puStack_348 = &uStack_350;
  uStack_350 = 0;
  uStack_340 = 0x2020000000;
  uStack_338 = 0;
  puStack_330 = puVar4;
  uStack_328 = uVar2;
  ppuStack_320 = &puStack_260;
  func_0x00010c0bf920();
  bVar1 = *(byte *)(puStack_348 + 3);
  __Block_object_dispose(&uStack_350,8);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 105b4e7bc; end: 105b4ea97;  */

undefined * FUN_105b4e7bc(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  dVar10 = *(double *)(param_1 + 0x30);
  _objc_retain(uVar9);
  _objc_retain(uVar1);
  uVar3 = uVar9;
  func_0x00010c08c0e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar3);
  dVar10 = dVar10 + 5.0;
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(-(dVar10 * 0.5),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar4);
  _objc_release(puVar5);
  func_0x00010c216920(puVar4);
  func_0x00010c192d40(0x3fd0000000000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5);
  puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar10 * 0.5,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar6);
  _objc_release(puVar7);
  func_0x00010c216920(puVar6);
  puVar7 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar5;
  puStack_80 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar7);
  _objc_release(puVar8);
  func_0x00010c192d40(0x3fd0000000000000,puVar7);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uVar3 = uVar9;
  func_0x00010c08c0e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010bef6c20(uVar3);
  _objc_release(uVar3);
  uVar9 = uVar1;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar9);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_105b4ea98;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 0;
  puStack_e0 = puVar4;
  uStack_d8 = uVar1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c0bf920();
  bVar2 = *(byte *)(puStack_f8 + 3);
  __Block_object_dispose(&uStack_100,8);
  return (undefined *)(ulong)bVar2;
}



/* Entry: 105b4ea98; end: 105b4eb63; -[SCFriendsFeedComponentViewRightButtonViewModel isLensSuggestion] */

undefined1 FUN_105b4ea98(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b4eb64;
  puStack_50 = &UNK_1108d6e70;
  puStack_38 = puStack_48;
  func_0x00010c0bf920(param_1,param_2,0,0,0,0,0,0,&puStack_68,0,0,0,0,0);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105b4eb64; end: 105b4eb77;  */

void FUN_105b4eb64(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b4eb78; end: 105b4ec3b; -[SCFriendsFeedComponentViewRightButtonViewModel isLiveGaming] */

undefined1 FUN_105b4eb78(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b4ec3c;
  puStack_50 = &UNK_1108d6ea0;
  puStack_38 = puStack_48;
  func_0x00010c0bf920(param_1,param_2,0,0,0,0,0,0,0,0,0,0,0,&puStack_68);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105b4ec3c; end: 105b4ec4f;  */

void FUN_105b4ec3c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b4ec50; end: 105b4ecb3; -[SCPreferences dismissedPullDownLearningCount] */

void FUN_105b4ec50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e1f498);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b4ecb4; end: 105b4ecbf; -[SCPreferences setDismissedPullDownLearningCount:] */

void FUN_105b4ecb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e1f498);
  return;
}



/* Entry: 105b4ecc0; end: 105b4ede3;  */

void FUN_105b4ecc0(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  _objc_retain(param_4);
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  dVar7 = param_1 + 80.0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  uVar3 = 0;
  uVar6 = 0;
  func_0x00010c013de0(0,0,param_1,dVar7,puVar1);
  if (param_4 != 0) {
    func_0x00010befbb60(puVar1,param_3,param_4);
    func_0x00010bf20c00(puVar1);
    _CGRectGetWidth();
    uVar4 = uVar3;
    func_0x00010bf20c00(param_4);
    _CGRectGetHeight();
    uVar2 = param_4;
    uVar5 = uVar4;
    func_0x00010bfb68e0();
    _CGRectEqualToRect(0,0,uVar3,uVar4,uVar5,uVar6,param_1,dVar7);
    if ((uVar2 & 1) == 0) {
      func_0x00010c19f0e0(0,0,uVar3,uVar4,param_4);
    }
    func_0x00010c16d4a0(param_4,param_3,2);
  }
  func_0x00010c211660(param_2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b4ede4; end: 105b4ee47;  */

void FUN_105b4ede4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c267d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b4ee48; end: 105b4eeb7; -[SCFeedCellPanningState beginPanningCellWithIdentifier:] */

void FUN_105b4ee48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)
     ) {
    func_0x00010bf95000(param_1);
  }
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(ulong *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  *(bool *)(param_1 + 8) = *(long *)(param_1 + 0x18) != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b4eeb8; end: 105b4ef17; -[SCFeedCellPanningState endPanningCell] */

void FUN_105b4eeb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa38a0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b4ef18; end: 105b4ef37; -[SCFeedCellPanningState panningCellVisibilityChanged:] */

void FUN_105b4ef18(double param_1,long param_2)

{
  if ((param_1 != 1.0) && (param_1 != 0.0)) {
    return;
  }
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}



/* Entry: 105b4ef38; end: 105b4ef4f; -[SCFeedCellPanningState delegate] */

void FUN_105b4ef38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b4ef50; end: 105b4ef5b; -[SCFeedCellPanningState setDelegate:] */

void FUN_105b4ef50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105b4ef5c; end: 105b4ef63; -[SCFeedCellPanningState panningCellIdentifier] */

undefined8 FUN_105b4ef5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b4ef64; end: 105b4ef6b; -[SCFeedCellPanningState isDraggingCell] */

undefined1 FUN_105b4ef64(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105b4ef6c; end: 105b4ef97; -[SCFeedCellPanningState .cxx_destruct] */

void FUN_105b4ef6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105b4ef98; end: 105b4f0c3; -[SCFriendsFeedChatActionHandler initWithActionHandler:friendsFeedGraphene:messageLoaderFactory:chatLogger:] */

undefined1 *
FUN_105b4ef98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ec0a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf57140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
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



/* Entry: 105b4f0c4; end: 105b4f1ff; -[SCFriendsFeedChatActionHandler prepareMediaForMessage:conversationId:completion:] */

void FUN_105b4f0c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    func_0x00010bfa89a0(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b4f200; end: 105b4f253;  */

void FUN_105b4f200(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78a40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4f254; end: 105b4f2f3; -[SCFriendsFeedChatActionHandler fetchMessageForConversationId:messageId:completion:] */

void FUN_105b4f254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b4f2f4;
  puStack_40 = &UNK_11085d260;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa89a0(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 105b4f2f4; end: 105b4f2ff;  */

void FUN_105b4f2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105b4f2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105b4f300; end: 105b4f31b; -[SCFriendsFeedChatActionHandler loadMessageId:conversationId:isGroupConversation:requestSource:] */

void FUN_105b4f300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_loadMessageContentForConversatio_112604890,param_4,
             param_3,param_5,4,param_6);
  return;
}



/* Entry: 105b4f31c; end: 105b4f40f; -[SCFriendsFeedChatActionHandler _prepareMediaForArroyoMessage:completion:] */

void FUN_105b4f31c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c243480();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c100380();
  _objc_release(param_3);
  if (lVar1 == 2) {
    puVar2 = PTR_PTR_1126b2cb0;
    func_0x00010bfabea0(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    (**(code **)(param_4 + 0x10))(param_4,0);
    _objc_release(puVar3);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b4f410; end: 105b4f48f; -[SCFriendsFeedChatActionHandler loadStartedForMediaContent:] */

void FUN_105b4f410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0a2ee0(uVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110e1f4d8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b4f490; end: 105b4f4d7; -[SCFriendsFeedChatActionHandler .cxx_destruct] */

void FUN_105b4f490(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b4f4d8; end: 105b4f5eb; -[SCFriendsFeedOpenCameraActionHandler initWithPresentingViewController:userSession:chatCameraScopeExposer:chatCameraScopeServices:botsOpenRearCameraInChatEnabled:] */

undefined1 *
FUN_105b4f4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ec0a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b4f5ec; end: 105b4f90b; -[SCFriendsFeedOpenCameraActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105b4f5ec(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    uVar11 = 0;
    goto LAB_105b4f81c;
  }
  uVar4 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c2980;
  _objc_opt_class(PTR_PTR_1126c2980);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  if (uVar3 == 0) {
    uVar11 = 0;
  }
  else {
    puVar7 = PTR_PTR_1126b1010;
    _objc_alloc();
    func_0x00010c02ec80();
    func_0x00010c1eb2c0();
    func_0x00010c182d40(puVar7);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105b4f90c;
    puStack_a8 = &UNK_1108d6f00;
    puStack_88 = &uStack_90;
    _objc_retain(puVar7);
    puStack_e8 = puVar5;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105b4f9f8;
    puStack_d0 = &UNK_1108d6f30;
    puStack_a0 = puVar7;
    puStack_98 = &uStack_90;
    _objc_retain(puVar7);
    puStack_c8 = puVar7;
    func_0x00010c0bffe0(uVar4);
    lVar8 = param_1 + 8;
    _objc_loadWeakRetained();
    if (lVar8 == 0) {
LAB_105b4f7e4:
      uVar11 = 0;
    }
    else {
      lVar9 = param_1 + 0x10;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar8);
      if (lVar9 == 0) goto LAB_105b4f7e4;
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c071800();
      if (iVar2 == 0) goto LAB_105b4f7e4;
      if (*(char *)(puStack_88 + 3) == '\x01') {
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf1f3c0();
        uVar1 = (undefined1)uVar11;
        _objc_release(uVar10);
      }
      else {
        uVar1 = 0;
      }
      _objc_initWeak(auStack_f0,param_1);
      puStack_128 = puVar5;
      uStack_120 = 0xc2000000;
      uStack_118 = 0x105b4faac;
      puStack_110 = &UNK_1108488f8;
      _objc_copyWeak(auStack_100,auStack_f0);
      _objc_retain(puVar7);
      puStack_108 = puVar7;
      uStack_f8 = uVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_128);
      _objc_release(puStack_108);
      _objc_destroyWeak(auStack_100);
      _objc_destroyWeak(auStack_f0);
      uVar11 = 1;
    }
    _objc_release(puStack_c8);
    _objc_release(puStack_a0);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(puVar7);
  }
  _objc_release(uVar3);
LAB_105b4f81c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar11;
}



/* Entry: 105b4f90c; end: 105b4f9f7;  */

void FUN_105b4f90c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 in_stack_00000000;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1eb2e0(uVar1);
  func_0x00010c1eb300(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  func_0x00010c1eb080(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
  func_0x00010c1b0840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1af8a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1d86a0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = in_stack_00000000;
  return;
}



/* Entry: 105b4f9f8; end: 105b4fb87;  */

void FUN_105b4f9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c1b2900(uVar1);
  func_0x00010c1eb300(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  func_0x00010c1eb080(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  func_0x00010c1b0840(*(undefined8 *)(param_1 + 0x20));
  if (param_5 - 1U < 3) {
    uVar1 = *(undefined8 *)(&UNK_10ddcaa00 + (param_5 - 1U) * 8);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d86b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPageSource__112653bd0,uVar1);
  return;
}



/* Entry: 105b4fb88; end: 105b4fbcf; -[SCFriendsFeedOpenCameraActionHandler dismissCameraScope:] */

void FUN_105b4fb88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b4fbd0; end: 105b4fc1b; -[SCFriendsFeedOpenCameraActionHandler .cxx_destruct] */

void FUN_105b4fbd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105b4fc1c; end: 105b4fcdf; -[SCFriendsFeedQuickAddOpenChatActionHandler initWithChatScopeExposer:chatScopeServices:presentingViewController:] */

undefined1 *
FUN_105b4fc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ec0b0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b4fce0; end: 105b4fe9b; -[SCFriendsFeedQuickAddOpenChatActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_105b4fce0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar6 == 0) goto LAB_105b4fd2c;
    uVar1 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2988;
    _objc_opt_class(PTR_PTR_1126c2988);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar6 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar1);
    if (uVar6 == 0) {
      uVar1 = 0;
      uVar6 = 0;
    }
    else {
      puVar2 = PTR_PTR_1126b3530;
      _objc_alloc(PTR_PTR_1126b3530);
      lVar4 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar4);
      uVar6 = 1;
      func_0x00010c038f40(puVar2);
      _objc_release(lVar4);
      puVar5 = PTR_PTR_1126b3520;
      _objc_alloc(PTR_PTR_1126b3520);
      func_0x00010bffdd20();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = uVar1;
      func_0x00010bf36840(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22b00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar1);
LAB_105b4fd2c:
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 105b4fe9c; end: 105b4febb; -[SCFriendsFeedQuickAddOpenChatActionHandler chatScopeDidDismiss:] */

void FUN_105b4fe9c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b4febc; end: 105b4fed3; -[SCFriendsFeedQuickAddOpenChatActionHandler presentingViewController] */

void FUN_105b4febc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b4fed4; end: 105b4fedf; -[SCFriendsFeedQuickAddOpenChatActionHandler setPresentingViewController:] */

void FUN_105b4fed4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105b4fee0; end: 105b4ff17; -[SCFriendsFeedQuickAddOpenChatActionHandler .cxx_destruct] */

void FUN_105b4fee0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b4ff18; end: 105b4ffbb; -[SCFriendsFeedRetryActionHandler initWithChatMessageActionHandler:nativeFeedManager:] */

undefined1 *
FUN_105b4ff18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec0b8;
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



/* Entry: 105b4ffbc; end: 105b50087; -[SCFriendsFeedRetryActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105b4ffbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be96f60(param_1,param_2,param_4);
    }
  }
  else {
    func_0x00010be96f40(param_1,param_2,param_4);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105b50088; end: 105b50133; -[SCFriendsFeedRetryActionHandler _retryForConversationIfPossible:] */

bool FUN_105b50088(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2990;
  _objc_opt_class(PTR_PTR_1126c2990);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13f360(uVar4);
    _objc_release(param_3);
  }
  _objc_release(uVar1);
  return uVar1 != 0;
}



/* Entry: 105b50134; end: 105b5022b; -[SCFriendsFeedRetryActionHandler _retryForMultiRecipientsIfPossible:] */

bool FUN_105b50134(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2998;
  _objc_opt_class(PTR_PTR_1126c2998);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    func_0x00010bf504a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x000100504554();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126c29a0;
    _objc_alloc(PTR_PTR_1126c29a0);
    func_0x00010c00bbe0();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13f880();
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return uVar1 != 0;
}



/* Entry: 105b5022c; end: 105b5023b;  */

void FUN_105b5022c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 105b5023c; end: 105b5026b; -[SCFriendsFeedRetryActionHandler .cxx_destruct] */

void FUN_105b5023c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


