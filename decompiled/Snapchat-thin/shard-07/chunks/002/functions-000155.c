/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052de39c; end: 1052de3f3;  */

void FUN_1052de39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffd80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052de3f4; end: 1052de59f;  */

void FUN_1052de3f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1052de5a0;
  puStack_70 = &UNK_1108434b0;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1052de5fc;
  puStack_98 = &UNK_1108434b0;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1052de658;
  puStack_c0 = &UNK_1108762f0;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1052de6d8;
  puStack_e8 = &UNK_1108762f0;
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  _objc_copyWeak(auStack_108,param_1 + 0x20);
  func_0x00010c0c03a0(param_2);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1052de5a0; end: 1052de657;  */

void FUN_1052de5a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7bf60(param_1,param_2,&PTR____CFConstantStringClassReference_110dd0178,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052de658; end: 1052de757;  */

void FUN_1052de658(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79f40(param_1);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052de758; end: 1052de78b;  */

void FUN_1052de758(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a2400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052de78c; end: 1052de88b; -[SCBatteryLogger _sessionDidStartRunning:] */

void FUN_1052de78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c1afc20(param_2,param_3,1);
  func_0x00010bf70d80();
  lVar2 = param_4;
  func_0x00010c154f00();
  _objc_release(param_4);
  func_0x0001007089bc();
  _CACurrentMediaTime();
  lVar1 = 2;
  if (lVar2 != 0) {
    lVar1 = 0;
  }
  if (lVar2 == 1) {
    lVar1 = 1;
  }
  uVar3 = param_2;
  func_0x00010bf17460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72b00(param_1);
  _objc_release(uVar3);
  if (lVar1 != 0) {
    func_0x00010bf17460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72b00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1052de88c; end: 1052de98b; -[SCBatteryLogger _sessionDidStopRunning:] */

void FUN_1052de88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c1afc20(param_2,param_3,0);
  func_0x00010bf70d80();
  lVar2 = param_4;
  func_0x00010c154f00();
  _objc_release(param_4);
  func_0x0001007089bc();
  _CACurrentMediaTime();
  lVar1 = 2;
  if (lVar2 != 0) {
    lVar1 = 0;
  }
  if (lVar2 == 1) {
    lVar1 = 1;
  }
  uVar3 = param_2;
  func_0x00010bf17460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72b40(param_1);
  _objc_release(uVar3);
  if (lVar1 != 0) {
    func_0x00010bf17460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1052de98c; end: 1052dea0b; -[SCBatteryLogger _didRemoveCaptureInput:captureState:] */

void FUN_1052de98c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c06dd00();
  if ((int)uVar1 != 0) {
    _CACurrentMediaTime();
    func_0x00010bf17460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1052dea0c; end: 1052dea3b; -[SCBatteryLogger onAppIdle] */

void FUN_1052dea0c(undefined8 param_1)

{
  func_0x00010bea9740();
  func_0x00010be92260(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a1970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logBatteryLevelAndUpdateAppIsBac_112606068,0)
  ;
  return;
}



/* Entry: 1052dea3c; end: 1052deac7; -[SCBatteryLogger _setUpBatteryObservations] */

void FUN_1052dea3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x60) != 0) {
    return;
  }
  lVar2 = param_1;
  func_0x00010bdeb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1052deac8; end: 1052deb3b; -[SCBatteryLogger _tearDownBatteryObservations] */

void FUN_1052deac8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x60) != 0) {
    _dispatch_source_cancel();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1052deb3c; end: 1052debeb;  */

void FUN_1052deb3c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 1) {
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    lVar1 = param_2;
    func_0x00010bf17640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72b40(param_1);
  }
  else {
    if (param_3 != 0) {
      return;
    }
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    lVar1 = param_2;
    func_0x00010bf17640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72b00(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052debec; end: 1052dec6b;  */

void FUN_1052debec(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf78d60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052dec6c; end: 1052ded27; -[SCBatteryLogger _setUpGpuUsageListener] */

void FUN_1052dec6c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf174c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d560();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052ded28; end: 1052ded63;  */

void FUN_1052ded28(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf78da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052ded64; end: 1052ded67; -[SCBatteryLogger _setUpBatteryResourceStatusObservationsAndUpdateDebugViewIfNeeded] */

void FUN_1052ded64(void)

{
  return;
}



/* Entry: 1052ded68; end: 1052dee53; -[SCBatteryLogger _setUpNetworkAndStateObservations] */

void FUN_1052ded68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06d140();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16faa0();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052dee54; end: 1052deea3; -[SCBatteryLogger dealloc] */

void FUN_1052dee54(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x70));
  func_0x00010becacc0(param_1);
  puStack_28 = PTR_PTR_1126e7570;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1052deea4; end: 1052deecb; -[SCBatteryLogger queuePerformer] */

void FUN_1052deea4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052deecc; end: 1052deedf; -[SCBatteryLogger shouldLogThisSession] */

void FUN_1052deecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4024000000000000,0,PTR__OBJC_CLASS___UIDevice_1126aeb10,
             PTR_s_shouldReportForPercentage_startO_11266a3f0);
  return;
}



/* Entry: 1052deee0; end: 1052def17; -[SCBatteryLogger startLoggingSessionIfNeeded] */

void FUN_1052deee0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c231880();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resume_11262ce90);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 1052def18; end: 1052defff; -[SCBatteryLogger _createBatteryLevelObservingTimer] */

void FUN_1052def18(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined *)0x0) {
    uVar1 = 0;
    _dispatch_time(0,4000000000);
    _dispatch_source_set_timer(puVar2,uVar1,4000000000,0);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1052df000;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    _dispatch_source_set_event_handler(puVar2,&puStack_58);
    _dispatch_resume(puVar2);
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052df000; end: 1052df013;  */

void FUN_1052df000(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x68) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf17530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s_batteryLevelChanged_1125a36f0);
  return;
}



