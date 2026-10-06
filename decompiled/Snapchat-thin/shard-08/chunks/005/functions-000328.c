/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061a53cc; end: 1061a54a3; -[SCFeatureTimerModeImpl abortCountingDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a53cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_1127416c4;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    lVar3 = (long)_DAT_1127416d0;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2559a0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + lVar2) = 0;
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2de0();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112741690),PTR_s_next__112614028,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4d08);
    return;
  }
  return;
}



/* Entry: 1061a54a4; end: 1061a54ff; -[SCFeatureTimerModeImpl toggleCountingDownWithCaptureTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a54a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf926c0();
  if ((int)lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + _DAT_1127416c4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beec510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_abortCountingDown_112598ae8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_startCountingDownWithCaptureTrig_1126713f8,param_3);
  return;
}



/* Entry: 1061a5500; end: 1061a5517; -[SCFeatureTimerModeImpl isVideoTimerModeOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061a5500(long param_1)

{
  return *(long *)(param_1 + _DAT_1127416d4) == 2;
}



/* Entry: 1061a5518; end: 1061a557b; -[SCFeatureTimerModeImpl onTimelineVideoTotalDurationChangedWithVideoTimerVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5518(long param_1,undefined8 param_2,int param_3)

{
  param_1 = param_1 + _DAT_1127416a8;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010bfe2c00();
  }
  else {
    func_0x00010c23a840();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a557c; end: 1061a55bb; -[SCFeatureTimerModeImpl turnOffVideoTimerModeIfNeeded] */

void FUN_1061a557c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0833c0();
  if ((int)uVar1 != 0) {
    func_0x00010beec500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea86b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setTimerModeState__112587b50,0);
    return;
  }
  return;
}



/* Entry: 1061a55bc; end: 1061a5603; -[SCFeatureTimerModeImpl dismissVideoTimerTrayIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a55bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127416d8;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf83180(*(long *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061a5604; end: 1061a5643; -[SCFeatureTimerModeImpl onMusicPickerSelectionUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127416dc);
  *(undefined8 *)(param_1 + _DAT_1127416dc) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee25d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateToolbarPinStateForMusicSt_112596318);
  return;
}



/* Entry: 1061a5644; end: 1061a56b7; -[SCFeatureTimerModeImpl _updateToolbarPinStateForMusicState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5644(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be34220();
  param_1 = param_1 + _DAT_1127416a8;
  _objc_loadWeakRetained(param_1);
  if ((int)lVar1 == 0) {
    func_0x00010c281d80(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_1111801e8,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4d38);
  }
  else {
    func_0x00010c0fc100(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_1111801d0,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4d38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a56b8; end: 1061a5867; -[SCFeatureTimerModeImpl setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a56b8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127416a0;
  if ((uint)*(byte *)(param_1 + lVar6) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + lVar6) = (char)param_3;
  puVar1 = PTR_PTR_1126c8598;
  if ((param_3 & 1) == 0) {
    func_0x00010bfeb8a0(PTR_PTR_1126c8598);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef03e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_1 + _DAT_112741698;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c8590;
  func_0x00010c270760(PTR_PTR_1126c8590,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284100(lVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
    lVar6 = (long)_DAT_1127416d0;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfe6360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2559a0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfe6360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar5);
    func_0x00010be03a00(param_1);
    *(undefined8 *)(param_1 + _DAT_1127416c0) = 0;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112741674),param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274168c);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061a5868; end: 1061a58d7; -[SCFeatureTimerModeImpl videoRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1061a5868(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112741684);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249d20();
  _objc_release(uVar1);
  dVar2 = param_1 * *(double *)(param_2 + _DAT_1127416c0);
  if (param_1 <= 0.0) {
    dVar2 = *(double *)(param_2 + _DAT_1127416c0);
  }
  return dVar2;
}



/* Entry: 1061a58d8; end: 1061a5947;  */

