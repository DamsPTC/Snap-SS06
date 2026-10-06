/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10550609c; end: 1055066fb; -[SCFriendmojiDataCoordinator friendmojiByCategory:] */

void FUN_10550609c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de6f38);
  if ((int)uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5198);
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc7958);
      if ((int)uVar3 != 0) {
        ppuVar5 = &PTR_PTR_110ccb918;
        goto LAB_10550619c;
      }
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc50d8);
      if ((int)uVar3 == 0) {
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc50b8);
        if ((int)uVar3 == 0) {
          uVar3 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc50f8);
          if ((int)uVar3 == 0) {
            uVar3 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5118);
            if ((int)uVar3 == 0) {
              uVar3 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5158);
              if ((int)uVar3 == 0) {
                uVar3 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5138
                                   );
                if ((int)uVar3 == 0) {
                  uVar3 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f5efd8);
                  if ((int)uVar3 == 0) {
                    uVar3 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f5f018);
                    if ((int)uVar3 == 0) {
                      uVar3 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110ecaf58);
                      if ((int)uVar3 == 0) {
                        uVar3 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110f5f078);
                        if ((int)uVar3 == 0) {
                          uVar3 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110ecaf98);
                          if ((int)uVar3 == 0) {
                            uVar3 = param_3;
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110f5f0d8);
                            if ((int)uVar3 == 0) {
                              uVar3 = param_3;
                              func_0x00010c0720c0(param_3,param_2,
                                                  &PTR____CFConstantStringClassReference_110ecafb8);
                              if ((int)uVar3 == 0) {
                                uVar3 = param_3;
                                func_0x00010c0720c0(param_3,param_2,
                                                    &PTR____CFConstantStringClassReference_110f5f0f8
                                                   );
                                if ((int)uVar3 == 0) {
                                  uVar3 = param_3;
                                  func_0x00010c0720c0(param_3,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110e2cb98);
                                  if ((int)uVar3 == 0) {
                                    uVar3 = param_3;
                                    func_0x00010c0720c0(param_3,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110f5f118);
                                    if ((int)uVar3 == 0) {
                                      uVar3 = param_3;
                                      func_0x00010c0720c0(param_3,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110f5f138);
                                      if ((int)uVar3 == 0) {
                                        uVar3 = param_3;
                                        func_0x00010c0720c0(param_3,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110f5ef98);
                                        if ((int)uVar3 == 0) {
                                          uVar3 = param_3;
                                          func_0x00010c0720c0(param_3,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110f15d18);
                                          if ((int)uVar3 == 0) {
                                            puVar6 = (undefined *)0x0;
                                            goto LAB_1055063e8;
                                          }
                                          puVar6 = *(undefined **)(param_1 + 0x98);
                                          if (puVar6 == (undefined *)0x0) {
                                            uVar1 = *(undefined8 *)(param_1 + 8);
                                            func_0x00010c269d40();
                                            _objc_retainAutoreleasedReturnValue();
                                            uVar3 = uVar1;
                                            func_0x00010bf8e4c0();
                                            _objc_retainAutoreleasedReturnValue();
                                            uVar4 = *(undefined8 *)(param_1 + 0x98);
                                            *(undefined8 *)(param_1 + 0x98) = uVar3;
                                            _objc_release(uVar4);
                                            _objc_release(uVar1);
                                            puVar6 = *(undefined **)(param_1 + 0x98);
                                          }
                                        }
                                        else {
                                          puVar6 = *(undefined **)(param_1 + 0x90);
                                          if (puVar6 == (undefined *)0x0) {
                                            uVar1 = *(undefined8 *)(param_1 + 8);
                                            func_0x00010c269d40();
                                            _objc_retainAutoreleasedReturnValue();
                                            uVar3 = uVar1;
                                            func_0x00010bf8e4a0();
                                            _objc_retainAutoreleasedReturnValue();
                                            uVar4 = *(undefined8 *)(param_1 + 0x90);
                                            *(undefined8 *)(param_1 + 0x90) = uVar3;
                                            _objc_release(uVar4);
                                            _objc_release(uVar1);
                                            lVar2 = *(long *)(param_1 + 0x90);
                                            func_0x00010c08fa60();
                                            if (lVar2 == 0) {
                                              _objc_retain(&
                                                  PTR____CFConstantStringClassReference_110f5efb8);
                                              uVar3 = *(undefined8 *)(param_1 + 0x90);
                                              *(undefined ***)(param_1 + 0x90) =
                                                   &PTR____CFConstantStringClassReference_110f5efb8;
                                              _objc_release(uVar3);
                                            }
                                            puVar6 = *(undefined **)(param_1 + 0x90);
                                          }
                                        }
                                        goto LAB_1055063e0;
                                      }
                                      ppuVar5 = &PTR_PTR_110ccb908;
                                    }
                                    else {
                                      ppuVar5 = &PTR_PTR_110ccb8f8;
                                    }
                                    goto LAB_10550619c;
                                  }
                                  puVar6 = *(undefined **)(param_1 + 0x88);
                                  if (puVar6 == (undefined *)0x0) {
                                    uVar1 = *(undefined8 *)(param_1 + 8);
                                    func_0x00010c269d40();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar3 = uVar1;
                                    func_0x00010bf8e5a0();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar4 = *(undefined8 *)(param_1 + 0x88);
                                    *(undefined8 *)(param_1 + 0x88) = uVar3;
                                    _objc_release(uVar4);
                                    _objc_release(uVar1);
                                    puVar6 = *(undefined **)(param_1 + 0x88);
                                  }
                                }
                                else {
                                  puVar6 = *(undefined **)(param_1 + 0x80);
                                  if (puVar6 == (undefined *)0x0) {
                                    uVar1 = *(undefined8 *)(param_1 + 8);
                                    func_0x00010c269d40();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar3 = uVar1;
                                    func_0x00010bf8e560();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar4 = *(undefined8 *)(param_1 + 0x80);
                                    *(undefined8 *)(param_1 + 0x80) = uVar3;
                                    _objc_release(uVar4);
                                    _objc_release(uVar1);
                                    puVar6 = *(undefined **)(param_1 + 0x80);
                                  }
                                }
                                goto LAB_1055063e0;
                              }
                              ppuVar5 = &PTR_PTR_110ccb8d8;
                            }
                            else {
                              ppuVar5 = &PTR_PTR_110ccb8c8;
                            }
                          }
                          else {
                            ppuVar5 = &PTR_PTR_110ccb8b8;
                          }
                        }
                        else {
                          ppuVar5 = &PTR_PTR_110ccb8a8;
                        }
                      }
                      else {
                        ppuVar5 = &PTR_PTR_110ccb898;
                      }
                    }
                    else {
                      ppuVar5 = &PTR_PTR_110ccb888;
                    }
                  }
                  else {
                    ppuVar5 = &PTR_PTR_110ccb878;
                  }
