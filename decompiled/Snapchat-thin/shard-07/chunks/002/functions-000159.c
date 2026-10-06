/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052f0b84; end: 1052f0bbf; -[SCCameraHardwareServicesAPIImpl isAudioCaptureEnabled] */

undefined8 FUN_1052f0b84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0ede0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052f0bc0; end: 1052f0d13; -[SCCameraHardwareServicesAPIImpl _setLensesActive:source:completionHandler:context:] */

void FUN_1052f0bc0(long param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  if ((param_4 == 4) || (param_4 == 1)) {
    if (ppuVar1 != (undefined **)0x0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    _objc_release(ppuVar1);
    ppuVar1 = &PTR___NSConcreteGlobalBlock_110876ad0;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1052f0d18;
  puStack_80 = &UNK_110875f40;
  lStack_78 = param_1;
  uStack_70 = uVar4;
  ppuStack_68 = ppuVar1;
  lStack_60 = param_4;
  uStack_58 = param_3;
  _objc_retain(ppuVar1);
  _objc_retain(uVar4);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_98);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuStack_68);
  _objc_release(uStack_70);
  _objc_release(ppuVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 1052f0d14; end: 1052f0d17;  */

void FUN_1052f0d14(void)

{
  return;
}



/* Entry: 1052f0d18; end: 1052f0ea3;  */

void FUN_1052f0d18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5c8a0(uVar1,param_2,*(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x38) == 4 || *(long *)(param_1 + 0x38) == 1) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1052f0e04;
    puStack_50 = &UNK_11084a9e8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar1;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1052f0ea4; end: 1052f0f93; -[SCCameraHardwareServicesAPIImpl setVideoOrientation:] */

void FUN_1052f0ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f0f94; end: 1052f0fc7;  */

void FUN_1052f0f94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f0fc8; end: 1052f10d3; -[SCCameraHardwareServicesAPIImpl _setVideoOrientation:] */

void FUN_1052f0fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8620(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f10d4; end: 1052f1137;  */

void FUN_1052f10d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf17e40();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c221b40();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf427c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f1138; end: 1052f15bb; -[SCCameraHardwareServicesAPIImpl _turnARSessionOnWithManagedSessionUpdate:] */

void FUN_1052f1138(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf093c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((uVar3 & 1) == 0) &&
     (lVar4 = param_1, func_0x00010bf2d480(), puVar6 = PTR_PTR_1126b6fe8, (int)lVar4 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7ec0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2a8740();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209fc0();
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar12);
    _objc_release(uVar5);
    pcVar10 = "CAMERA_TURN_AR_SESSION_ON";
    func_0x0001000ba800("CAMERA_TURN_AR_SESSION_ON");
    lVar11 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010bf093a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    if (lVar4 == 0) {
      puVar6 = PTR_PTR_1126b7068;
      func_0x00010bf093a0(PTR_PTR_1126b7068);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16a040();
      _objc_release(uVar12);
      _objc_release(puVar6);
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010bf093a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229aa0(uVar12);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar9);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf427c0();
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_initWeak(auStack_68,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1052f15bc;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x000100162d98("APPSTORE",&puStack_90);
    func_0x00010bf3a6a0(param_1);
    if (param_3 != 0) {
      lVar14 = *(long *)(param_1 + 0xb8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar14;
      func_0x00010010fab4();
      lVar4 = lVar14;
      if ((int)lVar11 == 0) {
        lVar4 = 0;
      }
      _objc_retain(lVar4);
      _objc_release(lVar14);
      if (lVar4 != 0) {
        func_0x00010bf70500(lVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14a3a0();
        _objc_release(lVar14);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2568a0();
      _objc_release(uVar12);
      _objc_release(lVar4);
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf093a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___ARConfiguration_1126b7048;
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70d80();
    uVar15 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278fc0();
    func_0x00010c14c900(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142b60(uVar12);
    _objc_release(puVar6);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    func_0x0001000e2a84(pcVar10);
  }
  return;
}



/* Entry: 1052f15bc; end: 1052f169f;  */

void FUN_1052f15bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72f20();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227c80();
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f16a0; end: 1052f190f; -[SCCameraHardwareServicesAPIImpl _turnARSessionOffWithManagedSessionUpdate:] */

void FUN_1052f16a0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf093c0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  if ((int)uVar7 != 0) {
    pcVar3 = "CAMERA_TURN_AR_SESSION_OFF";
    func_0x0001000ba800("CAMERA_TURN_AR_SESSION_OFF");
    func_0x00010c2557a0(*(undefined8 *)(param_1 + 0x50));
    if (param_3 != 0) {
      lVar4 = *(long *)(param_1 + 0xb8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010010fab4();
      lVar1 = lVar4;
      if ((int)lVar5 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(lVar4);
      if (lVar1 != 0) {
        func_0x00010bf70500(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13c320();
        _objc_release(lVar4);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2504a0();
      _objc_release(uVar6);
      _objc_release(lVar1);
    }
    puVar8 = PTR_PTR_1126b6fe8;
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7ec0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2a8740();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209fc0();
    _objc_release(uVar2);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
    func_0x00010bf3a6a0(param_1);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1052f1910;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    func_0x0001000e2a84(pcVar3);
  }
  return;
}



/* Entry: 1052f1910; end: 1052f19f3;  */

void FUN_1052f1910(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227c80();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72f20();
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f19f4; end: 1052f19f7; -[SCCameraHardwareServicesAPIImpl _deprecated_isCameraActive] */

void FUN_1052f19f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCameraActive_11256d3f0);
  return;
}



/* Entry: 1052f19f8; end: 1052f1a37; -[SCCameraHardwareServicesAPIImpl isCameraInBackground] */

undefined8 FUN_1052f19f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05400();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1052f1a38; end: 1052f1a97; -[SCCameraHardwareServicesAPIImpl isOnCameraQueue] */

undefined8 FUN_1052f1a38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06fc80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1052f1a98; end: 1052f1ad7; -[SCCameraHardwareServicesAPIImpl isSessionRunning] */

undefined8 FUN_1052f1a98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07cd60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1052f1ad8; end: 1052f1b37; -[SCCameraHardwareServicesAPIImpl isArSessionActive] */

undefined8 FUN_1052f1ad8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf093c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1052f1b38; end: 1052f1bc3; -[SCCameraHardwareServicesAPIImpl timeSinceLastArFrame] */

double FUN_1052f1b38(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  dVar4 = param_1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5ec20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1 - dVar4;
}



/* Entry: 1052f1bc4; end: 1052f1c5b; -[SCCameraHardwareServicesAPIImpl arTrackingState] */

undefined8 FUN_1052f1bc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5ec20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c279060();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1052f1c5c; end: 1052f1cab; -[SCCameraHardwareServicesAPIImpl sampleFrameWithCompletionHandler:] */

void FUN_1052f1c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1497a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f1cac; end: 1052f1d23; -[SCCameraHardwareServicesAPIImpl addFrameObserver:withFrameSamplingRate:] */

void FUN_1052f1cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052f1d24; end: 1052f1d93; -[SCCameraHardwareServicesAPIImpl removeFrameObserver:] */

void FUN_1052f1d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052f1d94; end: 1052f1d97; -[SCCameraHardwareServicesAPIImpl markWillEnterForeground] */

void FUN_1052f1d94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applicationWillEnterForeground_112550fe8);
  return;
}



/* Entry: 1052f1d98; end: 1052f1f03; -[SCCameraHardwareServicesAPIImpl _applicationDidEnterBackground] */

void FUN_1052f1d98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168ba0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf077e0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203080();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f1f04; end: 1052f1fbb;  */

void FUN_1052f1f04(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010be3e940(), (int)lVar1 != 0)) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c078200();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c299c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256b60();
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f1fbc; end: 1052f20c7; -[SCCameraHardwareServicesAPIImpl _applicationWillEnterForeground] */

void FUN_1052f1fbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168ba0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f20c8; end: 1052f214b;  */

void FUN_1052f20c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e3460(*(undefined8 *)(param_1 + 0xa8),param_2,0x2c);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c252680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf07c20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c0e3460(*(undefined8 *)(param_1 + 0xa8),param_2,0x2d);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f214c; end: 1052f21c7; -[SCCameraHardwareServicesAPIImpl _applicationWillResignActive] */

void FUN_1052f214c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078200();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1052f21c8; end: 1052f22af; -[SCCameraHardwareServicesAPIImpl managedCaptureSessionDidBeginInterruption] */

void FUN_1052f21c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f88c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f22b0; end: 1052f22df;  */

void FUN_1052f22b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f22e0; end: 1052f23c7; -[SCCameraHardwareServicesAPIImpl managedCaptureSessionDidEndInterruption] */

void FUN_1052f22e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f88c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f23c8; end: 1052f23f7;  */

void FUN_1052f23c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f23f8; end: 1052f248b; -[SCCameraHardwareServicesAPIImpl _updateManagedCapturerStateInterruptedStatus:] */

void FUN_1052f23f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c160440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73260();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052f248c; end: 1052f259b; -[SCCameraHardwareServicesAPIImpl setRingFlashSelectionInfo:] */

void FUN_1052f248c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052f259c; end: 1052f269b;  */

void FUN_1052f259c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1410c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x20);
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != lVar9) {
      uVar5 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0b7ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf70e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73560();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052f269c; end: 1052f278b; -[SCCameraHardwareServicesAPIImpl setAspectRatio4By3ModeActive:] */

void FUN_1052f269c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f278c; end: 1052f28cf;  */

void FUN_1052f278c(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf0acc0();
    bVar1 = *(byte *)(param_1 + 0x28);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126b6fe8;
    if ((uint)bVar1 != (uint)uVar5) {
      uVar5 = *(undefined8 *)(lVar2 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7ec0(puVar6,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2a8780();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar2 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0();
      _objc_release(uVar3);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1052f28d0; end: 1052f29bf; -[SCCameraHardwareServicesAPIImpl setIsHDModeActive:] */

void FUN_1052f28d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f29c0; end: 1052f2abf;  */

void FUN_1052f29c0(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0749e0();
    bVar1 = *(byte *)(param_1 + 0x28);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uint)bVar1 != (uint)uVar5) {
      func_0x00010bedb380(lVar2,param_2,*(undefined1 *)(param_1 + 0x28));
      uVar6 = *(undefined8 *)(lVar2 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c0b7ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf70e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73240();
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1052f2ac0; end: 1052f2ba7; -[SCCameraHardwareServicesAPIImpl runDeferredStartWhenNeeded] */

void FUN_1052f2ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f2ba8; end: 1052f2bf3;  */

void FUN_1052f2ba8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1427c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f2bf4; end: 1052f2d63; -[SCCameraHardwareServicesAPIImpl _updateMaxPhotoQualityPrioritizationForHDMode:] */

void FUN_1052f2bf4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa880();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (param_3 == 0) {
    if (*(long *)(param_1 + 0xc0) != 0) {
      func_0x00010c1c34e0(lVar3);
    }
  }
  else {
    lVar2 = lVar3;
    func_0x00010c0c2960();
    lVar4 = *(long *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b67a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0fb6c0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar2 < lVar7) {
      lVar2 = lVar3;
      func_0x00010c0c2960();
      *(long *)(param_1 + 0xc0) = lVar2;
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar8;
      func_0x00010c0b67a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0fb6c0();
      func_0x00010c1c34e0(lVar3,param_2,uVar10);
      _objc_release(uVar9);
      _objc_release(uVar1);
      _objc_release(uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1052f2d64; end: 1052f2e53; -[SCCameraHardwareServicesAPIImpl setUIInterfaceOrientation:] */

void FUN_1052f2d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f2e54; end: 1052f2ef3;  */

void FUN_1052f2e54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = 5 - *(long *)(param_1 + 0x28);
    if (2 < *(long *)(param_1 + 0x28) - 2U) {
      lVar4 = 0;
    }
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c29f620();
    if (lVar2 != lVar4) {
      func_0x00010c2234e0(lVar3,param_2,lVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052f2ef4; end: 1052f3227; -[SCCameraHardwareServicesAPIImpl setMultiBackCameraSystemEnabled:zoomFactor:completion:] */

void FUN_1052f2ef4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined **param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1052f3228;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b00d0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c154f00();
  func_0x00010beefa60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c25f160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (param_4 == -1) {
    ppuVar8 = param_5;
    _objc_retainBlock();
    puVar6 = PTR_PTR_1126b7040;
  }
  else {
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1052f3254;
    puStack_c0 = &UNK_110848558;
    _objc_copyWeak(auStack_b0,auStack_78);
    lStack_a8 = param_4;
    _objc_retain(param_5);
    ppuVar8 = &puStack_d8;
    ppuStack_b8 = param_5;
    _objc_retainBlock();
    _objc_release(ppuStack_b8);
    _objc_destroyWeak(auStack_b0);
    puVar6 = PTR_PTR_1126b7040;
  }
  PTR_PTR_1126b7040 = puVar6;
  if (ppuVar8 != (undefined **)0x0) {
    func_0x00010c22be80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf1d460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bef7d60(puVar9);
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa340();
    _objc_release(puVar6);
    _objc_release(puVar9);
  }
  _objc_release(ppuVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  return;
}



/* Entry: 1052f3228; end: 1052f3253;  */

void FUN_1052f3228(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27d2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f3254; end: 1052f32db;  */

void FUN_1052f3254(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e220();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052f32dc; end: 1052f33ff; -[SCCameraHardwareServicesAPIImpl setProcessingModule:enabled:] */

void FUN_1052f32dc(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1052f3400; end: 1052f34a7;  */

void FUN_1052f3400(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1159e0();
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      func_0x00010befaba0();
    }
    else {
      func_0x00010c12dd00();
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1052f34a8; end: 1052f35ff; -[SCCameraHardwareServicesAPIImpl _managedCaptureStateWithLensesActive:source:] */

void FUN_1052f34a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6fe8;
  func_0x00010c0b7ec0(PTR_PTR_1126b6fe8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0964c0();
  puVar5 = puVar3;
  if ((uVar4 & 1) == 0) {
    func_0x00010c2b2ba0(puVar3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  uVar4 = uVar2;
  func_0x00010c28d5c0(uVar2,param_2,param_3,param_4);
  uVar6 = uVar2;
  func_0x00010c08fd00();
  puVar3 = puVar5;
  if (uVar6 != uVar4) {
    func_0x00010c2b2640(puVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  uVar6 = uVar2;
  func_0x00010c0982a0();
  puVar5 = puVar3;
  if ((uint)(uVar4 != 0) != (uint)uVar6) {
    func_0x00010c2b2dc0(puVar3,param_2,uVar4 != 0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1052f3600; end: 1052f3727; -[SCCameraHardwareServicesAPIImpl addCaptureControls:] */

void FUN_1052f3600(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1052f3728; end: 1052f3783;  */

void FUN_1052f3728(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46ce0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f3784; end: 1052f378b; -[SCCameraHardwareServicesAPIImpl isCameraHardwareRequestHandlerActive] */

undefined1 FUN_1052f3784(long param_1)

{
  return *(undefined1 *)(param_1 + 200);
}



/* Entry: 1052f378c; end: 1052f389f; -[SCCameraHardwareServicesAPIImpl .cxx_destruct] */

void FUN_1052f378c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1052f38a0; end: 1052f390f; -[SCCapturerTokenImpl checkIsValid:] */

void FUN_1052f38a0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x20));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052f3910; end: 1052f3a0f; -[SCCapturerTokenImpl isOnlyActiveToken:performer:] */

void FUN_1052f3910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052f3a10; end: 1052f3b0f;  */

void FUN_1052f3a10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    _objc_retain(lVar3);
    _objc_sync_enter(lVar3);
    if (*(char *)(lVar3 + 0x20) == '\x01') {
      lVar4 = lVar3 + 0x18;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c0df500();
      bVar6 = lVar5 < 2;
      _objc_release(lVar4);
    }
    else {
      bVar6 = false;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1052f3b10;
    puStack_48 = &UNK_11084a9b8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    uStack_38 = bVar6;
    func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_40);
    _objc_sync_exit(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1052f3b10; end: 1052f3b23;  */

void FUN_1052f3b10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052f3b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1052f3b24; end: 1052f3c5f; -[SCCapturerTokenImpl invalidateAfter:completion:] */

void FUN_1052f3b24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_sync_enter(param_2);
  *(undefined1 *)(param_2 + 0x20) = 0;
  _objc_initWeak(auStack_48,param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1052f3c60;
  puStack_68 = &UNK_110848378;
  _objc_copyWeak(auStack_50,auStack_48);
  lStack_60 = param_2;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retainBlock(&puStack_80);
  if (param_1 <= 0.0) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x10));
  }
  else {
    func_0x00010c0f7fe0(param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  _objc_release(param_4);
  return;
}



/* Entry: 1052f3c60; end: 1052f3cb3;  */

void FUN_1052f3c60(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c272ee0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f3cb4; end: 1052f3d3f; -[SCCapturerTokenImpl description] */

void FUN_1052f3cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd0938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052f3d40; end: 1052f3d47; -[SCCapturerTokenImpl isValid] */

undefined1 FUN_1052f3d40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1052f3d48; end: 1052f3d83; -[SCCapturerTokenSetImpl numberOfTokens] */

undefined8 FUN_1052f3d48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c273200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052f3d84; end: 1052f3d8b; -[SCCapturerTokenSetImpl performer] */

undefined8 FUN_1052f3d84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052f3d8c; end: 1052f3dbb; -[SCCapturerTokenSetImpl .cxx_destruct] */

void FUN_1052f3d8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f3dbc; end: 1052f3e9b; -[SCStartupCaptureHardwareWarmerImpl markOptimizedHeadlessColdStart:managedCaptureSession:] */

void FUN_1052f3dbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1052f3e9c; end: 1052f3ef3;  */

void FUN_1052f3e9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 9) = 1;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052f3ef4; end: 1052f3f9b; -[SCStartupCaptureHardwareWarmerImpl markHeadlessLaunchNotToCameraScreen] */

void FUN_1052f3ef4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052f3f9c; end: 1052f3fbb;  */

void FUN_1052f3f9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052f3fbc; end: 1052f4063; -[SCStartupCaptureHardwareWarmerImpl applicationEnterForegroundCheckForCameraWarmupInCaseHeadless] */

void FUN_1052f3fbc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052f4064; end: 1052f417f;  */

void FUN_1052f4064(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (*(char *)(param_1 + 9) == '\x01')) && ((*(byte *)(param_1 + 8) & 1) == 0))
  {
    uVar1 = *(ulong *)(param_1 + 0x40);
    func_0x00010c2348e0();
    if ((uVar1 & 1) == 0) {
      lVar2 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar2);
      puVar4 = PTR_PTR_1126b00d0;
      puVar3 = PTR_PTR_1126b5a50;
      func_0x00010bfb5340(PTR_PTR_1126b5a50);
      func_0x00010c251a00(puVar4,param_2,puVar3,0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c25f160(lVar2,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17fb40();
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(lVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release(uVar6);
      *(undefined2 *)(param_1 + 8) = 1;
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1052f4180; end: 1052f41eb;  */

void FUN_1052f4180(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar1 = 3;
  func_0x0001003a49a8(3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a880(uVar3,param_2,2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd07a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1052f41ec; end: 1052f4293; -[SCStartupCaptureHardwareWarmerImpl applicationDidEnterBackground] */

void FUN_1052f41ec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052f4294; end: 1052f42d3;  */

void FUN_1052f4294(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 8) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f42d4; end: 1052f432f; -[SCStartupCaptureHardwareWarmerImpl .cxx_destruct] */

void FUN_1052f42d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1052f4330; end: 1052f4377; +[SCCapturerTokenProvider providerWithToken:] */

void FUN_1052f4330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c053de0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1052f4378; end: 1052f43eb; -[SCCapturerTokenProvider initWithToken:] */

undefined1 * FUN_1052f4378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7600;
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



/* Entry: 1052f43ec; end: 1052f4423; -[SCCapturerTokenProvider getTokenAndInvalidate] */

void FUN_1052f43ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1052f4424; end: 1052f442f; -[SCCapturerTokenProvider .cxx_destruct] */

void FUN_1052f4424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f4430; end: 1052f447f; -[SCManagedCapturerARSessionHandler stopObserving] */

void FUN_1052f4430(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052f4480; end: 1052f452f; -[SCManagedCapturerARSessionHandler stopARSessionRunning] */

void FUN_1052f4480(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = 0;
  _dispatch_time(0,4000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_wait_11034c138)(uVar5,uVar4);
  return;
}



/* Entry: 1052f4530; end: 1052f461b; -[SCManagedCapturerARSessionHandler _completeARSessionShutdown:] */

void FUN_1052f4530(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c081e80(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1052f461c; end: 1052f464f; -[SCManagedCapturerARSessionHandler .cxx_destruct] */

void FUN_1052f461c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052f4650; end: 1052f475f; -[SCCaptureDeviceOutputImpl _configurePhotoQualityForIOS13:] */

void FUN_1052f4650(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b67a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fb6e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (3 < lVar4) {
    lVar1 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b67a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fb6e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be3d140();
  func_0x00010c1c34e0(*(undefined8 *)(param_1 + 8),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052f4760; end: 1052f4777; +[SCCaptureDeviceOutputImpl _integerToAVCapturePhotoQualityPrioritization:] */

undefined8 FUN_1052f4760(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = 3;
  }
  if (param_3 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1052f4778; end: 1052f47a7; -[SCCaptureDeviceOutputImpl setPhotoOutput:] */

void FUN_1052f4778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052f47a8; end: 1052f47d7; -[SCCaptureDeviceOutputImpl setVideoOutput:] */

void FUN_1052f47a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052f47d8; end: 1052f47df; -[SCCaptureDeviceOutputImpl metadataOutput] */

undefined8 FUN_1052f47d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052f47e0; end: 1052f480f; -[SCCaptureDeviceOutputImpl setMetadataOutput:] */

void FUN_1052f47e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052f4810; end: 1052f484b; -[SCCaptureDeviceOutputImpl .cxx_destruct] */

void FUN_1052f4810(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f484c; end: 1052f4867; +[SCCaptureMetadataOutput captureMetadataOutput] */

void FUN_1052f484c(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___AVCaptureMetadataOutput_1126b7088);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052f4868; end: 1052f48f3; -[SCCaptureSessionForNonLiveStreaming init] */

undefined1 * FUN_1052f4868(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7618;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052f48f4; end: 1052f48fb; -[SCCaptureSessionForNonLiveStreaming canSetSessionPreset:] */

undefined8 FUN_1052f48f4(void)

{
  return 1;
}



/* Entry: 1052f48fc; end: 1052f4903; -[SCCaptureSessionForNonLiveStreaming canAddInput:] */

undefined8 FUN_1052f48fc(void)

{
  return 1;
}



/* Entry: 1052f4904; end: 1052f490b; -[SCCaptureSessionForNonLiveStreaming addInput:] */

void FUN_1052f4904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 1052f490c; end: 1052f4913; -[SCCaptureSessionForNonLiveStreaming addInputWithNoConnections:] */

void FUN_1052f490c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 1052f4914; end: 1052f491b; -[SCCaptureSessionForNonLiveStreaming removeInput:] */

void FUN_1052f4914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 1052f491c; end: 1052f4923; -[SCCaptureSessionForNonLiveStreaming canAddOutput:] */

undefined8 FUN_1052f491c(void)

{
  return 1;
}



/* Entry: 1052f4924; end: 1052f492b; -[SCCaptureSessionForNonLiveStreaming addOutput:] */

void FUN_1052f4924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 1052f492c; end: 1052f4933; -[SCCaptureSessionForNonLiveStreaming addOutputWithNoConnections:] */

void FUN_1052f492c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}