void FUN_1061a58d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c87a8;
    _objc_alloc(PTR_PTR_1126c87a8);
    func_0x00010c0027e0();
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c19f0e0(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061a5948; end: 1061a5997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5948(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_1127416d0;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a5998; end: 1061a5d1b; -[SCFeatureTimerModeImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5998(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar5 = (long)_DAT_1127416ac;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1fb140(uVar3);
    func_0x00010b0aecb4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010b0aeccc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7400(param_1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c160fc0(uVar3);
    func_0x00010b0aecb4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    *(undefined8 *)(param_1 + _DAT_1127416d4) = 0;
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127416e0);
    *(undefined **)(param_1 + _DAT_1127416e0) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf735a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061a5d1c;
    puStack_88 = &UNK_11090ba70;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf7ca60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1061a5df8;
    puStack_b0 = &UNK_11090ba70;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf2c660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1061a5d1c; end: 1061a5f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5d1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = (long)_DAT_1127416ac;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c104260();
    if (lVar1 == 2) {
      *(undefined8 *)(param_1 + _DAT_1127416bc) = 4;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c07d660(uVar2);
    func_0x00010c195460(param_1,param_2,uVar2);
    lVar1 = (long)_DAT_11274166c;
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b760();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c07d660();
    if ((uVar3 & 1) == 0) {
      func_0x00010bea86a0(param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a5f14; end: 1061a606b; -[SCFeatureTimerModeImpl _didScheduleVideoRecord] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5f14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c0833c0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741670);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274167c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29af60(param_1);
    _CMTimeMakeWithSeconds(auStack_50,1000);
    _objc_copyWeak(auStack_58,auStack_38);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfa0(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1061a606c; end: 1061a613f;  */

void FUN_1061a606c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c256760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a6140; end: 1061a6143;  */

void FUN_1061a6140(void)

{
  return;
}



/* Entry: 1061a6144; end: 1061a6173;  */

void FUN_1061a6144(long param_1,undefined8 param_2)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bea88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setToolbarItemVisible__112587bd8,0);
  return;
}



/* Entry: 1061a6174; end: 1061a617f;  */

void FUN_1061a6174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setToolbarItemVisible__112587bd8,1);
  return;
}



/* Entry: 1061a6180; end: 1061a6377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a6180(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    lVar1 = param_1 + _DAT_112741698;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4fce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1061a637c;
    puStack_90 = &UNK_110847658;
    puStack_88 = &uStack_80;
    func_0x00010c0be6c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x2020000000;
    uStack_b0 = 0;
    func_0x00010c0be6c0(param_2);
    if (((*(byte *)(param_1 + _DAT_1127416a0) & 1) != 0) &&
       ((((*(byte *)(puStack_78 + 3) & 1) != 0 || (*(char *)(puStack_c0 + 3) == '\x01')) &&
        (*(long *)(param_1 + _DAT_1127416d4) == 1)))) {
      func_0x00010bea86c0(param_1);
    }
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a6378; end: 1061a63af;  */

void FUN_1061a6378(void)

{
  return;
}



/* Entry: 1061a63b0; end: 1061a6427; -[SCFeatureTimerModeImpl _setToolbarItemVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a63b0(long param_1,undefined8 param_2,int param_3)

{
  if (*(long *)(param_1 + _DAT_1127416ac) != 0) {
    param_1 = param_1 + _DAT_1127416a8;
    _objc_loadWeakRetained(param_1);
    if (param_3 == 0) {
      func_0x00010bfe2c00();
    }
    else {
      func_0x00010c23a840();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061a6428; end: 1061a64a7; -[SCFeatureTimerModeImpl _timerViewDidSetTimerWithRecordingDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a6428(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c87b0;
  func_0x00010bf2b920(PTR_PTR_1126c87b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b2c0(PTR_PTR_1126c87b0,param_3,puVar1);
  *(undefined8 *)(param_2 + _DAT_1127416c0) = param_1;
  func_0x00010be03a00(param_2);
  if (*(char *)(param_2 + _DAT_112741688) == '\x01') {
    func_0x00010c195460(param_2,param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061a64a8; end: 1061a64af; -[SCFeatureTimerModeImpl _timerViewDidCancel] */

void FUN_1061a64a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea86b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setTimerModeState__112587b50,0);
  return;
}



/* Entry: 1061a64b0; end: 1061a651b; -[SCFeatureTimerModeImpl _timerViewDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a64b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127416e4);
  *(undefined8 *)(param_1 + _DAT_1127416e4) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + _DAT_1127416e8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa2e00();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741694),PTR_s_next__112614028,
             PTR____kCFBooleanFalse_11034ab60);
  return;
}



/* Entry: 1061a651c; end: 1061a65bf; -[SCFeatureTimerModeImpl enhancedVideoTimerDurationSettingVC:didTapSetTimerButtonWithRecordingDuration:countdownOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a651c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127416cc);
  *(undefined8 *)(param_2 + _DAT_1127416cc) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c87a0;
  func_0x00010bf9dba0(PTR_PTR_1126c87a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(param_5);
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010becc2e0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c24e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_startCountingDownWithCaptureTrig_1126713f8,4)
  ;
  return;
}



/* Entry: 1061a65c0; end: 1061a65c3; -[SCFeatureTimerModeImpl enhancedVideoTimerDurationSettingVCDidCancel:] */

void FUN_1061a65c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__timerViewDidCancel_112590a50);
  return;
}



/* Entry: 1061a65c4; end: 1061a65c7; -[SCFeatureTimerModeImpl enhancedVideoTimerDurationSettingVCDidDismiss:] */

void FUN_1061a65c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__timerViewDidDismiss_112590a58);
  return;
}



