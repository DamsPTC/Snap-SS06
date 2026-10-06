/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a77a98; end: 105a77abf;  */

void FUN_105a77a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__tapDoneButton_112590378);
  return;
}



/* Entry: 105a77ac0; end: 105a77b4f; -[SCSpectaclesFlightImuCalibrationController _tapDoneButton] */

void FUN_105a77ac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010be026c0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  func_0x00010c0b0ba0(uVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x48),0);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a77b50; end: 105a77b53; -[SCSpectaclesFlightImuCalibrationController _tapCancelButton] */

void FUN_105a77b50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentCancelCalibrationAlertDi_11257c370);
  return;
}



/* Entry: 105a77b54; end: 105a77beb; -[SCSpectaclesFlightImuCalibrationController _videoPlayToEnd] */

void FUN_105a77b54(long param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (1 < lVar2) {
    bVar1 = lVar2 == 2;
    bVar3 = lVar2 == 3;
    goto LAB_105a77be4;
  }
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    if (lVar2 != 1) {
      bVar1 = false;
      bVar3 = false;
      goto LAB_105a77be4;
    }
    if (*(char *)(param_1 + 0x61) != '\x01') {
      bVar1 = false;
      bVar3 = false;
      lVar2 = 1;
      goto LAB_105a77be4;
    }
    lVar2 = 2;
  }
  bVar3 = false;
  bVar1 = false;
  *(long *)(param_1 + 0x50) = lVar2;
LAB_105a77be4:
                    /* WARNING: Could not recover jumptable at 0x00010be078f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__emitCalibrationInProgressPageVi_11255f7d8,
             *(undefined8 *)(param_1 + 0x48),lVar2,bVar1,bVar3);
  return;
}



/* Entry: 105a77bec; end: 105a77c9f; -[SCSpectaclesFlightImuCalibrationController _trayIconFinishedAnimating] */

void FUN_105a77bec(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x50) == 3) {
    func_0x00010be7a620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bddb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelWatchdogTimer_1125545a8);
    return;
  }
  if ((*(long *)(param_1 + 0x50) == 2) && ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0x48);
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar3 + 1 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010be078d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__emitCalibrationCompletePageView_11255f7d0);
      return;
    }
    uVar4 = *(ulong *)(param_1 + 0x48);
    uVar2 = *(ulong *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (uVar4 < uVar2) {
      lVar1 = *(long *)(param_1 + 0x48) + 1;
      *(long *)(param_1 + 0x48) = lVar1;
      *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be078f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__emitCalibrationInProgressPageVi_11255f7d8,lVar1,0,0,0);
      return;
    }
  }
  return;
}



/* Entry: 105a77ca0; end: 105a77d4b; -[SCSpectaclesFlightImuCalibrationController _prefetchCalibrationVideos] */

void FUN_105a77ca0(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be154a0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a77d4c; end: 105a77d93;  */

void FUN_105a77d4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bebffa0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec21e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a77d94; end: 105a77edf; -[SCSpectaclesFlightImuCalibrationController _fetchVideoViewModelsForUrl:completion:] */

void FUN_105a77d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a77ee0; end: 105a77f4b;  */

void FUN_105a77ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be331c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a77f4c; end: 105a781f7; -[SCSpectaclesFlightImuCalibrationController _handleVideoViewModelsDict:error:completion:] */

void FUN_105a77f4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = param_3;
    _objc_release();
    _dispatch_group_create();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar9 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar9);
    lVar2 = lVar9;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(lVar9);
          }
          _dispatch_group_enter(uVar1);
          uVar3 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c29bbe0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c29a3a0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_105a781f8;
          puStack_150 = &UNK_1108cc7d8;
          uVar7 = uVar1;
          _objc_retain(uVar1);
          uStack_148 = uVar1;
          func_0x000100078e94();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(uVar6);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(uVar3);
          _objc_release(uStack_148);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar9;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar9);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x105a78200;
    puStack_178 = &UNK_110849530;
    _objc_retain(param_5);
    uStack_170 = param_5;
    func_0x000100bc0718(uVar1,PTR___dispatch_main_q_11034be20,&puStack_190);
    _objc_release(uStack_170);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 105a781f8; end: 105a7820b;  */

void FUN_105a781f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105a7820c; end: 105a782eb; -[SCSpectaclesFlightImuCalibrationController _startWatchdogTimer] */

void FUN_105a7820c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bddb020();
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105a782c0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x42b40000,"APPSTORE",*(undefined8 *)(param_1 + 0x68));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a782ec; end: 105a78327; -[SCSpectaclesFlightImuCalibrationController _cancelWatchdogTimer] */

void FUN_105a782ec(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a78328; end: 105a783e7; -[SCSpectaclesFlightImuCalibrationController _logCancelCalibrationEvent] */

void FUN_105a78328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 0x70);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  func_0x00010c0b0ba0(uVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x48),1);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a783e8; end: 105a784a7; -[SCSpectaclesFlightImuCalibrationController _logErrorCalibrationEvent] */

void FUN_105a783e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 0x70);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  func_0x00010c0b0ba0(uVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x48),2);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a784a8; end: 105a784bf; -[SCSpectaclesFlightImuCalibrationController delegate] */

void FUN_105a784a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a784c0; end: 105a784cb; -[SCSpectaclesFlightImuCalibrationController setDelegate:] */

void FUN_105a784c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105a784cc; end: 105a7856b; -[SCSpectaclesFlightImuCalibrationController .cxx_destruct] */