/* Entry: 1052df014; end: 1052df087; -[SCBatteryLogger batteryStateChanged] */

void FUN_1052df014(undefined8 param_1)

{
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052df088; end: 1052df097;  */

void FUN_1052df088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a1950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logBatteryLevelAndStateWithHandl_112606060,0,1);
  return;
}



/* Entry: 1052df098; end: 1052df11b; -[SCBatteryLogger logBatteryLevelAndUpdateAppIsBackgrounded:] */

void FUN_1052df098(undefined8 param_1)

{
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052df11c; end: 1052df12f;  */

void FUN_1052df11c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = *(undefined1 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c0a1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logBatteryLevelAndState_112606058);
  return;
}



/* Entry: 1052df130; end: 1052df13b; -[SCBatteryLogger logBatteryLevelAndState] */

void FUN_1052df130(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a1950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logBatteryLevelAndStateWithHandl_112606060,0,0);
  return;
}



/* Entry: 1052df13c; end: 1052df1d3; -[SCBatteryLogger logBatteryLevelAndStateWithHandler:onBatteryStateChange:] */

void FUN_1052df13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1052df1d4;
  puStack_50 = &UNK_1108523f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1052df1d4; end: 1052df323;  */

void FUN_1052df1d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  uVar6 = param_1;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf176e0();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bdd3000(uVar4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c11dfc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1052df324;
  puStack_80 = &UNK_110876380;
  uStack_78 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uStack_90 = 0xc2000000;
  uStack_58 = (undefined4)param_1;
  uStack_60 = uVar6;
  uStack_54 = ((ulong)puVar3 & 0xfffffffffffffffe) == 2;
  _objc_retain(uVar1);
  uStack_53 = *(undefined1 *)(param_2 + 0x30);
  uStack_70 = uVar4;
  uStack_68 = uVar1;
  _objc_retain(uVar4);
  func_0x00010c0f7fc0(uVar5,param_3,&puStack_98);
  _objc_release(uVar5);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(uVar4);
  return;
}



/* Entry: 1052df324; end: 1052df39f;  */

void FUN_1052df324(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = *(undefined1 *)(param_1 + 0x44);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = *(undefined8 *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  if ((*(char *)(param_1 + 0x45) == '\x01') &&
     (*(char *)(*(long *)(param_1 + 0x20) + 0x30) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010bf72830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),
               PTR_s_didBatteryChargingStart_1125ba3b0);
    return;
  }
  return;
}



/* Entry: 1052df3a0; end: 1052df3c7; -[SCBatteryLogger _batteryStateString:] */

undefined ** FUN_1052df3a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110876470)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd0198;
}



/* Entry: 1052df3c8; end: 1052df43b; -[SCBatteryLogger batteryLevelChanged] */

void FUN_1052df3c8(undefined8 param_1)

{
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052df43c; end: 1052df443;  */

void FUN_1052df43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logBatteryLevelAndState_112606058);
  return;
}



/* Entry: 1052df444; end: 1052df447; -[SCBatteryLogger resume] */

void FUN_1052df444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpBatteryObservations_112587d68);
  return;
}



/* Entry: 1052df448; end: 1052df44b; -[SCBatteryLogger pause] */

void FUN_1052df448(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becacd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tearDownBatteryObservations_1125904d8);
  return;
}



/* Entry: 1052df44c; end: 1052df44f; -[SCBatteryLogger didBecomeActive:] */

void FUN_1052df44c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startLoggingSessionIfNeeded_1126716e0);
  return;
}



/* Entry: 1052df450; end: 1052df453; -[SCBatteryLogger willResignActive:] */

void FUN_1052df450(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 1052df454; end: 1052df507; -[SCBatteryLogger willEnterForeground] */

void FUN_1052df454(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be92280();
  func_0x00010be928e0(param_1);
  uVar1 = param_1;
  func_0x00010bf17460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1384a0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf174a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138c20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf17620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1390c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf17640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139160();
  _objc_release(uVar1);
  func_0x00010c1398c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be92270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetAppOpenBatteryLevel_112582238);
  return;
}



/* Entry: 1052df508; end: 1052df5ab; -[SCBatteryLogger didEnterBackground] */