/* Entry: 1061a65c8; end: 1061a685b; -[SCFeatureTimerModeImpl _transitionToNextState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a65c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  if ((*(long *)(param_1 + _DAT_1127416d4) != 1) && (*(long *)(param_1 + _DAT_1127416d4) == 0)) {
    lVar1 = param_1;
    func_0x00010be34220();
    *(char *)(param_1 + _DAT_1127416ec) = (char)lVar1;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    lVar4 = (long)_DAT_112741698;
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4fce0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x1061a6860;
    puStack_a0 = &UNK_110847658;
    puStack_c0 = &uStack_90;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1061a6874;
    puStack_c8 = &UNK_110847658;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = puStack_c0;
    func_0x00010c0be6c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfd3480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be6c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    __Block_object_dispose(&uStack_100,8);
    __Block_object_dispose(&uStack_90,8);
  }
  func_0x00010bea86a0(param_1);
  return;
}



/* Entry: 1061a685c; end: 1061a68ab;  */

void FUN_1061a685c(void)

{
  return;
}



/* Entry: 1061a68ac; end: 1061a6a43; -[SCFeatureTimerModeImpl _presentTrayIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a68ac(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_1127416d8;
  if (*(long *)(param_2 + lVar6) != 0) {
    return;
  }
  lVar1 = param_2;
  if (*(char *)(param_2 + _DAT_112741688) == '\x01') {
    func_0x00010bded0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdecda0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar1 == 0) {
    func_0x00010bea86c0(param_2,param_3,0,0);
  }
  else {
    puVar2 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    *(undefined **)(param_2 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c167420(*(undefined8 *)(param_2 + lVar6),param_3,10);
    lVar7 = (long)_DAT_1127416e8;
    lVar3 = param_2 + lVar7;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0f3d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar7 = param_2 + lVar7;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bfa2e80();
    _objc_release(lVar7);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + _DAT_112741694),param_3,
                        PTR____kCFBooleanTrue_11034ab68);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetHeight();
    _objc_release(puVar2);
    func_0x00010c10c5a0(350.0 / param_1,*(undefined8 *)(param_2 + lVar6),param_3,lVar4,0);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061a6a44; end: 1061a6e9b; -[SCFeatureTimerModeImpl _createDefaultV2Tray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a6a44(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  func_0x00010bdf0400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd85e0(param_2);
  lVar12 = (long)_DAT_1127416e8;
  lVar10 = param_2 + lVar12;
  dVar13 = param_1;
  _objc_loadWeakRetained(lVar10);
  func_0x00010bfa2e60();
  _objc_release(lVar10);
  func_0x00010be77f80(dVar13,param_2);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  lVar10 = param_2 + _DAT_112741698;
  _objc_loadWeakRetained(lVar10);
  lVar4 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf4fce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1061a6ea0;
  puStack_b8 = &UNK_110847658;
  puStack_b0 = &uStack_a8;
  func_0x00010c0be6c0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar10);
  lVar10 = *(long *)(param_2 + _DAT_1127416e4);
  bVar2 = lVar10 != 0;
  dVar14 = 0.0;
  dVar18 = 0.0;
  if (*(char *)(puStack_a0 + 3) == '\0') {
    dVar18 = dVar13;
  }
  dVar15 = dVar14;
  if (*(char *)(puStack_a0 + 3) == '\x01') {
    lVar12 = param_2 + lVar12;
    _objc_loadWeakRetained(lVar12);
    func_0x00010bfa2e40();
    dVar15 = dVar14;
    _objc_release(lVar12);
    func_0x00010bebc780(param_2);
    dVar16 = param_1 - dVar13;
    dVar17 = dVar16;
    if (dVar16 <= 0.0) {
      dVar17 = 60.0;
    }
    if (lVar10 == 0) {
      dVar17 = param_1;
    }
    bVar2 = 0.0 < dVar16 && lVar10 != 0;
    param_1 = dVar17;
    if (dVar14 - dVar13 <= dVar17) {
      param_1 = dVar14 - dVar13;
    }
    if (param_1 <= dVar15) {
      puVar11 = (undefined *)0x0;
      goto LAB_1061a6e00;
    }
  }
  func_0x00010bdf97e0(param_2);
  dVar15 = dVar18 + dVar15;
  dVar13 = dVar15;
  if (param_1 <= dVar15) {
    dVar13 = param_1;
  }
  func_0x00010bebc780(param_2);
  dVar14 = dVar18 + dVar15;
  if (dVar13 <= dVar18 + dVar15) {
    dVar14 = dVar13;
  }
  puVar11 = PTR_PTR_1126c87a0;
  func_0x00010bf69180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c87a0;
  puStack_88 = puVar11;
  func_0x00010bf9dba0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar11);
  puVar6 = PTR_PTR_1126c87b8;
  _objc_alloc(PTR_PTR_1126c87b8);
  func_0x00010c02c000(dVar14,param_1,dVar13,0);
  puVar11 = PTR_PTR_1126c87c0;
  _objc_alloc(PTR_PTR_1126c87c0);
  func_0x00010c000de0();
  lVar12 = (long)_DAT_1127416dc;
  lVar10 = *(long *)(param_2 + lVar12);
  if (lVar10 != 0) {
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar3 != 0) {
      bVar1 = (bool)(lVar4 != 0 & bVar2);
    }
    _objc_release();
    _objc_release(lVar10);
    if (bVar1) {
      func_0x00010bf8b160(&uStack_e8,lVar3);
      _CMTimeGetSeconds(&uStack_e8);
      lVar10 = *(long *)(param_2 + lVar12);
      dVar13 = dVar14;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 == 0) {
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
      }
      else {
        func_0x00010bf0ffa0(&uStack_e8,lVar10);
      }
      _CMTimeGetSeconds(&uStack_e8);
      _objc_release(lVar10);
      uVar8 = *(undefined8 *)(param_2 + lVar12);
      func_0x00010c15a4a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16bb40(dVar14,dVar13,puVar11);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
  }
  func_0x00010c18b5e0(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar7);
LAB_1061a6e00:
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_a8,8);
  __Unwind_Resume(lVar3);
  return;
}



/* Entry: 1061a6e9c; end: 1061a6eb7;  */