void FUN_105a784cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a7856c; end: 105a785eb; -[SCSpectaclesFlightImuCalibrationDoneTrayViewController initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105a7856c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272e4f4),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a785ec; end: 105a78aff; -[SCSpectaclesFlightImuCalibrationDoneTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a785ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126eb878;
  lStack_b8 = param_1;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar16 = (long)_DAT_11272e4f8;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf493c0(0x4040800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_98 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493c0(0x4050800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_90 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf493c0(0xc050800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11272e4fc;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar14);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x0001090250f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar15);
  _objc_release(uVar14);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar17));
  _objc_initWeak(auStack_c0,param_1);
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  _objc_copyWeak(auStack_c8,auStack_c0);
  func_0x00010c1d3960(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493c0(0x4040800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  uStack_a8 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar15);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_c8);
  puVar12 = auStack_c0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  puVar12 = puVar12 + 0x20;
  _objc_loadWeakRetained();
  if (puVar12 != (undefined1 *)0x0) {
    puVar13 = puVar12 + _DAT_11272e4f4;
    _objc_loadWeakRetained(puVar13);
    func_0x00010bf881c0();
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 105a78b00; end: 105a78b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a78b00(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11272e4f4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf881c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a78b50; end: 105a78bff; -[SCSpectaclesFlightImuCalibrationDoneTrayViewController setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a78b50(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11272e500;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c09c7a0(param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105a78c04;
    puStack_40 = &UNK_110848678;
    lStack_38 = param_1;
    func_0x00010c0be5e0(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108d02c8,&puStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a78c00; end: 105a78c13;  */

void FUN_105a78c00(void)

{
  return;
}



/* Entry: 105a78c14; end: 105a78cbb; -[SCSpectaclesFlightImuCalibrationDoneTrayViewController _animateDoneTrayWithTitle:doneButtonHidden:] */

void FUN_105a78c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a78cbc;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fd3333333333333,puVar1,param_2,&puStack_68,0);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105a78cbc; end: 105a78d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a78cbc(long param_1,undefined8 param_2)

{
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e4f8),param_2,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e4fc),
             PTR_s_setHidden__1126479f8,(*(byte *)(param_1 + 0x30) ^ 0xff) & 1);
  return;
}



/* Entry: 105a78d08; end: 105a78d17; -[SCSpectaclesFlightImuCalibrationDoneTrayViewController viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a78d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e500);
}



/* Entry: 105a78d18; end: 105a78d73; -[SCSpectaclesFlightImuCalibrationDoneTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a78d18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e500,0);
  _objc_storeStrong(param_1 + _DAT_11272e4fc,0);
  _objc_storeStrong(param_1 + _DAT_11272e4f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e4f4);
  return;
}



/* Entry: 105a78d74; end: 105a78df3; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105a78d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb880;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272e504),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a78df4; end: 105a79463; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a78df4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong in_x4;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_180;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126eb880;
  lStack_d0 = param_1;
  _objc_msgSendSuper2(&lStack_d0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar30 = (long)_DAT_11272e508;
  uVar23 = *(undefined8 *)(param_1 + lVar30);
  *(undefined **)(param_1 + lVar30) = puVar1;
  _objc_release(uVar23);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30));
  lVar29 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar29;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar30);
  uStack_88 = uVar23;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar25;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar30);
  uStack_80 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf49420(0x4058c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(uVar3);
  _objc_release(uVar23);
  _objc_release(lVar27);
  _objc_release(lVar29);
  _objc_release(uVar2);
  puVar21 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar21);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar30));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar21;
  puStack_a8 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf348e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar21;
  puStack_a0 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  puStack_98 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar21;
  func_0x00010c2793a0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar23);
  _objc_release(puVar13);
  _objc_release(uVar2);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar24 = (long)_DAT_11272e50c;
  uVar23 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar23);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar24));
  lVar29 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar24);
  uStack_c0 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0x4050800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar24);
  uStack_b8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar15;
  func_0x00010bf493c0(0xc050800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = 3;
  puVar26 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b0 = uVar23;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar26);
  _objc_release(uVar23);
  _objc_release(lVar29);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(lVar27);
  _objc_release(lVar25);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = (long)_DAT_11272e510;
  puVar16 = *(undefined8 **)(puVar21 + lVar29);
  puVar26 = puVar28;
  func_0x00010bf529e0();
  if (puVar28 != puVar16) {
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    lVar25 = *(long *)(puVar21 + lVar29);
    _objc_retain(lVar25);
    puVar26 = &uStack_280;
    uVar22 = 0;
    in_x4 = 0;
    lVar27 = lVar25;
    func_0x00010bf52a60();
    if (lVar27 != 0) {
      lVar24 = *plStack_270;
      do {
        lVar30 = 0;
        do {
          if (*plStack_270 != lVar24) {
            _objc_enumerationMutation(lVar25);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_278 + lVar30 * 8));
          lVar30 = lVar30 + 1;
        } while (lVar27 != lVar30);
        puVar26 = &uStack_280;
        uVar22 = 0;
        in_x4 = 0;
        lVar27 = lVar25;
        func_0x00010bf52a60();
      } while (lVar27 != 0);
    }
    _objc_release(lVar25);
    puVar16 = *(undefined8 **)(puVar21 + lVar29);
    *(undefined8 *)(puVar21 + lVar29) = 0;
    _objc_release();
    if (0 < (long)puVar28) {
      puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = (undefined8 *)0x0;
      do {
        puVar5 = PTR_PTR_1126aea58;
        _objc_alloc_init();
        func_0x00010c219b60();
        puVar1 = puVar5;
        func_0x00010c08c0e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(0x4030800000000000);
        _objc_release(puVar1);
        puVar1 = puVar5;
        func_0x00010c08c0e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(puVar1);
        func_0x00010c213040(puVar5);
        func_0x00010c21ad00(puVar5);
        lVar27 = (long)_DAT_11272e508;
        func_0x00010befbb60(*(undefined8 *)(puVar21 + lVar27));
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar7 = puVar5;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf49420(0x4040800000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        puStack_218 = puVar8;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf49420(0x4040800000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar5;
        puStack_210 = puVar11;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)(puVar21 + lVar27);
        func_0x00010bf348e0(uVar23);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_208 = puVar13;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(uVar23);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
        if (puVar26 != (undefined8 *)0x0) {
          puVar17 = puVar16;
          func_0x00010c0dfd40(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar7 = puVar5;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010c2793a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bf493c0(0x4034000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar5;
          puStack_228 = puVar8;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar17;
          func_0x00010bf348e0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_220 = puVar11;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar19);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar18);
          _objc_release(puVar7);
          _objc_release(puVar17);
        }
        func_0x00010befa120(puVar16);
        _objc_release(puVar5);
        puVar26 = (undefined8 *)((long)puVar26 + 1);
      } while (puVar28 != puVar26);
      puVar26 = puVar16;
      func_0x00010bf51e00();
      uVar23 = *(undefined8 *)(puVar21 + lVar29);
      *(undefined8 **)(puVar21 + lVar29) = puVar26;
      _objc_release(uVar23);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(puVar21 + lVar29);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(puVar21 + lVar27);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar23;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(puVar21 + lVar29);
      uStack_238 = uVar6;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar21 + lVar27);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = 0;
      puVar28 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_230 = uVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar28;
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar28);
      _objc_release(uVar2);
      _objc_release(uVar20);
      _objc_release(uVar9);
      _objc_release(uVar15);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar23);
      _objc_release(uVar3);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_180) {
    ___stack_chk_fail();
    if (0 < (long)puVar26) {
      puVar28 = (undefined8 *)0x0;
      lVar29 = (long)_DAT_11272e510;
      do {
        uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar23);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180();
        _objc_release(uVar23);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar23);
        _objc_release(puVar1);
        uVar6 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar6;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1733a0(0);
        _objc_release(uVar23);
        _objc_release(uVar6);
        puVar28 = (undefined8 *)((long)puVar28 + 1);
      } while (puVar26 != puVar28);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    if (((uVar22 & 1) == 0) && ((in_x4 & 1) == 0)) {
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880(puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar29 = (long)_DAT_11272e510;
      uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
      func_0x00010c0dfd40(uVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar23);
      _objc_release(puVar1);
      _objc_release(puVar21);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
      func_0x00010c0dfd40(uVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar23);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
      func_0x00010c0dfd40(uVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar23);
      _objc_release(puVar1);
      uVar6 = *(undefined8 *)((long)puVar16 + lVar29);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0);
      _objc_release(uVar23);
      _objc_release(uVar6);
    }
    else {
      func_0x00010bdcb2a0(puVar16);
      lVar29 = (long)_DAT_11272e510;
    }
    puVar1 = (undefined *)((long)puVar26 + 1);
    puVar21 = *(undefined **)((long)puVar16 + lVar29);
    func_0x00010bf529e0();
    if (puVar1 < puVar21) {
      do {
        puVar21 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
        puVar1 = puVar1 + 1;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09e880(puVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar23);
        _objc_release(puVar21);
        _objc_release(puVar5);
        puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180();
        _objc_release(uVar23);
        _objc_release(puVar21);
        puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar23);
        _objc_release(puVar21);
        puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        uVar6 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar6;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173280();
        _objc_release(uVar23);
        _objc_release(uVar6);
        _objc_release(puVar21);
        uVar6 = *(undefined8 *)((long)puVar16 + lVar29);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar6;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1733a0(0x4000000000000000);
        _objc_release(uVar23);
        _objc_release(uVar6);
        puVar21 = *(undefined **)((long)puVar16 + lVar29);
        func_0x00010bf529e0();
      } while (puVar1 < puVar21);
    }
    return;
  }
  return;
}



/* Entry: 105a79464; end: 105a79a23; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController _setupBubblesWithCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a79464(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = (long)_DAT_11272e510;
  puVar1 = *(undefined8 **)(param_1 + lVar27);
  puVar24 = param_3;
  func_0x00010bf529e0();
  if (param_3 != puVar1) {
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    lVar23 = *(long *)(param_1 + lVar27);
    _objc_retain(lVar23);
    puVar24 = &uStack_180;
    param_4 = auStack_100;
    param_5 = 0x10;
    lVar25 = lVar23;
    func_0x00010bf52a60();
    if (lVar25 != 0) {
      lVar21 = *plStack_170;
      do {
        lVar22 = 0;
        do {
          if (*plStack_170 != lVar21) {
            _objc_enumerationMutation(lVar23);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_178 + lVar22 * 8));
          lVar22 = lVar22 + 1;
        } while (lVar25 != lVar22);
        puVar24 = &uStack_180;
        param_4 = auStack_100;
        param_5 = 0x10;
        lVar25 = lVar23;
        func_0x00010bf52a60();
      } while (lVar25 != 0);
    }
    _objc_release(lVar23);
    puVar1 = *(undefined8 **)(param_1 + lVar27);
    *(undefined8 *)(param_1 + lVar27) = 0;
    _objc_release();
    if (0 < (long)param_3) {
      puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = (undefined8 *)0x0;
      do {
        puVar19 = PTR_PTR_1126aea58;
        _objc_alloc_init();
        func_0x00010c219b60();
        puVar2 = puVar19;
        func_0x00010c08c0e0(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(0x4030800000000000);
        _objc_release(puVar2);
        puVar2 = puVar19;
        func_0x00010c08c0e0(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(puVar2);
        func_0x00010c213040(puVar19,param_2,1);
        func_0x00010c21ad00(puVar19,param_2,0x1a);
        lVar25 = (long)_DAT_11272e508;
        func_0x00010befbb60(*(undefined8 *)(param_1 + lVar25),param_2,puVar19);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar20 = puVar19;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar20;
        func_0x00010bf49420(0x4040800000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar19;
        puStack_118 = puVar3;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf49420(0x4040800000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar19;
        puStack_110 = puVar5;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + lVar25);
        func_0x00010bf348e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bf493a0(puVar6,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_108 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2,param_2,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(uVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar20);
        if (puVar24 != (undefined8 *)0x0) {
          puVar26 = puVar1;
          func_0x00010c0dfd40(puVar1,param_2,(undefined *)((long)puVar24 + -1));
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar20 = puVar19;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar26;
          func_0x00010c2793a0(puVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar20;
          func_0x00010bf493c0(0x4034000000000000,puVar20,param_2,puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar19;
          puStack_128 = puVar3;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar26;
          func_0x00010bf348e0(puVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf493a0(puVar4,param_2,puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_120 = puVar5;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_128,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar2,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar11);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar10);
          _objc_release(puVar20);
          _objc_release(puVar26);
        }
        func_0x00010befa120(puVar1,param_2,puVar19);
        _objc_release(puVar19);
        puVar24 = (undefined8 *)((long)puVar24 + 1);
      } while (param_3 != puVar24);
      puVar24 = puVar1;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)(param_1 + lVar27);
      *(undefined8 **)(param_1 + lVar27) = puVar24;
      _objc_release(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar12 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar12;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar7;
      func_0x00010bf493a0(uVar7,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + lVar27);
      uStack_138 = uVar18;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar15;
      func_0x00010bf493a0(uVar15,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined1 *)0x2;
      puVar26 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_130 = uVar17;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_138);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar26;
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar26);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar18);
      _objc_release(uVar13);
      _objc_release(uVar7);
      _objc_release(uVar12);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (0 < (long)puVar24) {
      puVar26 = (undefined8 *)0x0;
      lVar27 = (long)_DAT_11272e510;
      do {
        uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar7,param_2,puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar7);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar7,param_2,puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180();
        _objc_release(uVar7);
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar7,param_2,puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar7);
        _objc_release(puVar2);
        uVar18 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar18,param_2,puVar26);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1733a0(0);
        _objc_release(uVar7);
        _objc_release(uVar18);
        puVar26 = (undefined8 *)((long)puVar26 + 1);
      } while (puVar24 != puVar26);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    if ((((ulong)param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          (undefined *)((long)puVar24 + 1));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880(puVar2,param_2,puVar19,0);
      _objc_retainAutoreleasedReturnValue();
      lVar27 = (long)_DAT_11272e510;
      uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
      func_0x00010c0dfd40(uVar7,param_2,puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar7);
      _objc_release(puVar2);
      _objc_release(puVar19);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
      func_0x00010c0dfd40(uVar7,param_2,puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar7);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
      func_0x00010c0dfd40(uVar7,param_2,puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar7);
      _objc_release(puVar2);
      uVar18 = *(undefined8 *)((long)puVar1 + lVar27);
      func_0x00010c0dfd40(uVar18,param_2,puVar24);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar18;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0);
      _objc_release(uVar7);
      _objc_release(uVar18);
    }
    else {
      func_0x00010bdcb2a0(puVar1,param_2,puVar24,param_4,param_5);
      lVar27 = (long)_DAT_11272e510;
    }
    puVar2 = (undefined *)((long)puVar24 + 1);
    puVar19 = *(undefined **)((long)puVar1 + lVar27);
    func_0x00010bf529e0();
    if (puVar2 < puVar19) {
      do {
        puVar20 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
        puVar19 = puVar2 + 1;
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09e880(puVar20,param_2,puVar3,0);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar7,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar7);
        _objc_release(puVar20);
        _objc_release(puVar3);
        puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar7,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180();
        _objc_release(uVar7);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar7,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar7);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        uVar18 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar18,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173280();
        _objc_release(uVar7);
        _objc_release(uVar18);
        _objc_release(puVar20);
        uVar18 = *(undefined8 *)((long)puVar1 + lVar27);
        func_0x00010c0dfd40(uVar18,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1733a0(0x4000000000000000);
        _objc_release(uVar7);
        _objc_release(uVar18);
        puVar20 = *(undefined **)((long)puVar1 + lVar27);
        func_0x00010bf529e0();
        puVar2 = puVar19;
      } while (puVar19 < puVar20);
    }
    return;
  }
  return;
}



/* Entry: 105a79a24; end: 105a79eeb; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController _fillBubblesWithCurrentPhase:currentPhaseSucceeded:currentPhaseFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a79a24(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (0 < param_3) {
    lVar8 = 0;
    lVar9 = (long)_DAT_11272e510;
    do {
      uVar1 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd40(uVar1,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd40(uVar1,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar1);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd40(uVar1,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar1);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd40(uVar3,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0);
      _objc_release(uVar1);
      _objc_release(uVar3);
      lVar8 = lVar8 + 1;
    } while (param_3 != lVar8);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  if (((param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e880(puVar2,param_2,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11272e510;
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0dfd40(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar1);
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0dfd40(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0dfd40(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar1);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0dfd40(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bdcb2a0(param_1,param_2,param_3,param_4,param_5);
    lVar8 = (long)_DAT_11272e510;
  }
  uVar7 = param_3 + 1;
  uVar5 = *(ulong *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (uVar7 < uVar5) {
    do {
      puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
      uVar5 = uVar7 + 1;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880(puVar2,param_2,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar1,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar1);
      _objc_release(puVar2);
      _objc_release(puVar4);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar1,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar1);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar1,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar1);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar3,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar3,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0x4000000000000000);
      _objc_release(uVar1);
      _objc_release(uVar3);
      uVar6 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf529e0();
      uVar7 = uVar5;
    } while (uVar5 < uVar6);
  }
  return;
}



/* Entry: 105a79eec; end: 105a7a00b; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController _animateTrayCurrentPhase:succeeded:failed:] */

void FUN_105a79eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105a7a00c;
  puStack_78 = &UNK_11086cd18;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_5f = param_5;
  _objc_copyWeak(auStack_98,auStack_58);
  func_0x00010bf03420(0x3fd3333333333333,puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a7a00c; end: 105a7a28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7a00c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      lVar6 = (long)_DAT_11272e510;
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar2);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar2);
      _objc_release(puVar4);
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
    }
    else {
      if (*(char *)(param_1 + 0x31) != '\x01') goto LAB_105a7a274;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 0x28) + 1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880(puVar4,param_2,puVar3,0);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11272e510;
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar2);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar2);
      _objc_release(puVar4);
      uVar2 = *(undefined8 *)(lVar1 + lVar6);
    }
    func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