LAB_10550619c:
                  puVar6 = *ppuVar5;
                }
                else {
                  puVar6 = *(undefined **)(param_1 + 0x68);
                  if (puVar6 == (undefined *)0x0) {
                    uVar1 = *(undefined8 *)(param_1 + 8);
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar1;
                    func_0x00010bf8e460();
                    _objc_retainAutoreleasedReturnValue();
                    uVar4 = *(undefined8 *)(param_1 + 0x68);
                    *(undefined8 *)(param_1 + 0x68) = uVar3;
                    _objc_release(uVar4);
                    _objc_release(uVar1);
                    puVar6 = *(undefined **)(param_1 + 0x68);
                  }
                }
              }
              else {
                puVar6 = *(undefined **)(param_1 + 0x60);
                if (puVar6 == (undefined *)0x0) {
                  uVar1 = *(undefined8 *)(param_1 + 8);
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar1;
                  func_0x00010bf8e480();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = *(undefined8 *)(param_1 + 0x60);
                  *(undefined8 *)(param_1 + 0x60) = uVar3;
                  _objc_release(uVar4);
                  _objc_release(uVar1);
                  puVar6 = *(undefined **)(param_1 + 0x60);
                }
              }
            }
            else {
              puVar6 = *(undefined **)(param_1 + 0x40);
              if (puVar6 == (undefined *)0x0) {
                uVar1 = *(undefined8 *)(param_1 + 8);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar1;
                func_0x00010bf8e500();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = *(undefined8 *)(param_1 + 0x40);
                *(undefined8 *)(param_1 + 0x40) = uVar3;
                _objc_release(uVar4);
                _objc_release(uVar1);
                puVar6 = *(undefined **)(param_1 + 0x40);
              }
            }
          }
          else {
            puVar6 = *(undefined **)(param_1 + 0x48);
            if (puVar6 == (undefined *)0x0) {
              uVar1 = *(undefined8 *)(param_1 + 8);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar1;
              func_0x00010bf8e520();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = *(undefined8 *)(param_1 + 0x48);
              *(undefined8 *)(param_1 + 0x48) = uVar3;
              _objc_release(uVar4);
              _objc_release(uVar1);
              puVar6 = *(undefined **)(param_1 + 0x48);
            }
          }
        }
        else {
          puVar6 = *(undefined **)(param_1 + 0x58);
          if (puVar6 == (undefined *)0x0) {
            uVar1 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar1;
            func_0x00010bf8e3e0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 *)(param_1 + 0x58) = uVar3;
            _objc_release(uVar4);
            _objc_release(uVar1);
            puVar6 = *(undefined **)(param_1 + 0x58);
          }
        }
      }
      else {
        puVar6 = *(undefined **)(param_1 + 0x50);
        if (puVar6 == (undefined *)0x0) {
          uVar1 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010bf8e4e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x50) = uVar3;
          _objc_release(uVar4);
          _objc_release(uVar1);
          puVar6 = *(undefined **)(param_1 + 0x50);
        }
      }
    }
    else {
      puVar6 = *(undefined **)(param_1 + 0x70);
      if (puVar6 == (undefined *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010bf8e580();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = uVar3;
        _objc_release(uVar4);
        _objc_release(uVar1);
        puVar6 = *(undefined **)(param_1 + 0x70);
      }
    }
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x78);
    if (puVar6 == (undefined *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf8e540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = uVar3;
      _objc_release(uVar4);
      _objc_release(uVar1);
      puVar6 = *(undefined **)(param_1 + 0x78);
    }
  }
LAB_1055063e0:
  _objc_retain(puVar6);
LAB_1055063e8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055066fc; end: 1055069f3; -[SCFriendmojiDataCoordinator replacementEmojisForCategory:] */

void FUN_1055066fc(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
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
  _objc_retain(param_3);
  func_0x00010bf8c540();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  puVar9 = auStack_f0;
  puVar2 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,puVar9,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
        puVar3 = param_1;
        func_0x00010c0e00e0(param_1,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf6a960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        uVar5 = param_3;
        func_0x00010c0720c0(param_3,param_2,uVar11);
        puVar4 = puVar3;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf6a960(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c0720c0(puVar4,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar4);
        if (((uVar5 & 1) == 0) && (((ulong)puVar7 & 1) == 0)) {
          puVar4 = puVar3;
          func_0x00010c247520();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar4);
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar9 = auStack_f0;
      puVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,puVar9,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  puVar2 = param_1;
  _objc_release(param_1);
  FUN_105508384();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ba280;
  puVar3 = puVar1;
  func_0x00010bfc2220(PTR_PTR_1126ba280,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  uVar5 = param_3;
  func_0x00010c08fa60();
  if (uVar5 != 0) {
    puVar2 = param_1;
    func_0x00010c0e00e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf6a960();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined1 *)0x0;
    puVar3 = puVar4;
    func_0x00010c066b00(puVar10,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  puVar2 = puVar10;
  func_0x00010bf51e00();
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  puVar8 = puVar9;
  func_0x00010c08fa60();
  if (puVar8 == (undefined1 *)0x0) goto LAB_105506ccc;
  lVar12 = *(long *)(param_3 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 != 0) {
    puVar8 = puVar9;
    func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc5118);
    if ((int)puVar8 == 0) {
      puVar8 = puVar9;
      func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc50f8);
      if ((int)puVar8 == 0) {
        puVar8 = puVar9;
        func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc50d8);
        if ((int)puVar8 == 0) {
          puVar8 = puVar9;
          func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc50b8);
          if ((int)puVar8 == 0) {
            puVar8 = puVar9;
            func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc5158);
            if ((int)puVar8 == 0) {
              puVar8 = puVar9;
              func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc5138);
              if ((int)puVar8 == 0) {
                puVar8 = puVar9;
                func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc5198)
                ;
                if ((int)puVar8 == 0) {
                  puVar8 = puVar9;
                  func_0x00010c0720c0(puVar9,param_2,
                                      &PTR____CFConstantStringClassReference_110de6f38);
                  if ((int)puVar8 == 0) {
                    puVar8 = puVar9;
                    func_0x00010c0720c0(puVar9,param_2,
                                        &PTR____CFConstantStringClassReference_110f5f0f8);
                    if ((int)puVar8 == 0) {
                      puVar8 = puVar9;
                      func_0x00010c0720c0(puVar9,param_2,
                                          &PTR____CFConstantStringClassReference_110e2cb98);
                      if ((int)puVar8 == 0) {
                        puVar8 = puVar9;
                        func_0x00010c0720c0(puVar9,param_2,
                                            &PTR____CFConstantStringClassReference_110f5ef98);
                        if ((int)puVar8 == 0) {
                          puVar8 = puVar9;
                          func_0x00010c0720c0(puVar9,param_2,
                                              &PTR____CFConstantStringClassReference_110f15d18);
                          if (((ulong)puVar8 & 1) == 0) {
                            func_0x00010be3d920(param_3);
                            goto LAB_105506cc4;
                          }
                          uVar11 = *(undefined8 *)(param_3 + 0x98);
                          _objc_retain(uVar11);
                          func_0x00010c194540(lVar12,param_2,puVar3);
                        }
                        else {
                          uVar11 = *(undefined8 *)(param_3 + 0x90);
                          _objc_retain(uVar11);
                          func_0x00010c194520(lVar12,param_2,puVar3);
                        }
                      }
                      else {
                        uVar11 = *(undefined8 *)(param_3 + 0x88);
                        _objc_retain(uVar11);
                        func_0x00010c194620(lVar12,param_2,puVar3);
                      }
                    }
                    else {
                      uVar11 = *(undefined8 *)(param_3 + 0x80);
                      _objc_retain(uVar11);
                      func_0x00010c1945e0(lVar12,param_2,puVar3);
                    }
                  }
                  else {
                    uVar11 = *(undefined8 *)(param_3 + 0x78);
                    _objc_retain(uVar11);
                    func_0x00010c1945c0(lVar12,param_2,puVar3);
                  }
                }
                else {
                  uVar11 = *(undefined8 *)(param_3 + 0x70);
                  _objc_retain(uVar11);
                  func_0x00010c194600(lVar12,param_2,puVar3);
                }
              }
              else {
                uVar11 = *(undefined8 *)(param_3 + 0x60);
                _objc_retain(uVar11);
                func_0x00010c1944e0(lVar12,param_2,puVar3);
              }
            }
            else {
              uVar11 = *(undefined8 *)(param_3 + 0x50);
              _objc_retain(uVar11);
              func_0x00010c194500(lVar12,param_2,puVar3);
            }
          }
          else {
            uVar11 = *(undefined8 *)(param_3 + 0x58);
            _objc_retain(uVar11);
            func_0x00010c1944c0(lVar12,param_2,puVar3);
          }
        }
        else {
          uVar11 = *(undefined8 *)(param_3 + 0x50);
          _objc_retain(uVar11);
          func_0x00010c194560(lVar12,param_2,puVar3);
        }
      }
      else {
        uVar11 = *(undefined8 *)(param_3 + 0x48);
        _objc_retain(uVar11);
        func_0x00010c1945a0(lVar12,param_2,puVar3);
      }
    }
    else {
      uVar11 = *(undefined8 *)(param_3 + 0x40);
      _objc_retain(uVar11);
      func_0x00010c194580(lVar12,param_2,puVar3);
    }
    func_0x00010be3d920(param_3);
    _objc_release(uVar11);
  }
LAB_105506cc4:
  _objc_release(lVar12);
LAB_105506ccc:
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1055069f4; end: 105506cf7; -[SCFriendmojiDataCoordinator updateFriendmoji:categoryName:] */