void FUN_1061a6e9c(void)

{
  return;
}



/* Entry: 1061a6eb8; end: 1061a7203; -[SCFeatureTimerModeImpl _createDirectorModeV2Tray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a6eb8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_1127416e8;
  lVar1 = param_2 + lVar7;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa2e40();
  dVar12 = param_1;
  _objc_release(lVar1);
  lVar7 = param_2 + lVar7;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bfa2e60();
  _objc_release(lVar7);
  dVar13 = dVar12;
  func_0x00010be77f80(param_2);
  lVar1 = param_2;
  func_0x00010bdf0400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd85e0(param_2,param_3,lVar1);
  lVar9 = (long)_DAT_1127416e4;
  lVar7 = *(long *)(param_2 + lVar9);
  dVar16 = dVar13 - dVar12;
  dVar14 = dVar16;
  if (dVar16 <= 0.0) {
    dVar14 = 60.0;
  }
  if (lVar7 == 0) {
    dVar14 = dVar13;
  }
  dVar13 = dVar14;
  if (param_1 - dVar12 <= dVar14) {
    dVar13 = param_1 - dVar12;
  }
  func_0x00010bebc780(param_2);
  if (dVar13 <= dVar14) {
    puVar8 = (undefined *)0x0;
  }
  else {
    dVar15 = dVar14;
    func_0x00010bdf97e0(param_2);
    if (dVar13 <= dVar15) {
      dVar15 = dVar13;
    }
    if (dVar15 <= dVar14) {
      dVar14 = dVar15;
    }
    puVar8 = PTR_PTR_1126c87a0;
    func_0x00010bf69180();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c87a0;
    puStack_98 = puVar8;
    func_0x00010bf9dba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_98,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar2 = PTR_PTR_1126c87b8;
    _objc_alloc(PTR_PTR_1126c87b8);
    func_0x00010c02c000(dVar14,dVar13,dVar15,0);
    if (dVar16 <= 0.0 || lVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_2 + lVar9);
    }
    _objc_retain(uVar10);
    puVar8 = PTR_PTR_1126c87c0;
    _objc_alloc(PTR_PTR_1126c87c0);
    func_0x00010c000de0();
    lVar11 = (long)_DAT_1127416dc;
    lVar9 = *(long *)(param_2 + lVar11);
    if (lVar9 != 0) {
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar9;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar9);
      if ((lVar1 != 0 && lVar4 != 0) && (0.0 < dVar16 && lVar7 != 0)) {
        func_0x00010bf8b160(&uStack_b0,lVar1);
        _CMTimeGetSeconds(&uStack_b0);
        lVar7 = *(long *)(param_2 + lVar11);
        dVar13 = dVar14;
        func_0x00010c15a4a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x00010bf0ffa0(&uStack_b0,lVar7);
        }
        _CMTimeGetSeconds(&uStack_b0);
        _objc_release(lVar7);
        uVar5 = *(undefined8 *)(param_2 + lVar11);
        func_0x00010c15a4a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf0ef80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16bb40(dVar14,dVar12 + dVar13,puVar8,param_3,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
    }
    func_0x00010c18b5e0(puVar8,param_3,param_2);
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    lVar7 = (long)_DAT_1127416d8;
    func_0x00010bf83180(*(undefined8 *)(lVar1 + lVar7),param_3,1);
    uVar10 = *(undefined8 *)(lVar1 + lVar7);
    *(undefined8 *)(lVar1 + lVar7) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1061a7204; end: 1061a723b; -[SCFeatureTimerModeImpl _dismissVideoTimerTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127416d8;
  func_0x00010bf83180(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061a723c; end: 1061a7243; -[SCFeatureTimerModeImpl _setTimerModeState:] */

void FUN_1061a723c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea86d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setTimerModeState_shouldPresent_112587b58,param_3,1);
  return;
}