LAB_105a7a274:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a7a28c; end: 105a7a2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7a28c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11272e504;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c067d60();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a7a2dc; end: 105a7a38b; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7a2dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11272e514;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c09c7a0(param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105a7a38c;
    puStack_40 = &UNK_1108d02e8;
    lStack_38 = param_1;
    func_0x00010c0be5e0(param_3,param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_1108d0338);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7a38c; end: 105a7a41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7a38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010beab240(uVar1);
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e50c));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be15bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fillBubblesWithCurrentPhase_cur_112563090,
             param_3,param_5,param_6);
  return;
}



/* Entry: 105a7a41c; end: 105a7a41f;  */

void FUN_105a7a41c(void)

{
  return;
}



/* Entry: 105a7a420; end: 105a7a42f; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a7a420(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e514);
}



/* Entry: 105a7a430; end: 105a7a49b; -[SCSpectaclesFlightImuCalibrationInstructionsTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7a430(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e514,0);
  _objc_storeStrong(param_1 + _DAT_11272e508,0);
  _objc_storeStrong(param_1 + _DAT_11272e510,0);
  _objc_storeStrong(param_1 + _DAT_11272e50c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e504);
  return;
}



/* Entry: 105a7a49c; end: 105a7a5ff; -[SCSpectaclesFlightImuCalibrationViewController initWithPlayerProvider:onDemandResourceFetcher:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105a7a49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb888;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar2);
    func_0x00010c21e060(puVar1);
    lVar5 = (long)_DAT_11272e518;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11272e51c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11272e520;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e524);
    *(undefined **)((long)puVar1 + (long)_DAT_11272e524) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e528);
    *(undefined **)((long)puVar1 + (long)_DAT_11272e528) = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a7a600; end: 105a7a67f; -[SCSpectaclesFlightImuCalibrationViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7a600(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e524);
  puVar1 = PTR_PTR_1126c1c90;
  func_0x00010bf74560(PTR_PTR_1126c1c90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126eb888;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a7a680; end: 105a7a6a3; -[SCSpectaclesFlightImuCalibrationViewController viewDidLoad] */