void FUN_1052df508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0a1960(param_2,param_3,1);
  _CACurrentMediaTime();
  uVar1 = param_2;
  func_0x00010bf17460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2840e0(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf17640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0680(param_1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1325a0(param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1052df5ac; end: 1052df5af; -[SCBatteryLogger thermalStateDidChange] */

void FUN_1052df5ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf37d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_checkCurrentThermalState_1125ab8f8);
  return;
}



/* Entry: 1052df5b0; end: 1052df677; -[SCBatteryLogger checkCurrentThermalState] */

void FUN_1052df5b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c26d100();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010011cca4();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1f80(param_1,param_2,puVar2,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052df678; end: 1052df72f; -[SCBatteryLogger _updateThermalHistoryWithThermalState:thermalStateStartTime:] */

void FUN_1052df678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1052df730;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1052df730; end: 1052df7ff;  */

void FUN_1052df730(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x00010c26f380(*(undefined8 *)(param_2 + 0x20),param_3,
                      *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x58));
  uVar1 = *(ulong *)(param_2 + 0x30);
  func_0x00010c071f40();
  if ((uVar1 & 1) == 0) {
    lVar5 = *(long *)(param_2 + 0x28);
    FUN_1052df800(*(undefined8 *)(lVar5 + 0x50),param_1,*(undefined8 *)(lVar5 + 0xb0),
                  *(undefined8 *)(lVar5 + 0x48));
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf17640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7d920();
    _objc_release(uVar2);
  }
  lVar5 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar5 + 0xb0);
  *(undefined8 *)(lVar5 + 0xb0) = uVar2;
  _objc_release(uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x50) = param_1;
  puVar4 = PTR_PTR_1126b6ec8;
  func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1052df800; end: 1052df973;  */

void FUN_1052df800(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  if (((param_1 < param_2) && (0.0 <= param_1)) && (0.0 <= param_2)) {
    _objc_retain(param_4);
    func_0x00010bf51e00();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    func_0x00010befa120(param_4);
    _objc_release(param_4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f7fc0(*(undefined8 *)(puVar4 + 0xb8));
  return;
}



/* Entry: 1052df974; end: 1052df9cb; -[SCBatteryLogger _resetAppSessionId] */

void FUN_1052df974(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052df9cc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xb8),param_2,&puStack_38);
  return;
}



/* Entry: 1052df9cc; end: 1052dfa03;  */

void FUN_1052df9cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(long *)(*(long *)(param_1 + 0x20) + 0x40) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052dfa04; end: 1052dfadb; -[SCBatteryLogger _resetAppOpenBatteryLevel] */

void FUN_1052dfa04(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  uVar3 = param_1;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf176e0();
  _objc_release(puVar1);
  _CACurrentMediaTime();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1052dfadc;
  puStack_60 = &UNK_1108763b0;
  uStack_48 = (undefined4)param_1;
  lStack_58 = param_2;
  uStack_50 = uVar3;
  uStack_44 = ((ulong)puVar2 & 0xfffffffffffffffe) == 2;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0xb8),param_3,&puStack_78);
  return;
}



/* Entry: 1052dfadc; end: 1052dfb0b;  */

void FUN_1052dfadc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c) = uVar1;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = *(undefined1 *)(param_1 + 0x34);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 1052dfb0c; end: 1052dfb17; -[SCBatteryLogger reportAppSessionBatteryMetricsAtTimestamp:] */

void FUN_1052dfb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportAppSessionBatteryMetricsA_112581668,param_3,1,0);
  return;
}



/* Entry: 1052dfb18; end: 1052dfbfb; -[SCBatteryLogger _reportAppSessionBatteryMetricsAtTimestamp:onAppBackground:withTrigger:] */