/* Entry: 1061a7244; end: 1061a7423; -[SCFeatureTimerModeImpl _setTimerModeState:shouldPresentTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7244(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_1127416d4) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_1127416d4) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127416cc);
  *(undefined8 *)(param_1 + _DAT_1127416cc) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c87c8;
  _objc_alloc(PTR_PTR_1126c87c8);
  lVar4 = (long)_DAT_1127416ac;
  func_0x00010c0540a0();
  func_0x00010c167e40();
  if (param_3 == 2) {
    func_0x00010c1fb140(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e442f8);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1610e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e442f8);
    func_0x0001061a7e3c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7400(param_1,param_2,uVar1);
    _objc_release(uVar1);
    lVar3 = param_1 + _DAT_1127416a8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c216f40();
    _objc_release(lVar3);
    if (param_4 != 0) {
      func_0x00010be7f100(param_1);
    }
    goto LAB_1061a73d4;
  }
  if (param_3 == 1) {
    func_0x00010c1fb140(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e442d8);
    func_0x00010c1610e0(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e442d8);
    func_0x00010beaec80(param_1,param_2,puVar2);
    lVar3 = param_1 + _DAT_1127416a8;
    _objc_loadWeakRetained(lVar3);
  }
  else {
    if (param_3 != 0) goto LAB_1061a73d4;
    if (*(long *)(param_1 + lVar4) == 0) {
      func_0x00010bf803c0(param_1);
      goto LAB_1061a73d4;
    }
    lVar3 = param_1 + _DAT_1127416a8;
    _objc_loadWeakRetained(lVar3);
  }
  func_0x00010c216f40();
  _objc_release(lVar3);
LAB_1061a73d4:
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf73760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112741674),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061a7424; end: 1061a7647; -[SCFeatureTimerModeImpl _setupPhotoTimerSelectedTextWithButtonEventResult:] */

/* WARNING: Possible PIC construction at 0x0001061a75a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061a75a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7424(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741678);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c22fec0();
  _objc_release(uVar1);
  if ((int)uVar7 == 0) {
    func_0x00010b0aeccc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7400(param_1);
    _objc_release(uVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
    ___stack_chk_fail();
    lVar9 = (long)_DAT_1127416ac;
    func_0x00010c1fb640(*(undefined8 *)(param_3 + lVar9));
    uVar7 = *(undefined8 *)(param_3 + lVar9);
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    puVar2 = puVar8;
    FUN_1061a7e0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar8);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar3 = puVar2;
    func_0x0001061a7e24();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf069e0(puVar8);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127416ac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_setAttributedSelectedTitle__1126387d0,puVar8);
  return;
}



/* Entry: 1061a7648; end: 1061a767b; -[SCFeatureTimerModeImpl _setSelectedTitleForToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7648(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127416ac;
  func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c16b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setAttributedSelectedTitle__1126387d0,0);
  return;
}



/* Entry: 1061a767c; end: 1061a77cf; -[SCFeatureTimerModeImpl _prepareAudioPlayerWithPlaybackStartTimeIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a767c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_2 + _DAT_1127416dc);
  _objc_retain(lVar3);
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puStack_b0 = (undefined *)0x0;
      uStack_a8 = 0;
      pcStack_a0 = (code *)0x0;
    }
    else {
      func_0x00010bf0ffa0(&puStack_b0,lVar1);
    }
    _CMTimeMakeWithSeconds(auStack_70,param_1,600);
    _CMTimeAdd(&uStack_58,&puStack_b0,auStack_70);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c47f0;
    _objc_alloc();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1061a7d4c;
    puStack_98 = &UNK_1108e7d40;
    _objc_retain(lVar3);
    uStack_80 = uStack_50;
    uStack_88 = uStack_58;
    uStack_78 = uStack_48;
    lStack_90 = lVar3;
    func_0x00010bff54a0();
    _objc_release(lStack_90);
  }
  _objc_release(lVar3);
  lVar3 = (long)_DAT_1127416e4;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar4;
  _objc_release(uVar2);
  func_0x00010c108f40(*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 1061a77d0; end: 1061a77ff; -[SCFeatureTimerModeImpl modeEnabledStateChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a77d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274168c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061a7800; end: 1061a784b; -[SCFeatureTimerModeImpl disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7800(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_1127416d4) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127416cc);
  *(undefined8 *)(param_1 + _DAT_1127416cc) = 0;
  _objc_release(uVar1);
  func_0x00010c195460(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be03a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissVideoTimerTray_11255e820);
  return;
}



/* Entry: 1061a784c; end: 1061a7857; -[SCFeatureTimerModeImpl incompatibleModes] */

undefined ** FUN_1061a784c(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111180200;
}



/* Entry: 1061a7858; end: 1061a787b; -[SCFeatureTimerModeImpl modeType] */

undefined4 FUN_1061a7858(int param_1)

{
  undefined4 uVar1;
  
  func_0x00010c0833c0();
  uVar1 = 0x12;
  if (param_1 == 0) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1061a787c; end: 1061a78b7; -[SCFeatureTimerModeImpl onTap:] */

void FUN_1061a787c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)uVar1 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010becf1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToNextState_112591620);
    return;
  }
  return;
}



/* Entry: 1061a78b8; end: 1061a78bb; -[SCFeatureTimerModeImpl secondaryOnTap:] */

void FUN_1061a78b8(void)