void FUN_105a7a680(undefined8 param_1)

{
  func_0x00010beadda0();
                    /* WARNING: Could not recover jumptable at 0x00010beb1150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupVideoView_112589df8);
  return;
}



/* Entry: 105a7a6a4; end: 105a7ad6b; -[SCSpectaclesFlightImuCalibrationViewController _setupLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7a6a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar19 = (long)_DAT_11272e52c;
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  lVar18 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar15);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(lVar21);
  _objc_release(lVar18);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar21 = (long)_DAT_11272e530;
  uVar17 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar17);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar21));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf34860(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf348e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar18 = (long)_DAT_11272e534;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf34860(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar18 = (long)_DAT_11272e538;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  lVar18 = *(long *)(param_1 + lVar19);
  func_0x00010c1a7f60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11272e53c;
  func_0x00010c219b60(*(undefined8 *)(lVar18 + lVar20));
  lVar21 = lVar18;
  func_0x00010bf4dce0(lVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar21);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(lVar18 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar18;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar18 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar18 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar18;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar18 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar18;
  func_0x00010c29bf00(lVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar15);
  _objc_release(lVar16);
  _objc_release(lVar12);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(lVar4);
  _objc_release(lVar21);
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(lVar18 + lVar20));
  puVar1 = PTR_PTR_1126c1c98;
  _objc_alloc();
  func_0x00010c00b360();
  uVar17 = *(undefined8 *)(lVar18 + _DAT_11272e540);
  *(undefined **)(lVar18 + _DAT_11272e540) = puVar1;
  _objc_release(uVar17);
  lVar18 = *(long *)(lVar18 + lVar20);
  func_0x00010bf0c980();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = (long)_DAT_11272e544;
  if (*(long *)(lVar18 + lVar21) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c1ca0;
  _objc_alloc();
  func_0x00010c00a2c0();
  uVar17 = *(undefined8 *)(lVar18 + _DAT_11272e548);
  *(undefined **)(lVar18 + _DAT_11272e548) = puVar1;
  _objc_release(uVar17);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  uVar17 = *(undefined8 *)(lVar18 + lVar21);
  *(undefined **)(lVar18 + lVar21) = puVar1;
  _objc_release(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bde5df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar18,PTR_s__configureTray__112557118,*(undefined8 *)(lVar18 + lVar21));
  return;
}



/* Entry: 105a7ad6c; end: 105a7b097; -[SCSpectaclesFlightImuCalibrationViewController _setupVideoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7ad6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11272e53c;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  lVar16 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar18);
  _objc_release(lVar19);
  _objc_release(lVar16);
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar20));
  puVar15 = PTR_PTR_1126c1c98;
  _objc_alloc();
  func_0x00010c00b360();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11272e540);
  *(undefined **)(param_1 + _DAT_11272e540) = puVar15;
  _objc_release(uVar18);
  lVar16 = *(long *)(param_1 + lVar20);
  func_0x00010bf0c980();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = (long)_DAT_11272e544;
  if (*(long *)(lVar16 + lVar19) != 0) {
    return;
  }
  puVar15 = PTR_PTR_1126c1ca0;
  _objc_alloc();
  func_0x00010c00a2c0();
  uVar18 = *(undefined8 *)(lVar16 + _DAT_11272e548);
  *(undefined **)(lVar16 + _DAT_11272e548) = puVar15;
  _objc_release(uVar18);
  puVar15 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  uVar18 = *(undefined8 *)(lVar16 + lVar19);
  *(undefined **)(lVar16 + lVar19) = puVar15;
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bde5df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar16,PTR_s__configureTray__112557118,*(undefined8 *)(lVar16 + lVar19));
  return;
}



/* Entry: 105a7b098; end: 105a7b133; -[SCSpectaclesFlightImuCalibrationViewController _setupInstructionsTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b098(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e544;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c1ca0;
  _objc_alloc();
  func_0x00010c00a2c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e548);
  *(undefined **)(param_1 + _DAT_11272e548) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde5df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureTray__112557118,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105a7b134; end: 105a7b1cf; -[SCSpectaclesFlightImuCalibrationViewController _setupDoneTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b134(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e54c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c1ca8;
  _objc_alloc();
  func_0x00010c00a2c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e550);
  *(undefined **)(param_1 + _DAT_11272e550) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde5df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureTray__112557118,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105a7b1d0; end: 105a7b21b; -[SCSpectaclesFlightImuCalibrationViewController _configureTray:] */

void FUN_105a7b1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c219c20(param_3,param_2,1);
  func_0x00010c16d3e0(param_3,param_2,0);
  func_0x00010c219d60(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7b21c; end: 105a7b24b; -[SCSpectaclesFlightImuCalibrationViewController actionPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b21c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e524);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a7b24c; end: 105a7b3a3; -[SCSpectaclesFlightImuCalibrationViewController configureWithViewModelBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272e554);
  *(undefined **)(param_1 + _DAT_11272e554) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e0e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105a7b3a4; end: 105a7b3eb;  */

void FUN_105a7b3a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a7b3ec; end: 105a7b487; -[SCSpectaclesFlightImuCalibrationViewController _updateWithViewModel:] */

void FUN_105a7b3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c09c7a0(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105a7b488;
  puStack_30 = &UNK_1108d03e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105a7b7f4;
  puStack_58 = &UNK_1108d0418;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bcd00(param_3,param_2,&puStack_48,&puStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 105a7b488; end: 105a7b6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdf5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdf5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(uVar2);
  func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e538));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105a7b6e0;
  uStack_70 = 0x105a7b6f0;
  uStack_68 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105a7b6f8;
  puStack_b0 = &UNK_1108d0388;
  uStack_a8 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = &uStack_90;
  _objc_retain(param_3);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x105a7b758;
  puStack_e8 = &UNK_1108d03b8;
  uStack_e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = param_3;
  puStack_98 = &uStack_90;
  _objc_retain(param_3);
  uStack_d8 = param_3;
  puStack_d0 = &uStack_90;
  func_0x00010c0be5e0(param_3);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e528));
  _objc_initWeak(auStack_108,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_110,auStack_108);
  func_0x00010beaa0e0(uVar2);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_d8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a7b6e0; end: 105a7b6f7;  */

