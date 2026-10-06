/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10610e400; end: 10610eb3f; -[SCPreviewPresenterImpl configureWithDirectorModeVideoConfiguration:managedCapturerState:captionManager:directorModeFeature:snapReplyFeature:remixFeature:lensPreviewActionFeature:directorModeThumbnailsFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:externalContent:] */

void FUN_10610e400(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long in_stack_00000008;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000008);
  func_0x00010bde4ee0(param_1);
  func_0x00010c18e520(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c215940(*(undefined8 *)(param_1 + 0x1a8));
  uVar2 = *(ulong *)(param_1 + 0x1a8);
  func_0x00010c070a20();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1115a0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      lVar5 = param_3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c140180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar6;
      func_0x00010bf52a60();
      lVar10 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(lVar6);
          }
          puVar18 = *(undefined **)(lVar19 * 8);
          puVar7 = puVar18;
          func_0x00010bef0a60();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c08fa60();
          _objc_release(puVar7);
          if (puVar8 != (undefined *)0x0) {
            func_0x00010bef0a60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            if (puVar18 != (undefined *)0x0) goto LAB_10610e604;
            goto LAB_10610e614;
          }
          lVar19 = lVar19 + 1;
        } while (lVar5 != lVar19);
        lVar5 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
LAB_10610e614:
      iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
      func_0x00010c073e40();
      if (iVar1 != 0) {
        puVar18 = *(undefined **)(param_1 + 0x18);
        func_0x00010c0cfdc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar18;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c240000();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar18);
        puVar7 = puVar9;
        func_0x00010bfd84e0();
        puVar18 = puVar9;
        if ((int)puVar7 != 0) {
          puVar7 = puVar9;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bfe5ea0();
          _objc_release(puVar7);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (0 < (long)puVar8) {
            puVar8 = puVar9;
            func_0x00010c08fb40(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ea0();
            func_0x00010c0df7c0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar8);
            _objc_release(puVar9);
            if (puVar18 == (undefined *)0x0) goto LAB_10610e728;
LAB_10610e604:
            func_0x00010c1c06a0(*(undefined8 *)(param_1 + 0x1a8));
          }
        }
        _objc_release(puVar18);
      }
    }
  }
LAB_10610e728:
  func_0x00010c1654e0(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c1dcbe0(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c16f620(*(undefined8 *)(param_1 + 0x1a8));
  lVar5 = in_stack_00000008;
  func_0x00010c159f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    lVar5 = param_3;
    func_0x00010bfb1260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221700(*(undefined8 *)(param_1 + 0x1a8));
  }
  else {
    lVar5 = in_stack_00000008;
    func_0x00010c159f00(in_stack_00000008);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010bfb6cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221700(*(undefined8 *)(param_1 + 0x1a8));
    _objc_release(lVar10);
  }
  _objc_release(lVar5);
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c06c8c0(param_3);
  func_0x00010c16c080(*(undefined8 *)(param_1 + 0x1a8));
  puVar7 = PTR_PTR_1126b00e8;
  lVar5 = param_3;
  func_0x00010c110b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010bf0f7a0();
  puVar8 = puVar7;
  func_0x00010c14b920(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar8;
  func_0x00010bfede60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be7fd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(*(undefined8 *)(param_1 + 0x1a8));
  _objc_release(lVar5);
  _objc_release(puVar18);
  _objc_release(puVar8);
  lVar5 = param_3;
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bef0b60();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bdd2ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f3c0(*(undefined8 *)(param_1 + 0x1a8));
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf4b980();
  if ((int)lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c1585e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bdd2ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f3c0(*(undefined8 *)(param_1 + 0x1a8));
    _objc_release(lVar10);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bef0b60();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar19;
  func_0x00010c277e80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08fa60();
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar5);
  if (lVar12 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c2849a0(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(param_3);
  }
  lVar5 = param_6;
  func_0x00010c1118a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_6;
    func_0x00010c1118a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f480();
    func_0x00010c1b4a00(*(undefined8 *)(param_1 + 0x1a8));
    _objc_release(lVar5);
  }
  _objc_release(puVar7);
  _objc_release(in_stack_00000008);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1585e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bef0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c277e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar15 = param_2;
  func_0x00010c0d3a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c218f80(uVar15);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}



/* Entry: 10610eb40; end: 10610ec2f;  */

void FUN_10610eb40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1585e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c277e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar5 = param_2;
  func_0x00010c0d3a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c218f80(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10610ec30; end: 10610ecef; -[SCPreviewPresenterImpl createPreviewViewController:sendflowDelegate:cameraPreviewDelegate:deeplinkMetadata:isWarmup:sendFlowSource:] */

void FUN_10610ec30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x148,param_3);
  _objc_storeWeak(param_1 + 0xf0,param_5);
  *(undefined1 *)(param_1 + 0x10) = param_7;
  func_0x00010be77ac0(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610ecf0; end: 10610f433; -[SCPreviewPresenterImpl presentPreviewViewController:transitionController:completion:] */

void FUN_10610ecf0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar4);
  uVar6 = param_1;
  func_0x00010be3e5a0();
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c27d8a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240b40(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c0d3840(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010bf9d6a0(uVar7);
  _objc_release(uVar7);
  uVar8 = *(ulong *)(param_1 + 0x1a8);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2757e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar9;
  func_0x00010c247520();
  if (uVar8 == 4) {
    uVar8 = uVar9;
    func_0x00010c261f60();
  }
  else {
    uVar8 = 0;
  }
  uVar10 = uVar9;
  func_0x00010bfdedc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c08fa60();
  if ((uVar11 != 0) && ((int)uVar8 != 0)) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0xf8);
    func_0x00010bf1f440();
    if (iVar2 != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0xf8);
      func_0x00010bf1f440();
      _objc_release(uVar10);
      if (iVar2 != 0) {
        func_0x00010c1b4a00(*(undefined8 *)(param_1 + 0x1a8));
      }
      goto LAB_10610eea8;
    }
  }
  _objc_release(uVar10);
LAB_10610eea8:
  uVar3 = (uint)*(undefined8 *)(param_1 + 0xf8);
  func_0x00010bf1f440();
  uVar10 = param_1;
  func_0x00010be420e0();
  if ((int)uVar10 != 0) {
    uVar10 = param_1;
    func_0x00010be420a0();
    if (((uint)uVar10 & uVar3) == 1) {
      uVar11 = *(ulong *)(param_1 + 0xc0);
      func_0x00010c27d8a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar11;
      func_0x00010c0d2ac0();
      _objc_release(uVar11);
      if ((uVar10 & 1) == 0) {
        func_0x00010c1b4a00(*(undefined8 *)(param_1 + 0x1a8));
      }
    }
  }
  uVar10 = param_1;
  func_0x00010be3f380();
  if ((int)uVar10 != 0) {
    func_0x00010c1b4a00(*(undefined8 *)(param_1 + 0x1a8));
  }
  if ((((uVar8 & 1) == 0) && (uVar8 = param_1, func_0x00010be420e0(), (uVar8 & 1) == 0)) &&
     (uVar8 = param_1, func_0x00010be3f380(), (uVar8 & 1) == 0)) {
    lVar16 = *(long *)(param_1 + 0x1a8);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c0f1ce0();
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    if (lVar17 == 0x3c) {
      func_0x00010c1b49c0();
    }
    else {
      func_0x00010c131e40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f1ce0();
      func_0x00010c1b49c0(*(undefined8 *)(param_1 + 0x1a8));
      _objc_release(uVar7);
    }
    _objc_release(lVar16);
  }
  else {
    func_0x00010c1b49c0(*(undefined8 *)(param_1 + 0x1a8));
  }
  uVar8 = param_1;
  func_0x00010c2a67c0();
  if ((int)uVar8 == 0) {
    uVar6 = param_1;
    func_0x00010be420e0();
    if ((int)uVar6 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c27d8a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d5a0();
      _objc_release(uVar7);
    }
    func_0x00010bf46180(*(undefined8 *)(param_1 + 0xa0));
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    puVar12 = PTR_PTR_1126c33e0;
    _objc_alloc(PTR_PTR_1126c33e0);
    func_0x00010c033480();
    func_0x00010c0d9840(uVar7);
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x1a8);
    func_0x00010c231b40();
    func_0x00010c200a80(*(undefined8 *)(param_1 + 0x1a8));
    puVar12 = *(undefined **)(param_1 + 0x1a8);
    func_0x00010c10aa80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0ba0(*(undefined8 *)(param_1 + 0x1a8));
    if ((int)uVar8 != 0) {
      func_0x00010be64020(param_1);
    }
    if ((int)uVar6 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0cfdc0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2849a0();
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar13);
    }
    puVar14 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10610f4a8;
    puStack_88 = &UNK_110842e18;
    uStack_80 = param_1;
    func_0x00010c2775c0();
    _objc_release(puVar14);
    func_0x00010c177700(param_4);
    puVar14 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10610f4f8;
    puStack_e0 = &UNK_11090f478;
    uStack_d8 = param_1;
    _objc_retain(uVar5);
    uStack_d0 = uVar5;
    _objc_retain(param_3);
    uStack_c8 = param_3;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    _objc_retain(puVar12);
    uStack_a8 = (undefined1)uVar6;
    uStack_a7 = (undefined1)uVar8;
    puStack_b8 = puVar12;
    _objc_retain(param_5);
    uStack_b0 = param_5;
    func_0x00010c2775c0(puVar14);
    _objc_release(puVar14);
    if ((uVar8 & 1) == 0) {
      uVar7 = uVar5;
      func_0x00010c23fe00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0cfdc0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010c2407e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00();
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_release(uVar15);
      _objc_release(uVar7);
      uVar15 = *(undefined8 *)(param_1 + 0x28);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0cfdc0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c2407e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar15);
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar13);
    }
    if (*(long *)(param_1 + 0x150) == 0) {
      _objc_storeWeak(param_1 + 0xe8,param_3);
      _objc_initWeak(auStack_100,param_1);
      _objc_initWeak(auStack_108,param_3);
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_10610f724;
      puStack_128 = &UNK_11086afa0;
      _objc_copyWeak(auStack_118,auStack_100);
      _objc_copyWeak(auStack_110,auStack_108);
      uStack_120 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_140);
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_118);
      _objc_destroyWeak(auStack_108);
      _objc_destroyWeak(auStack_100);
    }
    _objc_release(uStack_b0);
    _objc_release(puStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
  }
  _objc_release(puVar12);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10610f434; end: 10610f4a7;  */

void FUN_10610f434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8188;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  uVar2 = param_2;
  func_0x00010bf29240(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c16f600(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10610f4a8; end: 10610f4f7;  */

void FUN_10610f4a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 200);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10610f4f8; end: 10610f723;  */

void FUN_10610f4f8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bdd6c20(lVar2,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0,
                      *(undefined1 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9680();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bebcbe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193840(lVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c1b2260(lVar2,param_2,*(undefined1 *)(param_1 + 0x51));
  func_0x00010c171ce0(lVar2,param_2,*(long *)(*(long *)(param_1 + 0x20) + 0x150) == 0xb);
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a8);
  func_0x00010c073e40();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a8);
  if (iVar1 == 0) {
    func_0x00010c0fdb20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010c1dcbe0(lVar2,param_2,lVar4);
    }
    lVar5 = lVar2;
    func_0x00010c0ff3e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a8);
      func_0x00010c0c6c20();
      if (lVar5 == 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a8);
        func_0x00010bfbbbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 == 0) goto LAB_10610f660;
        lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a8);
        func_0x00010bfbbbe0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dcae0(lVar2,param_2,lVar5);
      }
      else {
        lVar5 = 0;
      }
    }
    _objc_release(lVar5);
  }
  else {
    func_0x00010bfbbbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcae0(lVar2,param_2,lVar4);
  }
