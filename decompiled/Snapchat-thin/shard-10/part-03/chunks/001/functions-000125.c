/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f79d54; end: 107f79dd7;  */

void FUN_107f79d54(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 == 0) && (param_1 != 0)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = param_3;
    _objc_release(uVar1);
    lVar2 = param_1 + 0x148;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c110f80();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f79dd8; end: 107f79f27; -[SCPreviewDefaultFilterDataProviderImpl startUpdatingVenueStickerData] */

void FUN_107f79dd8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = *(long *)(param_1 + 0x218);
  _objc_retain(lVar4);
  if (lVar4 == 0) {
    uVar1 = param_1;
    func_0x00010beb4a40();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0xc0);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      lVar4 = 0;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa59e0(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar4);
  return;
}



/* Entry: 107f79f28; end: 107f79fbf;  */

void FUN_107f79f28(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010bfaf9a0(*(undefined8 *)(param_1 + 0x178));
    }
    else {
      func_0x00010bfaf960();
    }
    lVar1 = param_1 + 0x148;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c110fa0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f79fc0; end: 107f7a1d3; -[SCPreviewDefaultFilterDataProviderImpl _updateWeatherData] */

void FUN_107f79fc0(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_3 + 0x218) == 0) {
    return;
  }
  lVar1 = param_3;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc2f8);
  lVar2 = lVar1;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    dVar6 = param_1;
    if ((*(long *)(param_3 + 0x170) != 0) && (*(long *)(param_3 + 0x90) != 0)) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c26f380();
      _objc_release(puVar3);
      dVar6 = 60.0;
      if (param_1 < 60.0) {
        func_0x00010be018c0(param_3);
        goto LAB_107f7a18c;
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_3 + 0x90);
    *(undefined **)(param_3 + 0x90) = puVar3;
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,param_3);
    lVar1 = lVar2;
    func_0x00010bfe63a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x218));
    uVar5 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfab640(dVar6,param_2,lVar4);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
LAB_107f7a18c:
  _objc_release(lVar2);
  return;
}



/* Entry: 107f7a1d4; end: 107f7a1db;  */

void FUN_107f7a1d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a2db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_weatherProvider_112686590);
  return;
}



/* Entry: 107f7a1dc; end: 107f7a237;  */

void FUN_107f7a1dc(long param_1,long param_2,long param_3)

{
  if ((param_2 == 0) && (param_3 != 0)) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee4320();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107f7a238; end: 107f7a337; -[SCPreviewDefaultFilterDataProviderImpl _updateWeatherWithInfo:] */

void FUN_107f7a238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bab50;
  func_0x00010bf51580();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f7a338;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar1);
    puStack_48 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(puStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107f7a338; end: 107f7a373;  */

void FUN_107f7a338(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be018c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f7a374; end: 107f7a3db; -[SCPreviewDefaultFilterDataProviderImpl _didUpdateWeather:] */

void FUN_107f7a374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010c110fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f7a3dc; end: 107f7a4df; -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingWeatherData] */

void FUN_107f7a3dc(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + 0x170) == 0) &&
     ((lVar1 = param_1, func_0x00010beb4a40(), (int)lVar1 == 0 || (*(long *)(param_1 + 0x218) != 0))
     )) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010bdf6c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_1;
    func_0x00010c25ff60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107f7a4e0; end: 107f7a53b;  */

void FUN_107f7a4e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf01f00(param_2);
    func_0x00010bed3000(param_1);
    func_0x00010bee42e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f7a53c; end: 107f7a6a3; -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueInferredData] */