{
  return;
}



/* Entry: 1061a78bc; end: 1061a78d3; -[SCFeatureTimerModeImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061a78bc(long param_1)

{
  return *(long *)(param_1 + _DAT_1127416d4) != 0;
}



/* Entry: 1061a78d4; end: 1061a78db; -[SCFeatureTimerModeImpl isHidden] */

undefined8 FUN_1061a78d4(void)

{
  return 0;
}



/* Entry: 1061a78dc; end: 1061a78e3; -[SCFeatureTimerModeImpl secondaryButtonState] */

undefined8 FUN_1061a78dc(void)

{
  return 0;
}



/* Entry: 1061a78e4; end: 1061a78e7; -[SCFeatureTimerModeImpl toolbarButtonPositionDidChange:] */

void FUN_1061a78e4(void)

{
  return;
}



/* Entry: 1061a78e8; end: 1061a78f3; -[SCFeatureTimerModeImpl _defaultTimerDuration] */

undefined8 FUN_1061a78e8(void)

{
  return 0x404e000000000000;
}



/* Entry: 1061a78f4; end: 1061a78fb; -[SCFeatureTimerModeImpl _sliderMinTimerDuration] */

undefined8 FUN_1061a78f4(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 1061a78fc; end: 1061a79cb; -[SCFeatureTimerModeImpl _createMusicAssetIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a78fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127416dc;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 != 0) {
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c15a4a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0082a0(puVar5,param_2,uVar4,*(undefined8 *)PTR__kUTTypeWaveformAudio_11034b218);
      _objc_release(uVar4);
      _objc_release(uVar3);
      goto LAB_1061a79b8;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1061a79b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061a79cc; end: 1061a7ad3; -[SCFeatureTimerModeImpl _calculateEnhancedTimerMaxDurationWithAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1061a79cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bf8b160(&dStack_48,param_3);
    lVar1 = *(long *)(param_1 + _DAT_1127416dc);
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_60,lVar1);
    }
    _objc_release(lVar1);
    uStack_88 = uStack_40;
    dStack_90 = dStack_48;
    uStack_80 = uStack_38;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_a0 = uStack_50;
    _CMTimeSubtract(&dStack_78,&dStack_90,&uStack_b0);
    if ((uStack_6c & 0x11) == 1) {
      uStack_88 = CONCAT44(uStack_6c,uStack_70);
      dStack_90 = dStack_78;
      uStack_80 = uStack_68;
      _CMTimeGetSeconds(&dStack_90);
      dVar2 = 0.0;
      if (0.0 <= dStack_78) {
        dVar2 = dStack_78;
      }
      goto LAB_1061a7ab4;
    }
  }
  dVar2 = 60.0;
LAB_1061a7ab4:
  _objc_release(param_3);
  return dVar2;
}



/* Entry: 1061a7ad4; end: 1061a7b6b; -[SCFeatureTimerModeImpl _hasMusicPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061a7ad4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127416dc;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = *(long *)(param_1 + lVar4);
      func_0x00010c15a4a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      _objc_release();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 1061a7b6c; end: 1061a7b7b; -[SCFeatureTimerModeImpl enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a7b6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127416a0);
}



/* Entry: 1061a7b7c; end: 1061a7b9b; -[SCFeatureTimerModeImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7b7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127416e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a7b9c; end: 1061a7bab; -[SCFeatureTimerModeImpl isCountingDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a7b9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127416c4);
}



/* Entry: 1061a7bac; end: 1061a7bbb; -[SCFeatureTimerModeImpl activeCaptureTrigger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a7bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127416c8);
}



/* Entry: 1061a7bbc; end: 1061a7bcb; -[SCFeatureTimerModeImpl videoTimerTrayUIObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a7bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741694);
}



/* Entry: 1061a7bcc; end: 1061a7d4b; -[SCFeatureTimerModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7bcc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127416e8);
  _objc_storeStrong(param_1 + _DAT_1127416cc,0);
  _objc_storeStrong(param_1 + _DAT_1127416d0,0);
  _objc_storeStrong(param_1 + _DAT_112741694,0);
  _objc_storeStrong(param_1 + _DAT_112741690,0);
  _objc_storeStrong(param_1 + _DAT_11274168c,0);
  _objc_storeStrong(param_1 + _DAT_112741684,0);
  _objc_storeStrong(param_1 + _DAT_112741680,0);
  _objc_storeStrong(param_1 + _DAT_11274167c,0);
  _objc_storeStrong(param_1 + _DAT_1127416b0,0);
  _objc_storeStrong(param_1 + _DAT_112741674,0);
  _objc_storeStrong(param_1 + _DAT_1127416e4,0);
  _objc_storeStrong(param_1 + _DAT_1127416dc,0);
  _objc_storeStrong(param_1 + _DAT_1127416d8,0);
  _objc_storeStrong(param_1 + _DAT_11274169c,0);
  _objc_destroyWeak(param_1 + _DAT_112741698);
  _objc_storeStrong(param_1 + _DAT_112741678,0);
  _objc_destroyWeak(param_1 + _DAT_1127416a8);
  _objc_storeStrong(param_1 + _DAT_112741670,0);
  _objc_storeStrong(param_1 + _DAT_11274166c,0);
  _objc_storeStrong(param_1 + _DAT_1127416ac,0);
  _objc_storeStrong(param_1 + _DAT_1127416e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127416a4);
  return;
}



/* Entry: 1061a7d4c; end: 1061a7e0b;  */