void FUN_1055069f4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c08fa60();
  if (uVar1 == 0) goto LAB_105506ccc;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc5118);
    if ((int)uVar1 == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc50f8);
      if ((int)uVar1 == 0) {
        uVar1 = param_4;
        func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc50d8);
        if ((int)uVar1 == 0) {
          uVar1 = param_4;
          func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc50b8);
          if ((int)uVar1 == 0) {
            uVar1 = param_4;
            func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc5158);
            if ((int)uVar1 == 0) {
              uVar1 = param_4;
              func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc5138);
              if ((int)uVar1 == 0) {
                uVar1 = param_4;
                func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc5198
                                   );
                if ((int)uVar1 == 0) {
                  uVar1 = param_4;
                  func_0x00010c0720c0(param_4,param_2,
                                      &PTR____CFConstantStringClassReference_110de6f38);
                  if ((int)uVar1 == 0) {
                    uVar1 = param_4;
                    func_0x00010c0720c0(param_4,param_2,
                                        &PTR____CFConstantStringClassReference_110f5f0f8);
                    if ((int)uVar1 == 0) {
                      uVar1 = param_4;
                      func_0x00010c0720c0(param_4,param_2,
                                          &PTR____CFConstantStringClassReference_110e2cb98);
                      if ((int)uVar1 == 0) {
                        uVar1 = param_4;
                        func_0x00010c0720c0(param_4,param_2,
                                            &PTR____CFConstantStringClassReference_110f5ef98);
                        if ((int)uVar1 == 0) {
                          uVar1 = param_4;
                          func_0x00010c0720c0(param_4,param_2,
                                              &PTR____CFConstantStringClassReference_110f15d18);
                          if ((uVar1 & 1) == 0) {
                            func_0x00010be3d920(param_1);
                            goto LAB_105506cc4;
                          }
                          uVar3 = *(undefined8 *)(param_1 + 0x98);
                          _objc_retain(uVar3);
                          func_0x00010c194540(lVar2,param_2,param_3);
                        }
                        else {
                          uVar3 = *(undefined8 *)(param_1 + 0x90);
                          _objc_retain(uVar3);
                          func_0x00010c194520(lVar2,param_2,param_3);
                        }
                      }
                      else {
                        uVar3 = *(undefined8 *)(param_1 + 0x88);
                        _objc_retain(uVar3);
                        func_0x00010c194620(lVar2,param_2,param_3);
                      }
                    }
                    else {
                      uVar3 = *(undefined8 *)(param_1 + 0x80);
                      _objc_retain(uVar3);
                      func_0x00010c1945e0(lVar2,param_2,param_3);
                    }
                  }
                  else {
                    uVar3 = *(undefined8 *)(param_1 + 0x78);
                    _objc_retain(uVar3);
                    func_0x00010c1945c0(lVar2,param_2,param_3);
                  }
                }
                else {
                  uVar3 = *(undefined8 *)(param_1 + 0x70);
                  _objc_retain(uVar3);
                  func_0x00010c194600(lVar2,param_2,param_3);
                }
              }
              else {
                uVar3 = *(undefined8 *)(param_1 + 0x60);
                _objc_retain(uVar3);
                func_0x00010c1944e0(lVar2,param_2,param_3);
              }
            }
            else {
              uVar3 = *(undefined8 *)(param_1 + 0x50);
              _objc_retain(uVar3);
              func_0x00010c194500(lVar2,param_2,param_3);
            }
          }
          else {
            uVar3 = *(undefined8 *)(param_1 + 0x58);
            _objc_retain(uVar3);
            func_0x00010c1944c0(lVar2,param_2,param_3);
          }
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x50);
          _objc_retain(uVar3);
          func_0x00010c194560(lVar2,param_2,param_3);
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar3);
        func_0x00010c1945a0(lVar2,param_2,param_3);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar3);
      func_0x00010c194580(lVar2,param_2,param_3);
    }
    func_0x00010be3d920(param_1);
    _objc_release(uVar3);
  }
LAB_105506cc4:
  _objc_release(lVar2);
LAB_105506ccc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105506cf8; end: 105506e27; -[SCFriendmojiDataCoordinator resetToDefaultFriendmoji] */

void FUN_105506cf8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c194580(lVar1,param_2,&PTR____CFConstantStringClassReference_110efd458);
    func_0x00010c1945a0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e288d8);
    func_0x00010c194560(lVar1,param_2,&PTR____CFConstantStringClassReference_110e28998);
    func_0x00010c1944c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e45e38);
    func_0x00010c194500(lVar1,param_2,&PTR____CFConstantStringClassReference_110f5ef18);
    func_0x00010c1944e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e8c618);
    func_0x00010c194600(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcb2f8);
    func_0x00010c1945c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f5ef58);
    func_0x00010c194620(lVar1,param_2,&PTR____CFConstantStringClassReference_110f5ef78);
    func_0x00010c1945e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f0a498);
    func_0x00010c194520(lVar1,param_2,&PTR____CFConstantStringClassReference_110f5efb8);
    func_0x00010c194540(lVar1,param_2,&PTR____CFConstantStringClassReference_110dc9818);
    func_0x00010be3d920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105506e28; end: 105507047; -[SCFriendmojiDataCoordinator _buildFriendmojiEmojiSnapshot] */

void FUN_105506e28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar2 = puVar1;
  func_0x000105507960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar6 = *plStack_1a0;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        uVar5 = *(undefined8 *)(lStack_1a8 + (long)puVar7 * 8);
        lVar4 = param_1;
        func_0x00010bfb96e0(param_1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c1d0640(puVar1,param_2,lVar4,uVar5);
        }
        _objc_release(lVar4);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release();
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  FUN_105508384();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar6 = *plStack_1e0;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        uVar5 = *(undefined8 *)(lStack_1e8 + (long)puVar7 * 8);
        lVar4 = param_1;
        func_0x00010bfb96e0(param_1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c1d0640(puVar1,param_2,lVar4,uVar5);
        }
        _objc_release(lVar4);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_168,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined8 *)(puVar1 + 0x40) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x48);
  *(undefined8 *)(puVar1 + 0x48) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x50);
  *(undefined8 *)(puVar1 + 0x50) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x58);
  *(undefined8 *)(puVar1 + 0x58) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x60);
  *(undefined8 *)(puVar1 + 0x60) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x68);
  *(undefined8 *)(puVar1 + 0x68) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x70);
  *(undefined8 *)(puVar1 + 0x70) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x78);
  *(undefined8 *)(puVar1 + 0x78) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x80);
  *(undefined8 *)(puVar1 + 0x80) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x88);
  *(undefined8 *)(puVar1 + 0x88) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x90);
  *(undefined8 *)(puVar1 + 0x90) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + 0x98);
  *(undefined8 *)(puVar1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105507048; end: 1055070ef; -[SCFriendmojiDataCoordinator _invalidateFriendmojiByCategoryCache] */

void FUN_105507048(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055070f0; end: 10550758f; -[SCFriendmojiDataCoordinator _registerFriendmojiFeatureSettingsObservation] */

void FUN_1055070f0(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  long lVar12;
  undefined **unaff_x25;
  undefined1 *puVar13;
  undefined *unaff_x26;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  long lStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x30) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dc50b8;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_190 = puVar2;
    puStack_130 = puVar2;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dc50d8;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_188 = puVar3;
    puStack_128 = puVar3;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dc50f8;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_180 = puVar2;
    puStack_120 = puVar2;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dc5118;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_178 = puVar3;
    puStack_118 = puVar3;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110dc5138;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_170 = puVar2;
    puStack_110 = puVar2;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110dc5158;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_108 = puVar3;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dc5198;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_100 = puVar2;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110de6f38;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_f8 = puVar4;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f5f0f8;
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_f0 = puVar5;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e2cb98;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_e8 = puVar6;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f5ef98;
    unaff_x26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_e0 = puVar7;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f15d18;
    unaff_x21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_d8 = unaff_x26;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x26);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puStack_170);
    _objc_release(puStack_178);
    _objc_release(puStack_180);
    _objc_release(puStack_188);
    _objc_release(puStack_190);
    unaff_x22 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar2 = unaff_x21;
    func_0x00010bf002e0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    unaff_x23 = auStack_138;
    _objc_initWeak(unaff_x23,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_105507590;
    puStack_150 = &UNK_110851330;
    unaff_x25 = &puStack_168;
    param_2 = auStack_138;
    _objc_copyWeak(auStack_140);
    _objc_retain(unaff_x21);
    lVar8 = lVar1;
    puStack_148 = unaff_x21;
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar8;
    _objc_release(uVar11);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(puStack_148);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_138);
  lVar8 = lVar1;
  __Unwind_Resume();
  pcStack_198 = FUN_105507590;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e0 = unaff_x26;
  ppuStack_1d8 = unaff_x25;
  puStack_1d0 = unaff_x24;
  puStack_1c8 = unaff_x23;
  puStack_1c0 = unaff_x22;
  puStack_1b8 = unaff_x21;
  lStack_1b0 = param_1;
  lStack_1a8 = lVar1;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar1 = lVar8 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (puVar9 = param_2, func_0x00010bf529e0(), puVar9 != (undefined1 *)0x0)) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    _objc_retain(param_2);
    puVar9 = param_2;
    func_0x00010bf52a60();
    if (puVar9 != (undefined1 *)0x0) {
      lVar12 = *plStack_2a0;
      do {
        puVar13 = (undefined1 *)0x0;
        do {
          if (*plStack_2a0 != lVar12) {
            _objc_enumerationMutation(param_2);
          }
          lVar10 = *(long *)(lVar8 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 != 0) {
            func_0x00010befa120(*(undefined8 *)(lVar1 + 0x18));
          }
          _objc_release(lVar10);
          puVar13 = puVar13 + 1;
        } while (puVar9 != puVar13);
        puVar9 = param_2;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined1 *)0x0);
    }
    _objc_release(param_2);
    func_0x00010be9aea0(lVar1);
  }
  _objc_release(lVar1);
  puVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_1055076f0;
  if ((puVar9[0x38] & 1) == 0) {
    puVar9[0x38] = 1;
    puVar13 = auStack_2d8;
    lStack_2d0 = lVar1;
    puStack_2c8 = param_2;
    ppuStack_2c0 = &puStack_1a0;
    _objc_initWeak(puVar13,puVar9);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_2e0,auStack_2d8);
    func_0x00010c0f7fc0(puVar13);
    _objc_release(puVar13);
    _objc_destroyWeak(auStack_2e0);
    _objc_destroyWeak(auStack_2d8);
  }
  return;
}