LAB_10610f660:
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1302a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c29f120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1777a0(lVar2,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  func_0x00010bf22a80(uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200),param_2,uVar3);
  func_0x00010be645e0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10610f724; end: 10610f7a7;  */

void FUN_10610f724(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (param_1 != 0)) {
    lVar2 = *(long *)(lVar1 + 200);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010bf17b00(param_1,param_2,0,0);
      func_0x00010bf941a0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10610f7a8; end: 10610f8d3; -[SCPreviewPresenterImpl _notifyCameraPreviewDelegateSnapEditorPreviewExposedIfNeeded] */

void FUN_10610f7a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if (((uVar2 & 1) != 0) && (lVar3 = param_1, func_0x00010beb48e0(), (int)lVar3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x1a8);
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      lVar4 = lVar3;
      _objc_retain(lVar3);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10610f8d4; end: 10610f9d3;  */

void FUN_10610f8d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(lVar1 + 0x1a8);
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == lVar2) {
      lVar2 = *(long *)(lVar1 + 200);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((lVar2 != 0) && (lVar2 = lVar1, func_0x00010beb48e0(), (int)lVar2 != 0)) {
        uVar3 = lVar1 + 0xf0;
        _objc_loadWeakRetained();
        lVar2 = param_2;
        func_0x00010c29bb40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        _objc_opt_respondsToSelector(uVar3,PTR_s_didExposeSnapEditorPreviewForVid_1125bb1f0);
        if (((uVar4 & 1) != 0) && ((param_3 == 0 && (lVar2 != 0)))) {
          func_0x00010bf76120(uVar3);
        }
        _objc_release(lVar2);
        _objc_release(uVar3);
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10610f9d4; end: 10610fa6f; -[SCPreviewPresenterImpl _shouldNotifyCameraPreviewDelegateForSnapEditorPreview] */

undefined8 FUN_10610f9d4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c083340();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x1a8);
    func_0x00010c06d080();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0x1a8);
      func_0x00010c0811c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_1 + 0x1a8);
        func_0x00010c070a20();
        if ((uVar2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0xa8);
          func_0x00010c104920(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c240be0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          return uVar5;
        }
      }
    }
  }
  return 0;
}



/* Entry: 10610fa70; end: 10610faaf; -[SCPreviewPresenterImpl cameraFlipsWhileRecording] */

undefined8 FUN_10610fa70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010bf291a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29820();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10610fab0; end: 10610fab7; -[SCPreviewPresenterImpl handsFree] */

void FUN_10610fab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1a8),PTR_s_handsFree_1125d26b8)
  ;
  return;
}



/* Entry: 10610fab8; end: 10610fabf; -[SCPreviewPresenterImpl startRecordingTimestamp] */

void FUN_10610fab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_creationTime_1125b4458);
  return;
}



/* Entry: 10610fac0; end: 10610fad7; -[SCPreviewPresenterImpl _isLensGeoVenueEnabled] */

void FUN_10610fac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e41e38,0,0);
  return;
}



/* Entry: 10610fad8; end: 10610fb2f;  */

void FUN_10610fad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10610fb30; end: 10610fbb3; -[SCPreviewPresenterImpl setMultiSnapConfiguration:] */