void FUN_107f7a53c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010beb4a40();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x230);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fa5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar3 = lVar4;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010bf183c0(*(undefined8 *)(param_1 + 0x178));
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x238);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c297e20(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bfa7a60(uVar2);
      _objc_release(lVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 107f7a6a4; end: 107f7a78f;  */

void FUN_107f7a6a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      if (param_3 != 0) {
        func_0x00010bfaf940(*(undefined8 *)(param_1 + 0x178));
      }
    }
    else {
      lVar1 = param_2;
      func_0x00010c0d4f60(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c0fd0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee3300(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f7a790; end: 107f7a893; -[SCPreviewDefaultFilterDataProviderImpl _updateVenueStickerWithInferredVenueName:venueId:] */

void FUN_107f7a790(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107f7a894;
    puStack_58 = &UNK_110848218;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f7a894; end: 107f7a8eb;  */

void FUN_107f7a894(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfaf980(*(undefined8 *)(lVar1 + 0x178),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    lVar2 = lVar1 + 0x148;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c110fa0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f7a8ec; end: 107f7ab83; -[SCPreviewDefaultFilterDataProviderImpl _currentLocation] */

void FUN_107f7a8ec(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = *(long *)(param_2 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 0x218) == 0) {
    lVar2 = lVar1;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      lVar3 = lVar2;
      func_0x00010c2709c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar6);
      _objc_release(lVar3);
      _objc_release(puVar6);
      if (param_1 <= 60.0) {
        _objc_retain(lVar2);
        uVar4 = *(undefined8 *)(param_2 + 0x218);
        *(long *)(param_2 + 0x218) = lVar2;
        _objc_release(uVar4);
      }
      _objc_release(lVar2);
    }
    if (*(long *)(param_2 + 0x218) == 0) {
      puVar6 = *(undefined **)(param_2 + 0x138);
      if (puVar6 == (undefined *)0x0) {
        puVar6 = PTR_PTR_1126b7e38;
        func_0x00010c131720();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        uVar4 = *(undefined8 *)(param_2 + 0x138);
        *(undefined **)(param_2 + 0x138) = puVar6;
        _objc_release(uVar4);
        lVar2 = param_2;
        _objc_opt_class(param_2);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_68,param_2);
        uVar4 = *(undefined8 *)(param_2 + 0xc0);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126aebf0;
        _objc_alloc(PTR_PTR_1126aebf0);
        func_0x00010c011b80();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(puVar6);
        func_0x00010c135ca0(0x4024000000000000,uVar4);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(puVar5);
        _objc_release(uVar4);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(lVar2);
      }
      else {
        _objc_retain(puVar6);
      }
      goto LAB_107f7a9ec;
    }
  }
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
LAB_107f7a9ec:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f7ab84; end: 107f7abfb;  */

void FUN_107f7ab84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x138);
    *(undefined8 *)(lVar1 + 0x138) = 0;
    _objc_release(uVar2);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x218);
    *(undefined8 *)(lVar1 + 0x218) = param_2;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f7abfc; end: 107f7acfb; -[SCPreviewDefaultFilterDataProviderImpl _updateAltitude:] */

void FUN_107f7abfc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0.0 || *(long *)(param_2 + 0x188) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined **)(param_2 + 0x60) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126d2768;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010be4f520(param_2);
  func_0x00010bff2c20(param_1,puVar1,param_3,lVar2,1);
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  *(undefined **)(param_2 + 0x188) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126d2768;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  func_0x00010c2807a0(uVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x188);
  func_0x00010c29e660(uVar3);
  func_0x00010bff2c20(param_1,puVar1,param_3,uVar4,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  *(undefined **)(param_2 + 0x188) = puVar1;
  _objc_release(uVar4);
  param_2 = param_2 + 0x148;
  _objc_loadWeakRetained(param_2);
  func_0x00010c110f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f7acfc; end: 107f7ad4b; -[SCPreviewDefaultFilterDataProviderImpl _canUseUco] */

void FUN_107f7acfc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  if ((lVar1 == 0) || (func_0x00010c0c6c60(), lVar1 != 1)) {
    param_1 = param_1 + 0x148;
    _objc_loadWeakRetained(param_1);
    func_0x00010c110e80();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107f7ad4c; end: 107f7ad83; -[SCPreviewDefaultFilterDataProviderImpl _shouldReplaceVenueLensWithFilter] */

long FUN_107f7ad4c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c111060();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107f7ad84; end: 107f7adcf; -[SCPreviewDefaultFilterDataProviderImpl _canUseColorLenses] */

long FUN_107f7ad84(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010bdda240();
  if ((uVar1 & 1) == 0) {
    lVar3 = param_1 + 0x148;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar3;
    func_0x00010c110e40();
    _objc_release(lVar3);
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 107f7add0; end: 107f7ae47; -[SCPreviewDefaultFilterDataProviderImpl _canUseReverseMotionForCurrentVideo] */

long FUN_107f7add0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x148;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x148;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c110e60();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 107f7ae48; end: 107f7aeb7; -[SCPreviewDefaultFilterDataProviderImpl _locationAltitude] */

ulong FUN_107f7ae48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (ulong)puVar3 & 0xffffffff;
}



/* Entry: 107f7aeb8; end: 107f7afa3; -[SCPreviewDefaultFilterDataProviderImpl visualFilterNames] */

void FUN_107f7aeb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f27518;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f27558;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f27538;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar1 + 0x148);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f7afa4; end: 107f7afbb; -[SCPreviewDefaultFilterDataProviderImpl delegate] */

void FUN_107f7afa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f7afbc; end: 107f7afc7; -[SCPreviewDefaultFilterDataProviderImpl setDelegate:] */

void FUN_107f7afbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x148,param_3);
  return;
}



/* Entry: 107f7afc8; end: 107f7afcf; -[SCPreviewDefaultFilterDataProviderImpl timestamp] */

undefined8 FUN_107f7afc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 107f7afd0; end: 107f7afd7; -[SCPreviewDefaultFilterDataProviderImpl weather] */

undefined8 FUN_107f7afd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 107f7afd8; end: 107f7afdf; -[SCPreviewDefaultFilterDataProviderImpl venueInfo] */

undefined8 FUN_107f7afd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 107f7afe0; end: 107f7afe7; -[SCPreviewDefaultFilterDataProviderImpl batteryStatus] */

undefined8 FUN_107f7afe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 107f7afe8; end: 107f7afef; -[SCPreviewDefaultFilterDataProviderImpl altitude] */

undefined8 FUN_107f7afe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 107f7aff0; end: 107f7aff7; -[SCPreviewDefaultFilterDataProviderImpl selectedCommandConfiguration] */

undefined8 FUN_107f7aff0(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 107f7aff8; end: 107f7afff; -[SCPreviewDefaultFilterDataProviderImpl selectedSmartFilterName] */

undefined8 FUN_107f7aff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 107f7b000; end: 107f7b007; -[SCPreviewDefaultFilterDataProviderImpl selectedContextFilterId] */

undefined8 FUN_107f7b000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 107f7b008; end: 107f7b00f; -[SCPreviewDefaultFilterDataProviderImpl selectedSpeedMotionFilterName] */

undefined8 FUN_107f7b008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 107f7b010; end: 107f7b017; -[SCPreviewDefaultFilterDataProviderImpl selectedGeoFilterId] */

undefined8 FUN_107f7b010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 107f7b018; end: 107f7b01f; -[SCPreviewDefaultFilterDataProviderImpl selectedGeoFilterIds] */

undefined8 FUN_107f7b018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 107f7b020; end: 107f7b027; -[SCPreviewDefaultFilterDataProviderImpl isReverseMotionFilterSelected] */

undefined1 FUN_107f7b020(long param_1)

{
  return *(undefined1 *)(param_1 + 0x140);
}



/* Entry: 107f7b028; end: 107f7b02f; -[SCPreviewDefaultFilterDataProviderImpl streakCount] */

undefined8 FUN_107f7b028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 107f7b030; end: 107f7b037; -[SCPreviewDefaultFilterDataProviderImpl isStreakFilterSelected] */

undefined1 FUN_107f7b030(long param_1)

{
  return *(undefined1 *)(param_1 + 0x141);
}



/* Entry: 107f7b038; end: 107f7b03f; -[SCPreviewDefaultFilterDataProviderImpl venueFilterSelector] */

undefined8 FUN_107f7b038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 107f7b040; end: 107f7b047; -[SCPreviewDefaultFilterDataProviderImpl isVenueFilterSelected] */

undefined1 FUN_107f7b040(long param_1)

{
  return *(undefined1 *)(param_1 + 0x142);
}



/* Entry: 107f7b048; end: 107f7b04f; -[SCPreviewDefaultFilterDataProviderImpl geofilterContextBasedSelector] */

undefined8 FUN_107f7b048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 107f7b050; end: 107f7b07f; -[SCPreviewDefaultFilterDataProviderImpl setGeofilterContextBasedSelector:] */

void FUN_107f7b050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b080; end: 107f7b087; -[SCPreviewDefaultFilterDataProviderImpl commonLoggingParamsBuilder] */

undefined8 FUN_107f7b080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 107f7b088; end: 107f7b0b7; -[SCPreviewDefaultFilterDataProviderImpl setCommonLoggingParamsBuilder:] */

void FUN_107f7b088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b0b8; end: 107f7b0bf; -[SCPreviewDefaultFilterDataProviderImpl filterContextData] */

undefined8 FUN_107f7b0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 107f7b0c0; end: 107f7b0ef; -[SCPreviewDefaultFilterDataProviderImpl setFilterContextData:] */

void FUN_107f7b0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b0f0; end: 107f7b0f7; -[SCPreviewDefaultFilterDataProviderImpl carouselGroupConfigParser] */

undefined8 FUN_107f7b0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 107f7b0f8; end: 107f7b0ff; -[SCPreviewDefaultFilterDataProviderImpl friendmojiDataProvider] */

undefined8 FUN_107f7b0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 107f7b100; end: 107f7b12f; -[SCPreviewDefaultFilterDataProviderImpl setFriendmojiDataProvider:] */

void FUN_107f7b100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b130; end: 107f7b137; -[SCPreviewDefaultFilterDataProviderImpl previewLocationInfoServices] */

undefined8 FUN_107f7b130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 107f7b138; end: 107f7b167; -[SCPreviewDefaultFilterDataProviderImpl setPreviewLocationInfoServices:] */

void FUN_107f7b138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b168; end: 107f7b17f; -[SCPreviewDefaultFilterDataProviderImpl smartCarouselFilterArranger] */

void FUN_107f7b168(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f7b180; end: 107f7b18b; -[SCPreviewDefaultFilterDataProviderImpl setSmartCarouselFilterArranger:] */

void FUN_107f7b180(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x200,param_3);
  return;
}



/* Entry: 107f7b18c; end: 107f7b193; -[SCPreviewDefaultFilterDataProviderImpl mixerNamespaceServiceProvider] */

undefined8 FUN_107f7b18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 107f7b194; end: 107f7b1c3; -[SCPreviewDefaultFilterDataProviderImpl setMixerNamespaceServiceProvider:] */

void FUN_107f7b194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b1c4; end: 107f7b1cb; -[SCPreviewDefaultFilterDataProviderImpl mixerCTPFilters] */

undefined8 FUN_107f7b1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



/* Entry: 107f7b1cc; end: 107f7b1fb; -[SCPreviewDefaultFilterDataProviderImpl setMixerCTPFilters:] */

void FUN_107f7b1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b1fc; end: 107f7b203; -[SCPreviewDefaultFilterDataProviderImpl location] */

undefined8 FUN_107f7b1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 107f7b204; end: 107f7b20b; -[SCPreviewDefaultFilterDataProviderImpl bundledLensProvider] */

undefined8 FUN_107f7b204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}



/* Entry: 107f7b20c; end: 107f7b23b; -[SCPreviewDefaultFilterDataProviderImpl setBundledLensProvider:] */

void FUN_107f7b20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b23c; end: 107f7b243; -[SCPreviewDefaultFilterDataProviderImpl ucoStudySettingsProvider] */

undefined8 FUN_107f7b23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 107f7b244; end: 107f7b273; -[SCPreviewDefaultFilterDataProviderImpl setUcoStudySettingsProvider:] */

void FUN_107f7b244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b274; end: 107f7b27b; -[SCPreviewDefaultFilterDataProviderImpl mapPersonLocationsProvider] */

undefined8 FUN_107f7b274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 107f7b27c; end: 107f7b2ab; -[SCPreviewDefaultFilterDataProviderImpl setMapPersonLocationsProvider:] */

void FUN_107f7b27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b2ac; end: 107f7b2b3; -[SCPreviewDefaultFilterDataProviderImpl placeProfileDataFetcher] */

undefined8 FUN_107f7b2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* Entry: 107f7b2b4; end: 107f7b2e3; -[SCPreviewDefaultFilterDataProviderImpl setPlaceProfileDataFetcher:] */

void FUN_107f7b2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b2e4; end: 107f7b2eb; -[SCPreviewDefaultFilterDataProviderImpl configProvider] */

undefined8 FUN_107f7b2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 107f7b2ec; end: 107f7b31b; -[SCPreviewDefaultFilterDataProviderImpl setConfigProvider:] */

void FUN_107f7b2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f7b31c; end: 107f7b667; -[SCPreviewDefaultFilterDataProviderImpl .cxx_destruct] */

void FUN_107f7b31c(long param_1)

{
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_destroyWeak(param_1 + 0x200);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107f7b668; end: 107f7b9f7; -[SCSnapEditorFilterDataServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f7b668(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  puVar2 = PTR_PTR_1126b38a8;
  _objc_alloc(PTR_PTR_1126b38a8);
  func_0x00010c03e620();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112772274;
    _objc_loadWeakRetained(lVar11);
  }
  lVar3 = lVar11;
  func_0x00010c110fe0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar4 = param_1;
  FUN_107f7b9f8();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar4;
  func_0x00010c247520();
  _objc_release(lVar4);
  lVar4 = param_1;
  FUN_107f7b9f8();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf30e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c4a98;
    _objc_alloc();
    func_0x00010c026c40();
  }
  bVar1 = lVar11 != 0xc;
  if (bVar1) {
    lVar11 = 8;
  }
  uVar9 = 7;
  if (bVar1) {
    uVar9 = 4;
  }
  lVar4 = param_1;
  FUN_107f7b9f8();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bfc5900(lVar3,param_2,uVar9,lVar11,0,0,0,puVar2,puVar10,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  if (param_1 == 0) {
    uVar9 = 0;
    func_0x00010c25df60(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b1e0(lVar7,param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(0);
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112772270;
    _objc_loadWeakRetained(lVar11);
    lVar4 = lVar11;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b1e0(lVar7,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar11);
    lVar11 = param_1 + _DAT_112772278;
    _objc_loadWeakRetained(lVar11);
  }
  lVar4 = lVar11;
  func_0x00010c0b97a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c23c0(lVar7,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar11);
  if (param_1 == 0) {
    uVar9 = 0;
    func_0x00010c0fd400(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc700(lVar7,param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(0);
    param_1 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11277227c;
    _objc_loadWeakRetained(lVar11);
    lVar4 = lVar11;
    func_0x00010c0fd400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc700(lVar7,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar11);
    param_1 = param_1 + _DAT_112772280;
    _objc_loadWeakRetained(param_1);
  }
  lVar11 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1808a0(lVar7,param_2,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  puVar8 = PTR_PTR_1126d8868;
  _objc_alloc(PTR_PTR_1126d8868);
  func_0x00010c013040();
  _objc_release(lVar5);
  _objc_release(puVar10);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107f7b9f8; end: 107f7ba1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f7b9f8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11277226c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f7ba1c; end: 107f7bacb; -[SCSnapEditorFilterDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f7ba1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112772280);
  _objc_destroyWeak(param_1 + _DAT_11277227c);
  _objc_destroyWeak(param_1 + _DAT_112772278);
  _objc_destroyWeak(param_1 + _DAT_112772274);
  _objc_destroyWeak(param_1 + _DAT_112772270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277226c);
  return;
}



/* Entry: 107f7bacc; end: 107f7bafb;  */

void FUN_107f7bacc(int param_1)

{
  if (param_1 - 1U < 4) {
    func_0x000108edf4d4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f7bafc; end: 107f7bbdb;  */

void FUN_107f7bafc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107f7bbdc;
  uStack_30 = 0x107f7bbec;
  uStack_28 = 0;
  func_0x00010c0bd220(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f7bbdc; end: 107f7bbf3;  */

void FUN_107f7bbdc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f7bbf4; end: 107f7be07;  */

void FUN_107f7bbf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd6be0();
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96ee0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0x17) {
      uVar1 = param_2;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c119e40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf97a60();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar4 == 1) {
        uVar1 = param_2;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c119e40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf412c0();
        func_0x000107f7ba84();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(lVar6 + 0x28) = uVar4;
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      uVar1 = param_2;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c119e40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf97a60();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar4 == 2) {
        uVar1 = param_2;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c119e40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0d12c0();
        FUN_107f7bacc();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(lVar6 + 0x28) = uVar4;
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f7be08; end: 107f7be9b; +[SCRequestContextualInfo contextualInfoWithMediaTypeContext:cameraContext:snapSource:preCaptureLensId:] */

void FUN_107f7be08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_6);
  func_0x00010bde85a0(param_1,param_2,param_3);
  func_0x00010bdd95a0(param_1,param_2,param_4);
  puVar1 = PTR_PTR_1126d8860;
  _objc_alloc(PTR_PTR_1126d8860);
  func_0x00010c048a60();
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f7be9c; end: 107f7bf2f; +[SCRequestContextualInfo contextualInfoWithPreviewMediaType:previewCameraType:snapSource:preCaptureLensId:] */

void FUN_107f7be9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_6);
  func_0x00010bde8580(param_1,param_2,param_3);
  func_0x00010bdd9580(param_1,param_2,param_4);
  puVar1 = PTR_PTR_1126d8860;
  _objc_alloc(PTR_PTR_1126d8860);
  func_0x00010c048a60();
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f7bf30; end: 107f7bf53; +[SCRequestContextualInfo _contextSnapTypeFromType:] */

undefined8 FUN_107f7bf30(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10deeb710 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 107f7bf54; end: 107f7bf63; +[SCRequestContextualInfo _cameraTypeFromContextType:] */

long FUN_107f7bf54(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (2 < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 107f7bf64; end: 107f7bf73; +[SCRequestContextualInfo _cameraTypeFromContextCameraType:] */

long FUN_107f7bf64(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (2 < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 107f7bf74; end: 107f7bf87; +[SCRequestContextualInfo _contextSnapTypeFromMediaType:] */

ulong FUN_107f7bf74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 != 2) {
    param_3 = (ulong)(param_3 == 1);
  }
  return param_3;
}



/* Entry: 107f7bf88; end: 107f7bfdb; +[DancingGhostImageView animationImages] */

void FUN_107f7bf88(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728968 != -1) {
    func_0x00010002a2fc(0x113728968,&PTR___NSConcreteGlobalBlock_110a156d0);
  }
  uVar1 = uRam0000000113728960;
  _objc_retain(uRam0000000113728960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f7bfdc; end: 107f7c397;  */

void FUN_107f7bfdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9858);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_118 = puVar2;
  puStack_110 = puVar2;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9878);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_120 = puVar3;
  puStack_108 = puVar3;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9898);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_128 = puVar2;
  puStack_100 = puVar2;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec98b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_130 = puVar3;
  puStack_f8 = puVar3;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec98d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_138 = puVar2;
  puStack_f0 = puVar2;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec98f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_140 = puVar3;
  puStack_e8 = puVar3;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9918);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_148 = puVar2;
  puStack_e0 = puVar2;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_150 = puVar3;
  puStack_d8 = puVar3;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9958);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_158 = puVar2;
  puStack_d0 = puVar2;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9978);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_160 = puVar3;
  puStack_c8 = puVar3;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9998);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_c0 = puVar2;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec99b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_b8 = puVar3;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec99d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_b0 = puVar4;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec99f8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_a8 = puVar5;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9a18);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_a0 = puVar6;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9a38);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_98 = puVar7;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9a58);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_90 = puVar8;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9a78);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_88 = puVar9;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9a98);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_80 = puVar10;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ec9ab8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_110,0x14);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113728960;
  puRam0000000113728960 = puVar12;
  _objc_release(uVar1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  puVar6 = puStack_118;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_107f7c398;
  puVar7 = puVar6;
  puStack_190 = puVar5;
  puStack_188 = puVar4;
  puStack_180 = puVar3;
  puStack_178 = puVar2;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_opt_class();
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  _objc_opt_class(puVar6);
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x107f7c478;
  puStack_1b0 = &UNK_110a156f0;
  _objc_retain(puVar3);
  puStack_1a8 = puVar3;
  puStack_1a0 = puVar6;
  puStack_198 = puVar2;
  func_0x00010bf97e80(puVar4,param_2,&puStack_1c8);
  _objc_release(puVar4);
  _objc_release(puStack_1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f7c398; end: 107f7c4d7; +[DancingGhostImageView generateRainbowColors] */

void FUN_107f7c398(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107f7c478;
  puStack_50 = &UNK_110a156f0;
  _objc_retain(puVar3);
  puStack_48 = puVar3;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x00010bf97e80(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f7c4d8; end: 107f7c82f; +[DancingGhostImageView rainbowColorOfProgress:] */

/* WARNING: Possible PIC construction at 0x000107f7c538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107f7c568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107f7c594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107f7c5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107f7c5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f7c5c4) */
/* WARNING: Removing unreachable block (ram,0x000107f7c598) */
/* WARNING: Removing unreachable block (ram,0x000107f7c56c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c53c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c5f0) */
/* WARNING: Removing unreachable block (ram,0x000107f7c628) */
/* WARNING: Removing unreachable block (ram,0x000107f7c62c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c644) */
/* WARNING: Removing unreachable block (ram,0x000107f7c648) */
/* WARNING: Removing unreachable block (ram,0x000107f7c664) */
/* WARNING: Removing unreachable block (ram,0x000107f7c66c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c670) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6a4) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6ac) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6b0) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6e4) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6f0) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6f4) */
/* WARNING: Removing unreachable block (ram,0x000107f7c724) */
/* WARNING: Removing unreachable block (ram,0x000107f7c738) */
/* WARNING: Removing unreachable block (ram,0x000107f7c73c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c760) */
/* WARNING: Removing unreachable block (ram,0x000107f7c740) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6f8) */
/* WARNING: Removing unreachable block (ram,0x000107f7c6b4) */
/* WARNING: Removing unreachable block (ram,0x000107f7c674) */
/* WARNING: Removing unreachable block (ram,0x000107f7c77c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c64c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c630) */
/* WARNING: Removing unreachable block (ram,0x000107f7c65c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c7bc) */
/* WARNING: Removing unreachable block (ram,0x000107f7c82c) */
/* WARNING: Removing unreachable block (ram,0x000107f7c804) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_107f7c4d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd0a3d70a3d70a4,0x3fdccccccccccccd,0x3ff0000000000000,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 107f7c830; end: 107f7c8df; +[DancingGhostImageView interpolateOriginalColor:withNewColor:progress:] */

void FUN_107f7c830(double param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  double *param_5)

{
  double *pdVar1;
  double dVar2;
  
  _objc_retainAutorelease(param_4);
  _objc_retain(param_5);
  func_0x00010bdc0fe0();
  _CGColorGetComponents();
  pdVar1 = param_5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _objc_release(param_5);
  _CGColorGetComponents();
  dVar2 = 1.0 - param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * *pdVar1 + *param_4 * dVar2,param_1 * pdVar1[1] + param_4[1] * dVar2,
             param_1 * pdVar1[2] + param_4[2] * dVar2,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 107f7c8e0; end: 107f7c95f; -[DancingGhostImageView initWithFrame:] */

undefined1 * FUN_107f7c8e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbdf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1681a0(0x4000000000000000,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f7c960; end: 107f7c9c7; -[DancingGhostImageView initAnimationImages] */

void FUN_107f7c960(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168240(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f7c9c8; end: 107f7ca6b; -[SCFeatureDualSmartSwipeFilters initWithImageFilters:videoFilters:] */

undefined1 *
FUN_107f7c9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbe00;
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



/* Entry: 107f7ca6c; end: 107f7ca73; -[SCFeatureDualSmartSwipeFilters responderChainPriority] */

undefined8 FUN_107f7ca6c(void)

{
  return 1;
}



/* Entry: 107f7ca74; end: 107f7ca7b; -[SCFeatureDualSmartSwipeFilters imagePlayback] */

void FUN_107f7ca74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_imagePlayback_1125d7ad8)
  ;
  return;
}



/* Entry: 107f7ca7c; end: 107f7ca83; -[SCFeatureDualSmartSwipeFilters videoPlayback] */

void FUN_107f7ca7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_videoPlayback_112684480);
  return;
}



/* Entry: 107f7ca84; end: 107f7ca8b; -[SCFeatureDualSmartSwipeFilters previewView] */

void FUN_107f7ca84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1122b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_previewView_1126222c8);
  return;
}



/* Entry: 107f7ca8c; end: 107f7cadb; -[SCFeatureDualSmartSwipeFilters configureWithView:] */

void FUN_107f7ca8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf47d20(uVar1,param_2,param_3);
  func_0x00010bf47d20(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f7cadc; end: 107f7cae3; -[SCFeatureDualSmartSwipeFilters delegate] */

void FUN_107f7cadc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_delegate_1125b85b0);
  return;
}



/* Entry: 107f7cae4; end: 107f7cb33; -[SCFeatureDualSmartSwipeFilters setDelegate:] */

void FUN_107f7cae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c18b5e0(uVar1,param_2,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f7cb34; end: 107f7cb3b; -[SCFeatureDualSmartSwipeFilters trackingObjectContainerView] */

void FUN_107f7cb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_trackingObjectContainerView_11267be08);
  return;
}