/* Entry: 105507590; end: 1055076ef;  */

void FUN_105507590(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 != 0)) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(param_2);
          }
          lVar3 = *(long *)(param_1 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010befa120(*(undefined8 *)(lVar1 + 0x18));
          }
          _objc_release(lVar3);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = param_2;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_2);
    func_0x00010be9aea0(lVar1);
  }
  _objc_release(lVar1);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1055076f0;
  if ((*(byte *)(lVar2 + 0x38) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x38) = 1;
    puVar4 = auStack_148;
    lStack_140 = lVar1;
    lStack_138 = param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_initWeak(puVar4,lVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_150,auStack_148);
    func_0x00010c0f7fc0(puVar4);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
  }
  return;
}



/* Entry: 1055076f0; end: 1055077bf; -[SCFriendmojiDataCoordinator _scheduleCoalescedFriendmojiSettingsDidChangeFromFeatureSettings] */

void FUN_1055076f0(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    puVar1 = auStack_28;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1055077c0; end: 10550786f;  */

void FUN_1055077c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf51e00();
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010be3d920(param_1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2 != 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105507870; end: 1055079b3; -[SCFriendmojiDataCoordinator .cxx_destruct] */

void FUN_105507870(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
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



/* Entry: 1055079b4; end: 105508383;  */

void FUN_1055079b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  long lVar50;
  
  lVar50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001055092d0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001055092e8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000105509300();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000105509000();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105509018();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000105509030();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000105509048();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000105509060();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000105509078();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x000105509090();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x0001055090a8();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x0001055090c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x0001055090d8();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x0001055090f0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x000105509108();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x000105509120();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x000105509138();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x000105509150();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x000105509168();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x000105509180();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x000105509198();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar28;
  func_0x000105509288();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x0001055092a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar30;
  func_0x0001055092b8();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar32;
  func_0x000105509240();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x000105509258();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar34;
  func_0x000105509270();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar36;
  func_0x0001055091b0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar37;
  func_0x0001055091c8();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar38;
  func_0x0001055091e0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar40;
  func_0x0001055091f8();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = puVar41;
  func_0x000105509210();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar42;
  func_0x000105509228();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar44;
  func_0x000105509318();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar45;
  func_0x000105509330();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar46;
  func_0x000105509348();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136bc848;
  puRam00000001136bc848 = puVar49;
  _objc_release(uVar1);
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar50) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136bc860 != -1) {
    func_0x00010002a2fc(0x1136bc860,&PTR___NSConcreteGlobalBlock_110893800);
  }
  uVar1 = uRam00000001136bc858;
  _objc_retain(uRam00000001136bc858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105508384; end: 1055083d7;  */

void FUN_105508384(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136bc860 != -1) {
    func_0x00010002a2fc(0x1136bc860,&PTR___NSConcreteGlobalBlock_110893800);
  }
  uVar1 = uRam00000001136bc858;
  _objc_retain(uRam00000001136bc858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055083d8; end: 105508567;  */

undefined8 *** FUN_1055083d8(void)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined ***pppuVar5;
  undefined8 **ppuVar6;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dc4fb8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f5eff8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f5f038;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f5f058;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f5f098;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f5f0b8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dc4f78;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dcb918;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f5eff8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110efd518;
  pppuVar5 = &ppuStack_68;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuRam00000001136bc858;
  pppuRam00000001136bc858 = (undefined8 ***)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar5);
  puStack_f8 = PTR_PTR_1126e8c88;
  pppuVar3 = &ppuStack_100;
  ppuStack_100 = pppuVar2;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined8 ***)0x0) {
    _objc_initWeak(auStack_108,pppuVar3);
    _objc_retain(pppuVar5);
    ppuVar4 = pppuVar3[1];
    pppuVar3[1] = pppuVar5;
    _objc_release(ppuVar4);
    ppuVar4 = (undefined8 **)PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_110,auStack_108);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = pppuVar3[2];
    pppuVar3[2] = ppuVar4;
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release(pppuVar5);
  return pppuVar3;
}



/* Entry: 105508568; end: 105508683; -[SCFriendmojiDataProvider initWithCircumstanceEngine:] */

undefined8 * FUN_105508568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8c88;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105508684; end: 1055086c3;  */

void FUN_105508684(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be14040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055086c4; end: 105508707; -[SCFriendmojiDataProvider streakExpirationTimerInSeconds] */

long FUN_1055086c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  return lVar2 * 0xe10;
}



/* Entry: 105508708; end: 105508797; -[SCFriendmojiDataProvider isStreakExpiringWithExpirationTimestamp:] */

bool FUN_105508708(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c25bf20();
  _objc_release(puVar1);
  return param_1 < (double)param_2;
}



/* Entry: 105508798; end: 1055087d7; -[SCFriendmojiDataProvider _fetchSnapStreaksExpiration] */