void FUN_1061a7d4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15a4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0082a0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  puVar4 = puVar1;
  func_0x000107fb6770(puVar1,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061a7e0c; end: 1061a7e7b;  */

void FUN_1061a7e0c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e44338;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e44338,
                      &PTR____CFConstantStringClassReference_110e44318,0);
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



/* Entry: 1061a7e7c; end: 1061a7ecb; -[SCFeatureCameraModeBase scanStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7e7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274170c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14f520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061a7ecc; end: 1061a7f13; -[SCFeatureCameraModeBase lensMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7ecc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112741700;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061a7f14; end: 1061a7f6b; -[SCFeatureCameraModeBase didDisableLensMode] */

void FUN_1061a7f14(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1061a7f6c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1061a7f6c; end: 1061a7f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7f6c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127416f4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bea2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setCameraModeUIEnabled__1125863b0,0);
  return;
}



/* Entry: 1061a7f88; end: 1061a7fdf; -[SCFeatureCameraModeBase didEnableLensMode] */

void FUN_1061a7f88(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1061a7fe0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1061a7fe0; end: 1061a802f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a7fe0(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127416f4) = 1;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06dec0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__setCameraModeUIEnabled__1125863b0,1);
    return;
  }
  return;
}



/* Entry: 1061a8030; end: 1061a8087; -[SCFeatureCameraModeBase didFailToEnableLensModeWithError:] */

void FUN_1061a8030(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1061a8088;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1061a8088; end: 1061a80a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8088(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127416f4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bea2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setCameraModeUIEnabled__1125863b0,0);
  return;
}



/* Entry: 1061a80a4; end: 1061a80eb; -[SCFeatureCameraModeBase cameraTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a80a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112741730;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061a80ec; end: 1061a80f3; -[SCFeatureCameraModeBase toolbarItem] */

undefined8 FUN_1061a80ec(void)

{
  return 0;
}



/* Entry: 1061a80f4; end: 1061a8183; -[SCFeatureCameraModeBase hideCameraMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a80f4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + _DAT_11274173c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11274173c) = (char)param_3;
  lVar1 = param_1;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = param_1 + _DAT_112741740;
    _objc_loadWeakRetained(param_1);
    if (param_3 == 0) {
      func_0x00010c23a840();
    }
    else {
      func_0x00010bfe2c00();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061a8184; end: 1061a818b; -[SCFeatureCameraModeBase cameraModeType] */

undefined8 FUN_1061a8184(void)

{
  return 0xffffffff;
}



/* Entry: 1061a818c; end: 1061a825b; -[SCFeatureCameraModeBase activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a818c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_112741744) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112741744) = 1;
    lVar1 = param_1;
    func_0x00010c0954a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
    func_0x00010be788e0(param_1);
    func_0x00010be66be0(param_1);
    func_0x00010be65d20(param_1);
    lVar1 = param_1;
    func_0x00010bf29e80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf021c0();
    if ((int)lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    lVar2 = *(long *)(param_1 + _DAT_112741714);
    _objc_release(lVar1);
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3ba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_clearNewBadgeAndOnboardingDialog_1125ac828);
      return;
    }
  }
  return;
}



/* Entry: 1061a825c; end: 1061a838b; -[SCFeatureCameraModeBase _prepareLensModeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a825c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(char *)(param_1 + _DAT_112741744) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_112741748) & 1) == 0)) {
    func_0x00010c0e2c60(param_1);
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0954a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c109a40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_40;
    _objc_copyWeak(puVar2,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1061a838c; end: 1061a8453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a838c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + _DAT_112741748) & 1) == 0)) {
    *(bool *)(param_1 + _DAT_112741748) = param_3 == 0;
    if (param_3 == 0) {
      func_0x00010c0e2c80(param_1);
      if (*(char *)(param_1 + _DAT_11274174c) == '\x01') {
        func_0x00010bf11680(param_1);
      }
      func_0x00010bedc1e0(param_1);
      lVar1 = param_1;
      func_0x00010c273a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b2440();
      _objc_release(lVar1);
    }
    else {
      func_0x00010c0e2c40(param_1,param_2,param_3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061a8454; end: 1061a8463; -[SCFeatureCameraModeBase isCameraModeRestorationPending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a8454(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741750);
}



/* Entry: 1061a8464; end: 1061a847f; -[SCFeatureCameraModeBase dismissCameraModePendingRestoration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8464(long param_1)

{
  if (*(char *)(param_1 + _DAT_112741750) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112741750) = 0;
  }
  return;
}



/* Entry: 1061a8480; end: 1061a8483; -[SCFeatureCameraModeBase enable] */

