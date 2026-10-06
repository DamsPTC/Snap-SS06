/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10687d10c; end: 10687d113;  */

void FUN_10687d10c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_trackedLensUnlocker_11267bd30);
  return;
}



/* Entry: 10687d114; end: 10687d3ab;  */

void FUN_10687d114(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126c8138;
    _objc_opt_class(PTR_PTR_1126c8138);
    puStack_68 = PTR_PTR_1126f3938;
    puVar3 = &uStack_70;
    uStack_70 = uVar10;
    _objc_msgSendSuper2(puVar3,PTR_s_isKindOfClass__1125fb1d0,puVar2);
    if ((int)puVar3 != 0) {
      uStack_80 = *(undefined8 *)(param_1 + 0x20);
      puStack_78 = PTR_PTR_1126f3938;
      puVar3 = &uStack_80;
      _objc_msgSendSuper2(puVar3,PTR_s_isVisible_1125fe818);
      if ((int)puVar3 != 0) {
        if ((param_2 == 0) || (param_3 != 0)) {
          lVar7 = lVar1;
          func_0x00010c241880(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c093ac0();
          _objc_release(lVar7);
        }
        else {
          lVar7 = lVar1;
          func_0x00010c090c60(lVar1);
          _objc_retainAutoreleasedReturnValue();
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0xc2000000;
          pcStack_a0 = FUN_10687d3ac;
          puStack_98 = &UNK_110945280;
          _objc_copyWeak(auStack_88,param_1 + 0x38);
          _objc_retain(param_2);
          lStack_90 = param_2;
          func_0x00010c297280(lVar7);
          _objc_release(lVar7);
          uVar4 = *(ulong *)(param_1 + 0x28);
          func_0x00010c28f340();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          FUN_106a5b8ac();
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((uVar6 & 1) == 0) {
            uVar8 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c28f340();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar8;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x000106a5ba90();
            _objc_release(uVar10);
            _objc_release(uVar8);
            uVar10 = 9;
            if ((int)uVar11 == 0) {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = 10;
          }
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          lVar7 = param_2;
          func_0x00010c094fa0(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = param_2;
          func_0x00010bf56c80(param_2);
          _objc_retainAutoreleasedReturnValue();
          puStack_b8 = PTR_PTR_1126f3938;
          uStack_c0 = uVar11;
          _objc_msgSendSuper2(&uStack_c0,PTR_s_tryToActivateLensAfterUnlockWith_11267cdc8,lVar7,
                              lVar9,uVar10);
          _objc_release(lVar9);
          _objc_release(lVar7);
          _objc_release(lStack_90);
          _objc_destroyWeak(auStack_88);
        }
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10687d3ac; end: 10687d4f7;  */

void FUN_10687d3ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c094fa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar4 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bef0b80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c0e0ec0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar1;
      func_0x00010c241880(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2512e0();
      _objc_release(lVar4);
      _objc_release(lVar8);
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10687d4f8; end: 10687d4ff;  */

void FUN_10687d4f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_optional_112618b90);
  return;
}



/* Entry: 10687d500; end: 10687d7f7; -[SCMainCameraViewController handleDeepLinkOAuth2:] */

void FUN_10687d500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  
  uVar1 = param_3;
  _objc_retain();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afea0;
  _objc_opt_class(PTR_PTR_1126afea0);
  uVar3 = uVar1;
  func_0x00010beecc40(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1109452e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c241a00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0dfa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bebcdc0();
  if ((int)uVar1 == 0) {
    uVar5 = uVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c076220();
    _objc_release(uVar5);
    if ((int)uVar6 != 0) {
      uVar5 = uVar3;
      func_0x00010bfe63a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94c20();
      _objc_release(uVar5);
    }
  }
  else {
    func_0x00010c12d340(uVar4);
  }
  uVar5 = param_3;
  func_0x00010befd100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010bf1f3c0(uVar6);
  uVar7 = param_1;
  func_0x00010c241a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2419c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010befd100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf1f3c0();
  _objc_release(uVar9);
  _objc_release(uVar7);
  uVar7 = uVar8;
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010befd100(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar12 = uVar11;
  func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110df13b8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010c241b00(uVar7,param_2,uVar9,uVar12,uVar5,uVar10,param_1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  if ((int)uVar1 == 0) {
    uVar1 = uVar3;
    func_0x00010bfe63a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar1);
  }
  else {
    func_0x00010c08bb40(uVar4,param_2,uVar13);
  }
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10687d7f8; end: 10687d7ff;  */

void FUN_10687d7f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_oauth2PermissionPresenterScopeLa_1126158c0);
  return;
}



/* Entry: 10687d800; end: 10687d88f; -[SCMainCameraViewController handleDeepLinkKit:] */

void FUN_10687d800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4bb00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010bfd0ba0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687d890; end: 10687da8b; -[SCMainCameraViewController handleCameraModeDeepLinkWithInfo:] */

void FUN_10687d890(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 < 2) goto LAB_10687da70;
  uVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c260c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e63698);
  uVar2 = param_3;
  if ((int)uVar1 == 0) {
    uVar1 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f83fb8);
    if ((int)uVar1 != 0) {
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bf7f4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beefaa0(uVar5,param_2,uVar1);
      goto LAB_10687da40;
    }
  }
  else {
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0d1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf116c0(uVar5,param_2,uVar1);
LAB_10687da40:
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  _objc_release(uVar3);
LAB_10687da70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687da8c; end: 10687e50b; -[SCMainCameraViewController handleLockedCameraCaptureExtensionDeepLinkWithInfo:] */

void FUN_10687da8c(long param_1,undefined **param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e635d8;
  ppuVar4 = ppuVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) goto LAB_10687e494;
  iVar1 = 2;
  param_2 = (undefined **)0x12;
  func_0x000100029b9c(2,0x12,0,0);
  if ((iVar1 != 0) && (lVar12 = param_1, func_0x00010be42820(), (int)lVar12 != 0)) {
    ppuVar5 = ppuVar4;
    _objc_retain();
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e63778;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar3 = ppuVar5;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar13 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    ppuVar5 = ppuVar6;
    func_0x00010bfacbe0();
    _objc_release(puVar13);
    if ((int)puVar7 != 0) {
LAB_10687dc24:
      _objc_release(ppuVar6);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      goto LAB_10687e494;
    }
    ppuVar8 = ppuVar2;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    param_2 = (undefined **)0x202;
    _open();
    if ((int)ppuVar8 != -1) {
      param_2 = (undefined **)0x2;
      ppuVar5 = ppuVar8;
      _flock();
      if ((int)ppuVar5 == 0) {
        puVar13 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar13;
        ppuVar5 = ppuVar6;
        func_0x00010bfacbe0();
        _objc_release(puVar13);
        if (((ulong)puVar7 & 1) != 0) {
          param_2 = (undefined **)0x8;
          _flock(ppuVar8);
          _close(ppuVar8);
          goto LAB_10687dc24;
        }
        puVar13 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf561e0();
        _objc_release(puVar13);
        param_2 = (undefined **)0x8;
        _flock(ppuVar8);
      }
      _close(ppuVar8);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  ppuVar5 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar5;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  puVar13 = PTR_PTR_1126ce8b0;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c0720c0();
  if ((int)ppuVar5 == 0) {
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      puVar7 = PTR_PTR_1126ce8b0;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10687e1c4;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      puVar7 = PTR_PTR_1126ce8b0;
      func_0x00010bf11bc0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10687e1c4;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = param_3;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar5;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar8 = ppuVar6;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c0720c0();
        if ((((((((ulong)ppuVar9 & 1) == 0) &&
               (ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0)) &&
              (ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0)) &&
             ((ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0 &&
              (ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0)))) &&
            ((ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0 &&
             ((ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0 &&
              (ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0)))))) &&
           ((ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0 &&
            ((((ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0 &&
               (ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0)) &&
              (ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0)) &&
             ((ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0 &&
              (ppuVar9 = ppuVar8, func_0x00010c0720c0(), ((ulong)ppuVar9 & 1) == 0)))))))) {
          func_0x00010c0720c0();
        }
        _objc_release(ppuVar8);
      }
      _objc_release(ppuVar6);
      _objc_release(ppuVar2);
      _objc_release(ppuVar5);
      puVar7 = PTR_PTR_1126ce8b0;
      func_0x00010c273780();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10687e1c4;
    }
    ppuVar5 = ppuVar3;
    func_0x00010c0720c0();
    if ((int)ppuVar5 == 0) {
      ppuVar5 = ppuVar3;
      func_0x00010c0720c0();
      if ((int)ppuVar5 != 0) {
        puVar7 = PTR_PTR_1126b1068;
        _objc_alloc();
        puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c057c40();
        func_0x00010c21d340(param_3);
        _objc_release(puVar7);
        _objc_release(puVar11);
        ppuVar5 = param_3;
        func_0x00010bfd0b40(param_1);
        goto LAB_10687e484;
      }
      goto LAB_10687e1d4;
    }
    ppuVar5 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar5);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e63698;
    ppuVar2 = ppuVar6;
    func_0x00010c0720c0();
    if ((int)ppuVar2 != 0) {
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010c0d1c40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar12;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_3;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar2;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00010bf116c0(lVar10);
      _objc_release(ppuVar8);
      _objc_release(ppuVar2);
      _objc_release(lVar10);
      _objc_release(lVar12);
      _objc_release(param_1);
    }
    _objc_release(ppuVar6);
  }
  else {
    puVar7 = PTR_PTR_1126ce8b0;
    func_0x00010c15cea0();
    _objc_retainAutoreleasedReturnValue();
LAB_10687e1c4:
    _objc_release(puVar13);
    puVar13 = puVar7;
LAB_10687e1d4:
    lVar12 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0080();
    _objc_release(lVar10);
    _objc_release(lVar12);
    lVar12 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204fa0();
    _objc_release(lVar10);
    _objc_release(lVar12);
    puVar7 = PTR_PTR_1126ae560;
    _objc_opt_new();
    ppuVar5 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c071ae0();
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
    _objc_release(ppuVar5);
    puVar11 = puVar7;
    func_0x00010bfbc3e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    if ((int)ppuVar8 == 0) {
      func_0x00010be7d960(param_1);
    }
    else {
      func_0x00010be7d940();
    }
    _objc_release(puVar11);
    lVar12 = param_1;
    func_0x00010c09fcc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar10 == 0) {
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e63718;
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar2;
      func_0x00010bf43ca0(puVar7);
      _objc_release(ppuVar2);
      _objc_release(puVar11);
    }
    else {
      _objc_initWeak(&puStack_80,param_1);
      lVar12 = lVar10;
      func_0x00010bfc37a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10687e50c;
      puStack_a0 = &UNK_110945300;
      param_2 = &puStack_80;
      _objc_copyWeak(auStack_88);
      _objc_retain(puVar7);
      ppuVar2 = ppuVar4;
      puStack_98 = puVar7;
      _objc_retain(ppuVar4);
      ppuStack_90 = ppuVar4;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &puStack_b8;
      func_0x00010c297260(lVar12);
      _objc_release(ppuVar2);
      _objc_release(lVar12);
      _objc_release(ppuStack_90);
      _objc_release(puStack_98);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(&puStack_80);
    }
    _objc_release(lVar10);
    _objc_release(puVar7);
  }
LAB_10687e484:
  _objc_release(puVar13);
  _objc_release(ppuVar3);
LAB_10687e494:
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&puStack_80);
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar5;
  _objc_retain(param_2);
  _objc_retain(ppuVar5);
  ppuVar2 = param_3 + 6;
  _objc_loadWeakRetained();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  if (ppuVar2 != (undefined **)0x0) {
    if (ppuVar5 == (undefined **)0x0) {
      if (param_2 == (undefined **)0x0) {
        puVar13 = param_3[4];
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bf43ca0(puVar13);
        _objc_release(ppuVar3);
      }
      else {
        iVar1 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((iVar1 != 0) && (ppuVar3 = ppuVar2, func_0x00010be42820(), (int)ppuVar3 != 0)) {
          ppuVar3 = ppuVar2;
          func_0x00010c09fcc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb980();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
        }
        puVar13 = param_3[4];
        ppuVar6 = param_2;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar6;
        func_0x00010bf43d60(puVar13);
      }
      _objc_release(ppuVar6);
    }
    else {
      ppuVar4 = ppuVar5;
      func_0x00010bf43ca0(param_3[4]);
    }
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_2;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c28f340(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    func_0x00010bfd0a20(ppuVar2);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10687e50c; end: 10687e6d7;  */

void FUN_10687e50c(long param_1,undefined *param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar2 != 0) {
    if (param_3 == (undefined *)0x0) {
      if (param_2 == (undefined *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bf43ca0(uVar10);
        _objc_release(puVar6);
      }
      else {
        iVar1 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((iVar1 != 0) && (lVar3 = lVar2, func_0x00010be42820(), (int)lVar3 != 0)) {
          lVar3 = lVar2;
          func_0x00010c09fcc0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb980();
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        puVar5 = param_2;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bf43d60(uVar10);
      }
      _objc_release(puVar5);
    }
    else {
      puVar8 = param_3;
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010c28f340(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010bfd0a20(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10687e6d8; end: 10687e787; -[SCMainCameraViewController handleDeepLinkMusic:] */

void FUN_10687e6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0a20(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687e788; end: 10687e837; -[SCMainCameraViewController handleDeepLinkSelfieSettings:] */

void FUN_10687e788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15b000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0a20(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687e838; end: 10687eac3; -[SCMainCameraViewController deepLinkableViewControllerFromInfo:] */

undefined8 FUN_10687e838(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110e09c38);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f836d8);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110dc7978);
      if ((int)uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f839f8);
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110de3df8);
          if ((int)uVar1 == 0) {
            uVar1 = param_3;
            func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
            if ((int)uVar1 != 0) {
              func_0x00010bfd0aa0(param_1,param_2,param_3);
            }
            uVar1 = param_3;
            func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110dfe2d8);
            if ((int)uVar1 == 0) {
              uVar1 = param_3;
              func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f83bd8);
              if ((int)uVar1 == 0) {
                uVar1 = param_3;
                func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f83a38
                                   );
                if ((int)uVar1 == 0) {
                  uVar1 = param_3;
                  func_0x00010c072b40(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f83a58);
                  if ((int)uVar1 == 0) {
                    uVar1 = param_3;
                    func_0x00010c072b40(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f83a78);
                    if ((((uVar1 & 1) == 0) &&
                        (uVar1 = param_3,
                        func_0x00010c072b40(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110db9078),
                        (uVar1 & 1) == 0)) &&
                       (uVar1 = param_3,
                       func_0x00010c072b40(param_3,param_2,
                                           &PTR____CFConstantStringClassReference_110def1b8),
                       (int)uVar1 == 0)) {
                      uVar1 = param_3;
                      func_0x00010c072b40(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110e437f8);
                      if ((int)uVar1 == 0) {
                        uVar1 = param_3;
                        func_0x00010c072b40(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110e63678);
                        if ((int)uVar1 == 0) {
                          uVar1 = param_3;
                          func_0x00010c072b40(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110f83ff8);
                          if ((int)uVar1 != 0) {
                            func_0x00010bfd16e0(param_1,param_2,param_3);
                          }
                        }
                        else {
                          func_0x00010bfd0660(param_1,param_2,param_3);
                        }
                      }
                      else {
                        func_0x00010bfd0bc0(param_1,param_2,param_3);
                      }
                    }
                    else {
                      func_0x00010bfd17a0(param_1,param_2,param_3);
                    }
                  }
                  else {
                    func_0x00010bfd0ae0(param_1,param_2,param_3);
                  }
                }
                else {
                  func_0x00010bfd0ac0(param_1,param_2,param_3);
                }
              }
              else {
                func_0x00010bfd0b00(param_1,param_2,param_3);
              }
            }
            else {
              func_0x00010bfd0b60(param_1,param_2,param_3);
            }
          }
          else {
            func_0x00010bfd0ba0(param_1,param_2,param_3);
          }
        }
        else {
          func_0x00010bfd0b80(param_1,param_2,param_3);
        }
      }
      else {
        func_0x00010bfd0a80(param_1,param_2,param_3);
      }
    }
    else {
      func_0x00010bfd0a60(param_1,param_2,param_3);
    }
  }
  else {
    func_0x00010bfd0b40(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return 0;
}



/* Entry: 10687eac4; end: 10687eb47; -[SCMainCameraViewController _snapKitOAuthScopeUseImmediateLauncher] */

undefined8 FUN_10687eac4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10687eb48; end: 10687ec93; -[SCMainCameraViewController _setPreviewPresenterWithMetaData:] */

void FUN_10687eb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139360();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a960();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafe0(uVar2,param_2,uVar4,5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204fa0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687ec94; end: 10687edff; -[SCMainCameraViewController _handleDereferedDeeplinkWithInfo:] */

undefined8 FUN_10687ec94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
LAB_10687edb4:
    uVar5 = 0;
  }
  else {
    uVar5 = param_1;
    func_0x00010c06dfa0();
    if ((int)uVar5 != 0) {
      puVar3 = PTR_PTR_1126aed60;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c1238e0();
      _objc_release(puVar3);
      if (puVar4 != (undefined *)0x756e6474) goto LAB_10687edb4;
    }
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c18ad60(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    uVar5 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10687ee00; end: 10687ee3b;  */

void FUN_10687ee00(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf68420();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687ee3c; end: 10687efbf; -[SCMainCameraViewController _presentPreviewWithFutureImageUrl:] */

void FUN_10687ee3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf2af80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110945350);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9000(PTR_PTR_1126affe0,param_2,uVar4,uVar1,0,0,0,0,0,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110945390);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf47920(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10da20();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10687efc0; end: 10687f00b;  */

void FUN_10687efc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_30 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_20 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010bfe77a0(PTR_PTR_1126affc0,param_2,param_2,&uStack_30);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10687f00c; end: 10687f06b;  */

void FUN_10687f00c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10687f06c; end: 10687f323; -[SCMainCameraViewController _handleDeepLinkShareToPreviewWithVideoFile:] */

void FUN_10687f06c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  
  _objc_retain(param_5);
  func_0x00010c299e20(PTR_PTR_1126b0010,param_4,param_5);
  dVar9 = param_1;
  func_0x00010c29b240(PTR_PTR_1126b0010,param_4,param_5);
  if ((0.0 < param_1) && (param_1 <= 300.0)) {
    bVar1 = false;
    if ((dVar9 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar1) {
      puVar2 = PTR_PTR_1126b5fb0;
      _objc_alloc(PTR_PTR_1126b5fb0);
      func_0x00010c0613a0(param_1);
      uVar3 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c080();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5240(dVar9,param_2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40c0(dVar9 / param_2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar8 = PTR_PTR_1126affe0;
      uVar3 = param_3;
      func_0x00010bf2af80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126affc0;
      func_0x00010c29a0a0(PTR_PTR_1126affc0,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef70e0(puVar8,param_4,uVar6,puVar7,0,0,0,0,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10db60(param_3,param_4,puVar8,0,0);
      _objc_release(puVar8);
      _objc_release(param_3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10687f324; end: 10687f4e3; -[SCMainCameraViewController _presentPreviewWithFutureVideoUrl:] */

void FUN_10687f324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf2af80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109453b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9000(PTR_PTR_1126affe0,param_2,uVar4,uVar1,1,0,0,0,0,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109453f0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf47ce0(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c080();
  _objc_release(uVar5);
  _objc_release(uVar2);
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10da20();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10687f4e4; end: 10687f4f3;  */

void FUN_10687f4e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29a0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126affc0,PTR_s_videoFileWithUrl__112684250,param_2);
  return;
}



/* Entry: 10687f4f4; end: 10687f56f;  */

void FUN_10687f4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0010;
  _objc_retain(param_3);
  func_0x00010c299e20(puVar1);
  puVar1 = PTR_PTR_1126b5fb0;
  _objc_alloc(PTR_PTR_1126b5fb0);
  func_0x00010c0613a0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10687f570; end: 10687f5eb; -[SCMainCameraViewController _lensDelegate] */

void FUN_10687f570(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c093ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10687f5ec; end: 10687f5ef; -[SCMainCameraViewController addFriendsWorkflowSkipped:] */

void FUN_10687f5ec(void)

{
  return;
}



/* Entry: 10687f5f0; end: 10687f66f; -[SCMainCameraViewController addFriendsWorkflowCompleted:] */

void FUN_10687f5f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bef8e00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bef8e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10687f670; end: 10687f7af; -[SCMainCameraViewController oAuth2PermissionPresenterWorkflowCompleted] */

void FUN_10687f670(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010bebcdc0();
  if ((int)uVar1 == 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar1;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c076220();
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = uVar2;
      func_0x00010bfe63a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94c20();
      _objc_release(uVar1);
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010c241a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c12d340(uVar2);
  }
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10687f7b8;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_58);
  return;
}



/* Entry: 10687f7b0; end: 10687f7b7;  */

void FUN_10687f7b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_oauth2PermissionPresenterScopeLa_1126158c0);
  return;
}



/* Entry: 10687f7b8; end: 10687f7f3;  */

void FUN_10687f7b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10687f7f4; end: 10687fa77; +[SCLensUnlockAction unlockActionWithActivationParams:] */

void FUN_10687f7f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar7,param_2,lVar1);
  _objc_release(lVar1);
  if ((int)puVar7 != 0) {
    puVar2 = PTR_PTR_1126b1ab8;
    _objc_alloc(PTR_PTR_1126b1ab8);
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c280dc0();
    func_0x00010c024960(puVar2,param_2,lVar1,0,0,0,1,0,lVar3);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126b1ab0;
    func_0x00010c094620(PTR_PTR_1126b1ab0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10687fa4c;
  }
  lVar1 = param_3;
  func_0x00010c14f740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR_PTR_1126cac80;
  lVar3 = param_3;
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf68280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR_PTR_1126cac80;
    puVar2 = (undefined *)0x0;
    if (lVar1 != 0) {
      func_0x00010bf68280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b6120(puVar7,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10687f970;
    }
  }
  else {
    func_0x00010c14f740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b6100(puVar7,param_2,lVar3,&PTR____CFConstantStringClassReference_110dceef8);
    _objc_retainAutoreleasedReturnValue();
LAB_10687f970:
    _objc_release(lVar3);
    puVar2 = puVar7;
  }
  puVar4 = puVar2;
  func_0x00010c14f7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar4;
    func_0x00010c120080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    puVar7 = PTR_PTR_1126b1ab0;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar4;
      func_0x00010bf63640(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c120080(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c280dc0(param_3);
      func_0x00010c14f560(puVar7,param_2,puVar5,0,puVar6,1,1,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  _objc_release(puVar4);
LAB_10687fa4c:
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10687fa78; end: 10687fca7; +[SCLensUnlockActivationParams paramsFromDeepLinkInfo:] */

void FUN_10687fa78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c096de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010befd100(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010befd100(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126c20e8;
    _objc_alloc(PTR_PTR_1126c20e8);
    lVar1 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0b878c(lVar5);
    func_0x00010c024920(puVar6,param_2,lVar3,0,lVar1,lVar5,0);
  }
  else {
    lVar1 = lVar2;
    func_0x00010c096de0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c094320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar4 = lVar2;
    func_0x00010c096de0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c097980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010c096de0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08b6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = PTR_PTR_1126c20e8;
    _objc_alloc(PTR_PTR_1126c20e8);
    func_0x00010c024920();
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10687fca8; end: 10687fdab; -[SCLensUnlockActivationParams initWithLensId:scannableId:deepLinkURL:unlockSource:launchParams:] */

undefined1 *
FUN_10687fca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3940;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10687fdac; end: 10687fdb3; -[SCLensUnlockActivationParams lensId] */

undefined8 FUN_10687fdac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10687fdb4; end: 10687fdbb; -[SCLensUnlockActivationParams scannableId] */

undefined8 FUN_10687fdb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10687fdbc; end: 10687fdc3; -[SCLensUnlockActivationParams deepLinkURL] */

undefined8 FUN_10687fdbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10687fdc4; end: 10687fdcb; -[SCLensUnlockActivationParams launchParams] */

undefined8 FUN_10687fdc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10687fdcc; end: 10687fdd3; -[SCLensUnlockActivationParams unlockSource] */

undefined8 FUN_10687fdcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10687fdd4; end: 10687fe1b; -[SCLensUnlockActivationParams .cxx_destruct] */

void FUN_10687fdd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10687fe1c; end: 10687feef; -[SCLensUnlockResult createLaunchDataWithParams:] */

void FUN_10687fe1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ce8b8;
  _objc_alloc_init(PTR_PTR_1126ce8b8);
  lVar2 = param_3;
  func_0x00010c08bbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ce8c0;
    _objc_alloc_init(PTR_PTR_1126ce8c0);
    lVar2 = param_3;
    func_0x00010c08bbc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189980(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010c1b96c0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10687fef0; end: 10688012b; -[SCDeepLinkManager initWithNavigationDelegate:processorPlugins:urlTransformerPlugins:userLoggedIn:shortLinkDecodingService:grapheneRegistry:legacyDeepLinkProcessor:metricsEmitter:circumstanceEngine:systemNetworkServices:nativeDeepLinkResolver:] */

undefined8 *
FUN_10687fef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f3948;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    *(undefined1 *)(puVar1 + 2) = param_6;
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf67ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[7];
    puVar1[7] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10688012c; end: 106880333; -[SCDeepLinkManager handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:callbackDelegate:] */

void FUN_10688012c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_storeWeak(param_1 + 0x60,param_8);
  puVar2 = PTR_PTR_1126ce8c8;
  _objc_alloc();
  func_0x00010c02be00();
  _objc_release(param_8);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar3);
  uVar3 = param_3;
  FUN_106891090();
  ppuVar4 = param_5;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  func_0x00010c1a0ec0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(ppuVar1);
  if ((int)uVar3 == 0) {
    func_0x00010be27e20(param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bf67180(uVar3);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106880334; end: 10688036f;  */

void FUN_106880334(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be27e60(*(undefined8 *)(param_1 + 0x20),param_2,param_2,param_3,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106880370; end: 10688051f; -[SCDeepLinkManager _handleDecodingCompletionForDecodedURL:decodingError:originalURL:sourceApplication:additionalInfo:fromExternal:source:] */

void FUN_106880370(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236f60();
    _objc_release(uVar1);
    func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    puVar2 = PTR_PTR_1126b6300;
    func_0x00010bf9ff00(PTR_PTR_1126b6300);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf946e0(param_1);
    _objc_release(puVar2);
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106880520;
    puStack_90 = &UNK_1108c9dc0;
    lStack_88 = param_1;
    _objc_retain(param_3);
    lStack_80 = param_3;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(param_7);
    uStack_60 = param_9;
    uStack_68 = param_7;
    uStack_58 = param_8;
    func_0x0001000d76cc("APPSTORE",&puStack_a8);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    param_1 = lStack_80;
  }
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106880520; end: 106880553;  */

void FUN_106880520(long param_1,undefined8 param_2)

{
  func_0x00010be27e20(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x48),0);
  return;
}



/* Entry: 106880554; end: 1068806ab; -[SCDeepLinkManager _transformDeepLinkURLAndSetupMetrics:sourceApplication:] */

void FUN_106880554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b1068;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057c40();
  lVar2 = param_1;
  func_0x00010bdced80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  _objc_release(param_4);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  puVar4 = puVar1;
  func_0x00010c099720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c124fc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c22ab40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfa1820(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fa40(uVar8,param_2,param_3,puVar4,puVar5,puVar6,puVar7);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068806ac; end: 1068806b7; -[SCDeepLinkManager _handleDecodedURL:originalURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:] */

void FUN_1068806ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be27e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDecodedURL_NewFlow_origin_112567930);
  return;
}



/* Entry: 1068806b8; end: 106880c47; -[SCDeepLinkManager _handleDecodedURL_NewFlow:originalURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:] */

void FUN_1068806b8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_1;
  func_0x00010becec20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c071ae0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  if ((int)puVar4 != 0) {
    puVar3 = puVar1;
    func_0x00010bf8d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar4 = param_1;
  func_0x00010be06c80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010c13cca0();
    if ((int)puVar5 == 9) {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc();
      puVar6 = puVar4;
      func_0x00010c27a5c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820();
      _objc_release(puVar6);
      puVar6 = puVar1;
      if (puVar5 != (undefined *)0x0) {
        _objc_retain(puVar5);
        _objc_release(puVar2);
        puVar6 = param_1;
        func_0x00010becec20(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar2 = puVar5;
      }
      _objc_release(puVar5);
      puVar1 = puVar6;
    }
    else {
      puVar5 = param_1;
      func_0x00010bdf8f20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar5;
      _objc_release(uVar8);
      uVar7 = *(ulong *)(param_1 + 0x50);
      if ((uVar7 != 0) &&
         (_objc_opt_respondsToSelector(uVar7,PTR_s_processDeepLinkResolutionResult__112622c30),
         (uVar7 & 1) != 0)) {
        uVar7 = *(ulong *)(param_1 + 0x50);
        func_0x00010c2307c0();
        if ((uVar7 & 1) == 0) {
          puVar5 = param_1 + 8;
          _objc_loadWeakRetained();
          puVar6 = puVar5;
          func_0x00010bf2d020();
          _objc_release(puVar5);
          if (((ulong)puVar6 & 1) == 0) {
            puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
            param_1 = param_1 + 0x60;
            _objc_loadWeakRetained(param_1);
            puVar6 = PTR_PTR_1126b6300;
            func_0x00010bf9ff00(PTR_PTR_1126b6300);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf946e0(param_1);
            _objc_release(puVar6);
            _objc_release(param_1);
            _objc_release(puVar5);
            goto LAB_106880b54;
          }
        }
        func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
        func_0x00010be75620(param_1);
        goto LAB_106880b54;
      }
    }
  }
  puVar5 = param_1;
  func_0x00010be34a40();
  if ((int)puVar5 == 0) {
    func_0x00010be2af00(param_1);
    goto LAB_106880b54;
  }
  puVar5 = param_1;
  func_0x00010bdf8f20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar5;
  _objc_release(uVar8);
  uVar7 = *(ulong *)(param_1 + 0x50);
  if (uVar7 == 0) {
    if ((param_1[0x10] & 1) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bfd1c00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      func_0x00010c21dd00(*(undefined8 *)(param_1 + 0x48));
      func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
      _objc_release(0);
      param_1 = param_1 + 0x60;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf946e0();
      _objc_release(param_1);
      _objc_release(uVar8);
      goto LAB_106880b54;
    }
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    puVar6 = PTR_PTR_1126b6300;
    func_0x00010bf0abe0(PTR_PTR_1126b6300);
    _objc_retainAutoreleasedReturnValue();
LAB_106880b24:
    func_0x00010bf946e0(param_1);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c2307c0();
    if ((uVar7 & 1) == 0) {
      puVar5 = param_1 + 8;
      _objc_loadWeakRetained();
      puVar6 = puVar5;
      func_0x00010bf2d020();
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
        param_1 = param_1 + 0x60;
        _objc_loadWeakRetained(param_1);
        puVar6 = PTR_PTR_1126b6300;
        func_0x00010bf9ff00(PTR_PTR_1126b6300);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106880b24;
      }
    }
    func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010be75600(param_1);
  }
LAB_106880b54:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106880c48; end: 106881233; -[SCDeepLinkManager _handleDecodedURL_OriginalFlow:originalURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:] */

void FUN_106880c48(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  byte param_9)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010becec20(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010be34a40(param_1,param_2,puVar1,0);
  puVar5 = param_3;
  if (((ulong)puVar7 & 1) != 0) {
LAB_106880ce4:
    puVar7 = param_1;
    func_0x00010bdf8f20(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar7;
    _objc_release(uVar14);
    uVar2 = *(ulong *)(param_1 + 0x50);
    if (uVar2 == 0) {
      if ((param_1[0x10] & 1) == 0) {
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110e637d8,0,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48),param_2,puVar7);
        param_1 = param_1 + 0x60;
        _objc_loadWeakRetained(param_1);
        puVar3 = PTR_PTR_1126b6300;
        func_0x00010bf0abe0(PTR_PTR_1126b6300,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
LAB_1068811bc:
        func_0x00010bf946e0(param_1,param_2,puVar3);
        _objc_release(puVar3);
      }
      else {
        uStack_d8 = 0;
        uStack_d0 = 2;
        puVar7 = *(undefined **)(param_1 + 0x40);
        func_0x00010bfd1c00(puVar7,param_2,puVar5,puVar1,param_5,param_6,param_8,param_7,&uStack_d0,
                            &uStack_d8);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uStack_d8;
        _objc_retain(uStack_d8);
        func_0x00010c21dd00(*(undefined8 *)(param_1 + 0x48),param_2,1);
        func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48),param_2,uVar14);
        param_1 = param_1 + 0x60;
        _objc_loadWeakRetained(param_1);
        _objc_release(uVar14);
        func_0x00010bf946e0(param_1,param_2,puVar7);
      }
      _objc_release(param_1);
      _objc_release(puVar7);
    }
    else {
      func_0x00010c2307c0();
      if ((uVar2 & 1) == 0) {
        puVar7 = param_1 + 8;
        _objc_loadWeakRetained();
        puVar3 = puVar7;
        func_0x00010bf2d020();
        _objc_release(puVar7);
        if (((ulong)puVar3 & 1) == 0) {
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                              &PTR____CFConstantStringClassReference_110e637d8,0,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48),param_2,puVar7);
          param_1 = param_1 + 0x60;
          _objc_loadWeakRetained(param_1);
          puVar3 = PTR_PTR_1126b6300;
          func_0x00010bf9ff00(PTR_PTR_1126b6300,param_2,puVar7);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1068811bc;
        }
      }
      func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48),param_2,0);
      func_0x00010be75600(param_1,param_2,puVar1,param_6,param_7,param_8,
                          *(undefined8 *)(param_1 + 0x50));
    }
    goto LAB_1068811e4;
  }
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c071ae0();
  _objc_release(puVar7);
  puVar7 = param_3;
  if ((int)puVar3 != 0) {
    puVar7 = puVar1;
    func_0x00010bf8d040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  puVar3 = param_1;
  func_0x00010be06c80(param_1,param_2,puVar7,param_5,param_6,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    if ((param_9 & 1) != 0) goto LAB_106880f40;
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c0e1060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c270520(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c0e0ea0(uVar10,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10688123c;
    puStack_b0 = &UNK_1109454b0;
    _objc_retain(param_3);
    puStack_a8 = param_3;
    puStack_a0 = param_1;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_5);
    uStack_90 = param_5;
    _objc_retain(param_6);
    uStack_70 = (undefined1)param_7;
    uStack_88 = param_6;
    uStack_78 = param_8;
    _objc_retain(puVar1);
    uVar13 = uVar12;
    puStack_80 = puVar1;
    func_0x00010c25ff60(uVar12,param_2,&puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(puStack_a8);
  }
  else {
    puVar4 = puVar3;
    func_0x00010c13cca0();
    if ((int)puVar4 == 9) {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar4 = puVar3;
      func_0x00010c27a5c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar5,param_2,puVar4);
      _objc_release(param_3);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010becec20(param_1,param_2,puVar5,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar6 = param_1;
      func_0x00010be34a40(param_1,param_2,puVar4,0);
      puVar1 = puVar4;
      if (((ulong)puVar6 & 1) != 0) {
        _objc_release(puVar3);
        _objc_release(puVar7);
        goto LAB_106880ce4;
      }
    }
LAB_106880f40:
    puVar4 = puVar1;
    func_0x00010bdc2b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2af00(param_1,param_2,puVar4,param_4);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
LAB_1068811e4:
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106881234; end: 10688123b;  */

void FUN_106881234(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 10688123c; end: 106881377;  */

void FUN_10688123c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0c0800(param_2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106881378; end: 1068813af;  */

void FUN_106881378(long param_1,undefined8 param_2)

{
  func_0x00010be27e20(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x48),1);
  return;
}



/* Entry: 1068813b0; end: 1068813fb;  */

void FUN_1068813b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2af00(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068813fc; end: 10688148b; -[SCDeepLinkManager _deepLinkProcessForDeepLinkURL:] */

void FUN_1068813fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bdf8f80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x00010c0b70c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10688148c; end: 10688163f; -[SCDeepLinkManager _plugin_processor_handleDeepLinkURL:additionalInfo:fromExternal:source:pluginProcessor:] */

void FUN_10688148c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106881640;
  puStack_88 = &UNK_11084c4a0;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  _objc_retainBlock();
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
LAB_1068815a0:
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    uVar3 = param_7;
    _objc_opt_respondsToSelector(param_7,PTR_s_shouldSkipPrepareNavigation_11266acb0);
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar3 = param_7;
      func_0x00010c234a20();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_1068815a0;
    }
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10a140();
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106881640; end: 10688164f;  */

void FUN_106881640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_processDeepLinkURL_additionalInf_112622c38,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106881650; end: 1068817cf; -[SCDeepLinkManager _plugin_processor_handleResolutionResult:additionalInfo:fromExternal:source:pluginProcessor:] */

void FUN_106881650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1068817d0;
  puStack_88 = &UNK_11084c4a0;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  _objc_retainBlock();
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10a140();
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068817d0; end: 1068817df;  */

void FUN_1068817d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_processDeepLinkResolutionResult__112622c30,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1068817e0; end: 106881963; -[SCDeepLinkManager _alertErrorWithTitle:image:] */

void FUN_1068817e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af178;
  _objc_retain(param_3);
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dae6f8;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar6 = param_3;
  func_0x00010c235c40(puVar1);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  if (*(long *)(param_4 + 0x20) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c19f0e0(0,0,0x4056c00000000000,0x4056c00000000000);
    func_0x00010c161280(uVar5);
    _objc_release(puVar1);
  }
  func_0x00010c160fc0(uVar5);
  func_0x00010c18f620(uVar6);
  func_0x00010c18f600(uVar6);
  func_0x00010c18f660(uVar6);
  func_0x00010c18f640(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106881964; end: 106881a3b;  */

void FUN_106881964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c19f0e0(0,0,0x4056c00000000000,0x4056c00000000000);
    func_0x00010c161280(param_2);
    _objc_release(puVar1);
  }
  func_0x00010c160fc0(param_2);
  func_0x00010c18f620(param_3);
  func_0x00010c18f600(param_3);
  func_0x00010c18f660(param_3);
  func_0x00010c18f640(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106881a3c; end: 106881b93; -[SCDeepLinkManager _processorPluginsForFeature:] */

void FUN_106881a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106881b94;
  puStack_60 = &UNK_110945510;
  uStack_58 = param_3;
  _objc_retain(param_3);
  ppuVar6 = &puStack_78;
  lVar2 = lVar1;
  func_0x0001006372a4(lVar1,ppuVar6);
  puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  _objc_alloc();
  func_0x00010c020a80();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c246cc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf2d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (ppuVar6,PTR_s_canProvideProcessorForFeature__1125a8e50,*(undefined8 *)(lVar1 + 0x20));
  return;
}



/* Entry: 106881b94; end: 106881b9f;  */

void FUN_106881b94(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_canProvideProcessorForFeature__1125a8e50,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 106881ba0; end: 106881cdb; -[SCDeepLinkManager _firstValidPluginAmong:forDeepLinkURL:] */

void FUN_106881ba0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (uVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(ulong *)(lStack_118 + uVar7 * 8);
        uVar2 = uVar5;
        puVar4 = (undefined8 *)param_4;
        func_0x00010c082cc0(uVar5,param_2,param_4);
        if ((uVar2 & 1) != 0) {
          _objc_retain(uVar5);
          goto LAB_106881c88;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
      uVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar1 != 0);
  }
  uVar5 = 0;
LAB_106881c88:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    puVar3 = (undefined1 *)puVar4;
    func_0x00010bfa1820(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010be82b60(param_3,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be17e20(param_3,param_2,uVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(puVar3);
    uVar5 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106881cdc; end: 106881d6f; -[SCDeepLinkManager _deepLinkProcessorPluginForDeepLinkURL:] */

void FUN_106881cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be82b60(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be17e20(param_1,param_2,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106881d70; end: 106881e53; -[SCDeepLinkManager isValidInternalDeepLinkURL:] */

ulong FUN_106881d70(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 uStack_41;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdced80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010b7a39ec();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b1068;
    _objc_alloc(PTR_PTR_1126b1068);
    func_0x00010c057c40();
    uStack_41 = 0;
    uVar3 = param_1;
    func_0x00010be34a40(param_1,param_2,puVar2,&uStack_41);
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010be34a60(param_1,param_2,param_3);
    }
    else {
      uVar3 = 1;
    }
    func_0x00010be07a20(param_1,param_2,uVar3,uStack_41,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106881e54; end: 106881ecf; -[SCDeepLinkManager _hasValidDynamicResolutionRuleForURL:] */

bool FUN_106881e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f46e0(lVar2,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lVar2;
  func_0x00010bf987e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  return lVar1 == 0;
}



/* Entry: 106881ed0; end: 106881faf; -[SCDeepLinkManager _hasValidDeepLinkProcessorForURL:isLegacyProcessor:] */

undefined8 FUN_106881ed0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be82b60(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010be17e20(param_1,param_2,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c082ce0(uVar4,param_2,param_3);
  }
  else {
    uVar4 = 1;
  }
  if (param_4 != 0) {
    lVar3 = lVar1;
    func_0x00010bf529e0();
    *(bool *)param_4 = lVar3 == 0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106881fb0; end: 10688203b; -[SCDeepLinkManager _applyTransformationsForUrl:] */

void FUN_106881fb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010bdf8fc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c27a5e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10688203c; end: 1068821af; -[SCDeepLinkManager _deepLinkTransformerPluginForUrl:] */

void FUN_10688203c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1068821b0;
  puStack_60 = &UNK_110945540;
  uStack_58 = param_3;
  _objc_retain(param_3);
  ppuVar7 = &puStack_78;
  lVar2 = lVar1;
  func_0x0001006372a4(lVar1,ppuVar7);
  puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  _objc_alloc();
  func_0x00010c020a80();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c246cc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar6 = lVar5;
  func_0x00010bfb1920(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf2da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (ppuVar7,PTR_s_canTransformURL__1125a9048,*(undefined8 *)(lVar1 + 0x20));
  return;
}



/* Entry: 1068821b0; end: 1068821bb;  */

void FUN_1068821b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_canTransformURL__1125a9048,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068821bc; end: 10688235b; -[SCDeepLinkManager _emitDeepLinkValidityGrapheneMetricWithSuccess:isLegacyProcessor:deepLinkURL:] */

void FUN_1068821bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ce8d0;
  _objc_retain(param_5);
  func_0x00010c069280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e637f8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_5;
  func_0x00010bdc2b80(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar5 = uVar4;
  func_0x00010beec820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c071ae0();
  func_0x00010c25d8c0(puVar1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e63818,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x38),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10688235c; end: 1068826eb; -[SCDeepLinkManager _handleInvalidLinkURL:originalUrl:] */

void FUN_10688235c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) == 0) goto LAB_1068823c8;
    }
    else {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc_init();
    uVar6 = param_4;
    func_0x00010bfe4420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9200(puVar5);
    _objc_release(uVar6);
    uVar6 = param_4;
    func_0x00010c0f5800(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820(puVar5);
    _objc_release(uVar6);
    func_0x00010c1f6900(puVar5);
    puVar7 = puVar5;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      func_0x00010bdc9c00(param_1);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010bfe4d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf225e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar8);
      puVar10 = PTR_PTR_1126b5730;
      _objc_alloc(PTR_PTR_1126b5730);
      func_0x00010c01b560();
      _objc_initWeak(auStack_68,param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010bfe4c00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c25f600(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar10);
      _objc_release(uVar9);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  else {
    _objc_release(uVar1);
LAB_1068823c8:
    func_0x00010bdc9c00(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068826ec; end: 1068826ef;  */

void FUN_1068826ec(void)

{
  return;
}



/* Entry: 1068826f0; end: 10688287f;  */

void FUN_1068826f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c252ee0();
      if ((lVar2 < 400) || (lVar2 = param_4, func_0x00010c252ee0(), 599 < lVar2)) {
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_106882880;
        puStack_50 = &UNK_110842e18;
        _objc_retain(param_2);
        uStack_48 = param_2;
        func_0x000100162d98("APPSTORE",&puStack_68);
        func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
        lVar2 = param_1 + 0x60;
        _objc_loadWeakRetained(lVar2);
        puVar3 = PTR_PTR_1126b6300;
        func_0x00010bf9ff00(PTR_PTR_1126b6300);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf946e0(lVar2);
        _objc_release(puVar3);
        _objc_release(lVar2);
        _objc_release(uStack_48);
      }
      else {
        func_0x00010bdc9c00(param_1);
      }
      _objc_release(puVar1);
    }
    else {
      func_0x00010bdc9c00(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 106882880; end: 1068828eb;  */

void FUN_106882880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1,param_2,uVar2,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068828ec; end: 106882a5f; -[SCDeepLinkManager _alertInvalidLinkURLInternal:originalUrl:] */

void FUN_1068828ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_1068829a0;
  }
  else {
    _objc_release();
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc34d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc9ba0(param_1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
LAB_1068829a0:
  if (lRam00000001136c46d0 != -1) {
    func_0x00010002a2fc(0x1136c46d0,&PTR___NSConcreteGlobalBlock_1109455c0);
  }
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4ac0(*(undefined8 *)(param_1 + 0x48));
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  puVar4 = PTR_PTR_1126b6300;
  func_0x00010bf9ff00(PTR_PTR_1126b6300);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf946e0(param_1);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106882a60; end: 106882b5b; -[SCDeepLinkManager _dynamicResolution_processURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:] */

void FUN_106882a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 in_x7;
  long lVar4;
  undefined *puVar5;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x78);
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f46e0(lVar4,param_2,param_3,in_x7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126ce5b0;
  if (lVar1 == 0) {
    lVar2 = lVar4;
    func_0x00010c13ca20(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c0f40e0(puVar3,param_2,lVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_38;
    _objc_release(lVar2);
    puVar5 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    _objc_release(puVar3);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106882b5c; end: 106882c77; -[SCDeepLinkManager .cxx_destruct] */

void FUN_106882b5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106882c78; end: 106882e03; -[SCDeepLinkMetricsEmitter initWithUserLoggedIn:legacyDeepLinkProcessor:graphene:circumstanceEngine:applicationLogger:handlingId:] */

undefined1 *
FUN_106882c78(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f3950;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined2 *)((long)puVar1 + 0x48) = 0;
    *(undefined1 *)((long)puVar1 + 9) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x58) = 0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_7;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x60) = param_8;
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar2;
    _objc_release(uVar3);
    func_0x00010c24d960(*(undefined8 *)((long)puVar1 + 0x88));
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106882e04; end: 106882f37; -[SCDeepLinkMetricsEmitter setFromExternal:source:referrerURL:frameworkStartURL:emitFrameworkStartMetric:] */

void FUN_106882e04(double param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  *(undefined1 *)(param_2 + 9) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_5;
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = param_6;
  _objc_release(uVar2);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = param_7;
  _objc_release(uVar2);
  if (param_8 != 0) {
    uVar2 = 0;
    if (*(char *)(param_2 + 8) == '\0') {
      uVar2 = 2;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x80);
    lVar3 = param_2;
    func_0x00010be87ee0(param_2,param_3,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126afec0;
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c155420(puVar1);
    func_0x00010c0a1060(uVar4,param_3,lVar3,0,0,0xffffffffffffffff,0,param_5,uVar2,0,2,0,
                        (long)param_1,*(undefined8 *)(param_2 + 0x60),0,0,
                        *(undefined8 *)(param_2 + 0x98));
    _objc_release(lVar3);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106882f38; end: 10688302f; -[SCDeepLinkMetricsEmitter setCompleteURL:linkId:referrer:shareId:feature:] */

void FUN_106882f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_7;
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106883030; end: 106883037; -[SCDeepLinkMetricsEmitter setUsedLegacyProcessor:] */

void FUN_106883030(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106883038; end: 106883043; -[SCDeepLinkMetricsEmitter logFeatureHandlerCompletionWithError:] */

void FUN_106883038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportMetricForStage_error__1125818d8,2,param_3);
  return;
}



/* Entry: 106883044; end: 10688304f; -[SCDeepLinkMetricsEmitter logFinalOutcomeOnDestinationPageWithError:] */

void FUN_106883044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportMetricForStage_error__1125818d8,3,param_3);
  return;
}



/* Entry: 106883050; end: 106883093; -[SCDeepLinkMetricsEmitter logDeepLinkFrameworkOutcomeWithError:] */

void FUN_106883050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdc6800(param_1);
  func_0x00010be8fce0(param_1,param_2,1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106883094; end: 10688309b; -[SCDeepLinkMetricsEmitter deeplinkHandlingId] */

undefined8 FUN_106883094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10688309c; end: 1068833f7; -[SCDeepLinkMetricsEmitter _redactedURLStringForURL:] */

void FUN_10688309c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  bool bVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  uint uVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1b8;
  undefined *puStack_130;
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
  ppuVar19 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar15 = (undefined **)0x0;
    goto LAB_1068833b0;
  }
  ppuVar19 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar19;
  func_0x00010bf32ee0();
  _objc_release(ppuVar19);
  if (ppuVar15 == (undefined **)0x0) {
    ppuVar19 = &PTR____CFConstantStringClassReference_110dc0f98;
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1068833b0;
  }
  param_4 = (undefined1 *)0x0;
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  ppuVar19 = param_3;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar4;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar14;
  func_0x00010bf529e0();
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar15 = param_3;
  if (ppuVar5 == (undefined **)0x0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar19 = ppuVar14;
    func_0x00010bf529e0(ppuVar14);
    func_0x00010bf0a0e0(ppuVar9,param_2,ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(ppuVar14);
    ppuVar19 = &puStack_130;
    param_4 = auStack_f0;
    ppuVar5 = ppuVar14;
    func_0x00010bf52a60();
    if (ppuVar5 == (undefined **)0x0) {
      _objc_release(ppuVar14);
LAB_106883354:
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      bVar11 = false;
      lVar12 = *plStack_120;
      do {
        ppuVar19 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(ppuVar14);
          }
          lVar20 = *(long *)(lStack_128 + (long)ppuVar19 * 8);
          lVar6 = lVar20;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf32ee0();
          _objc_release(lVar6);
          puVar21 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
          if (lVar7 == 0) {
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11d4c0(puVar21,param_2,lVar20,
                                &PTR____CFConstantStringClassReference_110e63a78);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar9,param_2,puVar21);
            _objc_release(puVar21);
            _objc_release(lVar20);
            bVar11 = true;
          }
          else {
            func_0x00010befa120(ppuVar9,param_2,lVar20);
          }
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while (ppuVar5 != ppuVar19);
        ppuVar19 = &puStack_130;
        param_4 = auStack_f0;
        ppuVar5 = ppuVar14;
        func_0x00010bf52a60();
      } while (ppuVar5 != (undefined **)0x0);
      _objc_release(ppuVar14);
      if (!bVar11) goto LAB_106883354;
      ppuVar19 = ppuVar9;
      func_0x00010c1e6460(ppuVar4);
      ppuVar5 = ppuVar4;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar5;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 == (undefined **)0x0) {
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(ppuVar8);
        ppuVar15 = ppuVar8;
      }
      _objc_release(ppuVar8);
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar4);
LAB_1068833b0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  ppuVar15 = param_3;
  func_0x00010beb4580();
  uVar17 = (uint)ppuVar15;
  if ((ppuVar19 == (undefined **)0x1) || (uVar17 != 0)) {
    puVar13 = param_3[10];
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar13,param_2,puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar21);
    if ((puVar13 == (undefined *)0x0) && (((ulong)param_3[0xb] & 1) == 0)) {
      puVar13 = param_3[10];
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13,param_2,PTR____kCFBooleanTrue_11034ab68,puVar21);
      _objc_release(puVar21);
      *(bool *)(param_3 + 0xb) = param_4 != (undefined1 *)0x0;
      ppuVar15 = param_3;
      func_0x00010be339e0(param_3,param_2,param_4);
      ppuVar9 = param_3;
      func_0x00010bdf8e40();
      if (param_3[8] == (undefined *)0x0) {
        ppuVar9 = (undefined **)0xffffffffffffffff;
      }
      else {
        func_0x00010b7d9970();
      }
      uVar3 = uVar17 ^ 1;
      ppuVar4 = ppuVar19;
      if (uVar17 == 0) {
        ppuVar4 = (undefined **)0xffffffffffffffff;
      }
      uVar1 = 0;
      if (ppuVar19 != (undefined **)0x1) {
        uVar1 = uVar17;
      }
      if ((uVar1 & 1) == 0) {
        puVar21 = param_3[4];
        if (puVar21 == (undefined *)0x0) {
          puVar21 = param_3[3];
        }
        ppuStack_1b8 = param_3;
        func_0x00010be87ee0(param_3,param_2,puVar21);
        _objc_retainAutoreleasedReturnValue();
        puStack_1e8 = param_3[6];
        _objc_retain();
        puStack_1f0 = param_3[5];
        _objc_retain();
        ppuVar14 = param_3;
        func_0x00010beb2240();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = param_3[7];
        _objc_retain(puVar21);
      }
      else {
        puStack_1f0 = (undefined *)0x0;
        puStack_1e8 = (undefined *)0x0;
        ppuVar14 = (undefined **)0x0;
        puVar21 = (undefined *)0x0;
        ppuStack_1b8 = (undefined **)0x0;
      }
      uVar2 = 0;
      if (*(char *)(param_3 + 1) == '\0') {
        uVar2 = 2;
      }
      puVar16 = param_3[0x10];
      puVar18 = param_3[2];
      puVar10 = param_4;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126afec0;
      func_0x00010beed820(param_3[0x11]);
      func_0x00010c155420(puVar13);
      func_0x00010c0a1060(puVar16,param_2,ppuStack_1b8,puStack_1e8,puStack_1f0,ppuVar9,0,puVar18,
                          uVar2,ppuVar14,ppuVar15,puVar10,
                          (long)(double)CONCAT17(in_register_00005007,
                                                 CONCAT16(in_register_00005006,
                                                          CONCAT15(in_register_00005005,
                                                                   CONCAT14(in_register_00005004,
                                                                            CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                ),param_3[0xc],ppuVar4,puVar21,param_3[0x13]);
      _objc_release(puVar10);
      func_0x00010c138160(param_3[0x11]);
      if (ppuVar19 == (undefined **)0x3) {
        uVar3 = 1;
      }
      if ((param_4 != (undefined1 *)0x0) || (uVar3 != 0)) {
        func_0x00010bee58c0(param_3,param_2,ppuVar9,uVar2,param_3[2],
                            *(undefined1 *)((long)param_3 + 9),*(undefined1 *)(param_3 + 9),ppuVar15
                           );
      }
      _objc_release(puVar21);
      _objc_release(ppuVar14);
      _objc_release(puStack_1f0);
      _objc_release(puStack_1e8);
      _objc_release(ppuStack_1b8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068833f8; end: 1068836c3; -[SCDeepLinkMetricsEmitter _reportMetricForStage:error:] */

void FUN_1068833f8(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  lVar8 = param_2;
  func_0x00010beb4580();
  uVar12 = (uint)lVar8;
  if ((param_4 == 1) || (uVar12 != 0)) {
    lVar8 = *(long *)(param_2 + 0x50);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar8,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if ((lVar8 == 0) && ((*(byte *)(param_2 + 0x58) & 1) == 0)) {
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9,param_3,PTR____kCFBooleanTrue_11034ab68,puVar5);
      _objc_release(puVar5);
      *(bool *)(param_2 + 0x58) = param_5 != 0;
      lVar8 = param_2;
      func_0x00010be339e0(param_2,param_3,param_5);
      lVar6 = param_2;
      func_0x00010bdf8e40();
      if (*(long *)(param_2 + 0x40) == 0) {
        lVar6 = -1;
      }
      else {
        func_0x00010b7d9970();
      }
      uVar4 = uVar12 ^ 1;
      lVar3 = param_4;
      if (uVar12 == 0) {
        lVar3 = -1;
      }
      uVar1 = 0;
      if (param_4 != 1) {
        uVar1 = uVar12;
      }
      if ((uVar1 & 1) == 0) {
        lVar10 = *(long *)(param_2 + 0x20);
        if (lVar10 == 0) {
          lVar10 = *(long *)(param_2 + 0x18);
        }
        uStack_68 = param_2;
        func_0x00010be87ee0(param_2,param_3,lVar10);
        _objc_retainAutoreleasedReturnValue();
        uStack_98 = *(undefined8 *)(param_2 + 0x30);
        _objc_retain();
        uStack_a0 = *(undefined8 *)(param_2 + 0x28);
        _objc_retain();
        lVar10 = param_2;
        func_0x00010beb2240();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        _objc_retain(uVar9);
      }
      else {
        uStack_a0 = 0;
        uStack_98 = 0;
        lVar10 = 0;
        uVar9 = 0;
        uStack_68 = 0;
      }
      uVar2 = 0;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar2 = 2;
      }
      uVar11 = *(undefined8 *)(param_2 + 0x80);
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      lVar7 = param_5;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126afec0;
      func_0x00010beed820(*(undefined8 *)(param_2 + 0x88));
      func_0x00010c155420(puVar5);
      func_0x00010c0a1060(uVar11,param_3,uStack_68,uStack_98,uStack_a0,lVar6,0,uVar13,uVar2,lVar10,
                          lVar8,lVar7,(long)param_1,*(undefined8 *)(param_2 + 0x60),lVar3,uVar9,
                          *(undefined8 *)(param_2 + 0x98));
      _objc_release(lVar7);
      func_0x00010c138160(*(undefined8 *)(param_2 + 0x88));
      if (param_4 == 3) {
        uVar4 = 1;
      }
      if ((param_5 != 0) || (uVar4 != 0)) {
        func_0x00010bee58c0(param_2,param_3,lVar6,uVar2,*(undefined8 *)(param_2 + 0x10),
                            *(undefined1 *)(param_2 + 9),*(undefined1 *)(param_2 + 0x48),lVar8);
      }
      _objc_release(uVar9);
      _objc_release(lVar10);
      _objc_release(uStack_a0);
      _objc_release(uStack_98);
      _objc_release(uStack_68);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1068836c4; end: 10688384b; -[SCDeepLinkMetricsEmitter _handlingResolutionFromError:] */

undefined8 FUN_1068836c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if (((int)uVar2 == 0) || (uVar2 = param_3, func_0x00010bf3ec40(), uVar2 != 1)) {
    uVar2 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if (((int)uVar3 != 0) && (uVar3 = param_3, func_0x00010bf3ec40(), uVar3 == 4)) {
      _objc_release(uVar2);
      goto LAB_106883754;
    }
    uVar3 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
LAB_1068837d0:
      uVar1 = param_3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        _objc_release(uVar1);
      }
      else {
        uVar2 = param_3;
        func_0x00010bf3ec40();
        _objc_release(uVar1);
        if (uVar2 == 2) {
          uVar5 = 6;
          goto LAB_10688382c;
        }
      }
      uVar5 = 2;
      if (param_3 != 0) {
        uVar5 = 0;
      }
      goto LAB_10688382c;
    }
    uVar4 = param_3;
    func_0x00010bf3ec40();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar4 != 2) goto LAB_1068837d0;
  }
  else {
LAB_106883754:
    _objc_release(uVar1);
  }
  uVar5 = 5;
LAB_10688382c:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10688384c; end: 106883a7b; -[SCDeepLinkMetricsEmitter _addDeepLinkInfoToAAOEvent] */

void FUN_10688384c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x49) = 1;
    lVar3 = param_1;
    func_0x00010bdf8e40();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      func_0x00010c0eb960(&uStack_78,puVar4);
    }
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ce8d0;
    func_0x00010beec1a0(PTR_PTR_1126ce8d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar3 != 0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e63a98,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined1 *)(param_1 + 9));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e63ab8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x70),param_2,puVar6);
    if ((lVar3 != 0) && (*(char *)(param_1 + 9) == '\x01')) {
      lVar9 = *(long *)(param_1 + 0x20);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x18);
      }
      lVar8 = param_1;
      func_0x00010be87ee0(param_1,param_2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x80);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      lVar9 = param_1;
      func_0x00010beb2240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf723e0(uVar10,param_2,lVar3,uVar2,uVar1,lVar8,lVar9,
                          *(undefined8 *)(param_1 + 0x38));
      _objc_release(lVar9);
      _objc_release(lVar8);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 106883a7c; end: 106883abb; -[SCDeepLinkMetricsEmitter _shortLinkURLToLog] */

void FUN_106883a7c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  FUN_106891090();
  if (iVar1 != 0) {
    func_0x00010beec820(*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106883abc; end: 106883bbb; -[SCDeepLinkMetricsEmitter _shouldLogDeepLinkLifecycleMetrics] */

undefined8 FUN_106883abc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110e63a38;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf67de0();
    func_0x00010b7d9970();
    uVar4 = *(ulong *)(param_1 + 0x90);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    func_0x00010bc8ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf1f440(uVar1,param_2,ppuVar3,0,0);
  _objc_release(ppuVar3);
  return uVar1;
}



/* Entry: 106883bbc; end: 106883d97; -[SCDeepLinkMetricsEmitter _deepLinkFeature] */

long FUN_106883bbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010bf67de0();
    if (lVar1 == 0x20 || lVar1 == 0x17) {
      puVar2 = PTR_PTR_1126b1068;
      _objc_alloc();
      func_0x00010c057c40();
      puVar3 = puVar2;
      func_0x00010c0f5820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0x20) {
        puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                            &PTR____CFConstantStringClassReference_110f83c38);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        puVar5 = puVar4;
        func_0x00010bf529e0();
        func_0x00010c225ec0(puVar6,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_106883d98;
        puStack_50 = &UNK_11085b220;
        puStack_48 = puVar6;
        func_0x00010bf97e80(puVar4,param_2,&puStack_68);
        puVar5 = puVar6;
        func_0x00010bf4b900(puVar6,param_2,puVar3);
        lVar1 = 0x20;
        if ((int)puVar5 == 0) {
          lVar1 = 0x21;
        }
        _objc_release(puVar6);
        _objc_release(puVar4);
      }
      else if (lVar1 == 0x17) {
        puVar6 = puVar3;
        func_0x00010c0720c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110db7358);
        lVar1 = 0x1f;
        if ((int)puVar6 == 0) {
          lVar1 = 0x17;
        }
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  return lVar1;
}



/* Entry: 106883d98; end: 106883e17;  */

void FUN_106883d98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08fa60(param_2);
  uVar1 = param_2;
  func_0x00010c25cfe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106883e18; end: 1068840fb; -[SCDeepLinkMetricsEmitter _uploadGrapheneDeepLinkMetricsForDeepLinkSource:appState:launchSource:isFromExternal:usedLegacyProcessor:handlingResolution:] */

void FUN_106883e18(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar3 = PTR_PTR_1126ce8d0;
  func_0x00010bf68100(PTR_PTR_1126ce8d0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bc8ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e638b8,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ce8d0;
  func_0x00010bf87200(PTR_PTR_1126ce8d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc8ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e638b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e63958;
  if (param_4 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e63978;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e63998;
  if (*(char *)(param_1 + 8) == '\0') {
    ppuVar1 = ppuVar2;
  }
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e638d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e639b8;
  if (param_6 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e639d8;
  }
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e638f8,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x000100c6f294(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110e63918,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_5);
  lVar7 = param_1;
  func_0x00010be24700(param_1,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e63938,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar7);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e637f8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar3);
  lVar7 = param_1;
  func_0x00010be24700(param_1,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110e63938,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar7);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x70),param_2,puVar5);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x70),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1068840fc; end: 106884123; -[SCDeepLinkMetricsEmitter _grapheneResultValueFromHandlingResolution:] */

undefined ** FUN_1068840fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 6) {
    return (undefined **)(&PTR_PTR_1109455e8)[param_3 - 2U];
  }
  return &PTR____CFConstantStringClassReference_110dab118;
}



/* Entry: 106884124; end: 10688414b; -[SCDeepLinkMetricsEmitter _stringFromHandlingStage:] */

undefined ** FUN_106884124(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 1U < 5) {
    return (undefined **)(&PTR_PTR_110945618)[param_3 + 1U];
  }
  return &PTR____CFConstantStringClassReference_110e63ad8;
}



/* Entry: 10688414c; end: 10688420b; -[SCDeepLinkMetricsEmitter .cxx_destruct] */

void FUN_10688414c(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10688420c; end: 1068842a3; -[SCDeepLinkProcessingDelegateImpl initWithMetricsEmitter:callbackDelegate:] */

undefined1 *
FUN_10688420c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3958;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined2 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068842a4; end: 10688431f; -[SCDeepLinkProcessingDelegateImpl logFeatureHandlerCompletionWithError:] */

void FUN_1068842a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0a5fe0();
  _objc_release(lVar2);
  if (param_3 != 0) {
    func_0x00010be647c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