void FUN_1052dfb18(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c11dfc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1052dfbfc;
  puStack_60 = &UNK_1108763e0;
  uStack_58 = param_2;
  uStack_50 = param_4;
  uStack_48 = param_1;
  uStack_44 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2,param_3,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 1052dfbfc; end: 1052e1c63;  */

void FUN_1052dfbfc(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
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
  long lVar36;
  undefined *puVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  double dVar44;
  float fVar45;
  
  lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  dVar44 = param_1;
  if (*(long *)(*(long *)(param_2 + 0x20) + 0x58) != 0) {
    lVar2 = *(long *)(param_2 + 0x28);
    func_0x00010c26f380(lVar2);
    dVar44 = param_1 * 1000.0;
    if (0 < (long)dVar44) {
      lVar3 = *(long *)(param_2 + 0x20);
      func_0x00010bf17620();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0d82a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar4 = *(long *)(param_2 + 0x20);
      func_0x00010bf174a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bfcd720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar5 = *(long *)(param_2 + 0x20);
      func_0x00010bf17460();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bf05e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar6 = PTR_PTR_1126ae4f0;
      func_0x00010bf53b60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_2 + 0x20);
      func_0x00010bf17640();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010bf05ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      if (*(float *)(param_2 + 0x30) == -1.0) {
        dVar44 = 0.0;
      }
      else {
        fVar45 = *(float *)(*(long *)(param_2 + 0x20) + 0x28);
        dVar44 = 0.0;
        if (fVar45 != -1.0) {
          dVar44 = (double)((*(float *)(param_2 + 0x30) - fVar45) * 100.0);
        }
      }
      puVar8 = PTR_PTR_1126b6e50;
      _objc_opt_new();
      uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40);
      func_0x00010bf51e00(uVar9);
      func_0x00010c168f00(puVar8);
      _objc_release(uVar9);
      func_0x00010c16f980((double)(*(float *)(param_2 + 0x30) * 100.0),puVar8);
      puVar10 = PTR_PTR_1126b6f38;
      _objc_opt_new();
      func_0x00010c16f960(dVar44);
      func_0x00010c18ed40(puVar8);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1052df800(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50),param_1,
                    *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xb0),puVar11);
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
      *(undefined **)(*(long *)(param_2 + 0x20) + 0x48) = puVar12;
      _objc_release(uVar9);
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50) = 0xbff0000000000000;
      _objc_retain(puVar11);
      puVar12 = puVar11;
      func_0x00010bf529e0();
      ppuVar21 = &PTR____CFConstantStringClassReference_110daafd8;
      if (puVar12 != (undefined *)0x0) {
        _objc_retain(puVar11);
        puVar12 = puVar11;
        func_0x00010bf52a60();
        lVar7 = lRam0000000000000000;
        ppuVar20 = ppuVar21;
        while (puVar12 != (undefined *)0x0) {
          puVar37 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar7) {
              _objc_enumerationMutation(puVar11);
            }
            lVar13 = *(long *)((long)puVar37 * 8);
            lVar14 = lVar13;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bf52a60();
            lVar23 = lRam0000000000000000;
            while (lVar15 != 0) {
              lVar41 = 0;
              ppuVar21 = ppuVar20;
              do {
                if (lRam0000000000000000 != lVar23) {
                  _objc_enumerationMutation(lVar14);
                }
                lVar42 = lVar13;
                func_0x00010c0e00e0(lVar13);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                lVar16 = lVar42;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0b4ca0();
                func_0x00010c0df7c0();
                _objc_retainAutoreleasedReturnValue();
                puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                lVar39 = lVar42;
                func_0x00010c0dfd40(lVar42);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0b4ca0();
                func_0x00010c0df7c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c14de00(puVar19);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar18);
                _objc_release(lVar39);
                _objc_release(puVar17);
                _objc_release(lVar16);
                ppuVar20 = ppuVar21;
                func_0x00010c25ce40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar21);
                _objc_release(puVar19);
                _objc_release(lVar42);
                lVar41 = lVar41 + 1;
                ppuVar21 = ppuVar20;
              } while (lVar15 != lVar41);
              lVar15 = lVar14;
              func_0x00010bf52a60();
            }
            _objc_release(lVar14);
            puVar37 = puVar37 + 1;
          } while (puVar37 != puVar12);
          puVar12 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        func_0x00010c08fa60(ppuVar20);
        ppuVar21 = ppuVar20;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar20);
      }
      _objc_release(puVar11);
      func_0x00010c213b20(puVar8);
      _objc_retain(puVar11);
      puVar12 = puVar11;
      func_0x00010bf529e0();
      puVar37 = PTR____NSArray0__struct_11034ab48;
      if (puVar12 != (undefined *)0x0) {
        puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar11);
        puVar12 = puVar11;
        func_0x00010bf52a60();
        lVar7 = lRam0000000000000000;
        while (puVar12 != (undefined *)0x0) {
          puVar37 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar7) {
              _objc_enumerationMutation(puVar11);
            }
            lVar13 = *(long *)((long)puVar37 * 8);
            lVar14 = lVar13;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bf52a60();
            lVar23 = lRam0000000000000000;
            while (lVar15 != 0) {
              lVar41 = 0;
              do {
                if (lRam0000000000000000 != lVar23) {
                  _objc_enumerationMutation(lVar14);
                }
                uVar9 = *(undefined8 *)(lVar41 * 8);
                lVar42 = lVar13;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar42;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                lVar39 = lVar16;
                func_0x00010c0b4ca0();
                lVar40 = lVar42;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                lVar22 = lVar40;
                func_0x00010c0b4ca0();
                _objc_release(lVar40);
                _objc_release(lVar16);
                if (0 < lVar39 - lVar22) {
                  puVar17 = PTR_PTR_1126b6f80;
                  _objc_opt_new(PTR_PTR_1126b6f80);
                  lVar16 = lVar42;
                  func_0x00010c0dfd40(lVar42);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0b4ca0();
                  func_0x00010c209660(puVar17);
                  _objc_release(lVar16);
                  func_0x00010c192e60(puVar17);
                  func_0x00010c0b4ca0(uVar9);
                  func_0x00010c213b40(puVar17);
                  func_0x00010befa120(puVar19);
                  _objc_release(puVar17);
                }
                _objc_release(lVar42);
                lVar41 = lVar41 + 1;
              } while (lVar15 != lVar41);
              lVar15 = lVar14;
              func_0x00010bf52a60();
            }
            _objc_release(lVar14);
            puVar37 = puVar37 + 1;
          } while (puVar37 != puVar12);
          puVar12 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        puVar37 = puVar19;
        func_0x00010bf51e00();
        _objc_release(puVar19);
      }
      _objc_release(puVar11);
      puVar12 = puVar37;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010c213b60(puVar8);
      }
      puVar12 = PTR_PTR_1126b6e58;
      _objc_opt_new();
      func_0x00010c19b6a0();
      func_0x00010c1ef000(puVar8);
      puVar19 = PTR_PTR_1126b6f40;
      _objc_opt_new();
      lVar7 = lVar4;
      func_0x00010c0e00e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c176b20(puVar19);
      _objc_release(lVar7);
      lVar7 = lVar4;
      func_0x00010c0e00e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1777e0(puVar19);
      _objc_release(lVar7);
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar23;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar13;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar41 = 0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          uVar9 = *(undefined8 *)(lVar41 * 8);
          lVar39 = lVar23;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar40 = lVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar39;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          lVar42 = lVar22;
          func_0x00010bf52a60();
          lVar16 = lRam0000000000000000;
          while (lVar42 != 0) {
            lVar43 = 0;
            do {
              if (lRam0000000000000000 != lVar16) {
                _objc_enumerationMutation(lVar22);
              }
              uVar38 = *(undefined8 *)(lVar43 * 8);
              lVar24 = lVar39;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar25 = lVar40;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = PTR_PTR_1126b6f48;
              _objc_opt_new(PTR_PTR_1126b6f48);
              iVar1 = (int)uVar9;
              func_0x00010c067ec0();
              if (iVar1 != 2) {
                func_0x00010c067ec0();
              }
              func_0x00010c176760(puVar18);
              func_0x00010c0b4ca0(uVar38);
              func_0x00010c1806e0(puVar18);
              if (lVar24 != 0) {
                func_0x00010c0b4ca0(lVar24);
              }
              func_0x00010c176b20(puVar18);
              if (lVar25 != 0) {
                func_0x00010c0b4ca0(lVar25);
              }
              func_0x00010c1777e0(puVar18);
              func_0x00010befa120(puVar17);
              _objc_release(puVar18);
              _objc_release(lVar25);
              _objc_release(lVar24);
              lVar43 = lVar43 + 1;
            } while (lVar42 != lVar43);
            lVar42 = lVar22;
            func_0x00010bf52a60();
          }
          _objc_release(lVar22);
          _objc_release(lVar40);
          _objc_release(lVar39);
          lVar41 = lVar41 + 1;
        } while (lVar41 != lVar7);
        lVar7 = lVar13;
        func_0x00010bf52a60();
      }
      _objc_release(lVar13);
      func_0x00010c177380(puVar19);
      puVar18 = PTR_PTR_1126b6e98;
      _objc_opt_new();
      lVar7 = lVar3;
      func_0x00010c0e00e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1bfee0(puVar18);
      _objc_release(lVar7);
      lVar7 = lVar3;
      func_0x00010c0e00e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1b2560(puVar18);
      _objc_release(lVar7);
      lVar13 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar41 = lVar13;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar41;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar42 = 0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(lVar41);
          }
          puVar27 = PTR_PTR_1126b6f50;
          _objc_opt_new(PTR_PTR_1126b6f50);
          func_0x00010c175c40();
          lVar16 = lVar13;
          func_0x00010c0e00e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar39 = lVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          lVar16 = lVar13;
          func_0x00010c0e00e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar40 = lVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          lVar16 = lVar13;
          func_0x00010c0e00e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          func_0x00010c0b4ca0(lVar39);
          func_0x00010c192e60(puVar27);
          func_0x00010c0b4ca0(lVar40);
          func_0x00010c1ebba0(puVar27);
          func_0x00010c1b66c0(puVar27);
          func_0x00010befa120(puVar26);
          _objc_release(lVar22);
          _objc_release(lVar40);
          _objc_release(lVar39);
          _objc_release(puVar27);
          lVar42 = lVar42 + 1;
        } while (lVar7 != lVar42);
        lVar7 = lVar41;
        func_0x00010bf52a60();
      }
      _objc_release(lVar41);
      func_0x00010c1bfec0(puVar18);
      func_0x00010c1bf6c0(puVar8);
      puVar27 = PTR_PTR_1126b6e60;
      _objc_opt_new();
      lVar7 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cc0e0(puVar27);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cc8e0(puVar27);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cc920(puVar27);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cc460(puVar27);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cc900(puVar27);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cc940(puVar27);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cc060(puVar27);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        puVar28 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        puVar29 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        lVar7 = lVar2;
        func_0x00010c0e00e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64b60(puVar29);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340();
        _objc_release(puVar29);
        _objc_release(lVar7);
        func_0x00010c1cc040(puVar27);
        _objc_release(puVar28);
      }
      lVar7 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar7;
      func_0x00010bf529e0();
      if (lVar15 != 0) {
        lVar42 = lVar2;
        func_0x00010c0e00e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar7;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar16;
        func_0x00010bf52a60();
        lVar41 = lRam0000000000000000;
        while (lVar15 != 0) {
          lVar39 = 0;
          do {
            if (lRam0000000000000000 != lVar41) {
              _objc_enumerationMutation(lVar16);
            }
            puVar28 = PTR_PTR_1126b6e68;
            func_0x00010bf9ebc0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar28 != (undefined *)0x0) {
              puVar30 = PTR_PTR_1126b6e70;
              _objc_opt_new(PTR_PTR_1126b6e70);
              func_0x00010c0d7820(puVar28);
              func_0x00010c1cc080(puVar30);
              func_0x00010c0d81c0(puVar28);
              func_0x00010c1cc800(puVar30);
              puVar31 = puVar28;
              func_0x00010bfe4420(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1a9200(puVar30);
              _objc_release(puVar31);
              puVar31 = puVar28;
              func_0x00010bfb60c0(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d9820(puVar30);
              _objc_release(puVar31);
              puVar31 = puVar28;
              func_0x00010c0c46a0(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c43a0(puVar30);
              _objc_release(puVar31);
              puVar31 = puVar28;
              func_0x00010bf1f240();
              if (puVar31 != (undefined *)0x0) {
                func_0x00010bf1f240(puVar28);
                func_0x00010c172f80(puVar30);
              }
              puVar31 = puVar28;
              func_0x00010bfcfa20(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1a4cc0(puVar30);
              _objc_release(puVar31);
              lVar40 = lVar7;
              func_0x00010c0e00e0(lVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b4ca0();
              func_0x00010c192e60(puVar30);
              _objc_release(lVar40);
              lVar40 = lVar42;
              func_0x00010c0e00e0(lVar42);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b4ca0();
              func_0x00010c1ebba0(puVar30);
              _objc_release(lVar40);
              func_0x00010befa120(puVar29);
              _objc_release(puVar30);
            }
            _objc_release(puVar28);
            lVar39 = lVar39 + 1;
          } while (lVar15 != lVar39);
          lVar15 = lVar16;
          func_0x00010bf52a60();
        }
        _objc_release(lVar16);
        func_0x00010c1cc0c0(puVar27);
        _objc_release(puVar29);
        _objc_release(lVar42);
      }
      lVar15 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar41 = lVar15;
      func_0x00010bf529e0();
      if (lVar41 != 0) {
        lVar16 = lVar2;
        func_0x00010c0e00e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lVar39 = lVar15;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar41 = lVar39;
        func_0x00010bf52a60();
        lVar42 = lRam0000000000000000;
        while (lVar41 != 0) {
          lVar40 = 0;
          do {
            if (lRam0000000000000000 != lVar42) {
              _objc_enumerationMutation(lVar39);
            }
            puVar28 = PTR_PTR_1126b6e68;
            func_0x00010bf9ebc0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar28 != (undefined *)0x0) {
              puVar30 = PTR_PTR_1126b6e70;
              _objc_opt_new(PTR_PTR_1126b6e70);
              func_0x00010c0d7820(puVar28);
              func_0x00010c1cc080(puVar30);
              func_0x00010c0d81c0(puVar28);
              func_0x00010c1cc800(puVar30);
              puVar31 = puVar28;
              func_0x00010bfe4420(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1a9200(puVar30);
              _objc_release(puVar31);
              puVar31 = puVar28;
              func_0x00010bfb60c0(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d9820(puVar30);
              _objc_release(puVar31);
              puVar31 = puVar28;
              func_0x00010c0c46a0(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c43a0(puVar30);
              _objc_release(puVar31);
              puVar31 = puVar28;
              func_0x00010bf1f240();
              if (puVar31 != (undefined *)0x0) {
                func_0x00010bf1f240(puVar28);
                func_0x00010c172f80(puVar30);
              }
              puVar31 = puVar28;
              func_0x00010bfcfa20(puVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1a4cc0(puVar30);
              _objc_release(puVar31);
              lVar22 = lVar15;
              func_0x00010c0e00e0(lVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b4ca0();
              func_0x00010c192e60(puVar30);
              _objc_release(lVar22);
              lVar22 = lVar16;
              func_0x00010c0e00e0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b4ca0();
              func_0x00010c1ebba0(puVar30);
              _objc_release(lVar22);
              func_0x00010befa120(puVar29);
              _objc_release(puVar30);
            }
            _objc_release(puVar28);
            lVar40 = lVar40 + 1;
          } while (lVar41 != lVar40);
          lVar41 = lVar39;
          func_0x00010bf52a60();
        }
        _objc_release(lVar39);
        func_0x00010c1cc3a0(puVar27);
        _objc_release(puVar29);
        _objc_release(lVar16);
      }
      func_0x00010c1cc440(puVar8);
      lVar41 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar42 = lVar41;
      func_0x00010bf529e0();
      if (lVar42 != 0) {
        puVar28 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        puVar29 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        lVar42 = lVar2;
        func_0x00010c0e00e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64b60(puVar29);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340();
        _objc_release(puVar29);
        _objc_release(lVar42);
        puVar29 = PTR_PTR_1126b6e78;
        _objc_opt_new(PTR_PTR_1126b6e78);
        func_0x00010c1cc8c0();
        func_0x00010c1cc4a0(puVar8);
        _objc_release(puVar29);
        _objc_release(puVar28);
      }
      puVar29 = PTR_PTR_1126b6f58;
      _objc_opt_new();
      lVar42 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c225820(puVar29);
      _objc_release(lVar42);
      lVar42 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c225840(puVar29);
      _objc_release(lVar42);
      lVar42 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1e6e20(puVar29);
      _objc_release(lVar42);
      lVar42 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1e6e40(puVar29);
      _objc_release(lVar42);
      func_0x00010c174cc0(puVar8);
      func_0x00010c1691e0(puVar8);
      lVar42 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
      func_0x00010bf529e0();
      if (lVar42 != 0) {
        puVar30 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar28 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
        func_0x00010bf51e00(uVar9);
        func_0x00010bf64b60(puVar28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340(puVar30);
        _objc_release(puVar28);
        _objc_release(uVar9);
        puVar28 = PTR_PTR_1126b6e80;
        _objc_opt_new(PTR_PTR_1126b6e80);
        func_0x00010c184ce0();
        func_0x00010c19f880(puVar8);
        _objc_release(puVar28);
        _objc_release(puVar30);
      }
      puVar28 = PTR_PTR_1126b6e88;
      _objc_opt_new();
      if (*(long *)(*(long *)(param_2 + 0x20) + 0x20) != -1) {
        puVar30 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar30 != (undefined *)0x0) {
          puVar30 = puVar6;
          func_0x00010c0e00e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4fe0();
          _objc_release(puVar30);
          func_0x00010c210fa0(puVar28);
        }
      }
      if (*(long *)(*(long *)(param_2 + 0x20) + 0x18) != -1) {
        puVar30 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar30 != (undefined *)0x0) {
          puVar30 = puVar6;
          func_0x00010c0e00e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4fe0();
          _objc_release(puVar30);
          func_0x00010c21fba0(puVar28);
        }
      }
      func_0x00010c1b6640(puVar8);
      puVar30 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      dVar44 = 0.0;
      lVar39 = lVar5;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar42 = lVar39;
      func_0x00010bf52a60();
      lVar16 = lRam0000000000000000;
      while (lVar42 != 0) {
        lVar40 = 0;
        do {
          if (lRam0000000000000000 != lVar16) {
            _objc_enumerationMutation(lVar39);
          }
          lVar22 = lVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar32 = PTR_PTR_1126b6f60;
          _objc_opt_new(PTR_PTR_1126b6f60);
          func_0x00010c1d7e80();
          lVar43 = lVar22;
          func_0x00010c0e00e0(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c184d60(puVar32);
          _objc_release(lVar43);
          lVar43 = lVar22;
          func_0x00010c0e00e0(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c1d88c0(puVar32);
          _objc_release(lVar43);
          lVar43 = lVar22;
          func_0x00010c0e00e0(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c1d89c0(puVar32);
          _objc_release(lVar43);
          lVar43 = lVar22;
          func_0x00010c0e00e0(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b66c0(puVar32);
          _objc_release(lVar43);
          lVar43 = lVar22;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar24 = lVar43;
          func_0x00010bf529e0();
          if (lVar24 != 0) {
            puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
            puVar34 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            lVar24 = lVar43;
            func_0x00010bf51e00(lVar43);
            func_0x00010bf64b60(puVar34);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c008340(puVar33);
            _objc_release(puVar34);
            _objc_release(lVar24);
            func_0x00010c184ce0(puVar32);
            _objc_release(puVar33);
          }
          func_0x00010befa120(puVar30);
          lVar24 = lVar22;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar24;
          func_0x00010c0b4ca0();
          _objc_release(lVar24);
          if (0 < lVar25) {
            puVar34 = PTR_PTR_1126b6f68;
            _objc_opt_new(PTR_PTR_1126b6f68);
            func_0x00010c175d20();
            lVar24 = lVar22;
            func_0x00010c0e00e0(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b66c0(puVar34);
            _objc_release(lVar24);
            lVar24 = lVar22;
            func_0x00010c0e00e0(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x00010c176b20(puVar34);
            _objc_release(lVar24);
            func_0x00010befa120(puVar31);
            _objc_release(puVar34);
          }
          _objc_release(lVar43);
          _objc_release(puVar32);
          _objc_release(lVar22);
          lVar40 = lVar40 + 1;
        } while (lVar42 != lVar40);
        lVar42 = lVar39;
        func_0x00010bf52a60();
      }
      _objc_release(lVar39);
      func_0x00010c1d8000(puVar8);
      func_0x00010c1775a0(puVar19);
      func_0x00010c176040(puVar8);
      puVar32 = PTR_PTR_1126b6e90;
      _objc_opt_new();
      puVar34 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c115b20();
      func_0x00010c1e3a40(puVar32);
      _objc_release(puVar34);
      puVar34 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef0f00();
      func_0x00010c16d7c0(puVar32);
      _objc_release(puVar34);
      func_0x00010c184cc0(puVar8);
      puVar34 = PTR_PTR_1126b6f70;
      _objc_opt_new();
      func_0x00010c1a85e0();
      if ((*(char *)(*(long *)(param_2 + 0x20) + 0x88) == '\x01') &&
         (*(long *)(*(long *)(param_2 + 0x20) + 0x98) != 0)) {
        puVar33 = PTR_PTR_1126b6f78;
        _objc_opt_new(PTR_PTR_1126b6f78);
        func_0x00010bfe2f00(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98));
        func_0x00010c1a8620(puVar33);
        func_0x00010bf53b40(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98));
        func_0x00010c184d20(puVar33);
        func_0x00010c0d19e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98));
        func_0x00010c1c9260(puVar33);
        func_0x00010c06f800(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98));
        func_0x00010c1b02e0(puVar33);
        func_0x00010c1a85c0(puVar34);
        func_0x00010c2184e0(puVar34);
        _objc_release(puVar33);
      }
      func_0x00010c1a8600(puVar8);
      puVar33 = PTR_PTR_1126b2930;
      func_0x00010bf5e640(PTR_PTR_1126b2930);
      _objc_retainAutoreleasedReturnValue();
      puVar35 = puVar33;
      func_0x00010bf22880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d69a0(puVar8);
      _objc_release(puVar35);
      _objc_release(puVar33);
      if (*(char *)(param_2 + 0x34) == '\x01') {
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b29e0();
        _objc_release(uVar9);
        if (*(char *)(param_2 + 0x34) == '\x01') {
          uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x58);
          *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x58) = 0;
          _objc_release(uVar9);
          *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90) = 0;
        }
      }
      _objc_release(puVar34);
      _objc_release(puVar32);
      _objc_release(puVar31);
      _objc_release(puVar30);
      _objc_release(puVar28);
      _objc_release(puVar29);
      _objc_release(lVar41);
      _objc_release(lVar15);
      _objc_release(lVar7);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(lVar13);
      _objc_release(puVar18);
      _objc_release(lVar14);
      _objc_release(lVar23);
      _objc_release(puVar17);
      _objc_release(puVar19);
      _objc_release(puVar12);
      _objc_release(puVar37);
      _objc_release(ppuVar21);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(lVar5);
      _objc_release(puVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar36) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdff080();
  func_0x00010bf17640(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78d60(dVar44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1052e1c64; end: 1052e1caf; -[SCBatteryLogger didPullCpuUsage:] */

void FUN_1052e1c64(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bdff080();
  func_0x00010bf17640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78d60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052e1cb0; end: 1052e1cf7; -[SCBatteryLogger didPullCpuTime:atTimestamp:] */

void FUN_1052e1cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf17640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78d40(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052e1cf8; end: 1052e1d37; -[SCBatteryLogger didPullGpuUsage:] */

void FUN_1052e1cf8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf17640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052e1d38; end: 1052e1d93; -[SCBatteryLogger _didPullCpuUsage:] */

void FUN_1052e1d38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1052e1d94;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0xb8),param_3,&puStack_40);
  return;
}



/* Entry: 1052e1d94; end: 1052e1ebf;  */

void FUN_1052e1d94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (*(double *)(param_1 + 0x28) != -1.0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c013ce0();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0e00e0(lVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf170,puVar1);
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c0e00e0(lVar3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar5,param_2,lVar4 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,puVar5,puVar1);
      _objc_release(puVar5);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1052e1ec0; end: 1052e1f7b;  */

void FUN_1052e1ec0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d100();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xb0);
  *(undefined **)(*(long *)(param_2 + 0x20) + 0xb0) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf17640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2180(*(undefined8 *)(param_2 + 0x38),param_1,*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052e1f7c; end: 1052e2027; -[SCBatteryLogger pageViewDidEndWithPageName:pageViewEndTime:] */

void FUN_1052e1f7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  _objc_retain(param_4);
  func_0x00010c2762e0(PTR_PTR_1126ae4f0);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1052e2028;
  puStack_68 = &UNK_110844fe0;
  lStack_60 = param_2;
  uStack_58 = param_4;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 1052e2028; end: 1052e206f;  */

void FUN_1052e2028(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf17640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2100(*(undefined8 *)(param_1 + 0x30),
                      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2070; end: 1052e20af; -[SCBatteryLogger didCameraStopBeingVisibleAtTime:] */

void FUN_1052e2070(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf17460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72b20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052e20b0; end: 1052e210b; -[SCBatteryLogger wasGrantedAuthorization:] */

void FUN_1052e20b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1052e210c;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xb8),param_2,&puStack_40);
  return;
}



/* Entry: 1052e210c; end: 1052e2177;  */

void FUN_1052e210c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6df0;
  _objc_alloc_init(PTR_PTR_1126b6df0);
  func_0x00010c1dab80();
  func_0x00010c160cc0(puVar1,param_2,*(undefined1 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052e2178; end: 1052e21e7; -[SCBatteryLogger didStartUpdatingLocation:startTime:] */

void FUN_1052e2178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf174a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7bf60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e21e8; end: 1052e2257; -[SCBatteryLogger didStopUpdatingLocation:stopTime:] */

void FUN_1052e21e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf174a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c0e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e2258; end: 1052e22cf; -[SCBatteryLogger didRequestStartUpdatingLocationWithAttributedFeature:startTime:userDidGrantAuthorization:] */

void FUN_1052e2258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf174a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79f40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e22d0; end: 1052e2347; -[SCBatteryLogger didRequestStopUpdatingLocationWithAttributedFeature:stopTime:userDidGrantAuthorization:] */

void FUN_1052e22d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf174a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79f80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e2348; end: 1052e23d7; -[SCBatteryLogger didStartMonitoringHighCpuIssuesWithHighCpuCriteria:] */

void FUN_1052e2348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052e23d8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052e23d8; end: 1052e240f;  */

void FUN_1052e23d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x88) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1052e2410; end: 1052e2467; -[SCBatteryLogger didHighCpuIssueHappen] */

void FUN_1052e2410(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052e2468;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xb8),param_2,&puStack_38);
  return;
}



/* Entry: 1052e2468; end: 1052e247b;  */

void FUN_1052e2468(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x90) = *(long *)(*(long *)(param_1 + 0x20) + 0x90) + 1;
  return;
}



/* Entry: 1052e247c; end: 1052e2517; -[SCBatteryLogger backgroundAppSessionNetworkUsageWithStartTime:endTime:startNetworkConnectivity:endNetworkConnectivity:] */

void FUN_1052e247c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf17620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf13ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052e2518; end: 1052e259b; -[SCBatteryLogger backgroundGpsUsageWithStartTime:endTime:] */

void FUN_1052e2518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf174a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf13fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052e259c; end: 1052e25d7; -[SCBatteryLogger isCameraOn] */

undefined8 FUN_1052e259c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf17460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06df00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052e25d8; end: 1052e2613; -[SCBatteryLogger isGPSOn] */

undefined8 FUN_1052e25d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf174a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074280();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052e2614; end: 1052e2657; -[SCBatteryLogger cpuUsage] */

undefined8 FUN_1052e2614(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf17440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf53ba0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052e2658; end: 1052e269b; -[SCBatteryLogger gpuUsage] */

undefined8 FUN_1052e2658(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf174c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd820();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052e269c; end: 1052e26d7; -[SCBatteryLogger thermalState] */

undefined8 FUN_1052e269c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf60440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067fc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052e26d8; end: 1052e26df; -[SCBatteryLogger currentThermalState] */

undefined8 FUN_1052e26d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1052e26e0; end: 1052e270f; -[SCBatteryLogger setCurrentThermalState:] */

void FUN_1052e26e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2710; end: 1052e2717; -[SCBatteryLogger setIsCameraActive:] */

void FUN_1052e2710(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 1052e2718; end: 1052e2747; -[SCBatteryLogger setQueuePerformer:] */

void FUN_1052e2718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2748; end: 1052e274f; -[SCBatteryLogger batteryGPUMonitor] */

undefined8 FUN_1052e2748(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1052e2750; end: 1052e277f; -[SCBatteryLogger setBatteryGPUMonitor:] */

void FUN_1052e2750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2780; end: 1052e27af; -[SCBatteryLogger setBatteryCPUMonitor:] */

void FUN_1052e2780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e27b0; end: 1052e27df; -[SCBatteryLogger setBatteryPageViewLogger:] */

void FUN_1052e27b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e27e0; end: 1052e280f; -[SCBatteryLogger setBatteryCameraMonitor:] */

void FUN_1052e27e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2810; end: 1052e2817; -[SCBatteryLogger batteryGPSMonitor] */

undefined8 FUN_1052e2810(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1052e2818; end: 1052e2847; -[SCBatteryLogger setBatteryGPSMonitor:] */

void FUN_1052e2818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2848; end: 1052e2877; -[SCBatteryLogger setBatteryNetworkMonitor:] */

void FUN_1052e2848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2878; end: 1052e2973; -[SCBatteryLogger .cxx_destruct] */

void FUN_1052e2878(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052e2974; end: 1052e2a8f; -[SCNetworkActivityStatusChangeItem initWithTimestamp:type:networkActivityIdentifier:networkActivityAttributionKey:networkActivityAttributionIdentifier:connectivityStatus:] */

undefined1 *
FUN_1052e2974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e7578;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052e2a90; end: 1052e2a97; -[SCNetworkActivityStatusChangeItem timestamp] */

undefined8 FUN_1052e2a90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052e2a98; end: 1052e2ac7; -[SCNetworkActivityStatusChangeItem setTimestamp:] */

void FUN_1052e2a98(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052e2ac8; end: 1052e2acf; -[SCNetworkActivityStatusChangeItem type] */

undefined8 FUN_1052e2ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052e2ad0; end: 1052e2ad7; -[SCNetworkActivityStatusChangeItem setType:] */

void FUN_1052e2ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1052e2ad8; end: 1052e2adf; -[SCNetworkActivityStatusChangeItem networkActivityIdentifier] */

undefined8 FUN_1052e2ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052e2ae0; end: 1052e2ae7; -[SCNetworkActivityStatusChangeItem setNetworkActivityIdentifier:] */

void FUN_1052e2ae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052e2ae8; end: 1052e2aef; -[SCNetworkActivityStatusChangeItem networkActivityAttributionKey] */

undefined8 FUN_1052e2ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052e2af0; end: 1052e2af7; -[SCNetworkActivityStatusChangeItem setNetworkActivityAttributionKey:] */

void FUN_1052e2af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