void FUN_1061a8480(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enable_11255fc00);
  return;
}



/* Entry: 1061a8484; end: 1061a8507; -[SCFeatureCameraModeBase _enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8484(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c06dec0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + (long)_DAT_112741750) = 0;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + (long)_DAT_112741720),param_2,
                      PTR____kCFBooleanTrue_11034ab68);
  func_0x00010bea2820(param_1,param_2,1);
  func_0x00010c0954a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefda0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a8508; end: 1061a858b; -[SCFeatureCameraModeBase disable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8508(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c06dec0();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112741754) = 0;
    func_0x00010bea2820(param_1,param_2,0);
    func_0x00010bf834a0(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112741724),param_2,
                        PTR____kCFBooleanTrue_11034ab68);
    func_0x00010c0954a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061a858c; end: 1061a8683; -[SCFeatureCameraModeBase autoEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a858c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_112741748) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274174c) = 1;
  }
  else {
    lVar2 = param_1;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c231600();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200900();
    _objc_release(lVar2);
    lVar2 = (long)_DAT_112741758;
    *(undefined1 *)(param_1 + lVar2) = 1;
    if (*(char *)(param_1 + _DAT_1127416f4) == '\x01') {
      func_0x00010bea2820(param_1,param_2,1);
    }
    else {
      func_0x00010be08980(param_1);
    }
    lVar1 = param_1;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200900();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar2) = 0;
  }
  return;
}



/* Entry: 1061a8684; end: 1061a86d7; -[SCFeatureCameraModeBase autoDisable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8684(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + _DAT_112741748) == '\x01') &&
     (lVar1 = param_1, func_0x00010c06dec0(), (int)lVar1 != 0)) {
    func_0x00010be99660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCameraModeUIEnabled__1125863b0,0);
    return;
  }
  return;
}



/* Entry: 1061a86d8; end: 1061a878f; -[SCFeatureCameraModeBase onCameraModeLensInCarouselActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a86d8(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112741754) = 1;
  if ((*(byte *)(param_1 + _DAT_112741748) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274174c) = 1;
    return;
  }
  lVar1 = param_1;
  func_0x00010c0753e0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enable_1125c1570);
    return;
  }
  lVar1 = param_1;
  func_0x00010bf2b3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216f60(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061a8790; end: 1061a8793; -[SCFeatureCameraModeBase onCameraModeReady] */

void FUN_1061a8790(void)

{
  return;
}



/* Entry: 1061a8794; end: 1061a8797; -[SCFeatureCameraModeBase onCameraModePreparationStarted] */

void FUN_1061a8794(void)

{
  return;
}



/* Entry: 1061a8798; end: 1061a879b; -[SCFeatureCameraModeBase onCameraModePreparationFailed:] */

void FUN_1061a8798(void)

{
  return;
}



/* Entry: 1061a879c; end: 1061a879f; -[SCFeatureCameraModeBase onMultiCamSessionToggled:] */

void FUN_1061a879c(void)

{
  return;
}



/* Entry: 1061a87a0; end: 1061a87a3; -[SCFeatureCameraModeBase onCaptureDevicePositionDidChange] */

void FUN_1061a87a0(void)

{
  return;
}



/* Entry: 1061a87a4; end: 1061a881b; -[SCFeatureCameraModeBase onScanSessionBegin] */

void FUN_1061a87a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b4280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061a881c; end: 1061a881f; -[SCFeatureCameraModeBase onScanSessionEnd] */

void FUN_1061a881c(void)

{
  return;
}



/* Entry: 1061a8820; end: 1061a8823; -[SCFeatureCameraModeBase onViewWillDisappear] */

void FUN_1061a8820(void)

{
  return;
}



/* Entry: 1061a8824; end: 1061a8827; -[SCFeatureCameraModeBase onViewDidDisappear] */

void FUN_1061a8824(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNewBadgeStatus_112594a20);
  return;
}



/* Entry: 1061a8828; end: 1061a882b; -[SCFeatureCameraModeBase onMainCameraViewDidFullyDisappear] */

void FUN_1061a8828(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNewBadgeStatus_112594a20);
  return;
}



/* Entry: 1061a882c; end: 1061a882f; -[SCFeatureCameraModeBase onAppDidEnterBackground] */

void FUN_1061a882c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_autoDisable_1125a1f30);
  return;
}



/* Entry: 1061a8830; end: 1061a8833; -[SCFeatureCameraModeBase onAppWillEnterForeground] */

void FUN_1061a8830(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be788f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareLensModeIfNecessary_11257bbd8);
  return;
}



/* Entry: 1061a8834; end: 1061a88bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8834(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + _DAT_112741748) & 1) == 0)) {
    func_0x00010c200140(param_2);
    uVar1 = param_2;
    func_0x00010c273a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b2440();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061a88c0; end: 1061a88ef; -[SCFeatureCameraModeBase modeEnabledStateChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a88c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274171c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