void FUN_105a7b6e0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a7b6f8; end: 105a7b7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b6f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bead400(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c2226c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e548),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e544);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a7b7f4; end: 105a7b90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b7f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bfdf5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdf5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(uVar1);
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e530));
  _objc_release(param_3);
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e534));
  _objc_release(param_4);
  if (param_5 == 0) {
    func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e538));
  }
  else {
    func_0x00010c24dbc0();
  }
  func_0x00010beaa0e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bea1a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setActiveTray__112586040,0);
  return;
}



/* Entry: 105a7b910; end: 105a7bac3; -[SCSpectaclesFlightImuCalibrationViewController _setVideoViewIsHidden:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7b910(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11272e52c);
    func_0x00010c074c20();
    lVar4 = (long)_DAT_11272e53c;
    uVar5 = 0;
    if (iVar2 != 0) goto LAB_105a7ba58;
  }
  else {
    lVar4 = (long)_DAT_11272e53c;
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c074c20();
    uVar5 = 0x3ff0000000000000;
    if ((uVar3 & 1) != 0) {
LAB_105a7ba58:
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272e52c));
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4);
      }
      goto LAB_105a7ba88;
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272e52c));
  func_0x00010c1677c0(uVar5,*(undefined8 *)(param_1 + lVar4));
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105a7bac4;
  puStack_60 = &UNK_110845ce0;
  lStack_58 = param_1;
  uStack_50 = (char)param_3;
  _objc_copyWeak(auStack_88,auStack_48);
  uStack_80 = (char)param_3;
  _objc_retain(param_4);
  func_0x00010bf03420(0x3ff0000000000000,puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_48);
LAB_105a7ba88:
  _objc_release(param_4);
  return;
}



/* Entry: 105a7bac4; end: 105a7baeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bac4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272e53c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105a7baec; end: 105a7bb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7baec(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    func_0x00010c1a7f60(*(undefined8 *)(lVar1 + _DAT_11272e53c));
    func_0x00010c1a7f60(*(undefined8 *)(lVar1 + _DAT_11272e52c));
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a7bb6c; end: 105a7bbf3; -[SCSpectaclesFlightImuCalibrationViewController _setActiveTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bb6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272e558;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != param_3) {
    if (param_3 == 0) {
      if (lVar1 != 0) {
        func_0x00010bf83180(lVar1,param_2,1);
      }
    }
    else {
      func_0x00010c10c5a0(0x3fd3333333333333,param_3,param_2,param_1,0);
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7bbf4; end: 105a7bc7f; -[SCSpectaclesFlightImuCalibrationViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bbf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 8) {
    lVar1 = *(long *)(param_1 + _DAT_11272e544);
    lVar2 = (long)_DAT_11272e558;
    if (lVar1 != *(long *)(param_1 + lVar2)) {
      func_0x00010bf83180(lVar1,param_2,0);
      lVar1 = *(long *)(param_1 + lVar2);
    }
    if (*(long *)(param_1 + _DAT_11272e54c) != lVar1) {
      func_0x00010bf83180(*(long *)(param_1 + _DAT_11272e54c),param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7bc80; end: 105a7bccb; -[SCSpectaclesFlightImuCalibrationViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bc80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e524);
  puVar1 = PTR_PTR_1126c1c90;
  func_0x00010c268e80(PTR_PTR_1126c1c90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a7bccc; end: 105a7bd17; -[SCSpectaclesFlightImuCalibrationViewController doneTrayViewControllerDidTapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e524);
  puVar1 = PTR_PTR_1126c1c90;
  func_0x00010c268f20(PTR_PTR_1126c1c90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a7bd18; end: 105a7bd63; -[SCSpectaclesFlightImuCalibrationViewController instructionsTrayViewControllerDidShowCurrentPhaseResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bd18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e524);
  puVar1 = PTR_PTR_1126c1c90;
  func_0x00010c27b440(PTR_PTR_1126c1c90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a7bd64; end: 105a7bdaf; -[SCSpectaclesFlightImuCalibrationViewController videoViewDidPlayToEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bd64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e524);
  puVar1 = PTR_PTR_1126c1c90;
  func_0x00010c29a940(PTR_PTR_1126c1c90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a7bdb0; end: 105a7bdbf; -[SCSpectaclesFlightImuCalibrationViewController videoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a7bdb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272e53c);
}



/* Entry: 105a7bdc0; end: 105a7bdff; -[SCSpectaclesFlightImuCalibrationViewController setVideoView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7bdc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272e53c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a7be00; end: 105a7bf2f; -[SCSpectaclesFlightImuCalibrationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7be00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e53c,0);
  _objc_storeStrong(param_1 + _DAT_11272e534,0);
  _objc_storeStrong(param_1 + _DAT_11272e530,0);
  _objc_storeStrong(param_1 + _DAT_11272e538,0);
  _objc_storeStrong(param_1 + _DAT_11272e52c,0);
  _objc_storeStrong(param_1 + _DAT_11272e540,0);
  _objc_storeStrong(param_1 + _DAT_11272e550,0);
  _objc_storeStrong(param_1 + _DAT_11272e54c,0);
  _objc_storeStrong(param_1 + _DAT_11272e548,0);
  _objc_storeStrong(param_1 + _DAT_11272e544,0);
  _objc_storeStrong(param_1 + _DAT_11272e558,0);
  _objc_storeStrong(param_1 + _DAT_11272e554,0);
  _objc_storeStrong(param_1 + _DAT_11272e528,0);
  _objc_storeStrong(param_1 + _DAT_11272e524,0);
  _objc_storeStrong(param_1 + _DAT_11272e520,0);
  _objc_storeStrong(param_1 + _DAT_11272e51c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e518,0);
  return;
}



/* Entry: 105a7bf30; end: 105a7c28f; -[SCSpectaclesOnDemandVideoViewController initWithDelegate:videoObjectBehavior:playerProvider:onDemandResourceFetcher:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105a7bf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126eb890;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272e55c,param_3);
    lVar5 = (long)_DAT_11272e560;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11272e564;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e568);
    *(undefined **)((long)puVar1 + (long)_DAT_11272e568) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272e56c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272e56c) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272e570) = 0;
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_7;
    func_0x00010c2a6420(param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105a7c290;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf75dc0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105a7c2c0;
    puStack_c8 = &UNK_110846510;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf870a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a7c290; end: 105a7c337;  */