void FUN_105508798(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110de7b98,0x13,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 1055087d8; end: 105508807; -[SCFriendmojiDataProvider .cxx_destruct] */

void FUN_1055087d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105508808; end: 105508a17; +[SCFriendmojiEmoijes getAllEmojies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105508808(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
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
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b61c0;
  func_0x00010bf61040();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar2 = puVar1;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar10 = *plStack_1a0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        lVar4 = *(long *)(lStack_1a8 + (long)puVar11 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010bf8e2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar9 = *plStack_1e0;
          do {
            lVar7 = 0;
            do {
              if (*plStack_1e0 != lVar9) {
                _objc_enumerationMutation(lVar4);
              }
              uVar6 = *(undefined8 *)(lStack_1e8 + lVar7 * 8);
              func_0x00010c26b700(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar8,param_2,uVar6);
              _objc_release(uVar6);
              lVar7 = lVar7 + 1;
            } while (lVar5 != lVar7);
            lVar5 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar5 != 0);
        }
        _objc_release(lVar4);
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar3);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  func_0x00010c12d500(puVar8,param_2,param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained();
    if (param_3 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126ba288;
      _objc_alloc(PTR_PTR_1126ba288);
      lVar10 = param_3 + _DAT_112724fa4;
      _objc_loadWeakRetained(lVar10);
      lVar5 = lVar10;
      func_0x00010bfa2b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011c80(puVar8,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar10);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105508a18; end: 105508aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105508a18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ba288;
    _objc_alloc(PTR_PTR_1126ba288);
    lVar1 = param_1 + _DAT_112724fa4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011c80(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105508ab0; end: 105508adf;  */

void FUN_105508ab0(void)

{
  _objc_alloc(PTR_PTR_1126ba290);
  func_0x00010c016000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105508ae0; end: 105508bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105508ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ba298;
    _objc_alloc(PTR_PTR_1126ba298);
    lVar1 = param_1 + _DAT_112724fa8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe1e0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105508bf4; end: 105508d43; -[SCFriendmojiServiceProvider _friendmojiPresenterWithFriendmojiRegistry:friendmojiDataProvider:decoratorsFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105508bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126ba2b0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar4 = param_1 + _DAT_112724f98;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112724f9c;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016180(puVar1,param_2,uVar2,puVar3,param_4,lVar5,lVar6,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105508d44; end: 105508daf; -[SCFriendmojiServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105508d44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724f94,0);
  _objc_destroyWeak(param_1 + _DAT_112724f9c);
  _objc_destroyWeak(param_1 + _DAT_112724f98);
  _objc_destroyWeak(param_1 + _DAT_112724fa8);
  _objc_destroyWeak(param_1 + _DAT_112724fa4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724fa0);
  return;
}



/* Entry: 105508db0; end: 105508e23; -[SCUserFriendmojiRegistry initWithFriendmojiDataCoordinator:] */

undefined1 * FUN_105508db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8c90;
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



/* Entry: 105508e24; end: 105508ea3; -[SCUserFriendmojiRegistry emojiForFriendmojiType:] */

void FUN_105508e24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb96e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105508ea4; end: 105508eeb; -[SCUserFriendmojiRegistry observeFriendmojiEmojis] */

void FUN_105508ea4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105508eec; end: 105508ef7; -[SCUserFriendmojiRegistry .cxx_destruct] */

void FUN_105508eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105508ef8; end: 105508f9b; -[SCFriendmojiIdentifierData initWithAssembledFriendmojis:streak:] */

undefined1 *
FUN_105508ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8c98;
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



/* Entry: 105508f9c; end: 105508fbf; -[SCFriendmojiIdentifierData copyWithZone:] */

undefined8 FUN_105508f9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105508fc0; end: 105508fc7; -[SCFriendmojiIdentifierData assembledFriendmojis] */

undefined8 FUN_105508fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105508fc8; end: 105508fcf; -[SCFriendmojiIdentifierData streak] */

undefined8 FUN_105508fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105508fd0; end: 105508fff; -[SCFriendmojiIdentifierData .cxx_destruct] */

void FUN_105508fd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105509000; end: 10550935f;  */

void FUN_105509000(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de7bd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110de7bd8,
                      &PTR____CFConstantStringClassReference_110de7bb8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105509360; end: 105509403;  */

void FUN_105509360(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf5a660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = puVar1;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bf5a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b4ca0();
    func_0x000100bc47dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105509404; end: 10550956f;  */

undefined1 * FUN_105509404(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  long lVar10;
  long lVar11;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
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
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(unaff_x24);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar2 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_180;
  pcStack_138 = FUN_105509570;
  puStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  puStack_158 = puVar1;
  puStack_150 = puVar3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puStack_178 = PTR_PTR_1126e8ca0;
  lStack_180 = lVar2;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    puVar5 = (undefined1 *)puVar6;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)plVar4 + 8);
    *(undefined1 **)((long)plVar4 + 8) = puVar5;
    _objc_release(uVar9);
    _objc_retain(puVar7);
    uVar9 = *(undefined8 *)((long)plVar4 + 0x10);
    *(undefined1 **)((long)plVar4 + 0x10) = puVar7;
    _objc_release(uVar9);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)((long)plVar4 + 0x18);
    *(undefined8 *)((long)plVar4 + 0x18) = uVar8;
    _objc_release(uVar9);
    _objc_retain(in_x5);
    uVar9 = *(undefined8 *)((long)plVar4 + 0x28);
    *(undefined8 *)((long)plVar4 + 0x28) = in_x5;
    _objc_release(uVar9);
    _objc_retain(in_x6);
    uVar9 = *(undefined8 *)((long)plVar4 + 0x20);
    *(undefined8 *)((long)plVar4 + 0x20) = in_x6;
    _objc_release(uVar9);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return (undefined1 *)plVar4;
}



/* Entry: 105509570; end: 105509697; -[SCChatGroupConstructor initWithUserId:snapchatterUserInfoProvider:customColorsFetcher:groupGraphene:crashLogger:] */

undefined1 *
FUN_105509570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8ca0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105509698; end: 10550a03b; -[SCChatGroupConstructor chatGroupFromConversationId:conversationMetadata:lastInteractionTimestamp:lastSenderTimestampByParticipant:snapchatterMap:] */

void FUN_105509698(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

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
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lStack_1d0;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lStack_1d0 = 0;
  }
  else {
    lStack_1d0 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_10550a03c;
  puStack_160 = &UNK_110893900;
  lStack_158 = param_1;
  _objc_retain(param_4);
  lStack_150 = param_4;
  _objc_retain(param_7);
  lVar2 = lVar1;
  lStack_148 = param_7;
  func_0x00010bd86420(lVar1,&puStack_178);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c086fa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar27;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_10550a114;
  puStack_198 = &UNK_110893930;
  lStack_190 = param_1;
  _objc_retain(param_4);
  lStack_188 = param_4;
  _objc_retain(param_7);
  lVar3 = lVar1;
  lStack_180 = param_7;
  func_0x00010bd86420(lVar1,&puStack_1b0);
  _objc_release(lVar1);
  func_0x00010bf50580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar27 = PTR_PTR_1126ba2b8;
  _objc_alloc();
  lVar1 = param_4;
  func_0x00010bf370e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69d60();
  lVar4 = param_4;
  func_0x00010bf370e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69d60();
  lVar5 = param_4;
  func_0x00010bf370e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69d60();
  lVar6 = param_4;
  func_0x00010bf28800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69d60();
  lVar7 = param_4;
  func_0x000107d062b4();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x000107d06334();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_4;
  FUN_105509360();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_4;
  func_0x00010bf1d700();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010050471c();
  _objc_release(lVar10);
  lVar10 = param_4;
  func_0x00010c0dada0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = &PTR___NSConcreteGlobalBlock_110893a40;
  lVar12 = lVar10;
  func_0x00010050471c();
  _objc_release(lVar10);
  uVar24 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(uVar24);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = param_4;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar10;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar28 = *plStack_130;
    do {
      lVar30 = 0;
      do {
        if (*plStack_130 != lVar28) {
          _objc_enumerationMutation(lVar10);
        }
        uVar14 = *(ulong *)(lStack_138 + lVar30 * 8);
        func_0x00010c0f4a60();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        uVar14 = uVar15;
        func_0x00010c0720c0();
        if ((uVar14 & 1) == 0) {
          lVar16 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar16 == 0) {
            _objc_release(uVar15);
            goto LAB_105509a98;
          }
        }
        _objc_release(uVar15);
        lVar30 = lVar30 + 1;
      } while (lVar13 != lVar30);
      lVar13 = lVar10;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
LAB_105509a98:
  _objc_release(lVar10);
  _objc_release(uVar24);
  _objc_release(param_7);
  func_0x00010c076ee0();
  func_0x00010bf33620();
  lVar10 = param_4;
  func_0x00010bf33480();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar10;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_4;
  func_0x00010bf12980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar30 = param_4;
  func_0x00010bf508e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar30 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    lVar30 = param_4;
    func_0x00010bf508e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar30;
    func_0x00010c067fc0();
    _objc_release(lVar30);
    puVar25 = PTR_PTR_1126ba2e0;
    if (lVar16 == 4) {
      func_0x00010c0c7480();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar16 == 7) {
      lVar30 = param_4;
      func_0x00010bf50900(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar30;
      func_0x00010c11a300();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar16;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = param_4;
      func_0x00010bf50900(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar26;
      func_0x00010c11a300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06fd60();
      func_0x00010c11a320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar29);
      _objc_release(lVar26);
      _objc_release(lVar20);
      _objc_release(lVar16);
      _objc_release(lVar30);
    }
    else if (lVar16 == 6) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar30 = param_4;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar30;
      func_0x00010bf52a60();
      if (lVar16 == 0) {
        puVar25 = (undefined *)0x0;
        lVar20 = lVar30;
      }
      else {
        lVar26 = *plStack_130;
        do {
          lVar29 = 0;
          do {
            if (*plStack_130 != lVar26) {
              _objc_enumerationMutation(lVar30);
            }
            uVar17 = *(undefined8 *)(lStack_138 + lVar29 * 8);
            func_0x00010c0f4a60(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar24 = uVar17;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = param_7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar24);
            _objc_release(uVar17);
            lVar19 = lVar18;
            func_0x00010bf5b820();
            _objc_retainAutoreleasedReturnValue();
            lVar20 = lVar19;
            func_0x00010c116cc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar19);
            lVar19 = lVar20;
            func_0x00010c08fa60();
            if (lVar19 != 0) {
              _objc_retain(lVar20);
              lVar16 = lVar18;
              func_0x00010bf5b820(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf15520();
              _objc_release(lVar16);
              puVar25 = PTR_PTR_1126ba2e0;
              func_0x00010bf20e80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar20);
              _objc_release(lVar18);
              _objc_release(lVar30);
              goto LAB_105509e14;
            }
            _objc_release(lVar20);
            _objc_release(lVar18);
            lVar29 = lVar29 + 1;
          } while (lVar16 != lVar29);
          lVar16 = lVar30;
          func_0x00010bf52a60();
        } while (lVar16 != 0);
        puVar25 = (undefined *)0x0;
        lVar20 = lVar30;
      }
LAB_105509e14:
      _objc_release(lVar20);
    }
    else {
      puVar25 = (undefined *)0x0;
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  lVar30 = param_4;
  func_0x00010bf508e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018d40();
  _objc_release(lVar30);
  _objc_release(puVar25);
  _objc_release(lVar28);
  _objc_release(lVar13);
  _objc_release(lVar10);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lStack_180);
  _objc_release(lStack_188);
  _objc_release(lVar2);
  _objc_release(lStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_1d0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar27 = *(undefined **)(param_3 + 0x20);
    _objc_retain(ppuVar23);
    ppuVar21 = ppuVar23;
    func_0x00010c0f4a60(ppuVar23);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41120(ppuVar23);
    func_0x00010bf40c40(ppuVar23);
    _objc_release(ppuVar23);
    func_0x00010bdee4c0(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 10550a03c; end: 10550a113;  */

void FUN_10550a03c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0f4a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41120(param_2);
  func_0x00010bf40c40(param_2);
  _objc_release(param_2);
  func_0x00010bdee4c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10550a114; end: 10550a1a7;  */

void FUN_10550a114(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f4a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdee4c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550a1a8; end: 10550a743; -[SCChatGroupConstructor _createGroupParticipantForUserId:orderIndex:conversationMetadata:snapchatterMap:colorOption:color:] */

void FUN_10550a1a8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,int param_7,int param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_f0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010c0720c0();
  if (((ulong)puVar1 & 1) == 0) {
    lVar3 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_f0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c085be0(param_5);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_3;
  func_0x00010c0720c0();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_10550a744;
  uStack_78 = 0x10550a754;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ba2c0;
  puStack_70 = puVar5;
  func_0x00010bfad6a0(PTR_PTR_1126ba2c0);
  _objc_retainAutoreleasedReturnValue();
  if (param_7 != 0) {
    puVar6 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf61380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar5 != (undefined *)0x0) {
      _objc_retain(puVar5);
      _objc_release(puVar1);
      func_0x00010c0bddc0(puVar5);
      puVar1 = puVar5;
    }
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126ba2d8;
  if (param_8 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puStack_90[5];
    puStack_90[5] = puVar5;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ba2c0;
    func_0x00010bfad6a0(PTR_PTR_1126ba2c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar5;
    puVar5 = PTR_PTR_1126ba2d8;
  }
  PTR_PTR_1126ba2d8 = puVar5;
  if (lVar3 == 0) {
    if ((int)puVar4 == 0) {
      _objc_alloc(puVar5);
      func_0x00010c05b780();
    }
    else {
      puVar5 = param_3;
      FUN_10550a7ec(param_3,param_4,puStack_90[5],puVar1,puStack_f0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar2 = lVar3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR_PTR_1126ba2d0;
    if (lVar2 == 0) {
      func_0x00010c132900(*(undefined8 *)(param_1 + 0x20));
      puVar5 = PTR_PTR_1126ba2c8;
      func_0x00010c0f4a80(PTR_PTR_1126ba2c8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar7);
      _objc_release(puVar6);
      puVar5 = PTR_PTR_1126ba2d0;
    }
    PTR_PTR_1126ba2d0 = puVar5;
    if ((int)puVar4 == 0) {
      _objc_alloc(puVar5);
      lVar2 = lVar3;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      FUN_10550b768();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar3;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1c000();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar3;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf1af00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar3;
      func_0x00010901e928();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar3;
      func_0x00010901d650();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05b7a0(puVar5);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar2);
    }
    else {
      puVar5 = param_3;
      FUN_10550a7ec(param_3,param_4,puStack_90[5],puVar1,puStack_f0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puStack_70);
  _objc_release(puStack_f0);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10550a744; end: 10550a75b;  */

void FUN_10550a744(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10550a75c; end: 10550a7eb;  */

void FUN_10550a75c(long param_1,undefined8 param_2)

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



/* Entry: 10550a7ec; end: 10550a8df;  */

void FUN_10550a7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba2d0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c05b7a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10550a8e0; end: 10550a933; -[SCChatGroupConstructor .cxx_destruct] */

void FUN_10550a8e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10550a934; end: 10550a95b;  */

void FUN_10550a934(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 10550a95c; end: 10550aa73; -[SCChatGroupParticipantDisplayNameFetcher initWithUserId:displayNameProvider:synchronousSnapchatterFetcher:synchronousBlockedSnapchatterFetcher:] */

undefined1 *
FUN_10550a95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e8ca8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10550aa74; end: 10550ab53; -[SCChatGroupParticipantDisplayNameFetcher displayNameForGroupParticipant:] */

void FUN_10550aa74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be04900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = lVar1;
    func_0x00010c14dde0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de8078,
                        &PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c14dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x28),param_2,lVar3,lVar2);
  }
  _objc_retain(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10550ab54; end: 10550ad4b; -[SCChatGroupParticipantDisplayNameFetcher _displayNameForGroupParticipant:] */

void FUN_10550ab54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar8 = *(ulong *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar8,param_2,uVar1);
  if ((uVar8 & 1) == 0) {
    _objc_release(uVar1);
LAB_10550ac08:
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c06d5a0(uVar5,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar5);
    uVar1 = param_3;
    if ((int)uVar6 != 0) {
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10550ad2c;
    }
    uVar8 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bebd5e0(param_1,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = uVar4;
    func_0x00010901d778();
    if ((int)uVar8 == 0) {
      uVar8 = param_3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c08fa60();
      if (uVar7 == 0) {
        _objc_release(uVar8);
      }
      else {
        func_0x00010be421a0(param_1,param_2,uVar4);
        _objc_release(uVar8);
        if ((param_1 & 1) == 0) {
          func_0x00010bf85d80(param_3);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10550ad20;
        }
      }
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = uVar4;
      func_0x00010901d7c4(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(uVar1);
    if (lVar3 == 0) goto LAB_10550ac08;
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10550ad20:
  _objc_release(uVar4);
LAB_10550ad2c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10550ad4c; end: 10550ad9f; -[SCChatGroupParticipantDisplayNameFetcher _isMutualFriendForSnapchatter:] */

uint FUN_10550ad4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x000100bf119c(), (int)lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c06d560(param_3);
    uVar2 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10550ada0; end: 10550ae6b; -[SCChatGroupParticipantDisplayNameFetcher _snapchatterForUserId:] */

void FUN_10550ada0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bfebfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar1 != 0) {
      _objc_retain(lVar1);
    }
    _objc_release(lVar1);
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10550ae6c; end: 10550aebf; -[SCChatGroupParticipantDisplayNameFetcher .cxx_destruct] */

void FUN_10550ae6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10550aec0; end: 10550b09b;  */

void FUN_10550aec0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ba2d0;
  puVar3 = param_2;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retain(param_2);
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    puVar2 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    puVar1 = param_2;
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_2);
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(param_2);
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126ba2f0;
      func_0x00010bfcf000(PTR_PTR_1126ba2f0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      func_0x00010c2ac7a0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf21f60(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10550b09c; end: 10550b0a3;  */

void FUN_10550b09c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 10550b0a4; end: 10550b23b;  */

void FUN_10550b0a4(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puVar3 = PTR_PTR_1126ba2b8;
  _objc_opt_class(PTR_PTR_1126ba2b8);
  puVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  puVar3 = param_2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar4 = param_2;
  }
  else {
    puVar4 = PTR_PTR_1126ba2e8;
    func_0x00010bfceaa0(PTR_PTR_1126ba2e8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    func_0x00010c0ecc20(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10550aec0;
    puStack_68 = &UNK_110893a80;
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    _objc_retain(uVar2);
    puVar6 = puVar5;
    uStack_58 = uVar2;
    func_0x000100504554(puVar5,&puStack_80);
    puVar7 = puVar4;
    func_0x00010c2b5020(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(puVar7);
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10550b23c; end: 10550b767;  */

void FUN_10550b23c(long param_1,undefined *param_2)

{
  uint uVar1;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  
  _objc_retain(param_2);
  puVar18 = *(undefined **)(param_1 + 0x20);
  puVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba2d8;
  _objc_opt_class(PTR_PTR_1126ba2d8);
  puVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = (uint)(param_2 != (undefined *)0x0) & (uint)puVar3;
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126ba2d0;
  puVar2 = param_2;
  puVar17 = param_2;
  if (puVar18 == (undefined *)0x0) {
    if (uVar1 == 0) {
      puVar3 = param_2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ba2d0;
      if (puVar16 == (undefined *)0x0) {
        _objc_retain(param_2);
        _objc_opt_class(puVar3);
        puVar16 = param_2;
        _objc_opt_isKindOfClass(param_2,puVar3);
        if (((ulong)puVar16 & 1) == 0) {
          puVar2 = (undefined *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(param_2);
        if (puVar2 == (undefined *)0x0) goto LAB_10550b720;
        puVar3 = PTR_PTR_1126ba2f0;
        func_0x00010bfcf000(PTR_PTR_1126ba2f0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c294420(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ac7a0(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar17);
        **(undefined1 **)(param_1 + 0x28) = 1;
        puVar17 = puVar3;
        func_0x00010bf21f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10550b62c;
      }
    }
    else {
      **(undefined1 **)(param_1 + 0x30) = 1;
    }
    _objc_retain(param_2);
  }
  else {
    if (uVar1 == 0) {
      _objc_retain(param_2);
      _objc_opt_class(puVar3);
      puVar16 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar3);
      if (((ulong)puVar16 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(param_2);
      if (puVar2 == (undefined *)0x0) {
LAB_10550b720:
        _objc_retain(param_2);
      }
      else {
        puVar3 = PTR_PTR_1126ba2f0;
        func_0x00010bfcf000(PTR_PTR_1126ba2f0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c08fa60();
        _objc_release(puVar17);
        if (puVar16 == (undefined *)0x0) {
          puVar17 = puVar18;
          func_0x00010c294420(puVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bc440(puVar3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar17);
          **(undefined1 **)(param_1 + 0x28) = 1;
        }
        puVar16 = puVar18;
        FUN_10550b768();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = param_2;
        func_0x00010bf85d80(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar16;
        func_0x00010c0720c0();
        _objc_release(puVar17);
        if (((ulong)puVar15 & 1) == 0) {
          func_0x00010c2ac7a0(puVar3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          **(undefined1 **)(param_1 + 0x28) = 1;
        }
        puVar17 = puVar3;
        func_0x00010bf21f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
LAB_10550b62c:
        _objc_release(puVar3);
      }
    }
    else {
      **(undefined1 **)(param_1 + 0x28) = 1;
      puVar17 = PTR_PTR_1126ba2d0;
      _objc_alloc();
      puVar2 = puVar18;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar18;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar18;
      FUN_10550b768();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_2;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010bf41120();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar18;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar18;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar18;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf1c000();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar18;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf1af00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar18;
      func_0x00010901e928();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar18;
      func_0x00010901d650();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05b7a0(puVar17);
      _objc_release(puVar14);
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
      _objc_release(puVar15);
      _objc_release(puVar16);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar18);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10550b768; end: 10550b7eb;  */

void FUN_10550b768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010901d854();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c14dde0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14dde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550b7ec; end: 10550b87f;  */

void FUN_10550b7ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10550b888;
  puStack_30 = &UNK_110893b70;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110893b50,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10550b880; end: 10550b887;  */

void FUN_10550b880(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 10550b888; end: 10550ba63;  */

void FUN_10550b888(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uStack_7a;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined2 *puStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126ba2b8;
  _objc_opt_class(PTR_PTR_1126ba2b8);
  puVar5 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = param_2;
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar5 = param_2;
    goto LAB_10550ba30;
  }
  puVar2 = PTR_PTR_1126ba2e8;
  func_0x00010bfceaa0(PTR_PTR_1126ba2e8);
  _objc_retainAutoreleasedReturnValue();
  uStack_7a = 0;
  puVar5 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  if (puVar5 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10550b23c;
    puStack_60 = &UNK_110893b20;
    _objc_retain(uVar3);
    lStack_50 = (long)&uStack_7a + 1;
    puStack_48 = &uStack_7a;
    puVar4 = puVar5;
    uStack_58 = uVar3;
    func_0x00010bd86420(puVar5,&puStack_78);
    _objc_release(uStack_58);
  }
  _objc_release(uVar3);
  _objc_release(puVar5);
  if ((uStack_7a & 0x100) == 0) {
    puVar5 = param_2;
    func_0x00010c079960();
    if ((uint)(byte)uStack_7a != (uint)puVar5) goto LAB_10550b9cc;
    puVar5 = (undefined *)0x0;
  }
  else {
LAB_10550b9cc:
    puVar5 = puVar2;
    func_0x00010c2b5020(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c2b10c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
LAB_10550ba30:
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10550ba64; end: 10550ba73; -[SCGroupDisplayNameFormatter groupNameForParticipantDisplayNames:fittingWidth:font:] */

void FUN_10550ba64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_5);
  puVar1 = &UNK_10f528663;
  func_0x000107c31820(&UNK_10f528663);
  uVar2 = param_4;
  func_0x000108ef62d0(param_1,0x7fefffffffffffff,param_4,param_5,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31828(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10550ba74; end: 10550bbef; -[SCGroupLinkHandler initWithGroupsDataCreator:groupsDataFetcher:snapchattersDataFetcher:inviteService:notificationPool:offPlatformLinkGenerator:userTrackedLogger:] */

undefined1 *
FUN_10550ba74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e8cb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10550bbf0; end: 10550bd13; -[SCGroupLinkHandler startGroupLinkCreationWithUsers:currentTitle:completion:] */

void FUN_10550bbf0(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_4);
  func_0x00010c2a4bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c25d0a0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010bf529e0();
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c2920();
    _objc_release(uVar5);
    if (uVar4 <= uVar6) {
      func_0x00010be0bb80(param_1,param_2,param_3,lVar2,param_5);
      goto LAB_10550bce8;
    }
    uVar7 = 3;
  }
  func_0x00010be2a500(param_1,param_2,uVar7,param_5);
LAB_10550bce8:
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10550bd14; end: 10550be7f; -[SCGroupLinkHandler startGroupLinkCreationWithExistingGroupId:isCalling:isSilent:completion:] */

void FUN_10550bd14(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  byte param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  byte bStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((param_5 & 1) == 0) {
    func_0x00010be7baa0(param_1);
  }
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,auStack_48);
  bStack_50 = param_5;
  _objc_retain(param_6);
  uVar2 = 0x19;
  uStack_4f = param_4;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10550be80; end: 10550bee7;  */

void FUN_10550be80(long param_1,long param_2)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be2a520(param_1);
  }
  else {
    func_0x00010be2a560(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550bee8; end: 10550bff7; -[SCGroupLinkHandler deleteInviteLinkToGroup:] */

void FUN_10550bee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010be7ba60(param_1);
  puVar1 = PTR_PTR_1126ba2f8;
  _objc_alloc(PTR_PTR_1126ba2f8);
  func_0x00010c03f9a0();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6bf40(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10550bff8; end: 10550c03b;  */

void FUN_10550bff8(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010be7ba80(param_1);
    }
    else {
      func_0x00010be7ba40();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550c03c; end: 10550c1bb; -[SCGroupLinkHandler _executeGroupLinkCreationForUsers:groupName:completion:] */

void FUN_10550c03c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be7baa0(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550c1bc; end: 10550c247;  */

void FUN_10550c1bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if ((param_3 == 0) && (lVar1 == lVar2)) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdee520();
    _objc_release(param_1);
  }
  else {
    func_0x00010be2a500(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10550c248; end: 10550c37b; -[SCGroupLinkHandler _createGroupWithSnapchatters:groupName:completion:] */

void FUN_10550c248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010bf56680(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550c37c; end: 10550c3f7;  */

void FUN_10550c37c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be2a500();
  }
  else {
    func_0x00010be2a560();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10550c3f8; end: 10550c5b3; -[SCGroupLinkHandler _handleGroupInviteLinkCreationForGroup:isCalling:isSilent:completion:] */

void FUN_10550c3f8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = param_6;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ba300;
  _objc_alloc(PTR_PTR_1126ba300);
  func_0x00010c01eac0();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  uStack_5f = param_4;
  func_0x00010bf56ae0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10550c5b4; end: 10550c623;  */

void FUN_10550c5b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      func_0x00010be2a5a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x41),
                          *(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      func_0x00010be2a520(lVar1,param_2,7,*(undefined1 *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x30));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10550c624; end: 10550c8d7; -[SCGroupLinkHandler _handleGroupInviteLinkCreationSuccessWithGroup:groupInviteId:isCalling:isSilent:completion:] */

void FUN_10550c624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,byte param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ba308;
  _objc_opt_new(PTR_PTR_1126ba308);
  if (param_5 != 0) {
    func_0x00010c16ac80(puVar1);
  }
  func_0x00010c16ac20(puVar1);
  uVar3 = param_4;
  func_0x00010bf64920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bdc2560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aeb20(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c1aec80(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfbf760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  if ((param_6 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e7c0();
    _objc_release(puVar5);
  }
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  bStack_70 = param_6;
  _objc_retain(param_7);
  _objc_retain(uVar2);
  uVar4 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10550c8d8; end: 10550c953;  */

void FUN_10550c8d8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar2);
    func_0x00010be2a520();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126ba310;
    func_0x00010c261940(PTR_PTR_1126ba310,param_2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10550c954; end: 10550c9fb; -[SCGroupLinkHandler _presentGroupLinkRequestNotification] */

void FUN_10550c954(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10550c9fc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10550c9fc; end: 10550ca93;  */

void FUN_10550c9fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000106562a14();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550ca94; end: 10550ca9f; -[SCGroupLinkHandler _handleGroupCreationFailureWithReason:completion:] */

void FUN_10550ca94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleGroupCreationFailureWithR_1125682e8,param_3,0,param_4);
  return;
}



/* Entry: 10550caa0; end: 10550cba3; -[SCGroupLinkHandler _handleGroupCreationFailureWithReason:isSilent:completion:] */

void FUN_10550caa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10550cba4;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  puVar1 = PTR_PTR_1126ba310;
  func_0x00010bfa0220(PTR_PTR_1126ba310);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10550cba4; end: 10550cc3b;  */

void FUN_10550cba4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000106562a2c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550cc3c; end: 10550cce3; -[SCGroupLinkHandler _presentGroupLinkDeletionRequestNotification] */

void FUN_10550cc3c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10550cce4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10550cce4; end: 10550cd7b;  */

void FUN_10550cce4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000106562a74();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf54760(PTR_PTR_1126afde0,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550cd7c; end: 10550ce23; -[SCGroupLinkHandler _presentGroupLinkDeletionFailedNotification] */

void FUN_10550cd7c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10550ce24;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10550ce24; end: 10550cebb;  */

void FUN_10550ce24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000106562aa4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550cebc; end: 10550cf63; -[SCGroupLinkHandler _presentGroupLinkDeletionSuccessNotification] */

void FUN_10550cebc(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10550cf64;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10550cf64; end: 10550cffb;  */

void FUN_10550cf64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000106562a8c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf54760(PTR_PTR_1126afde0,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10550cffc; end: 10550d067; -[SCGroupLinkHandler .cxx_destruct] */

void FUN_10550cffc(long param_1)

{
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



/* Entry: 10550d068; end: 10550d2c7;  */

undefined1 * FUN_10550d068(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined4 uVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_80 [2];
  
  alStack_80[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  _objc_retain();
  uVar9 = 0x4049000000000000;
  _UIGraphicsBeginImageContext(0x4049000000000000,0x4024000000000000);
  _UIGraphicsGetCurrentContext();
  _UIGraphicsPushContext();
  uVar2 = param_2;
  func_0x00010bf529e0(param_2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar2 * 8 + 0xf & 0xfffffffffffffff0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf529e0();
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar8 = 0;
    do {
      uVar2 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1c40();
      *(undefined8 *)((long)alStack_80 + (uVar8 * 8 - extraout_x8)) = uVar9;
      _objc_release(uVar2);
      uVar2 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c1d04c0(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar8 = uVar8 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar8 < uVar2);
  }
  _CGColorSpaceCreateDeviceRGB();
  uVar8 = uVar2;
  _CGGradientCreateWithColors();
  uVar7 = 0;
  if (param_1 != 90.0) {
    uVar7 = 3;
  }
  uVar9 = 0x4049000000000000;
  dVar10 = param_1;
  func_0x0001070ba6e4(param_1,0x4049000000000000,0x4024000000000000);
  uVar11 = 0x4049000000000000;
  func_0x0001070ba88c(param_1,0x4049000000000000,0x4024000000000000);
  _CGContextDrawLinearGradient(dVar10,uVar9,param_1,uVar11,uVar1,uVar8,uVar7);
  _CGGradientRelease(uVar8);
  _CGColorSpaceRelease();
  _UIGraphicsPopContext();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar1 = uVar2;
  func_0x00010bf41600(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_80[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_b0;
  pcStack_88 = FUN_10550d2c8;
  puStack_a0 = puVar3;
  uStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(uVar1);
  puStack_a8 = PTR_PTR_1126e8cb8;
  uStack_b0 = uVar2;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_init_1125d9248);
  if (puVar6 != (ulong *)0x0) {
    _objc_retain(uVar1);
    uVar9 = *(undefined8 *)((long)puVar6 + 8);
    *(ulong *)((long)puVar6 + 8) = uVar1;
    _objc_release(uVar9);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar9 = *(undefined8 *)((long)puVar6 + 0x10);
    *(undefined **)((long)puVar6 + 0x10) = puVar3;
    _objc_release(uVar9);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar6;
}



/* Entry: 10550d2c8; end: 10550d357; -[SCGroupsCustomColorFetcher initWithMessagingExperimentService:] */

undefined1 * FUN_10550d2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8cb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10550d358; end: 10550d4ab; -[SCGroupsCustomColorFetcher gradientPatternColor:] */

void FUN_10550d358(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc2200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10550d4ac;
    uStack_40 = 0x10550d4bc;
    uStack_38 = 0;
    func_0x00010c0bddc0(param_3);
    uVar3 = puStack_58[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10550d4ac; end: 10550d4c3;  */

void FUN_10550d4ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10550d4c4; end: 10550d4fb;  */

void FUN_10550d4c4(long param_1,undefined8 param_2)

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



/* Entry: 10550d4fc; end: 10550d633;  */

void FUN_10550d4fc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 == 1) {
    uVar1 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(ulong *)(lVar4 + 0x28) = uVar2;
LAB_10550d5c0:
    _objc_release(uVar3);
  }
  else {
    uVar1 = param_4;
    func_0x00010bf529e0();
    if (uVar1 < 2) goto LAB_10550d5cc;
    uVar1 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x10);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 8);
      _objc_retain(uVar1);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(ulong *)(lVar4 + 0x28) = uVar1;
      goto LAB_10550d5c0;
    }
    uVar2 = param_4;
    FUN_10550d068(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(ulong *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1d0560(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
  }
  _objc_release(uVar1);
LAB_10550d5cc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10550d634; end: 10550d87f; -[SCGroupsCustomColorFetcher customColorFromColorOption:] */

void FUN_10550d634(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = *(undefined **)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc2200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    goto LAB_10550d858;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf41140();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((int)puVar1 == 3) {
    puVar1 = puVar3;
    func_0x00010c099480();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c257040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000100504554();
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puVar1 = PTR_PTR_1126ba2c0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar6 < (undefined *)0x2) {
      puVar4 = puVar5;
      func_0x00010bf529e0();
      puVar1 = PTR_PTR_1126ba2c0;
      if (puVar4 == (undefined *)0x0) {
        puVar1 = (undefined *)0x0;
        goto LAB_10550d848;
      }
      puVar4 = puVar5;
      func_0x00010bfb1920(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad6a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf41060(puVar3);
      func_0x00010c0df820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c099480(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02b40();
      func_0x00010bfcda80((double)param_1,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
    _objc_release(puVar4);
LAB_10550d848:
    _objc_release(puVar5);
  }
  else {
    if ((int)puVar1 == 2) {
      func_0x00010bf40c40(puVar3);
      func_0x00010bf41580(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126ba2c0;
      func_0x00010bfad6a0(PTR_PTR_1126ba2c0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10550d848;
    }
    puVar1 = (undefined *)0x0;
  }
  _objc_release(puVar3);
LAB_10550d858:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10550d880; end: 10550d923;  */

void FUN_10550d880(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ba318;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf40c40(param_3);
  func_0x00010bf41580(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40(param_3);
  _objc_release(param_3);
  func_0x00010bfffae0((double)param_1,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10550d924; end: 10550d953; -[SCGroupsCustomColorFetcher .cxx_destruct] */

void FUN_10550d924(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10550d954; end: 10550da93; -[SCGroupsDataCreator initWithNativeSessionManager:configProvider:messagingExperimentService:] */

undefined8 *
FUN_10550d954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e8cc0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10550da94; end: 10550daef;  */

void FUN_10550da94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c2900();
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