void FUN_10610fb30(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c06eca0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1c9700(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  }
  else {
    func_0x00010bfb5140();
    _objc_release(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    param_3 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_opt_new(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x00010c0d9840(uVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610fbb4; end: 10610fbbb; -[SCPreviewPresenterImpl setMultiSnapConfigurationFuture:] */

void FUN_10610fbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setMultiSnapConfigurationFuture__11264fff0);
  return;
}



/* Entry: 10610fbbc; end: 10610fc87; -[SCPreviewPresenterImpl setHandsFree:activationType:] */

void FUN_10610fbbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2af040(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af060(*(undefined8 *)(param_1 + 0x58),param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5460(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bafe6f8(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a54a0(*(undefined8 *)(param_1 + 0x1b0),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10610fc88; end: 10610fd13; -[SCPreviewPresenterImpl setLowLightBoostEnabledBeforeCapture:] */

void FUN_10610fc88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b33e0(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1000(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10610fd14; end: 10610fd9f; -[SCPreviewPresenterImpl setIsContinuousCapture:] */

void FUN_10610fd14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b0460(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0260(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10610fda0; end: 10610fdab; -[SCPreviewPresenterImpl setTimerModeActive:] */

void FUN_10610fda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea27f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCameraCommonParametersWithCa_1125863a0,1,param_3);
  return;
}



/* Entry: 10610fdac; end: 10610fe13; -[SCPreviewPresenterImpl setBatchCaptureModeActive:] */

void FUN_10610fdac(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  func_0x00010bea27e0(param_1,param_2,3,param_3);
  if ((param_3 & 1) == 0) {
    func_0x00010c16f620(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af740(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10610fe14; end: 10610fe1b; -[SCPreviewPresenterImpl setAddSnapConfiguration:] */

void FUN_10610fe14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1654f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setAddSnapConfiguration__112636f58);
  return;
}



/* Entry: 10610fe1c; end: 10610feab; -[SCPreviewPresenterImpl setLevelerModeActive:] */

void FUN_10610fe1c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  func_0x00010c2aef20(*(undefined8 *)(param_1 + 0x58),param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bafe658(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4540(*(undefined8 *)(param_1 + 0x1b0),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10610feac; end: 10610feef; -[SCPreviewPresenterImpl setTimelineModeActive:] */

void FUN_10610feac(long param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010bea27e0(param_1,param_2,5,param_3);
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c215950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setTimelineConfiguration__112663078,0);
  return;
}



/* Entry: 10610fef0; end: 10610ff33; -[SCPreviewPresenterImpl setDirectorModeActive:] */

void FUN_10610fef0(long param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010bea27e0(param_1,param_2,0xb,param_3);
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c215950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setTimelineConfiguration__112663078,0);
  return;
}



/* Entry: 10610ff34; end: 10610ff3b; -[SCPreviewPresenterImpl setMediaSize:] */

void FUN_10610ff34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c5250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setMediaSize__11264eeb8);
  return;
}



/* Entry: 10610ff3c; end: 10610ff43; -[SCPreviewPresenterImpl setMediaAspectRatio:] */

void FUN_10610ff3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c40d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setMediaAspectRatio__11264ea58);
  return;
}



/* Entry: 10610ff44; end: 10610ff8f; -[SCPreviewPresenterImpl setSnapPageSource:] */

void FUN_10610ff44(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c204fa0(*(undefined8 *)(param_1 + 0x1a8));
  func_0x0001008cc2b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610ff90; end: 10611003b; -[SCPreviewPresenterImpl setCaptureSessionID:] */

void FUN_10610ff90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c179260(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  func_0x00010c179280(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611003c; end: 10611011b; -[SCPreviewPresenterImpl setSnapSessionID:] */

void FUN_10611003c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
  _objc_release(uVar1);
  func_0x00010c205640(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  func_0x00010c205660(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
  lVar2 = *(long *)(param_1 + 0x1c0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174ec0();
    _objc_release(uVar1);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611011c; end: 1061101a7; -[SCPreviewPresenterImpl setIsShutterSoundEnabled:] */

void FUN_10611011c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b1580(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4600(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061101a8; end: 1061101f7; -[SCPreviewPresenterImpl setFingerDownCaptureEnabled:] */

void FUN_1061101a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2ae240(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061101f8; end: 10611027b; -[SCPreviewPresenterImpl setCaptureSource:] */

void FUN_1061101f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2aa1e0(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010baef3d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1792c0(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611027c; end: 1061102ff; -[SCPreviewPresenterImpl setFlashMode:] */

void FUN_10611027c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2ae360(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010baf9e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19db40(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106110300; end: 10611034f; -[SCPreviewPresenterImpl setActiveCameraModes:] */

void FUN_106110300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c162560(uVar1,param_2,param_3);
  func_0x00010c162560(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106110350; end: 10611039f; -[SCPreviewPresenterImpl setDetailedCameraModes:] */

void FUN_106110350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c18c600(uVar1,param_2,param_3);
  func_0x00010c18c600(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061103a0; end: 1061103a7; -[SCPreviewPresenterImpl setFrameHealthChecker:] */

void FUN_1061103a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setFrameHealthChecker__1126456f0);
  return;
}



/* Entry: 1061103a8; end: 1061103f7; -[SCPreviewPresenterImpl setPlaceholderImage:] */

void FUN_1061103a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c1dcac0(uVar1,param_2,param_3);
  func_0x00010c221700(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061103f8; end: 1061103ff; -[SCPreviewPresenterImpl setStartRecordingTimestamp:] */

void FUN_1061103f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1856d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setCreationTime__11263efd0);
  return;
}



/* Entry: 106110400; end: 1061104bb; -[SCPreviewPresenterImpl setDeepLinkMetadata:] */

void FUN_106110400(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c18a960(*(undefined8 *)(param_1 + 0x1a8));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010c2a67c0();
  if ((int)lVar4 != 0) {
    func_0x000108eb7754(param_3,uVar3,*(undefined8 *)(param_1 + 0x138));
  }
  if (param_3 != 0) {
    func_0x00010be93a80(param_1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061104bc; end: 106110833; -[SCPreviewPresenterImpl applySnapRecoveryData:] */

void FUN_1061104bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x00010c1b1580(*(undefined8 *)(param_1 + 0x1a8),param_2,1);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c07c2a0(param_3);
    func_0x00010c1b3c80(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar1);
    lVar1 = param_3;
    func_0x00010bf31200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179260(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf31200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(*(undefined8 *)(param_1 + 0x1b0),param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c096b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c096b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(*(undefined8 *)(param_1 + 0x1b0),param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205640(param_1,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bef0a40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdd2ae0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f3c0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bef0a40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0cfdc0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      uStack_68 = 0x10611075c;
      puStack_60 = &UNK_110853ea0;
      _objc_retain(param_3);
      lStack_58 = param_3;
      func_0x00010c2849a0(uVar8,param_2,&puStack_78);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106110834; end: 106110887; -[SCPreviewPresenterImpl setAudioPresentInVideo:] */

void FUN_106110834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c16c080(*(undefined8 *)(param_1 + 0x1a8));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c080(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106110888; end: 106110bd7; -[SCPreviewPresenterImpl _setSnapReplyStickerView:] */

void FUN_106110888(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_150 [16];
  double dStack_140;
  undefined1 auStack_120 [16];
  double dStack_110;
  double adStack_f0 [6];
  double dStack_c0;
  double dStack_b8;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c242d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_7;
    func_0x00010c11ea80(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c111a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6be0(*(undefined8 *)(param_5 + 0x1a8),param_6,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010be85140(param_5);
    lVar1 = param_7;
    dVar12 = param_1;
    dVar13 = param_2;
    func_0x00010c242d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    dVar12 = dVar12 - param_2;
    func_0x00010bf345e0(lVar1);
    dVar13 = dVar13 - param_1;
    dVar8 = dVar12;
    dVar10 = dVar13;
    func_0x00010c1e6bc0(dVar12,dVar13,*(undefined8 *)(param_5 + 0x1a8));
    uVar3 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c0cfdc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar2 = param_5;
    func_0x00010c2a67c0();
    if ((int)lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010c262ca0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(lVar2);
      dVar9 = dVar8;
      _CGRectGetWidth(dVar8,dVar10,param_3,param_4);
      _CGRectGetHeight(dVar8,dVar10,param_3,param_4);
      if ((0.0 < dVar9) && (0.0 < dVar8)) {
        uVar6 = *(ulong *)(param_5 + 0x1a8);
        dVar10 = dVar8;
        func_0x00010c11ea80();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf2d240();
        _objc_release(uVar6);
        if ((uVar7 & 1) != 0) {
          uVar3 = *(undefined8 *)(param_5 + 0x1a8);
          func_0x00010c11ea80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf5cca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          func_0x00010bf20c00(lVar1);
          _CGRectGetWidth();
          dVar11 = dVar10;
          func_0x00010bf20c00(lVar1);
          _CGRectGetHeight();
          if (lVar1 == 0) {
            fVar14 = 0.0;
            _atan2f(0,0);
            dStack_c0 = 0.0;
            adStack_f0[0] = 0.0;
            dStack_110 = 0.0;
          }
          else {
            func_0x00010c27a460(&dStack_c0,lVar1);
            fVar14 = (float)dStack_b8;
            func_0x00010c27a460(adStack_f0,lVar1);
            _atan2f(fVar14,(float)adStack_f0[0]);
            func_0x00010c27a460(&dStack_c0,lVar1);
            func_0x00010c27a460(adStack_f0,lVar1);
            func_0x00010c27a460(auStack_120,lVar1);
            func_0x00010c27a460(auStack_150,lVar1);
            dStack_110 = dStack_110 * dStack_140;
          }
          func_0x00010befac80(dVar10 / dVar9,dVar11 / dVar8,dVar12 / dVar9,dVar13 / dVar8,
                              SQRT(dStack_110 + adStack_f0[0] * dStack_c0),(double)fVar14,
                              PTR_PTR_1126ba8a8,param_6,uVar4,uVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar4);
        }
        func_0x000108eb72f4(dVar12 / dVar9,dVar13 / dVar8,uVar5);
      }
    }
    _objc_release(uVar5);
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106110bd8; end: 106110c57; -[SCPreviewPresenterImpl setExposureBias:] */

void FUN_106110bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c2ad8a0(uVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c199000(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106110c58; end: 106110ce3; -[SCPreviewPresenterImpl setRingFlashColor:] */

void FUN_106110c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b75a0(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee380(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106110ce4; end: 106110d6f; -[SCPreviewPresenterImpl setRingFlashSize:] */

void FUN_106110ce4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b75c0(*(undefined8 *)(param_2 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_2 + 0x1a8),param_3,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee400(*(undefined8 *)(param_2 + 0x1b0),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106110d70; end: 106110dfb; -[SCPreviewPresenterImpl setRingFlashAutoEnableTooltipShown:] */

void FUN_106110d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b7580(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee360(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106110dfc; end: 106110e87; -[SCPreviewPresenterImpl setRingFlashAutoEnable:] */

void FUN_106110dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b7560(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee340(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106110e88; end: 106110f07; -[SCPreviewPresenterImpl setCameraFlipActionDuringCapture:] */

void FUN_106110e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c2a9d40(uVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c176640(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106110f08; end: 106110fa3; -[SCPreviewPresenterImpl setSpeedModeRecordingSpeed:] */

void FUN_106110f08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b6a60(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e29f18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8fe0(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106110fa4; end: 106110ff3; -[SCPreviewPresenterImpl setCameraShortcutId:] */

void FUN_106110fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c1770a0(uVar1,param_2,param_3);
  func_0x00010c1770c0(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106110ff4; end: 106111077; -[SCPreviewPresenterImpl setRingStyle:] */

void FUN_106110ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2b75e0(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bb09cbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee4c0(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106111078; end: 106111103; -[SCPreviewPresenterImpl setLensPosition:] */

void FUN_106111078(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b2b40(*(undefined8 *)(param_2 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_2 + 0x1a8),param_3,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc620(*(undefined8 *)(param_2 + 0x1b0),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106111104; end: 106111187; -[SCPreviewPresenterImpl setBackCameraDeviceType:] */

void FUN_106111104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2a9020(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010038f7e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e1e0(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106111188; end: 106111207; -[SCPreviewPresenterImpl setZoomFactorsRange:] */

void FUN_106111188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c2bd220(uVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c227ba0(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106111208; end: 106111293; -[SCPreviewPresenterImpl setPreCaptureZoomLevel:] */

void FUN_106111208(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c2b5940(*(undefined8 *)(param_2 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_2 + 0x1a8),param_3,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df9c0(*(undefined8 *)(param_2 + 0x1b0),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106111294; end: 106111317; -[SCPreviewPresenterImpl setZoomLevelGroup:] */

void FUN_106111294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2bd240(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bb1a7d0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227c40(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106111318; end: 10611139b; -[SCPreviewPresenterImpl setCaptureZoomSource:] */

void FUN_106111318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2aa280(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bb1a6f8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179420(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611139c; end: 1061113eb; -[SCPreviewPresenterImpl setLockScreenCaptureDeepLinkTarget:] */

void FUN_10611139c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c1b14a0(uVar1,param_2,1);
  func_0x00010c1c00a0(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061113ec; end: 10611144b; -[SCPreviewPresenterImpl setAspectRatio4By3ModeActive:] */

void FUN_1061113ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c1af360(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c2b01e0(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611144c; end: 106111453; -[SCPreviewPresenterImpl setShouldUseSinglePlayerForPlayback:] */

void FUN_10611144c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2015d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setShouldUseSinglePlayerForPlayb_11265df98);
  return;
}



/* Entry: 106111454; end: 10611145b; -[SCPreviewPresenterImpl snapEditorDidDetermineSendRecipientsCount:groupCount:] */

void FUN_106111454(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  *(undefined8 *)(param_1 + 0xe0) = param_4;
  return;
}



/* Entry: 10611145c; end: 106111957; -[SCPreviewPresenterImpl snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

void FUN_10611145c(long param_1,undefined8 param_2,uint param_3,int param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long lStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar12);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar3);
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  puVar4 = PTR_PTR_1126c33e0;
  _objc_alloc(PTR_PTR_1126c33e0);
  func_0x00010c033480();
  func_0x00010c0d9840(uVar12);
  _objc_release(puVar4);
  lVar5 = *(long *)(param_1 + 200);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 200));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar5 = param_1;
  func_0x00010bea12c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    if (param_3 != 0) goto LAB_1061116c4;
LAB_1061117a4:
    lVar6 = param_1 + 0x148;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf72d00();
  }
  else {
    lVar6 = lVar5;
    func_0x00010bf4b900();
    if ((param_3 & 1) != 0) {
LAB_1061116c4:
      puVar4 = PTR_PTR_1126c8158;
      _objc_alloc();
      func_0x00010bffe3a0();
      func_0x00010bf529e0(param_7);
      puVar8 = puVar4;
      func_0x00010c232c60();
      iVar13 = (int)puVar8;
      uVar9 = param_1 + 0x148;
      _objc_loadWeakRetained();
      uVar10 = uVar9;
      _objc_opt_respondsToSelector();
      _objc_release(uVar9);
      lVar6 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar6);
      if ((uVar10 & 1) == 0) {
        func_0x00010bf7b520();
      }
      else {
        func_0x00010bf7b540();
      }
      _objc_release(lVar6);
      _objc_release(puVar4);
      goto LAB_1061117c4;
    }
    if ((int)lVar6 != 0) {
      uVar9 = param_1 + 0x148;
      _objc_loadWeakRetained();
      uVar10 = uVar9;
      _objc_opt_respondsToSelector();
      _objc_release(uVar9);
      if ((uVar10 & 1) != 0) {
        lVar6 = param_1 + 0x148;
        _objc_loadWeakRetained();
        lVar7 = param_5;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR____NSArray0__struct_11034ab48;
        if (lVar7 != 0) {
          lStack_b8 = param_5;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_70 = lStack_b8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
        }
        lVar11 = param_1;
        func_0x00010bebf100(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf78560(lVar6);
        _objc_release(lVar11);
        if (lVar7 != 0) {
          _objc_release(puVar4);
          _objc_release(lStack_b8);
        }
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_copyWeak(auStack_78,param_1 + 0xe8);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106111958;
        puStack_90 = &UNK_110841fb0;
        _objc_copyWeak(auStack_80,auStack_78);
        lStack_88 = param_1;
        func_0x000100162d98("APPSTORE",&puStack_a8);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
        iVar13 = 0;
        goto LAB_1061117c4;
      }
    }
    uVar9 = param_1 + 0x148;
    _objc_loadWeakRetained();
    uVar10 = uVar9;
    _objc_opt_respondsToSelector();
    _objc_release(uVar9);
    if ((uVar10 & 1) == 0) goto LAB_1061117a4;
    lVar6 = param_1 + 0x148;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf78540();
  }
  _objc_release(lVar6);
  iVar13 = 1;
LAB_1061117c4:
  _objc_storeWeak(param_1 + 0x148,0);
  lVar6 = param_1 + 0xe8;
  _objc_loadWeakRetained();
  _objc_storeWeak(param_1 + 0xe8,0);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = iVar13;
  }
  if (iVar1 == 1) {
    func_0x00010bf17b00(lVar6);
    func_0x00010bf941a0(lVar6);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    param_5 = param_5 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = param_5;
    func_0x00010c0834c0();
    if ((int)lVar5 != 0) {
      lVar5 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        func_0x00010bf17b00(param_5);
        func_0x00010bf941a0(param_5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 106111958; end: 1061119db;  */

void FUN_106111958(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bf17b00(param_1,param_2,1,0);
      func_0x00010bf941a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061119dc; end: 106112c83; -[SCPreviewPresenterImpl _buildSnapEditorScopeBuilderWithSnapDocEditor:cameraViewController:transitionController:preselectedPluginType:quickCutResultConfig:includeQuickCutPlugin:] */

void FUN_1061119dc(double param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined *param_8,undefined4 param_9)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  ulong uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  puStack_1a8 = (undefined *)CONCAT44(puStack_1a8._4_4_,param_9);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_1c8 = param_6;
  _objc_retain(param_6);
  uStack_1e0 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  lStack_200 = *(long *)(param_2 + 0x180);
  if (lStack_200 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain();
  }
  lVar6 = param_2 + 0x110;
  _objc_loadWeakRetained();
  lVar2 = lVar6;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar2;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = lVar22;
  _objc_release(lVar20);
  _objc_release(lVar21);
  _objc_release(lVar2);
  _objc_release(lVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1a0 = puVar3;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126c8190;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010bf33700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  param_1 = param_1 * 1000.0;
  _objc_release(uVar24);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126c8198;
  _objc_alloc(PTR_PTR_1126c8198);
  func_0x00010bffca00();
  puStack_1d8 = puVar3;
  func_0x00010c17a280(puVar3);
  _objc_release(puVar7);
  puVar3 = PTR_PTR_1126c81a0;
  _objc_opt_new();
  func_0x00010c1c07c0();
  puVar7 = puVar3;
  func_0x00010c0b3c40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010befd320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar7);
  if (puVar8 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126c81a8;
    _objc_opt_new(PTR_PTR_1126c81a8);
    puVar8 = puVar3;
    func_0x00010c0b3c40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165a60();
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  lVar6 = *(long *)(param_2 + 0x1a8);
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = *(undefined **)(param_2 + 0x1a8);
  puStack_1b8 = puVar3;
  if (lVar6 == 0) {
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined *)0x0) {
      puVar8 = *(undefined **)(param_2 + 0x1a8);
      func_0x00010bf16100(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c247a20();
      func_0x00010bc9107c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar7 = *(undefined **)(param_2 + 0x1a8);
      func_0x00010bf16100(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c0df880(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3c40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca440();
      puVar25 = puStack_1b8;
      _objc_release(puVar3);
      goto LAB_106111d5c;
    }
  }
  else {
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010c247a20();
    func_0x00010bc9107c();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar3;
LAB_106111d5c:
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar3 = puVar25;
    func_0x00010c0b3c40(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca4e0();
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar3 = puVar25;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x1a8);
  func_0x00010bf429e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010c27c4a0();
  _objc_release(uVar5);
  puVar7 = puVar3;
  func_0x00010c0b3c40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010befd320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010baf8a44(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a480(puVar8);
  _objc_release(uVar24);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c073e40(*(undefined8 *)(param_2 + 0x1a8));
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226ba0(puVar8);
  _objc_release(puVar7);
  lVar6 = *(long *)(param_2 + 0x1a8);
  func_0x00010bf4ca00();
  func_0x00010baf2bd0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    func_0x00010c182160(puVar8);
    func_0x00010c182160(*(undefined8 *)(param_2 + 0x1a8));
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_240 = lVar6;
  puStack_210 = puVar8;
  func_0x00010bf5f200(*(undefined8 *)(param_2 + 0x1d0));
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3c40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbea0();
  _objc_release(puVar3);
  _objc_release(puVar7);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x1a8);
  func_0x00010c075080();
  if (iVar1 == 0) {
LAB_106112088:
    lStack_238 = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x40);
    _objc_retain(lVar6);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar6 == 0) goto LAB_106112088;
    func_0x00010befdac0(lVar6);
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_210;
    func_0x00010c225ba0(puStack_210);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010befdaa0(lVar6);
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225b80(puVar7);
    _objc_release(puVar3);
    func_0x00010c23b560(lVar6);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_1 != 0.0) {
      func_0x00010c23b560(lVar6);
      func_0x00010c0df720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2027a0(puVar7);
      _objc_release(puVar3);
    }
    func_0x00010bf04ae0(lVar6);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_1 != 0.0) {
      func_0x00010bf04ae0(lVar6);
      func_0x00010c0df720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168620(puStack_210);
      _objc_release(puVar3);
    }
    func_0x00010bf21200(lVar6);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_1 != 0.0) {
      func_0x00010bf21200(lVar6);
      func_0x00010c0df720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173c60(puStack_210);
      _objc_release(puVar3);
    }
    func_0x00010c083ec0(lVar6);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lStack_238 = lVar6;
    if (param_1 != 0.0) {
      func_0x00010c083ec0(lVar6);
      func_0x00010c0df7c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b5c80(puStack_210);
      _objc_release(puVar3);
    }
  }
  puVar3 = PTR_PTR_1126c81b0;
  _objc_opt_new();
  lVar6 = *(long *)(param_2 + 0x1a8);
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  lStack_220 = param_4;
  uStack_218 = param_5;
  puStack_1b0 = puVar4;
  if (lVar6 == 0) {
    func_0x00010c1994a0(puVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x1a8);
    func_0x00010bf9dee0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1994a0(puVar3);
    _objc_release(uVar24);
    _objc_release(uVar5);
  }
  _objc_release(lVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c097d40(*(undefined8 *)(param_2 + 0x1a8));
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar3;
  func_0x00010c1abe20(puVar3);
  _objc_release(puVar4);
  uVar11 = *(undefined8 *)(param_2 + 0x1a8);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = PTR_PTR_1126c81b8;
  uVar24 = uVar11;
  func_0x00010befc200();
  puStack_1f0 = (undefined *)CONCAT44(puStack_1f0._4_4_,(int)uVar24);
  uVar24 = uVar11;
  func_0x00010befc240();
  lStack_208 = CONCAT44(lStack_208._4_4_,(int)uVar24);
  uVar24 = uVar11;
  func_0x00010befc300();
  puStack_228 = (undefined *)CONCAT44(puStack_228._4_4_,(int)uVar24);
  uVar24 = uVar11;
  func_0x00010bf25140(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf252a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077e60(uVar11);
  uVar12 = uVar11;
  func_0x00010c077de0();
  uVar13 = uVar11;
  func_0x00010c0729c0();
  uVar14 = uVar11;
  func_0x00010c1322c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar11;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x00010c131ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar11;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  uStack_230 = uVar11;
  lStack_198 = param_2;
  func_0x00010bfceb60();
  _objc_retainAutoreleasedReturnValue();
  lStack_280 = CONCAT71(CONCAT61(lStack_280._2_6_,(char)uVar13),(char)uVar12);
  puVar3 = puStack_1e8;
  lStack_278 = uVar14;
  lStack_270 = uVar15;
  lStack_268 = uVar16;
  lStack_260 = uVar17;
  uStack_258 = uVar11;
  func_0x00010bf6ef20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  _objc_release(uVar11);
  lVar6 = lStack_198;
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar24);
  iVar1 = (int)*(undefined8 *)(lVar6 + 0x1a8);
  func_0x00010c07f480();
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126c81b8;
    func_0x00010c24b160(PTR_PTR_1126c81b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07b5a0(*(undefined8 *)(lVar6 + 0x1a8));
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puStack_1d0;
  func_0x00010c1b39e0(puStack_1d0);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(lVar6 + 0x1a8);
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070700();
  func_0x00010c180800(puVar7);
  _objc_release(uVar24);
  _objc_release(uVar5);
  puVar3 = puStack_1b0;
  func_0x00010bde59c0(lVar6);
  lVar21 = lVar6;
  func_0x00010be43360();
  lVar2 = lStack_220;
  if ((int)lVar21 != 0) {
    lVar21 = lVar6;
    func_0x00010be3e5a0();
    if ((int)lVar21 == 0) {
      puVar8 = PTR_PTR_1126c81b8;
      func_0x00010bf4ba80();
      if ((int)puVar8 != 0) goto LAB_106112434;
    }
    else {
      uVar18 = *(ulong *)(lVar6 + 0xa8);
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar18;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar23;
      func_0x00010c1319a0();
      _objc_release(uVar23);
      _objc_release(uVar18);
      if ((uVar19 & 1) != 0) {
LAB_106112434:
        func_0x00010befa120(puVar3);
        func_0x00010befa120(puVar3);
        puVar8 = PTR_PTR_1126c81c0;
        _objc_opt_new(PTR_PTR_1126c81c0);
        func_0x00010c1d0560(puStack_1a0);
        _objc_release(puVar8);
        uVar24 = 1;
        goto LAB_106112490;
      }
    }
  }
  uVar24 = 0;
LAB_106112490:
  iVar1 = (int)*(undefined8 *)(lVar6 + 0x1a8);
  func_0x00010c14bf20();
  if (iVar1 != 0) {
    func_0x00010befa120(puVar3);
  }
  puStack_228 = puVar4;
  func_0x00010c1e0b60(puVar7);
  puVar3 = puStack_1a0;
  func_0x00010c1d0560(puStack_1a0);
  func_0x00010c1d0560(puVar3);
  *(undefined8 *)(lVar6 + 0xd8) = 0;
  *(undefined8 *)(lVar6 + 0xe0) = 0;
  puVar4 = PTR_PTR_1126c81c8;
  _objc_alloc(PTR_PTR_1126c81c8);
  func_0x00010c044220();
  func_0x00010c1d0560(puVar3);
  _objc_release(puVar4);
  if ((int)puStack_1a8 != 0) {
    puVar3 = PTR_PTR_1126c81d0;
    _objc_alloc_init(PTR_PTR_1126c81d0);
    _objc_initWeak(auStack_108,lStack_198);
    _objc_initWeak(auStack_110,uStack_218);
    _objc_initWeak(auStack_118,uStack_1c8);
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_106112c84;
    puStack_138 = &UNK_11090f4d8;
    _objc_copyWeak(auStack_130,auStack_108);
    _objc_copyWeak(auStack_128,auStack_110);
    param_3 = auStack_118;
    _objc_copyWeak(auStack_120);
    func_0x00010c1d30c0(puVar3);
    func_0x00010c1d0560(puStack_1a0);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c81d8;
  _objc_alloc_init();
  puStack_1a8 = puVar3;
  func_0x00010c1e0ba0(puVar3);
  uVar5 = *(undefined8 *)(lStack_198 + 0x1d0);
  func_0x00010c0972c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = lVar2;
  puStack_1e8 = (undefined *)uVar5;
  func_0x00010c23fe00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar6;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ea0();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar4;
  _objc_release(puVar3);
  _objc_release(lVar21);
  _objc_release(lVar6);
  uVar5 = *(undefined8 *)(lStack_198 + 0x1b0);
  func_0x00010c096b60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lStack_198;
  func_0x00010be4bc00();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = lVar6;
  _objc_release(uVar5);
  iVar1 = (int)*(undefined8 *)(lStack_198 + 0x1a8);
  func_0x00010c075080();
  if (iVar1 != 0) {
    func_0x00010befa120(puStack_1b0);
    func_0x00010befa120(puStack_1b0);
  }
  puVar3 = puStack_1b0;
  if (puStack_1c0 != (undefined *)0x0) {
    puVar3 = puStack_1c0;
    func_0x00010c101a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c0b3c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puStack_1b8;
      func_0x00010c0b3c40();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar7 = puVar4;
        func_0x00010c0b3c40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c07c0(puStack_1b8);
      }
      else {
        puVar7 = puStack_1b8;
        func_0x00010c0b3c40(puStack_1b8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c0b3c40();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar7;
        param_3 = puVar8;
        func_0x00010717b5b8(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c07c0(puStack_1b8);
        _objc_release(puVar25);
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      _objc_release(puVar3);
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    puVar3 = puStack_1c0;
    func_0x00010bf8ca20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c101a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar8;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar6 = *plStack_180;
      do {
        puVar25 = (undefined *)0x0;
        do {
          if (*plStack_180 != lVar6) {
            _objc_enumerationMutation(puVar8);
          }
          func_0x00010befa120(puVar7);
          puVar25 = puVar25 + 1;
        } while (puVar3 != puVar25);
        puVar3 = puVar8;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puStack_1b0);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  func_0x00010bf529e0();
  func_0x00010c1ddee0(puStack_1a8);
  lVar6 = *(long *)(lStack_198 + 0x1a8);
  func_0x00010c29a1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar21 = *(long *)(lStack_198 + 0x1a8);
    func_0x00010c0fd9a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar21 == 0) {
      lVar20 = *(long *)(lStack_198 + 0x1a8);
      func_0x00010bfbbbc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar21);
      lVar20 = lVar21;
    }
    _objc_release(lVar21);
  }
  else {
    _objc_retain(lVar6);
    lVar20 = lVar6;
  }
  _objc_release(lVar6);
  uVar5 = *(undefined8 *)(lStack_198 + 0x1b0);
  func_0x00010c247520(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb10e88();
  _objc_release(uVar5);
  lVar21 = *(long *)(lStack_198 + 0x1c0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar21;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  if (lVar6 != 0) {
    func_0x00010c067fc0(lVar6);
  }
  lVar21 = *(long *)(lStack_198 + 0x178);
  _objc_retain(lVar21);
  if (lVar21 == 0) {
    lVar22 = lStack_198;
    func_0x00010bdeb360();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar22;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar22);
  }
  puVar4 = PTR_PTR_1126c81e0;
  _objc_alloc(PTR_PTR_1126c81e0);
  lVar22 = *(long *)(lStack_198 + 0x1b0);
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lStack_198 + 0x1a8);
  func_0x00010befebc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = uStack_1c8;
  lStack_260 = lStack_208;
  lStack_280 = lStack_200;
  lStack_278 = lVar22;
  lStack_270 = lVar21;
  lStack_268 = lVar20;
  uStack_250 = uVar5;
  func_0x00010c04a600(puVar4);
  _objc_release(uVar5);
  _objc_release(lVar22);
  uVar23 = (ulong)*(byte *)(lStack_198 + 0x1a0);
  func_0x00010c1d6420(puVar4);
  if ((int)uVar24 != 0) {
    uVar23 = 1;
    func_0x00010c161720(puVar4);
  }
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(lStack_208);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1a8);
  _objc_release(puStack_228);
  _objc_release(uStack_230);
  _objc_release(puStack_1d0);
  _objc_release(lStack_238);
  _objc_release(lStack_240);
  _objc_release(puStack_210);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1d8);
  _objc_release(puVar3);
  _objc_release(puStack_1a0);
  _objc_release(lStack_1f8);
  _objc_release(lStack_200);
  _objc_release(puStack_1c0);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_218);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar22 + 0x30);
  _objc_destroyWeak(lVar6 + 0x28);
  _objc_destroyWeak(lVar6 + 0x20);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  lVar21 = lVar2;
  __Unwind_Resume(lVar2);
  pcStack_288 = FUN_106112c84;
  lStack_2b0 = lVar22;
  lStack_2a8 = lVar6;
  uStack_2a0 = uVar24;
  lStack_298 = lVar2;
  puStack_290 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(uVar23);
  puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f0 = 0xc2000000;
  pcStack_2e8 = FUN_106112da0;
  puStack_2e0 = &UNK_11090f4a8;
  _objc_copyWeak(auStack_2c8,lVar21 + 0x20);
  _objc_retain(param_3);
  puStack_2d8 = param_3;
  _objc_retain(uVar23);
  uStack_2d0 = uVar23;
  _objc_copyWeak(auStack_2c0,lVar21 + 0x28);
  _objc_copyWeak(auStack_2b8,lVar21 + 0x30);
  func_0x0001000d76cc("APPSTORE",&puStack_2f8);
  _objc_destroyWeak(auStack_2b8);
  _objc_destroyWeak(auStack_2c0);
  _objc_release(uStack_2d0);
  _objc_release(puStack_2d8);
  _objc_destroyWeak(auStack_2c8);
  _objc_release(uVar23);
  _objc_release(param_3);
  return;
}



/* Entry: 106112c84; end: 106112d9f;  */

void FUN_106112c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106112da0;
  puStack_60 = &UNK_11090f4a8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_58 = param_2;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106112da0; end: 106112e1f;  */

void FUN_106112da0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e980(lVar3,param_2,uVar1,uVar2,lVar4,param_1);
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106112e20; end: 106112e9f;  */

void FUN_106112e20(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 106112ea0; end: 1061130fb; -[SCPreviewPresenterImpl _presentSnapEditorWithSnapDocEditor:quickCutConfig:cameraViewController:transitionController:] */

void FUN_106112ea0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_4 == 0) || (param_3 == 0)) || (param_5 == 0)) goto LAB_106113080;
  lVar3 = param_3;
  func_0x00010bf5a600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185560(param_3);
    _objc_release(puVar1);
  }
  _objc_initWeak(auStack_58,param_1);
  _objc_initWeak(auStack_60,param_5);
  _objc_initWeak(auStack_68,param_6);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1061130fc;
  puStack_98 = &UNK_11090f4a8;
  _objc_copyWeak(auStack_80,auStack_58);
  _objc_copyWeak(auStack_78,auStack_60);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  lStack_90 = param_3;
  _objc_retain(param_4);
  lStack_88 = param_4;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 200);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
LAB_10611302c:
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  else {
    lVar3 = *(long *)(param_1 + 200);
    func_0x00010c12e1c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) goto LAB_10611302c;
    func_0x00010c2a4ae0(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(lStack_88);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_106113080:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061130fc; end: 1061131fb;  */

void FUN_1061130fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    func_0x00010c177700(lVar3,param_2,lVar2);
    lVar4 = lVar1;
    func_0x00010bdd6c20(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),lVar2,lVar3,0,
                        *(undefined8 *)(param_1 + 0x28),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9680();
    func_0x00010c193840(lVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4a50);
    func_0x00010c171ce0(lVar4,param_2,*(long *)(lVar1 + 0x150) == 0xb);
    uVar5 = *(undefined8 *)(lVar1 + 0xd0);
    func_0x00010bf22a80(uVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 200),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061131fc; end: 106113283; -[SCPreviewPresenterImpl setActiveMicrophoneMode:preferredMicrophoneMode:lastPreferredMicrophoneMode:] */

void FUN_1061131fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x00010c2a7720(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5a60(*(undefined8 *)(param_1 + 0x58),param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2220(*(undefined8 *)(param_1 + 0x58),param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106113284; end: 10611339f; -[SCPreviewPresenterImpl _lensSendStepConfigForLensSessionId:swipeId:lensId:snapDocEditor:] */

void FUN_106113284(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (((lVar2 == 0) || (lVar2 = param_4, func_0x00010c08fa60(), lVar2 == 0)) ||
     (lVar2 = param_5, func_0x00010c08fa60(), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0xb0;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010c240a80(lVar1,param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061133a0; end: 1061133db; -[SCPreviewPresenterImpl _isReplyCamera] */

bool FUN_1061133a0(long param_1)

{
  if (*(ulong *)(param_1 + 0x158) < 10 && (1L << (*(ulong *)(param_1 + 0x158) & 0x3f) & 0x242U) != 0
     ) {
    return *(long *)(param_1 + 0x150) - 1U < 2;
  }
  return false;
}



/* Entry: 1061133dc; end: 10611340f; -[SCPreviewPresenterImpl _isMusicCameraFromSpotlight] */

bool FUN_1061133dc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x158) == 7) {
    lVar1 = *(long *)(param_1 + 0x1a8);
    func_0x00010c0d3840(lVar1);
    return lVar1 == 0xcb;
  }
  return false;
}



/* Entry: 106113410; end: 106113467; -[SCPreviewPresenterImpl _isContinuousCaptureFromSpotlight] */

bool FUN_106113410(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x158) == 0xd) {
    lVar2 = *(long *)(param_1 + 0x1a8);
    func_0x00010c131e40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f1ce0();
    bVar1 = lVar3 == 0x3c;
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106113468; end: 10611397b; -[SCPreviewPresenterImpl _configureSnapEditorActionBarForPluginConfigs:pluginBlocklist:sendConfig:preselectedDestinations:] */

void FUN_106113468(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x150) == 0xb) {
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c0ed440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6720(param_5);
    _objc_release(uVar2);
    puVar10 = PTR_PTR_1126c81e8;
    _objc_opt_new(PTR_PTR_1126c81e8);
    func_0x00010c2020a0();
    func_0x00010c2020c0(puVar10);
    func_0x00010c16cfa0(puVar10);
    func_0x00010c16cfc0(puVar10);
    func_0x00010c1851c0(param_5);
    func_0x00010c1a8380(param_5);
    func_0x00010befa120(param_4);
    puVar11 = PTR_PTR_1126c81f0;
    _objc_opt_new(PTR_PTR_1126c81f0);
    func_0x00010c1695c0();
    func_0x00010c2203c0(puVar11);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000108f48720(*(undefined8 *)(param_1 + 0xf8));
    func_0x00010c0df780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f000(puVar11);
    _objc_release(puVar3);
    func_0x00010c1d0560(param_3);
LAB_1061135e0:
    _objc_release(puVar11);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c083340();
    if (iVar1 == 0) {
LAB_106113648:
      lVar6 = *(long *)(param_1 + 0x1a8);
      func_0x00010c242400();
      if ((lVar6 == 8) && (uVar4 = param_1, func_0x00010be420e0(), (uVar4 & 1) == 0)) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
        func_0x00010c083340();
        if (iVar1 != 0) {
          uVar2 = *(undefined8 *)(param_1 + 0xf8);
          func_0x0001009703d0(uVar2,*(undefined8 *)(param_1 + 0x100));
          if ((int)uVar2 != 0) {
            uVar7 = *(ulong *)(param_1 + 0xf8);
            func_0x00010c0b84a0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar7;
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c067ec0();
            _objc_release(uVar4);
            _objc_release(uVar7);
            if ((int)uVar5 < 1) {
              dVar12 = 5.0;
            }
            else {
              dVar12 = (double)(uVar5 & 0xffffffff) / 1000.0;
            }
            uVar4 = *(ulong *)(param_1 + 0x1a8);
            func_0x00010c07de60(dVar12);
            if ((uVar4 & 1) == 0) {
              iVar1 = (int)*(undefined8 *)(param_1 + 0xf8);
              func_0x00010bf1f440();
              if (iVar1 != 0) {
                puVar10 = PTR_PTR_1126c81f8;
                func_0x00010c101a60(PTR_PTR_1126c81f8);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010c101a40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bef7f60(param_3);
                _objc_release(puVar11);
                puVar11 = puVar10;
                func_0x00010bf1da40(puVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(param_4);
                _objc_release(puVar11);
                puVar11 = PTR_PTR_1126c81e8;
                _objc_opt_new(PTR_PTR_1126c81e8);
                func_0x00010c16cfe0();
                func_0x00010c16d000(puVar11);
                func_0x00010c1a0ac0(puVar11);
                func_0x00010c1a0ae0(puVar11);
                func_0x00010c1851c0(param_5);
                goto LAB_1061135e0;
              }
            }
          }
        }
      }
      uVar4 = param_1;
      func_0x00010be420e0();
      if ((int)uVar4 == 0) goto LAB_1061138f4;
      uVar8 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c27d8a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c240980();
      _objc_release(uVar8);
      if ((int)uVar2 == 0) goto LAB_1061138f4;
      lVar9 = *(long *)(param_1 + 0xc0);
      func_0x00010c27d8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar9;
      func_0x00010c0d2aa0();
      _objc_release(lVar9);
      if (lVar6 != 2) {
        if (lVar6 != 1) goto LAB_1061138f4;
        func_0x00010c1a8380(param_5);
        puVar10 = PTR_PTR_1126c81b8;
        func_0x00010c24b160(PTR_PTR_1126c81b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(param_6);
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126c81c0;
        _objc_opt_new(PTR_PTR_1126c81c0);
        func_0x00010c1d0560(param_3);
        puVar11 = PTR_PTR_1126c81f0;
        _objc_opt_new(PTR_PTR_1126c81f0);
        func_0x00010c1695c0();
        func_0x00010c2203c0(puVar11);
        func_0x00010c1d0560(param_3);
        func_0x00010befa120(param_4);
        goto LAB_1061135e0;
      }
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x1a8);
      func_0x00010c07de40();
      if ((uVar4 & 1) != 0) goto LAB_106113648;
      uVar5 = *(ulong *)(param_1 + 0x1a8);
      func_0x00010c09a760();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c0971e0();
      if ((uVar4 & 1) == 0) {
        _objc_release(uVar5);
        goto LAB_106113648;
      }
      uVar2 = *(undefined8 *)(param_1 + 0xf8);
      func_0x0001009703d0(uVar2,*(undefined8 *)(param_1 + 0x100));
      _objc_release(uVar5);
      if ((int)uVar2 == 0) goto LAB_106113648;
    }
    puVar10 = PTR_PTR_1126c81f0;
    _objc_opt_new(PTR_PTR_1126c81f0);
    func_0x00010c1695c0();
    func_0x00010c2203c0(puVar10);
    func_0x00010c1d0560(param_3);
    func_0x00010befa120(param_4);
  }
  _objc_release(puVar10);
LAB_1061138f4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611397c; end: 106113a37; -[SCPreviewPresenterImpl _setCameraCommonParametersWithCameraMode:active:] */

void FUN_10611397c(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_4 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x1a8);
    func_0x00010bf291a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf29de0();
    _objc_release(lVar1);
    if (lVar2 != param_3) goto LAB_106113a04;
    param_3 = 0;
  }
  func_0x00010c2a9da0(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010baee46c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1769e0(*(undefined8 *)(param_1 + 0x1b0),param_2,param_3);
  _objc_release(param_3);
LAB_106113a04:
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf21f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106113a38; end: 106113a87; -[SCPreviewPresenterImpl _pvc_mediaAreaInsets] */

/* WARNING: Possible PIC construction at 0x000106113a60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106113a64) */
/* WARNING: Removing unreachable block (ram,0x00010c149020) */

void FUN_106113a38(void)

{
  func_0x00010c072be0();
                    /* WARNING: Could not recover jumptable at 0x00010c11cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIViewController_1126af898,PTR_s_pvc_mediaAreaInsets_112624cd0);
  return;
}



/* Entry: 106113a88; end: 106113b47; -[SCPreviewPresenterImpl _normalizeLegacyMotionFiltersForSnapEditorWithSnapDocEditor:] */

void FUN_106113a88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be64040(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x00010c09dea0();
  if (uVar3 != 0) {
    uVar3 = 0;
    do {
      puVar1 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be64040(param_1,param_2,param_3,puVar1);
      _objc_release(puVar1);
      uVar3 = uVar3 + 1;
      uVar2 = param_3;
      func_0x00010c09dea0();
    } while (uVar3 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106113b48; end: 106113ea7; -[SCPreviewPresenterImpl _normalizeLegacyMotionFiltersForSnapEditorWithSnapDocEditor:segment:] */

void FUN_106113b48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  int iVar11;
  undefined1 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_3;
  func_0x00010bfaec40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar2 != 0) {
    func_0x00010bf529e0(lVar8);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    uStack_108 = 0;
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x2020000000;
    uStack_128 = 0;
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0x3ff0000000000000;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar13 = *plStack_190;
      do {
        lVar9 = 0;
        do {
          if (*plStack_190 != lVar13) {
            _objc_enumerationMutation(lVar8);
          }
          uStack_1c0 = 0;
          uStack_1b0 = 0x2020000000;
          uStack_1a8 = 0;
          puStack_1b8 = &uStack_1c0;
          func_0x00010c0bd2a0(*(undefined8 *)(lStack_198 + lVar9 * 8));
          if ((*(byte *)(puStack_1b8 + 3) & 1) == 0) {
            func_0x00010befa120(puVar3);
          }
          __Block_object_dispose(&uStack_1c0,8);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar8;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar8);
    if (*(char *)(puStack_118 + 3) == '\x01') {
      func_0x00010c1310e0(param_3);
      dVar14 = (double)puStack_158[3];
      if (*(char *)(puStack_138 + 3) == '\x01') {
        dVar14 = -dVar14;
        puStack_158[3] = dVar14;
      }
      dVar15 = ABS(dVar14 + -1.0);
      dVar14 = ABS(dVar14 + 1.0) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar15) && (bVar1 = false, !NAN(dVar15) && !NAN(dVar14))) {
        bVar1 = dVar15 < dVar14;
      }
      if (!bVar1) {
        func_0x00010bdceae0(param_1);
      }
    }
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(puVar3);
  }
  _objc_release(lVar8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_140,8);
  uVar7 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  _objc_retain(uVar7);
  _objc_retain(uVar7);
  uVar4 = uVar7;
  func_0x00010bfd55a0();
  dVar14 = 1.0;
  if ((int)uVar4 != 0) {
    uVar4 = uVar7;
    func_0x00010bf3ce80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4ce20();
    _objc_release(uVar4);
    if ((int)uVar5 == 2) {
      uVar4 = uVar7;
      func_0x00010bf3ce80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d1220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c27dd80();
      _objc_release(uVar5);
      _objc_release(uVar4);
      iVar11 = (int)uVar6;
      if (iVar11 < 2) {
        if (iVar11 == 0) goto LAB_106113f7c;
        if (iVar11 == 1) {
          bVar10 = 0;
          uVar12 = 1;
          dVar14 = 0.5;
          goto LAB_106113f80;
        }
LAB_106114064:
        bVar10 = 0;
      }
      else {
        if (iVar11 == 2) {
          bVar10 = 0;
          uVar12 = 1;
          dVar14 = 2.0;
          goto LAB_106113f80;
        }
        if (iVar11 == 3) {
          bVar10 = 0;
          uVar12 = 1;
          dVar14 = 4.0;
          goto LAB_106113f80;
        }
        if (iVar11 != 4) goto LAB_106114064;
        bVar10 = 1;
      }
      uVar12 = 1;
      goto LAB_106113f80;
    }
  }
LAB_106113f7c:
  bVar10 = 0;
  uVar12 = 0;
LAB_106113f80:
  _objc_release(uVar7);
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = uVar12;
  if (*(char *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) == '\x01') {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 1;
    lVar8 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    *(byte *)(lVar8 + 0x18) = bVar10 | *(byte *)(lVar8 + 0x18);
    dVar15 = ABS(dVar14 + -1.0);
    dVar16 = (dVar14 + 1.0) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar15) && (bVar1 = false, !NAN(dVar15) && !NAN(dVar16))) {
      bVar1 = dVar15 < dVar16;
    }
    if (!bVar1) {
      *(double *)(*(long *)(*(long *)(param_3 + 0x38) + 8) + 0x18) = dVar14;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106113ea8; end: 10611406f;  */

void FUN_106113ea8(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfd55a0();
  dVar11 = 1.0;
  if ((int)uVar2 != 0) {
    uVar2 = param_2;
    func_0x00010bf3ce80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4ce20();
    _objc_release(uVar2);
    if ((int)uVar3 == 2) {
      uVar2 = param_2;
      func_0x00010bf3ce80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0d1220();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c27dd80();
      _objc_release(uVar3);
      _objc_release(uVar2);
      iVar7 = (int)uVar4;
      if (iVar7 < 2) {
        if (iVar7 == 0) goto LAB_106113f7c;
        if (iVar7 == 1) {
          bVar6 = 0;
          uVar8 = 1;
          dVar11 = 0.5;
          goto LAB_106113f80;
        }
LAB_106114064:
        bVar6 = 0;
      }
      else {
        if (iVar7 == 2) {
          bVar6 = 0;
          uVar8 = 1;
          dVar11 = 2.0;
          goto LAB_106113f80;
        }
        if (iVar7 == 3) {
          bVar6 = 0;
          uVar8 = 1;
          dVar11 = 4.0;
          goto LAB_106113f80;
        }
        if (iVar7 != 4) goto LAB_106114064;
        bVar6 = 1;
      }
      uVar8 = 1;
      goto LAB_106113f80;
    }
  }
LAB_106113f7c:
  bVar6 = 0;
  uVar8 = 0;
LAB_106113f80:
  _objc_release(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar8;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(byte *)(lVar5 + 0x18) = bVar6 | *(byte *)(lVar5 + 0x18);
    dVar9 = ABS(dVar11 + -1.0);
    dVar10 = (dVar11 + 1.0) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar10))) {
      bVar1 = dVar9 < dVar10;
    }
    if (!bVar1) {
      *(double *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = dVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106114070; end: 106114073;  */

void FUN_106114070(void)

{
  return;
}



/* Entry: 106114074; end: 10611410f; -[SCPreviewPresenterImpl _scaleSnapEditorTrackSegmentOutputDurationWithSnapDocEditor:segment:timeScale:] */

void FUN_106114074(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  double dStack_18;
  
  dVar2 = ABS(param_1 + -1.0);
  dVar3 = ABS(param_1 + 1.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar2) && (bVar1 = false, !NAN(dVar2) && !NAN(dVar3))) {
    bVar1 = dVar2 < dVar3;
  }
  if (!bVar1) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc0000000;
    pcStack_28 = FUN_106114110;
    puStack_20 = &UNK_11090f578;
    dStack_18 = param_1;
    func_0x00010c28b3e0(param_4,param_3,param_5,&puStack_38);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106114110; end: 1061141f3;  */

void FUN_106114110(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_2);
  dVar5 = *(double *)(param_1 + 0x20);
  _objc_retain(param_2);
  dVar4 = ABS(dVar5 + -1.0);
  dVar5 = ABS(dVar5 + 1.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar1 = dVar4 < dVar5;
  }
  if ((!bVar1) && (uVar2 = param_2, func_0x00010bfdda80(), (int)uVar2 != 0)) {
    uVar2 = param_2;
    func_0x00010c27c540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    uVar3 = param_2;
    func_0x00010c27c540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061141f4; end: 106114617; -[SCPreviewPresenterImpl _applySnapEditorPlaybackRate:snapDocEditor:segment:] */

ulong FUN_1061141f4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined **ppuStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_1061146a4;
  uStack_120 = 0x1061146b4;
  uStack_118 = 0;
  puStack_170 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x2020000000;
  uStack_148 = 0;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1061146bc;
  puStack_188 = &UNK_11090f5b8;
  puStack_168 = &uStack_140;
  puStack_158 = puStack_170;
  puStack_138 = &uStack_140;
  _objc_retain(param_3);
  ppuStack_178 = &PTR___NSConcreteGlobalBlock_11090f598;
  puStack_1e0 = puVar4;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x106114710;
  puStack_1c8 = &UNK_11090f5e8;
  puStack_1a8 = &uStack_140;
  uStack_180 = param_3;
  _objc_retain(param_3);
  uStack_1c0 = param_3;
  _objc_retain(param_4);
  ppuStack_1b0 = &PTR___NSConcreteGlobalBlock_11090f598;
  uStack_1b8 = param_4;
  func_0x00010c0be120(param_4);
  puStack_1f8 = &uStack_200;
  uStack_200 = 0;
  uStack_1f0 = 0x2020000000;
  uStack_1e8 = 0x3ff0000000000000;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x2020000000;
  uStack_208 = 0;
  lVar9 = puStack_138[5];
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      func_0x00010c288840(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  if (*(char *)(puStack_218 + 3) == '\x01') {
    dVar11 = (double)puStack_1f8[3];
    dVar12 = ABS(dVar11 + -1.0);
    dVar13 = ABS(dVar11 + 1.0) * 2.220446049250313e-16;
    bVar2 = true;
    if ((2.2250738585072014e-308 <= dVar12) && (bVar2 = false, !NAN(dVar12) && !NAN(dVar13))) {
      bVar2 = dVar12 < dVar13;
    }
    if (!bVar2) {
      if (*(char *)(puStack_158 + 3) == '\x01') {
        uVar10 = param_3;
        func_0x00010c09dea0();
        if (uVar10 != 0) {
          for (uVar10 = 0; uVar8 = param_3, func_0x00010c09dea0(), uVar10 < uVar8;
              uVar10 = uVar10 + 1) {
            puVar4 = PTR_PTR_1126affe8;
            func_0x00010c09e180(PTR_PTR_1126affe8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be9aac0(puStack_1f8[3],param_1);
            _objc_release(puVar4);
          }
          goto LAB_106114508;
        }
        dVar11 = (double)puStack_1f8[3];
      }
      func_0x00010be9aac0(dVar11,param_1);
    }
  }
LAB_106114508:
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_200,8);
  _objc_release(ppuStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(ppuStack_178);
  _objc_release(uStack_180);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return param_3;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_200,8);
  __Block_object_dispose(&uStack_160,8);
  uVar6 = 8;
  __Block_object_dispose(&uStack_140);
  __Unwind_Resume(param_3);
  _objc_retain(uVar6);
  uVar10 = uVar6;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bf0b760();
  if ((int)uVar8 == 5) {
    uVar5 = uVar6;
    func_0x00010c0c3fe0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bfd8fc0();
    _objc_release(uVar5);
  }
  else {
    uVar8 = 0;
  }
  _objc_release(uVar10);
  _objc_release(uVar6);
  return uVar8;
}



/* Entry: 106114618; end: 1061146a3;  */

undefined8 FUN_106114618(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8fc0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1061146a4; end: 1061146bb;  */

void FUN_1061146a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1061146bc; end: 106114753;  */

void FUN_1061146bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ff5a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106114754; end: 1061149cb;  */

void FUN_106114754(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfda580();
  _objc_release(uVar3);
  dVar7 = 1.0;
  if ((int)uVar4 != 0) {
    uVar3 = param_2;
    func_0x00010c118b40(param_2);
    fVar6 = SUB84(dVar7,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1002a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c249e20();
    dVar10 = (double)fVar6;
    _objc_release(uVar4);
    _objc_release(uVar3);
    dVar9 = ABS(dVar10 + 0.0) * 2.220446049250313e-16;
    if (dVar9 <= 2.2250738585072014e-308) {
      dVar9 = 2.2250738585072014e-308;
    }
    dVar7 = 1.0;
    if (dVar9 <= ABS(dVar10)) {
      dVar7 = dVar10;
    }
  }
  dVar7 = ABS(dVar7);
  dVar9 = ABS(*(double *)(param_1 + 0x38));
  dVar10 = dVar7 * 2.220446049250313e-16;
  if (dVar10 <= 2.2250738585072014e-308) {
    dVar10 = 2.2250738585072014e-308;
  }
  dVar8 = 1.0;
  if (dVar10 <= dVar7) {
    dVar8 = dVar7;
  }
  dVar7 = dVar9 * 2.220446049250313e-16;
  if (dVar7 <= 2.2250738585072014e-308) {
    dVar7 = 2.2250738585072014e-308;
  }
  dVar10 = 1.0;
  if (dVar7 <= dVar9) {
    dVar10 = dVar8 / dVar9;
  }
  cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  _objc_retain(param_2);
  dVar7 = ABS(dVar10 + -1.0);
  dVar9 = ABS(dVar10 + 1.0) * 2.220446049250313e-16;
  bVar2 = true;
  if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar9))) {
    bVar2 = dVar7 < dVar9;
  }
  if (!bVar2) {
    uVar3 = param_2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd7800();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = param_2;
      func_0x00010c118b40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfcd1a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (cVar1 != '\0') {
        func_0x00010c250f20(uVar4);
        func_0x00010c209a20(uVar4);
      }
      func_0x00010bf8b160(uVar4);
      func_0x00010c192d40(uVar4);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_2);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = dVar10;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  puVar5 = PTR_PTR_1126c8200;
  _objc_opt_new(PTR_PTR_1126c8200);
  func_0x00010c207d60((float)*(double *)(param_1 + 0x38));
  uVar3 = param_2;
  func_0x00010c118b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd880();
  _objc_release(uVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061149cc; end: 106114abf; -[SCPreviewPresenterImpl willOpenSnapEditor] */

uint FUN_1061149cc(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c27d8a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c240b40(uVar7);
  uVar11 = *(undefined8 *)(param_1 + 0x150);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c0d3840(uVar8);
  uVar9 = uVar3;
  func_0x00010bf2aec0(uVar3,param_2,uVar6,uVar7,uVar11,uVar1,uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar10 = param_1;
  func_0x00010c232060();
  if ((uVar10 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_1 + 200);
    func_0x00010c071800(uVar11);
    uVar2 = (uint)uVar11 & (uint)uVar9;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 106114ac0; end: 106114bb3; -[SCPreviewPresenterImpl mayOpenSnapEditor] */

uint FUN_106114ac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c27d8a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x150);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  uVar7 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c0d3840(uVar7);
  uVar8 = uVar3;
  func_0x00010bf29d80(uVar3,param_2,uVar6,uVar9,uVar1,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (*(long *)(param_1 + 0x150) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010bf1f440(uVar9,param_2,&PTR____CFConstantStringClassReference_110e41f18,0,0);
    uVar2 = (uint)uVar9;
  }
  else {
    uVar2 = 0;
  }
  return ((uint)uVar8 | uVar2) & 1;
}



/* Entry: 106114bb4; end: 106114c2b; -[SCPreviewPresenterImpl shouldRemoveSoftTrim] */

void FUN_106114bb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c0c3760();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c0b84a0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e41f38,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106114c2c; end: 106114c33; -[SCPreviewPresenterImpl shouldPresentSnapEditorOnPreviewExit] */

void FUN_106114c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c231b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_shouldOpenSnapEditorOnPreviewExi_11266a0f8);
  return;
}



/* Entry: 106114c34; end: 1061151f3; -[SCPreviewPresenterImpl _presentPreviewViewController:cameraViewController:transitionController:completion:] */

void FUN_106114c34(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar8 = param_2;
  func_0x00010be3e5a0();
  if ((int)lVar8 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0cfdc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2849a0();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2507c0();
  _objc_release(uVar3);
  lVar4 = *(long *)(param_2 + 0x1a8);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uVar5 = *(ulong *)(param_2 + 0x1a8);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010befc200();
    if ((uVar6 & 1) == 0) {
      uVar7 = *(ulong *)(param_2 + 0x1a8);
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c06d820();
      if ((uVar6 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_2 + 0x1a8);
        func_0x00010c073e40(uVar3);
      }
      else {
        uVar3 = 1;
      }
      _objc_release(uVar7);
    }
    else {
      uVar3 = 1;
    }
    _objc_release(uVar5);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(lVar8);
  _objc_release(lVar4);
  func_0x00010c06c6e0(param_6);
  lVar8 = *(long *)(param_2 + 0x1a8);
  func_0x00010c0c6c20();
  if (lVar8 == 0) {
    puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _CGRectGetHeight();
    if (20.0 < param_1) {
      uVar1 = param_4;
      func_0x00010c1070e0();
      _objc_release(puVar9);
      if ((int)uVar1 == 0) goto LAB_106114e94;
      puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a2e0();
    }
    _objc_release(puVar9);
  }
LAB_106114e94:
  func_0x00010c1b5c00(param_6,param_3,uVar3);
  func_0x00010c177700(param_6,param_3,param_5);
  uVar3 = *(undefined8 *)(param_2 + 0x1a8);
  func_0x00010c0c6c20(uVar3);
  func_0x00010c1794a0(param_6,param_3,uVar3);
  func_0x00010c1c8b80(param_4,param_3,0);
  func_0x00010c219b20(param_4,param_3,param_6);
  uVar3 = uVar2;
  func_0x00010bf30e80();
  if (((uint)uVar3 & 0xfffffffe) == 2) {
    uVar3 = uVar2;
    func_0x00010c23fe00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0cfdc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c2407e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f00();
    _objc_release(uVar11);
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_release(uVar3);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0cfdc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c2407e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar10,param_3,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar11);
  }
  func_0x00010c17f520(*(undefined8 *)(param_2 + 0x1a8),param_3,*(undefined8 *)(param_2 + 0x178));
  uVar3 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2507c0();
  _objc_release(uVar3);
  func_0x00010bf42760(*(undefined8 *)(param_2 + 0x1a8));
  uVar3 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95360();
  _objc_release(uVar3);
  puVar9 = PTR_PTR_1126c8208;
  func_0x00010bf92b60(PTR_PTR_1126c8208,param_3,*(undefined8 *)(param_2 + 0xf8));
  if ((int)puVar9 == 0) {
    lVar4 = param_5;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    if (lVar4 != 0) {
      lVar8 = lVar4;
    }
    _objc_retain(lVar8);
    _objc_release(lVar4);
    func_0x00010c10f940(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar12 = *(long *)(param_2 + 0x120);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c27b1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar12);
    if (lVar4 == 0) {
      func_0x00010c10eda0(lVar8,param_3,param_4,1,param_7);
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x120);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c27b1e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106115268;
      puStack_80 = &UNK_11084a9e8;
      _objc_retain(lVar8);
      lStack_78 = lVar8;
      _objc_retain(param_4);
      uStack_70 = param_4;
      _objc_retain(param_7);
      uStack_68 = param_7;
      func_0x00010bf6f440(uVar3,param_3,&puStack_98);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
    }
    _objc_release(lVar8);
  }
  else {
    func_0x00010c10eda0(param_5,param_3,param_4,1,param_7);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95360();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1061151f4; end: 106115267;  */

void FUN_1061151f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8188;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  uVar2 = param_2;
  func_0x00010bf29240(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c16f600(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106115268; end: 10611527b;  */

void FUN_106115268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentViewController_animated_c_112621588,
             *(undefined8 *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10611527c; end: 1061161ff; -[SCPreviewPresenterImpl _configureCommonWithManagedCapturerState:captionManager:timelineConfiguration:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:setLensConfigurationBasedOnCurrentLens:nightModeServices:externalContent:imageCaptureConfiguration:videoCaptureConfiguration:] */

void FUN_10611527c(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined4 param_14,undefined4 param_15,undefined8 param_16,char param_17,
                  undefined4 param_18,ulong param_19,undefined8 param_20,long param_21,long param_22
                  )

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  uVar14 = *(undefined8 *)(param_2 + 0x1a8);
  _objc_retain(param_16);
  _objc_retain(param_12);
  _objc_retain(param_11);
  func_0x00010c1c06a0(uVar14);
  *(undefined1 *)(param_2 + 0x1a0) = 0;
  func_0x00010c1c4ca0(*(undefined8 *)(param_2 + 0x1a8));
  lVar7 = param_5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    func_0x00010c178ce0(*(undefined8 *)(param_2 + 0x1a8));
  }
  else {
    lVar8 = param_5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ce0(*(undefined8 *)(param_2 + 0x1a8));
    _objc_release(puVar2);
    _objc_release(lVar8);
  }
  _objc_release(lVar7);
  uVar14 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bfb24e0(param_4);
  func_0x00010c2ae380(uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb24e0(param_4);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19db80(*(undefined8 *)(param_2 + 0x1b0));
  _objc_release(puVar2);
  uVar14 = *(undefined8 *)(param_2 + 0x58);
  uVar10 = param_19;
  func_0x00010bef02e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c080420();
  if ((int)uVar9 == 0) {
    func_0x00010c2b3400(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar9 = param_19;
    func_0x00010bef02e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c071800();
    if ((uVar3 & 1) == 0) {
      func_0x00010c0b5980();
    }
    func_0x00010c2b3400(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
  }
  _objc_release(uVar10);
  uVar14 = *(undefined8 *)(param_2 + 0x58);
  lVar7 = param_2 + 0x78;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088420();
  func_0x00010c2a9940(uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = param_2 + 0x78;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088420();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173cc0(*(undefined8 *)(param_2 + 0x1b0));
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  func_0x00010c26a2a0(param_12);
  _objc_release(param_12);
  uVar14 = param_16;
  func_0x00010c269d40(param_16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60de0();
  dVar19 = param_1;
  _objc_release(uVar5);
  _objc_release(uVar14);
  uVar14 = param_16;
  func_0x00010c269d40(param_16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db780();
  dVar17 = dVar19;
  _objc_release(uVar5);
  _objc_release(uVar14);
  uVar14 = param_16;
  func_0x00010c269d40(param_16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_16);
  uVar5 = uVar14;
  func_0x00010c2bf1a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6aac0();
  dVar18 = dVar17;
  _objc_release(uVar5);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x58);
  lVar7 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070860();
  func_0x00010c2b05e0(uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070860();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b06a0(*(undefined8 *)(param_2 + 0x1b0));
  _objc_release(puVar2);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  uVar14 = *(undefined8 *)(param_2 + 0x58);
  lVar7 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db600();
  func_0x00010c2b4120((float)dVar18,uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db600();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c91e0(*(undefined8 *)(param_2 + 0x1b0));
  _objc_release(puVar2);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  dVar19 = (double)(long)(dVar19 * 100.0) / 100.0;
  func_0x00010c2bd280(dVar19,*(undefined8 *)(param_2 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar19,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227d00(*(undefined8 *)(param_2 + 0x1b0));
  _objc_release(puVar2);
  fVar16 = ABS((float)param_1 + (float)dVar17) * 1.1920929e-07;
  if (fVar16 <= 1.1754944e-38) {
    fVar16 = 1.1754944e-38;
  }
  dVar19 = (double)(ulong)(uint)fVar16;
  func_0x00010c2bd180(*(undefined8 *)(param_2 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2271c0(*(undefined8 *)(param_2 + 0x1b0));
  _objc_release(puVar2);
  uVar10 = param_4;
  func_0x00010c24d060(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60220();
  _objc_release(uVar10);
  func_0x00010c2bc7a0(*(undefined8 *)(param_2 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222000(*(undefined8 *)(param_2 + 0x1b0));
  _objc_release(puVar2);
  if (param_17 != '\0') {
    lVar7 = param_2;
    func_0x00010be4b900();
    _objc_retainAutoreleasedReturnValue();
    if (param_21 == 0) {
      lVar8 = param_22;
      func_0x00010bef0a60();
      _objc_retainAutoreleasedReturnValue();
      if (param_22 != 0) goto LAB_106115a34;
    }
    else {
      lVar8 = param_21;
      func_0x00010bef0a60();
      _objc_retainAutoreleasedReturnValue();
LAB_106115a34:
      uVar5 = *(undefined8 *)(param_2 + 0xb8);
      func_0x00010beec300();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bf3c1a0();
      _objc_release(uVar5);
      if ((int)uVar14 != 0) {
        lVar4 = lVar7;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
          _objc_release();
          if (lVar4 == 0) {
            lVar8 = 0;
            goto LAB_106115ac0;
          }
          lVar15 = 0;
          lVar4 = lVar7;
        }
        else {
          lVar15 = lVar4;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(lVar15);
          lVar15 = lVar7;
        }
        _objc_release(lVar4);
        lVar7 = lVar15;
      }
    }
LAB_106115ac0:
    lVar4 = lVar8;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      lVar4 = lVar7;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0xb8);
        func_0x00010beec300();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar5;
        func_0x00010c1115a0();
        _objc_release(uVar5);
        if ((int)uVar14 != 0) {
          func_0x00010c1c06a0(*(undefined8 *)(param_2 + 0x1a8));
        }
      }
      else {
        _objc_release();
      }
    }
    func_0x00010c1be380(*(undefined8 *)(param_2 + 0x1a8));
    lVar4 = lVar7;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0cfdc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    dVar19 = 1.60807493534087e-314;
    _objc_retain(param_22);
    _objc_retain(lVar4);
    func_0x00010c28a040(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar6);
    _objc_release(param_22);
    _objc_release(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  func_0x00010c1baaa0(*(undefined8 *)(param_2 + 0x1a8));
  func_0x00010c097d40(*(undefined8 *)(param_2 + 0x1d0));
  func_0x00010c1bd320(*(undefined8 *)(param_2 + 0x1a8));
  func_0x00010bf70d80(param_4);
  func_0x00010c1a0f00(*(undefined8 *)(param_2 + 0x1a8));
  uVar14 = *(undefined8 *)(param_2 + 0x1b8);
  func_0x00010c123e60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8f80(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x1b8);
  func_0x00010bf70b80(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8f60(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x1b8);
  func_0x00010beec940(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8fa0(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x1b8);
  func_0x00010bfcfc60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8fc0(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  uVar14 = param_10;
  func_0x00010c0b3c20(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9400(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  uVar14 = param_11;
  func_0x00010c0b3c20(param_11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  func_0x00010c1a4460(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  func_0x00010bea7aa0(param_2);
  uVar14 = param_8;
  func_0x00010c07c220();
  if ((int)uVar14 != 0) {
    uVar14 = param_8;
    func_0x00010c1298e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9f00(*(undefined8 *)(param_2 + 0x1a8));
    _objc_release(uVar14);
  }
  uVar14 = param_20;
  func_0x00010bf4c1a0(param_20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199480(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  lVar7 = *(long *)(param_2 + 0x1a8);
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010bfebce0(param_20);
    func_0x00010c1bd320(*(undefined8 *)(param_2 + 0x1a8));
  }
  lVar7 = param_7;
  func_0x00010c242d20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
LAB_106115e28:
    uVar9 = *(ulong *)(param_2 + 0x1a8);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c1297c0();
    if ((uVar10 < 0xf) && ((1L << (uVar10 & 0x3f) & 0x6c00U) != 0)) {
LAB_106115e5c:
      func_0x00010c1f5d60(*(undefined8 *)(param_2 + 0x1a8));
    }
    else {
      uVar10 = *(ulong *)(param_2 + 0x1a8);
      func_0x00010c07bf60();
      if ((uVar10 & 1) != 0) goto LAB_106115e5c;
      uVar14 = *(undefined8 *)(param_2 + 0x1a8);
      func_0x00010c129720(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22efc0();
      func_0x00010c1f5d60(*(undefined8 *)(param_2 + 0x1a8));
      _objc_release(uVar14);
    }
    _objc_release(uVar9);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x1a8);
    func_0x00010c243400();
    if (lVar8 == 0x15) goto LAB_106115e28;
    lVar8 = *(long *)(param_2 + 0x1a8);
    func_0x00010c243400();
    if (lVar8 == 4) goto LAB_106115e28;
    func_0x00010c1f5d60(*(undefined8 *)(param_2 + 0x1a8));
  }
  _objc_release(lVar7);
  uVar10 = *(ulong *)(param_2 + 0x1a8);
  func_0x00010c07ec60();
  if ((uVar10 & 1) == 0) {
    func_0x00010bf3a660(param_9);
  }
  func_0x00010c1bc660(*(undefined8 *)(param_2 + 0x1a8));
  uVar14 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf21f60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1763a0(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  func_0x00010c1c83c0(*(undefined8 *)(param_2 + 0x1a8));
  func_0x00010c212500(*(undefined8 *)(param_2 + 0x1a8));
  func_0x00010c1d67e0(*(undefined8 *)(param_2 + 0x1a8));
  uVar14 = param_13;
  func_0x00010c231ba0();
  if ((int)uVar14 == 0) {
    uVar10 = param_4;
    func_0x00010c1410c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c141120();
    _objc_release(uVar10);
    if ((uVar9 & 0xfffffffffffffffe) == 2) {
      uVar5 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010c150ea0(uVar5);
      fVar16 = SUB84(dVar19,0);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1410a0();
      _objc_release(uVar14);
      _objc_release(uVar5);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar2 == (undefined *)0x0) || (func_0x00010bfb2c80(puVar2), fVar16 <= 0.0))
      goto LAB_1061160f4;
    }
    else {
      uVar10 = param_4;
      func_0x00010bfb24e0();
      if ((int)uVar10 == 0) goto LAB_1061160fc;
      uVar5 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010c150ea0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c127ec0();
      _objc_release(uVar14);
      _objc_release(uVar5);
      if (dVar19 <= 0.0) goto LAB_1061160fc;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar19,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1c83c0(*(undefined8 *)(param_2 + 0x1a8));
  }
  else {
    func_0x00010c26a080(param_13);
    if ((dVar19 <= 0.0) ||
       (func_0x00010c0ed8e0(param_13), puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570, dVar19 <= 0.0)
       ) goto LAB_1061160fc;
    func_0x00010c26a080(param_13);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212500(*(undefined8 *)(param_2 + 0x1a8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0ed8e0(param_13);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d67e0(*(undefined8 *)(param_2 + 0x1a8));
  }
LAB_1061160f4:
  _objc_release(puVar2);
LAB_1061160fc:
  uVar14 = param_10;
  func_0x00010bf4e8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c93e0(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(uVar14);
  if (*(long *)(param_2 + 0x150) == 0) {
    func_0x00010bf1f440(*(undefined8 *)(param_2 + 0x108));
  }
  func_0x00010c1ba420(*(undefined8 *)(param_2 + 0x1a8));
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar7 = *(long *)(param_4 + 0x20);
  if (lVar7 == 0) {
    if (*(char *)(param_4 + 0x38) == '\x01') {
      func_0x00010c1ba8a0(param_3);
    }
  }
  else {
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    uVar14 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(uVar14);
    _objc_release(lVar7);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c2813a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b37d0;
    _objc_alloc_init();
    uVar14 = uVar5;
    func_0x00010bef2c20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar2);
    _objc_release(uVar14);
    uVar14 = uVar5;
    func_0x00010c11fae0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7380(puVar2);
    _objc_release(uVar14);
    uVar14 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219320();
    _objc_release(uVar14);
    puVar11 = puVar2;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c08fa60();
    _objc_release(puVar11);
    if (puVar12 != (undefined *)0x0) {
      puVar11 = puVar2;
      func_0x00010c11fae0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf51e00();
      uVar14 = param_3;
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7380();
      _objc_release(uVar14);
      _objc_release(puVar12);
      _objc_release(puVar11);
    }
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  iVar1 = (int)*(undefined8 *)(param_4 + 0x28);
  func_0x00010c0744a0();
  if (iVar1 != 0) {
    func_0x00010bed8ce0(*(undefined8 *)(param_4 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106116200; end: 1061163e3;  */

void FUN_106116200(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      func_0x00010c1ba8a0(param_2);
    }
  }
  else {
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    uVar3 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(uVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2813a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b37d0;
    _objc_alloc_init();
    uVar3 = uVar4;
    func_0x00010bef2c20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar5);
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c11fae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7380(puVar5);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219320();
    _objc_release(uVar3);
    puVar6 = puVar5;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    if (puVar7 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010c11fae0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf51e00();
      uVar3 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7380();
      _objc_release(uVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c0744a0();
  if (iVar1 != 0) {
    func_0x00010bed8ce0(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