void FUN_105a7c290(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea1e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a7c338; end: 105a7c9fb; -[SCSpectaclesOnDemandVideoViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7c338(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined *puStack_b8;
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
  puStack_b8 = PTR_PTR_1126eb890;
  lStack_c0 = param_1;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar33 = (long)_DAT_11272e574;
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar1;
  _objc_release(uVar32);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar33));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126bf660;
  _objc_alloc_init();
  lVar34 = (long)_DAT_11272e578;
  uVar32 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar1;
  _objc_release(uVar32);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar34));
  func_0x00010c2218a0(*(undefined8 *)(param_1 + lVar34));
  lVar2 = *(long *)(param_1 + _DAT_11272e560);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + _DAT_11272e57c);
  *(long *)(param_1 + _DAT_11272e57c) = lVar3;
  _objc_release(uVar32);
  func_0x00010c1dda40(*(undefined8 *)(param_1 + lVar34));
  uVar32 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c100720(uVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161660();
  _objc_release(uVar32);
  _objc_initWeak(auStack_c8,param_1);
  uVar32 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c100720(uVar32);
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMake(auStack_e0,1,0x3c);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_e8);
  func_0x00010befa7a0(uVar32);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar32);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar33);
  uStack_b0 = uVar32;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar33);
  uStack_a8 = uVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar33);
  uStack_a0 = uVar13;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar33;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar34);
  uStack_98 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar34);
  uStack_90 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar34);
  uStack_88 = uVar24;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar34);
  uStack_80 = uVar28;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar30;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar31);
  _objc_release(uVar30);
  _objc_release(lVar34);
  _objc_release(param_1);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar33);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar32);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume(lVar2);
  lVar2 = lVar2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be75020();
  _objc_release(lVar2);
  return;
}



/* Entry: 105a7c9fc; end: 105a7ca4b;  */

void FUN_105a7c9fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75020();
  _objc_release(param_1);
  return;
}



/* Entry: 105a7ca4c; end: 105a7caa3; -[SCSpectaclesOnDemandVideoViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7ca4c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eb890;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  *(undefined1 *)(param_1 + _DAT_11272e580) = 1;
  func_0x00010bddd9e0(param_1);
  return;
}



/* Entry: 105a7caa4; end: 105a7caf7; -[SCSpectaclesOnDemandVideoViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7caa4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eb890;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  *(undefined1 *)(param_1 + _DAT_11272e580) = 0;
  func_0x00010bddd9e0(param_1);
  return;
}



/* Entry: 105a7caf8; end: 105a7cb07; -[SCSpectaclesOnDemandVideoViewController _setAppIsBackgrounded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7caf8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11272e584) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bddd9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkIfCanPlay_112555018);
  return;
}



/* Entry: 105a7cb08; end: 105a7cd13; -[SCSpectaclesOnDemandVideoViewController _playerDidPlayToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7cb08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11272e588);
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  _CMTimeRangeGetEnd(&uStack_60,&uStack_90);
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_80 = param_3[2];
  puVar3 = &uStack_60;
  _CMTimeCompare(puVar3,&uStack_90);
  if ((int)puVar3 < 1) {
    lVar8 = param_1 + _DAT_11272e55c;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c29bca0();
    _objc_release(lVar8);
    lVar9 = (long)_DAT_11272e58c;
    iVar2 = (int)*(undefined8 *)(param_1 + lVar9);
    func_0x00010c29b1a0();
    lVar8 = (long)_DAT_11272e57c;
    if (iVar2 != 0) {
      uVar4 = *(ulong *)(param_1 + lVar8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      if (uVar5 < 2) {
        uVar6 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c084fc0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uStack_88 = puVar1[1];
        uStack_90 = *puVar1;
        uStack_80 = puVar1[2];
        uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        func_0x00010c157300(uVar7);
        _objc_release(uVar7);
        return;
      }
    }
    uVar4 = *(ulong *)(param_1 + lVar8);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    if (1 < uVar5) {
      *(long *)(param_1 + _DAT_11272e570) = *(long *)(param_1 + _DAT_11272e570) + 1;
      uVar7 = *(undefined8 *)(param_1 + _DAT_11272e56c);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar9);
      *(undefined8 *)(param_1 + lVar9) = uVar7;
      _objc_release(uVar6);
      uVar7 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c29bbe0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11272e590);
      *(undefined8 *)(param_1 + _DAT_11272e590) = uVar7;
      _objc_release(uVar6);
      func_0x00010befe380(*(undefined8 *)(param_1 + lVar8));
      func_0x00010bee34c0(param_1);
    }
  }
  return;
}



/* Entry: 105a7cd14; end: 105a7d05b; -[SCSpectaclesOnDemandVideoViewController _updateWithVideoObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7cd14(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11272e594;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_3;
  func_0x00010c29bbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar2 = param_3;
    func_0x00010c29bbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11272e578);
      func_0x00010c100720(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
      _objc_release(uVar1);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11272e564);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c29bbe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c29a3a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar5);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105a7d05c;
      puStack_60 = &UNK_1108d04d8;
      _objc_copyWeak(auStack_50,auStack_48);
      uVar2 = param_3;
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar1);
      _objc_release(uVar2);
      _objc_release(uStack_58);
      _objc_destroyWeak(auStack_50);
      _objc_release(uVar1);
    }
  }
  else {
    func_0x00010bddd9e0(param_1);
  }
  uVar2 = param_3;
  func_0x00010bfe8fe0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010bfe8fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_11272e564);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bfe8fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010bfe7d80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_copyWeak(auStack_80,auStack_48);
      uVar2 = param_3;
      _objc_retain(param_3);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar1);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_release(uVar1);
    }
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105a7d05c; end: 105a7d133;  */

void FUN_105a7d05c(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfdd40();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105a7d134; end: 105a7d327; -[SCSpectaclesOnDemandVideoViewController _didFetchAsset:fromVideoObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7d134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010c29bbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e594);
  func_0x00010c29bbe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0720c0(uVar5,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  if (((int)uVar6 != 0) && (lVar7 = (long)_DAT_11272e57c, *(long *)(param_1 + lVar7) != 0)) {
    puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    func_0x00010bff41a0();
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    if (lVar4 == 0) {
      func_0x00010c0669a0(uVar5,param_2,puVar2,0);
      lVar7 = (long)_DAT_11272e56c;
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar7),param_2,param_4);
    }
    else {
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf2cce0(uVar5,param_2,puVar2,uVar6);
      if ((int)uVar5 != 0) {
        func_0x00010c0669a0(*(undefined8 *)(param_1 + lVar7),param_2,puVar2,uVar6);
        func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11272e56c),param_2,param_4);
      }
      _objc_release(uVar6);
      lVar7 = (long)_DAT_11272e56c;
    }
    lVar7 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (lVar7 == 1) {
      lVar7 = (long)_DAT_11272e58c;
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      *(undefined8 *)(param_1 + lVar7) = param_4;
      _objc_release(uVar5);
      uVar5 = param_4;
      func_0x00010c29bbe0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11272e590);
      *(undefined8 *)(param_1 + _DAT_11272e590) = uVar5;
      _objc_release(uVar6);
    }
    func_0x00010bddd9e0(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7d328; end: 105a7d457; -[SCSpectaclesOnDemandVideoViewController _didFetchFallbackImage:fromUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7d328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11272e594;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe8fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_11272e590);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c29bbe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = (long)_DAT_11272e598;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = param_4;
      _objc_release(uVar2);
      lVar4 = (long)_DAT_11272e574;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
      lVar4 = (long)_DAT_11272e578;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c100720(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7d458; end: 105a7d64f; -[SCSpectaclesOnDemandVideoViewController _checkIfCanPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7d458(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(char *)(param_1 + _DAT_11272e580) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_11272e584) & 1) == 0)) {
    lVar7 = (long)_DAT_11272e58c;
    uVar6 = *(ulong *)(param_1 + _DAT_11272e590);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c29bbe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar6,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar6 & 1) != 0) {
      lVar8 = (long)_DAT_11272e57c;
      lVar3 = *(long *)(param_1 + lVar8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        func_0x00010bee34c0(param_1);
        if (*(long *)(param_1 + lVar7) == *(long *)(param_1 + _DAT_11272e594)) {
          uVar5 = *(undefined8 *)(param_1 + lVar8);
          func_0x00010c084fc0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          puVar1 = (undefined8 *)(param_1 + _DAT_11272e588);
          uStack_58 = puVar1[1];
          uStack_60 = *puVar1;
          uStack_50 = puVar1[2];
          uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
          uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
          uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          uStack_80 = uStack_a0;
          uStack_78 = uStack_98;
          uStack_70 = uStack_90;
          func_0x00010c157300(uVar2,param_2,&uStack_60,&uStack_80,&uStack_a0,0);
          _objc_release(uVar2);
        }
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272e574),param_2,1);
        lVar7 = (long)_DAT_11272e578;
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,0);
        uVar2 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c100720(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0fe360();
        _objc_release(uVar2);
      }
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272e578);
  func_0x00010c100720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a7d650; end: 105a7d7c7; -[SCSpectaclesOnDemandVideoViewController _updateVideoRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7d650(double param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_2 + _DAT_11272e57c);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_11272e58c;
  func_0x00010c250f20(*(undefined8 *)(param_2 + lVar2));
  _CMTimeMakeWithSeconds(&uStack_b0,600);
  func_0x00010bf95780(*(undefined8 *)(param_2 + lVar2));
  dVar4 = param_1;
  func_0x00010c250f20(*(undefined8 *)(param_2 + lVar2));
  _CMTimeMakeWithSeconds(&uStack_e0,param_1 - dVar4,600);
  _CMTimeRangeMake(&uStack_80,&uStack_b0,&uStack_e0);
  lVar2 = lVar3;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_e0,lVar2);
  }
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(&uStack_b0,&uStack_110,&uStack_e0);
  _objc_release(lVar2);
  puVar1 = (undefined8 *)(param_2 + _DAT_11272e588);
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  uStack_f8 = uStack_68;
  uStack_100 = uStack_70;
  uStack_e8 = uStack_58;
  uStack_f0 = uStack_60;
  uStack_138 = uStack_a8;
  uStack_140 = uStack_b0;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  _CMTimeRangeGetIntersection(&uStack_e0,&uStack_110,&uStack_140);
  puVar1[1] = uStack_d8;
  *puVar1 = uStack_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = uStack_d0;
  puVar1[5] = uStack_b8;
  puVar1[4] = uStack_c0;
  _objc_release(lVar3);
  return;
}



/* Entry: 105a7d7c8; end: 105a7d8b3; -[SCSpectaclesOnDemandVideoViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a7d7c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e590,0);
  _objc_storeStrong(param_1 + _DAT_11272e57c,0);
  _objc_storeStrong(param_1 + _DAT_11272e578,0);
  _objc_storeStrong(param_1 + _DAT_11272e598,0);
  _objc_storeStrong(param_1 + _DAT_11272e574,0);
  _objc_storeStrong(param_1 + _DAT_11272e56c,0);
  _objc_storeStrong(param_1 + _DAT_11272e58c,0);
  _objc_storeStrong(param_1 + _DAT_11272e594,0);
  _objc_storeStrong(param_1 + _DAT_11272e568,0);
  _objc_storeStrong(param_1 + _DAT_11272e59c,0);
  _objc_storeStrong(param_1 + _DAT_11272e564,0);
  _objc_storeStrong(param_1 + _DAT_11272e560,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e55c);
  return;
}



/* Entry: 105a7d8b4; end: 105a7d8ff; +[SCSpectaclesFlightImuCalibrationAction didDealloc] */

void FUN_105a7d8b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1c90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7d900; end: 105a7d94b; +[SCSpectaclesFlightImuCalibrationAction tapCancelButton] */

void FUN_105a7d900(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1c90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7d94c; end: 105a7d993; +[SCSpectaclesFlightImuCalibrationAction tapDoneButton] */

void FUN_105a7d94c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1c90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7d994; end: 105a7d9df; +[SCSpectaclesFlightImuCalibrationAction trayIconFinishedAnimating] */

void FUN_105a7d994(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1c90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7d9e0; end: 105a7da2b; +[SCSpectaclesFlightImuCalibrationAction videoPlayToEnd] */

void FUN_105a7d9e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1c90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7da2c; end: 105a7da4f; -[SCSpectaclesFlightImuCalibrationAction copyWithZone:] */

undefined8 FUN_105a7da2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a7da50; end: 105a7da57; -[SCSpectaclesFlightImuCalibrationAction hash] */

undefined8 FUN_105a7da50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a7da58; end: 105a7da9b; -[SCSpectaclesFlightImuCalibrationAction internalInit] */

void FUN_105a7da58(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126eb898;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a7da9c; end: 105a7db23; -[SCSpectaclesFlightImuCalibrationAction isEqual:] */

bool FUN_105a7da9c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a7db24; end: 105a7dc1f; -[SCSpectaclesFlightImuCalibrationAction matchTapDoneButton:tapCancelButton:didDealloc:videoPlayToEnd:trayIconFinishedAnimating:] */

void FUN_105a7db24(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_105a7dbd0;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && ((lVar1 = param_6, lVar2 != 3 && (lVar1 = param_7, lVar2 != 4))))
    goto LAB_105a7dbd0;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_105a7dbd0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7dc20; end: 105a7dce3; +[SCSpectaclesFlightImuCalibrationPageViewModel calibratingPageWithTitle:trayViewModel:videoViewModel:] */

void FUN_105a7dc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1c80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7dce4; end: 105a7ddb7; +[SCSpectaclesFlightImuCalibrationPageViewModel loadingPageWithTitle:loadingTitle:loadingSubtitle:showSpinner:] */

void FUN_105a7dce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1c80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x40] = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a7ddb8; end: 105a7dddb; -[SCSpectaclesFlightImuCalibrationPageViewModel copyWithZone:] */

undefined8 FUN_105a7ddb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a7dddc; end: 105a7de87; -[SCSpectaclesFlightImuCalibrationPageViewModel hash] */

void FUN_105a7dddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x40);
  puVar3 = &uStack_68;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126eb8a0;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a7de88; end: 105a7decb; -[SCSpectaclesFlightImuCalibrationPageViewModel internalInit] */

void FUN_105a7de88(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126eb8a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a7decc; end: 105a7dff3; -[SCSpectaclesFlightImuCalibrationPageViewModel isEqual:] */

long FUN_105a7decc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a7dfcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a7dfd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_105a7dfd8;
                }
                goto LAB_105a7dfcc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105a7dfd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a7dff4; end: 105a7e087; -[SCSpectaclesFlightImuCalibrationPageViewModel matchCalibratingPage:loadingPage:] */

void FUN_105a7dff4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x40));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a7e088; end: 105a7e0e7; -[SCSpectaclesFlightImuCalibrationPageViewModel .cxx_destruct] */

void FUN_105a7e088(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


